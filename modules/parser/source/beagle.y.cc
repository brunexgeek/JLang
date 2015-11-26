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


#line 145 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */

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
    TOK_INT = 280,
    TOK_INTERFACE = 281,
    TOK_LONG = 282,
    TOK_NATIVE = 283,
    TOK_NEW = 284,
    TOK_PACKAGE = 285,
    TOK_PRIVATE = 286,
    TOK_PROTECTED = 287,
    TOK_PUBLIC = 288,
    TOK_RETURN = 289,
    TOK_SUSPEND = 290,
    TOK_STATIC = 291,
    TOK_SUPER = 292,
    TOK_SWITCH = 293,
    TOK_READLOCK = 294,
    TOK_WRITELOCK = 295,
    TOK_THIS = 296,
    TOK_THROW = 297,
    TOK_THROWS = 298,
    TOK_VOID = 299,
    TOK_VOLATILE = 300,
    TOK_WHILE = 301,
    TOK_NAME = 302,
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
#line 167 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:355  */

    char* node;

#line 312 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int beagle_parse (parser_context_t *parserContext);

#endif /* !YY_BEAGLE_MEDIA_DADOS_PROJETOS_BEAGLE_MODULES_PARSER_SOURCE_BEAGLE_Y_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 326 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 57 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:359  */


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

    if (stack.size() < n) return NULL;

    if (tok > 0 )
        temp = new beagle::Node(tok, NULL);
    else
    {
        if (stack.size() <= n) return NULL;
        temp = stack[ stack.size() - 1 - n ];
    }
    for (int i = stack.size() - n; i < stack.size(); ++i)
    {
        //std::cout << temp->getValue() << ": adding child " << p->getValue() << std::endl;;
        temp->addChild( stack[i] );
    }
    for (int i = 0; i < n; ++i)
        stack.pop_back();

    if (tok > 0) stack.push_back(temp);
}


static void beagle_printStack( std::vector<beagle::Node*> &stack, beagle::Parser *parser )
{
    std::cout << "Stack:" << std::endl;
    for (int i = 0; i < stack.size(); ++i)
        stack[i]->print(std::cout, parser, 1, false);
}


static void beagle_push(
    parser_context_t *context,
    int token,
    const char *value )
{
    std::cout << "PUSH " << value << std::endl;
    context->stack.push_back( new beagle::Node(token,value) );
}


static void beagle_push(
    parser_context_t *context,
    beagle::Node *node )
{
    std::cout << "PUSH " << node->getText() << std::endl;
    context->stack.push_back(node);
}


#define scanner              parserContext->scanner
#define PUSH(token,value)    beagle_push( parserContext, (token), (value) )
#define NPUSH(node)          beagle_push( parserContext, (node) )
#define POP()                beagle_pop(parserContext->stack)
#define TOP()                (parserContext->stack[ parserContext->stack.size() - 1 ])
#define COMBINE(tok,n)       beagle_combine(parserContext->stack, (tok), (n))
#define RULE(x)              parserContext->rule = (x)
#define PSTACK()             beagle_printStack(parserContext->stack, parserContext->parser)


#line 419 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:359  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  155
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  563

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
       0,   396,   396,   401,   403,   405,   407,   409,   411,   416,
     417,   421,   422,   427,   428,   432,   434,   436,   438,   440,
     442,   444,   446,   448,   450,   452,   457,   459,   464,   465,
     469,   474,   479,   483,   487,   491,   495,   503,   504,   508,
     513,   521,   522,   526,   527,   532,   534,   539,   544,   545,
     549,   554,   561,   562,   566,   567,   571,   573,   578,   580,
     588,   590,   595,   597,   599,   601,   603,   605,   607,   609,
     611,   613,   615,   620,   625,   626,   630,   631,   635,   636,
     641,   645,   649,   651,   656,   660,   661,   665,   667,   672,
     673,   674,   678,   679,   680,   684,   689,   691,   696,   701,
     706,   708,   712,   713,   717,   723,   729,   731,   737,   738,
     743,   744,   747,   749,   754,   756,   765,   770,   772,   777,
     781,   786,   791,   792,   796,   797,   801,   802,   806,   811,
     813,   818,   819,   823,   828,   830,   835,   839,   840,   844,
     846,   851,   852,   856,   860,   868,   872,   873,   877,   879,
     884,   888,   890,   895,   896,   900,   904,   909,   910,   911,
     912,   913,   914,   915,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   933,   938,   942,   943,   944,
     945,   946,   947,   948,   952,   960,   969,   974,   979,   980,
     984,   988,   990,   995,  1000,  1002,  1007,  1009,  1017,  1023,
    1028,  1029,  1033,  1034,  1038,  1039,  1043,  1048,  1050,  1055,
    1060,  1061,  1065,  1069,  1071,  1076,  1081,  1089,  1094,  1102,
    1108,  1113,  1115,  1120,  1121,  1125,  1130,  1135,  1137,  1142,
    1147,  1152,  1153,  1157,  1158,  1160,  1161,  1162,  1163,  1164,
    1168,  1173,  1175,  1180,  1181,  1185,  1219,  1224,  1226,  1231,
    1236,  1241,  1247,  1249,  1257,  1269,  1271,  1293,  1295,  1300,
    1301,  1302,  1303,  1307,  1312,  1317,  1318,  1319,  1321,  1323,
    1327,  1332,  1337,  1338,  1340,  1342,  1347,  1367,  1369,  1386,
    1387,  1389,  1391,  1396,  1397,  1399,  1404,  1405,  1407,  1412,
    1413,  1415,  1417,  1419,  1421,  1426,  1427,  1429,  1434,  1435,
    1440,  1441,  1446,  1447,  1452,  1453,  1458,  1459,  1464,  1465,
    1470,  1471,  1475,  1495,  1496,  1497,  1501,  1503,  1505,  1507,
    1509,  1511,  1513,  1515,  1517,  1519,  1521,  1526,  1530,  1534,
    1538
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
  "TOK_INT", "TOK_INTERFACE", "TOK_LONG", "TOK_NATIVE", "TOK_NEW",
  "TOK_PACKAGE", "TOK_PRIVATE", "TOK_PROTECTED", "TOK_PUBLIC",
  "TOK_RETURN", "TOK_SUSPEND", "TOK_STATIC", "TOK_SUPER", "TOK_SWITCH",
  "TOK_READLOCK", "TOK_WRITELOCK", "TOK_THIS", "TOK_THROW", "TOK_THROWS",
  "TOK_VOID", "TOK_VOLATILE", "TOK_WHILE", "TOK_NAME", "TOK_CONTINUE",
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
  "Name", "SimpleName", "QualifiedName", "PackageDeclarationOpt",
  "ImportDeclarationsOpt", "ImportDeclarations", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration",
  "AnnotationDeclarationsOpt", "AnnotationDeclarations",
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

#define YYPACT_NINF -393

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-393)))

#define YYTABLE_NINF -316

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,     1,    60,    48,  -393,  -393,   -22,  -393,  -393,  -393,
       1,    -7,    48,  -393,  -393,  -393,    67,  -393,   -14,     1,
    -393,   689,    -7,  -393,  -393,  -393,  -393,  -393,   -17,  -393,
     -52,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,   689,  -393,    84,  -393,    19,   965,  -393,  -393,
       1,     1,  -393,  1043,    70,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,   788,   965,   965,   965,   965,   965,   965,  -393,
    1078,   101,   103,   117,  -393,   120,  -393,   369,  -393,  1100,
     155,  -393,  -393,  -393,  -393,  -393,  -393,  -393,    46,   194,
     199,    14,   210,   114,   134,   150,   164,    53,  -393,  -393,
    -393,  1113,  -393,   239,   241,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   189,
    -393,  -393,  -393,   189,   204,   142,     1,   202,  1090,   211,
      99,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   965,
     965,   206,     1,   965,   965,  -393,  -393,   965,   965,   965,
     965,   965,   965,   965,  1043,   965,   965,   965,   965,   965,
     965,   965,   965,   965,   965,   965,   965,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   965,     1,
     277,  -393,     1,   208,   240,   965,   189,  -393,   250,   965,
       1,   256,   255,   261,   260,   535,   153,  1079,   264,   266,
    -393,   269,   267,  -393,  -393,  -393,  -393,    46,    46,   194,
     194,   270,  -393,  -393,   271,   102,   199,   199,   199,   199,
      14,    14,   210,   114,   134,   150,   258,   164,  -393,  -393,
    -393,     1,   231,  -393,  -393,  -393,   229,     1,   274,  -393,
     535,  -393,   283,  -393,   132,   965,  -393,   965,   280,  1079,
    -393,  -393,  -393,   965,  -393,   281,   282,   284,   965,   285,
     229,  -393,  -393,   156,  -393,  -393,  -393,     1,  -393,   287,
    -393,  -393,  -393,   289,  -393,  -393,  -393,  -393,  -393,   167,
     689,  -393,   251,   246,   174,  -393,  -393,  -393,  -393,  -393,
    -393,  1109,   246,   179,  -393,  -393,  -393,  -393,   252,  -393,
    -393,  1019,  -393,  -393,  -393,  -393,   229,  1019,  -393,  -393,
    -393,   229,  -393,   316,   270,  -393,     1,  -393,   622,   300,
    -393,  -393,   -42,   301,   -25,  -393,    71,   302,   -41,   259,
     303,   305,   965,   306,   307,   310,   965,   313,   -35,   273,
     965,   278,   332,   151,   246,  -393,   622,  -393,  -393,   279,
    -393,  -393,  -393,  -393,   286,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,    43,
     124,   155,   215,   217,  -393,  -393,  -393,   686,   686,   332,
    -393,   311,   892,   686,   288,  -393,   229,   854,   965,   290,
    -393,   965,   965,   965,   291,   965,   292,  -393,   229,   314,
    -393,  -393,   319,   921,  -393,  -393,  -393,  -393,  1043,   332,
     326,   321,  -393,   328,  -393,  -393,   892,  -393,  -393,  -393,
     329,  -393,   357,   316,  -393,  -393,   333,  -393,   334,   343,
    -393,   346,   347,   349,  -393,   351,  -393,   411,  -393,   332,
     350,   378,   686,   378,  -393,   356,   354,   378,   362,   315,
     965,   451,   -10,   318,   330,   335,   338,   364,   414,    94,
    -393,   350,     1,   339,  -393,  -393,  -393,  -393,   892,  -393,
     965,   722,   368,  -393,   229,   340,   229,   229,   229,   229,
     686,   341,  -393,  -393,  -393,   372,   229,  -393,   376,   387,
     388,   389,   451,   443,  -393,  -393,   188,  -393,  -393,  -393,
     393,   229,     1,  -393,   129,   371,   965,   373,   375,   394,
    -393,   334,   377,   965,   398,   246,   188,  -393,    15,  -393,
     379,  -393,  -393,   417,   421,   622,  -393,  -393,   418,   229,
     229,   381,   229,  -393,   413,   384,  -393,  -393,  -393,  -393,
     229,   965,   965,   246,   965,  -393,  -393,   229,  -393,   385,
    -393,  -393,   430,   431,  -393,   433,  -393,  -393,   390,   400,
    -393,  -393,  -393
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      42,     0,     0,    44,    41,    39,     0,    37,    38,     1,
       0,    55,    43,    45,    48,    49,     0,    47,     0,     0,
       2,    75,    54,    56,    52,    53,    46,    40,     0,    50,
       0,    66,    67,    68,    64,    63,    62,    65,    69,    70,
      72,    71,    74,    60,     0,    57,     0,   127,    59,    61,
       0,     0,    51,     0,     0,   234,     8,     5,     3,     7,
       4,     6,     0,     0,     0,     0,     0,     0,     0,   233,
     260,     0,   259,   231,   236,   126,   232,   237,   238,   239,
     272,   261,   262,   279,   265,   266,   269,   275,   283,   286,
     289,   295,   298,   300,   302,   304,   306,   308,   310,   327,
     311,     0,   241,    77,   132,    12,    25,    27,    26,    23,
      24,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      11,    13,    14,    32,     0,    30,     0,   244,   260,     0,
     260,   237,   239,   274,   273,   270,   271,   267,   268,   127,
       0,     0,     0,     0,     0,   263,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   316,   320,   321,
     317,   318,   324,   326,   325,   322,   323,   319,     0,     0,
      79,    76,     0,     0,   131,     0,   245,   247,   244,   127,
       0,   253,     0,     0,   243,     0,     0,   235,     0,     0,
      58,   252,     0,   242,   280,   281,   282,   284,   285,   287,
     288,     0,   294,    28,    29,    30,   290,   291,   292,   293,
     296,   297,   299,   301,   303,   305,     0,   307,   312,    32,
      80,     0,     0,    78,    33,   134,     0,     0,     0,   248,
       0,   246,     0,    82,     0,   127,   250,     0,     0,     0,
     277,   254,   257,   127,   258,     0,     0,     0,     0,    81,
       0,   329,   133,    55,   135,   249,   240,     0,    31,     0,
     276,   251,   278,     0,    34,    36,    35,   309,    73,    55,
      75,   143,     0,     0,    55,   139,   141,   142,    83,   256,
     255,    75,     0,    55,    87,    89,    92,    93,     0,    91,
      94,     0,   144,   330,   136,   140,    65,     0,    90,    84,
      88,   144,   105,     0,     9,    10,     0,   120,   125,    37,
     104,   119,   100,     0,     0,    96,    98,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   313,     0,   164,   124,   151,   153,     0,
     154,   157,   174,   165,     0,   158,   159,   160,   166,   161,
     167,   162,   163,   168,   169,   170,   172,   171,   173,   183,
     182,     0,   180,   181,   178,   179,   177,   111,   111,     0,
      95,     0,     0,   111,     0,   216,     0,   201,     0,     0,
     202,     0,     0,     0,     0,     0,     0,   218,     0,     0,
     175,   100,   156,     0,   150,   152,   155,   176,     0,     0,
       0,   110,   112,     0,    97,   101,   147,    99,   103,   102,
       0,   215,     0,     0,   211,   213,     0,   200,   210,     0,
     219,     0,     0,     0,   220,     0,   217,   224,   235,     0,
     114,   109,     0,   109,   148,     0,   146,   109,     0,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     227,   115,     0,     0,   108,   113,   106,   145,     0,   107,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   228,   117,   116,     0,   149,     0,     0,
       0,     0,   205,   184,   185,   187,   189,   221,   222,   198,
       0,     0,     0,   121,   123,     0,     0,     0,     0,     0,
     204,   212,     0,     0,     0,     0,   188,   191,     0,   194,
       0,   230,   118,     0,     0,   125,   122,   199,     0,     0,
       0,     0,     0,   328,     0,     0,   190,   192,   193,   195,
       0,   127,   127,     0,     0,   208,   207,     0,   186,     0,
     197,   229,     0,     0,   128,     0,   206,   196,     0,     0,
     209,   130,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -393,  -393,  -393,  -293,   -47,  -393,  -393,  -393,   355,   -46,
    -176,  -165,  -393,    -1,   -18,  -393,  -393,  -393,  -393,  -393,
     496,  -393,  -393,  -393,    -6,  -393,   489,  -393,   470,  -393,
    -252,  -393,  -393,  -393,  -393,   304,  -393,  -393,  -393,   220,
    -393,  -243,   201,   136,  -360,  -392,  -393,  -393,  -187,  -238,
    -183,  -393,  -385,  -393,  -393,  -393,  -393,  -393,  -393,    12,
    -119,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   257,
    -393,  -180,  -393,  -393,  -393,  -295,  -393,   196,  -393,   166,
    -393,  -393,  -393,  -393,  -365,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,    24,  -393,    25,  -393,  -393,  -393,    95,  -393,
    -393,  -393,  -393,  -393,  -393,    52,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,   109,  -393,  -393,  -393,  -278,  -393,
     382,  -393,   446,    45,   438,   370,  -264,   399,  -177,  -128,
    -105,    54,   -93,   -78,  -168,  -393,   157,   158,   107,   154,
     410,   412,   415,   409,   419,  -393,   317,   401,   -67,  -393,
    -393,   -60,  -393,  -226,  -288
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    69,   409,   314,   120,   121,   122,   315,   213,
     124,   243,   214,    70,     7,     8,     3,    11,    12,     4,
      13,    14,    15,    20,   280,    22,    23,    42,    43,    24,
      44,   180,   232,   181,   233,   244,   278,   292,   293,   294,
     295,   281,   402,   325,   326,   417,   297,   316,   282,   463,
     410,   411,   412,   464,   485,   320,   308,   299,   525,   344,
      71,   503,   526,   183,    25,   184,   262,   283,   284,   285,
     286,   287,   418,   445,   446,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   515,
     495,   516,   517,   518,   519,   359,   360,   426,   389,   509,
     361,   362,   490,   427,   510,   428,   363,   364,   365,   366,
     367,   458,   368,   459,   460,   482,    72,    73,    74,    75,
     193,    76,   186,   187,   194,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     178,   102,   534,   318,   304
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    30,   129,   230,   309,    21,   119,   123,   313,    18,
     263,   317,   384,    47,   313,   127,   321,   235,   396,    53,
     198,   513,   425,   -39,   444,   342,   514,    54,   301,   250,
      27,    55,   103,   104,   279,     1,   296,     5,   154,   307,
     369,    56,    57,    58,    59,    60,    61,   379,     5,   440,
     296,    16,   125,   342,   370,   340,   404,   465,    48,    28,
       9,   128,   130,   130,   130,   130,   130,   130,   369,   385,
     242,    10,   264,   -39,    46,   397,   487,    65,    66,   461,
     199,   272,   370,   202,   203,   380,   473,   475,    17,   155,
     156,   422,   298,    50,   423,   500,    29,   157,   158,   300,
     474,   457,   288,   437,    19,   226,   298,   211,   191,   369,
      51,  -223,  -236,   300,    27,   439,  -236,   133,   134,   135,
     136,   137,   138,   370,   201,   238,   269,   425,   261,    52,
    -236,  -236,   165,   229,   273,   199,   234,   147,   148,   166,
     381,   371,   149,   126,   234,   382,   130,   130,   130,   130,
     130,   130,   130,   215,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   139,   130,   523,   141,   140,   371,
     524,   257,    16,   369,   369,    16,   142,   190,   125,   493,
     238,   125,   497,   498,   499,   234,   143,   370,   370,   125,
     372,   234,   144,  -238,   513,   413,   130,  -238,   -30,   514,
     420,   204,   205,   206,   267,   466,   521,   161,   268,   469,
     371,  -238,  -238,   373,   369,    16,   139,   190,   372,   249,
     403,   234,   248,   538,    16,   374,   190,   536,   370,   162,
     125,   239,   342,   239,   545,   546,   125,   548,  -260,  -260,
     375,   373,   145,   146,   163,   551,   130,   369,   130,   164,
     496,   376,   556,   374,   179,   554,   182,   130,   185,   372,
     504,   370,   216,   217,   218,   219,   125,    19,   375,   189,
    -138,   192,   390,   291,   371,   371,   394,   197,    19,   376,
     399,   -86,   373,   150,   151,    19,   484,   291,  -137,   319,
      19,   159,   160,   -85,   374,   323,   152,   153,   327,   231,
     215,   270,  -261,  -261,  -262,  -262,   215,   207,   208,   375,
     209,   210,   237,   220,   221,   371,   200,   343,   236,   240,
     376,   245,   419,   372,   372,   246,   522,   247,   429,   248,
     251,   431,   432,   433,   253,   435,   252,   254,   258,   255,
     256,   260,   261,   199,   265,   343,   373,   373,   371,   266,
     271,   274,   275,   289,   276,   290,   419,   267,   374,   374,
     303,   302,   311,   322,   372,   377,   378,   383,   387,   386,
     388,   391,   392,   375,   375,   393,   215,   215,   395,   401,
     438,   415,   215,   398,   376,   376,   343,   373,   400,   406,
     390,   379,   441,   442,   443,   447,   407,   372,   421,   374,
     430,   434,   436,   448,   450,   449,   451,   215,   419,   452,
     488,   491,   453,   454,   375,   455,   229,   456,   457,   381,
     373,   462,   552,   553,   467,   376,   468,   470,   476,   480,
     471,   481,   374,   131,   131,   131,   131,   131,   131,   492,
     477,   215,   505,  -314,   502,   478,   528,   375,   479,   486,
     494,   501,   506,   533,   507,   508,   229,   512,   376,   520,
     531,   125,   132,   132,   132,   132,   132,   132,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,   535,   215,
      53,   527,   541,   529,   555,   530,   542,   532,    54,   540,
     544,   547,    55,   549,   550,   557,   558,   559,     5,   560,
     561,   125,    56,    57,    58,    59,    60,    61,    26,   212,
     562,    45,    49,   310,   324,   414,   340,   131,   131,   131,
     131,   131,   131,   131,   343,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   259,   131,   543,    65,    66,
     537,   305,   405,   539,   511,   472,   132,   132,   132,   132,
     132,   132,   132,   424,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,    53,   132,   196,   131,   483,   188,
     241,   222,    54,   225,   223,   277,    55,     0,   224,   228,
       0,     0,     5,     0,     0,   227,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,   132,     0,     0,     0,
      62,     0,     0,     0,     0,   246,     0,     0,     0,     0,
       0,     0,    63,    64,     0,     0,     0,   131,     0,   131,
       0,     0,    65,    66,    67,    68,   105,   328,   131,     0,
     106,     0,     0,     0,   329,   107,     0,     0,     0,     0,
     108,   330,     0,   331,     0,     0,   132,   109,   132,   110,
       0,    53,     0,     0,     0,     0,   332,   132,     0,    54,
     333,   334,   335,    55,   336,     0,     0,     0,   337,     5,
     338,     0,   339,    56,    57,    58,    59,    60,    61,   111,
     112,   113,   114,   115,   116,   117,   118,   340,     0,     0,
     105,     0,    31,     0,   106,     0,     0,     0,     0,   107,
       0,     0,     0,     0,   108,    32,     0,     0,     0,    65,
      66,   109,     0,   110,     0,     0,     0,    33,     0,     0,
      34,    35,    36,     0,     0,    37,     0,     0,    38,    39,
       0,     0,     0,     5,    40,   261,     0,     0,    41,   341,
       0,     0,     0,   111,   112,   113,   114,   115,   116,   117,
     118,    53,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     5,
       0,     0,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,   408,    63,
      64,   107,     0,     0,     0,     0,   108,     0,     0,    65,
      66,    67,    68,   109,     0,   110,     0,    53,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     5,     0,     0,   489,    56,
      57,    58,    59,    60,    61,   111,   112,   113,   114,   115,
     116,   117,   118,    62,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,    63,    64,   107,     0,     0,
       0,     0,   108,     0,     0,    65,    66,    67,    68,   109,
       0,   110,     0,    53,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     5,     0,     0,     0,    56,    57,    58,    59,    60,
      61,   111,   112,   113,   114,   115,   116,   117,   118,   340,
       0,    53,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     5,
       0,    65,    66,    56,    57,    58,    59,    60,    61,     0,
      53,     0,     0,     0,     0,     0,     0,    62,    54,   416,
       0,     0,    55,     0,     0,     0,     0,     0,     5,    63,
      64,     0,    56,    57,    58,    59,    60,    61,     0,    65,
      66,    67,    68,     0,     0,     0,    62,     0,     0,     0,
       0,   276,     0,     0,    53,     0,     0,     0,    63,    64,
       0,     0,    54,     0,     0,     0,    55,     0,    65,    66,
      67,    68,     5,     0,     0,     0,    56,    57,    58,    59,
      60,    61,     0,   105,     0,     0,     0,   106,     0,     0,
      62,     0,   107,     0,     0,     0,     0,   108,     0,     0,
       0,     0,    63,    64,   109,     0,   110,   105,     0,     0,
       0,   106,    65,    66,    67,    68,   107,     0,     0,     0,
       0,   108,     0,   312,     0,     0,     5,     0,   109,     0,
     110,     0,     0,     0,     0,     0,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,   112,   113,   114,   115,   116,   117,   118,    53,     0,
       0,     0,    31,     0,     0,     0,    54,     0,     0,     0,
      55,     0,     0,     0,     0,    32,     5,     0,     0,     0,
      56,    57,    58,    59,    60,    61,     0,    33,     0,     0,
      34,    35,    36,   139,    62,   306,     0,   140,    38,    39,
       0,    16,  -313,     0,    40,   139,    63,    64,    41,   195,
       0,     0,     0,    16,  -313,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -315,     0,     0,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   167,     0,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,     0,
       0,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177
};

static const yytype_int16 yycheck[] =
{
       1,    19,    62,   179,   292,    11,    53,    53,   301,    10,
     236,   306,    53,    65,   307,    62,   311,   182,    53,    29,
     139,     6,   387,    65,   416,   318,    11,    37,   280,   197,
      47,    41,    50,    51,   260,    30,   279,    47,    24,   291,
     318,    51,    52,    53,    54,    55,    56,    72,    47,   409,
     293,    73,    53,   346,   318,    65,   344,   442,   110,    73,
       0,    62,    63,    64,    65,    66,    67,    68,   346,   110,
     189,    23,   237,   115,    91,   110,   468,    87,    88,   439,
     140,   249,   346,   143,   144,   110,   451,   452,   110,    75,
      76,   386,   279,     9,   387,   480,   110,    83,    84,   279,
     110,     7,   267,   398,   111,   165,   293,   154,   126,   387,
      26,    17,    69,   293,    47,   408,    73,    63,    64,    65,
      66,    67,    68,   387,   142,   185,   245,   492,   113,   110,
      87,    88,    79,   179,   253,   195,   182,    91,    92,    86,
      69,   318,    96,    73,   190,    74,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    65,   166,    37,    66,    69,   346,
      41,    69,    73,   451,   452,    73,    73,    75,   179,   474,
     240,   182,   477,   478,   479,   231,    69,   451,   452,   190,
     318,   237,    72,    69,     6,   378,   197,    73,    47,    11,
     383,   147,   148,   149,    72,   443,   501,    93,    76,   447,
     387,    87,    88,   318,   492,    73,    65,    75,   346,    66,
      69,   267,    69,   518,    73,   318,    75,   515,   492,    95,
     231,   186,   525,   188,   529,   530,   237,   532,    87,    88,
     318,   346,    87,    88,    94,   540,   247,   525,   249,    85,
     476,   318,   547,   346,    15,   543,    15,   258,    69,   387,
     486,   525,   155,   156,   157,   158,   267,   111,   346,    65,
     114,    69,   332,   279,   451,   452,   336,    66,   111,   346,
     340,   114,   387,    89,    90,   111,   462,   293,   114,   307,
     111,    81,    82,   114,   387,   313,    97,    98,   316,    22,
     301,   247,    87,    88,    87,    88,   307,   150,   151,   387,
     152,   153,    72,   159,   160,   492,   110,   318,   110,    69,
     387,    65,   382,   451,   452,    70,   502,    66,   388,    69,
      66,   391,   392,   393,    65,   395,    70,    70,    80,    69,
      69,   110,   113,   403,    70,   346,   451,   452,   525,    66,
      70,    70,    70,    66,    70,    66,   416,    72,   451,   452,
     114,   110,   110,    47,   492,    65,    65,    65,    65,   110,
      65,    65,    65,   451,   452,    65,   377,   378,    65,    47,
      66,    70,   383,   110,   451,   452,   387,   492,   110,   110,
     450,    72,    66,    72,    66,    66,   110,   525,   110,   492,
     110,   110,   110,    46,    71,   423,    72,   408,   468,    66,
     470,   471,    66,    66,   492,    66,   462,    66,     7,    69,
     525,    43,   541,   542,    68,   492,    72,    65,   110,    65,
     115,    17,   525,    63,    64,    65,    66,    67,    68,    71,
     110,   442,    66,    74,    72,   110,   506,   525,   110,   110,
     110,   110,    65,   513,    66,    66,   502,    14,   525,    66,
      66,   462,    63,    64,    65,    66,    67,    68,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    80,   480,
      29,   110,    65,   110,   544,   110,    65,   110,    37,   110,
      72,   110,    41,    80,   110,   110,    66,    66,    47,    66,
     110,   502,    51,    52,    53,    54,    55,    56,    12,   154,
     110,    22,    42,   293,   313,   379,    65,   147,   148,   149,
     150,   151,   152,   153,   525,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   231,   166,   525,    87,    88,
     516,   284,   346,   518,   492,   450,   147,   148,   149,   150,
     151,   152,   153,   387,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    29,   166,   128,   197,   459,   123,
     188,   161,    37,   164,   162,   258,    41,    -1,   163,   178,
      -1,    -1,    47,    -1,    -1,   166,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,   247,    -1,   249,
      -1,    -1,    87,    88,    89,    90,     4,     5,   258,    -1,
       8,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    -1,    -1,   247,    25,   249,    27,
      -1,    29,    -1,    -1,    -1,    -1,    34,   258,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
       4,    -1,     3,    -1,     8,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    18,    16,    -1,    -1,    -1,    87,
      88,    25,    -1,    27,    -1,    -1,    -1,    28,    -1,    -1,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    39,    40,
      -1,    -1,    -1,    47,    45,   113,    -1,    -1,    49,   117,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,     8,    -1,   112,    77,
      78,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    87,
      88,    89,    90,    25,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,   116,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,     8,    -1,    -1,    77,    78,    13,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    87,    88,    89,    90,    25,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    87,    88,    51,    52,    53,    54,    55,    56,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    65,    37,    67,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    77,
      78,    -1,    51,    52,    53,    54,    55,    56,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    29,    -1,    -1,    -1,    77,    78,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    87,    88,
      89,    90,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    -1,     4,    -1,    -1,    -1,     8,    -1,    -1,
      65,    -1,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    77,    78,    25,    -1,    27,     4,    -1,    -1,
      -1,     8,    87,    88,    89,    90,    13,    -1,    -1,    -1,
      -1,    18,    -1,    44,    -1,    -1,    47,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    29,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    16,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    28,    -1,    -1,
      31,    32,    33,    65,    65,    36,    -1,    69,    39,    40,
      -1,    73,    74,    -1,    45,    65,    77,    78,    49,    69,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    74,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    30,   152,   167,   170,    47,   164,   165,   166,     0,
      23,   168,   169,   171,   172,   173,    73,   110,   164,   111,
     174,   175,   176,   177,   180,   215,   171,    47,    73,   110,
     165,     3,    16,    28,    31,    32,    33,    36,    39,    40,
      45,    49,   178,   179,   181,   177,    91,    65,   110,   179,
       9,    26,   110,    29,    37,    41,    51,    52,    53,    54,
      55,    56,    65,    77,    78,    87,    88,    89,    90,   153,
     164,   211,   267,   268,   269,   270,   272,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   302,   165,   165,     4,     8,    13,    18,    25,
      27,    57,    58,    59,    60,    61,    62,    63,    64,   155,
     156,   157,   158,   160,   161,   164,    73,   155,   164,   302,
     164,   276,   278,   282,   282,   282,   282,   282,   282,    65,
      69,    66,    73,    69,    72,    87,    88,    91,    92,    96,
      89,    90,    97,    98,    24,    75,    76,    83,    84,    81,
      82,    93,    95,    94,    85,    79,    86,    74,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   301,    15,
     182,   184,    15,   214,   216,    69,   273,   274,   273,    65,
      75,   165,    69,   271,   275,    69,   275,    66,   211,   302,
     110,   165,   302,   302,   282,   282,   282,   287,   287,   288,
     288,   155,   159,   160,   163,   164,   289,   289,   289,   289,
     290,   290,   291,   292,   293,   294,   302,   295,   298,   160,
     161,    22,   183,   185,   160,   162,   110,    72,   302,   274,
      69,   271,   211,   162,   186,    65,    70,    66,    69,    66,
     285,    66,    70,    65,    70,    69,    69,    69,    80,   186,
     110,   113,   217,   304,   162,    70,    66,    72,    76,   211,
     282,    70,   285,   211,    70,    70,    70,   297,   187,   304,
     175,   192,   199,   218,   219,   220,   221,   222,   162,    66,
      66,   175,   188,   189,   190,   191,   192,   197,   199,   208,
     222,   181,   110,   114,   305,   220,    36,   181,   207,   305,
     190,   110,    44,   154,   155,   159,   198,   226,   304,   165,
     206,   226,    47,   165,   193,   194,   195,   165,     5,    12,
      19,    21,    34,    38,    39,    40,    42,    46,    48,    50,
      65,   117,   154,   164,   210,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   246,
     247,   251,   252,   257,   258,   259,   260,   261,   263,   269,
     277,   279,   280,   281,   283,   284,   299,    65,    65,    72,
     110,    69,    74,    65,    53,   110,   110,    65,    65,   249,
     302,    65,    65,    65,   302,    65,    53,   110,   110,   302,
     110,    47,   193,    69,   305,   228,   110,   110,   112,   154,
     201,   202,   203,   201,   194,    70,    67,   196,   223,   302,
     201,   110,   226,   154,   230,   235,   248,   254,   256,   302,
     110,   302,   302,   302,   110,   302,   110,   226,    66,   154,
     195,    66,    72,    66,   196,   224,   225,    66,    46,   165,
      71,    72,    66,    66,    66,    66,    66,     7,   262,   264,
     265,   195,    43,   200,   204,   203,   200,    68,    72,   200,
      65,   115,   249,   235,   110,   235,   110,   110,   110,   110,
      65,    17,   266,   265,   161,   205,   110,   196,   302,   116,
     253,   302,    71,   226,   110,   241,   304,   226,   226,   226,
     203,   110,    72,   212,   304,    66,    65,    66,    66,   250,
     255,   256,    14,     6,    11,   240,   242,   243,   244,   245,
      66,   226,   161,    37,    41,   209,   213,   110,   302,   110,
     110,    66,   110,   302,   303,    80,   305,   243,   226,   245,
     110,    65,    65,   210,    72,   226,   226,   110,   226,    80,
     110,   226,   211,   211,   305,   302,   226,   110,    66,    66,
      66,   110,   110
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   151,   152,   153,   153,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   162,   163,   163,   163,   164,   164,   165,
     166,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   181,   181,   182,   182,   183,   183,
     184,   185,   186,   186,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   191,   191,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   205,   205,   206,
     207,   208,   209,   209,   210,   210,   211,   211,   212,   213,
     213,   214,   214,   215,   216,   216,   217,   218,   218,   219,
     219,   220,   220,   221,   222,   223,   224,   224,   225,   225,
     226,   227,   227,   228,   228,   229,   230,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   233,   234,   235,   235,   235,
     235,   235,   235,   235,   236,   237,   238,   239,   240,   240,
     241,   242,   242,   243,   244,   244,   245,   245,   246,   247,
     248,   248,   249,   249,   250,   250,   251,   252,   252,   253,
     254,   254,   255,   256,   256,   257,   257,   258,   258,   259,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   265,
     266,   267,   267,   268,   268,   268,   268,   268,   268,   268,
     269,   270,   270,   271,   271,   272,   272,   273,   273,   274,
     275,   275,   276,   276,   277,   277,   277,   278,   278,   279,
     279,   279,   279,   280,   281,   282,   282,   282,   282,   282,
     283,   284,   285,   285,   285,   285,   286,   286,   286,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   297,   297,
     298,   298,   299,   300,   300,   300,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   302,   303,   304,
     305
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     3,     3,     3,     1,     1,     1,
       3,     1,     0,     1,     0,     1,     2,     3,     1,     1,
       3,     5,     1,     1,     1,     0,     1,     2,     6,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     1,     0,     1,     0,     1,     0,
       2,     2,     1,     3,     3,     1,     0,     1,     2,     1,
       2,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     1,     3,     1,     8,     8,     1,     0,
       1,     0,     1,     3,     2,     3,     2,     1,     3,     1,
       2,     9,     1,     0,     1,     0,     1,     0,     4,     5,
       5,     1,     0,     7,     2,     3,     3,     1,     0,     1,
       2,     1,     1,     1,     2,     3,     1,     0,     1,     3,
       3,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     9,     6,     1,     0,
       3,     1,     2,     2,     1,     2,     4,     3,     6,     8,
       1,     0,     1,     0,     1,     0,    10,     9,     9,     6,
       1,     1,     1,     1,     3,     3,     2,     3,     2,     3,
       3,     6,     6,     1,     0,     4,     5,     1,     2,     6,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     1,     3,     1,     0,     3,     4,     1,     2,     3,
       2,     3,     3,     3,     4,     6,     6,     4,     4,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     5,     4,     5,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 397 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_UNIT, 3);   }
#line 2141 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 402 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_INTLITERAL, (yyvsp[0]. node ));   }
#line 2147 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 404 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FLOATLITERAL, (yyvsp[0]. node ));   }
#line 2153 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_BOOLLITERAL, (yyvsp[0]. node ));   }
#line 2159 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STRINGLITERAL, (yyvsp[0]. node ));   }
#line 2165 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 410 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CHARLITERAL, (yyvsp[0]. node ));   }
#line 2171 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 412 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULLLITERAL, (yyvsp[0]. node ));   }
#line 2177 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_BOOLEAN, (yyvsp[0]. node ));    }
#line 2183 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 433 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT8, (yyvsp[0]. node ));    }
#line 2189 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT16, (yyvsp[0]. node ));    }
#line 2195 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 437 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT32, (yyvsp[0]. node ));    }
#line 2201 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 439 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_UINT64, (yyvsp[0]. node ));    }
#line 2207 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2213 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 443 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT16, (yyvsp[0]. node ));    }
#line 2219 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 445 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2225 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2231 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 449 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT32, (yyvsp[0]. node ));    }
#line 2237 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 451 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT64, (yyvsp[0]. node ));    }
#line 2243 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_INT8, (yyvsp[0]. node ));    }
#line 2249 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 458 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_FLOAT, (yyvsp[0]. node ));    }
#line 2255 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 460 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    PUSH(TOK_DOUBLE, (yyvsp[0]. node ));    }
#line 2261 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 470 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "InterfaceTypeList");
        COMBINE(TOK_TYPE_CLASS, 2);
    }
#line 2270 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 475 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TYPE_CLASS, 2);   }
#line 2276 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 488 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2284 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 492 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_TYPE_ARRAY, 1);
    }
#line 2292 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 496 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        beagle::Node *node = TOP();
        node->setCounter( node->getCounter() + 1 );
    }
#line 2301 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 509 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));    }
#line 2307 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 514 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NAME, (yyvsp[0]. node ));
        COMBINE(0, 1);
    }
#line 2316 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 522 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "PackageDeclaration");   }
#line 2322 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 527 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ImportDeclarations");   }
#line 2328 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 533 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORTS, 1);   }
#line 2334 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 535 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2340 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 540 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PACKAGE, 1);   }
#line 2346 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 550 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IMPORT, 1);   }
#line 2352 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 555 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_IMPORT_ALL, 1);
    }
#line 2360 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 567 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "AnnotationDeclarations");   }
#line 2366 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 572 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATIONS, 1);   }
#line 2372 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 574 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2378 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 579 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANNOTATION, 2);   }
#line 2384 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 581 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "ArgumentList");
		COMBINE(TOK_ANNOTATION, 2);
	}
#line 2393 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 589 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MODIFIERS, 1);   }
#line 2399 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 591 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2405 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 596 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PUBLIC, (yyvsp[0]. node ));   }
#line 2411 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 598 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PROTECTED, (yyvsp[0]. node ));   }
#line 2417 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 600 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PRIVATE, (yyvsp[0]. node ));   }
#line 2423 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 602 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_STATIC, (yyvsp[0]. node ));   }
#line 2429 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 604 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ABSTRACT, (yyvsp[0]. node ));   }
#line 2435 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 606 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_FINAL, (yyvsp[0]. node ));   }
#line 2441 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 608 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NATIVE, (yyvsp[0]. node ));   }
#line 2447 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 610 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_READLOCK, (yyvsp[0]. node ));   }
#line 2453 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 612 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_WRITELOCK, (yyvsp[0]. node ));   }
#line 2459 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 614 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_TRANSIENT, (yyvsp[0]. node ));   }
#line 2465 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 616 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOLATILE, (yyvsp[0]. node ));   }
#line 2471 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 621 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CLASS, 6);   }
#line 2477 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 626 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Modifiers");   }
#line 2483 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 631 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Super");   }
#line 2489 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 636 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Interfaces");   }
#line 2495 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 650 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2501 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 652 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);    }
#line 2507 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 661 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ClassBodyDeclarations");   }
#line 2513 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 666 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2519 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 668 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2525 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 685 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FIELD, 4);   }
#line 2531 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 690 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLES, 1);   }
#line 2537 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 692 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2543 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 697 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "VariableInitializer");
        COMBINE(TOK_VARIABLE, 2);
    }
#line 2552 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 702 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2558 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 707 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NAME, (yyvsp[0]. node ));   }
#line 2564 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 718 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2570 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 724 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_VOID, (yyvsp[0]. node ));   }
#line 2576 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 730 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2582 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 732 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_METHOD, 6);   }
#line 2588 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 738 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Throws");   }
#line 2594 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 744 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "FormalParameterList");   }
#line 2600 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 748 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETERS, 1);   }
#line 2606 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 750 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(0, 1);   }
#line 2612 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 755 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {  COMBINE(TOK_PARAMETER, 2);   }
#line 2618 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 757 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        COMBINE(TOK_PARAMETER, 2);
        TOP()->setCounter( TOP()->getCounter() + 1 );
    }
#line 2627 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 771 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROWS, 1);   }
#line 2633 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 773 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2639 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 782 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_STATIC_INIT, 1);   }
#line 2645 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 787 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CONSTRUCTOR, 6);   }
#line 2651 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 792 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ExplicitConstructorInvocation");   }
#line 2657 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 797 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "BlockStatements");   }
#line 2663 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 802 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ArgumentList");   }
#line 2669 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 807 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 2);   }
#line 2675 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 812 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_THIS);   }
#line 2681 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 814 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_SUPER);   }
#line 2687 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 819 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ExtendsInterfaces");   }
#line 2693 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 824 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INTERFACE, 5);   }
#line 2699 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 829 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(TOK_TYPES, 1);   }
#line 2705 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 831 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {    COMBINE(0, 1);   }
#line 2711 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 840 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "InterfaceMemberDeclarations");   }
#line 2717 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 845 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BODY, 1);   }
#line 2723 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 847 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2729 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 861 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
        PUSH(TOK_NULL, "MethodBody");
        COMBINE(0, 1);
    }
#line 2738 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 873 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "VariableInitializers"); }
#line 2744 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 148:
#line 878 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARRAY, 1);   }
#line 2750 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 149:
#line 880 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2756 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 151:
#line 889 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BLOCK, 1);   }
#line 2762 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 152:
#line 891 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2768 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 156:
#line 905 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_VARIABLE, 2);   }
#line 2774 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 934 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PASS, (yyvsp[-1]. node ));   }
#line 2780 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 184:
#line 953 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2789 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 961 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		COMBINE(TOK_BLOCK, 1);
		PUSH(TOK_NULL, "Block");
		COMBINE(TOK_IF, 3);
	}
#line 2799 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 970 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_IF, 3);   }
#line 2805 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 975 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SWITCH, 2);   }
#line 2811 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 980 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "SwitchBlockStatementGroups");   }
#line 2817 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 989 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2823 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 991 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2829 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 996 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GROUP, 2);   }
#line 2835 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 1001 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2841 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 1003 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2847 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 1008 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CASE, 1);   }
#line 2853 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 1010 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_DEFAULT, (yyvsp[-2]. node ));
		COMBINE(TOK_CASE, 1);
	}
#line 2862 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 1018 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_WHILE, 2);   }
#line 2868 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 1024 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DO, 2);   }
#line 2874 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 1029 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ForInit");   }
#line 2880 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 1034 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Expression");   }
#line 2886 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 1039 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "ForUpdate");   }
#line 2892 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 1044 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR, 4);   }
#line 2898 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 1049 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2904 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 1051 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_FOR_EACH, 4);   }
#line 2910 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 1056 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RANGE, 2);   }
#line 2916 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 1070 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 2922 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 1072 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 2928 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 1077 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_BREAK, 1);
	}
#line 2937 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 1082 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_BREAK, 1);
	}
#line 2946 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 1090 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_BREAK, (yyvsp[-1]. node ));
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2955 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 1095 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_INTLITERAL, "1");
		COMBINE(TOK_CONTINUE, 1);
	}
#line 2964 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 1103 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_RETURN, 1);   }
#line 2970 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 1109 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_THROW, 1);   }
#line 2976 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 1114 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2982 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 1116 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_READLOCK, 2);   }
#line 2988 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 1121 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Catches");   }
#line 2994 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 1126 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_NULL, "finally");
		COMBINE(TOK_TRY, 3);
	}
#line 3003 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 1131 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TRY, 3);   }
#line 3009 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 227:
#line 1136 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3015 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 228:
#line 1138 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3021 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 229:
#line 1143 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CATCH, 2);   }
#line 3027 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 230:
#line 1148 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   TOP()->setType(TOK_FINALLY);   }
#line 3033 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 234:
#line 1159 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_THIS, (yyvsp[0]. node ));   }
#line 3039 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 240:
#line 1169 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW, 2);   }
#line 3045 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 241:
#line 1174 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ARGUMENTS, 1);   }
#line 3051 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 242:
#line 1176 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3057 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 244:
#line 1181 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_NULL, "Dims");   }
#line 3063 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 245:
#line 1186 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3101 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 246:
#line 1220 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NEW_ARRAY, 3);   }
#line 3107 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 247:
#line 1225 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LIST, 1);   }
#line 3113 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 248:
#line 1227 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(0, 1);   }
#line 3119 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 250:
#line 1237 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_TYPE_ARRAY, "");
		TOP()->setCounter(1);
	}
#line 3128 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 251:
#line 1242 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		TOP()->setCounter( TOP()->getCounter() + 1 );
	}
#line 3136 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 252:
#line 1248 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_FIELD, 2);   }
#line 3142 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 253:
#line 1250 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		PUSH(TOK_SUPER, (yyvsp[-2]. node ));
		COMBINE(TOK_ACCESS_FIELD, 2);
	}
#line 3151 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 254:
#line 1258 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *second, *third;

		third = POP();
		second = POP();
		PUSH(TOK_NULL, "Primary");
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CALL, 3);
	}
#line 3167 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 255:
#line 1270 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CALL, 3);   }
#line 3173 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 256:
#line 1272 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
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
#line 3196 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 257:
#line 1294 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3202 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 258:
#line 1296 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ACCESS_ARRAY, 2);   }
#line 3208 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 263:
#line 1308 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3214 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 264:
#line 1313 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3220 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 267:
#line 1320 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 1);   }
#line 3226 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 268:
#line 1322 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 1);   }
#line 3232 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 270:
#line 1328 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INC, 1);   }
#line 3238 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 271:
#line 1333 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DEC, 1);   }
#line 3244 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 273:
#line 1339 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_TILDE, 1);   }
#line 3250 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 274:
#line 1341 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_BANG, 1);   }
#line 3256 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 276:
#line 1348 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		if (second->getType() == TOK_NULL)
		{
			delete second;
			second = first;
		}
		else
			second->addChild(first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3280 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 277:
#line 1368 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CAST, 2);   }
#line 3286 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 278:
#line 1370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {
		beagle::Node *first, *second, *third;

		third = POP();
		second = POP();
		first = POP();

		second->addChild(first);
		NPUSH(second);
		NPUSH(third);

		COMBINE(TOK_CAST, 2);
	}
#line 3304 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 280:
#line 1388 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MUL, 2);   }
#line 3310 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 281:
#line 1390 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_DIV, 2);   }
#line 3316 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 282:
#line 1392 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MOD, 2);   }
#line 3322 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 284:
#line 1398 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_PLUS, 2);   }
#line 3328 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 285:
#line 1400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_MINUS, 2);   }
#line 3334 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 287:
#line 1406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHL, 2);   }
#line 3340 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 288:
#line 1408 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_SHR, 2);   }
#line 3346 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 290:
#line 1414 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LT, 2);   }
#line 3352 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 291:
#line 1416 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GT, 2);   }
#line 3358 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 292:
#line 1418 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_LE, 2);   }
#line 3364 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 293:
#line 1420 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_GE, 2);   }
#line 3370 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 294:
#line 1422 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_INSTANCEOF, 2);   }
#line 3376 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 296:
#line 1428 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_EQ, 2);   }
#line 3382 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 297:
#line 1430 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_NE, 2);   }
#line 3388 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 299:
#line 1436 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_AND, 2);   }
#line 3394 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 301:
#line 1442 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_CARET, 2);   }
#line 3400 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 303:
#line 1448 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OR, 2);   }
#line 3406 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 305:
#line 1454 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_ANDAND, 2);   }
#line 3412 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 307:
#line 1460 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_OROR, 2);   }
#line 3418 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 309:
#line 1466 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   COMBINE(TOK_QUEST, 2);   }
#line 3424 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 312:
#line 1476 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {

        /*
         * Change the expression notation from infixed to prefixed
         */

        beagle::Node *left, *right, *oper;

        right = POP();
        oper = POP();
        left = POP();

        oper->addChild(left);
        oper->addChild(right);
        NPUSH(oper);
    }
#line 3445 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 316:
#line 1502 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ASN, (yyvsp[0]. node ));   }
#line 3451 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 317:
#line 1504 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MUASN, (yyvsp[0]. node ));   }
#line 3457 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 318:
#line 1506 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_DIASN, (yyvsp[0]. node ));   }
#line 3463 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 319:
#line 1508 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MODASN, (yyvsp[0]. node ));   }
#line 3469 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 320:
#line 1510 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_PLASN, (yyvsp[0]. node ));   }
#line 3475 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 321:
#line 1512 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_MIASN, (yyvsp[0]. node ));   }
#line 3481 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 322:
#line 1514 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SLASN, (yyvsp[0]. node ));   }
#line 3487 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 323:
#line 1516 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_SRASN, (yyvsp[0]. node ));   }
#line 3493 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 324:
#line 1518 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ANDASN, (yyvsp[0]. node ));   }
#line 3499 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 325:
#line 1520 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_CARETASN, (yyvsp[0]. node ));   }
#line 3505 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;

  case 326:
#line 1522 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1646  */
    {   PUSH(TOK_ORASN, (yyvsp[0]. node ));   }
#line 3511 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
    break;


#line 3515 "/media/dados/projetos/beagle/modules/parser/source/beagle.y.cc" /* yacc.c:1646  */
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
#line 1542 "/media/dados/projetos/beagle/modules/parser/source/beagle.y" /* yacc.c:1906  */



#ifdef scanner
#undef scanner
#endif

// Note: we need to create this function because the variable 'yytname'
//       and the macro 'YYTRANSLATE' are only visible in this file.

const char *beagle_getTokenName( int tok )
{
    return yytname[YYTRANSLATE(tok)];
}


