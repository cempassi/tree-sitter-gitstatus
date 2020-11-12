#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_POUND = 2,
  anon_sym_LF = 3,
  anon_sym_branch = 4,
  anon_sym_DOT = 5,
  anon_sym_oid = 6,
  anon_sym_LPARENinitial_RPAREN = 7,
  anon_sym_head = 8,
  anon_sym_LPARENdetached_RPAREN = 9,
  anon_sym_upstream = 10,
  anon_sym_ab = 11,
  sym_type = 12,
  sym_ahead = 13,
  sym_behind = 14,
  sym_branch_name = 15,
  sym_upstream_branch = 16,
  sym_sha1 = 17,
  sym_source_file = 18,
  sym_header = 19,
  sym_header_type = 20,
  sym_branch = 21,
  sym_oid = 22,
  sym_head = 23,
  sym_upstream = 24,
  sym_ab = 25,
  sym_file = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_LF] = "\n",
  [anon_sym_branch] = "branch",
  [anon_sym_DOT] = ".",
  [anon_sym_oid] = "oid",
  [anon_sym_LPARENinitial_RPAREN] = "(initial)",
  [anon_sym_head] = "head",
  [anon_sym_LPARENdetached_RPAREN] = "(detached)",
  [anon_sym_upstream] = "upstream",
  [anon_sym_ab] = "ab",
  [sym_type] = "type",
  [sym_ahead] = "ahead",
  [sym_behind] = "behind",
  [sym_branch_name] = "branch_name",
  [sym_upstream_branch] = "upstream_branch",
  [sym_sha1] = "sha1",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_header_type] = "header_type",
  [sym_branch] = "branch",
  [sym_oid] = "oid",
  [sym_head] = "head",
  [sym_upstream] = "upstream",
  [sym_ab] = "ab",
  [sym_file] = "file",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_oid] = anon_sym_oid,
  [anon_sym_LPARENinitial_RPAREN] = anon_sym_LPARENinitial_RPAREN,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_LPARENdetached_RPAREN] = anon_sym_LPARENdetached_RPAREN,
  [anon_sym_upstream] = anon_sym_upstream,
  [anon_sym_ab] = anon_sym_ab,
  [sym_type] = sym_type,
  [sym_ahead] = sym_ahead,
  [sym_behind] = sym_behind,
  [sym_branch_name] = sym_branch_name,
  [sym_upstream_branch] = sym_upstream_branch,
  [sym_sha1] = sym_sha1,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_header_type] = sym_header_type,
  [sym_branch] = sym_branch,
  [sym_oid] = sym_oid,
  [sym_head] = sym_head,
  [sym_upstream] = sym_upstream,
  [sym_ab] = sym_ab,
  [sym_file] = sym_file,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENinitial_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENdetached_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upstream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ab] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ahead] = {
    .visible = true,
    .named = true,
  },
  [sym_behind] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_name] = {
    .visible = true,
    .named = true,
  },
  [sym_upstream_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_sha1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_header_type] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_oid] = {
    .visible = true,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_upstream] = {
    .visible = true,
    .named = true,
  },
  [sym_ab] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '+') ADVANCE(26);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '1' ||
          lookahead == '2' ||
          lookahead == 'u') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPARENinitial_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPARENdetached_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_type);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ahead);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_behind);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_branch_name);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_branch_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_upstream_branch);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_upstream_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sha1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_ab);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_oid);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_upstream);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_oid] = ACTIONS(1),
    [anon_sym_LPARENinitial_RPAREN] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_LPARENdetached_RPAREN] = ACTIONS(1),
    [anon_sym_upstream] = ACTIONS(1),
    [anon_sym_ab] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_ahead] = ACTIONS(1),
    [sym_behind] = ACTIONS(1),
    [sym_sha1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_header] = STATE(4),
    [sym_file] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_type] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_oid,
    ACTIONS(11), 1,
      anon_sym_head,
    ACTIONS(13), 1,
      anon_sym_upstream,
    ACTIONS(15), 1,
      anon_sym_ab,
    STATE(17), 4,
      sym_oid,
      sym_head,
      sym_upstream,
      sym_ab,
  [19] = 3,
    ACTIONS(17), 1,
      anon_sym_branch,
    STATE(9), 1,
      sym_branch,
    STATE(11), 1,
      sym_header_type,
  [29] = 3,
    ACTIONS(7), 1,
      sym_type,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_file,
  [39] = 1,
    ACTIONS(21), 2,
      anon_sym_LPARENdetached_RPAREN,
      sym_branch_name,
  [44] = 1,
    ACTIONS(23), 2,
      anon_sym_LPARENinitial_RPAREN,
      sym_sha1,
  [49] = 1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_type,
  [54] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [58] = 1,
    ACTIONS(29), 1,
      anon_sym_LF,
  [62] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [66] = 1,
    ACTIONS(33), 1,
      anon_sym_LF,
  [70] = 1,
    ACTIONS(35), 1,
      anon_sym_DOT,
  [74] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [78] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [82] = 1,
    ACTIONS(39), 1,
      sym_upstream_branch,
  [86] = 1,
    ACTIONS(41), 1,
      sym_ahead,
  [90] = 1,
    ACTIONS(43), 1,
      anon_sym_LF,
  [94] = 1,
    ACTIONS(45), 1,
      anon_sym_LF,
  [98] = 1,
    ACTIONS(47), 1,
      anon_sym_LF,
  [102] = 1,
    ACTIONS(49), 1,
      anon_sym_LF,
  [106] = 1,
    ACTIONS(51), 1,
      sym_behind,
  [110] = 1,
    ACTIONS(53), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 70,
  [SMALL_STATE(13)] = 74,
  [SMALL_STATE(14)] = 78,
  [SMALL_STATE(15)] = 82,
  [SMALL_STATE(16)] = 86,
  [SMALL_STATE(17)] = 90,
  [SMALL_STATE(18)] = 94,
  [SMALL_STATE(19)] = 98,
  [SMALL_STATE(20)] = 102,
  [SMALL_STATE(21)] = 106,
  [SMALL_STATE(22)] = 110,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_type, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oid, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upstream, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ab, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitstatus(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
