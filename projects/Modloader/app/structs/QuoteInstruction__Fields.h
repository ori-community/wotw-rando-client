#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuoteInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuoteInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuoteInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_QuoteInstruction__Fields_DEFINED
struct Expression;
struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_;
struct __declspec(align(8)) QuoteInstruction__Fields {
    struct Expression* _operand;
    struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_* _hoistedVariables;
};
#endif
#if !defined(IL2CPP_STRUCT_QuoteInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuoteInstruction__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Syste_Li_Expressio_ParameterExpressi_Syst_Li_Expressio_Interpret_LocalVariab_.h>
#include <Modloader/app/structs/Expression.h>
#endif
#undef IL2CPP_STRUCT_QuoteInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuoteInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuoteInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/QuoteInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuoteInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
