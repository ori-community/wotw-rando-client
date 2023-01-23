#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedIKSolvers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedIKSolvers_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKSolvers_DEFINED)
#include <Modloader/app/structs/BipedIKSolvers__Fields.h>
#if defined(IL2CPP_STRUCT_BipedIKSolvers__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedIKSolvers_DEFINED
struct BipedIKSolvers__Class;
struct BipedIKSolvers {
    struct BipedIKSolvers__Class* klass;
    MonitorData* monitor;
    struct BipedIKSolvers__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedIKSolvers_FWDDECL)
#define IL2CPP_STRUCT_BipedIKSolvers_FWDDECL
#include <Modloader/app/structs/BipedIKSolvers__Class.h>
#endif
#undef IL2CPP_STRUCT_BipedIKSolvers_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKSolvers_DEFINED) && !defined(IL2CPP_STRUCT_BipedIKSolvers_FWDDECL)
#include <Modloader/app/structs/BipedIKSolvers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedIKSolvers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
