#ifndef BEAGLE_STRUCTPRINTER_HH
#define BEAGLE_STRUCTPRINTER_HH


#include <beagle-parser/CodePrinter.hh>
#include <sstream>
#include <iostream>


namespace beagle {


class StructPrinter : public CodePrinter
{

    public:
        StructPrinter(
            int tabSize = 4 );

        StructPrinter(
            CodePrinter &parent,
            int tabSize = 4 );

        void open(
            int modifiers,
            const std::string & name );

        void open(
            const std::string & name );

        void close();

        void addPrimitive(
            int modifiers,
            const std::string & type,
            const std::string & name );

        void addStruct(
            int modifiers,
            const std::string & type,
            const std::string & name );
};


} // namespace beagle

#endif // BEAGLE_STRUCTPRINTER_HH
