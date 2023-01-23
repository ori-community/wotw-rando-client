#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolver_UpdateDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolver_UpdateDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_UpdateDelegate_DEFINED)
#include <Modloader/app/structs/IKSolver_UpdateDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver_UpdateDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolver_UpdateDelegate_DEFINED
struct IKSolver_UpdateDelegate__Class;
struct IKSolver_UpdateDelegate {
    struct IKSolver_UpdateDelegate__Class* klass;
    MonitorData* monitor;
    struct IKSolver_UpdateDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolver_UpdateDelegate_FWDDECL)
#define IL2CPP_STRUCT_IKSolver_UpdateDelegate_FWDDECL
#include <Modloader/app/structs/IKSolver_UpdateDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolver_UpdateDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolver_UpdateDelegate_DEFINED) && !defined(IL2CPP_STRUCT_IKSolver_UpdateDelegate_FWDDECL)
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolver_UpdateDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
