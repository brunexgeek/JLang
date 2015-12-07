/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         beagle_parse
#define yylex           beagle_lex
#define yyerror         beagle_error
#define yydebug         beagle_debug
#define yynerrs         beagle_nerrs


/* Copy the first part of user declarations.  */

#line 73 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "beagle.y.hh".  */
#ifndef YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED
# define YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int beagle_debug;
#endif
/* "%code requires" blocks.  */
#line 15 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */



#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <beagle-parser/Node.hh>
#include <beagle-parser/Parser.hh>


/*
 * The parser need to know about the 'yyscan_t' type,
 * but the generated header by Flex don't provide this information.
 */
typedef void *yyscan_t;


typedef struct
{
    yyscan_t scanner;

    std::vector<beagle::Node*> stack;

    const char *fileName;

    const char *rule;

    beagle::Parser *parser;

} parser_context_t;


/**
 * Get the current column in the lexer scanner.
 *
 * For some reason this prototype is not generated in the Flex
 * header file, so we include it here.
 */
int beagle_get_column  (yyscan_t yyscanner);


#line 146 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_ABSTRACT = 258,
    TOK_BOOLEAN = 259,
    TOK_BREAK = 260,
    TOK_CASE = 261,
    TOK_CATCH = 262,
    TOK_CHAR = 263,
    TOK_CLASS = 264,
    TOK_CONST = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_EXTENDS = 270,
    TOK_FINAL = 271,
    TOK_FINALLY = 272,
    TOK_FLOAT = 273,
    TOK_FOR = 274,
    TOK_GOTO = 275,
    TOK_IF = 276,
    TOK_IMPLEMENTS = 277,
    TOK_IMPORT = 278,
    TOK_INSTANCEOF = 279,
    TOK_INTERFACE = 280,
    TOK_LONG = 281,
    TOK_NATIVE = 282,
    TOK_NEW = 283,
    TOK_PACKAGE = 284,
    TOK_PRIVATE = 285,
    TOK_PROTECTED = 286,
    TOK_PUBLIC = 287,
    TOK_RETURN = 288,
    TOK_SUSPEND = 289,
    TOK_STATIC = 290,
    TOK_SUPER = 291,
    TOK_SWITCH = 292,
    TOK_READLOCK = 293,
    TOK_WRITELOCK = 294,
    TOK_THIS = 295,
    TOK_THROW = 296,
    TOK_THROWS = 297,
    TOK_VOID = 298,
    TOK_VOLATILE = 299,
    TOK_WHILE = 300,
    TOK_NAME = 301,
    TOK_QNAME = 302,
    TOK_CONTINUE = 303,
    TOK_TRANSIENT = 304,
    TOK_TRY = 305,
    TOK_NULLLITERAL = 306,
    TOK_BOOLLITERAL = 307,
    TOK_INTLITERAL = 308,
    TOK_CHARLITERAL = 309,
    TOK_FLOATLITERAL = 310,
    TOK_STRINGLITERAL = 311,
    TOK_UINT8 = 312,
    TOK_UINT16 = 313,
    TOK_UINT32 = 314,
    TOK_UINT64 = 315,
    TOK_INT8 = 316,
    TOK_INT16 = 317,
    TOK_INT32 = 318,
    TOK_INT64 = 319,
    TOK_LP = 320,
    TOK_RP = 321,
    TOK_LC = 322,
    TOK_RC = 323,
    TOK_LB = 324,
    TOK_RB = 325,
    TOK_SM = 326,
    TOK_CM = 327,
    TOK_DOT = 328,
    TOK_ASN = 329,
    TOK_LT = 330,
    TOK_GT = 331,
    TOK_BANG = 332,
    TOK_TILDE = 333,
    TOK_QUEST = 334,
    TOK_COLON = 335,
    TOK_EQ = 336,
    TOK_NE = 337,
    TOK_LE = 338,
    TOK_GE = 339,
    TOK_ANDAND = 340,
    TOK_OROR = 341,
    TOK_INC = 342,
    TOK_DEC = 343,
    TOK_PLUS = 344,
    TOK_MINUS = 345,
    TOK_MUL = 346,
    TOK_DIV = 347,
    TOK_AND = 348,
    TOK_OR = 349,
    TOK_CARET = 350,
    TOK_MOD = 351,
    TOK_SHL = 352,
    TOK_SHR = 353,
    TOK_PLASN = 354,
    TOK_MIASN = 355,
    TOK_MUASN = 356,
    TOK_DIASN = 357,
    TOK_ANDASN = 358,
    TOK_ORASN = 359,
    TOK_CARETASN = 360,
    TOK_SLASN = 361,
    TOK_SRASN = 362,
    TOK_MODASN = 363,
    TOK_BAD_TOKEN = 364,
    TOK_EOL = 365,
    TOK_AT = 366,
    TOK_VARARG = 367,
    TOK_INDENT = 368,
    TOK_DEDENT = 369,
    TOK_IN = 370,
    TOK_RANGE = 371,
    TOK_PASS = 372,
    TOK_TYPE_CLASS = 373,
    TOK_TYPE_ARRAY = 374,
    TOK_INTERFACES = 375,
    TOK_NULL = 376,
    TOK_BODY = 377,
    TOK_FIELD = 378,
    TOK_METHOD = 379,
    TOK_CONSTRUCTOR = 380,
    TOK_LIST = 381,
    TOK_IMPORTS = 382,
    TOK_VARIABLE = 383,
    TOK_VARIABLES = 384,
    TOK_MODIFIERS = 385,
    TOK_UNIT = 386,
    TOK_TYPE = 387,
    TOK_TYPES = 388,
    TOK_MEMBER = 389,
    TOK_IMPORT_ALL = 390,
    TOK_STATIC_INIT = 391,
    TOK_PARAMETER = 392,
    TOK_PARAMETERS = 393,
    TOK_BLOCK = 394,
    TOK_CALL = 395,
    TOK_ACCESS_FIELD = 396,
    TOK_CAST = 397,
    TOK_ACCESS_ARRAY = 398,
    TOK_FOR_EACH = 399,
    TOK_GROUP = 400,
    TOK_ANNOTATION = 401,
    TOK_NEW_ARRAY = 402,
    TOK_ARRAY = 403,
    TOK_ANNOTATIONS = 404,
    TOK_ARGUMENTS = 405
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 176 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 313 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 327 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 58 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


#include <iostream>
#include "beagle.l.hh"
#include <beagle-parser/Node.hh>


static void beagle_error(parser_context_t *context, const char *msg)
{
    printf ("%s:%d:%d: error: %s - %s\n",
        context->fileName,
        beagle_get_lineno(context->scanner),
        beagle_get_column(context->scanner),
        context->rule,
        msg);
    return;
}


static beagle::Node *beagle_pop( std::vector<beagle::Node*> &stack )
{
    if (stack.size() == 0) return NULL;
    beagle::Node *node = stack[ stack.size() - 1 ];
    stack.pop_back();
    return node;
}


static beagle::Node* beagle_combine( std::vector<beagle::Node*> &stack, int tok, int n )
{
    beagle::Node *temp;

    if ((int) stack.size() < n) return NULL;

    if (tok > 0 )
        temp = new beagle::Node(tok, NULL);
    else
    {
        if ((int) stack.size() <= n) return NULL;
        temp = stack[ stack.size() - 1 - n ];
    }
    for (size_t i = stack.size() - n; i < (int) stack.size(); ++i)
    {
        //std::cout << temp->getValue() << ": adding child " << p->getValue() << std::endl;;
        temp->addChild( *stack[i] );
    }
    for (int i = 0; i < n; ++i)
        stack.pop_back();

    if (tok > 0) stack.push_back(temp);
    return temp;
}


static void beagle_printStack( std::vector<beagle::Node*> &stack, beagle::Parser *parser )
{
    std::cout << "Stack:" << std::endl;
    for (int i = 0; i < (int) stack.size(); ++i)
        stack[i]->print(std::cout, beagle::Parser::name, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value )
{
    //std::cout << "PUSH " << value << std::endl;
    context->stack.push_back( new beagle::Node(token,value) );
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node *node )
{
    context->stack.push_back(node);
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node &node )
{
	beagle_push(context, &node);
}


#define scanner              parserContext->scanner
#define PUSH(token,value)    beagle_push( parserContext, (token), (value) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 428 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1082

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  557

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   405

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   405,   405,   410,   412,   414,   416,   418,   420,   425,
     426,   430,   431,   436,   437,   441,   443,   445,   447,   449,
     451,   453,   455,   457,   462,   464,   469,   470,   474,   482,
     486,   490,   494,   498,   506,   507,   511,   516,   535,   536,
     541,   543,   548,   552,   553,   557,   562,   569,   570,   574,
     575,   579,   581,   586,   588,   596,   598,   603,   605,   607,
     609,   611,   613,   615,   617,   619,   621,   623,   628,   633,
     634,   638,   639,   643,   644,   649,   653,   657,   659,   664,
     668,   669,   673,   675,   680,   681,   682,   686,   687,   688,
     692,   697,   699,   704,   709,   714,   716,   720,   721,   725,
     731,   737,   739,   745,   746,   751,   752,   755,   757,   762,
     764,   773,   778,   780,   785,   789,   794,   799,   800,   804,
     805,   809,   810,   814,   819,   821,   826,   827,   831,   836,
     838,   843,   847,   848,   852,   854,   859,   860,   864,   868,
     876,   880,   881,   885,   887,   892,   896,   898,   903,   904,
     908,   912,   917,   918,   919,   920,   921,   922,   923,   927,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   937,
     941,   946,   950,   951,   952,   953,   954,   955,   956,   960,
     968,   977,   982,   987,   988,   992,   996,   998,  1003,  1008,
    1010,  1015,  1017,  1025,  1031,  1036,  1037,  1041,  1042,  1046,
    1047,  1051,  1056,  1058,  1063,  1068,  1069,  1073,  1077,  1079,
    1084,  1089,  1097,  1102,  1110,  1116,  1121,  1123,  1128,  1129,
    1133,  1138,  1143,  1145,  1150,  1155,  1160,  1161,  1165,  1166,
    1168,  1169,  1170,  1171,  1172,  1176,  1181,  1183,  1188,  1189,
    1193,  1227,  1232,  1234,  1239,  1244,  1249,  1255,  1257,  1265,
    1277,  1279,  1301,  1303,  1308,  1309,  1310,  1311,  1315,  1320,
    1325,  1326,  1327,  1329,  1331,  1335,  1340,  1345,  1346,  1348,
    1350,  1355,  1375,  1377,  1394,  1395,  1397,  1399,  1404,  1405,
    1407,  1412,  1413,  1415,  1420,  1421,  1423,  1425,  1427,  1429,
    1434,  1435,  1437,  1442,  1443,  1448,  1449,  1454,  1455,  1460,
    1461,  1466,  1467,  1472,  1473,  1478,  1479,  1483,  1503,  1504,
    1505,  1509,  1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,
    1527,  1529,  1534,  1538,  1542,  1546
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ABSTRACT", "TOK_BOOLEAN",
  "TOK_BREAK", "TOK_CASE", "TOK_CATCH", "TOK_CHAR", "TOK_CLASS",
  "TOK_CONST", "TOK_DEFAULT", "TOK_DO", "TOK_DOUBLE", "TOK_ELSE",
  "TOK_EXTENDS", "TOK_FINAL", "TOK_FINALLY", "TOK_FLOAT", "TOK_FOR",
  "TOK_GOTO", "TOK_IF", "TOK_IMPLEMENTS", "TOK_IMPORT", "TOK_INSTANCEOF",
  "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW", "TOK_PACKAGE",
  "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC", "TOK_RETURN",
  "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH", "TOK_READLOCK",
  "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_THROWS", "TOK_VOID",
  "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_QNAME", "TOK_CONTINUE",
  "TOK_TRANSIENT", "TOK_TRY", "TOK_NULLLITERAL", "TOK_BOOLLITERAL",
  "TOK_INTLITERAL", "TOK_CHARLITERAL", "TOK_FLOATLITERAL",
  "TOK_STRINGLITERAL", "TOK_UINT8", "TOK_UINT16", "TOK_UINT32",
  "TOK_UINT64", "TOK_INT8", "TOK_INT16", "TOK_INT32", "TOK_INT64",
  "TOK_LP", "TOK_RP", "TOK_LC", "TOK_RC", "TOK_LB", "TOK_RB", "TOK_SM",
  "TOK_CM", "TOK_DOT", "TOK_ASN", "TOK_LT", "TOK_GT", "TOK_BANG",
  "TOK_TILDE", "TOK_QUEST", "TOK_COLON", "TOK_EQ", "TOK_NE", "TOK_LE",
  "TOK_GE", "TOK_ANDAND", "TOK_OROR", "TOK_INC", "TOK_DEC", "TOK_PLUS",
  "TOK_MINUS", "TOK_MUL", "TOK_DIV", "TOK_AND", "TOK_OR", "TOK_CARET",
  "TOK_MOD", "TOK_SHL", "TOK_SHR", "TOK_PLASN", "TOK_MIASN", "TOK_MUASN",
  "TOK_DIASN", "TOK_ANDASN", "TOK_ORASN", "TOK_CARETASN", "TOK_SLASN",
  "TOK_SRASN", "TOK_MODASN", "TOK_BAD_TOKEN", "TOK_EOL", "TOK_AT",
  "TOK_VARARG", "TOK_INDENT", "TOK_DEDENT", "TOK_IN", "TOK_RANGE",
  "TOK_PASS", "TOK_TYPE_CLASS", "TOK_TYPE_ARRAY", "TOK_INTERFACES",
  "TOK_NULL", "TOK_BODY", "TOK_FIELD", "TOK_METHOD", "TOK_CONSTRUCTOR",
  "TOK_LIST", "TOK_IMPORTS", "TOK_VARIABLE", "TOK_VARIABLES",
  "TOK_MODIFIERS", "TOK_UNIT", "TOK_TYPE", "TOK_TYPES", "TOK_MEMBER",
  "TOK_IMPORT_ALL", "TOK_STATIC_INIT", "TOK_PARAMETER", "TOK_PARAMETERS",
  "TOK_BLOCK", "TOK_CALL", "TOK_ACCESS_FIELD", "TOK_CAST",
  "TOK_ACCESS_ARRAY", "TOK_FOR_EACH", "TOK_GROUP", "TOK_ANNOTATION",
  "TOK_NEW_ARRAY", "TOK_ARRAY", "TOK_ANNOTATIONS", "TOK_ARGUMENTS",
  "$accept", "CompilationUnit", "Literal", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "InterfaceType", "ArrayType",
  "Name", "SimpleName", "QualifiedName", "ImportDeclarationsOpt",
  "ImportDeclarations", "PackageDeclaration", "ImportDeclaration",
  "SingleTypeImportDeclaration", "TypeImportOnDemandDeclaration",
  "TypeDeclaration", "AnnotationDeclarationsOpt", "AnnotationDeclarations",
  "AnnotationDeclaration", "Modifiers", "Modifier", "ClassDeclaration",
  "ModifiersOpt", "SuperOpt", "InterfacesOpt", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarationsOpt",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "VoidType", "MethodHeader", "ThrowsOpt",
  "FormalParameterListOpt", "FormalParameterList", "FormalParameter",
  "Throws", "ClassTypeList", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ExplicitConstructorInvocationOpt",
  "BlockStatementsOpt", "ArgumentListOpt", "ConstructorBody",
  "ExplicitConstructorInvocation", "ExtendsInterfacesOpt",
  "InterfaceDeclaration", "ExtendsInterfaces", "InterfaceBody",
  "InterfaceMemberDeclarationsOpt", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration",
  "AbstractMethodDeclaration", "ArrayInitializer",
  "VariableInitializersOpt", "VariableInitializers", "Block",
  "BlockStatements", "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenInlineStatement", "IfThenElseStatement", "SwitchStatement",
  "SwitchBlockStatementGroupsOpt", "SwitchBlock",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabels", "SwitchLabel", "WhileStatement", "DoStatement",
  "ForInitOpt", "ExpressionOpt", "ForUpdateOpt", "ForStatement",
  "ForEachStatement", "Range", "ForInit", "ForUpdate",
  "StatementExpressionList", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "LockStatement", "CatchesOpt",
  "TryStatement", "Catches", "CatchClause", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression", "ArgumentList",
  "DimsOpt", "ArrayCreationExpression", "DimExprs", "DimExpr", "Dims",
  "FieldAccess", "MethodInvocation", "ArrayAccess", "PostFixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", "ConstantExpression",
  "BeginBlock", "EndBlock", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405
};
# endif

#define YYPACT_NINF -391

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-391)))

#define YYTABLE_NINF -311

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    62,   118,   140,  -391,   -36,  -391,  -391,  -391,    62,
      60,   140,  -391,  -391,  -391,   133,  -391,     0,    62,  -391,
     650,    60,  -391,  -391,  -391,  -391,  -391,   -39,  -391,   -21,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,   650,  -391,     5,  -391,    76,   799,  -391,  -391,    62,
      62,  -391,   886,   115,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,   301,   799,   799,   799,   799,   799,   799,  -391,   939,
     162,   126,   164,  -391,   178,  -391,   927,  -391,   962,   -45,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,    73,   105,   124,
       4,   179,   119,   157,   171,   173,    19,  -391,  -391,  -391,
     974,  -391,   241,   262,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,   210,  -391,  -391,  -391,
     210,   218,   219,    62,   222,   950,   231,   -24,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,   799,   799,   188,    62,
     799,   799,  -391,  -391,   799,   799,   799,   799,   799,   799,
     799,   886,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,   799,   799,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,   799,    62,   277,  -391,    62,
     196,   235,   799,   210,  -391,   239,   799,   245,   242,   249,
     247,   689,    24,   944,   252,   250,  -391,   256,   254,  -391,
    -391,  -391,  -391,    73,    73,   105,   105,   253,  -391,  -391,
     271,    46,   124,   124,   124,   124,     4,     4,   179,   119,
     157,   171,   263,   173,  -391,  -391,  -391,    62,   238,  -391,
    -391,  -391,   232,    62,   279,  -391,   689,  -391,   284,   799,
    -391,   799,   297,   944,  -391,  -391,  -391,   799,  -391,   298,
     299,   302,   799,  -391,   309,   232,  -391,  -391,    95,  -391,
    -391,  -391,   307,  -391,  -391,  -391,   308,  -391,  -391,  -391,
    -391,    62,  -391,    99,   650,  -391,   272,   270,   109,  -391,
    -391,  -391,  -391,  -391,  -391,   890,   270,   143,  -391,  -391,
    -391,  -391,   273,  -391,  -391,   852,  -391,  -391,  -391,  -391,
     232,   852,  -391,  -391,  -391,   232,  -391,   340,   253,  -391,
      62,  -391,   541,   322,  -391,  -391,   -29,   327,   -34,  -391,
      42,   328,   -40,   285,   329,   331,   799,   332,   333,   334,
     799,   337,   -38,   294,   799,   310,   361,   794,   270,  -391,
     541,  -391,  -391,   321,  -391,  -391,  -391,  -391,   323,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,   142,   175,   -45,   181,   194,  -391,  -391,
    -391,   445,   445,   361,  -391,   341,   729,   445,   324,  -391,
     232,   651,   799,   326,  -391,   799,   799,   799,   330,   799,
     342,  -391,   232,   346,  -391,  -391,   365,   759,  -391,  -391,
    -391,  -391,   886,   361,   372,   367,  -391,   385,  -391,  -391,
     729,  -391,  -391,  -391,   388,  -391,   411,   340,  -391,  -391,
     386,  -391,   387,   395,  -391,   398,   399,   400,  -391,   401,
    -391,   462,  -391,   361,   402,   428,   445,   428,  -391,   406,
     403,   428,   412,   366,   799,   923,   432,   370,   379,   382,
     383,   417,   459,    41,  -391,   402,    62,   384,  -391,  -391,
    -391,  -391,   729,  -391,   799,   584,   419,  -391,   232,   389,
     232,   232,   232,   232,   445,   390,  -391,  -391,  -391,   424,
     232,  -391,   435,   433,   447,   448,   923,   497,  -391,  -391,
     123,  -391,  -391,  -391,   449,   232,    62,  -391,   136,   407,
     799,   413,   421,   450,  -391,   387,   434,   799,   442,   270,
     123,  -391,    18,  -391,   437,  -391,  -391,   483,   485,   541,
    -391,  -391,   479,   232,   232,   446,   232,  -391,   472,   451,
    -391,  -391,  -391,  -391,   232,   799,   799,   270,   799,  -391,
    -391,   232,  -391,   453,  -391,  -391,   489,   492,  -391,   498,
    -391,  -391,   455,   456,  -391,  -391,  -391
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,    39,    36,     0,    34,    35,     1,     0,
      50,    38,    40,    43,    44,     0,    42,     0,     0,     2,
      70,    49,    51,    47,    48,    41,    37,     0,    45,     0,
      61,    62,    63,    59,    58,    57,    60,    64,    65,    67,
      66,    69,    55,     0,    52,     0,   122,    54,    56,     0,
       0,    46,     0,     0,   229,     8,     5,     3,     7,     4,
       6,     0,     0,     0,     0,     0,     0,     0,   228,   255,
       0,   254,   226,   231,   121,   227,   232,   233,   234,   267,
     256,   257,   274,   260,   261,   264,   270,   278,   281,   284,
     290,   293,   295,   297,   299,   301,   303,   305,   322,   306,
       0,   236,    72,   127,    12,    23,    25,    24,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    11,    13,    14,
      29,     0,    28,     0,   239,   255,     0,   255,   232,   234,
     269,   268,   265,   266,   262,   263,   122,     0,     0,     0,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,   315,   316,   312,   313,   319,
     321,   320,   317,   318,   314,     0,     0,    74,    71,     0,
       0,   126,     0,   240,   242,   239,   122,   248,     0,     0,
     238,     0,     0,   230,     0,     0,    53,   247,     0,   237,
     275,   276,   277,   279,   280,   282,   283,     0,   289,    26,
      27,    28,   285,   286,   287,   288,   291,   292,   294,   296,
     298,   300,     0,   302,   307,    29,    75,     0,     0,    73,
      30,   129,     0,     0,     0,   243,     0,   241,     0,   122,
     245,     0,     0,     0,   272,   249,   252,   122,   253,     0,
       0,     0,     0,    77,    76,     0,   324,   128,    50,   130,
     244,   235,     0,   271,   246,   273,     0,    31,    33,    32,
     304,     0,    68,    50,    70,   138,     0,     0,    50,   134,
     136,   137,   251,   250,    78,    70,     0,    50,    82,    84,
      87,    88,     0,    86,    89,     0,   139,   325,   131,   135,
      60,     0,    85,    79,    83,   139,   100,     0,     9,    10,
       0,   115,   120,    34,    99,   114,    95,     0,     0,    91,
      93,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   308,     0,   159,
     119,   146,   148,     0,   149,   152,   169,   160,     0,   153,
     154,   155,   161,   156,   162,   157,   158,   163,   164,   165,
     167,   166,   168,   178,   177,     0,   175,   176,   173,   174,
     172,   106,   106,     0,    90,     0,     0,   106,     0,   211,
       0,   196,     0,     0,   197,     0,     0,     0,     0,     0,
       0,   213,     0,     0,   170,    95,   151,     0,   145,   147,
     150,   171,     0,     0,     0,   105,   107,     0,    92,    96,
     142,    94,    98,    97,     0,   210,     0,     0,   206,   208,
       0,   195,   205,     0,   214,     0,     0,     0,   215,     0,
     212,   219,   230,     0,   109,   104,     0,   104,   143,     0,
     141,   104,     0,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   222,   110,     0,     0,   103,   108,
     101,   140,     0,   102,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,   221,   223,   112,   111,
       0,   144,     0,     0,     0,     0,   200,   179,   180,   182,
     184,   216,   217,   193,     0,     0,     0,   116,   118,     0,
       0,     0,     0,     0,   199,   207,     0,     0,     0,     0,
     183,   186,     0,   189,     0,   225,   113,     0,     0,   120,
     117,   194,     0,     0,     0,     0,     0,   323,     0,     0,
     185,   187,   188,   190,     0,   122,   122,     0,     0,   203,
     202,     0,   181,     0,   192,   224,     0,     0,   123,     0,
     201,   191,     0,     0,   204,   125,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -391,  -391,  -391,  -285,   -26,  -391,  -391,  -391,   416,   -46,
    -171,  -180,  -391,    -1,   -17,  -391,  -391,  -391,  -391,   557,
    -391,  -391,  -391,    -7,  -391,   549,  -391,   530,  -391,  -235,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   288,  -391,
    -166,   265,   203,  -309,  -379,  -391,  -391,  -160,  -248,  -211,
    -391,  -390,  -391,  -391,  -391,  -391,  -391,  -391,    65,  -127,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   305,  -391,
    -159,  -391,  -391,  -391,  -288,  -391,   248,  -391,   204,  -391,
    -391,  -391,  -391,  -304,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,    80,  -391,    96,  -391,  -391,  -391,   163,  -391,  -391,
    -391,  -391,  -391,  -391,   125,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,   156,  -391,  -391,  -391,  -272,  -391,   425,
    -391,   493,   -48,   490,   269,  -255,   380,  -245,  -243,  -241,
     -44,  -173,  -144,  -168,  -391,   139,   146,    64,   132,   458,
     460,   454,   457,   463,  -391,   373,   452,  -142,  -391,  -391,
     -59,  -391,  -221,  -282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    68,   403,   308,   117,   118,   119,   309,   209,
     121,   231,   210,    69,     6,     7,    10,    11,     3,    12,
      13,    14,    19,   274,    21,    22,    41,    42,    23,    43,
     177,   228,   178,   229,   254,   272,   286,   287,   288,   289,
     275,   396,   319,   320,   411,   291,   310,   276,   457,   404,
     405,   406,   458,   479,   314,   302,   293,   519,   338,    70,
     497,   520,   180,    24,   181,   257,   277,   278,   279,   280,
     281,   412,   439,   440,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   509,   489,
     510,   511,   512,   513,   353,   354,   420,   383,   503,   355,
     356,   484,   421,   504,   422,   357,   358,   359,   360,   361,
     452,   362,   453,   454,   476,    71,    72,    73,    74,   189,
      75,   183,   184,   190,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   175,
     101,   528,   312,   298
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    29,   126,    20,   303,   226,   120,    26,    17,   194,
     307,   258,   311,   378,    49,   390,   307,   315,   130,   131,
     132,   133,   134,   135,   507,   244,   116,   336,   151,   508,
      50,   438,   102,   103,   273,   124,   -36,    15,   373,   295,
     363,   136,   142,   143,    46,   137,   459,   253,   451,    15,
     301,   122,    45,   259,     1,   336,   398,   364,  -218,   238,
     125,   127,   127,   127,   127,   127,   127,   365,   363,   366,
     379,   367,   391,    27,    16,   265,   374,   419,   195,   152,
     153,   198,   199,   481,   494,   364,   -36,   154,   155,    47,
     243,   284,   416,   242,   434,   365,   417,   366,   162,   367,
     200,   201,   202,   222,   431,   163,   187,   290,     4,   363,
      28,   375,   262,   292,   294,   251,   376,   433,     8,    15,
     266,   290,   197,   234,   455,   207,   364,   292,   294,   507,
     225,   256,   195,   230,   508,   235,   365,   235,   366,   368,
     367,   467,   469,   127,   127,   127,   127,   127,   127,   127,
     211,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   407,   127,     9,   144,   145,   414,   368,   369,   146,
     370,    18,   517,   363,   363,   122,   518,   234,   122,    26,
     487,   230,   419,   491,   492,   493,    51,   230,   123,   460,
     364,   364,   127,   463,   147,   148,   369,   263,   370,   139,
     365,   365,   366,   366,   367,   367,    18,   515,   368,  -133,
      18,  -231,   158,   -81,   363,  -231,   212,   213,   214,   215,
      18,   149,   150,  -132,   532,   230,   122,   530,   138,  -231,
    -231,   364,   122,   140,   336,   539,   540,   369,   542,   370,
     127,   365,   127,   366,  -233,   367,   545,   363,  -233,   490,
     141,   127,   159,   550,    18,   548,   176,   -80,   161,   498,
     156,   157,  -233,  -233,   364,   160,   285,   384,  -256,  -256,
     122,   388,   368,   368,   365,   393,   366,   179,   367,   182,
     285,  -257,  -257,   186,   313,   478,   203,   204,   216,   217,
     317,   188,    15,   321,   211,   205,   206,   193,   196,   227,
     211,   369,   369,   370,   370,   104,   232,   233,   236,   105,
     239,   337,   240,   368,   106,   241,   242,   413,   245,   107,
     246,   247,   249,   423,   248,   516,   425,   426,   427,    52,
     429,   128,   128,   128,   128,   128,   128,    53,   195,   337,
     250,    54,   369,   252,   370,   256,   368,     4,   255,   260,
     261,   413,    55,    56,    57,    58,    59,    60,   108,   109,
     110,   111,   112,   113,   114,   115,    61,   264,   267,   268,
     211,   211,   269,   282,   283,   369,   211,   370,    62,    63,
     337,   271,   296,   305,   297,   384,   316,   371,    64,    65,
      66,    67,   372,   377,   381,   380,   382,   385,   386,   387,
     443,   211,   389,   413,   392,   482,   485,   395,   546,   547,
     225,   409,   432,   128,   128,   128,   128,   128,   128,   128,
     394,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   400,   128,   401,   415,   211,   424,   373,   435,   436,
     428,   522,   129,   129,   129,   129,   129,   129,   527,   104,
     225,   437,   430,   105,   441,   122,   442,   444,   106,   445,
      52,   446,   128,   107,   447,   448,   449,   450,    53,   451,
     456,   375,    54,   211,   461,   462,   475,   464,     4,   549,
     470,   465,   474,    55,    56,    57,    58,    59,    60,   471,
     486,     4,   472,   473,   480,   122,   496,   334,   500,   488,
     495,   499,   108,   109,   110,   111,   112,   113,   114,   115,
     128,   506,   128,   501,   502,   514,   525,   521,   337,    64,
      65,   128,   529,   523,   129,   129,   129,   129,   129,   129,
     129,   524,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   468,   129,   526,   104,   322,   534,   535,   105,
     536,   538,   543,   323,   106,   552,   541,   402,   553,   107,
     324,   544,   325,   551,   554,   555,   556,   208,    25,    52,
      44,    48,   318,   129,   326,   304,   408,    53,   327,   328,
     329,    54,   330,   299,   537,   418,   331,     4,   399,   332,
     531,   333,    55,    56,    57,    58,    59,    60,   108,   109,
     110,   111,   112,   113,   114,   115,   334,   466,   533,   477,
     237,   505,    52,   185,   220,   192,   218,     0,   221,   219,
      53,   129,     0,   129,    54,   270,   223,   224,    64,    65,
       4,     0,   129,     0,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,     0,     0,    30,   256,   104,     0,     0,   335,   105,
       0,    62,    63,     0,   106,     0,    31,     0,     0,   107,
       0,    64,    65,    66,    67,     0,     0,    32,     0,    52,
      33,    34,    35,     0,     0,    36,     0,    53,    37,    38,
       0,    54,     0,     0,    39,     0,     0,     4,     0,    40,
     483,     0,    55,    56,    57,    58,    59,    60,   108,   109,
     110,   111,   112,   113,   114,   115,   334,    52,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     4,     0,     0,    64,    65,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,    52,     0,   240,
       0,     0,     0,     0,     0,    53,    62,    63,     0,    54,
       0,     0,     0,     0,     0,     4,    64,    65,    66,    67,
      55,    56,    57,    58,    59,    60,     0,    52,     0,     0,
       0,     0,     0,     0,    61,    53,   410,     0,     0,    54,
       0,     0,     0,     0,     0,     4,    62,    63,     0,     0,
      55,    56,    57,    58,    59,    60,    64,    65,    66,    67,
       0,     0,     0,     0,    61,     0,     0,    52,     0,   269,
       0,     0,     0,     0,     0,    53,    62,    63,     0,    54,
     -28,     0,     0,     0,     0,     4,    64,    65,    66,    67,
      55,    56,    57,    58,    59,    60,   104,     0,     0,   136,
     105,     0,     0,   397,    61,   106,     0,    15,     0,     0,
     107,     0,     0,     0,     0,     0,    62,    63,     0,     0,
       0,  -255,  -255,     0,     0,     0,    64,    65,    66,    67,
     104,     0,     0,    30,   105,   306,     0,     0,     4,   106,
       0,     0,     0,     0,   107,     0,    31,     0,     0,   108,
     109,   110,   111,   112,   113,   114,   115,    32,     0,     0,
      33,    34,    35,     0,     0,   300,     0,     0,    37,    38,
       0,     0,     4,     0,    39,     0,     0,     0,     0,    40,
       0,     0,     0,   108,   109,   110,   111,   112,   113,   114,
     115,    52,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     4,
       0,     0,    52,     0,    55,    56,    57,    58,    59,    60,
      53,     0,     0,     0,    54,     0,     0,     0,   334,     0,
       4,     0,     0,     0,     0,    55,    56,    57,    58,    59,
      60,  -309,     0,     0,   136,     0,     0,     0,   137,    61,
      64,    65,    15,  -308,     0,   136,     0,     0,     0,   191,
       0,    62,    63,    15,  -308,     0,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -310,     0,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   164,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,     0,
       0,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,     0,     0,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174
};

static const yytype_int16 yycheck[] =
{
       1,    18,    61,    10,   286,   176,    52,    46,     9,   136,
     295,   232,   300,    53,     9,    53,   301,   305,    62,    63,
      64,    65,    66,    67,     6,   193,    52,   312,    24,    11,
      25,   410,    49,    50,   255,    61,    65,    73,    72,   274,
     312,    65,    87,    88,    65,    69,   436,   227,     7,    73,
     285,    52,    91,   233,    29,   340,   338,   312,    17,   186,
      61,    62,    63,    64,    65,    66,    67,   312,   340,   312,
     110,   312,   110,    73,   110,   243,   110,   381,   137,    75,
      76,   140,   141,   462,   474,   340,   115,    83,    84,   110,
      66,   271,   380,    69,   403,   340,   381,   340,    79,   340,
     144,   145,   146,   162,   392,    86,   123,   273,    46,   381,
     110,    69,   239,   273,   273,    69,    74,   402,     0,    73,
     247,   287,   139,   182,   433,   151,   381,   287,   287,     6,
     176,   113,   191,   179,    11,   183,   381,   185,   381,   312,
     381,   445,   446,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   372,   163,    23,    91,    92,   377,   340,   312,    96,
     312,   111,    36,   445,   446,   176,    40,   236,   179,    46,
     468,   227,   486,   471,   472,   473,   110,   233,    73,   437,
     445,   446,   193,   441,    89,    90,   340,   241,   340,    73,
     445,   446,   445,   446,   445,   446,   111,   495,   381,   114,
     111,    69,    93,   114,   486,    73,   152,   153,   154,   155,
     111,    97,    98,   114,   512,   271,   227,   509,    66,    87,
      88,   486,   233,    69,   519,   523,   524,   381,   526,   381,
     241,   486,   243,   486,    69,   486,   534,   519,    73,   470,
      72,   252,    95,   541,   111,   537,    15,   114,    85,   480,
      81,    82,    87,    88,   519,    94,   273,   326,    87,    88,
     271,   330,   445,   446,   519,   334,   519,    15,   519,    69,
     287,    87,    88,    65,   301,   456,   147,   148,   156,   157,
     307,    69,    73,   310,   295,   149,   150,    66,   110,    22,
     301,   445,   446,   445,   446,     4,   110,    72,    69,     8,
      65,   312,    70,   486,    13,    66,    69,   376,    66,    18,
      70,    65,    69,   382,    70,   496,   385,   386,   387,    28,
     389,    62,    63,    64,    65,    66,    67,    36,   397,   340,
      69,    40,   486,    80,   486,   113,   519,    46,   110,    70,
      66,   410,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    70,    70,    70,
     371,   372,    70,    66,    66,   519,   377,   519,    77,    78,
     381,    72,   110,   110,   114,   444,    46,    65,    87,    88,
      89,    90,    65,    65,    65,   110,    65,    65,    65,    65,
     417,   402,    65,   462,   110,   464,   465,    46,   535,   536,
     456,    70,    66,   144,   145,   146,   147,   148,   149,   150,
     110,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   110,   163,   110,   110,   436,   110,    72,    66,    72,
     110,   500,    62,    63,    64,    65,    66,    67,   507,     4,
     496,    66,   110,     8,    66,   456,    45,    71,    13,    72,
      28,    66,   193,    18,    66,    66,    66,    66,    36,     7,
      42,    69,    40,   474,    68,    72,    17,    65,    46,   538,
     110,   115,    65,    51,    52,    53,    54,    55,    56,   110,
      71,    46,   110,   110,   110,   496,    72,    65,    65,   110,
     110,    66,    57,    58,    59,    60,    61,    62,    63,    64,
     241,    14,   243,    66,    66,    66,    66,   110,   519,    87,
      88,   252,    80,   110,   144,   145,   146,   147,   148,   149,
     150,   110,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   110,   163,   110,     4,     5,   110,    65,     8,
      65,    72,    80,    12,    13,    66,   110,   112,    66,    18,
      19,   110,    21,   110,    66,   110,   110,   151,    11,    28,
      21,    41,   307,   193,    33,   287,   373,    36,    37,    38,
      39,    40,    41,   278,   519,   381,    45,    46,   340,    48,
     510,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   444,   512,   453,
     185,   486,    28,   120,   160,   125,   158,    -1,   161,   159,
      36,   241,    -1,   243,    40,   252,   163,   175,    87,    88,
      46,    -1,   252,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,     3,   113,     4,    -1,    -1,   117,     8,
      -1,    77,    78,    -1,    13,    -1,    16,    -1,    -1,    18,
      -1,    87,    88,    89,    90,    -1,    -1,    27,    -1,    28,
      30,    31,    32,    -1,    -1,    35,    -1,    36,    38,    39,
      -1,    40,    -1,    -1,    44,    -1,    -1,    46,    -1,    49,
     116,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    87,    88,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    28,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    36,    77,    78,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    87,    88,    89,    90,
      51,    52,    53,    54,    55,    56,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    36,    67,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    77,    78,    -1,    -1,
      51,    52,    53,    54,    55,    56,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    28,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    36,    77,    78,    -1,    40,
      46,    -1,    -1,    -1,    -1,    46,    87,    88,    89,    90,
      51,    52,    53,    54,    55,    56,     4,    -1,    -1,    65,
       8,    -1,    -1,    69,    65,    13,    -1,    73,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    87,    88,    89,    90,
       4,    -1,    -1,     3,     8,    43,    -1,    -1,    46,    13,
      -1,    -1,    -1,    -1,    18,    -1,    16,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    27,    -1,    -1,
      30,    31,    32,    -1,    -1,    35,    -1,    -1,    38,    39,
      -1,    -1,    46,    -1,    44,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    28,    -1,    51,    52,    53,    54,    55,    56,
      36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    65,    -1,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    74,    -1,    -1,    65,    -1,    -1,    -1,    69,    65,
      87,    88,    73,    74,    -1,    65,    -1,    -1,    -1,    69,
      -1,    77,    78,    73,    74,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    74,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    74,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    29,   152,   169,    46,   164,   165,   166,     0,    23,
     167,   168,   170,   171,   172,    73,   110,   164,   111,   173,
     174,   175,   176,   179,   214,   170,    46,    73,   110,   165,
       3,    16,    27,    30,    31,    32,    35,    38,    39,    44,
      49,   177,   178,   180,   176,    91,    65,   110,   178,     9,
      25,   110,    28,    36,    40,    51,    52,    53,    54,    55,
      56,    65,    77,    78,    87,    88,    89,    90,   153,   164,
     210,   266,   267,   268,   269,   271,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   301,   165,   165,     4,     8,    13,    18,    57,    58,
      59,    60,    61,    62,    63,    64,   155,   156,   157,   158,
     160,   161,   164,    73,   155,   164,   301,   164,   275,   277,
     281,   281,   281,   281,   281,   281,    65,    69,    66,    73,
      69,    72,    87,    88,    91,    92,    96,    89,    90,    97,
      98,    24,    75,    76,    83,    84,    81,    82,    93,    95,
      94,    85,    79,    86,    74,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   300,    15,   181,   183,    15,
     213,   215,    69,   272,   273,   272,    65,   165,    69,   270,
     274,    69,   274,    66,   210,   301,   110,   165,   301,   301,
     281,   281,   281,   286,   286,   287,   287,   155,   159,   160,
     163,   164,   288,   288,   288,   288,   289,   289,   290,   291,
     292,   293,   301,   294,   297,   160,   161,    22,   182,   184,
     160,   162,   110,    72,   301,   273,    69,   270,   210,    65,
      70,    66,    69,    66,   284,    66,    70,    65,    70,    69,
      69,    69,    80,   162,   185,   110,   113,   216,   303,   162,
      70,    66,   210,   281,    70,   284,   210,    70,    70,    70,
     296,    72,   186,   303,   174,   191,   198,   217,   218,   219,
     220,   221,    66,    66,   162,   174,   187,   188,   189,   190,
     191,   196,   198,   207,   221,   180,   110,   114,   304,   219,
      35,   180,   206,   304,   189,   110,    43,   154,   155,   159,
     197,   225,   303,   165,   205,   225,    46,   165,   192,   193,
     194,   165,     5,    12,    19,    21,    33,    37,    38,    39,
      41,    45,    48,    50,    65,   117,   154,   164,   209,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   245,   246,   250,   251,   256,   257,   258,
     259,   260,   262,   268,   276,   278,   279,   280,   282,   283,
     298,    65,    65,    72,   110,    69,    74,    65,    53,   110,
     110,    65,    65,   248,   301,    65,    65,    65,   301,    65,
      53,   110,   110,   301,   110,    46,   192,    69,   304,   227,
     110,   110,   112,   154,   200,   201,   202,   200,   193,    70,
      67,   195,   222,   301,   200,   110,   225,   154,   229,   234,
     247,   253,   255,   301,   110,   301,   301,   301,   110,   301,
     110,   225,    66,   154,   194,    66,    72,    66,   195,   223,
     224,    66,    45,   165,    71,    72,    66,    66,    66,    66,
      66,     7,   261,   263,   264,   194,    42,   199,   203,   202,
     199,    68,    72,   199,    65,   115,   248,   234,   110,   234,
     110,   110,   110,   110,    65,    17,   265,   264,   161,   204,
     110,   195,   301,   116,   252,   301,    71,   225,   110,   240,
     303,   225,   225,   225,   202,   110,    72,   211,   303,    66,
      65,    66,    66,   249,   254,   255,    14,     6,    11,   239,
     241,   242,   243,   244,    66,   225,   161,    36,    40,   208,
     212,   110,   301,   110,   110,    66,   110,   301,   302,    80,
     304,   242,   225,   244,   110,    65,    65,   209,    72,   225,
     225,   110,   225,    80,   110,   225,   210,   210,   304,   301,
     225,   110,    66,    66,    66,   110,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   151,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   160,   161,
     162,   163,   163,   163,   164,   164,   165,   166,   167,   167,
     168,   168,   169,   170,   170,   171,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   180,
     180,   181,   181,   182,   182,   183,   184,   185,   185,   186,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   205,   206,   207,   208,   208,   209,
     209,   210,   210,   211,   212,   212,   213,   213,   214,   215,
     215,   216,   217,   217,   218,   218,   219,   219,   220,   221,
     222,   223,   223,   224,   224,   225,   226,   226,   227,   227,
     228,   229,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     232,   233,   234,   234,   234,   234,   234,   234,   234,   235,
     236,   237,   238,   239,   239,   240,   241,   241,   242,   243,
     243,   244,   244,   245,   246,   247,   247,   248,   248,   249,
     249,   250,   251,   251,   252,   253,   253,   254,   255,   255,
     256,   256,   257,   257,   258,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   265,   266,   266,   267,   267,
     267,   267,   267,   267,   267,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   274,   274,   275,   275,   276,
     276,   276,   277,   277,   278,   278,   278,   278,   279,   280,
     281,   281,   281,   281,   281,   282,   283,   284,   284,   284,
     284,   285,   285,   285,   286,   286,   286,   286,   287,   287,
     287,   288,   288,   288,   289,   289,   289,   289,   289,   289,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   297,   298,   299,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   301,   302,   303,   304
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1,     3,     1,     0,
       1,     2,     3,     1,     1,     3,     5,     1,     1,     1,
       0,     1,     2,     6,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     8,     1,
       0,     1,     0,     1,     0,     2,     2,     1,     3,     3,
       1,     0,     1,     2,     1,     2,     1,     1,     1,     1,
       5,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       1,     8,     8,     1,     0,     1,     0,     1,     3,     2,
       3,     2,     1,     3,     1,     2,     9,     1,     0,     1,
       0,     1,     0,     4,     5,     5,     1,     0,     7,     2,
       3,     3,     1,     0,     1,     2,     1,     1,     1,     2,
       3,     1,     0,     1,     3,     3,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     9,     6,     1,     0,     3,     1,     2,     2,     1,
       2,     4,     3,     6,     8,     1,     0,     1,     0,     1,
       0,    10,     9,     9,     6,     1,     1,     1,     1,     3,
       3,     2,     3,     2,     3,     3,     6,     6,     1,     0,
       4,     5,     1,     2,     6,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     5,     1,     3,     1,     0,
       3,     4,     1,     2,     3,     2,     3,     3,     3,     4,
       6,     6,     4,     4,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     5,     4,     5,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (parserContext, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, parserContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (parserContext);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parser_context_t *parserContext)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parserContext);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, parser_context_t *parserContext)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , parserContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parserContext); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_context_t *parserContext)
{
  YYUSE (yyvaluep);
  YYUSE (parserContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_context_t *parserContext)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2115 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2121 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 413 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2127 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 415 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2133 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2139 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2145 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 421 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2151 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 432 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2157 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 442 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2163 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2169 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 446 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2175 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 448 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2181 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 450 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2187 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 452 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2193 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2199 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2205 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 458 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2211 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 463 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2217 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 465 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2223 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 475 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "InterfaceTypeList" */ );
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2232 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 491 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2240 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 495 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2248 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 499 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::Node *node = TOP();
        ++node->counter;
    }
#line 2257 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));    }
#line 2263 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 517 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        //PUSH(TOK_NAME, $3);
        //COMBINE(0, 1);
        beagle::Node *name = TOP();
        name->text += '.';
        name->text += (yyvsp[0]. node );
        name->type = TOK_QNAME;
    }
#line 2276 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 536 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ImportDeclarations" */ );   }
#line 2282 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORTS, 1);   }
#line 2288 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 544 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2294 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 558 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2300 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 563 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2308 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 575 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "AnnotationDeclarations" */ );   }
#line 2314 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 580 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATIONS, 1);   }
#line 2320 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 582 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2326 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 587 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2332 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 589 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "ArgumentList" */ );
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2341 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 597 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2347 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 599 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2353 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 604 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2359 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 606 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2365 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2371 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 610 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2377 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 612 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2383 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 614 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2389 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 616 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2395 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 618 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2401 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 620 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2407 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 622 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2413 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 624 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 629 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2425 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 634 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Modifiers" */ );   }
#line 2431 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 639 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Super" */ );   }
#line 2437 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 644 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Interfaces" */ );   }
#line 2443 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 658 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2449 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 660 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2455 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 669 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ClassBodyDeclarations" */ );   }
#line 2461 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 674 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2467 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 676 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2473 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 693 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2479 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 698 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLES, 1);   }
#line 2485 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 700 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2491 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 705 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "VariableInitializer" */ );
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2500 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 710 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2506 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 715 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));   }
#line 2512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 726 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 732 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2524 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 738 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2530 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 740 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2536 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 746 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Throws" */ );   }
#line 2542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 752 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "FormalParameterList" */ );   }
#line 2548 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 756 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETERS, 1);   }
#line 2554 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 758 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2560 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 763 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2566 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 765 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        ++TOP()->counter;
    }
#line 2575 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 779 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROWS, 1);   }
#line 2581 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 781 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2587 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 790 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2593 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 795 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2599 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 800 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExplicitConstructorInvocation" */ );   }
#line 2605 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 805 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "BlockStatements" */ );   }
#line 2611 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 810 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ArgumentList" */ );   }
#line 2617 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 815 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2623 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 820 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_THIS;   }
#line 2629 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 822 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_SUPER;   }
#line 2635 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 827 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ExtendsInterfaces" */ );   }
#line 2641 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 832 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2647 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 837 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2653 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 839 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2659 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 848 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "InterfaceMemberDeclarations" */ );   }
#line 2665 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 853 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2671 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 855 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2677 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 869 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, NULL /* "MethodBody" */ );
        COMBINE(0, 1);
    }
#line 2686 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 881 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "VariableInitializers" */ ); }
#line 2692 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 886 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY, 1);   }
#line 2698 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 888 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2704 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 897 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2710 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 899 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2716 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 913 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2722 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 170:
#line 942 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2728 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 961 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2737 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 969 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NULL, NULL /* "Block" */ );
		COMBINE(TOK_IF, 3);
	}
#line 2747 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 978 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2753 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 983 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2759 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 988 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "SwitchBlockStatementGroups" */ );   }
#line 2765 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 997 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2771 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 999 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2777 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 1004 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2783 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 1009 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2789 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 1011 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2795 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 1016 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2801 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 1018 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2810 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 1026 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2816 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1032 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2822 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1037 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForInit" */ );   }
#line 2828 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1042 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Expression" */ );   }
#line 2834 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 1047 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "ForUpdate" */ );   }
#line 2840 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1052 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2846 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 1057 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2852 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1059 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2858 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 1064 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2864 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1078 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2870 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1080 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2876 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 1085 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2885 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 1090 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2894 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 1098 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2903 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1103 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2912 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1111 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2918 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1117 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2924 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1122 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2930 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1124 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2936 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1129 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Catches" */ );   }
#line 2942 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1134 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, NULL /* "finally" */ );
		COMBINE(TOK_TRY, 3);
	}
#line 2951 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1139 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 2957 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1144 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2963 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 1146 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2969 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1151 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 2975 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1156 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->type = TOK_FINALLY;   }
#line 2981 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1167 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 2987 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 235:
#line 1177 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 2993 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 236:
#line 1182 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARGUMENTS, 1);   }
#line 2999 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 237:
#line 1184 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3005 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 239:
#line 1189 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, NULL /* "Dims" */ );   }
#line 3011 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1194 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        /*
         * Note: unlike Java, the current specification of the language
         *       don't support assymetric arrays (i.e. arrays which some
         *       dimensions have different sizes). Example:
         *
         *     int[][] num = new int[2][];
		 *     num[0] = new int[1];
		 *     num[1] = new int[5];
         *
         * To enable this feature, the grammar should include/modify the
         * following rules:
         *
         *     ArrayCreationExpression:
         *         OK_NEW PrimitiveType DimExprs DimsOpt
         *         ;
         *
         *     DimsOpt:
         *         Dims
         *         |
         *         ;
         *
         *     Dims:
         *         TOK_LB TOK_RB
         *         | Dims TOK_LB TOK_RB
         *         ;
         */

        // insert 'DimsOpt' node into 'DimExprs'
        //COMBINE(0, 1);

        COMBINE(TOK_NEW_ARRAY, 2);
    }
#line 3049 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1228 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3055 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1233 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3061 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 243:
#line 1235 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3067 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1245 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->counter = 1;
	}
#line 3076 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1250 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		++TOP()->counter;
	}
#line 3084 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1256 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_FIELD, 2);   }
#line 3090 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1258 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_ACCESS_FIELD, 2);
	}
#line 3099 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 249:
#line 1266 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NULL, NULL /* "Primary" */ );
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3115 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1278 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3121 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1280 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_SUPER, "");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	/*
	| Name BeginBlock ArgumentListOpt EndBlock
	| Primary TOK_DOT SimpleName BeginBlock ArgumentListOpt EndBlock
	| TOK_SUPER TOK_DOT TOK_NAME BeginBlock ArgumentListOpt EndBlock
	*/

	}
#line 3144 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1302 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3150 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1304 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3156 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1316 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3162 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 259:
#line 1321 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3168 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 262:
#line 1328 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3174 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1330 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3180 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 265:
#line 1336 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3186 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 266:
#line 1341 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3192 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1347 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3198 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 269:
#line 1349 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3204 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1356 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->type == TOK_NULL)
		{
			delete second;
			second = first;
		}
		else
			second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3228 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 272:
#line 1376 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3234 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1378 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->addChild(*first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3252 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 275:
#line 1396 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3258 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1398 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3264 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3270 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 279:
#line 1406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3276 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3282 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1414 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3288 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 283:
#line 1416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3294 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1422 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3300 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 286:
#line 1424 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3306 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1426 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1428 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3318 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 289:
#line 1430 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3324 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1436 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3330 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1438 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3336 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1444 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3342 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1450 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3348 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 298:
#line 1456 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3354 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 300:
#line 1462 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3360 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 302:
#line 1468 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3366 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 304:
#line 1474 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3372 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1484 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

        /*
         * Change the expression notation from infixed to prefixed
         */

        beagle::Node *left, *right, *oper;

        right = POP();
        oper = POP();
        left = POP();

        oper->addChild(*left);
        oper->addChild(*right);
        NPUSH(oper);
    }
#line 3393 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 311:
#line 1510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3399 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3405 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 313:
#line 1514 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 314:
#line 1516 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 315:
#line 1518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1520 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3429 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1522 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1524 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1526 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1528 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1530 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3459 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3463 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parserContext, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parserContext, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parserContext);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, parserContext);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parserContext, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parserContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, parserContext);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1550 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


