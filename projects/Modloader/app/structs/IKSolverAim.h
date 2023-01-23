#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverAim_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverAim_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim_DEFINED)
#include <Modloader/app/structs/IKSolverAim__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverAim__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverAim_DEFINED
struct IKSolverAim__Class;
struct IKSolverAim {
    struct IKSolverAim__Class* klass;
    MonitorData* monitor;
    struct IKSolverAim__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverAim_FWDDECL)
#define IL2CPP_STRUCT_IKSolverAim_FWDDECL
#include <Modloader/app/structs/IKSolverAim__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolverAim_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverAim_FWDDECL)
#include <Modloader/app/structs/IKSolverAim.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverAim.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
