#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverHeuristic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverHeuristic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED
struct Transform;
struct IKSolver_Bone__Array;
struct IKSolverHeuristic__Fields {
    struct IKSolver__Fields _;
    struct Transform* target;
    float tolerance;
    int32_t maxIterations;
    bool useRotationLimits;
    bool XY;
    struct IKSolver_Bone__Array* bones;
    struct Vector3 lastLocalDirection;
    float chainLength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverHeuristic__Fields_FWDDECL
#include <Modloader/app/structs/IKSolver_Bone__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolverHeuristic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverHeuristic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverHeuristic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
