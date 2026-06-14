#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationVerletPlayableParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationVerletPlayableParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableParameters_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AnimationVerletPlayableParameters_DEFINED
struct AnimationVerletPlayableParameters {
    struct Vector3 BoneDirectionAxis;
    struct Vector3 TurbulenceForce;
    float TurbulenceOscillationSpeed;
    bool AttenuateTurbulence;
    int32_t VerletIterationCount;
    float AnimationPoseRetainForceRoot;
    float AnimationPoseRetainForceTip;
    float DampingRoot;
    float DampingTip;
    float AngularLimit;
    float Stiffness;
    float Gravity;
    float DistanceTolerance;
    float AngleTolerance;
    float MaxRootDeviationFromPoseDistance;
    float MaxDeviationFromPoseDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableParameters_FWDDECL)
#define IL2CPP_STRUCT_AnimationVerletPlayableParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationVerletPlayableParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationVerletPlayableParameters_DEFINED) && !defined(IL2CPP_STRUCT_AnimationVerletPlayableParameters_FWDDECL)
#include <Modloader/app/structs/AnimationVerletPlayableParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationVerletPlayableParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
