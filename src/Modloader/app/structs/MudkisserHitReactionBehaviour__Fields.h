#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_MudkisserGrayboxEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_MudkisserGrayboxEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MudkisserFallReactionBehaviour;
struct VolumeEntityLocomotion;
struct EntityDamageEvent;
struct MudkisserGrayboxEntity;
struct MudkisserHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_MudkisserGrayboxEntity___Fields _;
    struct MoonTimeline* HitGroundStun;
    struct MoonTimeline* HitGroundAdditive;
    struct MoonTimeline* HitAirAdditive;
    struct MudkisserFallReactionBehaviour* m_fallBehaviour;
    struct VolumeEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float VulnerabilityTime;
    int32_t HitsToReachInvulnerability;
    float InulnerabilityTime;
    float KickbackMultiplier;
    float AirHorizontalKnockbackMultiplier;
    float MinForceWhenJuggling;
    float GroundHorizontalKnockbackMultiplier;
    float KickbackMultiplierProtected;
    float AirHorizontalKnockbackMultiplierProtected;
    float MinForceWhenJugglingProtected;
    float GroundHorizontalKnockbackMultiplierProtected;
    float AirComboPullInDistanceX;
    float AirComboPullInDistanceY;
    float AirComboPullInValue;
    struct MoonTimeline* m_currentTimeline;
    float WaterDashKnockbackMultiplier;
    float BashMultiplier;
    struct MudkisserGrayboxEntity* m_mudkisserEntity;
    int32_t m_vulnerabilityHitsCounter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserGrayboxEntity.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MudkisserHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
