#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchLabel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchLabel_DEFINED)
#include <Modloader/app/structs/BranchLabel__Fields.h>
#if defined(IL2CPP_STRUCT_BranchLabel__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchLabel_DEFINED
struct BranchLabel__Class;
struct BranchLabel {
    struct BranchLabel__Class* klass;
    MonitorData* monitor;
    struct BranchLabel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchLabel_FWDDECL)
#define IL2CPP_STRUCT_BranchLabel_FWDDECL
#include <Modloader/app/structs/BranchLabel__Class.h>
#endif
#undef IL2CPP_STRUCT_BranchLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchLabel_DEFINED) && !defined(IL2CPP_STRUCT_BranchLabel_FWDDECL)
#include <Modloader/app/structs/BranchLabel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchLabel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
