#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct AnimationPlayer;
struct MoonFloat;
struct SpikeSlugFallReactionBehaviour;
struct SpikeSlugLocomotion;
struct EntityDamageEvent;
struct ProtectedByShellCondition;
struct GameObject;
struct Event_1;
struct InterfaceCache;
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_;
struct SpikeSlugHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields _;
    struct MoonTimeline* HitOnGround;
    struct EventTriggerAnimator* HitOnGroundStopOverride;
    struct MoonTimeline* HitAdditiveFront;
    struct MoonTimeline* HitAdditiveBack;
    struct AnimationPlayer* HitAdditiveFrontAnimPlayer;
    struct AnimationPlayer* HitAdditiveBackAnimPlayer;
    struct MoonTimeline* HitShelledFromFront;
    struct MoonTimeline* HitShelledFromBack;
    struct MoonTimeline* HitShelledFromAbove;
    struct MoonTimeline* HitShelledFromBelow;
    struct MoonFloat* m_hitAdditiveFrontWeight;
    struct MoonFloat* m_hitAdditiveBackWeight;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentSecondaryTimeline;
    struct SpikeSlugFallReactionBehaviour* m_fallBehaviour;
    struct SpikeSlugLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    struct Vector2 CeilingKnockupMultiplier;
    struct Vector2 WallKnockupMultiplier;
    float MaxKnockupForce;
    float WindKickbackMultiplier;
    float SpinRotationSpeed;
    struct MoonTimeline* HitShake;
    bool IsShellVersionOfSlug;
    struct ProtectedByShellCondition* ShellCondition;
    float ForceMultiplierWhenShellIsDestroyed;
    struct GameObject* ShatterShellEffectsPrefab;
    struct Event_1* OnAnyHitEvent;
    bool DebugHitDirections;
    struct InterfaceCache* InterruptionBlockingTasksCache;
    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
    bool m_exitEarly;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProtectedByShellCondition.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
