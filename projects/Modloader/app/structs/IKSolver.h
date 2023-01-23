#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolver_DEFINED
struct IKSolver__Class;
struct IKSolver {
    struct IKSolver__Class* klass;
    MonitorData* monitor;
    struct IKSolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_FWDDECL
#include <Modloader/app/structs/IKSolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_FWDDECL)
#include <Modloader/app/structs/IKSolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
