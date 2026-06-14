#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_IterationDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_IterationDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_IterationDelegate_DEFINED)
#include <Modloader/app/structs/IKSolver_IterationDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver_IterationDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolver_IterationDelegate_DEFINED
struct IKSolver_IterationDelegate__Class;
struct IKSolver_IterationDelegate {
    struct IKSolver_IterationDelegate__Class* klass;
    MonitorData* monitor;
    struct IKSolver_IterationDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_IterationDelegate_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_IterationDelegate_FWDDECL
#include <Modloader/app/structs/IKSolver_IterationDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_IterationDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_IterationDelegate_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_IterationDelegate_FWDDECL)
#include <Modloader/app/structs/IKSolver_IterationDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_IterationDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
