#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_RammingBehaviour__Fields_DEFINED
struct MoonVector3;
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct Transform;
struct PrefabSpawner;
struct BugHornEntity;
struct BlockDamageInterruptionHandler;
struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_;
struct StateMachine_2;
struct RammingBehaviour_States;
struct GroundEntityLocomotion;
struct RammingBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    struct MoonTimeline* TurnSlamChargeTimeline;
    struct MoonTimeline* SlamChargeTimeline;
    struct MoonTimeline* RammingLoopTimeline;
    struct MoonTimeline* KnockbackTimeline;
    struct MoonTimeline* RammingTurnTimeline;
    struct MoonTimeline* RammingToExhaustedTimeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* RammingTurnTriggers;
    struct MoonTimeline* RammingHitAdditiveTimeline;
    struct Transform* VFXHolder;
    float RammingEnduranceDuration;
    float MinRammingTimeBetweenTurns;
    float MaxSpeed;
    float Acceleration;
    float BrakingDeceleration;
    float MaxSpeedTurningAllowed;
    struct Vector2 WallKnockbackForce;
    float WallMinAngle;
    float DistanceMarginWithAllowedArea;
    float MinSpeedToTransitionToExhausted;
    float MaxSpeedToTransitionToExhausted;
    float RammingHitAnticDistance;
    bool RammingHitAnticEnabled;
    int32_t SlamChargeDamage;
    DamageWeight__Enum SlamChargeWeight;

    struct List_1_Moon_Timeline_EventTriggerAnimator_* SlamChargeEffectTriggers;
    struct PrefabSpawner* HitWallDamageDealer;
    int32_t HitWallDamage;
    DamageWeight__Enum HitWallWeight;

    struct BugHornEntity* m_hornBug;
    struct BlockDamageInterruptionHandler* m_blockingHandlerTurnSlamCharge;
    struct BlockDamageInterruptionHandler* m_blockingHandlerSlamCharge;
    struct BlockDamageInterruptionHandler* m_blockingHandlerRammingLoop;
    struct BlockDamageInterruptionHandler* m_blockingHandlerRammingTurn;
    struct BlockDamageInterruptionHandler* m_blockingHandlerRammingToExhausted;
    struct BlockDamageInterruptionHandler* m_blockingHandlerRammingHitAdditive;
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_* m_TimelineToInterruptionHandlerMap;
    struct StateMachine_2* m_stateMachine;
    struct RammingBehaviour_States* m_states;
    struct MoonTimeline* m_currentTimeline;
    struct GroundEntityLocomotion* m_groundLocomotion;
    float m_rammingTimeSinceLastTurn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/BugHornEntity.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RammingBehaviour_States.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RammingBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/RammingBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
