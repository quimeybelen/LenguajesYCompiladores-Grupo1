
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "sintactico.tab.h"
int yystopparser=0;
FILE  *yyin;
char* tipoDato;

//////////////////////PILA
	typedef struct
	{
		int posicion;
	}t_info;

	typedef struct s_nodoPila{
    	t_info info;
    	struct s_nodoPila* psig;
	}t_nodoPila;

	typedef t_nodoPila *t_pila;

        typedef struct
	{
		char* tipoDato;
                char* nombre;
	}t_infoIds;

        typedef struct s_nodoPilaIds{
    	t_infoIds infoIds;
    	struct s_nodoPilaIds* psig;
	}t_nodoPilaIds;

	typedef t_nodoPilaIds *t_pilaIds;

/////////////////////POLACA
	typedef struct
	{
		char contenido[30];
		int posicion;
	}t_infoPolaca;
  
  typedef struct s_nodoPolaca{
    	t_infoPolaca info;
    	struct s_nodoPolaca* psig;
	}t_nodoPolaca;

	typedef t_nodoPolaca* t_polaca;


int insertarEnTS(char[],char[],int);
int apilar(t_pila* ,const t_info* );
t_info desapilar(t_pila *pila);
char *  desapilarId(t_pilaIds *pilaIds);
void crearPila(t_pila* );
void crearPilaIds(t_pilaIds* pilaIds);
int apilarId(t_pilaIds* pilaIds,const t_infoIds* infoPilaIds);
void crearPolaca(t_polaca* );
int insertarPolaca(t_polaca*,char*);
int escribirPosicionPolaca(t_polaca* ,int , char*);
void guardarArchivoPolaca(t_polaca*);
void  mostrarPilaIDs(t_pilaIds* );

t_pila pila;
t_pilaIds pilaIds;
int posicion = 0;
t_polaca polaca;





/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     DEFINE = 259,
     ENDDEFINE = 260,
     CONST_INT = 261,
     CONST_REAL = 262,
     CONST_STR = 263,
     ID = 264,
     REAL = 265,
     FLOAT = 266,
     INT = 267,
     PYC = 268,
     STRING = 269,
     BEGINP = 270,
     ENDP = 271,
     IF = 272,
     THEN = 273,
     ELSE = 274,
     ENDIF = 275,
     LET = 276,
     FOR = 277,
     TO = 278,
     DO = 279,
     ENDFOR = 280,
     WHILE = 281,
     ENDW = 282,
     REPEAT = 283,
     UNTIL = 284,
     OP_LOG = 285,
     OP_NOT = 286,
     OP_DOSP = 287,
     OP_COMPARACION = 288,
     OP_ASIG = 289,
     OP_SUM = 290,
     OP_RES = 291,
     OP_DIV = 292,
     OP_MULT = 293,
     COMA = 294,
     P_A = 295,
     P_C = 296,
     C_A = 297,
     C_C = 298,
     LONG = 299,
     IN = 300,
     DEFVAR = 301,
     ENDDEF = 302,
     GET = 303,
     DISPLAY = 304,
     COMENTARIOS = 305,
     ASIG = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


int int_val;
double float_val;
char *str_val;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     8,    12,    13,    19,    20,    25,
      27,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    63,    68,
      75,    86,    94,   104,   106,   110,   113,   117,   123,   127,
     131,   133,   135,   139,   143,   145,   147,   149,   151,   158,
     160,   164,   166,   170,   174,   176,   179,   183,   185,   187,
     189,   192,   196,   199
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    -1,     3,    54,    55,    -1,    15,    58,
      16,    -1,    -1,    15,    73,    56,    58,    16,    -1,    -1,
      15,    73,    57,    16,    -1,    59,    -1,    58,    59,    -1,
      62,    -1,    64,    -1,    77,    -1,    60,    -1,    78,    -1,
      79,    -1,    65,    -1,    67,    -1,    68,    -1,    69,    -1,
      72,    -1,    71,    -1,    76,    -1,    63,    -1,    70,    -1,
      50,    -1,    -1,     9,    61,    34,    67,    -1,    26,    40,
      65,    41,    58,    27,    -1,     9,    51,    17,    40,    65,
      39,    67,    39,    67,    41,    -1,    17,    40,    65,    41,
      18,    58,    20,    -1,    17,    40,    65,    41,    18,    58,
      19,    58,    20,    -1,    66,    -1,    65,    30,    66,    -1,
      31,    66,    -1,    67,    33,    67,    -1,    40,    67,    33,
      67,    41,    -1,    67,    35,    68,    -1,    67,    36,    68,
      -1,    68,    -1,    69,    -1,    68,    37,    69,    -1,    68,
      38,    69,    -1,     9,    -1,     6,    -1,     8,    -1,     7,
      -1,    21,    71,    34,    40,    72,    41,    -1,     9,    -1,
      71,    39,     9,    -1,    67,    -1,    72,    13,    67,    -1,
      46,    74,    47,    -1,    75,    -1,    74,    75,    -1,    76,
      32,    77,    -1,    11,    -1,    14,    -1,    12,    -1,     9,
      13,    -1,    77,     9,    13,    -1,    48,     9,    -1,    49,
      69,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   121,   127,   128,   128,   130,   130,   134,
     135,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   160,   160,   163,
     165,   167,   168,   171,   172,   173,   176,   177,   180,   181,
     182,   185,   186,   187,   190,   191,   192,   193,   196,   199,
     206,   215,   227,   240,   243,   244,   247,   250,   251,   252,
     255,   260,   263,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "DEFINE", "ENDDEFINE",
  "CONST_INT", "CONST_REAL", "CONST_STR", "ID", "REAL", "FLOAT", "INT",
  "PYC", "STRING", "BEGINP", "ENDP", "IF", "THEN", "ELSE", "ENDIF", "LET",
  "FOR", "TO", "DO", "ENDFOR", "WHILE", "ENDW", "REPEAT", "UNTIL",
  "OP_LOG", "OP_NOT", "OP_DOSP", "OP_COMPARACION", "OP_ASIG", "OP_SUM",
  "OP_RES", "OP_DIV", "OP_MULT", "COMA", "P_A", "P_C", "C_A", "C_C",
  "LONG", "IN", "DEFVAR", "ENDDEF", "GET", "DISPLAY", "COMENTARIOS",
  "ASIG", "$accept", "programa", "$@1", "codigo", "$@2", "$@3",
  "bloqueTemasComunesYEspeciales", "temaComunYEspecial", "asignacion",
  "$@4", "iteracion", "ifUnario", "decision", "condicion", "comparacion",
  "expresion", "termino", "factor", "let", "listaVarLetIzq",
  "listaVarLetDer", "bloqueDeclaracion", "declaraciones", "declaracion",
  "tipodato", "listavariables", "entrada", "salida", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    54,    53,    55,    56,    55,    57,    55,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    61,    60,    62,
      63,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    73,    74,    74,    75,    76,    76,    76,
      77,    77,    78,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     3,     0,     5,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     6,
      10,     7,     9,     1,     3,     2,     3,     5,     3,     3,
       1,     1,     3,     3,     1,     1,     1,     1,     6,     1,
       3,     1,     3,     3,     1,     2,     3,     1,     1,     1,
       2,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     3,    45,    47,    46,
      44,    57,    59,    58,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     9,    14,    11,    24,    12,    17,
      33,    18,    19,    20,    25,    22,    21,     5,    23,    13,
      15,    16,    60,     0,     0,     0,    49,     0,     0,    44,
      35,     0,    40,    41,     0,     0,    54,     0,    62,    63,
       4,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      55,     0,    34,    36,    38,    39,    42,    43,    50,    52,
       0,     8,    61,     0,    28,     0,     0,     0,     0,     0,
      56,     6,     0,     0,    51,     0,     0,    37,     0,     0,
      48,    29,     0,     0,    31,     0,     0,     0,    32,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    70,    71,    23,    24,    25,    44,
      26,    27,    28,    29,    30,    31,    52,    53,    34,    35,
      36,    37,    55,    56,    38,    39,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
      12,   -64,    25,    14,   -64,   135,   -64,   -64,   -64,   -64,
      -7,   -64,   -64,   -64,    -9,    28,    11,    51,   170,    42,
      62,   170,   -64,   180,   -64,   -64,   -64,   -64,   -64,    50,
     -64,     0,    39,   235,   -64,    49,    81,    86,   -64,    88,
     -64,   -64,   -64,    90,    69,    15,   -64,     9,    15,   -64,
     -64,   115,    26,   -64,   122,    -2,   -64,    73,   -64,   -64,
     -64,   -64,    51,   170,   170,   170,   170,   170,   101,   170,
     287,    97,   102,    78,   170,   -13,    84,   -11,   170,   -64,
     -64,   118,   -64,    43,    26,    26,   -64,   -64,   -64,    43,
     196,   -64,   -64,    15,    43,   112,   170,   287,    46,   119,
      88,   -64,   -19,   287,    43,     1,   226,   -64,   170,   114,
     -64,   -64,   132,   287,   -64,   170,   271,   124,   -64,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,   -64,   -64,   -64,   -64,   -63,   -20,   -64,   -64,
     -64,   -64,   -64,   -44,   -15,    21,     3,    -5,   -64,   123,
      41,   -64,   -64,    98,   -14,    58,   -64,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int8 yytable[] =
{
      33,    75,    50,    61,    77,    57,    42,    90,    32,    11,
      12,    62,    13,   -51,    69,     1,    59,    62,    33,    62,
     108,     7,     8,     9,    49,     4,    32,   -27,    95,     5,
      97,    45,   -49,    63,   106,    64,    65,    46,    51,    54,
     109,    57,   110,    76,    43,    79,    17,    82,    68,   102,
     116,    48,   -40,    11,    12,    18,    13,     7,     8,     9,
      49,    86,    87,    66,    67,    33,    51,    84,    85,    51,
      61,    58,   -40,    32,   -40,   -40,    66,    67,    64,    65,
      62,    64,    65,    51,    83,    33,    61,   107,    68,    61,
      89,    18,    33,    32,    69,    94,    61,    72,    33,    98,
      32,    33,    -7,    74,    33,    81,    32,    73,    33,    32,
      88,    33,    32,    91,    51,    92,    32,   104,    93,    32,
       7,     8,     9,    10,    96,    11,    12,    99,    13,   112,
     103,    14,    42,   113,   114,    15,   117,   105,    47,   100,
      16,     7,     8,     9,    10,    17,    11,    12,    63,    13,
      64,    65,    14,    80,    18,    78,    15,    64,    65,    64,
      65,    16,    20,    21,    22,   119,    17,    64,    65,     0,
       0,   115,     0,     0,     0,    18,     7,     8,     9,    49,
       0,    19,     0,    20,    21,    22,     7,     8,     9,    10,
       0,    11,    12,     0,    13,     0,    60,    14,     0,     0,
       0,    15,     7,     8,     9,    10,    16,    11,    12,     0,
      13,    17,   101,    14,     0,     0,     0,    15,     0,     0,
      18,     0,    16,     0,     0,     0,     0,    17,    20,    21,
      22,     0,     7,     8,     9,    10,    18,    11,    12,     0,
      13,     0,     0,    14,    20,    21,    22,    15,   -41,     0,
       0,     0,    16,   111,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,   -41,     0,
     -41,   -41,   -41,   -41,    20,    21,    22,     7,     8,     9,
      10,     0,    11,    12,     0,    13,     0,     0,    14,     0,
       0,   118,    15,     7,     8,     9,    10,    16,    11,    12,
       0,    13,    17,     0,    14,     0,     0,     0,    15,     0,
       0,    18,     0,    16,     0,     0,     0,     0,    17,    20,
      21,    22,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22
};

static const yytype_int8 yycheck[] =
{
       5,    45,    17,    23,    48,    19,    13,    70,     5,    11,
      12,    30,    14,    13,    13,     3,    21,    30,    23,    30,
      39,     6,     7,     8,     9,     0,    23,    34,    41,    15,
      41,    40,    39,    33,    97,    35,    36,     9,    17,    18,
     103,    55,    41,    34,    51,    47,    31,    62,    39,    93,
     113,    40,    13,    11,    12,    40,    14,     6,     7,     8,
       9,    66,    67,    37,    38,    70,    45,    64,    65,    48,
      90,     9,    33,    70,    35,    36,    37,    38,    35,    36,
      30,    35,    36,    62,    63,    90,   106,    41,    39,   109,
      69,    40,    97,    90,    13,    74,   116,     9,   103,    78,
      97,   106,    16,    34,   109,    32,   103,    17,   113,   106,
       9,   116,   109,    16,    93,    13,   113,    96,    40,   116,
       6,     7,     8,     9,    40,    11,    12,     9,    14,   108,
      18,    17,    13,    19,    20,    21,   115,    96,    15,    81,
      26,     6,     7,     8,     9,    31,    11,    12,    33,    14,
      35,    36,    17,    55,    40,    33,    21,    35,    36,    35,
      36,    26,    48,    49,    50,    41,    31,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    40,     6,     7,     8,     9,
      -1,    46,    -1,    48,    49,    50,     6,     7,     8,     9,
      -1,    11,    12,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    21,     6,     7,     8,     9,    26,    11,    12,    -1,
      14,    31,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      40,    -1,    26,    -1,    -1,    -1,    -1,    31,    48,    49,
      50,    -1,     6,     7,     8,     9,    40,    11,    12,    -1,
      14,    -1,    -1,    17,    48,    49,    50,    21,    13,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    33,    -1,
      35,    36,    37,    38,    48,    49,    50,     6,     7,     8,
       9,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,    20,    21,     6,     7,     8,     9,    26,    11,    12,
      -1,    14,    31,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    40,    -1,    26,    -1,    -1,    -1,    -1,    31,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,     0,    15,    55,     6,     7,     8,
       9,    11,    12,    14,    17,    21,    26,    31,    40,    46,
      48,    49,    50,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    76,    77,
      78,    79,    13,    51,    61,    40,     9,    71,    40,     9,
      66,    67,    68,    69,    67,    74,    75,    76,     9,    69,
      16,    59,    30,    33,    35,    36,    37,    38,    39,    13,
      56,    57,     9,    17,    34,    65,    34,    65,    33,    47,
      75,    32,    66,    67,    68,    68,    69,    69,     9,    67,
      58,    16,    13,    40,    67,    41,    40,    41,    67,     9,
      77,    16,    65,    18,    67,    72,    58,    41,    39,    58,
      41,    27,    67,    19,    20,    39,    58,    67,    20,    41
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

    {printf("COMPILACION INICIADA\n");;}
    break;

  case 3:

    {printf("COMPILACION EXITOSA\n");;}
    break;

  case 5:

    {printf("--------------------------BLOQUE_DECLARACION\n\n\n");;}
    break;

  case 7:

    {printf("--------------------------BLOQUE_DECLARACION\n\n\n");;}
    break;

  case 11:

    {printf("--------------------------ITERACION\n\n\n");;}
    break;

  case 12:

    {printf("--------------------------DECISION\n\n\n");;}
    break;

  case 13:

    {printf("--------------------------LISTA_VARIABLES\n\n\n");;}
    break;

  case 14:

    {printf("--------------------------ASIGNACION\n\n\n");;}
    break;

  case 15:

    {printf("--------------------------ENTRADA\n\n\n");;}
    break;

  case 16:

    {printf("--------------------------SALIDA\n\n\n");;}
    break;

  case 17:

    {printf("--------------------------CONDICION\n\n\n");;}
    break;

  case 18:

    {printf("--------------------------EXPRESION\n\n\n");;}
    break;

  case 19:

    {printf("--------------------------TERMINO\n\n\n");;}
    break;

  case 20:

    {printf("--------------------------FACTOR\n\n\n");;}
    break;

  case 21:

    {printf("--------------------------LISTA_VARIABLES_LET_DERECHA\n\n\n");;}
    break;

  case 22:

    {printf("--------------------------LISTA_VARIABLES_LET_IZQUIERDA\n\n\n");;}
    break;

  case 23:

    {printf("--------------------------TIPO_DE_DATO\n\n\n");;}
    break;

  case 24:

    {printf("--------------------------IF_UNARIO\n\n\n");;}
    break;

  case 25:

    {printf("--------------------------LET\n\n\n");;}
    break;

  case 26:

    {printf("--------------------------COMENTARIO\n\n\n");;}
    break;

  case 27:

    { insertarPolaca(&polaca,yylval.str_val); ;}
    break;

  case 28:

    {insertarPolaca(&polaca,"OP_ASIG");;}
    break;

  case 38:

    { insertarPolaca(&polaca,"OP_SUM");  ;}
    break;

  case 39:

    { insertarPolaca(&polaca,"OP_RES"); ;}
    break;

  case 42:

    { insertarPolaca(&polaca,"OP_DIV");  ;}
    break;

  case 43:

    { insertarPolaca(&polaca,"OP_MULT"); ;}
    break;

  case 44:

    { insertarPolaca(&polaca,yylval.str_val); ;}
    break;

  case 45:

    { insertarPolaca(&polaca,yylval.str_val); ;}
    break;

  case 46:

    { insertarPolaca(&polaca,yylval.str_val); ;}
    break;

  case 47:

    { insertarPolaca(&polaca,yylval.str_val); ;}
    break;

  case 49:

    {
                        t_infoIds infoId;
                        infoId.nombre = yylval.str_val;
                        apilarId(&pilaIds,&infoId);
                        printf("apile %s\n", infoId.nombre);
                        mostrarPilaIDs(&pilaIds)
                ;}
    break;

  case 50:

    {
                        t_infoIds infoId;
                        infoId.nombre = yylval.str_val;
                        apilarId(&pilaIds,&infoId);
                         printf("apile %s\n", infoId.nombre);
                         mostrarPilaIDs(&pilaIds)
                ;}
    break;

  case 51:

    {
        char* infoId;
        infoId = desapilarId(&pilaIds);
        printf("desapile %s\n", infoId);
  
        if(infoId!=NULL){
                        // insertarPolaca(&polaca, info.nombre);
         }
        // else {printf("La cantidad de ids es insuficiente"); exit(-1);}
        ;}
    break;

  case 52:

    {
        char* infoId;
        infoId = desapilarId(&pilaIds);
        printf("desapile %s\n", infoId);
         if(infoId!=NULL){
            // insertarPolaca(&polaca, info.nombre);
       }
        // else {printf("La cantidad de ids es insuficiente"); exit(-1);}
         ;}
    break;

  case 57:

    {tipoDato = "Float";}
    break;

  case 58:

    {tipoDato = "String";}
    break;

  case 59:

    {tipoDato = "Integer";}
    break;

  case 60:

    {
                     nuevoSimbolo(tipoDato,"--",(tipoDato=="String")?strlen(yylval.str_val):0);
                     t_infoIds* infoId;
                ;}
    break;

  case 61:

    {nuevoSimbolo(tipoDato,"--",(tipoDato=="String")?strlen(yylval.str_val):0);;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





int main(int argc,char *argv[])
{
   
        crearPila(&pila);
        crearPilaIds(&pilaIds);
        crearPolaca(&polaca);
        if ((yyin = fopen(argv[1], "rt")) == NULL)
        {
                printf("\nNo se puede abrir el archivo: %s\n", argv[1]);
        }
        else
        {
                yyparse();
        }
        fclose(yyin);
        guardarArchivoPolaca(&polaca);
        return 0;
}
int yyerror(void)
     {
       printf("Syntax Error\n");
	 system ("Pause");
	 exit (1);
     }



//////////////////////////////////////////////// FUNCIONES  /////////////////////////////////////////////////////////////////////////////////
///////////////////////// PILA
void crearPila(t_pila* pila){
        pila = NULL;
}

int apilar(t_pila* pila,const t_info* infoPila)
{   t_nodoPila *nuevoNodo=(t_nodoPila*) malloc(sizeof(t_nodoPila));
    if(nuevoNodo==NULL)
        return(0); //Sin_memoria
    nuevoNodo->info=*infoPila;
    nuevoNodo->psig=*pila;
    *pila=nuevoNodo;
    return(1);
}

t_info desapilar(t_pila *pila)
{   t_nodoPila *aux;
    t_info infoPila;
    if(*pila==NULL)
        return (*pila)->info;
    aux=*pila;
    infoPila=(*pila)->info;
    *pila=(*pila)->psig; 
    free(aux); 
    return infoPila; 
}


///////////////////////// PILA IDs
void crearPilaIds(t_pilaIds* pilaIds){
        pilaIds = NULL;
}

int apilarId(t_pilaIds* pilaIds,const t_infoIds* infoPilaIds)
{   t_nodoPilaIds *nuevoNodo=(t_nodoPilaIds*) malloc(sizeof(t_nodoPilaIds));
    if(nuevoNodo==NULL)
        return(0); //Sin_memoria
    nuevoNodo->infoIds=*infoPilaIds;
    nuevoNodo->psig=*pilaIds;
    *pilaIds=nuevoNodo;
    return(1);
}

char * desapilarId(t_pilaIds *pilaIds)
{ 
       printf("desapile");
  t_nodoPilaIds *aux;
    char * infoPilaIds;
    
    if(*pilaIds==NULL){
         return (*pilaIds)->infoIds.nombre;
    }

    aux=*pilaIds;
    infoPilaIds=(*pilaIds)->infoIds.nombre;

    *pilaIds=(*pilaIds)->psig; 
    free(aux); 
        
        
    return infoPilaIds; 
}

void mostrarPilaIDs(t_pilaIds* pilaIds)
{

        while(*pilaIds){
          printf("Pila: %s\n",(*pilaIds)->infoIds.nombre);    
          *pilaIds=(*pilaIds)->psig; 
        }
         
}

void VaciarPila(t_pilaIds* pilaIds){
         pilaIds = NULL;
}

///////////////////////// POLACA

// esto no deberia ser una lista?

void crearPolaca(t_polaca* ppolaca){

        *ppolaca = NULL;
}

int insertarPolaca(t_polaca* ppolaca,char *contenido)
{
        t_nodoPolaca* nuevoNodo = (t_nodoPolaca*)malloc(sizeof(t_nodoPolaca));
        if(!nuevoNodo){
                return 0;
        }
 
        strcpy(nuevoNodo->info.contenido,contenido);
        nuevoNodo->info.posicion=posicion++;
        nuevoNodo->psig=NULL;

        while( *ppolaca)
        {            
                ppolaca=&(*ppolaca)->psig;     
        }
        
        *ppolaca=nuevoNodo;        
        return 1;
}

int escribirPosicionPolaca(t_polaca* ppolaca,int posicion, char *contenido) //insertar en polaca y poner pos actual 
	{
	        t_nodoPolaca* aux;
		aux=*ppolaca;
	    while(aux!=NULL && aux->info.posicion<=posicion){
	    	aux=aux->psig;
                    if(aux->info.posicion==posicion){
                        strcpy(aux->info.contenido,contenido);
                        return 1;
                    }
	    }	    
	    return 0;
	}


void guardarArchivoPolaca(t_polaca *ppolaca){
		FILE*pint=fopen("intermedia.txt","w+");
		t_nodoPolaca* nuevoNodo;
		if(!pint){
			printf("Error al crear el archivo intermedia.txt\n");
			return;
		}
		while(*ppolaca)
	    {
	        nuevoNodo=*ppolaca;
	        fprintf(pint, "%s\n",nuevoNodo->info.contenido);
	        *ppolaca=(*ppolaca)->psig;
	        free(nuevoNodo);
	    }
		fclose(pint);
	}

///////////////////////// TABLA DE SIMBOLOS
int nuevoSimbolo(char* tipoDato,char valorString[],int longitud){
  FILE *tablasimbolos = fopen("ts.txt","rw");
  char lineaescrita[100];
  char valorBuscado[100];
  char linealeida[100];
  char *lineasiguiente;
  int encontro = 0;
  int i = 0;
  sprintf(lineaescrita, (longitud != 0)? 
          "%s\t\t%s\t\t%s\t\t%d":
          "%s\t\t%s\t\t%s\t\t--",
          yylval.str_val,tipoDato,valorString,longitud); //nombre-tipo de dato-valor-longitud

  lineasiguiente = fgets(linealeida,100,tablasimbolos);
  while(lineasiguiente  && !encontro){
	  strcpy(valorBuscado,lineaescrita);
	  strcat(valorBuscado,"\n");
          encontro = !strcmp(valorBuscado,linealeida);
	  lineasiguiente = fgets(linealeida,100,tablasimbolos);
  }
  fclose(tablasimbolos);
  tablasimbolos = fopen("ts.txt","a");
  if(!encontro){
    fprintf(tablasimbolos,"%s\n",lineaescrita);
  }
  fclose(tablasimbolos);
}
int buscarEnTS(){
  FILE *tablasimbolos = fopen("ts.txt","rw");
  

  fclose(tablasimbolos);
}


