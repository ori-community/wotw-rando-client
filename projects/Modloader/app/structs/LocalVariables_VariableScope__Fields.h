#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_DEFINED
struct LocalVariable;
struct LocalVariables_VariableScope;
struct List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_;
struct __declspec(align(8)) LocalVariables_VariableScope__Fields {
    int32_t Start;
    int32_t Stop;
    struct LocalVariable* Variable;
    struct LocalVariables_VariableScope* Parent;
    struct List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_* ChildScopes;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_.h>
#include <Modloader/app/structs/LocalVariable.h>
#include <Modloader/app/structs/LocalVariables_VariableScope.h>
#endif
#undef IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_FWDDECL)
#include <Modloader/app/structs/LocalVariables_VariableScope__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariables_VariableScope__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
