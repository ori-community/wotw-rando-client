#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionList__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionList__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InstructionList__StaticFields_DEFINED
struct Instruction;
struct Instruction__Array;
struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_;
struct RuntimeLabel__Array;
struct InstructionList__StaticFields {
    struct Instruction* s_null;
    struct Instruction* s_true;
    struct Instruction* s_false;
    struct Instruction__Array* s_Ints;
    struct Instruction__Array* s_loadObjectCached;
    struct Instruction__Array* s_loadLocal;
    struct Instruction__Array* s_loadLocalBoxed;
    struct Instruction__Array* s_loadLocalFromClosure;
    struct Instruction__Array* s_loadLocalFromClosureBoxed;
    struct Instruction__Array* s_assignLocal;
    struct Instruction__Array* s_storeLocal;
    struct Instruction__Array* s_assignLocalBoxed;
    struct Instruction__Array* s_storeLocalBoxed;
    struct Instruction__Array* s_assignLocalToClosure;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_* s_loadFields;
    struct RuntimeLabel__Array* s_emptyRuntimeLabels;
};
#endif
#if !defined(IL2CPP_STRUCT_InstructionList__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InstructionList__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Reflection_FieldInfo_System_Linq_Expressions_Interpreter_Instruction_.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/Instruction__Array.h>
#include <Modloader/app/structs/RuntimeLabel__Array.h>
#endif
#undef IL2CPP_STRUCT_InstructionList__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InstructionList__StaticFields_FWDDECL)
#include <Modloader/app/structs/InstructionList__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionList__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
