#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct ReactionFallingBehaviour;
struct GroundEntityLocomotion;
struct EntityDamageEvent;
struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_;
struct NickHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields _;
    struct MoonTimeline* HitFront;
    struct MoonTimeline* HitBack;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* HitAdditive;
    struct MoonTimeline* Knockup;
    struct MoonTimeline* Knockback;
    struct MoonTimeline* Knockforward;
    struct MoonTimeline* HitAirAdditive;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
    struct MoonTimeline* m_currentTimeline;
    struct ReactionFallingBehaviour* m_fallBehaviour;
    struct GroundEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float AirComboPullInDistanceY;
    float AirComboPullInValue;
    float AirComboPullInDistanceX;
    float AirHorizontalKnockbackMultiplier;
    float GroundHorizontalKnockbackMultiplier;
    float AirHorziontalKnockbackMultiplier;
    float MinForceWhenJuggling;
    float KickbackMultiplier;
    float KnockupMultiplier;
    float KnockupMax;
    float KickbackMax;
    struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_* DamageConditionsPreventingInterruption;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NickHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/NickHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NickHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
