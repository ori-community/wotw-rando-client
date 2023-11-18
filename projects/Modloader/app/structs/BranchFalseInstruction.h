#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchFalseInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchFalseInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchFalseInstruction_DEFINED)
#include <Modloader/app/structs/BranchFalseInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_BranchFalseInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchFalseInstruction_DEFINED
struct BranchFalseInstruction__Class;
struct BranchFalseInstruction {
    struct BranchFalseInstruction__Class* klass;
    MonitorData* monitor;
    struct BranchFalseInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchFalseInstruction_FWDDECL)
#define IL2CPP_STRUCT_BranchFalseInstruction_FWDDECL
#include <Modloader/app/structs/BranchFalseInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_BranchFalseInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchFalseInstruction_DEFINED) && !defined(IL2CPP_STRUCT_BranchFalseInstruction_FWDDECL)
#include <Modloader/app/structs/BranchFalseInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchFalseInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
