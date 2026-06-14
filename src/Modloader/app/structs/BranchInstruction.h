#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchInstruction_DEFINED)
#include <Modloader/app/structs/BranchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_BranchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchInstruction_DEFINED
struct BranchInstruction__Class;
struct BranchInstruction {
    struct BranchInstruction__Class* klass;
    MonitorData* monitor;
    struct BranchInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchInstruction_FWDDECL)
#define IL2CPP_STRUCT_BranchInstruction_FWDDECL
#include <Modloader/app/structs/BranchInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_BranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchInstruction_DEFINED) && !defined(IL2CPP_STRUCT_BranchInstruction_FWDDECL)
#include <Modloader/app/structs/BranchInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
