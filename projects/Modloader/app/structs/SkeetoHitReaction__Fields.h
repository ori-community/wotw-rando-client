#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SkeetoEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SkeetoEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoHitReaction__Fields_DEFINED
struct MoonTimeline;
struct SkeetoLocomotion;
struct EntityDamageEvent;
struct Event_1;
struct SkeetoHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields _;
    struct MoonTimeline* HitGround;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* HitGroundAdditive;
    struct MoonTimeline* HitAirAdditive;
    struct MoonTimeline* m_currentTimeline;
    struct SkeetoLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float KickbackForceMultiplier;
    float AirHorziontalKnockbackMultiplier;
    float MinForceWhenJuggling;
    float AirSpinRotationAmount;
    bool CanBeInterruptedByVeryLightDamage;
    bool ResetRotationByInterruptingHit;
    struct Event_1* OnAnyHitEvent;
    bool m_lockDamageKickback;
    bool m_useDamageTypePreventingInterruption;
    float m_timeFromKickback;
    bool m_exitEarly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
