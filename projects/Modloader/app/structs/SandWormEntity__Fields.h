#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/SandWormEntity_BodyPhysicsMode__Enum.h>
#include <Modloader/app/structs/SandWormEntity_CachedDigZone.h>
#include <Modloader/app/structs/SandWormEntity_CachedWaterZone.h>
#include <Modloader/app/structs/SandWormEntity_Habitat__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormEntity_Habitat__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SandWormEntity_BodyPhysicsMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SandWormEntity_CachedDigZone_DEFINED) && defined(IL2CPP_STRUCT_SandWormEntity_CachedWaterZone_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity__Fields_DEFINED
struct GameObject;
struct Transform;
struct MoonTimeline;
struct List_1_SandWormEntity_Segment_;
struct List_1_UnityEngine_Renderer_;
struct MoonAnimation;
struct FloatAnimationParameter;
struct AnimationCurve;
struct SnakeSolver;
struct SandWormTailPost;
struct NativeSandWormTailPost;
struct List_1_SandWormTailPost_;
struct SandWormLocomotion;
struct VerletBody;
struct SandTrail;
struct List_1_UnityEngine_Collider_;
struct SandWormEntity_SandWormBodyAnimation;
struct WaterPoisonTrail;
struct UberTransformFollow;
struct List_1_SandWormEntity_SandWormBodyWave_;
struct List_1_SandWormEntity_SandWormSquetch_;
struct Vector4__Array;
struct List_1_Moon_VerletPhysicsAnimationPostprocess_;
struct ActivationParent;
struct SandWormEntity__Fields {
    struct EnemyEntity__Fields _;
    SandWormEntity_Habitat__Enum WormHabitat;

    bool IsPoisonous;
    float m_radiusMultiplier;
    struct GameObject* EffectOnEnter;
    struct GameObject* TrailEffect;
    struct Transform* TrailEffectOriginTransform;
    float TrailOffset;
    struct MoonTimeline* EnterSandTimeline;
    struct MoonTimeline* ExitSandTimeline;
    struct MoonTimeline* DamageTimeline;
    float CamMinDisMultWhenTargetNotSameHabitat;
    float CamMaxDisMultWhenTargetNotSameHabitat;
    struct List_1_SandWormEntity_Segment_* Segments;
    struct Vector3 SegmentGravity;
    float DistanceBetweenSegments;
    float StationaryDistanceBetweenSegments;
    float VerletMass;
    float VerletDamping;
    float VerletStiffness;
    float SegmentStretchRatio;
    float SpringMass;
    float SpringDamping;
    float SpringStiffness;
    struct List_1_UnityEngine_Renderer_* Renderers;
    struct MoonAnimation* MouthAnimation;
    struct FloatAnimationParameter* MouthOpenParameter;
    float HeadRotationSpeedScale;
    float SegmentWidthNoiseAmplitude;
    float SegmentNoiseWidthFrequency;
    struct AnimationCurve* SegmentWidthCurve;
    struct AnimationCurve* SegmentWidthVsStretchCurve;
    float HeadPositionOffset;
    float MaxHeadRotationSpeed;
    float LineRendererZOffset;
    struct SnakeSolver* SnakeSolver;
    SandWormEntity_BodyPhysicsMode__Enum DefaultPhysicsMode;

    struct SandWormTailPost* TailPost;
    struct NativeSandWormTailPost* NativeTailPost;
    struct List_1_SandWormTailPost_* SideTentacles;
    struct Transform* HeadTop;
    struct Transform* TailBase;
    float InvincibilityTimeAfterDamage;
    float RagdollForceScale;
    float RagdollRandomForceScale;
    struct SandWormLocomotion* m_sandWormLocomotion;
    struct VerletBody* m_verletBody;
    struct SandTrail* m_trailRoot;
    struct List_1_UnityEngine_Collider_* m_myColliders;
    bool m_isIgnoringCollisionsWithSandAreas;
    bool m_hasEffectOnEnter;
    struct ActiveAnimationHandle m_mouthAnimationState;
    struct SandWormEntity_SandWormBodyAnimation* m_wormBodyAnimation;
    bool m_playingWormBodyAnimation;
    struct WaterPoisonTrail* m_waterPoisonTrail;
    struct UberTransformFollow* m_waterPoisonTrailUberFollow;
    float m_clearAndRestartWaterPoisonDelay;
    float m_rollValue;
    struct List_1_SandWormEntity_SandWormBodyWave_* m_bodyWaves;
    struct List_1_SandWormEntity_SandWormSquetch_* m_squetches;
    struct Vector4__Array* m_bodyWavesShaderData;
    struct Vector4__Array* m_squetchesShaderData;
    struct Vector3 m_lastSafePosition;
    NavigationType__Enum m_currentTailAreaType;

    int32_t m_frameCurrentTailAreaType;
    struct Vector3 m_previousLateUpdatePosition;
    SandWormEntity_BodyPhysicsMode__Enum _BodyPhysics_k__BackingField;

    struct SandWormEntity_CachedDigZone m_headInDigZone;
    struct SandWormEntity_CachedDigZone m_headTopInDigZone;
    struct SandWormEntity_CachedDigZone m_tailInDigZone;
    struct SandWormEntity_CachedDigZone m_oriInDigZone;
    struct SandWormEntity_CachedWaterZone m_isInWaterZone;
    struct SandWormEntity_CachedWaterZone m_oriInWaterZone;
    float m_invincibilityTimer;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_* m_animationPostProcesses;
    float PoisonTrailMaxMovement;
    struct ActivationParent* ActivationParent;
    struct Vector3 m_lastTrailPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity__Fields_FWDDECL
#include <Modloader/app/structs/ActivationParent.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_VerletPhysicsAnimationPostprocess_.h>
#include <Modloader/app/structs/List_1_SandWormEntity_SandWormBodyWave_.h>
#include <Modloader/app/structs/List_1_SandWormEntity_SandWormSquetch_.h>
#include <Modloader/app/structs/List_1_SandWormEntity_Segment_.h>
#include <Modloader/app/structs/List_1_SandWormTailPost_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NativeSandWormTailPost.h>
#include <Modloader/app/structs/SandTrail.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/SandWormTailPost.h>
#include <Modloader/app/structs/SnakeSolver.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#include <Modloader/app/structs/Vector4__Array.h>
#include <Modloader/app/structs/VerletBody.h>
#include <Modloader/app/structs/WaterPoisonTrail.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
