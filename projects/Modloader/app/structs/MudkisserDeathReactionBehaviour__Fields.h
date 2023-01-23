#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_MudkisserGrayboxEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_MudkisserGrayboxEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MudkisserFallReactionBehaviour;
struct MudkisserHitReactionBehaviour;
struct CharacterPlatformMovement;
struct VolumeEntityLocomotion;
struct MudkisserDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_MudkisserGrayboxEntity___Fields _;
    struct MoonTimeline* DeathWaterTimeline;
    struct MoonTimeline* DeathGroundTimeline;
    struct MoonTimeline* DeathAirTimeline;
    struct MoonTimeline* m_currentTimeline;
    struct MudkisserFallReactionBehaviour* m_fallBehaviour;
    struct MudkisserHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct VolumeEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    float DeathKickbackMaxMagnitude;
    float Gravity;
    bool FaceAttack;
    bool ShouldWaitForDeathOnGround;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>
#include <Modloader/app/structs/MudkisserHitReactionBehaviour.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
