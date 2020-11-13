#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_POUND = 2,
  anon_sym_LF = 3,
  anon_sym_branch_DOT = 4,
  anon_sym_oid = 5,
  anon_sym_LPARENinitial_RPAREN = 6,
  anon_sym_head = 7,
  anon_sym_LPARENdetached_RPAREN = 8,
  anon_sym_upstream = 9,
  anon_sym_ab = 10,
  anon_sym_1 = 11,
  anon_sym_DOT = 12,
  anon_sym_N_DOT_DOT_DOT = 13,
  anon_sym_S = 14,
  anon_sym_QMARK = 15,
  anon_sym_BANG = 16,
  aux_sym_hHEAD_token1 = 17,
  aux_sym_mHEAD_token1 = 18,
  sym_added = 19,
  sym_modified = 20,
  sym_deleted = 21,
  sym_renamed = 22,
  anon_sym_C = 23,
  sym_subTracked = 24,
  sym_subUntracked = 25,
  sym_path = 26,
  sym_ahead = 27,
  sym_behind = 28,
  sym_branchName = 29,
  sym_upBranch = 30,
  sym_source_file = 31,
  sym_header = 32,
  sym_branch = 33,
  sym_oid = 34,
  sym_head = 35,
  sym_upstream = 36,
  sym_ab = 37,
  sym_file = 38,
  sym__status = 39,
  sym__action = 40,
  sym_staged = 41,
  sym_unstaged = 42,
  sym__statusCode = 43,
  sym_submodule = 44,
  sym__isSubmodule = 45,
  sym__modifications = 46,
  sym_modes = 47,
  sym_hashes = 48,
  sym_untracked = 49,
  sym_ignored = 50,
  sym_hHEAD = 51,
  sym_hIndex = 52,
  sym_mHEAD = 53,
  sym_mIndex = 54,
  sym_mWorktree = 55,
  sym_copied = 56,
  sym_subCommit = 57,
  sym__opt_off = 58,
  sym_sha1 = 59,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_LF] = "\n",
  [anon_sym_branch_DOT] = "branch.",
  [anon_sym_oid] = "oid",
  [anon_sym_LPARENinitial_RPAREN] = "(initial)",
  [anon_sym_head] = "head",
  [anon_sym_LPARENdetached_RPAREN] = "(detached)",
  [anon_sym_upstream] = "upstream",
  [anon_sym_ab] = "ab",
  [anon_sym_1] = "1",
  [anon_sym_DOT] = ".",
  [anon_sym_N_DOT_DOT_DOT] = "N...",
  [anon_sym_S] = "S",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [aux_sym_hHEAD_token1] = "hHEAD_token1",
  [aux_sym_mHEAD_token1] = "mHEAD_token1",
  [sym_added] = "added",
  [sym_modified] = "modified",
  [sym_deleted] = "deleted",
  [sym_renamed] = "renamed",
  [anon_sym_C] = "C",
  [sym_subTracked] = "subTracked",
  [sym_subUntracked] = "subUntracked",
  [sym_path] = "path",
  [sym_ahead] = "ahead",
  [sym_behind] = "behind",
  [sym_branchName] = "branchName",
  [sym_upBranch] = "upBranch",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_branch] = "branch",
  [sym_oid] = "oid",
  [sym_head] = "head",
  [sym_upstream] = "upstream",
  [sym_ab] = "ab",
  [sym_file] = "file",
  [sym__status] = "_status",
  [sym__action] = "_action",
  [sym_staged] = "staged",
  [sym_unstaged] = "unstaged",
  [sym__statusCode] = "_statusCode",
  [sym_submodule] = "submodule",
  [sym__isSubmodule] = "_isSubmodule",
  [sym__modifications] = "_modifications",
  [sym_modes] = "modes",
  [sym_hashes] = "hashes",
  [sym_untracked] = "untracked",
  [sym_ignored] = "ignored",
  [sym_hHEAD] = "hHEAD",
  [sym_hIndex] = "hIndex",
  [sym_mHEAD] = "mHEAD",
  [sym_mIndex] = "mIndex",
  [sym_mWorktree] = "mWorktree",
  [sym_copied] = "copied",
  [sym_subCommit] = "subCommit",
  [sym__opt_off] = "_opt_off",
  [sym_sha1] = "sha1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_branch_DOT] = anon_sym_branch_DOT,
  [anon_sym_oid] = anon_sym_oid,
  [anon_sym_LPARENinitial_RPAREN] = anon_sym_LPARENinitial_RPAREN,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_LPARENdetached_RPAREN] = anon_sym_LPARENdetached_RPAREN,
  [anon_sym_upstream] = anon_sym_upstream,
  [anon_sym_ab] = anon_sym_ab,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_N_DOT_DOT_DOT] = anon_sym_N_DOT_DOT_DOT,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_hHEAD_token1] = aux_sym_hHEAD_token1,
  [aux_sym_mHEAD_token1] = aux_sym_mHEAD_token1,
  [sym_added] = sym_added,
  [sym_modified] = sym_modified,
  [sym_deleted] = sym_deleted,
  [sym_renamed] = sym_renamed,
  [anon_sym_C] = anon_sym_C,
  [sym_subTracked] = sym_subTracked,
  [sym_subUntracked] = sym_subUntracked,
  [sym_path] = sym_path,
  [sym_ahead] = sym_ahead,
  [sym_behind] = sym_behind,
  [sym_branchName] = sym_branchName,
  [sym_upBranch] = sym_upBranch,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_branch] = sym_branch,
  [sym_oid] = sym_oid,
  [sym_head] = sym_head,
  [sym_upstream] = sym_upstream,
  [sym_ab] = sym_ab,
  [sym_file] = sym_file,
  [sym__status] = sym__status,
  [sym__action] = sym__action,
  [sym_staged] = sym_staged,
  [sym_unstaged] = sym_unstaged,
  [sym__statusCode] = sym__statusCode,
  [sym_submodule] = sym_submodule,
  [sym__isSubmodule] = sym__isSubmodule,
  [sym__modifications] = sym__modifications,
  [sym_modes] = sym_modes,
  [sym_hashes] = sym_hashes,
  [sym_untracked] = sym_untracked,
  [sym_ignored] = sym_ignored,
  [sym_hHEAD] = sym_hHEAD,
  [sym_hIndex] = sym_hIndex,
  [sym_mHEAD] = sym_mHEAD,
  [sym_mIndex] = sym_mIndex,
  [sym_mWorktree] = sym_mWorktree,
  [sym_copied] = sym_copied,
  [sym_subCommit] = sym_subCommit,
  [sym__opt_off] = sym__opt_off,
  [sym_sha1] = sym_sha1,
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
  [anon_sym_branch_DOT] = {
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
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hHEAD_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mHEAD_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_added] = {
    .visible = true,
    .named = true,
  },
  [sym_modified] = {
    .visible = true,
    .named = true,
  },
  [sym_deleted] = {
    .visible = true,
    .named = true,
  },
  [sym_renamed] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [sym_subTracked] = {
    .visible = true,
    .named = true,
  },
  [sym_subUntracked] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
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
  [sym_branchName] = {
    .visible = true,
    .named = true,
  },
  [sym_upBranch] = {
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
  [sym__status] = {
    .visible = false,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_staged] = {
    .visible = true,
    .named = true,
  },
  [sym_unstaged] = {
    .visible = true,
    .named = true,
  },
  [sym__statusCode] = {
    .visible = false,
    .named = true,
  },
  [sym_submodule] = {
    .visible = true,
    .named = true,
  },
  [sym__isSubmodule] = {
    .visible = false,
    .named = true,
  },
  [sym__modifications] = {
    .visible = false,
    .named = true,
  },
  [sym_modes] = {
    .visible = true,
    .named = true,
  },
  [sym_hashes] = {
    .visible = true,
    .named = true,
  },
  [sym_untracked] = {
    .visible = true,
    .named = true,
  },
  [sym_ignored] = {
    .visible = true,
    .named = true,
  },
  [sym_hHEAD] = {
    .visible = true,
    .named = true,
  },
  [sym_hIndex] = {
    .visible = true,
    .named = true,
  },
  [sym_mHEAD] = {
    .visible = true,
    .named = true,
  },
  [sym_mIndex] = {
    .visible = true,
    .named = true,
  },
  [sym_mWorktree] = {
    .visible = true,
    .named = true,
  },
  [sym_copied] = {
    .visible = true,
    .named = true,
  },
  [sym_subCommit] = {
    .visible = true,
    .named = true,
  },
  [sym__opt_off] = {
    .visible = false,
    .named = true,
  },
  [sym_sha1] = {
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
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '.' ||
          lookahead == 'U' ||
          lookahead == '|') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == '.' ||
          lookahead == 'M' ||
          lookahead == '|') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 36:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 37:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 38:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_branch_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPARENinitial_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPARENdetached_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_N_DOT_DOT_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_mHEAD_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_added);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_modified);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_deleted);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_renamed);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_subTracked);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_subUntracked);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_path);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ahead);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_behind);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_branchName);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_branchName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_upBranch);
      if (lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_upBranch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      if (lookahead == 'h') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_ab);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_oid);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_upstream);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_branch_DOT] = ACTIONS(1),
    [anon_sym_oid] = ACTIONS(1),
    [anon_sym_LPARENinitial_RPAREN] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_LPARENdetached_RPAREN] = ACTIONS(1),
    [anon_sym_upstream] = ACTIONS(1),
    [anon_sym_ab] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_N_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_hHEAD_token1] = ACTIONS(1),
    [aux_sym_mHEAD_token1] = ACTIONS(1),
    [sym_added] = ACTIONS(1),
    [sym_modified] = ACTIONS(1),
    [sym_deleted] = ACTIONS(1),
    [sym_renamed] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [sym_subTracked] = ACTIONS(1),
    [sym_subUntracked] = ACTIONS(1),
    [sym_ahead] = ACTIONS(1),
    [sym_behind] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_header] = STATE(3),
    [sym_file] = STATE(44),
    [sym__status] = STATE(43),
    [sym__action] = STATE(43),
    [sym_untracked] = STATE(43),
    [sym_ignored] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_1] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_C,
    STATE(21), 2,
      sym_staged,
      sym_unstaged,
    STATE(36), 2,
      sym__statusCode,
      sym_copied,
    ACTIONS(15), 4,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [21] = 6,
    ACTIONS(7), 1,
      anon_sym_1,
    ACTIONS(9), 1,
      anon_sym_QMARK,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_file,
    STATE(43), 4,
      sym__status,
      sym__action,
      sym_untracked,
      sym_ignored,
  [43] = 5,
    ACTIONS(21), 1,
      anon_sym_oid,
    ACTIONS(23), 1,
      anon_sym_head,
    ACTIONS(25), 1,
      anon_sym_upstream,
    ACTIONS(27), 1,
      anon_sym_ab,
    STATE(26), 4,
      sym_oid,
      sym_head,
      sym_upstream,
      sym_ab,
  [62] = 3,
    ACTIONS(17), 1,
      anon_sym_C,
    STATE(8), 2,
      sym__statusCode,
      sym_copied,
    ACTIONS(29), 4,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [76] = 4,
    STATE(22), 1,
      sym_subCommit,
    STATE(38), 1,
      sym__opt_off,
    STATE(39), 1,
      sym__modifications,
    ACTIONS(31), 2,
      anon_sym_DOT,
      anon_sym_C,
  [90] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_1,
      anon_sym_QMARK,
      anon_sym_BANG,
  [97] = 4,
    ACTIONS(35), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_S,
    STATE(10), 1,
      sym_submodule,
    STATE(33), 1,
      sym__isSubmodule,
  [110] = 4,
    ACTIONS(35), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(37), 1,
      anon_sym_S,
    STATE(11), 1,
      sym_submodule,
    STATE(33), 1,
      sym__isSubmodule,
  [123] = 3,
    ACTIONS(39), 1,
      aux_sym_mHEAD_token1,
    STATE(13), 1,
      sym_modes,
    STATE(18), 1,
      sym_mHEAD,
  [133] = 3,
    ACTIONS(39), 1,
      aux_sym_mHEAD_token1,
    STATE(14), 1,
      sym_modes,
    STATE(18), 1,
      sym_mHEAD,
  [143] = 1,
    ACTIONS(41), 3,
      anon_sym_DOT,
      anon_sym_N_DOT_DOT_DOT,
      anon_sym_S,
  [149] = 3,
    ACTIONS(43), 1,
      aux_sym_hHEAD_token1,
    STATE(19), 1,
      sym_hHEAD,
    STATE(47), 1,
      sym_hashes,
  [159] = 3,
    ACTIONS(43), 1,
      aux_sym_hHEAD_token1,
    STATE(19), 1,
      sym_hHEAD,
    STATE(51), 1,
      sym_hashes,
  [169] = 3,
    ACTIONS(45), 1,
      anon_sym_LPARENinitial_RPAREN,
    ACTIONS(47), 1,
      aux_sym_hHEAD_token1,
    STATE(28), 1,
      sym_sha1,
  [179] = 2,
    ACTIONS(49), 1,
      anon_sym_branch_DOT,
    STATE(42), 1,
      sym_branch,
  [186] = 1,
    ACTIONS(51), 2,
      anon_sym_LPARENdetached_RPAREN,
      sym_branchName,
  [191] = 2,
    ACTIONS(53), 1,
      aux_sym_mHEAD_token1,
    STATE(20), 1,
      sym_mIndex,
  [198] = 2,
    ACTIONS(55), 1,
      aux_sym_hHEAD_token1,
    STATE(55), 1,
      sym_hIndex,
  [205] = 2,
    ACTIONS(57), 1,
      aux_sym_mHEAD_token1,
    STATE(57), 1,
      sym_mWorktree,
  [212] = 1,
    ACTIONS(59), 1,
      anon_sym_LF,
  [216] = 1,
    ACTIONS(61), 1,
      sym_subTracked,
  [220] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [224] = 1,
    ACTIONS(65), 1,
      sym_upBranch,
  [228] = 1,
    ACTIONS(67), 1,
      sym_ahead,
  [232] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(71), 1,
      sym_path,
  [240] = 1,
    ACTIONS(73), 1,
      anon_sym_LF,
  [244] = 1,
    ACTIONS(75), 1,
      anon_sym_LF,
  [248] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
  [252] = 1,
    ACTIONS(79), 1,
      anon_sym_LF,
  [256] = 1,
    ACTIONS(81), 1,
      sym_behind,
  [260] = 1,
    ACTIONS(83), 1,
      aux_sym_mHEAD_token1,
  [264] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [268] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [272] = 1,
    ACTIONS(89), 1,
      anon_sym_DOT,
  [276] = 1,
    ACTIONS(91), 1,
      anon_sym_LF,
  [280] = 1,
    ACTIONS(93), 1,
      sym_subTracked,
  [284] = 1,
    ACTIONS(95), 1,
      aux_sym_mHEAD_token1,
  [288] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [292] = 1,
    ACTIONS(99), 1,
      aux_sym_mHEAD_token1,
  [296] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [300] = 1,
    ACTIONS(103), 1,
      anon_sym_LF,
  [304] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [308] = 1,
    ACTIONS(105), 1,
      sym_subUntracked,
  [312] = 1,
    ACTIONS(107), 1,
      aux_sym_hHEAD_token1,
  [316] = 1,
    ACTIONS(109), 1,
      sym_path,
  [320] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [324] = 1,
    ACTIONS(113), 1,
      aux_sym_mHEAD_token1,
  [328] = 1,
    ACTIONS(115), 1,
      sym_path,
  [332] = 1,
    ACTIONS(117), 1,
      sym_path,
  [336] = 1,
    ACTIONS(119), 1,
      aux_sym_mHEAD_token1,
  [340] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [344] = 1,
    ACTIONS(123), 1,
      sym_path,
  [348] = 1,
    ACTIONS(125), 1,
      sym_path,
  [352] = 1,
    ACTIONS(127), 1,
      aux_sym_hHEAD_token1,
  [356] = 1,
    ACTIONS(129), 1,
      aux_sym_hHEAD_token1,
  [360] = 1,
    ACTIONS(131), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 191,
  [SMALL_STATE(19)] = 198,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 220,
  [SMALL_STATE(24)] = 224,
  [SMALL_STATE(25)] = 228,
  [SMALL_STATE(26)] = 232,
  [SMALL_STATE(27)] = 236,
  [SMALL_STATE(28)] = 240,
  [SMALL_STATE(29)] = 244,
  [SMALL_STATE(30)] = 248,
  [SMALL_STATE(31)] = 252,
  [SMALL_STATE(32)] = 256,
  [SMALL_STATE(33)] = 260,
  [SMALL_STATE(34)] = 264,
  [SMALL_STATE(35)] = 268,
  [SMALL_STATE(36)] = 272,
  [SMALL_STATE(37)] = 276,
  [SMALL_STATE(38)] = 280,
  [SMALL_STATE(39)] = 284,
  [SMALL_STATE(40)] = 288,
  [SMALL_STATE(41)] = 292,
  [SMALL_STATE(42)] = 296,
  [SMALL_STATE(43)] = 300,
  [SMALL_STATE(44)] = 304,
  [SMALL_STATE(45)] = 308,
  [SMALL_STATE(46)] = 312,
  [SMALL_STATE(47)] = 316,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 324,
  [SMALL_STATE(50)] = 328,
  [SMALL_STATE(51)] = 332,
  [SMALL_STATE(52)] = 336,
  [SMALL_STATE(53)] = 340,
  [SMALL_STATE(54)] = 344,
  [SMALL_STATE(55)] = 348,
  [SMALL_STATE(56)] = 352,
  [SMALL_STATE(57)] = 356,
  [SMALL_STATE(58)] = 360,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copied, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oid, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha1, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upstream, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignored, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untracked, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ab, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subCommit, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__isSubmodule, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mHEAD, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hHEAD, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mIndex, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modifications, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unstaged, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hIndex, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashes, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mWorktree, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_staged, 6),
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
