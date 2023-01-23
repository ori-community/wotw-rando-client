#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct SpikeSlugFallReactionBehaviour;
struct SpikeSlugLocomotion;
struct EntityDamageEvent;
struct GiantSlugHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields _;
    struct MoonTimeline* HitGround;
    struct MoonTimeline* HitAir;
    struct MoonTimeline* HitGroundAdditive;
    struct MoonTimeline* HitAirAdditive;
    struct MoonTimeline* m_currentTimeline;
    struct SpikeSlugFallReactionBehaviour* m_fallBehaviour;
    struct SpikeSlugLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float KickbackMultiplier;
    float WindKickbackMultiplier;
    float AirHorziontalKnockbackMultiplier;
    float MinForceWhenJuggling;
    float AirSpinRotationAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#endif
#undef IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GiantSlugHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
