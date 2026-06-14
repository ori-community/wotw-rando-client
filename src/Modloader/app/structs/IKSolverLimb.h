#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverLimb_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb_DEFINED)
#include <Modloader/app/structs/IKSolverLimb__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverLimb__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverLimb_DEFINED
struct IKSolverLimb__Class;
struct IKSolverLimb {
    struct IKSolverLimb__Class* klass;
    MonitorData* monitor;
    struct IKSolverLimb__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverLimb_FWDDECL)
#define IL2CPP_STRUCT_IKSolverLimb_FWDDECL
#include <Modloader/app/structs/IKSolverLimb__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolverLimb_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLimb_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverLimb_FWDDECL)
#include <Modloader/app/structs/IKSolverLimb.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverLimb.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
