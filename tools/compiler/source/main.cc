#include <iostream>
#include <fstream>
#include <cstdlib>
#include <getopt.h>
#include <beagle-compiler/Node.hh>
#include <beagle-compiler/Compiler.hh>


using namespace std;
using namespace beagle::compiler;


string outputFileName;
bool useLexer = false;


class CustomListener : public CompilerListener
{
    public:
        CustomListener()
        {
            // nothing to do
        }

        ~CustomListener()
        {
            // nothing to do
        }

        bool onError(
            const std::string &fileName,
            uint32_t line,
            uint32_t column,
            const std::string &message ) const
        {
            cerr << fileName << ':' << line << ':' << column << ": error: " << message << endl;
            return true;
        }
};


void main_usage()
{
    std::cerr << "Usage: beagle FILE1 [ FILE2 ... ] -o OUTPUT_FILE" << std::endl;
    std::cerr << "       beagle FILE1 [ FILE2 ... ] -l"  << std::endl  << std::endl;
    exit(1);
}


void main_parseOptions(
    int argc,
    char **argv,
    Compiler &compiler )
{
    int opt;

    while ( (opt = getopt(argc, argv, "o:")) != -1)
    {
        switch (opt)
        {
            case 'o':
                outputFileName = string(optarg);
                break;
            case 'l':
                useLexer = true;
                break;
            default: /* '?' */
                main_usage();
        }
    }

    for (int i = optind; i < argc; ++i)
        compiler.addCompilationUnit(argv[i]);

    if (outputFileName.empty()) outputFileName = "./output.c";
}


int main( int argc, char **argv )
{
    CustomListener listener;
    Compiler compiler(listener);
	main_parseOptions(argc, argv, compiler);

    if (useLexer)
    {
        //parser.tokens(*in, argv[1]);
        //return 0;
    }

	if (compiler.compile())
    {
        // print the trees
        for (int i = 0; true; ++i)
        {
            Node *root = compiler.getTree(i);
            if (root == NULL) break;
            root->print(std::cout, Compiler::getTokenName);
        }

        std::ofstream out(outputFileName.c_str());
        out << compiler.getCode();
        out.close();

        return 0;
    }

    return 1;
}
