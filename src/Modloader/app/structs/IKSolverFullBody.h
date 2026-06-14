#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverFullBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverFullBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBody_DEFINED)
#include <Modloader/app/structs/IKSolverFullBody__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverFullBody__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverFullBody_DEFINED
struct IKSolverFullBody__Class;
struct IKSolverFullBody {
    struct IKSolverFullBody__Class* klass;
    MonitorData* monitor;
    struct IKSolverFullBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverFullBody_FWDDECL)
#define IL2CPP_STRUCT_IKSolverFullBody_FWDDECL
#include <Modloader/app/structs/IKSolverFullBody__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolverFullBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFullBody_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverFullBody_FWDDECL)
#include <Modloader/app/structs/IKSolverFullBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverFullBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
