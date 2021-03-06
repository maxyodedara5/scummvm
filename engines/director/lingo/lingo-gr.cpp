/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     UNARY = 258,
     CASTREF = 259,
     VOID = 260,
     VAR = 261,
     POINT = 262,
     RECT = 263,
     ARRAY = 264,
     OBJECT = 265,
     REFERENCE = 266,
     INT = 267,
     THEENTITY = 268,
     THEENTITYWITHID = 269,
     FLOAT = 270,
     BLTIN = 271,
     BLTINNOARGS = 272,
     BLTINNOARGSORONE = 273,
     BLTINONEARG = 274,
     BLTINARGLIST = 275,
     TWOWORDBUILTIN = 276,
     FBLTIN = 277,
     FBLTINNOARGS = 278,
     FBLTINONEARG = 279,
     FBLTINARGLIST = 280,
     RBLTIN = 281,
     RBLTINONEARG = 282,
     ID = 283,
     STRING = 284,
     HANDLER = 285,
     SYMBOL = 286,
     ENDCLAUSE = 287,
     tPLAYACCEL = 288,
     tDOWN = 289,
     tELSE = 290,
     tNLELSIF = 291,
     tEXIT = 292,
     tFRAME = 293,
     tGLOBAL = 294,
     tGO = 295,
     tIF = 296,
     tINTO = 297,
     tLOOP = 298,
     tMACRO = 299,
     tMOVIE = 300,
     tNEXT = 301,
     tOF = 302,
     tPREVIOUS = 303,
     tPUT = 304,
     tREPEAT = 305,
     tSET = 306,
     tTHEN = 307,
     tTO = 308,
     tWHEN = 309,
     tWITH = 310,
     tWHILE = 311,
     tNLELSE = 312,
     tFACTORY = 313,
     tMETHOD = 314,
     tOPEN = 315,
     tPLAY = 316,
     tDONE = 317,
     tINSTANCE = 318,
     tGE = 319,
     tLE = 320,
     tGT = 321,
     tLT = 322,
     tEQ = 323,
     tNEQ = 324,
     tAND = 325,
     tOR = 326,
     tNOT = 327,
     tMOD = 328,
     tAFTER = 329,
     tBEFORE = 330,
     tCONCAT = 331,
     tCONTAINS = 332,
     tSTARTS = 333,
     tCHAR = 334,
     tITEM = 335,
     tLINE = 336,
     tWORD = 337,
     tSPRITE = 338,
     tINTERSECTS = 339,
     tWITHIN = 340,
     tTELL = 341,
     tPROPERTY = 342,
     tON = 343,
     tME = 344
   };
#endif
/* Tokens.  */
#define UNARY 258
#define CASTREF 259
#define VOID 260
#define VAR 261
#define POINT 262
#define RECT 263
#define ARRAY 264
#define OBJECT 265
#define REFERENCE 266
#define INT 267
#define THEENTITY 268
#define THEENTITYWITHID 269
#define FLOAT 270
#define BLTIN 271
#define BLTINNOARGS 272
#define BLTINNOARGSORONE 273
#define BLTINONEARG 274
#define BLTINARGLIST 275
#define TWOWORDBUILTIN 276
#define FBLTIN 277
#define FBLTINNOARGS 278
#define FBLTINONEARG 279
#define FBLTINARGLIST 280
#define RBLTIN 281
#define RBLTINONEARG 282
#define ID 283
#define STRING 284
#define HANDLER 285
#define SYMBOL 286
#define ENDCLAUSE 287
#define tPLAYACCEL 288
#define tDOWN 289
#define tELSE 290
#define tNLELSIF 291
#define tEXIT 292
#define tFRAME 293
#define tGLOBAL 294
#define tGO 295
#define tIF 296
#define tINTO 297
#define tLOOP 298
#define tMACRO 299
#define tMOVIE 300
#define tNEXT 301
#define tOF 302
#define tPREVIOUS 303
#define tPUT 304
#define tREPEAT 305
#define tSET 306
#define tTHEN 307
#define tTO 308
#define tWHEN 309
#define tWITH 310
#define tWHILE 311
#define tNLELSE 312
#define tFACTORY 313
#define tMETHOD 314
#define tOPEN 315
#define tPLAY 316
#define tDONE 317
#define tINSTANCE 318
#define tGE 319
#define tLE 320
#define tGT 321
#define tLT 322
#define tEQ 323
#define tNEQ 324
#define tAND 325
#define tOR 326
#define tNOT 327
#define tMOD 328
#define tAFTER 329
#define tBEFORE 330
#define tCONCAT 331
#define tCONTAINS 332
#define tSTARTS 333
#define tCHAR 334
#define tITEM 335
#define tLINE 336
#define tWORD 337
#define tSPRITE 338
#define tINTERSECTS 339
#define tWITHIN 340
#define tTELL 341
#define tPROPERTY 342
#define tON 343
#define tME 344




/* Copy the first part of user declarations.  */
#line 49 "engines/director/lingo/lingo-gr.y"

#define FORBIDDEN_SYMBOL_ALLOW_ALL

#include "common/hash-str.h"

#include "director/lingo/lingo.h"
#include "director/lingo/lingo-gr.h"

extern int yylex();
extern int yyparse();

using namespace Director;
void yyerror(const char *s) {
	g_lingo->_hadError = true;
	warning("%s at line %d col %d", s, g_lingo->_linenumber, g_lingo->_colnumber);
}

void checkEnd(Common::String *token, const char *expect, bool required) {
	if (required) {
		if (token->compareToIgnoreCase(expect)) {
			Common::String err = Common::String::format("end mismatch. Expected %s but got %s", expect, token->c_str());
			yyerror(err.c_str());
		}
	}

	delete token;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 79 "engines/director/lingo/lingo-gr.y"
{
	Common::String *s;
	int i;
	double f;
	int e[2];	// Entity + field
	int code;
	int narg;	/* number of arguments */
	Common::Array<double> *arr;
}
/* Line 193 of yacc.c.  */
#line 314 "engines/director/lingo/lingo-gr.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 327 "engines/director/lingo/lingo-gr.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  124
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1878

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNRULES -- Number of states.  */
#define YYNSTATES  357

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      97,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    96,    91,     2,
      98,    99,    94,    92,   104,    93,     2,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,    90,   100,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   102,     2,   103,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    15,    17,    19,
      21,    26,    31,    36,    41,    46,    51,    57,    62,    67,
      73,    75,    77,    79,    81,    89,   100,   112,   116,   123,
     128,   136,   147,   158,   165,   176,   187,   188,   192,   195,
     197,   200,   202,   209,   211,   218,   220,   224,   228,   231,
     235,   237,   239,   240,   241,   242,   245,   248,   252,   254,
     256,   258,   260,   262,   264,   267,   270,   275,   280,   282,
     284,   287,   289,   293,   297,   301,   305,   309,   313,   317,
     321,   325,   329,   333,   337,   340,   344,   348,   352,   356,
     359,   362,   366,   370,   375,   380,   385,   392,   397,   404,
     409,   416,   421,   428,   431,   434,   436,   438,   441,   443,
     446,   449,   452,   454,   457,   460,   462,   465,   470,   475,
     482,   487,   490,   494,   496,   500,   502,   506,   508,   512,
     515,   518,   521,   524,   528,   531,   534,   536,   540,   543,
     546,   549,   553,   556,   557,   561,   562,   571,   574,   575,
     584,   592,   599,   602,   603,   605,   609,   614,   615,   618,
     619,   621,   625,   627
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     106,     0,    -1,   106,   107,   108,    -1,   108,    -1,     1,
     107,    -1,    97,    -1,    -1,   139,    -1,   145,    -1,   111,
      -1,    49,   128,    42,    28,    -1,    49,   128,    42,   129,
      -1,    49,   128,    74,   128,    -1,    49,   128,    75,   128,
      -1,    51,    28,    90,   128,    -1,    51,    13,    90,   128,
      -1,    51,    14,   128,    90,   128,    -1,    51,    28,    53,
     128,    -1,    51,    13,    53,   128,    -1,    51,    14,   128,
      53,   128,    -1,   128,    -1,   130,    -1,   110,    -1,   112,
      -1,   119,    98,   118,    99,   125,   124,    32,    -1,   120,
      90,   128,   124,    53,   128,   124,   125,   124,    32,    -1,
     120,    90,   128,   124,    34,    53,   128,   124,   125,   124,
      32,    -1,   126,   110,   124,    -1,   127,   128,   107,   125,
     124,    32,    -1,   127,   128,    53,   128,    -1,   121,   118,
      52,   107,   125,   124,    32,    -1,   121,   118,    52,   107,
     125,   124,    57,   125,   124,    32,    -1,   121,   118,    52,
     107,   125,   124,   123,   114,   124,    32,    -1,   121,   118,
      52,   123,   110,   124,    -1,   121,   118,    52,   123,   110,
     124,    57,   123,   110,   124,    -1,   121,   118,    52,   123,
     110,   124,   115,   124,   113,   124,    -1,    -1,    57,   123,
     110,    -1,   114,   117,    -1,   117,    -1,   115,   116,    -1,
     116,    -1,   122,   118,    52,   123,   111,   124,    -1,   115,
      -1,   122,   118,    52,   123,   125,   124,    -1,   128,    -1,
     128,    90,   128,    -1,    98,   118,    99,    -1,    50,    56,
      -1,    50,    55,    28,    -1,    41,    -1,    36,    -1,    -1,
      -1,    -1,   125,   107,    -1,   125,   111,    -1,    54,    28,
      52,    -1,    86,    -1,    12,    -1,    15,    -1,    31,    -1,
      29,    -1,    23,    -1,    24,   128,    -1,    25,   147,    -1,
      25,    98,   147,    99,    -1,    28,    98,   146,    99,    -1,
      28,    -1,    13,    -1,    14,   128,    -1,   109,    -1,   128,
      92,   128,    -1,   128,    93,   128,    -1,   128,    94,   128,
      -1,   128,    95,   128,    -1,   128,    73,   128,    -1,   128,
     100,   128,    -1,   128,   101,   128,    -1,   128,    69,   128,
      -1,   128,    64,   128,    -1,   128,    65,   128,    -1,   128,
      70,   128,    -1,   128,    71,   128,    -1,    72,   128,    -1,
     128,    91,   128,    -1,   128,    76,   128,    -1,   128,    77,
     128,    -1,   128,    78,   128,    -1,    92,   128,    -1,    93,
     128,    -1,    98,   128,    99,    -1,   102,   146,   103,    -1,
      83,   128,    84,   128,    -1,    83,   128,    85,   128,    -1,
      79,   128,    47,   128,    -1,    79,   128,    53,   128,    47,
     128,    -1,    80,   128,    47,   128,    -1,    80,   128,    53,
     128,    47,   128,    -1,    81,   128,    47,   128,    -1,    81,
     128,    53,   128,    47,   128,    -1,    82,   128,    47,   128,
      -1,    82,   128,    53,   128,    47,   128,    -1,    27,   128,
      -1,    49,   128,    -1,   134,    -1,   137,    -1,    37,    50,
      -1,    37,    -1,    39,   131,    -1,    87,   132,    -1,    63,
     133,    -1,    17,    -1,    19,   128,    -1,    18,   128,    -1,
      18,    -1,    20,   147,    -1,    20,    98,   147,    99,    -1,
      89,    98,    28,    99,    -1,    89,    98,    28,   104,   146,
      99,    -1,    60,   128,    55,   128,    -1,    60,   128,    -1,
      21,    28,   146,    -1,    28,    -1,   131,   104,    28,    -1,
      28,    -1,   132,   104,    28,    -1,    28,    -1,   133,   104,
      28,    -1,    40,    43,    -1,    40,    46,    -1,    40,    48,
      -1,    40,   135,    -1,    40,   135,   136,    -1,    40,   136,
      -1,    38,   128,    -1,   128,    -1,    47,    45,   128,    -1,
      45,   128,    -1,    61,    62,    -1,    61,   135,    -1,    61,
     135,   136,    -1,    61,   136,    -1,    -1,    33,   138,   146,
      -1,    -1,    44,    28,   140,   123,   143,   107,   144,   125,
      -1,    58,    28,    -1,    -1,    59,    28,   141,   123,   143,
     107,   144,   125,    -1,   142,   123,   143,   107,   144,   125,
      32,    -1,   142,   123,   143,   107,   144,   125,    -1,    88,
      28,    -1,    -1,    28,    -1,   143,   104,    28,    -1,   143,
     107,   104,    28,    -1,    -1,    28,   147,    -1,    -1,   128,
      -1,   146,   104,   128,    -1,   128,    -1,   147,   104,   128,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   121,   124,   129,   130,   131,   132,
     135,   141,   144,   145,   146,   152,   160,   168,   174,   182,
     192,   193,   196,   197,   202,   215,   233,   247,   253,   256,
     261,   271,   283,   295,   305,   315,   327,   328,   331,   332,
     335,   336,   339,   347,   348,   356,   357,   358,   361,   364,
     371,   378,   386,   389,   392,   393,   394,   397,   403,   407,
     408,   411,   414,   417,   420,   423,   424,   425,   428,   432,
     439,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   479,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   495,   498,   501,   505,   506,   507,   508,
     509,   510,   511,   514,   515,   518,   519,   522,   523,   534,
     535,   536,   537,   540,   543,   548,   549,   552,   553,   556,
     557,   560,   563,   566,   566,   596,   596,   601,   604,   604,
     609,   617,   624,   626,   627,   628,   629,   632,   636,   644,
     645,   646,   649,   650
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNARY", "CASTREF", "VOID", "VAR",
  "POINT", "RECT", "ARRAY", "OBJECT", "REFERENCE", "INT", "THEENTITY",
  "THEENTITYWITHID", "FLOAT", "BLTIN", "BLTINNOARGS", "BLTINNOARGSORONE",
  "BLTINONEARG", "BLTINARGLIST", "TWOWORDBUILTIN", "FBLTIN",
  "FBLTINNOARGS", "FBLTINONEARG", "FBLTINARGLIST", "RBLTIN",
  "RBLTINONEARG", "ID", "STRING", "HANDLER", "SYMBOL", "ENDCLAUSE",
  "tPLAYACCEL", "tDOWN", "tELSE", "tNLELSIF", "tEXIT", "tFRAME", "tGLOBAL",
  "tGO", "tIF", "tINTO", "tLOOP", "tMACRO", "tMOVIE", "tNEXT", "tOF",
  "tPREVIOUS", "tPUT", "tREPEAT", "tSET", "tTHEN", "tTO", "tWHEN", "tWITH",
  "tWHILE", "tNLELSE", "tFACTORY", "tMETHOD", "tOPEN", "tPLAY", "tDONE",
  "tINSTANCE", "tGE", "tLE", "tGT", "tLT", "tEQ", "tNEQ", "tAND", "tOR",
  "tNOT", "tMOD", "tAFTER", "tBEFORE", "tCONCAT", "tCONTAINS", "tSTARTS",
  "tCHAR", "tITEM", "tLINE", "tWORD", "tSPRITE", "tINTERSECTS", "tWITHIN",
  "tTELL", "tPROPERTY", "tON", "tME", "'='", "'&'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'\\n'", "'('", "')'", "'>'", "'<'", "'['", "']'", "','",
  "$accept", "program", "nl", "programline", "asgn", "stmtoneliner",
  "stmt", "ifstmt", "elsestmtoneliner", "elseifstmt", "elseifstmtoneliner",
  "elseifstmtoneliner1", "elseifstmt1", "cond", "repeatwhile",
  "repeatwith", "if", "elseif", "begin", "end", "stmtlist", "when", "tell",
  "expr", "reference", "proc", "globallist", "propertylist",
  "instancelist", "gotofunc", "gotoframe", "gotomovie", "playfunc", "@1",
  "defn", "@2", "@3", "on", "argdef", "argstore", "macro", "arglist",
  "nonemptyarglist", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      61,    38,    43,    45,    42,    47,    37,    10,    40,    41,
      62,    60,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   106,   106,   107,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   118,   119,   120,
     121,   122,   123,   124,   125,   125,   125,   126,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137,   138,   137,   140,   139,   139,   141,   139,
     139,   139,   142,   143,   143,   143,   143,   144,   145,   146,
     146,   146,   147,   147
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     0,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     5,     4,     4,     5,
       1,     1,     1,     1,     7,    10,    11,     3,     6,     4,
       7,    10,    10,     6,    10,    10,     0,     3,     2,     1,
       2,     1,     6,     1,     6,     1,     3,     3,     2,     3,
       1,     1,     0,     0,     0,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     4,     1,     1,
       2,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     2,
       2,     3,     3,     4,     4,     4,     6,     4,     6,     4,
       6,     4,     6,     2,     2,     1,     1,     2,     1,     2,
       2,     2,     1,     2,     2,     1,     2,     4,     4,     6,
       4,     2,     3,     1,     3,     1,     3,     1,     3,     2,
       2,     2,     2,     3,     2,     2,     1,     3,     2,     2,
       2,     3,     2,     0,     3,     0,     8,     2,     0,     8,
       7,     6,     2,     0,     1,     3,     4,     0,     2,     0,
       1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    59,    69,     0,    60,   112,   115,     0,     0,
       0,    63,     0,     0,    68,    62,    61,   143,   108,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,   159,     0,     3,    71,    22,
       9,    23,     0,     0,     0,     0,     0,    20,    21,   105,
     106,     7,    52,     8,     5,     4,    68,     0,    70,   114,
     113,     0,   162,   116,   159,    64,     0,    65,   159,   158,
     159,   107,   123,   109,     0,   129,     0,   130,     0,   131,
     136,   132,   134,   145,   104,     0,    48,     0,     0,     0,
       0,   147,   148,   121,   139,   140,   142,   127,   111,    84,
       0,     0,     0,     0,     0,   125,   110,   152,     0,    89,
      90,     0,   160,     0,     1,     6,     0,     0,     0,     0,
      45,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     159,     0,   162,     0,     0,   122,     0,   160,     0,   144,
       0,   135,   138,     0,   133,    52,     0,     0,     0,    49,
       0,     0,     0,     0,     0,    57,    52,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,     0,     2,     0,    53,     0,     0,
      52,     0,    27,     0,    54,    80,    81,    79,    82,    83,
      76,    86,    87,    88,    85,    72,    73,    74,    75,    77,
      78,   154,     0,   117,   163,    66,    67,   124,   137,   153,
       0,    10,    11,    12,    13,    18,    15,     0,     0,    17,
      14,   153,   120,   128,    95,     0,    97,     0,    99,     0,
     101,     0,    93,    94,   126,   118,   159,   161,    54,     0,
      47,    54,     0,    46,    29,    53,     0,   157,     0,   103,
      19,    16,     0,     0,     0,     0,     0,     0,    53,     0,
       0,    53,    53,    55,    56,     0,   155,     0,    54,   157,
     157,    96,    98,   100,   102,   119,     0,     0,    53,    52,
      33,    28,   156,   151,    54,    54,    24,    53,    54,    30,
      54,     0,    51,    52,    53,    41,     0,   150,   146,   149,
      54,    53,    53,    53,    43,    39,     0,     0,    40,    36,
       0,    53,     0,     0,    38,     0,     0,    53,    52,    53,
      52,     0,    25,    31,    32,    52,    34,     0,    35,     0,
      26,    54,    37,    53,    53,    42,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,   283,    47,    48,    49,   284,    51,   339,   323,
     324,   315,   325,   129,    52,    53,    54,   316,   149,   202,
     265,    55,    56,    57,   232,    58,    83,   116,   108,    59,
      91,    92,    60,    80,    61,   165,   176,    62,   222,   288,
      63,   158,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -272
static const yytype_int16 yypact[] =
{
     340,   -77,  -272,  -272,   989,  -272,  -272,   989,   989,  1061,
      39,  -272,   989,  1101,  1173,  -272,  -272,  -272,    24,    58,
     877,  -272,    77,   989,    15,    37,    80,    81,    83,   989,
     949,    85,   989,   989,   989,   989,   989,   989,  -272,    86,
      87,   -76,   989,   989,   989,   989,     3,  -272,  -272,  -272,
    -272,  -272,    19,    26,  1213,   795,   989,  1777,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,    20,   989,  1777,  1777,
    1777,   989,  1777,    16,   989,  1777,   989,    16,   989,    16,
     989,  -272,  -272,    17,   989,  -272,   989,  -272,    78,  -272,
    1777,    35,  -272,  -272,  1248,    91,  -272,   -51,   989,   -42,
      72,  -272,  -272,  1612,  -272,    35,  -272,  -272,    22,   -72,
    1281,  1314,  1347,  1380,  1645,  -272,    27,  -272,   102,   -72,
     -72,  1711,  1777,    -9,  -272,   431,  1213,   989,  1213,   100,
    1744,  -272,  1545,   989,   989,   989,   989,   989,   989,   989,
     989,   989,   989,   989,   989,   989,   989,   989,   989,   104,
     989,  1248,  1711,   -46,   989,    29,   -45,  1711,   -15,    29,
     126,  1777,  1777,   989,  -272,  -272,    74,   989,   989,  -272,
     989,   989,  1579,   989,   989,  -272,  -272,   989,  -272,   128,
     989,   989,   989,   989,   989,   989,   989,   989,   989,   989,
     129,    -8,  -272,  -272,   989,  -272,    59,  1777,    60,  1678,
     -77,   989,  -272,   989,  -272,   238,   238,   238,   -72,   -72,
     -72,  1777,   238,   238,   127,   769,   769,   -72,   -72,  1777,
    1777,  -272,   -28,  -272,  1777,  -272,  -272,  -272,  1777,   104,
     989,  -272,  -272,  1777,  1777,  1777,  1777,   989,   989,  1777,
    1777,   104,  1777,  -272,  1777,  1413,  1777,  1446,  1777,  1479,
    1777,  1512,  1777,  1777,  -272,  -272,   989,  1777,  -272,   -11,
    -272,  -272,   795,  1777,  1777,   613,   132,    57,   -28,  1777,
    1777,  1777,   -28,   989,   989,   989,   989,    -6,   613,   109,
     989,   613,  -272,  -272,  -272,   131,  -272,   137,  -272,    57,
      57,  1777,  1777,  1777,  1777,  -272,   134,   989,  1777,   -25,
     -30,  -272,  -272,   522,  -272,  -272,  -272,  1777,  -272,  -272,
    -272,   140,  -272,  -272,   140,  -272,  1213,  -272,   613,   613,
    -272,   613,   613,   140,   140,  -272,  1213,   795,  -272,   110,
     118,   613,   141,   145,  -272,   148,   139,  -272,  -272,  -272,
    -272,   160,  -272,  -272,  -272,  -272,  -272,   795,  -272,   704,
    -272,   704,  -272,  -272,   613,  -272,  -272
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,  -272,    18,    68,  -272,   -54,     0,  -272,  -272,  -272,
    -106,  -258,  -124,  -110,  -272,  -272,  -272,  -271,  -103,   -18,
    -198,  -272,  -272,     1,  -272,  -272,  -272,  -272,  -272,  -272,
     171,   -13,  -272,  -272,  -272,  -272,  -272,  -272,  -180,  -186,
    -272,   -33,    12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
      50,   131,   170,   124,   139,    68,   312,   309,    69,    70,
      72,   173,   123,    75,    72,    72,   196,   106,   198,    65,
      64,    90,   118,   279,    94,    77,    79,   313,   147,   148,
     103,    90,   310,   109,   110,   111,   112,   113,   114,   171,
     326,   155,   280,   119,   120,   121,   122,   159,   174,   268,
      97,    98,   326,   223,   225,   130,   328,   132,   154,   154,
     278,   272,   229,   281,   125,    99,   328,    74,   151,    64,
      95,    96,   152,   241,    81,   122,   266,   152,   164,   157,
      86,   122,    88,   153,   226,   161,    82,   162,   156,   194,
     303,   255,   178,   295,   193,   194,   256,   262,   194,   172,
      64,   230,   231,   304,   305,    93,   318,   319,   100,   101,
     321,   102,   322,   107,   115,   117,   127,   126,   150,   169,
     154,   160,   331,   163,   175,    50,   179,   130,   197,   199,
     191,   190,   221,   194,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     204,   122,   200,   354,   227,   224,   243,   254,   258,   260,
     286,   287,   297,   301,   228,   302,   306,   338,   233,   234,
     340,   235,   236,   342,   239,   240,   312,   343,   242,   259,
     344,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   345,   350,   195,   314,   257,   311,   136,   137,   334,
     138,   105,   263,   139,   264,     0,   330,     0,   282,     0,
     327,     0,     0,     0,     0,     0,   336,     0,   261,   143,
     144,   145,   146,   277,     0,     0,     0,   147,   148,     0,
       0,   269,     0,     0,     0,   347,     0,   349,   270,   271,
     267,     0,   351,     0,     0,     0,     0,   285,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
     296,     0,     0,   299,   300,     0,     0,     0,     0,     0,
       0,     0,     0,   337,   291,   292,   293,   294,     0,     0,
     308,   298,     0,     0,     0,     0,   289,     0,     0,   320,
     290,     0,     0,   352,     0,     0,   329,     0,   307,     0,
       0,     0,     0,   332,   333,   335,     0,     0,   136,   137,
       0,   138,     0,   341,   139,     0,     0,   130,     0,   346,
       0,   348,     0,     0,     0,     0,     0,   130,     0,   142,
     143,   144,   145,   146,     0,   355,   356,     0,   147,   148,
      -6,     1,     0,     0,     0,     0,     0,     0,     0,   353,
       0,   353,     2,     3,     4,     5,     0,     6,     7,     8,
       9,    10,     0,    11,    12,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,     0,     0,    18,     0,    19,
      20,    21,     0,     0,    22,     0,     0,     0,     0,    23,
      24,    25,     0,     0,    26,     0,     0,     0,    27,    28,
      29,    30,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,     0,     0,    38,    39,    40,    41,
       0,     0,    42,    43,     0,     0,     0,    -6,    44,     0,
       0,     0,    45,     2,     3,     4,     5,     0,     6,     7,
       8,     9,    10,     0,    11,    12,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,     0,     0,    18,     0,
      19,    20,    21,     0,     0,    22,     0,     0,     0,     0,
      23,    24,    25,     0,     0,    26,     0,     0,     0,    27,
      28,    29,    30,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,     0,     0,    38,    39,    40,
      41,     0,     0,    42,    43,     0,     0,     0,     0,    44,
       0,     0,     0,    45,     2,     3,     4,     5,     0,     6,
       7,     8,     9,    10,     0,    11,    12,    13,     0,     0,
      66,    15,     0,    16,   317,    17,     0,     0,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,     0,     0,    26,     0,     0,     0,
       0,     0,    29,    30,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,    33,    34,    35,    36,    37,     0,     0,    38,    39,
       0,    41,     0,     0,    42,    43,     0,     0,     0,    64,
      44,     0,     0,     0,    45,     2,     3,     4,     5,     0,
       6,     7,     8,     9,    10,     0,    11,    12,    13,     0,
       0,    66,    15,     0,    16,     0,    17,     0,     0,     0,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,     0,     0,    26,     0,     0,
       0,     0,     0,    29,    30,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,     0,     0,    38,
      39,     0,    41,     0,     0,    42,    43,     0,     0,     0,
      64,    44,     0,     0,     0,    45,     2,     3,     4,     5,
       0,     6,     7,     8,     9,    10,     0,    11,    12,    13,
       0,     0,    66,    15,     0,    16,     0,    17,     0,     0,
       0,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,    29,    30,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,    37,     0,     0,
      38,    39,     0,    41,     0,     0,    42,    43,     0,     0,
       0,     0,    44,     0,     0,     0,    45,     2,     3,     4,
       5,     0,     6,     7,     8,     9,    10,     0,    11,    12,
      13,     0,     0,    66,    15,     0,    16,     0,    17,     0,
       0,     0,    18,     0,    19,    20,     0,     0,     0,   136,
     137,     0,   138,     0,    23,   139,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,    31,     0,
       0,     0,     0,   145,   146,     0,     0,    32,     0,   147,
     148,     0,     0,     0,    33,    34,    35,    36,    37,     0,
       0,     0,    39,     0,    41,     0,     0,    42,    43,     2,
       3,     4,     5,    44,     0,     0,     0,    45,     0,     0,
      11,    12,    13,     0,     0,    66,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
      85,     0,    86,    87,    88,    89,    67,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     2,     3,     4,     5,     0,     0,     0,     0,    42,
      43,     0,    11,    12,    13,    44,     0,    66,    15,    45,
      16,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,    86,     0,    88,     0,    67,     0,
      25,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,   104,    11,    12,    13,     0,     0,    66,    15,     0,
      16,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,    67,     0,
      25,    42,    43,     0,     0,     0,     0,    44,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,    37,     2,     3,     4,     5,     0,     0,     0,
       0,    42,    43,     0,    11,    12,    13,    44,     0,    66,
      15,    45,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    25,     2,     3,     4,     5,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,     0,     0,    66,
      15,     0,    16,    32,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
      67,     0,    25,    42,    43,     0,     0,     0,     0,    71,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,    37,     2,     3,     4,     5,     0,
       0,     0,     0,    42,    43,     0,    11,    12,    13,    76,
       0,    66,    15,    45,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,    25,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,     0,
       0,    66,    15,     0,    16,    32,     0,     0,     0,     0,
       0,     0,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,    67,     0,    25,    42,    43,     0,     0,     0,
       0,    78,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
     166,     0,    33,    34,    35,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,     0,     0,     0,
       0,   128,   133,   134,     0,    45,     0,   135,   136,   137,
       0,   138,   167,   168,   139,   140,   141,     0,   180,     0,
       0,     0,     0,     0,   181,     0,     0,     0,     0,   142,
     143,   144,   145,   146,     0,   133,   134,     0,   147,   148,
     135,   136,   137,     0,   138,     0,     0,   139,   140,   141,
       0,   182,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,   142,   143,   144,   145,   146,     0,   133,   134,
       0,   147,   148,   135,   136,   137,     0,   138,     0,     0,
     139,   140,   141,     0,   184,     0,     0,     0,     0,     0,
     185,     0,     0,     0,     0,   142,   143,   144,   145,   146,
       0,   133,   134,     0,   147,   148,   135,   136,   137,     0,
     138,     0,     0,   139,   140,   141,     0,   186,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,   142,   143,
     144,   145,   146,     0,   133,   134,     0,   147,   148,   135,
     136,   137,     0,   138,     0,     0,   139,   140,   141,     0,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,   143,   144,   145,   146,     0,   133,   134,     0,
     147,   148,   135,   136,   137,     0,   138,     0,     0,   139,
     140,   141,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,   145,   146,     0,
     133,   134,     0,   147,   148,   135,   136,   137,     0,   138,
       0,     0,   139,   140,   141,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,   146,     0,   133,   134,     0,   147,   148,   135,   136,
     137,     0,   138,     0,     0,   139,   140,   141,     0,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,   143,   144,   145,   146,     0,   133,   134,     0,   147,
     148,   135,   136,   137,     0,   138,     0,     0,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,   142,   143,   144,   145,   146,     0,   133,
     134,     0,   147,   148,   135,   136,   137,     0,   138,     0,
       0,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,     0,     0,   142,   143,   144,   145,
     146,     0,    64,   133,   134,   147,   148,     0,   135,   136,
     137,     0,   138,     0,     0,   139,   140,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,   238,
     142,   143,   144,   145,   146,     0,   133,   134,     0,   147,
     148,   135,   136,   137,     0,   138,     0,     0,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   143,   144,   145,   146,     0,   133,
     134,     0,   147,   148,   135,   136,   137,     0,   138,     0,
       0,   139,   140,   141,     0,     0,     0,     0,     0,   188,
     189,     0,     0,     0,     0,     0,   142,   143,   144,   145,
     146,     0,   133,   134,     0,   147,   148,   135,   136,   137,
       0,   138,     0,     0,   139,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   142,
     143,   144,   145,   146,     0,   133,   134,   192,   147,   148,
     135,   136,   137,     0,   138,     0,     0,   139,   140,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,   143,   144,   145,   146,     0,   133,   134,
     192,   147,   148,   135,   136,   137,     0,   138,     0,     0,
     139,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   142,   143,   144,   145,   146,
       0,   133,   134,     0,   147,   148,   135,   136,   137,     0,
     138,     0,     0,   139,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,   143,
     144,   145,   146,     0,     0,     0,     0,   147,   148
};

static const yytype_int16 yycheck[] =
{
       0,    55,    53,     0,    76,     4,    36,    32,     7,     8,
       9,    53,    45,    12,    13,    14,   126,    30,   128,     1,
      97,    20,    98,    34,    23,    13,    14,    57,   100,   101,
      29,    30,    57,    32,    33,    34,    35,    36,    37,    90,
     311,    74,    53,    42,    43,    44,    45,    80,    90,   229,
      13,    14,   323,    99,    99,    54,   314,    56,   104,   104,
     258,   241,   165,   261,    46,    28,   324,    28,    67,    97,
      55,    56,    71,   176,    50,    74,   104,    76,    91,    78,
      45,    80,    47,    71,    99,    84,    28,    86,    76,   104,
     288,    99,   105,    99,   103,   104,   104,   200,   104,    98,
      97,    27,    28,   289,   290,    28,   304,   305,    28,    28,
     308,    28,   310,    28,    28,    28,    90,    98,    98,    28,
     104,   104,   320,    45,    52,   125,   104,   126,   127,   128,
      28,   104,    28,   104,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     132,   150,    52,   351,    28,   154,    28,    28,    99,    99,
      28,   104,    53,    32,   163,    28,    32,    57,   167,   168,
      52,   170,   171,    32,   173,   174,    36,    32,   177,   197,
      32,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    52,    32,   125,   300,   194,   299,    70,    71,   323,
      73,    30,   201,    76,   203,    -1,   316,    -1,   262,    -1,
     313,    -1,    -1,    -1,    -1,    -1,   326,    -1,   200,    92,
      93,    94,    95,   256,    -1,    -1,    -1,   100,   101,    -1,
      -1,   230,    -1,    -1,    -1,   338,    -1,   340,   237,   238,
     222,    -1,   345,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,
     278,    -1,    -1,   281,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   273,   274,   275,   276,    -1,    -1,
     298,   280,    -1,    -1,    -1,    -1,   268,    -1,    -1,   307,
     272,    -1,    -1,   347,    -1,    -1,   314,    -1,   297,    -1,
      -1,    -1,    -1,   321,   322,   323,    -1,    -1,    70,    71,
      -1,    73,    -1,   331,    76,    -1,    -1,   316,    -1,   337,
      -1,   339,    -1,    -1,    -1,    -1,    -1,   326,    -1,    91,
      92,    93,    94,    95,    -1,   353,   354,    -1,   100,   101,
       0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,
      -1,   351,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    31,    -1,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,   102,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    -1,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    86,    87,    88,
      89,    -1,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,   102,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    -1,    31,    -1,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    -1,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,   102,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    31,    -1,    33,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    89,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,   102,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    -1,
      -1,    -1,    37,    -1,    39,    40,    -1,    -1,    -1,    70,
      71,    -1,    73,    -1,    49,    76,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    94,    95,    -1,    -1,    72,    -1,   100,
     101,    -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    -1,    89,    -1,    -1,    92,    93,    12,
      13,    14,    15,    98,    -1,    -1,    -1,   102,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    92,
      93,    -1,    23,    24,    25,    98,    -1,    28,    29,   102,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    23,    24,    25,    -1,    -1,    28,    29,    -1,
      31,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    92,    93,    -1,    23,    24,    25,    98,    -1,    28,
      29,   102,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    92,    93,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    92,    93,    -1,    23,    24,    25,    98,
      -1,    28,    29,   102,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    -1,    31,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    92,    93,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      42,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    64,    65,    -1,   102,    -1,    69,    70,    71,
      -1,    73,    74,    75,    76,    77,    78,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    -1,    64,    65,    -1,   100,   101,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    -1,    64,    65,
      -1,   100,   101,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      -1,    64,    65,    -1,   100,   101,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    -1,    64,    65,    -1,   100,   101,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    -1,    64,    65,    -1,
     100,   101,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,    -1,
      64,    65,    -1,   100,   101,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    -1,    64,    65,    -1,   100,   101,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    -1,    64,    65,    -1,   100,
     101,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    -1,    64,
      65,    -1,   100,   101,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    -1,    97,    64,    65,   100,   101,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    90,
      91,    92,    93,    94,    95,    -1,    64,    65,    -1,   100,
     101,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    -1,    64,
      65,    -1,   100,   101,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    -1,    64,    65,    -1,   100,   101,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      92,    93,    94,    95,    -1,    64,    65,    99,   100,   101,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    -1,    64,    65,
      99,   100,   101,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    92,    93,    94,    95,
      -1,    64,    65,    -1,   100,   101,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,   100,   101
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    12,    13,    14,    15,    17,    18,    19,    20,
      21,    23,    24,    25,    28,    29,    31,    33,    37,    39,
      40,    41,    44,    49,    50,    51,    54,    58,    59,    60,
      61,    63,    72,    79,    80,    81,    82,    83,    86,    87,
      88,    89,    92,    93,    98,   102,   106,   108,   109,   110,
     111,   112,   119,   120,   121,   126,   127,   128,   130,   134,
     137,   139,   142,   145,    97,   107,    28,    49,   128,   128,
     128,    98,   128,   147,    28,   128,    98,   147,    98,   147,
     138,    50,    28,   131,    38,    43,    45,    46,    47,    48,
     128,   135,   136,    28,   128,    55,    56,    13,    14,    28,
      28,    28,    28,   128,    62,   135,   136,    28,   133,   128,
     128,   128,   128,   128,   128,    28,   132,    28,    98,   128,
     128,   128,   128,   146,     0,   107,    98,    90,    98,   118,
     128,   110,   128,    64,    65,    69,    70,    71,    73,    76,
      77,    78,    91,    92,    93,    94,    95,   100,   101,   123,
      98,   128,   128,   147,   104,   146,   147,   128,   146,   146,
     104,   128,   128,    45,   136,   140,    42,    74,    75,    28,
      53,    90,   128,    53,    90,    52,   141,    55,   136,   104,
      47,    53,    47,    53,    47,    53,    47,    53,    84,    85,
     104,    28,    99,   103,   104,   108,   118,   128,   118,   128,
      52,    90,   124,    53,   107,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,    28,   143,    99,   128,    99,    99,    28,   128,   123,
      27,    28,   129,   128,   128,   128,   128,    53,    90,   128,
     128,   123,   128,    28,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,    28,    99,   104,   128,    99,   124,
      99,   107,   123,   128,   128,   125,   104,   107,   143,   128,
     128,   128,   143,    47,    47,    47,    47,   146,   125,    34,
      53,   125,   110,   107,   111,   124,    28,   104,   144,   107,
     107,   128,   128,   128,   128,    99,   124,    53,   128,   124,
     124,    32,    28,   125,   144,   144,    32,   128,   124,    32,
      57,   123,    36,    57,   115,   116,   122,    32,   125,   125,
     124,   125,   125,   114,   115,   117,   122,   123,   116,   124,
     118,   125,   124,   124,   117,   124,   118,   110,    57,   113,
      52,   124,    32,    32,    32,    52,   124,   123,   124,   123,
      32,   123,   110,   111,   125,   124,   124
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 121 "engines/director/lingo/lingo-gr.y"
    { yyerrok; ;}
    break;

  case 5:
#line 124 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->_linenumber++;
		g_lingo->_colnumber = 1;
	;}
    break;

  case 10:
#line 135 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_varpush);
		g_lingo->codeString((yyvsp[(4) - (4)].s)->c_str());
		g_lingo->code1(g_lingo->c_assign);
		(yyval.code) = (yyvsp[(2) - (4)].code);
		delete (yyvsp[(4) - (4)].s); ;}
    break;

  case 11:
#line 141 "engines/director/lingo/lingo-gr.y"
    {
			g_lingo->code1(g_lingo->c_assign);
			(yyval.code) = (yyvsp[(2) - (4)].code); ;}
    break;

  case 12:
#line 144 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->code1(g_lingo->c_after); ;}
    break;

  case 13:
#line 145 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->code1(g_lingo->c_before); ;}
    break;

  case 14:
#line 146 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_varpush);
		g_lingo->codeString((yyvsp[(2) - (4)].s)->c_str());
		g_lingo->code1(g_lingo->c_assign);
		(yyval.code) = (yyvsp[(4) - (4)].code);
		delete (yyvsp[(2) - (4)].s); ;}
    break;

  case 15:
#line 152 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(0); // Put dummy id
		g_lingo->code1(g_lingo->c_theentityassign);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(2) - (4)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(2) - (4)].e)[1]);
		g_lingo->code2(e, f);
		(yyval.code) = (yyvsp[(4) - (4)].code); ;}
    break;

  case 16:
#line 160 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_swap);
		g_lingo->code1(g_lingo->c_theentityassign);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(2) - (5)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(2) - (5)].e)[1]);
		g_lingo->code2(e, f);
		(yyval.code) = (yyvsp[(5) - (5)].code); ;}
    break;

  case 17:
#line 168 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_varpush);
		g_lingo->codeString((yyvsp[(2) - (4)].s)->c_str());
		g_lingo->code1(g_lingo->c_assign);
		(yyval.code) = (yyvsp[(4) - (4)].code);
		delete (yyvsp[(2) - (4)].s); ;}
    break;

  case 18:
#line 174 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(0); // Put dummy id
		g_lingo->code1(g_lingo->c_theentityassign);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(2) - (4)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(2) - (4)].e)[1]);
		g_lingo->code2(e, f);
		(yyval.code) = (yyvsp[(4) - (4)].code); ;}
    break;

  case 19:
#line 182 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_swap);
		g_lingo->code1(g_lingo->c_theentityassign);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(2) - (5)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(2) - (5)].e)[1]);
		g_lingo->code2(e, f);
		(yyval.code) = (yyvsp[(5) - (5)].code); ;}
    break;

  case 24:
#line 202 "engines/director/lingo/lingo-gr.y"
    {
		inst body = 0, end = 0;
		WRITE_UINT32(&body, (yyvsp[(5) - (7)].code) - (yyvsp[(1) - (7)].code));
		WRITE_UINT32(&end, (yyvsp[(6) - (7)].code) - (yyvsp[(1) - (7)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (7)].code) + 1] = body;	/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (7)].code) + 2] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(7) - (7)].s), "repeat", true); ;}
    break;

  case 25:
#line 215 "engines/director/lingo/lingo-gr.y"
    {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[(3) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&finish, (yyvsp[(6) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&body, (yyvsp[(8) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&end, (yyvsp[(9) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&inc, 1);
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 1] = init;	/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 2] = finish;/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 3] = body;	/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 4] = inc;	/* increment */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 5] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(10) - (10)].s), "repeat", true); ;}
    break;

  case 26:
#line 233 "engines/director/lingo/lingo-gr.y"
    {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[(3) - (11)].code) - (yyvsp[(1) - (11)].code));
		WRITE_UINT32(&finish, (yyvsp[(7) - (11)].code) - (yyvsp[(1) - (11)].code));
		WRITE_UINT32(&body, (yyvsp[(9) - (11)].code) - (yyvsp[(1) - (11)].code));
		WRITE_UINT32(&end, (yyvsp[(10) - (11)].code) - (yyvsp[(1) - (11)].code));
		WRITE_UINT32(&inc, -1);
		(*g_lingo->_currentScript)[(yyvsp[(1) - (11)].code) + 1] = init;	/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (11)].code) + 2] = finish;/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (11)].code) + 3] = body;	/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (11)].code) + 4] = inc;	/* increment */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (11)].code) + 5] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(11) - (11)].s), "repeat", true); ;}
    break;

  case 27:
#line 247 "engines/director/lingo/lingo-gr.y"
    {
			inst end = 0;
			WRITE_UINT32(&end, (yyvsp[(3) - (3)].code) - (yyvsp[(1) - (3)].code));
			g_lingo->code1(STOP);
			(*g_lingo->_currentScript)[(yyvsp[(1) - (3)].code) + 1] = end;
		;}
    break;

  case 28:
#line 253 "engines/director/lingo/lingo-gr.y"
    {
			warning("STUB: TELL is not implemented");
			checkEnd((yyvsp[(6) - (6)].s), "tell", true); ;}
    break;

  case 29:
#line 256 "engines/director/lingo/lingo-gr.y"
    {
			warning("STUB: TELL is not implemented");
		;}
    break;

  case 30:
#line 261 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(5) - (7)].code) - (yyvsp[(1) - (7)].code));
		WRITE_UINT32(&end, (yyvsp[(6) - (7)].code) - (yyvsp[(1) - (7)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (7)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (7)].code) + 3] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(7) - (7)].s), "if", true);

		g_lingo->processIf(0, 0); ;}
    break;

  case 31:
#line 271 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(5) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&else1, (yyvsp[(8) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&end, (yyvsp[(9) - (10)].code) - (yyvsp[(1) - (10)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 2] = else1;	/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 3] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(10) - (10)].s), "if", true);

		g_lingo->processIf(0, 0); ;}
    break;

  case 32:
#line 283 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(5) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&else1, (yyvsp[(7) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&end, (yyvsp[(9) - (10)].code) - (yyvsp[(1) - (10)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 2] = else1;	/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 3] = end;	/* end, if cond fails */

		checkEnd((yyvsp[(10) - (10)].s), "if", true);

		g_lingo->processIf(0, (yyvsp[(9) - (10)].code) - (yyvsp[(1) - (10)].code)); ;}
    break;

  case 33:
#line 295 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(4) - (6)].code) - (yyvsp[(1) - (6)].code));
		WRITE_UINT32(&else1, 0);
		WRITE_UINT32(&end, (yyvsp[(6) - (6)].code) - (yyvsp[(1) - (6)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (6)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (6)].code) + 2] = else1;	/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (6)].code) + 3] = end; 	/* end, if cond fails */

		g_lingo->processIf(0, 0); ;}
    break;

  case 34:
#line 305 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(4) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&else1, (yyvsp[(8) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&end, (yyvsp[(10) - (10)].code) - (yyvsp[(1) - (10)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 2] = else1;	/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 3] = end; 	/* end, if cond fails */

		g_lingo->processIf(0, 0); ;}
    break;

  case 35:
#line 315 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[(4) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&else1, (yyvsp[(6) - (10)].code) - (yyvsp[(1) - (10)].code));
		WRITE_UINT32(&end, (yyvsp[(10) - (10)].code) - (yyvsp[(1) - (10)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 2] = else1;	/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[(1) - (10)].code) + 3] = end; 	/* end, if cond fails */

		g_lingo->processIf(0, (yyvsp[(10) - (10)].code) - (yyvsp[(1) - (10)].code)); ;}
    break;

  case 36:
#line 327 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = 0; ;}
    break;

  case 37:
#line 328 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); ;}
    break;

  case 42:
#line 339 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0;
		WRITE_UINT32(&then, (yyvsp[(4) - (6)].code) - (yyvsp[(1) - (6)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (6)].code) + 1] = then;	/* thenpart */

		g_lingo->codeLabel((yyvsp[(1) - (6)].code)); ;}
    break;

  case 44:
#line 348 "engines/director/lingo/lingo-gr.y"
    {
		inst then = 0;
		WRITE_UINT32(&then, (yyvsp[(5) - (6)].code) - (yyvsp[(1) - (6)].code));
		(*g_lingo->_currentScript)[(yyvsp[(1) - (6)].code) + 1] = then;	/* thenpart */

		g_lingo->codeLabel((yyvsp[(1) - (6)].code)); ;}
    break;

  case 45:
#line 356 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(STOP); ;}
    break;

  case 46:
#line 357 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code2(g_lingo->c_eq, STOP); ;}
    break;

  case 48:
#line 361 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->code3(g_lingo->c_repeatwhilecode, STOP, STOP); ;}
    break;

  case 49:
#line 364 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code3(g_lingo->c_repeatwithcode, STOP, STOP);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->codeString((yyvsp[(3) - (3)].s)->c_str());
		delete (yyvsp[(3) - (3)].s); ;}
    break;

  case 50:
#line 371 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(0);  // Do not skip end
		g_lingo->codeLabel(0); ;}
    break;

  case 51:
#line 378 "engines/director/lingo/lingo-gr.y"
    {
		inst skipEnd;
		WRITE_UINT32(&skipEnd, 1); // We have to skip end to avoid multiple executions
		(yyval.code) = g_lingo->code1(g_lingo->c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(skipEnd); ;}
    break;

  case 52:
#line 386 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->_currentScript->size(); ;}
    break;

  case 53:
#line 389 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(STOP); (yyval.code) = g_lingo->_currentScript->size(); ;}
    break;

  case 54:
#line 392 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->_currentScript->size(); ;}
    break;

  case 57:
#line 397 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_whencode);
		g_lingo->code1(STOP);
		g_lingo->codeString((yyvsp[(2) - (3)].s)->c_str());
		delete (yyvsp[(2) - (3)].s); ;}
    break;

  case 58:
#line 403 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_tellcode);
		g_lingo->code1(STOP); ;}
    break;

  case 59:
#line 407 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->codeConst((yyvsp[(1) - (1)].i)); ;}
    break;

  case 60:
#line 408 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_fconstpush);
		g_lingo->codeFloat((yyvsp[(1) - (1)].f)); ;}
    break;

  case 61:
#line 411 "engines/director/lingo/lingo-gr.y"
    {											// D3
		(yyval.code) = g_lingo->code1(g_lingo->c_symbolpush);
		g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str()); ;}
    break;

  case 62:
#line 414 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_stringpush);
		g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str()); ;}
    break;

  case 63:
#line 417 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (1)].s), 0);
		delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 64:
#line 420 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (2)].s), 1);
		delete (yyvsp[(1) - (2)].s); ;}
    break;

  case 65:
#line 423 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeFunc((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].narg)); ;}
    break;

  case 66:
#line 424 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeFunc((yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].narg)); ;}
    break;

  case 67:
#line 425 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->codeFunc((yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].narg));
		delete (yyvsp[(1) - (4)].s); ;}
    break;

  case 68:
#line 428 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_eval);
		g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str());
		delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 69:
#line 432 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->codeConst(0); // Put dummy id
		g_lingo->code1(g_lingo->c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(1) - (1)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(1) - (1)].e)[1]);
		g_lingo->code2(e, f); ;}
    break;

  case 70:
#line 439 "engines/director/lingo/lingo-gr.y"
    {
		(yyval.code) = g_lingo->code1(g_lingo->c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[(1) - (2)].e)[0]);
		WRITE_UINT32(&f, (yyvsp[(1) - (2)].e)[1]);
		g_lingo->code2(e, f); ;}
    break;

  case 72:
#line 446 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_add); ;}
    break;

  case 73:
#line 447 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_sub); ;}
    break;

  case 74:
#line 448 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_mul); ;}
    break;

  case 75:
#line 449 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_div); ;}
    break;

  case 76:
#line 450 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_mod); ;}
    break;

  case 77:
#line 451 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_gt); ;}
    break;

  case 78:
#line 452 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_lt); ;}
    break;

  case 79:
#line 453 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_neq); ;}
    break;

  case 80:
#line 454 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_ge); ;}
    break;

  case 81:
#line 455 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_le); ;}
    break;

  case 82:
#line 456 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_and); ;}
    break;

  case 83:
#line 457 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_or); ;}
    break;

  case 84:
#line 458 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_not); ;}
    break;

  case 85:
#line 459 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_ampersand); ;}
    break;

  case 86:
#line 460 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_concat); ;}
    break;

  case 87:
#line 461 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_contains); ;}
    break;

  case 88:
#line 462 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_starts); ;}
    break;

  case 89:
#line 463 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); ;}
    break;

  case 90:
#line 464 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); g_lingo->code1(g_lingo->c_negate); ;}
    break;

  case 91:
#line 465 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); ;}
    break;

  case 92:
#line 466 "engines/director/lingo/lingo-gr.y"
    { (yyval.code) = g_lingo->codeArray((yyvsp[(2) - (3)].narg)); ;}
    break;

  case 93:
#line 467 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_intersects); ;}
    break;

  case 94:
#line 468 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_within); ;}
    break;

  case 95:
#line 469 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_charOf); ;}
    break;

  case 96:
#line 470 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_charToOf); ;}
    break;

  case 97:
#line 471 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_itemOf); ;}
    break;

  case 98:
#line 472 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_itemToOf); ;}
    break;

  case 99:
#line 473 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_lineOf); ;}
    break;

  case 100:
#line 474 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_lineToOf); ;}
    break;

  case 101:
#line 475 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_wordOf); ;}
    break;

  case 102:
#line 476 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_wordToOf); ;}
    break;

  case 103:
#line 479 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (2)].s), 1);
		delete (yyvsp[(1) - (2)].s); ;}
    break;

  case 104:
#line 484 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_printtop); ;}
    break;

  case 107:
#line 487 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_exitRepeat); ;}
    break;

  case 108:
#line 488 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_procret); ;}
    break;

  case 112:
#line 492 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (1)].s), 0);
		delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 113:
#line 495 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (2)].s), 1);
		delete (yyvsp[(1) - (2)].s); ;}
    break;

  case 114:
#line 498 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeFunc((yyvsp[(1) - (2)].s), 1);
		delete (yyvsp[(1) - (2)].s); ;}
    break;

  case 115:
#line 501 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_voidpush);
		g_lingo->codeFunc((yyvsp[(1) - (1)].s), 1);
		delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 116:
#line 505 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeFunc((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].narg)); ;}
    break;

  case 117:
#line 506 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeFunc((yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].narg)); ;}
    break;

  case 118:
#line 507 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeMe((yyvsp[(3) - (4)].s), 0); ;}
    break;

  case 119:
#line 508 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeMe((yyvsp[(3) - (6)].s), (yyvsp[(5) - (6)].narg)); ;}
    break;

  case 120:
#line 509 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_open); ;}
    break;

  case 121:
#line 510 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code2(g_lingo->c_voidpush, g_lingo->c_open); ;}
    break;

  case 122:
#line 511 "engines/director/lingo/lingo-gr.y"
    { Common::String s(*(yyvsp[(1) - (3)].s)); s += '-'; s += *(yyvsp[(2) - (3)].s); g_lingo->codeFunc(&s, (yyvsp[(3) - (3)].narg)); ;}
    break;

  case 123:
#line 514 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_global); g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str()); delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 124:
#line 515 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_global); g_lingo->codeString((yyvsp[(3) - (3)].s)->c_str()); delete (yyvsp[(3) - (3)].s); ;}
    break;

  case 125:
#line 518 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_property); g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str()); delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 126:
#line 519 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_property); g_lingo->codeString((yyvsp[(3) - (3)].s)->c_str()); delete (yyvsp[(3) - (3)].s); ;}
    break;

  case 127:
#line 522 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_instance); g_lingo->codeString((yyvsp[(1) - (1)].s)->c_str()); delete (yyvsp[(1) - (1)].s); ;}
    break;

  case 128:
#line 523 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_instance); g_lingo->codeString((yyvsp[(3) - (3)].s)->c_str()); delete (yyvsp[(3) - (3)].s); ;}
    break;

  case 129:
#line 534 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_gotoloop); ;}
    break;

  case 130:
#line 535 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_gotonext); ;}
    break;

  case 131:
#line 536 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_gotoprevious); ;}
    break;

  case 132:
#line 537 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(1);
		g_lingo->code1(g_lingo->c_goto); ;}
    break;

  case 133:
#line 540 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(3);
		g_lingo->code1(g_lingo->c_goto); ;}
    break;

  case 134:
#line 543 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(2);
		g_lingo->code1(g_lingo->c_goto); ;}
    break;

  case 139:
#line 556 "engines/director/lingo/lingo-gr.y"
    { g_lingo->code1(g_lingo->c_playdone); ;}
    break;

  case 140:
#line 557 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(1);
		g_lingo->code1(g_lingo->c_play); ;}
    break;

  case 141:
#line 560 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(3);
		g_lingo->code1(g_lingo->c_play); ;}
    break;

  case 142:
#line 563 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeConst(2);
		g_lingo->code1(g_lingo->c_play); ;}
    break;

  case 143:
#line 566 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeSetImmediate(true); ;}
    break;

  case 144:
#line 566 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->codeSetImmediate(false);
		g_lingo->codeFunc((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].narg)); ;}
    break;

  case 145:
#line 596 "engines/director/lingo/lingo-gr.y"
    { g_lingo->_indef = true; g_lingo->_currentFactory.clear(); ;}
    break;

  case 146:
#line 597 "engines/director/lingo/lingo-gr.y"
    {
			g_lingo->code1(g_lingo->c_procret);
			g_lingo->define(*(yyvsp[(2) - (8)].s), (yyvsp[(4) - (8)].code), (yyvsp[(5) - (8)].narg));
			g_lingo->_indef = false; ;}
    break;

  case 147:
#line 601 "engines/director/lingo/lingo-gr.y"
    {
			g_lingo->codeFactory(*(yyvsp[(2) - (2)].s));
		;}
    break;

  case 148:
#line 604 "engines/director/lingo/lingo-gr.y"
    { g_lingo->_indef = true; ;}
    break;

  case 149:
#line 605 "engines/director/lingo/lingo-gr.y"
    {
			g_lingo->code1(g_lingo->c_procret);
			g_lingo->define(*(yyvsp[(2) - (8)].s), (yyvsp[(4) - (8)].code), (yyvsp[(5) - (8)].narg) + 1, &g_lingo->_currentFactory);
			g_lingo->_indef = false; ;}
    break;

  case 150:
#line 609 "engines/director/lingo/lingo-gr.y"
    {	// D3
				g_lingo->code1(g_lingo->c_procret);
				g_lingo->define(*(yyvsp[(1) - (7)].s), (yyvsp[(2) - (7)].code), (yyvsp[(3) - (7)].narg));
				g_lingo->_indef = false;
				g_lingo->_ignoreMe = false;

				checkEnd((yyvsp[(7) - (7)].s), (yyvsp[(1) - (7)].s)->c_str(), false);
			;}
    break;

  case 151:
#line 617 "engines/director/lingo/lingo-gr.y"
    {	// D4. No 'end' clause
				g_lingo->code1(g_lingo->c_procret);
				g_lingo->define(*(yyvsp[(1) - (6)].s), (yyvsp[(2) - (6)].code), (yyvsp[(3) - (6)].narg));
				g_lingo->_indef = false;
				g_lingo->_ignoreMe = false;
			;}
    break;

  case 152:
#line 624 "engines/director/lingo/lingo-gr.y"
    { (yyval.s) = (yyvsp[(2) - (2)].s); g_lingo->_indef = true; g_lingo->_currentFactory.clear(); g_lingo->_ignoreMe = true; ;}
    break;

  case 153:
#line 626 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = 0; ;}
    break;

  case 154:
#line 627 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeArg((yyvsp[(1) - (1)].s)); (yyval.narg) = 1; ;}
    break;

  case 155:
#line 628 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeArg((yyvsp[(3) - (3)].s)); (yyval.narg) = (yyvsp[(1) - (3)].narg) + 1; ;}
    break;

  case 156:
#line 629 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeArg((yyvsp[(4) - (4)].s)); (yyval.narg) = (yyvsp[(1) - (4)].narg) + 1; ;}
    break;

  case 157:
#line 632 "engines/director/lingo/lingo-gr.y"
    { g_lingo->codeArgStore(); ;}
    break;

  case 158:
#line 636 "engines/director/lingo/lingo-gr.y"
    {
		g_lingo->code1(g_lingo->c_call);
		g_lingo->codeString((yyvsp[(1) - (2)].s)->c_str());
		inst numpar = 0;
		WRITE_UINT32(&numpar, (yyvsp[(2) - (2)].narg));
		g_lingo->code1(numpar); ;}
    break;

  case 159:
#line 644 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = 0; ;}
    break;

  case 160:
#line 645 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = 1; ;}
    break;

  case 161:
#line 646 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = (yyvsp[(1) - (3)].narg) + 1; ;}
    break;

  case 162:
#line 649 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = 1; ;}
    break;

  case 163:
#line 650 "engines/director/lingo/lingo-gr.y"
    { (yyval.narg) = (yyvsp[(1) - (3)].narg) + 1; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3083 "engines/director/lingo/lingo-gr.cpp"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 653 "engines/director/lingo/lingo-gr.y"


