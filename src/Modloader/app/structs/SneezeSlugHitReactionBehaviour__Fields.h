#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct AnimationPlayer;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct Event_1;
struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_;
struct ReactionFallingBehaviour;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_;
struct InterfaceCache;
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_;
struct SneezeSlugHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields _;
    struct MoonTimeline* HitFront;
    struct MoonTimeline* HitBack;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* Knockup;
    struct MoonTimeline* Knockback;
    struct MoonTimeline* Knockforward;
    struct MoonTimeline* HitAirAdditive;
    struct MoonTimeline* HitBlastAdditive;
    struct MoonTimeline* HitAdditiveFront;
    struct MoonTimeline* HitAdditiveBack;
    struct MoonTimeline* HitAdditiveScaleOnly;
    struct AnimationPlayer* HitAdditiveFrontAnimPlayer;
    struct AnimationPlayer* HitAdditiveBackAnimPlayer;
    struct AnimationPlayer* HitAdditiveScaleOnlyAnimPlayer;
    struct AnimationPlayer* HitAirAdditiveAnimPlayer;
    struct AnimationPlayer* HitBlastAdditiveAnimPlayer;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* BlastInflateTriggers;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
    float MinYForceForKnockup;
    float MaxYForceWhenNotKnockup;
    struct Event_1* OnAnyHitEvent;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentSecondaryTimeline;
    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* m_additiveWeights;
    struct ReactionFallingBehaviour* m_fallBehaviour;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_BlastInflateActive;
    bool m_exitEarly;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_* DamageConditionsPreventingInterruption;
    struct InterfaceCache* InterruptionBlockingTasksCache;
    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
