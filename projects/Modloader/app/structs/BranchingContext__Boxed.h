#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchingContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchingContext__Boxed_DEFINED)
#include <Modloader/app/structs/BranchingContext.h>
#if defined(IL2CPP_STRUCT_BranchingContext_DEFINED)
#define IL2CPP_STRUCT_BranchingContext__Boxed_DEFINED
struct BranchingContext__Class;
struct BranchingContext__Boxed {
    struct BranchingContext__Class* klass;
    MonitorData* monitor;
    struct BranchingContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchingContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BranchingContext__Boxed_FWDDECL
#include <Modloader/app/structs/BranchingContext__Class.h>
#endif
#undef IL2CPP_STRUCT_BranchingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchingContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BranchingContext__Boxed_FWDDECL)
#include <Modloader/app/structs/BranchingContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchingContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
