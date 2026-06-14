#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_CrabEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_CrabEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct Event_1;
struct ReactionFallingBehaviour;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_;
struct CrabHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_CrabEntity___Fields _;
    struct MoonTimeline* HitFront;
    struct MoonTimeline* HitBack;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* HitAdditive;
    struct MoonTimeline* Knockup;
    struct MoonTimeline* Knockback;
    struct MoonTimeline* Knockforward;
    struct MoonTimeline* HitAirAdditive;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
    struct Event_1* OnAnyHitEvent;
    struct MoonTimeline* ShakeTimeline;
    struct MoonTimeline* m_currentTimeline;
    struct ReactionFallingBehaviour* m_fallBehaviour;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_exitEarly;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float OnGroundKnockbackMultiplier;
    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CrabHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
