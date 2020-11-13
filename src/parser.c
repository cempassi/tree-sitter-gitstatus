#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_u = 13,
  anon_sym_N_DOT_DOT_DOT = 14,
  sym_path = 15,
  anon_sym_S = 16,
  anon_sym_QMARK = 17,
  anon_sym_BANG = 18,
  aux_sym_mHEAD_token1 = 19,
  aux_sym_hHEAD_token1 = 20,
  sym_added = 21,
  sym_modified = 22,
  sym_deleted = 23,
  sym_renamed = 24,
  anon_sym_C = 25,
  sym_bothAdded = 26,
  sym_addedByUs = 27,
  sym_addedByThem = 28,
  sym_bothDeleted = 29,
  sym_deletedByUs = 30,
  sym_deletedByThem = 31,
  sym_bothModified = 32,
  sym_subTracked = 33,
  sym_subUntracked = 34,
  sym_ahead = 35,
  sym_behind = 36,
  sym_branchName = 37,
  sym_upBranch = 38,
  sym_source_file = 39,
  sym_header = 40,
  sym_branch = 41,
  sym_oid = 42,
  sym_head = 43,
  sym_upstream = 44,
  sym_ab = 45,
  sym_file = 46,
  sym__area = 47,
  sym__status = 48,
  sym_staged = 49,
  sym_unstaged = 50,
  sym_conflicted = 51,
  sym__action = 52,
  sym__conflict = 53,
  sym_submodule = 54,
  sym_modes = 55,
  sym_stagesModes = 56,
  sym_stagesHashes = 57,
  sym_hashes = 58,
  sym__isSubmodule = 59,
  sym__submoduleStatus = 60,
  sym_untracked = 61,
  sym_ignored = 62,
  sym_mHEAD = 63,
  sym_mIndex = 64,
  sym_mWorktree = 65,
  sym_mStage1 = 66,
  sym_mStage2 = 67,
  sym_mStage3 = 68,
  sym_hHEAD = 69,
  sym_hIndex = 70,
  sym_hStage1 = 71,
  sym_hStage2 = 72,
  sym_hStage3 = 73,
  sym_copied = 74,
  sym_subCommit = 75,
  sym_sha1 = 76,
  sym__opt_off = 77,
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
  [anon_sym_u] = "u",
  [anon_sym_N_DOT_DOT_DOT] = "N...",
  [sym_path] = "path",
  [anon_sym_S] = "S",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [aux_sym_mHEAD_token1] = "mHEAD_token1",
  [aux_sym_hHEAD_token1] = "hHEAD_token1",
  [sym_added] = "added",
  [sym_modified] = "modified",
  [sym_deleted] = "deleted",
  [sym_renamed] = "renamed",
  [anon_sym_C] = "C",
  [sym_bothAdded] = "bothAdded",
  [sym_addedByUs] = "addedByUs",
  [sym_addedByThem] = "addedByThem",
  [sym_bothDeleted] = "bothDeleted",
  [sym_deletedByUs] = "deletedByUs",
  [sym_deletedByThem] = "deletedByThem",
  [sym_bothModified] = "bothModified",
  [sym_subTracked] = "subTracked",
  [sym_subUntracked] = "subUntracked",
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
  [sym__area] = "_area",
  [sym__status] = "_status",
  [sym_staged] = "staged",
  [sym_unstaged] = "unstaged",
  [sym_conflicted] = "conflicted",
  [sym__action] = "_action",
  [sym__conflict] = "_conflict",
  [sym_submodule] = "submodule",
  [sym_modes] = "modes",
  [sym_stagesModes] = "stagesModes",
  [sym_stagesHashes] = "stagesHashes",
  [sym_hashes] = "hashes",
  [sym__isSubmodule] = "_isSubmodule",
  [sym__submoduleStatus] = "_submoduleStatus",
  [sym_untracked] = "untracked",
  [sym_ignored] = "ignored",
  [sym_mHEAD] = "mHEAD",
  [sym_mIndex] = "mIndex",
  [sym_mWorktree] = "mWorktree",
  [sym_mStage1] = "mStage1",
  [sym_mStage2] = "mStage2",
  [sym_mStage3] = "mStage3",
  [sym_hHEAD] = "hHEAD",
  [sym_hIndex] = "hIndex",
  [sym_hStage1] = "hStage1",
  [sym_hStage2] = "hStage2",
  [sym_hStage3] = "hStage3",
  [sym_copied] = "copied",
  [sym_subCommit] = "subCommit",
  [sym_sha1] = "sha1",
  [sym__opt_off] = "_opt_off",
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
  [anon_sym_u] = anon_sym_u,
  [anon_sym_N_DOT_DOT_DOT] = anon_sym_N_DOT_DOT_DOT,
  [sym_path] = sym_path,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_mHEAD_token1] = aux_sym_mHEAD_token1,
  [aux_sym_hHEAD_token1] = aux_sym_hHEAD_token1,
  [sym_added] = sym_added,
  [sym_modified] = sym_modified,
  [sym_deleted] = sym_deleted,
  [sym_renamed] = sym_renamed,
  [anon_sym_C] = anon_sym_C,
  [sym_bothAdded] = sym_bothAdded,
  [sym_addedByUs] = sym_addedByUs,
  [sym_addedByThem] = sym_addedByThem,
  [sym_bothDeleted] = sym_bothDeleted,
  [sym_deletedByUs] = sym_deletedByUs,
  [sym_deletedByThem] = sym_deletedByThem,
  [sym_bothModified] = sym_bothModified,
  [sym_subTracked] = sym_subTracked,
  [sym_subUntracked] = sym_subUntracked,
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
  [sym__area] = sym__area,
  [sym__status] = sym__status,
  [sym_staged] = sym_staged,
  [sym_unstaged] = sym_unstaged,
  [sym_conflicted] = sym_conflicted,
  [sym__action] = sym__action,
  [sym__conflict] = sym__conflict,
  [sym_submodule] = sym_submodule,
  [sym_modes] = sym_modes,
  [sym_stagesModes] = sym_stagesModes,
  [sym_stagesHashes] = sym_stagesHashes,
  [sym_hashes] = sym_hashes,
  [sym__isSubmodule] = sym__isSubmodule,
  [sym__submoduleStatus] = sym__submoduleStatus,
  [sym_untracked] = sym_untracked,
  [sym_ignored] = sym_ignored,
  [sym_mHEAD] = sym_mHEAD,
  [sym_mIndex] = sym_mIndex,
  [sym_mWorktree] = sym_mWorktree,
  [sym_mStage1] = sym_mStage1,
  [sym_mStage2] = sym_mStage2,
  [sym_mStage3] = sym_mStage3,
  [sym_hHEAD] = sym_hHEAD,
  [sym_hIndex] = sym_hIndex,
  [sym_hStage1] = sym_hStage1,
  [sym_hStage2] = sym_hStage2,
  [sym_hStage3] = sym_hStage3,
  [sym_copied] = sym_copied,
  [sym_subCommit] = sym_subCommit,
  [sym_sha1] = sym_sha1,
  [sym__opt_off] = sym__opt_off,
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
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
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
  [aux_sym_mHEAD_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hHEAD_token1] = {
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
  [sym_bothAdded] = {
    .visible = true,
    .named = true,
  },
  [sym_addedByUs] = {
    .visible = true,
    .named = true,
  },
  [sym_addedByThem] = {
    .visible = true,
    .named = true,
  },
  [sym_bothDeleted] = {
    .visible = true,
    .named = true,
  },
  [sym_deletedByUs] = {
    .visible = true,
    .named = true,
  },
  [sym_deletedByThem] = {
    .visible = true,
    .named = true,
  },
  [sym_bothModified] = {
    .visible = true,
    .named = true,
  },
  [sym_subTracked] = {
    .visible = true,
    .named = true,
  },
  [sym_subUntracked] = {
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
  [sym__area] = {
    .visible = false,
    .named = true,
  },
  [sym__status] = {
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
  [sym_conflicted] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym__conflict] = {
    .visible = false,
    .named = true,
  },
  [sym_submodule] = {
    .visible = true,
    .named = true,
  },
  [sym_modes] = {
    .visible = true,
    .named = true,
  },
  [sym_stagesModes] = {
    .visible = true,
    .named = true,
  },
  [sym_stagesHashes] = {
    .visible = true,
    .named = true,
  },
  [sym_hashes] = {
    .visible = true,
    .named = true,
  },
  [sym__isSubmodule] = {
    .visible = false,
    .named = true,
  },
  [sym__submoduleStatus] = {
    .visible = false,
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
  [sym_mStage1] = {
    .visible = true,
    .named = true,
  },
  [sym_mStage2] = {
    .visible = true,
    .named = true,
  },
  [sym_mStage3] = {
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
  [sym_hStage1] = {
    .visible = true,
    .named = true,
  },
  [sym_hStage2] = {
    .visible = true,
    .named = true,
  },
  [sym_hStage3] = {
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
  [sym_sha1] = {
    .visible = true,
    .named = true,
  },
  [sym__opt_off] = {
    .visible = false,
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
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'U') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == '.' ||
          lookahead == 'M' ||
          lookahead == '|') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == '.' ||
          lookahead == 'U' ||
          lookahead == '|') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == 'N') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_N_DOT_DOT_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_path);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_mHEAD_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_hHEAD_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_added);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_added);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_modified);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_deleted);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_deleted);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_renamed);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bothAdded);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_addedByUs);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_addedByThem);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bothDeleted);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_deletedByUs);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_deletedByThem);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bothModified);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_subTracked);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_subUntracked);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_subUntracked);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ahead);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_behind);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_branchName);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_branchName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_upBranch);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_upBranch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
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
      ACCEPT_TOKEN(anon_sym_u);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 38},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 4},
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
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_N_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym_mHEAD_token1] = ACTIONS(1),
    [sym_added] = ACTIONS(1),
    [sym_modified] = ACTIONS(1),
    [sym_deleted] = ACTIONS(1),
    [sym_renamed] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [sym_bothAdded] = ACTIONS(1),
    [sym_addedByUs] = ACTIONS(1),
    [sym_addedByThem] = ACTIONS(1),
    [sym_bothDeleted] = ACTIONS(1),
    [sym_deletedByUs] = ACTIONS(1),
    [sym_deletedByThem] = ACTIONS(1),
    [sym_bothModified] = ACTIONS(1),
    [sym_subTracked] = ACTIONS(1),
    [sym_subUntracked] = ACTIONS(1),
    [sym_ahead] = ACTIONS(1),
    [sym_behind] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_header] = STATE(2),
    [sym_file] = STATE(61),
    [sym__area] = STATE(59),
    [sym__status] = STATE(59),
    [sym_conflicted] = STATE(59),
    [sym_untracked] = STATE(59),
    [sym_ignored] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_1] = ACTIONS(7),
    [anon_sym_u] = ACTIONS(9),
    [anon_sym_QMARK] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_1,
    ACTIONS(9), 1,
      anon_sym_u,
    ACTIONS(11), 1,
      anon_sym_QMARK,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_file,
    STATE(59), 5,
      sym__area,
      sym__status,
      sym_conflicted,
      sym_untracked,
      sym_ignored,
  [26] = 5,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_C,
    STATE(50), 2,
      sym__action,
      sym_copied,
    STATE(54), 2,
      sym_staged,
      sym_unstaged,
    ACTIONS(19), 4,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [47] = 6,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      anon_sym_oid,
    ACTIONS(27), 1,
      anon_sym_head,
    ACTIONS(29), 1,
      anon_sym_upstream,
    ACTIONS(31), 1,
      anon_sym_ab,
    STATE(53), 4,
      sym_oid,
      sym_head,
      sym_upstream,
      sym_ab,
  [69] = 2,
    STATE(11), 1,
      sym__conflict,
    ACTIONS(33), 7,
      sym_bothAdded,
      sym_addedByUs,
      sym_addedByThem,
      sym_bothDeleted,
      sym_deletedByUs,
      sym_deletedByThem,
      sym_bothModified,
  [82] = 3,
    ACTIONS(21), 1,
      anon_sym_C,
    STATE(10), 2,
      sym__action,
      sym_copied,
    ACTIONS(35), 4,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [96] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_1,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [104] = 4,
    STATE(40), 1,
      sym__opt_off,
    STATE(41), 1,
      sym__submoduleStatus,
    STATE(42), 1,
      sym_subCommit,
    ACTIONS(39), 2,
      anon_sym_DOT,
      anon_sym_C,
  [118] = 4,
    ACTIONS(41), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_S,
    STATE(18), 1,
      sym_submodule,
    STATE(32), 1,
      sym__isSubmodule,
  [131] = 4,
    ACTIONS(41), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_S,
    STATE(19), 1,
      sym_submodule,
    STATE(32), 1,
      sym__isSubmodule,
  [144] = 4,
    ACTIONS(41), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_S,
    STATE(16), 1,
      sym_submodule,
    STATE(32), 1,
      sym__isSubmodule,
  [157] = 3,
    ACTIONS(45), 1,
      aux_sym_hHEAD_token1,
    STATE(20), 1,
      sym_hStage1,
    STATE(31), 1,
      sym_stagesHashes,
  [167] = 1,
    ACTIONS(47), 3,
      anon_sym_DOT,
      anon_sym_N_DOT_DOT_DOT,
      anon_sym_S,
  [173] = 3,
    ACTIONS(49), 1,
      aux_sym_hHEAD_token1,
    STATE(26), 1,
      sym_hHEAD,
    STATE(62), 1,
      sym_hashes,
  [183] = 3,
    ACTIONS(49), 1,
      aux_sym_hHEAD_token1,
    STATE(26), 1,
      sym_hHEAD,
    STATE(58), 1,
      sym_hashes,
  [193] = 3,
    ACTIONS(51), 1,
      aux_sym_mHEAD_token1,
    STATE(12), 1,
      sym_stagesModes,
    STATE(24), 1,
      sym_mStage1,
  [203] = 3,
    ACTIONS(53), 1,
      anon_sym_LPARENinitial_RPAREN,
    ACTIONS(55), 1,
      aux_sym_hHEAD_token1,
    STATE(33), 1,
      sym_sha1,
  [213] = 3,
    ACTIONS(57), 1,
      aux_sym_mHEAD_token1,
    STATE(14), 1,
      sym_modes,
    STATE(21), 1,
      sym_mHEAD,
  [223] = 3,
    ACTIONS(57), 1,
      aux_sym_mHEAD_token1,
    STATE(15), 1,
      sym_modes,
    STATE(21), 1,
      sym_mHEAD,
  [233] = 2,
    ACTIONS(59), 1,
      aux_sym_hHEAD_token1,
    STATE(28), 1,
      sym_hStage2,
  [240] = 2,
    ACTIONS(61), 1,
      aux_sym_mHEAD_token1,
    STATE(27), 1,
      sym_mIndex,
  [247] = 2,
    ACTIONS(63), 1,
      anon_sym_branch_DOT,
    STATE(56), 1,
      sym_branch,
  [254] = 2,
    ACTIONS(65), 1,
      aux_sym_mHEAD_token1,
    STATE(29), 1,
      sym_mStage3,
  [261] = 2,
    ACTIONS(67), 1,
      aux_sym_mHEAD_token1,
    STATE(23), 1,
      sym_mStage2,
  [268] = 1,
    ACTIONS(69), 2,
      anon_sym_LPARENdetached_RPAREN,
      sym_branchName,
  [273] = 2,
    ACTIONS(71), 1,
      aux_sym_hHEAD_token1,
    STATE(71), 1,
      sym_hIndex,
  [280] = 2,
    ACTIONS(73), 1,
      aux_sym_mHEAD_token1,
    STATE(73), 1,
      sym_mWorktree,
  [287] = 2,
    ACTIONS(75), 1,
      aux_sym_hHEAD_token1,
    STATE(76), 1,
      sym_hStage3,
  [294] = 2,
    ACTIONS(73), 1,
      aux_sym_mHEAD_token1,
    STATE(77), 1,
      sym_mWorktree,
  [301] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
  [305] = 1,
    ACTIONS(79), 1,
      sym_path,
  [309] = 1,
    ACTIONS(81), 1,
      aux_sym_mHEAD_token1,
  [313] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [321] = 1,
    ACTIONS(87), 1,
      anon_sym_LF,
  [325] = 1,
    ACTIONS(89), 1,
      anon_sym_LF,
  [329] = 1,
    ACTIONS(91), 1,
      sym_behind,
  [333] = 1,
    ACTIONS(93), 1,
      sym_path,
  [337] = 1,
    ACTIONS(95), 1,
      sym_ahead,
  [341] = 1,
    ACTIONS(97), 1,
      sym_subTracked,
  [345] = 1,
    ACTIONS(99), 1,
      aux_sym_mHEAD_token1,
  [349] = 1,
    ACTIONS(101), 1,
      sym_subTracked,
  [353] = 1,
    ACTIONS(103), 1,
      aux_sym_mHEAD_token1,
  [357] = 1,
    ACTIONS(105), 1,
      sym_upBranch,
  [361] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [365] = 1,
    ACTIONS(109), 1,
      anon_sym_LF,
  [369] = 1,
    ACTIONS(111), 1,
      aux_sym_mHEAD_token1,
  [373] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [377] = 1,
    ACTIONS(115), 1,
      anon_sym_LF,
  [381] = 1,
    ACTIONS(117), 1,
      anon_sym_DOT,
  [385] = 1,
    ACTIONS(119), 1,
      sym_subUntracked,
  [389] = 1,
    ACTIONS(121), 1,
      aux_sym_hHEAD_token1,
  [393] = 1,
    ACTIONS(123), 1,
      anon_sym_LF,
  [397] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [401] = 1,
    ACTIONS(127), 1,
      aux_sym_mHEAD_token1,
  [405] = 1,
    ACTIONS(129), 1,
      anon_sym_LF,
  [409] = 1,
    ACTIONS(131), 1,
      aux_sym_hHEAD_token1,
  [413] = 1,
    ACTIONS(133), 1,
      sym_path,
  [417] = 1,
    ACTIONS(135), 1,
      anon_sym_LF,
  [421] = 1,
    ACTIONS(137), 1,
      aux_sym_mHEAD_token1,
  [425] = 1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
  [429] = 1,
    ACTIONS(139), 1,
      sym_path,
  [433] = 1,
    ACTIONS(141), 1,
      aux_sym_mHEAD_token1,
  [437] = 1,
    ACTIONS(143), 1,
      anon_sym_LF,
  [441] = 1,
    ACTIONS(145), 1,
      aux_sym_hHEAD_token1,
  [445] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [449] = 1,
    ACTIONS(149), 1,
      aux_sym_mHEAD_token1,
  [453] = 1,
    ACTIONS(151), 1,
      sym_path,
  [457] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [461] = 1,
    ACTIONS(155), 1,
      sym_path,
  [465] = 1,
    ACTIONS(157), 1,
      sym_path,
  [469] = 1,
    ACTIONS(159), 1,
      aux_sym_hHEAD_token1,
  [473] = 1,
    ACTIONS(161), 1,
      aux_sym_hHEAD_token1,
  [477] = 1,
    ACTIONS(163), 1,
      anon_sym_LF,
  [481] = 1,
    ACTIONS(165), 1,
      sym_path,
  [485] = 1,
    ACTIONS(167), 1,
      sym_path,
  [489] = 1,
    ACTIONS(169), 1,
      aux_sym_hHEAD_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 240,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 254,
  [SMALL_STATE(24)] = 261,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 280,
  [SMALL_STATE(28)] = 287,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 301,
  [SMALL_STATE(31)] = 305,
  [SMALL_STATE(32)] = 309,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 317,
  [SMALL_STATE(35)] = 321,
  [SMALL_STATE(36)] = 325,
  [SMALL_STATE(37)] = 329,
  [SMALL_STATE(38)] = 333,
  [SMALL_STATE(39)] = 337,
  [SMALL_STATE(40)] = 341,
  [SMALL_STATE(41)] = 345,
  [SMALL_STATE(42)] = 349,
  [SMALL_STATE(43)] = 353,
  [SMALL_STATE(44)] = 357,
  [SMALL_STATE(45)] = 361,
  [SMALL_STATE(46)] = 365,
  [SMALL_STATE(47)] = 369,
  [SMALL_STATE(48)] = 373,
  [SMALL_STATE(49)] = 377,
  [SMALL_STATE(50)] = 381,
  [SMALL_STATE(51)] = 385,
  [SMALL_STATE(52)] = 389,
  [SMALL_STATE(53)] = 393,
  [SMALL_STATE(54)] = 397,
  [SMALL_STATE(55)] = 401,
  [SMALL_STATE(56)] = 405,
  [SMALL_STATE(57)] = 409,
  [SMALL_STATE(58)] = 413,
  [SMALL_STATE(59)] = 417,
  [SMALL_STATE(60)] = 421,
  [SMALL_STATE(61)] = 425,
  [SMALL_STATE(62)] = 429,
  [SMALL_STATE(63)] = 433,
  [SMALL_STATE(64)] = 437,
  [SMALL_STATE(65)] = 441,
  [SMALL_STATE(66)] = 445,
  [SMALL_STATE(67)] = 449,
  [SMALL_STATE(68)] = 453,
  [SMALL_STATE(69)] = 457,
  [SMALL_STATE(70)] = 461,
  [SMALL_STATE(71)] = 465,
  [SMALL_STATE(72)] = 469,
  [SMALL_STATE(73)] = 473,
  [SMALL_STATE(74)] = 477,
  [SMALL_STATE(75)] = 481,
  [SMALL_STATE(76)] = 485,
  [SMALL_STATE(77)] = 489,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copied, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignored, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oid, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sha1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upstream, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subCommit, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__isSubmodule, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage1, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ab, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mHEAD, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untracked, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage1, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage2, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hHEAD, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mIndex, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__submoduleStatus, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflicted, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage2, 1),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage3, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unstaged, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hIndex, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashes, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mWorktree, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_staged, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage3, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stagesHashes, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stagesModes, 4),
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
