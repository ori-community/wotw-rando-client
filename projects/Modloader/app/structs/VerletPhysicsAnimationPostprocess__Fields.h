#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_DEFINED
struct JointChains;
struct VectorAnimationParameter;
struct IRng;
struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_;
struct VerletPhysicsAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct JointChains* JointChains;
    struct Vector3 BoneDirectionAxis;
    bool AutoDetectBoneDirectionAxis;
    int32_t VerletIterationCount;
    bool AnimateLastJointRotation;
    float LastLinkLength;
    struct VectorAnimationParameter* AdditionalForceParameter;
    struct Vector3 AdditionalForce;
    struct Vector3 TurbulenceForce;
    float TurbulenceOscillationSpeed;
    bool AttenuateTurbulence;
    float AnimationPoseRetainForce;
    bool UseAnimationPoseRetainForceTip;
    float AnimationPoseRetainForceTip;
    float AnimationPoseRetainForceDuringCrossfade;
    float AnimationRetainForceGravityFactor;
    float DampingRoot;
    float DampingTip;
    float AngularLimit;
    float Stiffness;
    float Gravity;
    bool JointsAreAnimated;
    bool DebugDraw;
    bool Jobify;
    bool UseOptimizedValueWriteout;
    bool DetectDeterminantSignChange;
    float DistanceTolerance;
    float AngleTolerance;
    float MaxRootDeviationFromPoseDistance;
    float MaxDeviationFromPoseDistance;
    bool OnlyEnableDuringBaseLayerAnimationCrossfade;
    float CrossfadeEnableBlendInSpeed;
    float CrossfadeEnableBlendOutSpeed;
    float CrossfadeEnableMinWeight;
    bool MakeThreadSafe;
    bool ForceBlockOnJobCompletion;
    struct IRng* m_rng;
    bool m_wasJustActivated;
    int32_t m_transformDeterminantSign;
    bool m_useJobs;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_* m_verletChains;
    struct JobHandle m_jobHandle;
    float m_simulationTime;
    float m_crossfadeBasedWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/IRng.h>
#include <Modloader/app/structs/JointChains.h>
#include <Modloader/app/structs/List_1_Moon_VerletPhysicsAnimationPostprocess_VerletChain_.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
