#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SolverManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SolverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SolverManager_DEFINED)
#include <Modloader/app/structs/SolverManager__Fields.h>
#if defined(IL2CPP_STRUCT_SolverManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SolverManager_DEFINED
struct SolverManager__Class;
struct SolverManager {
    struct SolverManager__Class* klass;
    MonitorData* monitor;
    struct SolverManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SolverManager_FWDDECL)
#define IL2CPP_STRUCT_SolverManager_FWDDECL
#include <Modloader/app/structs/SolverManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SolverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SolverManager_DEFINED) && !defined(IL2CPP_STRUCT_SolverManager_FWDDECL)
#include <Modloader/app/structs/SolverManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SolverManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
