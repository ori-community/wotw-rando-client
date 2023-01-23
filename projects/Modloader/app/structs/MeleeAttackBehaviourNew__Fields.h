#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/GroundSurroundingsSensor.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_DamageDirectionType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew_DamageDirectionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_GroundSurroundingsSensor_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct CancelableAnimator__Array;
struct MeleeAttackBehaviourNew_Attack__Array;
struct MoonFloat;
struct AnimationCurve;
struct GameObject;
struct RootMotionProcessorData;
struct PlayerInsideZoneChecker;
struct TimelineEventTrigger__Array;
struct EventTriggerAnimator__Array;
struct Locomotion;
struct ILocomotionTurningHandler;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct DamageOwner;
struct BlockDamageInterruptionHandler;
struct MeleeAttackBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    struct LegacyTimelineSequence* AttackTimeline;
    struct LegacyTimelineSequence* WallRecoil;
    struct MoonTimeline* AttackTimelineNew;
    struct MoonTimeline* WallRecoilNew;
    bool ShouldSucceedOnAttackTimelineEnd;
    struct CancelableAnimator__Array* m_cancelableAnimators;
    struct MeleeAttackBehaviourNew_Attack__Array* Attacks;
    float DamageAmount;
    bool UseDamageAmountOverride;
    struct MoonFloat* DamageAmountOverride;
    DamageType__Enum DamageType;

    DamageLayerMask__Enum DamageLayerMask;

    DamageWeight__Enum DamageWeight;

    struct AnimationCurve* KickbackCurve;
    float DamageKickbackStrength;
    struct GameObject* DamageReceivedEffectPrefab;
    struct GameObject* DamageBlockedEffectPrefab;
    MeleeAttackBehaviourNew_DamageDirectionType__Enum DamageDirection;

    bool LookTowardsTarget;
    struct RootMotionProcessorData* RootMotion;
    struct GroundSurroundingsSensor Surroundings;
    bool StickToGround;
    bool m_prevStickStatus;
    bool StopAtLedge;
    bool StopAtBackLedge;
    float PositionPredictionTime;
    bool RequiresDirectLineOfSight;
    bool _Cancellable_k__BackingField;
    struct PlayerInsideZoneChecker* AttackZoneChecker;
    struct Vector2 InsideAreaRootMultiplier;
    bool NonInterruptableBehaviour;
    struct TimelineEventTrigger__Array* PauseBehaviourTreeEvents;
    struct EventTriggerAnimator__Array* PauseBehaviourTreeEventsNew;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Vector2 m_targetDir;
    int32_t m_damageID;
    bool m_interruptable;
    bool m_recoiled;
    float m_recoilColliderMinGroundDistance;
    bool m_shouldEnd;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct PlatformMovement* m_platformMovement;
    int32_t m_cancelable;
    struct DamageOwner* _DamageOwner_k__BackingField;
    struct BlockDamageInterruptionHandler* m_blockingHandler;
    int32_t m_standingOnLedge;
    int32_t m_standingOnLedgeRootMotion;
    int32_t m_standingBackLedgeRootMotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CancelableAnimator__Array.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MeleeAttackBehaviourNew_Attack__Array.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#endif
#undef IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeAttackBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeAttackBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
