#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NegateInstruction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NegateInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateInstruction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NegateInstruction__StaticFields_DEFINED
struct Instruction;
struct NegateInstruction__StaticFields {
    struct Instruction* s_Int16;
    struct Instruction* s_Int32;
    struct Instruction* s_Int64;
    struct Instruction* s_Single;
    struct Instruction* s_Double;
};
#endif
#if !defined(IL2CPP_STRUCT_NegateInstruction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NegateInstruction__StaticFields_FWDDECL
#include <Modloader/app/structs/Instruction.h>
#endif
#undef IL2CPP_STRUCT_NegateInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateInstruction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NegateInstruction__StaticFields_FWDDECL)
#include <Modloader/app/structs/NegateInstruction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NegateInstruction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
