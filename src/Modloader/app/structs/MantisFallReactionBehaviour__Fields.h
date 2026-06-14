#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_MantisFallReactionBehaviour_FallState__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonControllerColliderHit_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct LegacyTimelineSequence;
struct MoonAnimation;
struct FloatAnimationParameter;
struct RootMotionProcessorData;
struct GameObject;
struct Locomotion;
struct MantisHitReactionBehaviour;
struct MantisFallReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* LandSequenceNew;
    struct EventTriggerAnimator* EndLandEventTrigger;
    struct LegacyTimelineSequence* LandSequence;
    struct MoonTimeline* FallingTimeline;
    struct MoonTimeline* FallingUpToDownTimeline;
    struct MoonTimeline* FallingUpToDownFastTimeline;
    float VerticalSpeedToEnableUpToDownTransition;
    float VerticalSpeedToStartUpToDownTransition;
    struct MoonAnimation* FallingAnimation;
    bool LoopFallingAnimation;
    struct MoonTimeline* BounceTimeline;
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
    MantisFallReactionBehaviour_FallState__Enum m_state;

    struct MoonControllerColliderHit m_hit;
    float m_collisionTimer;
    struct Vector2 m_bounceSpeed;
    float m_effectInstantiationTimer;
    float m_bounceMultiplier;
    bool m_shouldDoUpToDownTransition;
    bool m_hasDoneUpToDownTransition;
    bool m_wasMovingDown;
    struct MantisHitReactionBehaviour* m_hitReaction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MantisFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
