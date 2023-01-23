#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour_DiveAttackState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_DEFINED
struct RootMotionProcessorData;
struct MoonTimeline;
struct EventTriggerAnimator;
struct SplitTurnAnimationMoonTimeline;
struct SphereCollider;
struct SkeetoHitReaction;
struct BatchedSpherecast;
struct RaycastHit__Array;
struct SpherecastCommand__Array;
struct Rigidbody;
struct SkeetoDiveAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct RootMotionProcessorData* RootMotionSetting;
    bool AttackOnlyTargetsBelow;
    float MinXDistanceToTarget;
    float MinYDistanceToTarget;
    bool FailIfOffScreen;
    struct MoonTimeline* FlipTimeline;
    struct EventTriggerAnimator* FlipTrigger;
    bool UnlockLookDirectionOnExit;
    struct MoonTimeline* AnticipationTimeline;
    struct MoonTimeline* AttackTimeline;
    float DashSpeed;
    float DashTargetArriveDistance;
    float AttackAcceleration;
    float MaxAttackLoopTime;
    float Deceleration;
    float TurningSpeed;
    struct SplitTurnAnimationMoonTimeline* ResolveAnimation;
    float WallHitDotTreshold;
    struct MoonTimeline* HitWallTimeline;
    float StunTime;
    struct MoonTimeline* StunTimeline;
    struct MoonTimeline* HitWallResolveTimeline;
    struct MoonTimeline* HitWallBackwardTimeline;
    float BounceOffWallAmountForStun;
    int32_t AttackTokensRequired;
    struct SphereCollider* ClearanceRequired;
    bool DebugPauseOnFlipTowardsTarget;
    bool DebugPauseOnAttackAnticipation;
    bool DebugPauseOnAttackLoop;
    bool DebugPauseOnAttackResolve;
    bool DebugPauseOnHitWallHit;
    bool DebugPauseOnHitWallStunnedLoop;
    bool DebugPauseOnHitWallResolve;
    bool DebugPauseOnHitWallBackward;
    bool DebugPauseOnTargetLost;
    SkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;

    struct SkeetoHitReaction* m_hitReaction;
    struct BatchedSpherecast* m_batchedRaycasts;
    struct RaycastHit__Array* m_hits;
    struct SpherecastCommand__Array* m_commands;
    float m_timeInState;
    struct MoonTimeline* m_currentTimeline;
    struct Vector2 m_attackDirection;
    struct Vector2 m_attackVelocity;
    float m_targetLookDirection;
    struct Rigidbody* m_rigidbody;
    struct Vector3 _InitialTargetPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BatchedSpherecast.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/SkeetoHitReaction.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoDiveAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoDiveAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
