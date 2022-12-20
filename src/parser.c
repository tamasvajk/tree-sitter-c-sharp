#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 186
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  sym__identifier_token = 1,
  anon_sym_extern = 2,
  anon_sym_alias = 3,
  anon_sym_SEMI = 4,
  anon_sym_global = 5,
  anon_sym_using = 6,
  anon_sym_static = 7,
  anon_sym_EQ = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_LT = 10,
  anon_sym_COMMA = 11,
  anon_sym_GT = 12,
  anon_sym_DOT = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_assembly = 16,
  anon_sym_module = 17,
  anon_sym_COLON = 18,
  anon_sym_field = 19,
  anon_sym_event = 20,
  anon_sym_method = 21,
  anon_sym_param = 22,
  anon_sym_property = 23,
  anon_sym_return = 24,
  anon_sym_type = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_abstract = 28,
  anon_sym_async = 29,
  anon_sym_const = 30,
  anon_sym_fixed = 31,
  anon_sym_internal = 32,
  anon_sym_new = 33,
  anon_sym_override = 34,
  anon_sym_partial = 35,
  anon_sym_private = 36,
  anon_sym_protected = 37,
  anon_sym_public = 38,
  anon_sym_readonly = 39,
  anon_sym_required = 40,
  anon_sym_ref = 41,
  anon_sym_sealed = 42,
  anon_sym_unsafe = 43,
  anon_sym_virtual = 44,
  anon_sym_volatile = 45,
  anon_sym_out = 46,
  anon_sym_in = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_QMARK = 50,
  anon_sym_STAR = 51,
  anon_sym_delegate = 52,
  anon_sym_managed = 53,
  anon_sym_unmanaged = 54,
  sym_predefined_type = 55,
  sym_null_literal = 56,
  sym_comment = 57,
  sym_compilation_unit = 58,
  sym__member_declaration = 59,
  sym__base_field_declaration = 60,
  sym_extern_alias_directive = 61,
  sym_using_directive = 62,
  sym_name_equals = 63,
  sym_identifier_name = 64,
  sym_name = 65,
  sym_alias_qualified_name = 66,
  sym_simple_name = 67,
  sym_generic_name = 68,
  sym_type_argument_list = 69,
  sym_qualified_name = 70,
  sym_attribute_list = 71,
  sym_global_attribute_list = 72,
  sym_global_attribute_target_specifier = 73,
  sym_attribute_target_specifier = 74,
  sym_attribute = 75,
  sym_attribute_argument_list = 76,
  sym_attribute_argument = 77,
  sym_name_colon = 78,
  sym_modifier = 79,
  sym_variable_declaration = 80,
  sym_variable_declarator = 81,
  sym_bracketed_argument_list = 82,
  sym_argument = 83,
  sym_equals_value_clause = 84,
  sym_field_declaration = 85,
  sym__type = 86,
  sym_array_type = 87,
  sym_array_rank_specifier = 88,
  sym_nullable_type = 89,
  sym_pointer_type = 90,
  sym_function_pointer_type = 91,
  sym_function_pointer_parameter_list = 92,
  sym_function_pointer_calling_convention = 93,
  sym_function_pointer_unmanaged_calling_convention_list = 94,
  sym_function_pointer_unmanaged_calling_convention = 95,
  sym_function_pointer_parameter = 96,
  sym__expression = 97,
  sym__literal = 98,
  aux_sym_compilation_unit_repeat1 = 99,
  aux_sym_compilation_unit_repeat2 = 100,
  aux_sym_compilation_unit_repeat3 = 101,
  aux_sym_compilation_unit_repeat4 = 102,
  aux_sym_type_argument_list_repeat1 = 103,
  aux_sym_type_argument_list_repeat2 = 104,
  aux_sym_attribute_list_repeat1 = 105,
  aux_sym_attribute_argument_list_repeat1 = 106,
  aux_sym_variable_declaration_repeat1 = 107,
  aux_sym_bracketed_argument_list_repeat1 = 108,
  aux_sym_field_declaration_repeat1 = 109,
  aux_sym_field_declaration_repeat2 = 110,
  aux_sym_array_rank_specifier_repeat1 = 111,
  aux_sym_function_pointer_parameter_list_repeat1 = 112,
  aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1 = 113,
  alias_sym_parameter_modifier = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier_token] = "_identifier_token",
  [anon_sym_extern] = "extern",
  [anon_sym_alias] = "alias",
  [anon_sym_SEMI] = ";",
  [anon_sym_global] = "global",
  [anon_sym_using] = "using",
  [anon_sym_static] = "static",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_assembly] = "assembly",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_field] = "field",
  [anon_sym_event] = "event",
  [anon_sym_method] = "method",
  [anon_sym_param] = "param",
  [anon_sym_property] = "property",
  [anon_sym_return] = "return",
  [anon_sym_type] = "type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_abstract] = "abstract",
  [anon_sym_async] = "async",
  [anon_sym_const] = "const",
  [anon_sym_fixed] = "fixed",
  [anon_sym_internal] = "internal",
  [anon_sym_new] = "new",
  [anon_sym_override] = "override",
  [anon_sym_partial] = "partial",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_readonly] = "readonly",
  [anon_sym_required] = "required",
  [anon_sym_ref] = "ref",
  [anon_sym_sealed] = "sealed",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
  [anon_sym_out] = "out",
  [anon_sym_in] = "in",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_delegate] = "delegate",
  [anon_sym_managed] = "managed",
  [anon_sym_unmanaged] = "unmanaged",
  [sym_predefined_type] = "predefined_type",
  [sym_null_literal] = "null_literal",
  [sym_comment] = "comment",
  [sym_compilation_unit] = "compilation_unit",
  [sym__member_declaration] = "_member_declaration",
  [sym__base_field_declaration] = "_base_field_declaration",
  [sym_extern_alias_directive] = "extern_alias_directive",
  [sym_using_directive] = "using_directive",
  [sym_name_equals] = "name_equals",
  [sym_identifier_name] = "identifier_name",
  [sym_name] = "name",
  [sym_alias_qualified_name] = "alias_qualified_name",
  [sym_simple_name] = "simple_name",
  [sym_generic_name] = "generic_name",
  [sym_type_argument_list] = "type_argument_list",
  [sym_qualified_name] = "qualified_name",
  [sym_attribute_list] = "attribute_list",
  [sym_global_attribute_list] = "global_attribute_list",
  [sym_global_attribute_target_specifier] = "attribute_target_specifier",
  [sym_attribute_target_specifier] = "attribute_target_specifier",
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [sym_attribute_argument] = "attribute_argument",
  [sym_name_colon] = "name_colon",
  [sym_modifier] = "modifier",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym_bracketed_argument_list] = "bracketed_argument_list",
  [sym_argument] = "argument",
  [sym_equals_value_clause] = "equals_value_clause",
  [sym_field_declaration] = "field_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_array_rank_specifier] = "array_rank_specifier",
  [sym_nullable_type] = "nullable_type",
  [sym_pointer_type] = "pointer_type",
  [sym_function_pointer_type] = "function_pointer_type",
  [sym_function_pointer_parameter_list] = "function_pointer_parameter_list",
  [sym_function_pointer_calling_convention] = "function_pointer_calling_convention",
  [sym_function_pointer_unmanaged_calling_convention_list] = "function_pointer_unmanaged_calling_convention_list",
  [sym_function_pointer_unmanaged_calling_convention] = "function_pointer_unmanaged_calling_convention",
  [sym_function_pointer_parameter] = "function_pointer_parameter",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
  [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
  [aux_sym_compilation_unit_repeat3] = "compilation_unit_repeat3",
  [aux_sym_compilation_unit_repeat4] = "compilation_unit_repeat4",
  [aux_sym_type_argument_list_repeat1] = "type_argument_list_repeat1",
  [aux_sym_type_argument_list_repeat2] = "type_argument_list_repeat2",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_attribute_argument_list_repeat1] = "attribute_argument_list_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_bracketed_argument_list_repeat1] = "bracketed_argument_list_repeat1",
  [aux_sym_field_declaration_repeat1] = "field_declaration_repeat1",
  [aux_sym_field_declaration_repeat2] = "field_declaration_repeat2",
  [aux_sym_array_rank_specifier_repeat1] = "array_rank_specifier_repeat1",
  [aux_sym_function_pointer_parameter_list_repeat1] = "function_pointer_parameter_list_repeat1",
  [aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1] = "function_pointer_unmanaged_calling_convention_list_repeat1",
  [alias_sym_parameter_modifier] = "parameter_modifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier_token] = sym__identifier_token,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_assembly] = anon_sym_assembly,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_managed] = anon_sym_managed,
  [anon_sym_unmanaged] = anon_sym_unmanaged,
  [sym_predefined_type] = sym_predefined_type,
  [sym_null_literal] = sym_null_literal,
  [sym_comment] = sym_comment,
  [sym_compilation_unit] = sym_compilation_unit,
  [sym__member_declaration] = sym__member_declaration,
  [sym__base_field_declaration] = sym__base_field_declaration,
  [sym_extern_alias_directive] = sym_extern_alias_directive,
  [sym_using_directive] = sym_using_directive,
  [sym_name_equals] = sym_name_equals,
  [sym_identifier_name] = sym_identifier_name,
  [sym_name] = sym_name,
  [sym_alias_qualified_name] = sym_alias_qualified_name,
  [sym_simple_name] = sym_simple_name,
  [sym_generic_name] = sym_generic_name,
  [sym_type_argument_list] = sym_type_argument_list,
  [sym_qualified_name] = sym_qualified_name,
  [sym_attribute_list] = sym_attribute_list,
  [sym_global_attribute_list] = sym_global_attribute_list,
  [sym_global_attribute_target_specifier] = sym_attribute_target_specifier,
  [sym_attribute_target_specifier] = sym_attribute_target_specifier,
  [sym_attribute] = sym_attribute,
  [sym_attribute_argument_list] = sym_attribute_argument_list,
  [sym_attribute_argument] = sym_attribute_argument,
  [sym_name_colon] = sym_name_colon,
  [sym_modifier] = sym_modifier,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym_bracketed_argument_list] = sym_bracketed_argument_list,
  [sym_argument] = sym_argument,
  [sym_equals_value_clause] = sym_equals_value_clause,
  [sym_field_declaration] = sym_field_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_array_rank_specifier] = sym_array_rank_specifier,
  [sym_nullable_type] = sym_nullable_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_function_pointer_type] = sym_function_pointer_type,
  [sym_function_pointer_parameter_list] = sym_function_pointer_parameter_list,
  [sym_function_pointer_calling_convention] = sym_function_pointer_calling_convention,
  [sym_function_pointer_unmanaged_calling_convention_list] = sym_function_pointer_unmanaged_calling_convention_list,
  [sym_function_pointer_unmanaged_calling_convention] = sym_function_pointer_unmanaged_calling_convention,
  [sym_function_pointer_parameter] = sym_function_pointer_parameter,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [aux_sym_compilation_unit_repeat1] = aux_sym_compilation_unit_repeat1,
  [aux_sym_compilation_unit_repeat2] = aux_sym_compilation_unit_repeat2,
  [aux_sym_compilation_unit_repeat3] = aux_sym_compilation_unit_repeat3,
  [aux_sym_compilation_unit_repeat4] = aux_sym_compilation_unit_repeat4,
  [aux_sym_type_argument_list_repeat1] = aux_sym_type_argument_list_repeat1,
  [aux_sym_type_argument_list_repeat2] = aux_sym_type_argument_list_repeat2,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
  [aux_sym_attribute_argument_list_repeat1] = aux_sym_attribute_argument_list_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
  [aux_sym_bracketed_argument_list_repeat1] = aux_sym_bracketed_argument_list_repeat1,
  [aux_sym_field_declaration_repeat1] = aux_sym_field_declaration_repeat1,
  [aux_sym_field_declaration_repeat2] = aux_sym_field_declaration_repeat2,
  [aux_sym_array_rank_specifier_repeat1] = aux_sym_array_rank_specifier_repeat1,
  [aux_sym_function_pointer_parameter_list_repeat1] = aux_sym_function_pointer_parameter_list_repeat1,
  [aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1] = aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1,
  [alias_sym_parameter_modifier] = alias_sym_parameter_modifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_token] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_managed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unmanaged] = {
    .visible = true,
    .named = false,
  },
  [sym_predefined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_compilation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__member_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__base_field_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_extern_alias_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_using_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_name_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_name] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_global_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_global_attribute_target_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_target_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_name_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_equals_value_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_rank_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_nullable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_calling_convention] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_unmanaged_calling_convention_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_unmanaged_calling_convention] = {
    .visible = true,
    .named = true,
  },
  [sym_function_pointer_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_compilation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compilation_unit_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_argument_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracketed_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_rank_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_pointer_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter_modifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
  field_rank = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_rank] = "rank",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_type, 0},
  [2] =
    {field_rank, 1},
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_parameter_modifier,
  },
  [5] = {
    [1] = sym_function_pointer_parameter,
  },
  [6] = {
    [2] = sym_function_pointer_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__type, 2,
    sym__type,
    sym_function_pointer_parameter,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
};

static inline bool sym__identifier_token_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5870
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11499
        ? (c < 8118
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8178
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))
              : (c <= 8180 || (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8495
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))
              : (c <= 8505 || (c < 8526
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)
                : (c <= 8526 || (c < 11264
                  ? (c >= 8544 && c <= 8584)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12704
          ? (c < 11728
            ? (c < 11648
              ? (c < 11565
                ? (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12353
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66864
          ? (c < 66176
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65856
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65908)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66736
                ? (c < 66560
                  ? (c >= 66513 && c <= 66517)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__identifier_token_character_set_2(int32_t c) {
  return (c < 6016
    ? (c < 2962
      ? (c < 2447
        ? (c < 1425
          ? (c < 768
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 173
                  ? c == 170
                  : (c <= 173 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 931
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1013 || (c < 1329
                ? (c < 1155
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1159 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1469 || (c < 1807
            ? (c < 1552
              ? (c < 1479
                ? (c < 1473
                  ? c == 1471
                  : (c <= 1474 || (c >= 1476 && c <= 1477)))
                : (c <= 1479 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1536 && c <= 1541)))))
              : (c <= 1562 || (c < 1749
                ? (c < 1568
                  ? c == 1564
                  : (c <= 1641 || (c >= 1646 && c <= 1747)))
                : (c <= 1757 || (c < 1770
                  ? (c >= 1759 && c <= 1768)
                  : (c <= 1788 || c == 1791))))))
            : (c <= 1866 || (c < 2160
              ? (c < 2045
                ? (c < 1984
                  ? (c >= 1869 && c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2112
                  ? (c >= 2048 && c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2406
                ? (c < 2192
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2193 || (c >= 2200 && c <= 2403)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2435)
                  : c <= 2444)))))))))
        : (c <= 2448 || (c < 2693
          ? (c < 2575
            ? (c < 2519
              ? (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2503
                  ? (c >= 2492 && c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3260
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3218
                ? (c < 3205
                  ? (c >= 3200 && c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))))
          : (c <= 3268 || (c < 3450
            ? (c < 3328
              ? (c < 3293
                ? (c < 3274
                  ? (c >= 3270 && c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3402
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3415)
                  : (c <= 3427 || (c >= 3430 && c <= 3439)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3881 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4957
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))
            : (c <= 4959 || (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42786
      ? (c < 8319
        ? (c < 7296
          ? (c < 6656
            ? (c < 6400
              ? (c < 6155
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))
              : (c <= 6430 || (c < 6512
                ? (c < 6448
                  ? (c >= 6432 && c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6608 && c <= 6617)))))))
            : (c <= 6683 || (c < 6912
              ? (c < 6800
                ? (c < 6752
                  ? (c >= 6688 && c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))
                : (c <= 6809 || (c < 6832
                  ? c == 6823
                  : (c <= 6845 || (c >= 6847 && c <= 6862)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7019
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))
                : (c <= 7223 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : c <= 7293)))))))
          : (c <= 7304 || (c < 8126
            ? (c < 8008
              ? (c < 7380
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))
            : (c <= 8126 || (c < 8203
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8207 || (c < 8288
                ? (c < 8255
                  ? (c >= 8234 && c <= 8238)
                  : (c <= 8256 || c == 8276))
                : (c <= 8292 || (c < 8305
                  ? (c >= 8294 && c <= 8303)
                  : c <= 8305)))))))))
        : (c <= 8319 || (c < 11712
          ? (c < 8517
            ? (c < 8469
              ? (c < 8421
                ? (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8412 || c == 8417))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? c == 8526
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11647
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))))
          : (c <= 11718 || (c < 12549
            ? (c < 12337
              ? (c < 11744
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11775 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12335)))))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))
            : (c <= 12591 || (c < 42192
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))))
              : (c <= 42237 || (c < 42612
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42607)))
                : (c <= 42621 || (c < 42775
                  ? (c >= 42623 && c <= 42737)
                  : c <= 42783)))))))))))
      : (c <= 42888 || (c < 65296
        ? (c < 43824
          ? (c < 43471
            ? (c < 43136
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43052
                  ? (c >= 42994 && c <= 43047)
                  : (c <= 43052 || (c >= 43072 && c <= 43123)))))
              : (c <= 43205 || (c < 43261
                ? (c < 43232
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43309 || (c < 43360
                  ? (c >= 43312 && c <= 43347)
                  : (c <= 43388 || (c >= 43392 && c <= 43456)))))))
            : (c <= 43481 || (c < 43744
              ? (c < 43600
                ? (c < 43520
                  ? (c >= 43488 && c <= 43518)
                  : (c <= 43574 || (c >= 43584 && c <= 43597)))
                : (c <= 43609 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))
              : (c <= 43759 || (c < 43793
                ? (c < 43777
                  ? (c >= 43762 && c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)))))))
          : (c <= 43866 || (c < 64318
            ? (c < 55243
              ? (c < 44016
                ? (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : (c <= 44010 || (c >= 44012 && c <= 44013)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64298
                  ? (c >= 64285 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65024
              ? (c < 64467
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))
                : (c <= 64829 || (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))))
              : (c <= 65039 || (c < 65136
                ? (c < 65075
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65076 || (c >= 65101 && c <= 65103)))
                : (c <= 65140 || (c < 65279
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65279)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65664
            ? (c < 65498
              ? (c < 65382
                ? (c < 65343
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65343 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))))
              : (c <= 65500 || (c < 65576
                ? (c < 65536
                  ? (c >= 65529 && c <= 65531)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))))))
            : (c <= 65786 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65856 && c <= 65908)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67456
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)))))
            : (c <= 67461 || (c < 67647
              ? (c < 67592
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      if (sym__identifier_token_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(1)
      if (sym__identifier_token_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 7:
      if (sym__identifier_token_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier_token);
      if (sym__identifier_token_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
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
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'j') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_predefined_type);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_predefined_type);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 151:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 219:
      if (lookahead == 'y') ADVANCE(234);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_managed);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(240);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_assembly);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_unmanaged);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier_token] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_assembly] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_managed] = ACTIONS(1),
    [anon_sym_unmanaged] = ACTIONS(1),
    [sym_predefined_type] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_compilation_unit] = STATE(185),
    [sym__member_declaration] = STATE(11),
    [sym__base_field_declaration] = STATE(11),
    [sym_extern_alias_directive] = STATE(2),
    [sym_using_directive] = STATE(4),
    [sym_identifier_name] = STATE(47),
    [sym_name] = STATE(74),
    [sym_alias_qualified_name] = STATE(64),
    [sym_simple_name] = STATE(64),
    [sym_generic_name] = STATE(56),
    [sym_qualified_name] = STATE(64),
    [sym_attribute_list] = STATE(13),
    [sym_global_attribute_list] = STATE(6),
    [sym_modifier] = STATE(15),
    [sym_variable_declaration] = STATE(182),
    [sym_field_declaration] = STATE(11),
    [sym__type] = STATE(82),
    [sym_array_type] = STATE(81),
    [sym_nullable_type] = STATE(81),
    [sym_pointer_type] = STATE(81),
    [sym_function_pointer_type] = STATE(81),
    [aux_sym_compilation_unit_repeat1] = STATE(2),
    [aux_sym_compilation_unit_repeat2] = STATE(4),
    [aux_sym_compilation_unit_repeat3] = STATE(6),
    [aux_sym_compilation_unit_repeat4] = STATE(11),
    [aux_sym_field_declaration_repeat1] = STATE(13),
    [aux_sym_field_declaration_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier_token] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(13),
    [anon_sym_static] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(15),
    [anon_sym_async] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_fixed] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(15),
    [anon_sym_new] = ACTIONS(15),
    [anon_sym_override] = ACTIONS(15),
    [anon_sym_partial] = ACTIONS(15),
    [anon_sym_private] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(15),
    [anon_sym_public] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(15),
    [anon_sym_required] = ACTIONS(15),
    [anon_sym_ref] = ACTIONS(15),
    [anon_sym_sealed] = ACTIONS(15),
    [anon_sym_unsafe] = ACTIONS(15),
    [anon_sym_virtual] = ACTIONS(15),
    [anon_sym_volatile] = ACTIONS(15),
    [anon_sym_delegate] = ACTIONS(19),
    [sym_predefined_type] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(9), 1,
      anon_sym_extern,
    ACTIONS(11), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(3), 2,
      sym_using_directive,
      aux_sym_compilation_unit_repeat2,
    STATE(5), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(17), 2,
      sym_extern_alias_directive,
      aux_sym_compilation_unit_repeat1,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(12), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 19,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [101] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(11), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(7), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(16), 2,
      sym_using_directive,
      aux_sym_compilation_unit_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(10), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [196] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(11), 1,
      anon_sym_global,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(5), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(16), 2,
      sym_using_directive,
      aux_sym_compilation_unit_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(12), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [291] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(18), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(10), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [379] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(18), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(12), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [467] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(18), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(8), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [555] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(9), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [639] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__identifier_token,
    ACTIONS(43), 1,
      anon_sym_global,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_delegate,
    ACTIONS(52), 1,
      sym_predefined_type,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(9), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(40), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [723] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(9), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [807] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(9), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [891] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(182), 1,
      sym_variable_declaration,
    STATE(13), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(15), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(9), 4,
      sym__member_declaration,
      sym__base_field_declaration,
      sym_field_declaration,
      aux_sym_compilation_unit_repeat4,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [975] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(173), 1,
      sym_variable_declaration,
    STATE(14), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(22), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [1050] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(179), 1,
      sym_variable_declaration,
    STATE(27), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [1118] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(82), 1,
      sym__type,
    STATE(173), 1,
      sym_variable_declaration,
    STATE(27), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
    ACTIONS(15), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [1186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_global,
    ACTIONS(62), 1,
      anon_sym_using,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(16), 2,
      sym_using_directive,
      aux_sym_compilation_unit_repeat2,
    ACTIONS(57), 23,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_extern,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(17), 2,
      sym_extern_alias_directive,
      aux_sym_compilation_unit_repeat1,
    ACTIONS(67), 24,
      anon_sym_global,
      anon_sym_using,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_global_attribute_list,
      aux_sym_compilation_unit_repeat3,
    ACTIONS(74), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(81), 25,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_using,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(85), 25,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_using,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(89), 25,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_using,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(22), 2,
      sym_attribute_list,
      aux_sym_field_declaration_repeat1,
    ACTIONS(91), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(98), 25,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_using,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(102), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(106), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(110), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 2,
      sym_modifier,
      aux_sym_field_declaration_repeat2,
    ACTIONS(112), 4,
      anon_sym_global,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
    ACTIONS(114), 20,
      anon_sym_extern,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(119), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(123), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(127), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_alias,
    ACTIONS(129), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 24,
      anon_sym_extern,
      anon_sym_global,
      anon_sym_static,
      anon_sym_abstract,
      anon_sym_async,
      anon_sym_const,
      anon_sym_fixed,
      anon_sym_internal,
      anon_sym_new,
      anon_sym_override,
      anon_sym_partial,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_readonly,
      anon_sym_required,
      anon_sym_ref,
      anon_sym_sealed,
      anon_sym_unsafe,
      anon_sym_virtual,
      anon_sym_volatile,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [1922] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(40), 1,
      aux_sym_function_pointer_parameter_list_repeat1,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(90), 1,
      sym__type,
    STATE(183), 1,
      sym_function_pointer_parameter,
    ACTIONS(149), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [1972] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(37), 1,
      aux_sym_function_pointer_parameter_list_repeat1,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(78), 1,
      sym__type,
    STATE(183), 1,
      sym_function_pointer_parameter,
    ACTIONS(149), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [2022] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(67), 1,
      sym_attribute_target_specifier,
    STATE(68), 1,
      sym_global_attribute_target_specifier,
    STATE(95), 1,
      sym_name,
    STATE(131), 1,
      sym_attribute,
    ACTIONS(151), 2,
      anon_sym_assembly,
      anon_sym_module,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    ACTIONS(153), 7,
      anon_sym_field,
      anon_sym_event,
      anon_sym_method,
      anon_sym_param,
      anon_sym_property,
      anon_sym_return,
      anon_sym_type,
  [2068] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__identifier_token,
    ACTIONS(158), 1,
      anon_sym_global,
    ACTIONS(164), 1,
      anon_sym_delegate,
    ACTIONS(167), 1,
      sym_predefined_type,
    STATE(40), 1,
      aux_sym_function_pointer_parameter_list_repeat1,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(97), 1,
      sym__type,
    STATE(183), 1,
      sym_function_pointer_parameter,
    ACTIONS(161), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [2118] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_GT,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(75), 1,
      sym__type,
    STATE(127), 1,
      aux_sym_type_argument_list_repeat1,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [2166] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(67), 1,
      sym_attribute_target_specifier,
    STATE(95), 1,
      sym_name,
    STATE(131), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    ACTIONS(153), 7,
      anon_sym_field,
      anon_sym_event,
      anon_sym_method,
      anon_sym_param,
      anon_sym_property,
      anon_sym_return,
      anon_sym_type,
  [2205] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(98), 1,
      sym__type,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [2244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(19), 1,
      anon_sym_delegate,
    ACTIONS(21), 1,
      sym_predefined_type,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(74), 1,
      sym_name,
    STATE(93), 1,
      sym__type,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
    STATE(81), 4,
      sym_array_type,
      sym_nullable_type,
      sym_pointer_type,
      sym_function_pointer_type,
  [2283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_type_argument_list,
    ACTIONS(174), 12,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(174), 12,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON_COLON,
    ACTIONS(180), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2347] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_null_literal,
    STATE(86), 1,
      sym_name_colon,
    STATE(147), 1,
      sym_argument,
    STATE(180), 1,
      sym_identifier_name,
    ACTIONS(27), 2,
      anon_sym_global,
      sym__identifier_token,
    STATE(154), 2,
      sym__expression,
      sym__literal,
    ACTIONS(184), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
  [2376] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_null_literal,
    STATE(86), 1,
      sym_name_colon,
    STATE(122), 1,
      sym_argument,
    STATE(180), 1,
      sym_identifier_name,
    ACTIONS(27), 2,
      anon_sym_global,
      sym__identifier_token,
    STATE(154), 2,
      sym__expression,
      sym__literal,
    ACTIONS(184), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
  [2405] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2435] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(194), 1,
      anon_sym_static,
    STATE(56), 1,
      sym_generic_name,
    STATE(70), 1,
      sym_name_equals,
    STATE(101), 1,
      sym_identifier_name,
    STATE(161), 1,
      sym_name,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2511] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2589] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2619] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(204), 1,
      anon_sym_static,
    STATE(56), 1,
      sym_generic_name,
    STATE(71), 1,
      sym_name_equals,
    STATE(101), 1,
      sym_identifier_name,
    STATE(152), 1,
      sym_name,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2681] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2711] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      sym_null_literal,
    STATE(110), 1,
      sym_attribute_argument,
    STATE(148), 1,
      sym_identifier_name,
    ACTIONS(27), 2,
      anon_sym_global,
      sym__identifier_token,
    STATE(109), 2,
      sym_name_equals,
      sym_name_colon,
    STATE(157), 2,
      sym__expression,
      sym__literal,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2771] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(159), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(133), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2825] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(95), 1,
      sym_name,
    STATE(134), 1,
      sym_attribute,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2852] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_null_literal,
    STATE(148), 1,
      sym_identifier_name,
    STATE(168), 1,
      sym_attribute_argument,
    ACTIONS(27), 2,
      anon_sym_global,
      sym__identifier_token,
    STATE(109), 2,
      sym_name_equals,
      sym_name_colon,
    STATE(157), 2,
      sym__expression,
      sym__literal,
  [2877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(153), 1,
      sym_name,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(47), 1,
      sym_identifier_name,
    STATE(56), 1,
      sym_generic_name,
    STATE(161), 1,
      sym_name,
    STATE(64), 3,
      sym_alias_qualified_name,
      sym_simple_name,
      sym_qualified_name,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 7,
      anon_sym_global,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
      anon_sym_delegate,
      sym_predefined_type,
      sym__identifier_token,
  [2938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__identifier_token,
    ACTIONS(222), 1,
      anon_sym_using,
    ACTIONS(174), 5,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
  [2955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(224), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [2970] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    STATE(91), 1,
      sym_array_rank_specifier,
    STATE(115), 1,
      aux_sym_type_argument_list_repeat2,
  [2995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_GT,
    STATE(91), 1,
      sym_array_rank_specifier,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3077] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(250), 1,
      sym__identifier_token,
    STATE(91), 1,
      sym_array_rank_specifier,
    STATE(113), 1,
      sym_variable_declarator,
  [3099] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      sym_null_literal,
    STATE(124), 1,
      aux_sym_array_rank_specifier_repeat1,
    STATE(125), 2,
      sym__expression,
      sym__literal,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_null_literal,
    STATE(164), 2,
      sym__expression,
      sym__literal,
    ACTIONS(262), 3,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3195] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_GT,
    STATE(91), 1,
      sym_array_rank_specifier,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR,
      sym__identifier_token,
  [3229] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_EQ,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_bracketed_argument_list,
    STATE(162), 1,
      sym_equals_value_clause,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    STATE(91), 1,
      sym_array_rank_specifier,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_null_literal,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(144), 2,
      sym__expression,
      sym__literal,
  [3284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_attribute_argument_list,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(55), 1,
      sym_simple_name,
    STATE(56), 2,
      sym_identifier_name,
      sym_generic_name,
  [3318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_array_rank_specifier,
  [3337] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_QMARK,
    ACTIONS(236), 1,
      anon_sym_STAR,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_array_rank_specifier,
  [3356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__identifier_token,
    ACTIONS(27), 1,
      anon_sym_global,
    STATE(65), 1,
      sym_simple_name,
    STATE(56), 2,
      sym_identifier_name,
      sym_generic_name,
  [3373] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT,
    ACTIONS(296), 1,
      anon_sym_managed,
    ACTIONS(298), 1,
      anon_sym_unmanaged,
    STATE(79), 1,
      sym_function_pointer_parameter_list,
    STATE(163), 1,
      sym_function_pointer_calling_convention,
  [3392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON_COLON,
    ACTIONS(300), 1,
      anon_sym_EQ,
    ACTIONS(180), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [3406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_equals_value_clause,
    ACTIONS(302), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_ref,
      anon_sym_out,
      anon_sym_in,
      sym_null_literal,
  [3430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_attribute_list_repeat1,
  [3443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1,
  [3456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1,
  [3469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_attribute_list_repeat1,
  [3482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_attribute_list_repeat1,
  [3495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_null_literal,
    STATE(143), 2,
      sym__expression,
      sym__literal,
  [3506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_attribute_argument_list_repeat1,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_attribute_list_repeat1,
  [3541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_variable_declaration_repeat1,
  [3554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_global_attribute_target_specifier,
    ACTIONS(335), 2,
      anon_sym_assembly,
      anon_sym_module,
  [3565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_GT,
    STATE(128), 1,
      aux_sym_type_argument_list_repeat2,
  [3578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_GT,
    STATE(116), 1,
      aux_sym_type_argument_list_repeat1,
  [3591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      aux_sym_variable_declaration_repeat1,
  [3604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_array_rank_specifier_repeat1,
  [3617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_array_rank_specifier_repeat1,
  [3630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_null_literal,
    STATE(164), 2,
      sym__expression,
      sym__literal,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_null_literal,
    STATE(149), 2,
      sym__expression,
      sym__literal,
  [3652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_bracketed_argument_list_repeat1,
  [3665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_variable_declaration_repeat1,
  [3678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_array_rank_specifier_repeat1,
  [3691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_array_rank_specifier_repeat1,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_bracketed_argument_list_repeat1,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_type_argument_list_repeat1,
  [3730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_GT,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_type_argument_list_repeat2,
  [3743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_attribute_argument_list_repeat1,
  [3756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(169), 1,
      sym_function_pointer_unmanaged_calling_convention_list,
  [3769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_attribute_list_repeat1,
  [3782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_attribute_list_repeat1,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_attribute_list_repeat1,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_null_literal,
    STATE(151), 2,
      sym__expression,
      sym__literal,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_global,
      sym__identifier_token,
      sym_null_literal,
  [3850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_bracketed_argument_list_repeat1,
  [3863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_attribute_argument_list_repeat1,
  [3876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__identifier_token,
    STATE(156), 1,
      sym_variable_declarator,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__identifier_token,
    STATE(105), 1,
      sym_function_pointer_unmanaged_calling_convention,
  [3970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [3998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__identifier_token,
    STATE(145), 1,
      sym_function_pointer_unmanaged_calling_convention,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      anon_sym_SEMI,
  [4066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LT,
    STATE(88), 1,
      sym_function_pointer_parameter_list,
  [4084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_global,
      sym__identifier_token,
  [4108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_global,
      sym__identifier_token,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LT,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LT,
  [4138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_using,
  [4145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SEMI,
  [4152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [4159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COLON,
  [4166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COLON,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_alias,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LT,
  [4187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_STAR,
  [4194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [4208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym__identifier_token,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [4222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COMMA,
  [4229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LT,
  [4236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 291,
  [SMALL_STATE(6)] = 379,
  [SMALL_STATE(7)] = 467,
  [SMALL_STATE(8)] = 555,
  [SMALL_STATE(9)] = 639,
  [SMALL_STATE(10)] = 723,
  [SMALL_STATE(11)] = 807,
  [SMALL_STATE(12)] = 891,
  [SMALL_STATE(13)] = 975,
  [SMALL_STATE(14)] = 1050,
  [SMALL_STATE(15)] = 1118,
  [SMALL_STATE(16)] = 1186,
  [SMALL_STATE(17)] = 1229,
  [SMALL_STATE(18)] = 1270,
  [SMALL_STATE(19)] = 1310,
  [SMALL_STATE(20)] = 1345,
  [SMALL_STATE(21)] = 1380,
  [SMALL_STATE(22)] = 1415,
  [SMALL_STATE(23)] = 1452,
  [SMALL_STATE(24)] = 1487,
  [SMALL_STATE(25)] = 1521,
  [SMALL_STATE(26)] = 1555,
  [SMALL_STATE(27)] = 1589,
  [SMALL_STATE(28)] = 1625,
  [SMALL_STATE(29)] = 1659,
  [SMALL_STATE(30)] = 1693,
  [SMALL_STATE(31)] = 1727,
  [SMALL_STATE(32)] = 1760,
  [SMALL_STATE(33)] = 1793,
  [SMALL_STATE(34)] = 1826,
  [SMALL_STATE(35)] = 1859,
  [SMALL_STATE(36)] = 1892,
  [SMALL_STATE(37)] = 1922,
  [SMALL_STATE(38)] = 1972,
  [SMALL_STATE(39)] = 2022,
  [SMALL_STATE(40)] = 2068,
  [SMALL_STATE(41)] = 2118,
  [SMALL_STATE(42)] = 2166,
  [SMALL_STATE(43)] = 2205,
  [SMALL_STATE(44)] = 2244,
  [SMALL_STATE(45)] = 2283,
  [SMALL_STATE(46)] = 2307,
  [SMALL_STATE(47)] = 2328,
  [SMALL_STATE(48)] = 2347,
  [SMALL_STATE(49)] = 2376,
  [SMALL_STATE(50)] = 2405,
  [SMALL_STATE(51)] = 2435,
  [SMALL_STATE(52)] = 2465,
  [SMALL_STATE(53)] = 2481,
  [SMALL_STATE(54)] = 2511,
  [SMALL_STATE(55)] = 2541,
  [SMALL_STATE(56)] = 2557,
  [SMALL_STATE(57)] = 2573,
  [SMALL_STATE(58)] = 2589,
  [SMALL_STATE(59)] = 2619,
  [SMALL_STATE(60)] = 2649,
  [SMALL_STATE(61)] = 2665,
  [SMALL_STATE(62)] = 2681,
  [SMALL_STATE(63)] = 2711,
  [SMALL_STATE(64)] = 2739,
  [SMALL_STATE(65)] = 2755,
  [SMALL_STATE(66)] = 2771,
  [SMALL_STATE(67)] = 2798,
  [SMALL_STATE(68)] = 2825,
  [SMALL_STATE(69)] = 2852,
  [SMALL_STATE(70)] = 2877,
  [SMALL_STATE(71)] = 2901,
  [SMALL_STATE(72)] = 2925,
  [SMALL_STATE(73)] = 2938,
  [SMALL_STATE(74)] = 2955,
  [SMALL_STATE(75)] = 2970,
  [SMALL_STATE(76)] = 2995,
  [SMALL_STATE(77)] = 3007,
  [SMALL_STATE(78)] = 3019,
  [SMALL_STATE(79)] = 3041,
  [SMALL_STATE(80)] = 3053,
  [SMALL_STATE(81)] = 3065,
  [SMALL_STATE(82)] = 3077,
  [SMALL_STATE(83)] = 3099,
  [SMALL_STATE(84)] = 3119,
  [SMALL_STATE(85)] = 3131,
  [SMALL_STATE(86)] = 3143,
  [SMALL_STATE(87)] = 3159,
  [SMALL_STATE(88)] = 3171,
  [SMALL_STATE(89)] = 3183,
  [SMALL_STATE(90)] = 3195,
  [SMALL_STATE(91)] = 3217,
  [SMALL_STATE(92)] = 3229,
  [SMALL_STATE(93)] = 3249,
  [SMALL_STATE(94)] = 3269,
  [SMALL_STATE(95)] = 3284,
  [SMALL_STATE(96)] = 3301,
  [SMALL_STATE(97)] = 3318,
  [SMALL_STATE(98)] = 3337,
  [SMALL_STATE(99)] = 3356,
  [SMALL_STATE(100)] = 3373,
  [SMALL_STATE(101)] = 3392,
  [SMALL_STATE(102)] = 3406,
  [SMALL_STATE(103)] = 3420,
  [SMALL_STATE(104)] = 3430,
  [SMALL_STATE(105)] = 3443,
  [SMALL_STATE(106)] = 3456,
  [SMALL_STATE(107)] = 3469,
  [SMALL_STATE(108)] = 3482,
  [SMALL_STATE(109)] = 3495,
  [SMALL_STATE(110)] = 3506,
  [SMALL_STATE(111)] = 3519,
  [SMALL_STATE(112)] = 3528,
  [SMALL_STATE(113)] = 3541,
  [SMALL_STATE(114)] = 3554,
  [SMALL_STATE(115)] = 3565,
  [SMALL_STATE(116)] = 3578,
  [SMALL_STATE(117)] = 3591,
  [SMALL_STATE(118)] = 3604,
  [SMALL_STATE(119)] = 3617,
  [SMALL_STATE(120)] = 3630,
  [SMALL_STATE(121)] = 3641,
  [SMALL_STATE(122)] = 3652,
  [SMALL_STATE(123)] = 3665,
  [SMALL_STATE(124)] = 3678,
  [SMALL_STATE(125)] = 3691,
  [SMALL_STATE(126)] = 3704,
  [SMALL_STATE(127)] = 3717,
  [SMALL_STATE(128)] = 3730,
  [SMALL_STATE(129)] = 3743,
  [SMALL_STATE(130)] = 3756,
  [SMALL_STATE(131)] = 3769,
  [SMALL_STATE(132)] = 3782,
  [SMALL_STATE(133)] = 3795,
  [SMALL_STATE(134)] = 3808,
  [SMALL_STATE(135)] = 3821,
  [SMALL_STATE(136)] = 3832,
  [SMALL_STATE(137)] = 3841,
  [SMALL_STATE(138)] = 3850,
  [SMALL_STATE(139)] = 3863,
  [SMALL_STATE(140)] = 3876,
  [SMALL_STATE(141)] = 3886,
  [SMALL_STATE(142)] = 3894,
  [SMALL_STATE(143)] = 3902,
  [SMALL_STATE(144)] = 3910,
  [SMALL_STATE(145)] = 3918,
  [SMALL_STATE(146)] = 3926,
  [SMALL_STATE(147)] = 3934,
  [SMALL_STATE(148)] = 3942,
  [SMALL_STATE(149)] = 3952,
  [SMALL_STATE(150)] = 3960,
  [SMALL_STATE(151)] = 3970,
  [SMALL_STATE(152)] = 3978,
  [SMALL_STATE(153)] = 3988,
  [SMALL_STATE(154)] = 3998,
  [SMALL_STATE(155)] = 4006,
  [SMALL_STATE(156)] = 4014,
  [SMALL_STATE(157)] = 4022,
  [SMALL_STATE(158)] = 4030,
  [SMALL_STATE(159)] = 4038,
  [SMALL_STATE(160)] = 4046,
  [SMALL_STATE(161)] = 4056,
  [SMALL_STATE(162)] = 4066,
  [SMALL_STATE(163)] = 4074,
  [SMALL_STATE(164)] = 4084,
  [SMALL_STATE(165)] = 4092,
  [SMALL_STATE(166)] = 4100,
  [SMALL_STATE(167)] = 4108,
  [SMALL_STATE(168)] = 4116,
  [SMALL_STATE(169)] = 4124,
  [SMALL_STATE(170)] = 4131,
  [SMALL_STATE(171)] = 4138,
  [SMALL_STATE(172)] = 4145,
  [SMALL_STATE(173)] = 4152,
  [SMALL_STATE(174)] = 4159,
  [SMALL_STATE(175)] = 4166,
  [SMALL_STATE(176)] = 4173,
  [SMALL_STATE(177)] = 4180,
  [SMALL_STATE(178)] = 4187,
  [SMALL_STATE(179)] = 4194,
  [SMALL_STATE(180)] = 4201,
  [SMALL_STATE(181)] = 4208,
  [SMALL_STATE(182)] = 4215,
  [SMALL_STATE(183)] = 4222,
  [SMALL_STATE(184)] = 4229,
  [SMALL_STATE(185)] = 4236,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compilation_unit, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat4, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(45),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(46),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(42),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(178),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat4, 2), SHIFT_REPEAT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(171),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat2, 2), SHIFT_REPEAT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat1, 2), SHIFT_REPEAT(176),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compilation_unit_repeat3, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compilation_unit_repeat3, 2), SHIFT_REPEAT(114),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_directive, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_directive, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_directive, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_directive, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_alias_directive, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern_alias_directive, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2), SHIFT_REPEAT(42),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_directive, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using_directive, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_attribute_list, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_attribute_list, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat2, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat2, 2), SHIFT_REPEAT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_attribute_list, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_attribute_list, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_attribute_list, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_attribute_list, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2), SHIFT_REPEAT(45),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2), SHIFT_REPEAT(46),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2), SHIFT_REPEAT(43),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2), SHIFT_REPEAT(178),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2), SHIFT_REPEAT(81),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_name, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_name, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_name, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_name, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_qualified_name, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_argument_list, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_argument_list, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_argument_list, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_pointer_parameter_list_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_parameter_list, 3, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_parameter_list, 4, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_parameter, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_type, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_rank_specifier, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_rank_specifier, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullable_type, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_rank_specifier, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_type, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_argument_list_repeat2, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_rank_specifier_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_parameter, 2, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_colon, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(66),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_argument_list, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_argument_list_repeat1, 2), SHIFT_REPEAT(116),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_argument_list_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2), SHIFT_REPEAT(94),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_rank_specifier_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracketed_argument_list_repeat1, 2), SHIFT_REPEAT(48),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracketed_argument_list_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_argument_list_repeat2, 2), SHIFT_REPEAT(44),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_calling_convention, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1, 2), SHIFT_REPEAT(160),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_pointer_unmanaged_calling_convention_list_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_argument_list, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_equals, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2), SHIFT_REPEAT(69),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equals_value_clause, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_unmanaged_calling_convention, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, .production_id = 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_target_specifier, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_attribute_target_specifier, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_calling_convention, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_unmanaged_calling_convention_list, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_pointer_unmanaged_calling_convention_list, 4),
  [474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_c_sharp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier_token,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
