#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_DEFINED
struct Instruction;
struct LeaveFaultInstruction__StaticFields {
    struct Instruction* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_FWDDECL
#include <Modloader/app/structs/Instruction.h>
#endif
#undef IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LeaveFaultInstruction__StaticFields_FWDDECL)
#include <Modloader/app/structs/LeaveFaultInstruction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaveFaultInstruction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
