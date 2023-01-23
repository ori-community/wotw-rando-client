#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchTrueInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchTrueInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchTrueInstruction_DEFINED)
#include <Modloader/app/structs/BranchTrueInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_BranchTrueInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchTrueInstruction_DEFINED
struct BranchTrueInstruction__Class;
struct BranchTrueInstruction {
    struct BranchTrueInstruction__Class* klass;
    MonitorData* monitor;
    struct BranchTrueInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchTrueInstruction_FWDDECL)
#define IL2CPP_STRUCT_BranchTrueInstruction_FWDDECL
#include <Modloader/app/structs/BranchTrueInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_BranchTrueInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchTrueInstruction_DEFINED) && !defined(IL2CPP_STRUCT_BranchTrueInstruction_FWDDECL)
#include <Modloader/app/structs/BranchTrueInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchTrueInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
