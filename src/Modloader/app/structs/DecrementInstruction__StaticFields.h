#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecrementInstruction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecrementInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecrementInstruction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DecrementInstruction__StaticFields_DEFINED
struct Instruction;
struct DecrementInstruction__StaticFields {
    struct Instruction* s_Int16;
    struct Instruction* s_Int32;
    struct Instruction* s_Int64;
    struct Instruction* s_UInt16;
    struct Instruction* s_UInt32;
    struct Instruction* s_UInt64;
    struct Instruction* s_Single;
    struct Instruction* s_Double;
};
#endif
#if !defined(IL2CPP_STRUCT_DecrementInstruction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DecrementInstruction__StaticFields_FWDDECL
#include <Modloader/app/structs/Instruction.h>
#endif
#undef IL2CPP_STRUCT_DecrementInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecrementInstruction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DecrementInstruction__StaticFields_FWDDECL)
#include <Modloader/app/structs/DecrementInstruction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecrementInstruction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
