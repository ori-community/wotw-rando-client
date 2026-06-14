#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverAim__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverAim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim__Fields_DEFINED)
#include <Modloader/app/structs/IKSolverHeuristic__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolverHeuristic__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverAim__Fields_DEFINED
struct Transform;
struct IKSolver_IterationDelegate;
struct RotationLimit;
struct IKSolverAim__Fields {
    struct IKSolverHeuristic__Fields _;
    struct Transform* transform;
    struct Vector3 axis;
    struct Vector3 poleAxis;
    struct Vector3 polePosition;
    float poleWeight;
    struct Transform* poleTarget;
    float clampWeight;
    int32_t clampSmoothing;
    struct IKSolver_IterationDelegate* OnPreIteration;
    float step;
    struct Vector3 clampedIKPosition;
    struct RotationLimit* transformLimit;
    struct Transform* lastTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverAim__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverAim__Fields_FWDDECL
#include <Modloader/app/structs/IKSolver_IterationDelegate.h>
#include <Modloader/app/structs/RotationLimit.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolverAim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverAim__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverAim__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverAim__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
