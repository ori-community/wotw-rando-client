#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/ReactionFallingBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_ReactionFallingBehaviour_FallState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct MoonAnimation;
struct FloatAnimationParameter;
struct RootMotionProcessorData;
struct GameObject;
struct Locomotion;
struct ReactionFallingBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* LandSequenceNew;
    struct MoonTimeline* ShortLandSequence;
    struct LegacyTimelineSequence* LandSequence;
    struct MoonTimeline* FallingTimeline;
    struct MoonTimeline* FallingUpToDownTimeline;
    struct MoonTimeline* FallingUpToDownFastTimeline;
    float VerticalSpeedToEnableUpToDownTransition;
    float VerticalSpeedToStartUpToDownTransition;
    struct MoonAnimation* FallingAnimation;
    bool LoopFallingAnimation;
    struct MoonTimeline* BounceTimeline;
    struct MoonTimeline* SoftBodySlamTimeline;
    struct MoonTimeline* HardBodySlamTimeline;
    struct MoonTimeline* ShakeTimeline;
    struct FloatAnimationParameter* FallSpeedParameter;
    int32_t AnimationPriority;
    struct RootMotionProcessorData* LandRootMotion;
    float CollisionHitStop;
    struct GameObject* ImpactEffect;
    float MinBounceForce;
    float MaxBounceForce;
    float WallRepelForce;
    float BounceEnergyConservation;
    bool LooseExtraEnergyWhenHitWall;
    float ExtraEnergyPercentageTooLooseWhenHitWall;
    float OutOfCameraViewDecelerationX;
    float OutOfCameraViewDecelerationY;
    struct ActiveAnimationHandle m_animation;
    struct Locomotion* m_locomotion;
    ReactionFallingBehaviour_FallState__Enum m_state;

    struct Vector3 m_collisionNormal;
    float m_collisionTimer;
    struct Vector2 m_bounceSpeed;
    float m_effectInstantiationTimer;
    bool m_playedShake;
    float m_bounceMultiplier;
    bool m_shouldDoUpToDownTransition;
    bool m_hasDoneUpToDownTransition;
    bool m_useShorLandAnimTrigger;
    bool m_hasHardBodySlamTimeline;
    bool m_hasSoftBodySlamTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
