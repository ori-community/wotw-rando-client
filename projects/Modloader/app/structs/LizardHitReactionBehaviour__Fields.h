#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_LizardEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_LizardEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_MoonTimeline_;
struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct Event_1;
struct AnimationPlayer;
struct MoonFloat;
struct ReactionFallingBehaviour;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct InterfaceCache;
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_;
struct LizardHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_LizardEntity___Fields _;
    struct MoonTimeline* HitFront;
    struct MoonTimeline* HitBack;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* HitAdditiveFromFront;
    struct MoonTimeline* HitAdditiveFromBack;
    struct MoonTimeline* Knockup;
    struct MoonTimeline* Knockback;
    struct MoonTimeline* Knockforward;
    struct List_1_Moon_Timeline_MoonTimeline_* SupressAdditivesDuring;
    struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_* CounterAttackBehaviours;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
    float HorizontalKnockbackMultiplier;
    struct Event_1* OnAnyHitEvent;
    bool DebugOnHit;
    bool m_exitEarly;
    struct AnimationPlayer* HitAdditiveFromFrontAnimPlayer;
    struct AnimationPlayer* HitAdditiveFromBackAnimPlayer;
    struct MoonFloat* m_hitAdditiveFrontWeight;
    struct MoonFloat* m_hitAdditiveBackWeight;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_currentSecondaryTimeline;
    struct ReactionFallingBehaviour* m_fallBehaviour;
    struct GroundEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    struct EntityWeightData_EntityWeightSettings WeightSettings;
    struct InterfaceCache* InterruptionBlockingTasksCache;
    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityBehaviourNode_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
