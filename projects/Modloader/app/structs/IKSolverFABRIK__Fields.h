#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverFABRIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverFABRIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFABRIK__Fields_DEFINED)
#include <Modloader/app/structs/IKSolverHeuristic__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverFABRIK__Fields_DEFINED
struct IKSolver_IterationDelegate;
struct Boolean__Array;
struct Vector3__Array;
struct IKSolverFABRIK__Fields {
    struct IKSolverHeuristic__Fields _;
    struct IKSolver_IterationDelegate* OnPreIteration;
    struct Boolean__Array* limitedBones;
    struct Vector3__Array* solverLocalPositions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverFABRIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverFABRIK__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/IKSolver_IterationDelegate.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_IKSolverFABRIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverFABRIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverFABRIK__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverFABRIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverFABRIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
