#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_DEFINED
struct DeathStartEffectSpawnSetting;
struct CharacterPlatformMovement;
struct Locomotion;
struct TentacleEntity;
struct TentacleHitReaction;
struct TentacleDeathBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct CharacterPlatformMovement* m_platformMovement;
    struct Locomotion* m_locomotion;
    bool m_waitingForDeath;
    struct TentacleEntity* m_tentacleEntity;
    struct TentacleHitReaction* m_hitReaction;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/TentacleHitReaction.h>
#endif
#undef IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleDeathBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleDeathBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
