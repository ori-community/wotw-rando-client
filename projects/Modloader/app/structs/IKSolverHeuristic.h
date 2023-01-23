#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverHeuristic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverHeuristic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic_DEFINED)
#include <Modloader/app/structs/IKSolverHeuristic__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverHeuristic_DEFINED
struct IKSolverHeuristic__Class;
struct IKSolverHeuristic {
    struct IKSolverHeuristic__Class* klass;
    MonitorData* monitor;
    struct IKSolverHeuristic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic_FWDDECL)
#define IL2CPP_STRUCT_IKSolverHeuristic_FWDDECL
#include <Modloader/app/structs/IKSolverHeuristic__Class.h>
#endif
#undef IL2CPP_STRUCT_IKSolverHeuristic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverHeuristic_FWDDECL)
#include <Modloader/app/structs/IKSolverHeuristic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverHeuristic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
