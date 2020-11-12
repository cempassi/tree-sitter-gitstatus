#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
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
  anon_sym_head = 7,
  anon_sym_LPARENinitial_RPAREN = 8,
  anon_sym_LPARENdetached_RPAREN = 9,
  sym_branch_name = 10,
  sym_sha1 = 11,
  sym_source_file = 12,
  sym__definition = 13,
  sym_header_definition = 14,
  sym_header_type = 15,
  sym_branch = 16,
  sym_oid = 17,
  sym_head = 18,
  sym_data_oid = 19,
  sym_data_head = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_LF] = "\n",
  [anon_sym_branch] = "branch",
  [anon_sym_DOT] = ".",
  [anon_sym_oid] = "oid",
  [anon_sym_head] = "head",
  [anon_sym_LPARENinitial_RPAREN] = "(initial)",
  [anon_sym_LPARENdetached_RPAREN] = "(detached)",
  [sym_branch_name] = "branch_name",
  [sym_sha1] = "sha1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_header_definition] = "header_definition",
  [sym_header_type] = "header_type",
  [sym_branch] = "branch",
  [sym_oid] = "oid",
  [sym_head] = "head",
  [sym_data_oid] = "data_oid",
  [sym_data_head] = "data_head",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_oid] = anon_sym_oid,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_LPARENinitial_RPAREN] = anon_sym_LPARENinitial_RPAREN,
  [anon_sym_LPARENdetached_RPAREN] = anon_sym_LPARENdetached_RPAREN,
  [sym_branch_name] = sym_branch_name,
  [sym_sha1] = sym_sha1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_header_definition] = sym_header_definition,
  [sym_header_type] = sym_header_type,
  [sym_branch] = sym_branch,
  [sym_oid] = sym_oid,
  [sym_head] = sym_head,
  [sym_data_oid] = sym_data_oid,
  [sym_data_head] = sym_data_head,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENinitial_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPARENdetached_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_branch_name] = {
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
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_header_definition] = {
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
  [sym_data_oid] = {
    .visible = true,
    .named = true,
  },
  [sym_data_head] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPARENinitial_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPARENdetached_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_branch_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_sha1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
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
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_oid);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_oid] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_LPARENinitial_RPAREN] = ACTIONS(1),
    [anon_sym_LPARENdetached_RPAREN] = ACTIONS(1),
    [sym_sha1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__definition] = STATE(2),
    [sym_header_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_header_definition,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(3), 3,
      sym__definition,
      sym_header_definition,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(14), 1,
      anon_sym_oid,
    ACTIONS(16), 1,
      anon_sym_head,
    STATE(13), 2,
      sym_oid,
      sym_head,
  [35] = 3,
    ACTIONS(18), 1,
      anon_sym_branch,
    STATE(11), 1,
      sym_header_type,
    STATE(12), 1,
      sym_branch,
  [45] = 2,
    STATE(15), 1,
      sym_data_oid,
    ACTIONS(20), 2,
      anon_sym_LPARENinitial_RPAREN,
      sym_sha1,
  [53] = 2,
    STATE(17), 1,
      sym_data_head,
    ACTIONS(22), 2,
      anon_sym_LPARENdetached_RPAREN,
      sym_branch_name,
  [61] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
  [66] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [70] = 1,
    ACTIONS(28), 1,
      anon_sym_DOT,
  [74] = 1,
    ACTIONS(30), 1,
      anon_sym_LF,
  [78] = 1,
    ACTIONS(32), 1,
      anon_sym_LF,
  [82] = 1,
    ACTIONS(34), 1,
      anon_sym_LF,
  [86] = 1,
    ACTIONS(36), 1,
      anon_sym_LF,
  [90] = 1,
    ACTIONS(38), 1,
      anon_sym_LF,
  [94] = 1,
    ACTIONS(40), 1,
      anon_sym_LF,
  [98] = 1,
    ACTIONS(42), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 45,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 61,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 82,
  [SMALL_STATE(14)] = 86,
  [SMALL_STATE(15)] = 90,
  [SMALL_STATE(16)] = 94,
  [SMALL_STATE(17)] = 98,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_definition, 3),
  [26] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_type, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_oid, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oid, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_head, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2),
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
