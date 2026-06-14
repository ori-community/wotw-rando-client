#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct DeathStartEffectSpawnSetting;
struct SpikeSlugFallReactionBehaviour;
struct SpikeSlugHitReactionBehaviour;
struct CharacterPlatformMovement;
struct SpikeSlugLocomotion;
struct GameObject;
struct Transform;
struct SpikeSlugDeathReaction__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* Death;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct SpikeSlugFallReactionBehaviour* m_fallBehaviour;
    struct SpikeSlugHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct SpikeSlugLocomotion* m_locomotion;
    bool m_waitingForDeath;
    int32_t MaxDeathBounces;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct MoonTimeline* HitShake;
    struct GameObject* FireDeathEffect;
    struct Transform* m_fireDeathEffectInstance;
    bool m_isBombSlug;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeSlugDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
