#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Interpreter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Interpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interpreter__Fields_DEFINED)
#include <Modloader/app/structs/InstructionArray.h>
#if defined(IL2CPP_STRUCT_InstructionArray_DEFINED)
#define IL2CPP_STRUCT_Interpreter__Fields_DEFINED
struct Object__Array;
struct RuntimeLabel__Array;
struct DebugInfo__Array;
struct String;
struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_;
struct __declspec(align(8)) Interpreter__Fields {
    struct InstructionArray _instructions;
    struct Object__Array* _objects;
    struct RuntimeLabel__Array* _labels;
    struct DebugInfo__Array* _debugInfos;
    struct String* _Name_k__BackingField;
    int32_t _LocalCount_k__BackingField;
    struct Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_* _ClosureVariables_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Interpreter__Fields_FWDDECL)
#define IL2CPP_STRUCT_Interpreter__Fields_FWDDECL
#include <Modloader/app/structs/DebugInfo__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Interpreter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interpreter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Interpreter__Fields_FWDDECL)
#include <Modloader/app/structs/Interpreter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Interpreter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
