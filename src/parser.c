/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y" /* yacc.c:339  */

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "compile.h"
#include "jv_alloc.h"
#define YYMALLOC jv_mem_alloc
#define YYFREE jv_mem_free

#line 77 "src/parser.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_SRC_PARSER_H_INCLUDED
# define YY_YY_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "src/parser.y" /* yacc.c:355  */

#include "locfile.h"
struct lexer_param;

#define YYLTYPE location
#define YYLLOC_DEFAULT(Loc, Rhs, N)             \
  do {                                          \
    if (N) {                                    \
      (Loc).start = YYRHSLOC(Rhs, 1).start;     \
      (Loc).end = YYRHSLOC(Rhs, N).end;         \
    } else {                                    \
      (Loc).start = YYRHSLOC(Rhs, 0).end;       \
      (Loc).end = YYRHSLOC(Rhs, 0).end;         \
    }                                           \
  } while (0)

#line 124 "src/parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INVALID_CHARACTER = 258,
    IDENT = 259,
    FIELD = 260,
    LITERAL = 261,
    FORMAT = 262,
    REC = 263,
    SETMOD = 264,
    EQ = 265,
    NEQ = 266,
    DEFINEDOR = 267,
    AS = 268,
    DEF = 269,
    MODULE = 270,
    IMPORT = 271,
    INCLUDE = 272,
    IF = 273,
    THEN = 274,
    ELSE = 275,
    ELSE_IF = 276,
    REDUCE = 277,
    FOREACH = 278,
    END = 279,
    AND = 280,
    OR = 281,
    TRY = 282,
    CATCH = 283,
    LABEL = 284,
    BREAK = 285,
    LOC = 286,
    SETPIPE = 287,
    SETPLUS = 288,
    SETMINUS = 289,
    SETMULT = 290,
    SETDIV = 291,
    SETDEFINEDOR = 292,
    LESSEQ = 293,
    GREATEREQ = 294,
    ALTERNATION = 295,
    QQSTRING_START = 296,
    QQSTRING_TEXT = 297,
    QQSTRING_INTERP_START = 298,
    QQSTRING_INTERP_END = 299,
    QQSTRING_END = 300,
    FUNCDEF = 301,
    NONOPT = 302
  };
#endif
/* Tokens.  */
#define INVALID_CHARACTER 258
#define IDENT 259
#define FIELD 260
#define LITERAL 261
#define FORMAT 262
#define REC 263
#define SETMOD 264
#define EQ 265
#define NEQ 266
#define DEFINEDOR 267
#define AS 268
#define DEF 269
#define MODULE 270
#define IMPORT 271
#define INCLUDE 272
#define IF 273
#define THEN 274
#define ELSE 275
#define ELSE_IF 276
#define REDUCE 277
#define FOREACH 278
#define END 279
#define AND 280
#define OR 281
#define TRY 282
#define CATCH 283
#define LABEL 284
#define BREAK 285
#define LOC 286
#define SETPIPE 287
#define SETPLUS 288
#define SETMINUS 289
#define SETMULT 290
#define SETDIV 291
#define SETDEFINEDOR 292
#define LESSEQ 293
#define GREATEREQ 294
#define ALTERNATION 295
#define QQSTRING_START 296
#define QQSTRING_TEXT 297
#define QQSTRING_INTERP_START 298
#define QQSTRING_INTERP_END 299
#define QQSTRING_END 300
#define FUNCDEF 301
#define NONOPT 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "src/parser.y" /* yacc.c:355  */

  jv literal;
  block blk;

#line 235 "src/parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr);

#endif /* !YY_YY_SRC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 124 "src/parser.y" /* yacc.c:358  */

#include "lexer.h"
struct lexer_param {
  yyscan_t lexer;
};
#define FAIL(loc, msg)                                             \
  do {                                                             \
    location l = loc;                                              \
    yyerror(&l, answer, errors, locations, lexer_param_ptr, msg);  \
    /*YYERROR*/;                                                   \
  } while (0)

void yyerror(YYLTYPE* loc, block* answer, int* errors,
             struct locfile* locations, struct lexer_param* lexer_param_ptr, const char *s){
  (*errors)++;
  if (strstr(s, "unexpected")) {
#ifdef WIN32
      locfile_locate(locations, *loc, "jq: error: %s (Windows cmd shell quoting issues?)", s);
#else
      locfile_locate(locations, *loc, "jq: error: %s (Unix shell quoting issues?)", s);
#endif
  } else {
      locfile_locate(locations, *loc, "jq: error: %s", s);
  }
}

int yylex(YYSTYPE* yylval, YYLTYPE* yylloc, block* answer, int* errors,
          struct locfile* locations, struct lexer_param* lexer_param_ptr) {
  yyscan_t lexer = lexer_param_ptr->lexer;
  int tok = jq_yylex(yylval, yylloc, lexer);
  if ((tok == LITERAL || tok == QQSTRING_TEXT) && !jv_is_valid(yylval->literal)) {
    jv msg = jv_invalid_get_msg(jv_copy(yylval->literal));
    if (jv_get_kind(msg) == JV_KIND_STRING) {
      FAIL(*yylloc, jv_string_value(msg));
    } else {
      FAIL(*yylloc, "Invalid literal");
    }
    jv_free(msg);
    jv_free(yylval->literal);
    yylval->literal = jv_null();
  }
  return tok;
}

/* Returns string message if the block is a constant that is not valid as an
 * object key. */
static jv check_object_key(block k) {
  if (block_is_const(k) && block_const_kind(k) != JV_KIND_STRING) {
    char errbuf[15];
    return jv_string_fmt("Cannot use %s (%s) as object key",
        jv_kind_name(block_const_kind(k)),
        jv_dump_string_trunc(jv_copy(block_const(k)), errbuf, sizeof(errbuf)));
  }
  return jv_invalid();
}

static block gen_index(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX));
}

static block gen_index_opt(block obj, block key) {
  return BLOCK(gen_subexp(key), obj, gen_op_simple(INDEX_OPT));
}

static block gen_slice_index(block obj, block start, block end, opcode idx_op) {
  block key = BLOCK(gen_subexp(gen_const(jv_object())),
                    gen_subexp(gen_const(jv_string("start"))),
                    gen_subexp(start),
                    gen_op_simple(INSERT),
                    gen_subexp(gen_const(jv_string("end"))),
                    gen_subexp(end),
                    gen_op_simple(INSERT));
  return BLOCK(key, obj, gen_op_simple(idx_op));
}

static block constant_fold(block a, block b, int op) {
  if (!block_is_single(a) || !block_is_const(a) ||
      !block_is_single(b) || !block_is_const(b))
    return gen_noop();
  if (op == '+') {
    if (block_const_kind(a) == JV_KIND_NULL) {
      block_free(a);
      return b;
    }
    if (block_const_kind(b) == JV_KIND_NULL) {
      block_free(b);
      return a;
    }
  }
  if (block_const_kind(a) != block_const_kind(b))
    return gen_noop();

  jv res = jv_invalid();

  if (block_const_kind(a) == JV_KIND_NUMBER) {
    double na = jv_number_value(block_const(a));
    double nb = jv_number_value(block_const(b));
    switch (op) {
    case '+': res = jv_number(na + nb); break;
    case '-': res = jv_number(na - nb); break;
    case '*': res = jv_number(na * nb); break;
    case '/': res = jv_number(na / nb); break;
    case EQ:  res = (na == nb ? jv_true() : jv_false()); break;
    case NEQ: res = (na != nb ? jv_true() : jv_false()); break;
    case '<': res = (na < nb ? jv_true() : jv_false()); break;
    case '>': res = (na > nb ? jv_true() : jv_false()); break;
    case LESSEQ: res = (na <= nb ? jv_true() : jv_false()); break;
    case GREATEREQ: res = (na >= nb ? jv_true() : jv_false()); break;
    default: break;
    }
  } else if (op == '+' && block_const_kind(a) == JV_KIND_STRING) {
    res = jv_string_concat(block_const(a),  block_const(b));
  } else {
    return gen_noop();
  }

  if (jv_get_kind(res) == JV_KIND_INVALID)
    return gen_noop();

  block_free(a);
  block_free(b);
  return gen_const(res);
}

static block gen_binop(block a, block b, int op) {
  block folded = constant_fold(a, b, op);
  if (!block_is_noop(folded))
    return folded;

  const char* funcname = 0;
  switch (op) {
  case '+': funcname = "_plus"; break;
  case '-': funcname = "_minus"; break;
  case '*': funcname = "_multiply"; break;
  case '/': funcname = "_divide"; break;
  case '%': funcname = "_mod"; break;
  case EQ: funcname = "_equal"; break;
  case NEQ: funcname = "_notequal"; break;
  case '<': funcname = "_less"; break;
  case '>': funcname = "_greater"; break;
  case LESSEQ: funcname = "_lesseq"; break;
  case GREATEREQ: funcname = "_greatereq"; break;
  }
  assert(funcname);

  return gen_call(funcname, BLOCK(gen_lambda(a), gen_lambda(b)));
}

static block gen_format(block a, jv fmt) {
  return BLOCK(a, gen_call("format", gen_lambda(gen_const(fmt))));
}

static block gen_definedor_assign(block object, block val) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val, tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_definedor(gen_noop(),
                                                                  gen_op_bound(LOADV, tmp))))));
}

static block gen_update(block object, block val, int optype) {
  block tmp = gen_op_var_fresh(STOREV, "tmp");
  return BLOCK(gen_op_simple(DUP),
               val,
               tmp,
               gen_call("_modify", BLOCK(gen_lambda(object),
                                         gen_lambda(gen_binop(gen_noop(),
                                                              gen_op_bound(LOADV, tmp),
                                                              optype)))));
}


#line 438 "src/parser.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2074

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    62,    56,     2,     2,
      60,    61,    54,    52,    48,    53,    64,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    59,
      50,    49,    51,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    47,    68,     2,     2,     2,     2,
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
      45,    46,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   300,   300,   303,   308,   311,   322,   325,   330,   333,
     338,   342,   345,   349,   353,   357,   360,   363,   368,   372,
     376,   381,   388,   392,   396,   400,   404,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   458,
     464,   468,   472,   476,   480,   484,   488,   492,   496,   501,
     504,   521,   530,   537,   545,   556,   561,   567,   570,   575,
     580,   587,   587,   591,   591,   598,   601,   604,   610,   613,
     618,   621,   624,   630,   633,   636,   644,   648,   651,   654,
     657,   660,   663,   666,   671,   674,   677,   681,   687,   690,
     693,   696,   699,   702,   705,   708,   711,   714,   717,   722,
     725,   728,   731,   734,   737,   740,   747,   751,   755,   767,
     772,   773,   774,   775,   778,   781,   786,   791,   794,   799,
     802,   807,   811,   814,   819,   822,   827,   830,   835,   838,
     841,   844,   847,   850,   858,   864,   867,   870,   873,   876,
     879,   882,   885,   888,   891,   894,   897,   900,   903,   906,
     909,   912,   915,   918,   923,   926,   927,   928,   931,   934,
     937,   940,   944,   948,   952,   956,   964
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INVALID_CHARACTER", "IDENT", "FIELD",
  "LITERAL", "FORMAT", "\"..\"", "\"%=\"", "\"==\"", "\"!=\"", "\"//\"",
  "\"as\"", "\"def\"", "\"module\"", "\"import\"", "\"include\"", "\"if\"",
  "\"then\"", "\"else\"", "\"elif\"", "\"reduce\"", "\"foreach\"",
  "\"end\"", "\"and\"", "\"or\"", "\"try\"", "\"catch\"", "\"label\"",
  "\"break\"", "\"__loc__\"", "\"|=\"", "\"+=\"", "\"-=\"", "\"*=\"",
  "\"/=\"", "\"//=\"", "\"<=\"", "\">=\"", "\"?//\"", "QQSTRING_START",
  "QQSTRING_TEXT", "QQSTRING_INTERP_START", "QQSTRING_INTERP_END",
  "QQSTRING_END", "FUNCDEF", "'|'", "','", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "NONOPT", "'?'", "';'", "'('", "')'", "'$'",
  "':'", "'.'", "'['", "']'", "'{'", "'}'", "$accept", "TopLevel",
  "Module", "Imports", "FuncDefs", "Exp", "Import", "ImportWhat",
  "ImportFrom", "FuncDef", "Params", "Param", "String", "@1", "@2",
  "QQString", "ElseBody", "ExpD", "Term", "Args", "Arg", "RepPatterns",
  "Patterns", "Pattern", "ArrayPats", "ObjPats", "ObjPat", "Keyword",
  "MkDict", "MkDictPair", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   124,    44,    61,
      60,    62,    43,    45,    42,    47,    37,   302,    63,    59,
      40,    41,    36,    58,    46,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -155

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-155)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   824,    35,   101,   -15,   341,  -160,    18,  -160,    47,
     824,   492,   492,   824,    -5,     0,  -160,   824,   574,    10,
     272,   507,   407,  1342,   824,  -160,     2,  -160,     1,     1,
     824,   101,   732,   824,  -160,  -160,  -160,   -23,  1748,     8,
      48,    36,    79,  -160,   104,  -160,    66,    62,  1172,  -160,
    -160,  -160,   126,    18,    70,    65,  -160,   969,   -20,    69,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   824,
     130,    72,    73,    77,    98,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,   824,   824,   824,  -160,
    -160,  1916,    90,    -2,     3,   155,   137,  -160,  -160,  -160,
    1916,   824,  -160,  -160,  1393,  1916,    -3,  -160,  -160,    14,
     824,   639,    -2,    -2,   704,   105,  -160,     7,  -160,  -160,
    -160,  -160,  -160,  -160,   464,   196,  -160,   196,  1206,    88,
     196,   196,  -160,   464,  1984,   402,   402,  1950,   555,  2016,
    1984,  1984,  1984,  1984,  1984,  1984,   402,   402,  1916,  1950,
    1984,   402,   402,    66,    66,    95,    95,    95,  -160,   150,
      -2,   886,   115,   110,   124,   164,   108,   106,   824,   109,
     919,    19,  -160,  -160,   824,  -160,    37,  -160,   166,    16,
    -160,  1444,  -160,  1648,   111,   114,  -160,  -160,   824,  -160,
     824,  -160,   -24,  -160,   196,   128,     6,   128,   113,   196,
     128,   128,  -160,  -160,  -160,   -12,   116,   118,   824,   179,
     125,   -22,  -160,   127,    -2,   824,  -160,  -160,  -160,  1019,
    -160,   796,   131,  -160,   187,  -160,  -160,  -160,    14,   129,
    -160,   824,   824,  -160,  -160,   824,   824,  1916,  1782,  -160,
     196,   196,   128,    -2,  -160,    -2,    -2,  1240,   132,    -2,
     886,  -160,    -2,   154,  1916,   139,   140,  1069,  -160,  -160,
    -160,   824,  1832,  1882,  1495,  1546,  -160,   128,   128,  -160,
    -160,  -160,   136,    -2,  -160,  -160,  -160,  -160,  -160,   147,
    1597,  -160,   824,   824,   824,    -2,  -160,  -160,  -160,  1698,
    1274,  1119,  -160,  -160,  -160,   824,  -160,  1308,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,   108,     0,    99,   101,    74,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   100,    48,     1,     0,     0,
       8,     6,     0,     0,    83,    78,    63,     0,     0,     0,
       0,    19,     0,    76,     0,    65,    33,     0,     0,   107,
     106,    86,     0,     0,    85,     0,   104,     0,     0,   164,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,   161,     0,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       5,    10,    81,     0,     0,     0,     0,    54,    53,     3,
       2,     8,     7,    49,     0,   116,     0,   114,    65,     0,
       0,     0,     0,     0,     0,     0,    75,     0,   110,   102,
      87,    80,   111,   103,     0,     0,   113,     0,     0,   163,
       0,     0,   105,     0,    41,    42,    43,    26,    25,    24,
      28,    32,    35,    37,    40,    27,    46,    47,    29,    30,
      23,    44,    45,    31,    34,    36,    38,    39,    77,     0,
       0,     0,     0,     0,   120,     0,    84,     0,     0,    91,
       0,     0,     9,    50,     0,   109,     0,    60,     0,     0,
      57,     0,    17,     0,     0,     0,    20,    18,     0,    66,
       0,    62,     0,   157,     0,   166,    72,   158,     0,     0,
     160,   159,   156,   121,   124,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,    98,    79,   112,     0,
      90,     0,    89,    52,     0,   115,    64,    59,     0,     0,
      55,     0,     0,    16,    15,     0,     0,    21,     0,    71,
       0,     0,   162,     0,   122,     0,     0,     0,   128,     0,
       0,   123,     0,   119,    11,    97,    96,     0,    88,    51,
      58,     0,     0,     0,     0,     0,    67,    70,   165,   125,
     134,   130,     0,     0,   132,   127,   131,    94,    93,    95,
       0,    69,     0,     0,     0,     0,   129,    92,    56,     0,
       0,     0,   133,    68,    12,     0,    14,     0,    13
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,   181,    89,    -1,  -160,  -160,   184,   -11,
    -160,   -34,     5,  -160,  -160,    96,   -93,  -145,    -8,  -160,
      29,  -160,    -7,  -125,  -160,  -160,   -45,  -159,  -106,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    30,   119,   111,    31,    32,   116,    24,
     199,   200,    25,    45,   128,   137,   254,   215,    26,   126,
     127,   182,   183,   184,   225,   231,   232,    82,    83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    43,   217,    39,    40,   220,   221,   112,    53,    38,
      53,   112,    41,   112,    49,   113,    46,    48,   197,   121,
      57,   132,   233,   243,   144,    54,   270,    81,   144,   120,
       1,   124,   125,   117,   117,    27,   263,   129,   213,   145,
     130,    50,    16,   145,    16,    33,   271,   222,   146,   209,
     210,    37,   211,   112,   264,   224,   194,    42,   195,    36,
     179,   133,    44,   180,   134,   181,   114,   115,   185,   259,
     114,   115,   114,   115,   262,   248,   198,   249,   148,   209,
     210,   244,   246,   135,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   136,   273,
     121,   233,   114,   115,   190,   287,   288,    28,    29,   186,
     106,   107,   108,   138,   109,   204,   205,   140,   141,   201,
     203,   142,   147,   207,   149,   150,   151,   216,   289,   216,
     290,   291,   216,   216,   294,   152,   153,   296,   178,    81,
     191,   219,   208,   109,   223,   234,   187,   235,    81,     4,
       5,     6,     7,     8,  -118,   236,   237,   240,   306,     9,
     247,   255,   238,    10,   256,   260,   261,    11,    12,   265,
     312,   266,    13,   268,    14,    15,   230,   239,   269,   278,
     272,   279,   281,   125,  -117,   293,    16,   297,   298,   305,
       4,     5,     6,     7,     8,   307,   216,   257,    17,   258,
     192,   216,   122,   118,   280,    18,   313,    19,   188,    20,
      21,   189,    22,   245,   196,   295,    15,   267,     0,     0,
       0,     0,     0,     0,   274,     0,     0,    16,     0,     0,
     277,     0,     0,     0,     0,     0,     0,     0,     0,   214,
     282,   283,   216,   216,   284,   285,    18,     0,    19,     0,
      20,    21,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,    51,     0,   230,    52,   -73,     0,    53,
     300,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,   -73,   -73,   -73,     0,     0,   -73,   -73,   -73,     0,
     -73,   309,   310,   311,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,    16,   317,     0,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,     0,   -73,     0,   -73,   -73,   -73,   -73,     0,
     -73,   -82,    34,     0,     0,     0,   -82,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
     -82,   -82,   -82,     0,     0,   -82,   -82,   -82,     0,   -82,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,    35,
     -82,     0,   -82,     0,   -82,   -82,   -82,   -82,    58,   -82,
       0,    59,  -155,  -155,    53,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,     0,
    -155,  -155,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,  -155,  -155,   104,   105,   106,   107,   108,     0,
     109,     0,     0,     0,     0,   212,     0,    79,    59,    80,
       0,    53,     0,     0,     0,  -154,     0,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,    16,     0,     0,    55,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     9,    15,     0,    79,    10,    80,     0,     0,    11,
      12,     0,  -154,    16,    13,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,    18,     0,    19,     0,    20,    21,     0,    22,
      17,     0,     0,     0,     0,    86,    87,    18,     0,    19,
       0,    20,    21,    56,    22,    47,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     9,     0,
       0,     0,    10,    97,    98,     0,    11,    12,     0,     0,
       0,    13,     0,    14,    15,   102,   103,   104,   105,   106,
     107,   108,     0,   109,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,    18,     0,    19,     0,    20,    21,
     202,    22,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     0,     9,     0,     0,     0,    10,     0,     0,
       0,    11,    12,     0,     0,     0,    13,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,    18,
       0,    19,     0,    20,    21,   206,    22,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     9,     0,
       0,     0,    10,     0,     0,     0,    11,    12,     0,     0,
       0,    13,     0,    14,    15,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     0,    16,     9,     0,     0,     0,
      10,     0,     0,     0,    11,    12,     0,    17,     0,    13,
       0,    14,    15,     0,    18,     0,    19,     0,    20,    21,
       0,    22,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,   123,    18,     0,    19,     0,    20,    21,     0,    22,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,     0,     0,     0,    11,    12,
       0,     0,     0,    13,     0,    14,    15,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,    16,     9,     0,
       0,     0,    10,     0,     0,     0,    11,    12,     0,    17,
       0,    13,     0,    14,    15,     0,    18,     0,    19,     0,
      20,    21,   276,    22,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,    18,     0,    19,   226,    20,    21,
     227,    22,     0,    53,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,   228,     0,   229,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,    85,    86,
      87,    88,   241,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,    85,    86,
      87,    88,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,    85,    86,
      87,    88,     0,     0,     0,   275,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,    85,    86,
      87,    88,     0,     0,     0,   299,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   315,     0,
     316,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,    85,    86,    87,    88,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,    89,    90,   139,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    85,
      86,    87,    88,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,   109,    89,    90,   218,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,    85,    86,    87,    88,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,    89,
      90,   292,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,    85,    86,    87,
      88,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   109,    89,    90,   314,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,    85,    86,    87,    88,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,    89,    90,   318,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,   110,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   193,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   109,   250,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,     0,     0,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,   303,    85,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,   109,   304,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,    90,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   308,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,   251,   252,
       0,     0,   253,    89,    90,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,     0,   251,   252,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
       0,    85,    86,    87,    88,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,   286,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,   302,     0,     0,     0,     0,     0,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,     0,    85,    86,    87,    88,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,    89,    90,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,    85,
      86,    87,    88,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,   109,    89,    90,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,     0,  -155,    86,    87,     0,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,    89,
      90,     0,     0,     0,     0,     0,  -155,  -155,  -155,  -155,
    -155,  -155,    97,    98,     0,     0,    86,    87,     0,     0,
       0,     0,     0,  -155,   102,   103,   104,   105,   106,   107,
     108,    89,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,     0,   109
};

static const yytype_int16 yycheck[] =
{
       1,     1,   147,    11,    12,   150,   151,     5,     7,    10,
       7,     5,    13,     5,     4,    13,    17,    18,     4,    30,
      21,    13,   181,     4,    48,    20,    48,    22,    48,    30,
      15,    32,    33,    28,    29,     0,    48,    60,   144,    63,
      63,    31,    41,    63,    41,    60,    68,   153,    68,    42,
      43,     4,    45,     5,    66,   180,    59,    62,    61,    41,
      62,    13,    62,    65,    28,    67,    64,    65,    65,   214,
      64,    65,    64,    65,   219,    59,    62,    61,    79,    42,
      43,    62,    45,     4,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     4,   234,
     121,   270,    64,    65,   115,   260,   261,    16,    17,   114,
      54,    55,    56,    61,    58,   132,   133,     1,    58,   130,
     131,    66,    63,   134,     4,    63,    63,   145,   263,   147,
     265,   266,   150,   151,   269,    68,    48,   272,    58,   144,
      13,    63,    47,    58,     4,    40,     1,    47,   153,     4,
       5,     6,     7,     8,    40,     1,    58,    58,   293,    14,
       4,    60,    66,    18,    60,    47,    63,    22,    23,    63,
     305,    63,    27,     4,    29,    30,   181,   188,    63,    58,
      63,     4,    63,   194,    40,    63,    41,    58,    58,    63,
       4,     5,     6,     7,     8,    58,   214,   208,    53,   210,
     121,   219,    31,    29,   248,    60,   309,    62,    63,    64,
      65,    66,    67,   194,   128,   270,    30,   228,    -1,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    41,    -1,    -1,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
     251,   252,   260,   261,   255,   256,    60,    -1,    62,    -1,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     1,    -1,   270,     4,     5,    -1,     7,
     281,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    -1,    -1,    24,    25,    26,    -1,
      28,   302,   303,   304,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,   315,    -1,    44,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    -1,    63,    64,    65,    66,    -1,
      68,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    -1,    63,    64,    65,    66,     1,    68,
      -1,     4,    10,    11,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,     1,    -1,    60,     4,    62,
      -1,     7,    -1,    -1,    -1,    68,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    41,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    30,    -1,    60,    18,    62,    -1,    -1,    22,
      23,    -1,    68,    41,    27,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,    67,
      53,    -1,    -1,    -1,    -1,    10,    11,    60,    -1,    62,
      -1,    64,    65,    66,    67,     1,    -1,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    18,    38,    39,    -1,    22,    23,    -1,    -1,
      -1,    27,    -1,    29,    30,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,    65,
       1,    67,    -1,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    65,     1,    67,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,    -1,
      -1,    27,    -1,    29,    30,    -1,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    41,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    22,    23,    -1,    53,    -1,    27,
      -1,    29,    30,    -1,    60,    -1,    62,    -1,    64,    65,
      -1,    67,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    62,    -1,    64,    65,    -1,    67,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    41,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,    53,
      -1,    27,    -1,    29,    30,    -1,    60,    -1,    62,    -1,
      64,    65,    66,    67,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,     1,    64,    65,
       4,    67,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    60,    -1,    62,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,     9,    10,
      11,    12,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,     9,    10,
      11,    12,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,     9,    10,
      11,    12,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,     9,    10,
      11,    12,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,     9,    10,    11,    12,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    25,    26,    61,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,     9,
      10,    11,    12,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    25,    26,    61,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,     9,    10,    11,    12,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    25,
      26,    61,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,     9,    10,    11,
      12,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    25,    26,    61,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,     9,    10,    11,    12,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    25,    26,    61,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,     9,    10,    11,    12,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,     9,    10,    11,    12,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,     9,
      10,    11,    12,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    25,    26,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    25,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    25,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    70,    71,     4,     5,     6,     7,     8,    14,
      18,    22,    23,    27,    29,    30,    41,    53,    60,    62,
      64,    65,    67,    74,    78,    81,    87,     0,    16,    17,
      72,    75,    76,    60,     1,    58,    41,     4,    74,    87,
      87,    74,    62,     1,    62,    82,    74,     1,    74,     4,
      31,     1,     4,     7,    81,     1,    66,    74,     1,     4,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    60,
      62,    81,    96,    97,    98,     9,    10,    11,    12,    25,
      26,    32,    33,    34,    35,    36,    37,    38,    39,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    58,
      59,    74,     5,    13,    64,    65,    77,    81,    77,    73,
      74,    78,    72,    59,    74,    74,    88,    89,    83,    60,
      63,    19,    13,    13,    28,     4,     4,    84,    61,    61,
       1,    58,    66,    66,    48,    63,    68,    63,    74,     4,
      63,    63,    68,    48,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    58,    62,
      65,    67,    90,    91,    92,    65,    81,     1,    63,    66,
      74,    13,    73,    59,    59,    61,    84,     4,    62,    79,
      80,    74,     1,    74,    91,    91,     1,    74,    47,    42,
      43,    45,     1,    97,    53,    86,    87,    86,    61,    63,
      86,    86,    97,     4,    92,    93,     1,     4,    60,    62,
      81,    94,    95,    96,    40,    47,     1,    58,    66,    74,
      58,    63,    66,     4,    62,    89,    45,     4,    59,    61,
      59,    20,    21,    24,    85,    60,    60,    74,    74,    86,
      47,    63,    86,    48,    66,    63,    63,    74,     4,    63,
      48,    68,    63,    92,    74,    66,    66,    74,    58,     4,
      80,    63,    74,    74,    74,    74,    44,    86,    86,    92,
      92,    92,    61,    63,    92,    95,    92,    58,    58,    66,
      74,    24,    19,    59,    59,    63,    92,    58,    59,    74,
      74,    74,    92,    85,    61,    59,    61,    74,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    77,    78,    78,    79,    79,    80,
      80,    82,    81,    83,    81,    84,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     0,     2,     0,     2,
       2,     5,     9,    11,     9,     5,     5,     4,     4,     2,
       4,     5,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     5,     4,     2,     1,     5,     8,     1,     3,     2,
       1,     0,     4,     0,     5,     0,     2,     4,     5,     3,
       3,     2,     1,     1,     1,     3,     2,     3,     2,     4,
       3,     2,     1,     2,     3,     2,     2,     3,     5,     4,
       4,     3,     7,     6,     6,     6,     5,     5,     4,     1,
       1,     1,     3,     3,     2,     3,     2,     2,     1,     4,
       3,     3,     4,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     3,     3,     1,     3,     1,     3,     2,     4,
       3,     3,     3,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     3,     3,     3,
       3,     1,     4,     2,     1,     5,     3
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
      yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, answer, errors, locations, lexer_param_ptr); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, answer, errors, locations, lexer_param_ptr);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , answer, errors, locations, lexer_param_ptr);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, answer, errors, locations, lexer_param_ptr); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (answer);
  YYUSE (errors);
  YYUSE (locations);
  YYUSE (lexer_param_ptr);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 4: /* IDENT  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 1913 "src/parser.c" /* yacc.c:1257  */
        break;

    case 5: /* FIELD  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 1919 "src/parser.c" /* yacc.c:1257  */
        break;

    case 6: /* LITERAL  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 1925 "src/parser.c" /* yacc.c:1257  */
        break;

    case 7: /* FORMAT  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 1931 "src/parser.c" /* yacc.c:1257  */
        break;

    case 42: /* QQSTRING_TEXT  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 1937 "src/parser.c" /* yacc.c:1257  */
        break;

    case 71: /* Module  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1943 "src/parser.c" /* yacc.c:1257  */
        break;

    case 72: /* Imports  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1949 "src/parser.c" /* yacc.c:1257  */
        break;

    case 73: /* FuncDefs  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1955 "src/parser.c" /* yacc.c:1257  */
        break;

    case 74: /* Exp  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1961 "src/parser.c" /* yacc.c:1257  */
        break;

    case 75: /* Import  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1967 "src/parser.c" /* yacc.c:1257  */
        break;

    case 76: /* ImportWhat  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1973 "src/parser.c" /* yacc.c:1257  */
        break;

    case 77: /* ImportFrom  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1979 "src/parser.c" /* yacc.c:1257  */
        break;

    case 78: /* FuncDef  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1985 "src/parser.c" /* yacc.c:1257  */
        break;

    case 79: /* Params  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1991 "src/parser.c" /* yacc.c:1257  */
        break;

    case 80: /* Param  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 1997 "src/parser.c" /* yacc.c:1257  */
        break;

    case 81: /* String  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2003 "src/parser.c" /* yacc.c:1257  */
        break;

    case 84: /* QQString  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2009 "src/parser.c" /* yacc.c:1257  */
        break;

    case 85: /* ElseBody  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2015 "src/parser.c" /* yacc.c:1257  */
        break;

    case 86: /* ExpD  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2021 "src/parser.c" /* yacc.c:1257  */
        break;

    case 87: /* Term  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2027 "src/parser.c" /* yacc.c:1257  */
        break;

    case 88: /* Args  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2033 "src/parser.c" /* yacc.c:1257  */
        break;

    case 89: /* Arg  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2039 "src/parser.c" /* yacc.c:1257  */
        break;

    case 90: /* RepPatterns  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2045 "src/parser.c" /* yacc.c:1257  */
        break;

    case 91: /* Patterns  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2051 "src/parser.c" /* yacc.c:1257  */
        break;

    case 92: /* Pattern  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2057 "src/parser.c" /* yacc.c:1257  */
        break;

    case 93: /* ArrayPats  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2063 "src/parser.c" /* yacc.c:1257  */
        break;

    case 94: /* ObjPats  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2069 "src/parser.c" /* yacc.c:1257  */
        break;

    case 95: /* ObjPat  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2075 "src/parser.c" /* yacc.c:1257  */
        break;

    case 96: /* Keyword  */
#line 36 "src/parser.y" /* yacc.c:1257  */
      { jv_free(((*yyvaluep).literal)); }
#line 2081 "src/parser.c" /* yacc.c:1257  */
        break;

    case 97: /* MkDict  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2087 "src/parser.c" /* yacc.c:1257  */
        break;

    case 98: /* MkDictPair  */
#line 37 "src/parser.y" /* yacc.c:1257  */
      { block_free(((*yyvaluep).blk)); }
#line 2093 "src/parser.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (block* answer, int* errors, struct locfile* locations, struct lexer_param* lexer_param_ptr)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 300 "src/parser.y" /* yacc.c:1646  */
    {
  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), gen_op_simple(TOP), (yyvsp[0].blk));
}
#line 2389 "src/parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {
  *answer = BLOCK((yyvsp[-2].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2397 "src/parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_noop();
}
#line 2405 "src/parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 311 "src/parser.y" /* yacc.c:1646  */
    {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yyloc), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_module((yyvsp[-1].blk));
  }
}
#line 2419 "src/parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 322 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_noop();
}
#line 2427 "src/parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 325 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2435 "src/parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_noop();
}
#line 2443 "src/parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 333 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_join((yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2451 "src/parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 338 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_bind_referenced((yyvsp[-1].blk), (yyvsp[0].blk), OP_IS_CALL_PSEUDO);
}
#line 2459 "src/parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_destructure((yyvsp[-4].blk), (yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2467 "src/parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 345 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_reduce((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 2475 "src/parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 349 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_foreach((yyvsp[-9].blk), (yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 2483 "src/parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 353 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_foreach((yyvsp[-7].blk), (yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop());
}
#line 2491 "src/parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 357 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2499 "src/parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 360 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), gen_noop());
}
#line 2507 "src/parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 363 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "Possibly unterminated 'if' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 2516 "src/parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 368 "src/parser.y" /* yacc.c:1646  */
    {
  //$$ = BLOCK(gen_op_target(FORK_OPT, $2), $2, $4);
  (yyval.blk) = gen_try((yyvsp[-2].blk), gen_try_handler((yyvsp[0].blk)));
}
#line 2525 "src/parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 372 "src/parser.y" /* yacc.c:1646  */
    {
  //$$ = BLOCK(gen_op_target(FORK_OPT, $2), $2, gen_op_simple(BACKTRACK));
  (yyval.blk) = gen_try((yyvsp[0].blk), gen_op_simple(BACKTRACK));
}
#line 2534 "src/parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "Possibly unterminated 'try' statement");
  (yyval.blk) = (yyvsp[-2].blk);
}
#line 2543 "src/parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 381 "src/parser.y" /* yacc.c:1646  */
    {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[-2].literal)));
  (yyval.blk) = gen_location((yyloc), locations, gen_label(jv_string_value(v), (yyvsp[0].blk)));
  jv_free((yyvsp[-2].literal));
  jv_free(v);
}
#line 2554 "src/parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 388 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_try((yyvsp[-1].blk), gen_op_simple(BACKTRACK));
}
#line 2562 "src/parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 392 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_call("_assign", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2570 "src/parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 396 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_or((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2578 "src/parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 400 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_and((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2586 "src/parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 404 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_definedor((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2594 "src/parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 408 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_definedor_assign((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2602 "src/parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 412 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_call("_modify", BLOCK(gen_lambda((yyvsp[-2].blk)), gen_lambda((yyvsp[0].blk))));
}
#line 2610 "src/parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 416 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2618 "src/parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 420 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_both((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2626 "src/parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 424 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2634 "src/parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 428 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '+');
}
#line 2642 "src/parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[0].blk), gen_call("_negate", gen_noop()));
}
#line 2650 "src/parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 436 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2658 "src/parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 440 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '-');
}
#line 2666 "src/parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 444 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2674 "src/parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 448 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '*');
}
#line 2682 "src/parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 452 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '/');
  if (block_is_const_inf((yyval.blk)))
    FAIL((yyloc), "Division by zero?");
}
#line 2692 "src/parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 458 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '%');
  if (block_is_const_zero((yyvsp[0].blk)))
    FAIL((yyloc), "Remainder by zero?");
}
#line 2702 "src/parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 464 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '/');
}
#line 2710 "src/parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 468 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_update((yyvsp[-2].blk), (yyvsp[0].blk), '%');
}
#line 2718 "src/parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 472 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), EQ);
}
#line 2726 "src/parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 476 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), NEQ);
}
#line 2734 "src/parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 480 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '<');
}
#line 2742 "src/parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 484 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), '>');
}
#line 2750 "src/parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 488 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), LESSEQ);
}
#line 2758 "src/parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 492 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-2].blk), (yyvsp[0].blk), GREATEREQ);
}
#line 2766 "src/parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 496 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2774 "src/parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 501 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 2782 "src/parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 504 "src/parser.y" /* yacc.c:1646  */
    {
  if (!block_is_const((yyvsp[-1].blk))) {
    FAIL((yyloc), "Module metadata must be constant");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else if (block_const_kind((yyvsp[-1].blk)) != JV_KIND_OBJECT) {
    FAIL((yyloc), "Module metadata must be an object");
    (yyval.blk) = gen_noop();
    block_free((yyvsp[-2].blk));
    block_free((yyvsp[-1].blk));
  } else {
    (yyval.blk) = gen_import_meta((yyvsp[-2].blk), (yyvsp[-1].blk));
  }
}
#line 2802 "src/parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 521 "src/parser.y" /* yacc.c:1646  */
    {
  jv v = block_const((yyvsp[-3].blk));
  // XXX Make gen_import take only blocks and the int is_data so we
  // don't have to free so much stuff here
  (yyval.blk) = gen_import(jv_string_value(v), jv_string_value((yyvsp[0].literal)), 1);
  block_free((yyvsp[-3].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
#line 2816 "src/parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 530 "src/parser.y" /* yacc.c:1646  */
    {
  jv v = block_const((yyvsp[-2].blk));
  (yyval.blk) = gen_import(jv_string_value(v), jv_string_value((yyvsp[0].literal)), 0);
  block_free((yyvsp[-2].blk));
  jv_free((yyvsp[0].literal));
  jv_free(v);
}
#line 2828 "src/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 537 "src/parser.y" /* yacc.c:1646  */
    {
  jv v = block_const((yyvsp[0].blk));
  (yyval.blk) = gen_import(jv_string_value(v), NULL, 0);
  block_free((yyvsp[0].blk));
  jv_free(v);
}
#line 2839 "src/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 545 "src/parser.y" /* yacc.c:1646  */
    {
  if (!block_is_const((yyvsp[0].blk))) {
    FAIL((yyloc), "Import path must be constant");
    (yyval.blk) = gen_const(jv_string(""));
    block_free((yyvsp[0].blk));
  } else {
    (yyval.blk) = (yyvsp[0].blk);
  }
}
#line 2853 "src/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-3].literal)), gen_noop(), (yyvsp[-1].blk));
  jv_free((yyvsp[-3].literal));
}
#line 2862 "src/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 561 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_function(jv_string_value((yyvsp[-6].literal)), (yyvsp[-4].blk), (yyvsp[-1].blk));
  jv_free((yyvsp[-6].literal));
}
#line 2871 "src/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 567 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2879 "src/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 570 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2887 "src/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 575 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_param_regular(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 2896 "src/parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 580 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_param(jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 2905 "src/parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 587 "src/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = jv_string("text"); }
#line 2911 "src/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 587 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
#line 2920 "src/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 591 "src/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = (yyvsp[-1].literal); }
#line 2926 "src/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 591 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[-1].blk);
  jv_free((yyvsp[-2].literal));
}
#line 2935 "src/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 598 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_const(jv_string(""));
}
#line 2943 "src/parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 601 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-1].blk), gen_const((yyvsp[0].literal)), '+');
}
#line 2951 "src/parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 604 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_binop((yyvsp[-3].blk), gen_format((yyvsp[-1].blk), jv_copy((yyvsp[-4].literal))), '+');
}
#line 2959 "src/parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 610 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_cond((yyvsp[-3].blk), (yyvsp[-1].blk), (yyvsp[0].blk));
}
#line 2967 "src/parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 613 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 2975 "src/parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 618 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_join((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 2983 "src/parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 621 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[0].blk), gen_call("_negate", gen_noop()));
}
#line 2991 "src/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 624 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 2999 "src/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 630 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_noop();
}
#line 3007 "src/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 633 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_call("recurse", gen_noop());
}
#line 3015 "src/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 636 "src/parser.y" /* yacc.c:1646  */
    {
  jv v = jv_string_fmt("*label-%s", jv_string_value((yyvsp[0].literal)));     // impossible symbol
  (yyval.blk) = gen_location((yyloc), locations,
                    BLOCK(gen_op_unbound(LOADV, jv_string_value(v)),
                    gen_call("error", gen_noop())));
  jv_free(v);
  jv_free((yyvsp[0].literal));
}
#line 3028 "src/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 644 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "break requires a label to break to");
  (yyval.blk) = gen_noop();
}
#line 3037 "src/parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 648 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index_opt((yyvsp[-2].blk), gen_const((yyvsp[-1].literal)));
}
#line 3045 "src/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 651 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index_opt(gen_noop(), gen_const((yyvsp[-1].literal)));
}
#line 3053 "src/parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 654 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index_opt((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3061 "src/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 657 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index_opt(gen_noop(), (yyvsp[-1].blk));
}
#line 3069 "src/parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 660 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index((yyvsp[-1].blk), gen_const((yyvsp[0].literal)));
}
#line 3077 "src/parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 663 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index(gen_noop(), gen_const((yyvsp[0].literal)));
}
#line 3085 "src/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 666 "src/parser.y" /* yacc.c:1646  */
    {
  jv_free((yyvsp[-1].literal));
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3095 "src/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 671 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3103 "src/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 674 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index(gen_noop(), (yyvsp[0].blk));
}
#line 3111 "src/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 677 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3120 "src/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 681 "src/parser.y" /* yacc.c:1646  */
    {
  jv_free((yyvsp[-1].literal));
  FAIL((yyloc), "try .[\"field\"] instead of .field for unusually named fields");
  (yyval.blk) = gen_noop();
}
#line 3130 "src/parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 687 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index_opt((yyvsp[-4].blk), (yyvsp[-2].blk));
}
#line 3138 "src/parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 690 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_index((yyvsp[-3].blk), (yyvsp[-1].blk));
}
#line 3146 "src/parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 693 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_join((yyvsp[-3].blk), gen_op_simple(EACH_OPT));
}
#line 3154 "src/parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 696 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = block_join((yyvsp[-2].blk), gen_op_simple(EACH));
}
#line 3162 "src/parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 699 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-6].blk), (yyvsp[-4].blk), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3170 "src/parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 702 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), gen_const(jv_null()), INDEX_OPT);
}
#line 3178 "src/parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 705 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), gen_const(jv_null()), (yyvsp[-2].blk), INDEX_OPT);
}
#line 3186 "src/parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 708 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-5].blk), (yyvsp[-3].blk), (yyvsp[-1].blk), INDEX);
}
#line 3194 "src/parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 711 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), (yyvsp[-2].blk), gen_const(jv_null()), INDEX);
}
#line 3202 "src/parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 714 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_slice_index((yyvsp[-4].blk), gen_const(jv_null()), (yyvsp[-1].blk), INDEX);
}
#line 3210 "src/parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 717 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "try exp[index] instead of exp.[index]");
  (yyval.blk) = gen_noop();
  block_free((yyvsp[-3].blk));
}
#line 3220 "src/parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 722 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_const((yyvsp[0].literal));
}
#line 3228 "src/parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 725 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3236 "src/parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 728 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_format(gen_noop(), (yyvsp[0].literal));
}
#line 3244 "src/parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 731 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[-1].blk);
}
#line 3252 "src/parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 734 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_collect((yyvsp[-1].blk));
}
#line 3260 "src/parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 737 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_const(jv_array());
}
#line 3268 "src/parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 740 "src/parser.y" /* yacc.c:1646  */
    {
  block o = gen_const_object((yyvsp[-1].blk));
  if (o.first != NULL)
    (yyval.blk) = o;
  else
    (yyval.blk) = BLOCK(gen_subexp(gen_const(jv_object())), (yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3280 "src/parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 747 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_const(JV_OBJECT(jv_string("file"), jv_copy(locations->fname),
                           jv_string("line"), jv_number(locfile_get_line(locations, (yyloc).start) + 1)));
}
#line 3289 "src/parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 751 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal))));
  jv_free((yyvsp[0].literal));
}
#line 3298 "src/parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 755 "src/parser.y" /* yacc.c:1646  */
    {
  const char *s = jv_string_value((yyvsp[0].literal));
  if (strcmp(s, "false") == 0)
    (yyval.blk) = gen_const(jv_false());
  else if (strcmp(s, "true") == 0)
    (yyval.blk) = gen_const(jv_true());
  else if (strcmp(s, "null") == 0)
    (yyval.blk) = gen_const(jv_null());
  else
    (yyval.blk) = gen_location((yyloc), locations, gen_call(s, gen_noop()));
  jv_free((yyvsp[0].literal));
}
#line 3315 "src/parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 767 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_call(jv_string_value((yyvsp[-3].literal)), (yyvsp[-1].blk));
  (yyval.blk) = gen_location((yylsp[-3]), locations, (yyval.blk));
  jv_free((yyvsp[-3].literal));
}
#line 3325 "src/parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 772 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = gen_noop(); }
#line 3331 "src/parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 773 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = gen_noop(); }
#line 3337 "src/parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 774 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = (yyvsp[-3].blk); }
#line 3343 "src/parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 775 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = gen_noop(); }
#line 3349 "src/parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 778 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3357 "src/parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 781 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3365 "src/parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 786 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_lambda((yyvsp[0].blk));
}
#line 3373 "src/parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 791 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), gen_destructure_alt((yyvsp[0].blk)));
}
#line 3381 "src/parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 794 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_destructure_alt((yyvsp[0].blk));
}
#line 3389 "src/parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 799 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3397 "src/parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 802 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3405 "src/parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 807 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal)));
  jv_free((yyvsp[0].literal));
}
#line 3414 "src/parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 811 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3422 "src/parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 814 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-1].blk), gen_op_simple(POP));
}
#line 3430 "src/parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 819 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_array_matcher(gen_noop(), (yyvsp[0].blk));
}
#line 3438 "src/parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 822 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_array_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3446 "src/parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 827 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3454 "src/parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 830 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = BLOCK((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3462 "src/parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 835 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[0].literal)), gen_op_unbound(STOREV, jv_string_value((yyvsp[0].literal))));
}
#line 3470 "src/parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 838 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), BLOCK(gen_op_simple(DUP), gen_op_unbound(STOREV, jv_string_value((yyvsp[-2].literal))), (yyvsp[0].blk)));
}
#line 3478 "src/parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 841 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3486 "src/parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 844 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_object_matcher(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
}
#line 3494 "src/parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 847 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_object_matcher((yyvsp[-2].blk), (yyvsp[0].blk));
}
#line 3502 "src/parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 850 "src/parser.y" /* yacc.c:1646  */
    {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yyloc), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_object_matcher((yyvsp[-3].blk), (yyvsp[0].blk));
}
#line 3515 "src/parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 858 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
}
#line 3524 "src/parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 864 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("as");
}
#line 3532 "src/parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 867 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("def");
}
#line 3540 "src/parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 870 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("module");
}
#line 3548 "src/parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 873 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("import");
}
#line 3556 "src/parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 876 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("include");
}
#line 3564 "src/parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 879 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("if");
}
#line 3572 "src/parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 882 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("then");
}
#line 3580 "src/parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 885 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("else");
}
#line 3588 "src/parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 888 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("elif");
}
#line 3596 "src/parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 891 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("reduce");
}
#line 3604 "src/parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 894 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("foreach");
}
#line 3612 "src/parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 897 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("end");
}
#line 3620 "src/parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 900 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("and");
}
#line 3628 "src/parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 903 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("or");
}
#line 3636 "src/parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 906 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("try");
}
#line 3644 "src/parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 909 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("catch");
}
#line 3652 "src/parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 912 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("label");
}
#line 3660 "src/parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 915 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("break");
}
#line 3668 "src/parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 918 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.literal) = jv_string("__loc__");
}
#line 3676 "src/parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 923 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk)=gen_noop();
}
#line 3684 "src/parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 926 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = (yyvsp[0].blk); }
#line 3690 "src/parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 927 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk)=block_join((yyvsp[-2].blk), (yyvsp[0].blk)); }
#line 3696 "src/parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 928 "src/parser.y" /* yacc.c:1646  */
    { (yyval.blk) = (yyvsp[0].blk); }
#line 3702 "src/parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 931 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
 }
#line 3710 "src/parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 934 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[-2].literal)), (yyvsp[0].blk));
  }
#line 3718 "src/parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 937 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair((yyvsp[-2].blk), (yyvsp[0].blk));
  }
#line 3726 "src/parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 940 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair((yyvsp[0].blk), BLOCK(gen_op_simple(POP), gen_op_simple(DUP2),
                              gen_op_simple(DUP2), gen_op_simple(INDEX)));
  }
#line 3735 "src/parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 944 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair(gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[-2].literal)))),
                    (yyvsp[0].blk));
  }
#line 3744 "src/parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 948 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair(gen_const((yyvsp[0].literal)),
                    gen_location((yyloc), locations, gen_op_unbound(LOADV, jv_string_value((yyvsp[0].literal)))));
  }
#line 3753 "src/parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 952 "src/parser.y" /* yacc.c:1646  */
    {
  (yyval.blk) = gen_dictpair(gen_const(jv_copy((yyvsp[0].literal))),
                    gen_index(gen_noop(), gen_const((yyvsp[0].literal))));
  }
#line 3762 "src/parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 956 "src/parser.y" /* yacc.c:1646  */
    {
  jv msg = check_object_key((yyvsp[-3].blk));
  if (jv_is_valid(msg)) {
    FAIL((yyloc), jv_string_value(msg));
  }
  jv_free(msg);
  (yyval.blk) = gen_dictpair((yyvsp[-3].blk), (yyvsp[0].blk));
  }
#line 3775 "src/parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 964 "src/parser.y" /* yacc.c:1646  */
    {
  FAIL((yyloc), "May need parentheses around object key expression");
  (yyval.blk) = (yyvsp[0].blk);
  }
#line 3784 "src/parser.c" /* yacc.c:1646  */
    break;


#line 3788 "src/parser.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("syntax error"));
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
        yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, answer, errors, locations, lexer_param_ptr, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, answer, errors, locations, lexer_param_ptr);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, answer, errors, locations, lexer_param_ptr);
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
#line 968 "src/parser.y" /* yacc.c:1906  */


int jq_parse(struct locfile* locations, block* answer) {
  struct lexer_param scanner;
  YY_BUFFER_STATE buf;
  jq_yylex_init_extra(0, &scanner.lexer);
  buf = jq_yy_scan_bytes(locations->data, locations->length, scanner.lexer);
  int errors = 0;
  *answer = gen_noop();
  yyparse(answer, &errors, locations, &scanner);
  jq_yy_delete_buffer(buf, scanner.lexer);
  jq_yylex_destroy(scanner.lexer);
  if (errors > 0) {
    block_free(*answer);
    *answer = gen_noop();
  }
  return errors;
}

int jq_parse_library(struct locfile* locations, block* answer) {
  int errs = jq_parse(locations, answer);
  if (errs) return errs;
  if (block_has_main(*answer)) {
    locfile_locate(locations, UNKNOWN_LOCATION, "jq: error: library should only have function definitions, not a main expression");
    return 1;
  }
  assert(block_has_only_binders_and_imports(*answer, OP_IS_CALL_PSEUDO));
  return 0;
}
