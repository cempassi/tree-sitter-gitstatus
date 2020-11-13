#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_POUND = 2,
  anon_sym_branch = 3,
  anon_sym_DOT = 4,
  anon_sym_oid = 5,
  anon_sym_LPARENinitial_RPAREN = 6,
  anon_sym_head = 7,
  anon_sym_LPARENdetached_RPAREN = 8,
  anon_sym_upstream = 9,
  anon_sym_ab = 10,
  anon_sym_LF = 11,
  anon_sym_1 = 12,
  anon_sym_2 = 13,
  anon_sym_u = 14,
  anon_sym_N_DOT_DOT_DOT = 15,
  anon_sym_S = 16,
  anon_sym_QMARK = 17,
  anon_sym_BANG = 18,
  sym_added = 19,
  sym_modified = 20,
  sym_deleted = 21,
  sym_renamed = 22,
  anon_sym_C = 23,
  sym_bothAdded = 24,
  sym_addedByUs = 25,
  sym_addedByThem = 26,
  sym_bothDeleted = 27,
  sym_deletedByThem = 28,
  sym_deletedByUs = 29,
  sym_bothModified = 30,
  sym_subTracked = 31,
  sym_subUntracked = 32,
  sym_score = 33,
  sym_ahead = 34,
  sym_behind = 35,
  sym__branchName = 36,
  sym__upBranch = 37,
  sym__sha1 = 38,
  sym__octal = 39,
  sym__path = 40,
  sym_source_file = 41,
  sym_header = 42,
  sym_branch = 43,
  sym_oid = 44,
  sym_head = 45,
  sym_upstream = 46,
  sym_ab = 47,
  sym_file = 48,
  sym__area = 49,
  sym__inplace = 50,
  sym__moved = 51,
  sym_conflicted = 52,
  sym__stat = 53,
  sym_staged = 54,
  sym_unstaged = 55,
  sym__action = 56,
  sym__conflict = 57,
  sym_submodule = 58,
  sym_modes = 59,
  sym_stagesModes = 60,
  sym_stagesHashes = 61,
  sym_hashes = 62,
  sym_path = 63,
  sym_origPath = 64,
  sym__isSubmodule = 65,
  sym__submoduleStatus = 66,
  sym_untracked = 67,
  sym_ignored = 68,
  sym_mHEAD = 69,
  sym_mIndex = 70,
  sym_mWorktree = 71,
  sym_mStage1 = 72,
  sym_mStage2 = 73,
  sym_mStage3 = 74,
  sym_hHEAD = 75,
  sym_hIndex = 76,
  sym_hStage1 = 77,
  sym_hStage2 = 78,
  sym_hStage3 = 79,
  sym_copied = 80,
  sym_subCommit = 81,
  sym__opt_off = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_source_file_repeat2 = 84,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [anon_sym_branch] = "branch",
  [anon_sym_DOT] = ".",
  [anon_sym_oid] = "oid",
  [anon_sym_LPARENinitial_RPAREN] = "(initial)",
  [anon_sym_head] = "head",
  [anon_sym_LPARENdetached_RPAREN] = "(detached)",
  [anon_sym_upstream] = "upstream",
  [anon_sym_ab] = "ab",
  [anon_sym_LF] = "\n",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_u] = "u",
  [anon_sym_N_DOT_DOT_DOT] = "N...",
  [anon_sym_S] = "S",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BANG] = "!",
  [sym_added] = "added",
  [sym_modified] = "modified",
  [sym_deleted] = "deleted",
  [sym_renamed] = "renamed",
  [anon_sym_C] = "C",
  [sym_bothAdded] = "bothAdded",
  [sym_addedByUs] = "addedByUs",
  [sym_addedByThem] = "addedByThem",
  [sym_bothDeleted] = "bothDeleted",
  [sym_deletedByThem] = "deletedByThem",
  [sym_deletedByUs] = "deletedByUs",
  [sym_bothModified] = "bothModified",
  [sym_subTracked] = "subTracked",
  [sym_subUntracked] = "subUntracked",
  [sym_score] = "score",
  [sym_ahead] = "ahead",
  [sym_behind] = "behind",
  [sym__branchName] = "_branchName",
  [sym__upBranch] = "_upBranch",
  [sym__sha1] = "_sha1",
  [sym__octal] = "_octal",
  [sym__path] = "_path",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_branch] = "branch",
  [sym_oid] = "oid",
  [sym_head] = "head",
  [sym_upstream] = "upstream",
  [sym_ab] = "ab",
  [sym_file] = "file",
  [sym__area] = "_area",
  [sym__inplace] = "_inplace",
  [sym__moved] = "_moved",
  [sym_conflicted] = "conflicted",
  [sym__stat] = "_stat",
  [sym_staged] = "staged",
  [sym_unstaged] = "unstaged",
  [sym__action] = "_action",
  [sym__conflict] = "_conflict",
  [sym_submodule] = "submodule",
  [sym_modes] = "modes",
  [sym_stagesModes] = "stagesModes",
  [sym_stagesHashes] = "stagesHashes",
  [sym_hashes] = "hashes",
  [sym_path] = "path",
  [sym_origPath] = "origPath",
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
  [sym__opt_off] = "_opt_off",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_oid] = anon_sym_oid,
  [anon_sym_LPARENinitial_RPAREN] = anon_sym_LPARENinitial_RPAREN,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_LPARENdetached_RPAREN] = anon_sym_LPARENdetached_RPAREN,
  [anon_sym_upstream] = anon_sym_upstream,
  [anon_sym_ab] = anon_sym_ab,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_N_DOT_DOT_DOT] = anon_sym_N_DOT_DOT_DOT,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_added] = sym_added,
  [sym_modified] = sym_modified,
  [sym_deleted] = sym_deleted,
  [sym_renamed] = sym_renamed,
  [anon_sym_C] = anon_sym_C,
  [sym_bothAdded] = sym_bothAdded,
  [sym_addedByUs] = sym_addedByUs,
  [sym_addedByThem] = sym_addedByThem,
  [sym_bothDeleted] = sym_bothDeleted,
  [sym_deletedByThem] = sym_deletedByThem,
  [sym_deletedByUs] = sym_deletedByUs,
  [sym_bothModified] = sym_bothModified,
  [sym_subTracked] = sym_subTracked,
  [sym_subUntracked] = sym_subUntracked,
  [sym_score] = sym_score,
  [sym_ahead] = sym_ahead,
  [sym_behind] = sym_behind,
  [sym__branchName] = sym__branchName,
  [sym__upBranch] = sym__upBranch,
  [sym__sha1] = sym__sha1,
  [sym__octal] = sym__octal,
  [sym__path] = sym__path,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_branch] = sym_branch,
  [sym_oid] = sym_oid,
  [sym_head] = sym_head,
  [sym_upstream] = sym_upstream,
  [sym_ab] = sym_ab,
  [sym_file] = sym_file,
  [sym__area] = sym__area,
  [sym__inplace] = sym__inplace,
  [sym__moved] = sym__moved,
  [sym_conflicted] = sym_conflicted,
  [sym__stat] = sym__stat,
  [sym_staged] = sym_staged,
  [sym_unstaged] = sym_unstaged,
  [sym__action] = sym__action,
  [sym__conflict] = sym__conflict,
  [sym_submodule] = sym_submodule,
  [sym_modes] = sym_modes,
  [sym_stagesModes] = sym_stagesModes,
  [sym_stagesHashes] = sym_stagesHashes,
  [sym_hashes] = sym_hashes,
  [sym_path] = sym_path,
  [sym_origPath] = sym_origPath,
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
  [sym__opt_off] = sym__opt_off,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [sym_deletedByThem] = {
    .visible = true,
    .named = true,
  },
  [sym_deletedByUs] = {
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
  [sym_score] = {
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
  [sym__branchName] = {
    .visible = false,
    .named = true,
  },
  [sym__upBranch] = {
    .visible = false,
    .named = true,
  },
  [sym__sha1] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
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
  [sym__inplace] = {
    .visible = false,
    .named = true,
  },
  [sym__moved] = {
    .visible = false,
    .named = true,
  },
  [sym_conflicted] = {
    .visible = true,
    .named = true,
  },
  [sym__stat] = {
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
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_origPath] = {
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
  [sym__opt_off] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
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
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.' ||
          lookahead == 'M') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'R') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == '.' ||
          lookahead == 'U' ||
          lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 32:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 33:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 34:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '2') ADVANCE(61);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPARENinitial_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPARENdetached_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_2);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
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
      ACCEPT_TOKEN(sym_added);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_added);
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_modified);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_deleted);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_deleted);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_renamed);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_renamed);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_C);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_bothAdded);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_addedByUs);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_addedByThem);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_bothDeleted);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_deletedByThem);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_deletedByUs);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_bothModified);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_subTracked);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_subUntracked);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_subUntracked);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_score);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ahead);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_behind);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__branchName);
      if (lookahead == '.') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__branchName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__upBranch);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__upBranch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__sha1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__sha1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__sha1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__octal);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__path);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
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
      ACCEPT_TOKEN(anon_sym_u);
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
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 167},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 167},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 167},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 167},
  [44] = {.lex_state = 167},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 167},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 167},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 30},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 30},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 30},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 167},
  [76] = {.lex_state = 167},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 167},
  [80] = {.lex_state = 167},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 167},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 1},
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
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_N_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_added] = ACTIONS(1),
    [sym_modified] = ACTIONS(1),
    [sym_deleted] = ACTIONS(1),
    [sym_renamed] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [sym_addedByUs] = ACTIONS(1),
    [sym_addedByThem] = ACTIONS(1),
    [sym_deletedByThem] = ACTIONS(1),
    [sym_deletedByUs] = ACTIONS(1),
    [sym_bothModified] = ACTIONS(1),
    [sym_subTracked] = ACTIONS(1),
    [sym_subUntracked] = ACTIONS(1),
    [sym_score] = ACTIONS(1),
    [sym_ahead] = ACTIONS(1),
    [sym_behind] = ACTIONS(1),
    [sym__sha1] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_header] = STATE(2),
    [sym_file] = STATE(6),
    [sym__area] = STATE(90),
    [sym__inplace] = STATE(90),
    [sym__moved] = STATE(90),
    [sym_conflicted] = STATE(90),
    [sym_untracked] = STATE(90),
    [sym_ignored] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_1] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_u] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_1,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      anon_sym_u,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_file,
      aux_sym_source_file_repeat2,
    STATE(10), 2,
      sym_header,
      aux_sym_source_file_repeat1,
    STATE(90), 6,
      sym__area,
      sym__inplace,
      sym__moved,
      sym_conflicted,
      sym_untracked,
      sym_ignored,
  [38] = 7,
    ACTIONS(21), 1,
      anon_sym_oid,
    ACTIONS(23), 1,
      anon_sym_head,
    ACTIONS(25), 1,
      anon_sym_upstream,
    ACTIONS(27), 1,
      anon_sym_ab,
    ACTIONS(29), 1,
      anon_sym_u,
    STATE(18), 4,
      sym_oid,
      sym_head,
      sym_upstream,
      sym_ab,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_QMARK,
      anon_sym_BANG,
  [68] = 8,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_1,
    ACTIONS(36), 1,
      anon_sym_2,
    ACTIONS(39), 1,
      anon_sym_u,
    ACTIONS(42), 1,
      anon_sym_QMARK,
    ACTIONS(45), 1,
      anon_sym_BANG,
    STATE(4), 2,
      sym_file,
      aux_sym_source_file_repeat2,
    STATE(90), 6,
      sym__area,
      sym__inplace,
      sym__moved,
      sym_conflicted,
      sym_untracked,
      sym_ignored,
  [99] = 8,
    ACTIONS(7), 1,
      anon_sym_1,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      anon_sym_u,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_file,
      aux_sym_source_file_repeat2,
    STATE(90), 6,
      sym__area,
      sym__inplace,
      sym__moved,
      sym_conflicted,
      sym_untracked,
      sym_ignored,
  [130] = 8,
    ACTIONS(7), 1,
      anon_sym_1,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      anon_sym_u,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      anon_sym_BANG,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_file,
      aux_sym_source_file_repeat2,
    STATE(90), 6,
      sym__area,
      sym__inplace,
      sym__moved,
      sym_conflicted,
      sym_untracked,
      sym_ignored,
  [161] = 5,
    ACTIONS(52), 1,
      anon_sym_C,
    STATE(11), 1,
      sym_staged,
    STATE(33), 1,
      sym__stat,
    STATE(20), 2,
      sym__action,
      sym_copied,
    ACTIONS(50), 5,
      anon_sym_DOT,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [182] = 5,
    ACTIONS(52), 1,
      anon_sym_C,
    STATE(9), 1,
      sym_staged,
    STATE(88), 1,
      sym__stat,
    STATE(20), 2,
      sym__action,
      sym_copied,
    ACTIONS(50), 5,
      anon_sym_DOT,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [203] = 4,
    ACTIONS(52), 1,
      anon_sym_C,
    STATE(24), 1,
      sym_unstaged,
    STATE(39), 2,
      sym__action,
      sym_copied,
    ACTIONS(54), 5,
      anon_sym_DOT,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [221] = 3,
    ACTIONS(58), 1,
      anon_sym_POUND,
    STATE(10), 2,
      sym_header,
      aux_sym_source_file_repeat1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [237] = 4,
    ACTIONS(52), 1,
      anon_sym_C,
    STATE(25), 1,
      sym_unstaged,
    STATE(39), 2,
      sym__action,
      sym_copied,
    ACTIONS(54), 5,
      anon_sym_DOT,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
  [255] = 1,
    ACTIONS(61), 8,
      anon_sym_DOT,
      anon_sym_N_DOT_DOT_DOT,
      anon_sym_S,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
      anon_sym_C,
  [266] = 2,
    STATE(23), 1,
      sym__conflict,
    ACTIONS(63), 7,
      sym_bothAdded,
      sym_addedByUs,
      sym_addedByThem,
      sym_bothDeleted,
      sym_deletedByThem,
      sym_deletedByUs,
      sym_bothModified,
  [279] = 1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [289] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [299] = 1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [309] = 1,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [319] = 1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [329] = 1,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [339] = 1,
    ACTIONS(77), 6,
      anon_sym_DOT,
      sym_added,
      sym_modified,
      sym_deleted,
      sym_renamed,
      anon_sym_C,
  [348] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_1,
      anon_sym_2,
      anon_sym_u,
      anon_sym_QMARK,
      anon_sym_BANG,
  [357] = 4,
    STATE(51), 1,
      sym_subCommit,
    STATE(60), 1,
      sym__submoduleStatus,
    STATE(62), 1,
      sym__opt_off,
    ACTIONS(81), 2,
      anon_sym_DOT,
      anon_sym_C,
  [371] = 4,
    ACTIONS(83), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(85), 1,
      anon_sym_S,
    STATE(31), 1,
      sym_submodule,
    STATE(68), 1,
      sym__isSubmodule,
  [384] = 4,
    ACTIONS(83), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(85), 1,
      anon_sym_S,
    STATE(29), 1,
      sym_submodule,
    STATE(68), 1,
      sym__isSubmodule,
  [397] = 4,
    ACTIONS(83), 1,
      anon_sym_N_DOT_DOT_DOT,
    ACTIONS(85), 1,
      anon_sym_S,
    STATE(30), 1,
      sym_submodule,
    STATE(68), 1,
      sym__isSubmodule,
  [410] = 3,
    ACTIONS(87), 1,
      sym__sha1,
    STATE(50), 1,
      sym_hHEAD,
    STATE(83), 1,
      sym_hashes,
  [420] = 3,
    ACTIONS(89), 1,
      sym__sha1,
    STATE(42), 1,
      sym_hStage1,
    STATE(43), 1,
      sym_stagesHashes,
  [430] = 3,
    ACTIONS(87), 1,
      sym__sha1,
    STATE(34), 1,
      sym_hHEAD,
    STATE(65), 1,
      sym_hashes,
  [440] = 3,
    ACTIONS(91), 1,
      sym__octal,
    STATE(26), 1,
      sym_modes,
    STATE(45), 1,
      sym_mHEAD,
  [450] = 3,
    ACTIONS(91), 1,
      sym__octal,
    STATE(28), 1,
      sym_modes,
    STATE(45), 1,
      sym_mHEAD,
  [460] = 3,
    ACTIONS(93), 1,
      sym__octal,
    STATE(27), 1,
      sym_stagesModes,
    STATE(47), 1,
      sym_mStage1,
  [470] = 2,
    ACTIONS(95), 1,
      anon_sym_branch,
    STATE(14), 1,
      sym_branch,
  [477] = 2,
    ACTIONS(97), 1,
      sym__path,
    STATE(72), 1,
      sym_path,
  [484] = 2,
    ACTIONS(99), 1,
      sym__sha1,
    STATE(76), 1,
      sym_hIndex,
  [491] = 1,
    ACTIONS(101), 2,
      anon_sym_LPARENinitial_RPAREN,
      sym__sha1,
  [496] = 1,
    ACTIONS(103), 2,
      anon_sym_LPARENdetached_RPAREN,
      sym__branchName,
  [501] = 2,
    ACTIONS(105), 1,
      sym__path,
    STATE(41), 1,
      sym_path,
  [508] = 2,
    ACTIONS(107), 1,
      sym__octal,
    STATE(49), 1,
      sym_mStage3,
  [515] = 1,
    ACTIONS(109), 2,
      anon_sym_N_DOT_DOT_DOT,
      anon_sym_S,
  [520] = 2,
    ACTIONS(111), 1,
      sym__octal,
    STATE(78), 1,
      sym_mWorktree,
  [527] = 2,
    ACTIONS(113), 1,
      sym__path,
    STATE(56), 1,
      sym_origPath,
  [534] = 2,
    ACTIONS(115), 1,
      sym__sha1,
    STATE(48), 1,
      sym_hStage2,
  [541] = 2,
    ACTIONS(97), 1,
      sym__path,
    STATE(70), 1,
      sym_path,
  [548] = 2,
    ACTIONS(97), 1,
      sym__path,
    STATE(86), 1,
      sym_path,
  [555] = 2,
    ACTIONS(117), 1,
      sym__octal,
    STATE(40), 1,
      sym_mIndex,
  [562] = 2,
    ACTIONS(97), 1,
      sym__path,
    STATE(74), 1,
      sym_path,
  [569] = 2,
    ACTIONS(119), 1,
      sym__octal,
    STATE(38), 1,
      sym_mStage2,
  [576] = 2,
    ACTIONS(121), 1,
      sym__sha1,
    STATE(80), 1,
      sym_hStage3,
  [583] = 2,
    ACTIONS(111), 1,
      sym__octal,
    STATE(81), 1,
      sym_mWorktree,
  [590] = 2,
    ACTIONS(123), 1,
      sym__sha1,
    STATE(85), 1,
      sym_hIndex,
  [597] = 1,
    ACTIONS(125), 1,
      sym_subTracked,
  [601] = 1,
    ACTIONS(127), 1,
      sym__octal,
  [605] = 1,
    ACTIONS(129), 1,
      sym_behind,
  [609] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [613] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [617] = 1,
    ACTIONS(135), 1,
      anon_sym_LF,
  [621] = 1,
    ACTIONS(137), 1,
      sym_subUntracked,
  [625] = 1,
    ACTIONS(139), 1,
      sym__sha1,
  [629] = 1,
    ACTIONS(141), 1,
      sym__octal,
  [633] = 1,
    ACTIONS(143), 1,
      sym__octal,
  [637] = 1,
    ACTIONS(145), 1,
      sym__octal,
  [641] = 1,
    ACTIONS(147), 1,
      sym_subTracked,
  [645] = 1,
    ACTIONS(149), 1,
      sym_ahead,
  [649] = 1,
    ACTIONS(151), 1,
      sym__sha1,
  [653] = 1,
    ACTIONS(153), 1,
      sym__path,
  [657] = 1,
    ACTIONS(155), 1,
      sym__upBranch,
  [661] = 1,
    ACTIONS(157), 1,
      sym__octal,
  [665] = 1,
    ACTIONS(159), 1,
      sym__octal,
  [669] = 1,
    ACTIONS(161), 1,
      sym__octal,
  [673] = 1,
    ACTIONS(163), 1,
      anon_sym_LF,
  [677] = 1,
    ACTIONS(165), 1,
      sym__sha1,
  [681] = 1,
    ACTIONS(167), 1,
      anon_sym_LF,
  [685] = 1,
    ACTIONS(169), 1,
      sym__octal,
  [689] = 1,
    ACTIONS(171), 1,
      anon_sym_LF,
  [693] = 1,
    ACTIONS(173), 1,
      sym__path,
  [697] = 1,
    ACTIONS(175), 1,
      sym__path,
  [701] = 1,
    ACTIONS(177), 1,
      sym__sha1,
  [705] = 1,
    ACTIONS(179), 1,
      sym__sha1,
  [709] = 1,
    ACTIONS(181), 1,
      sym__path,
  [713] = 1,
    ACTIONS(183), 1,
      sym__path,
  [717] = 1,
    ACTIONS(185), 1,
      sym__sha1,
  [721] = 1,
    ACTIONS(187), 1,
      sym__path,
  [725] = 1,
    ACTIONS(153), 1,
      sym_score,
  [729] = 1,
    ACTIONS(173), 1,
      sym_score,
  [733] = 1,
    ACTIONS(175), 1,
      sym_score,
  [737] = 1,
    ACTIONS(189), 1,
      anon_sym_LF,
  [741] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [745] = 1,
    ACTIONS(191), 1,
      sym_score,
  [749] = 1,
    ACTIONS(193), 1,
      anon_sym_DOT,
  [753] = 1,
    ACTIONS(195), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 221,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 371,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 397,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 470,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 491,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 501,
  [SMALL_STATE(38)] = 508,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 527,
  [SMALL_STATE(42)] = 534,
  [SMALL_STATE(43)] = 541,
  [SMALL_STATE(44)] = 548,
  [SMALL_STATE(45)] = 555,
  [SMALL_STATE(46)] = 562,
  [SMALL_STATE(47)] = 569,
  [SMALL_STATE(48)] = 576,
  [SMALL_STATE(49)] = 583,
  [SMALL_STATE(50)] = 590,
  [SMALL_STATE(51)] = 597,
  [SMALL_STATE(52)] = 601,
  [SMALL_STATE(53)] = 605,
  [SMALL_STATE(54)] = 609,
  [SMALL_STATE(55)] = 613,
  [SMALL_STATE(56)] = 617,
  [SMALL_STATE(57)] = 621,
  [SMALL_STATE(58)] = 625,
  [SMALL_STATE(59)] = 629,
  [SMALL_STATE(60)] = 633,
  [SMALL_STATE(61)] = 637,
  [SMALL_STATE(62)] = 641,
  [SMALL_STATE(63)] = 645,
  [SMALL_STATE(64)] = 649,
  [SMALL_STATE(65)] = 653,
  [SMALL_STATE(66)] = 657,
  [SMALL_STATE(67)] = 661,
  [SMALL_STATE(68)] = 665,
  [SMALL_STATE(69)] = 669,
  [SMALL_STATE(70)] = 673,
  [SMALL_STATE(71)] = 677,
  [SMALL_STATE(72)] = 681,
  [SMALL_STATE(73)] = 685,
  [SMALL_STATE(74)] = 689,
  [SMALL_STATE(75)] = 693,
  [SMALL_STATE(76)] = 697,
  [SMALL_STATE(77)] = 701,
  [SMALL_STATE(78)] = 705,
  [SMALL_STATE(79)] = 709,
  [SMALL_STATE(80)] = 713,
  [SMALL_STATE(81)] = 717,
  [SMALL_STATE(82)] = 721,
  [SMALL_STATE(83)] = 725,
  [SMALL_STATE(84)] = 729,
  [SMALL_STATE(85)] = 733,
  [SMALL_STATE(86)] = 737,
  [SMALL_STATE(87)] = 741,
  [SMALL_STATE(88)] = 745,
  [SMALL_STATE(89)] = 749,
  [SMALL_STATE(90)] = 753,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(44),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copied, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_upstream, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oid, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ab, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_staged, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unstaged, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mHEAD, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origPath, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__moved, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage1, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage1, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__isSubmodule, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage2, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subCommit, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hHEAD, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stat, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mIndex, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_submodule, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__submoduleStatus, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflicted, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage2, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inplace, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mStage3, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ignored, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hIndex, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashes, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mWorktree, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hStage3, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stagesHashes, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stagesModes, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_untracked, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
