#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverLookAt__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverLookAt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLookAt__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED)
#define IL2CPP_STRUCT_IKSolverLookAt__Fields_DEFINED
struct Transform;
struct IKSolverLookAt_LookAtBone__Array;
struct IKSolverLookAt_LookAtBone;
struct AnimationCurve;
struct Vector3__Array;
struct IKSolverLookAt__Fields {
    struct IKSolver__Fields _;
    struct Transform* target;
    struct IKSolverLookAt_LookAtBone__Array* spine;
    struct IKSolverLookAt_LookAtBone* head;
    struct IKSolverLookAt_LookAtBone__Array* eyes;
    float bodyWeight;
    float headWeight;
    float eyesWeight;
    float clampWeight;
    float clampWeightHead;
    float clampWeightEyes;
    int32_t clampSmoothing;
    struct AnimationCurve* spineWeightCurve;
    struct Vector3__Array* spineForwards;
    struct Vector3__Array* headForwards;
    struct Vector3__Array* eyeForward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverLookAt__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverLookAt__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone.h>
#include <Modloader/app/structs/IKSolverLookAt_LookAtBone__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_IKSolverLookAt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverLookAt__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverLookAt__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverLookAt__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverLookAt__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
