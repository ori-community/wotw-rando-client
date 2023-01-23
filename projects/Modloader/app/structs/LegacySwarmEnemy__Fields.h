#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemy__Fields_DEFINED
struct LegacySwarmEnemyAnimations;
struct LegacySwarmEnemySettings;
struct LegacySwarmEnemyLootSettings;
struct OrbSpawner;
struct SoundSource;
struct LegacySwarmEnemy_States;
struct AnimationCurve;
struct LegacySwarmEnemyPlaceholder;
struct LegacySwarmEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct LegacySwarmEnemyAnimations* Animations;
    struct LegacySwarmEnemySettings* Settings;
    struct LegacySwarmEnemyLootSettings* Loot;
    struct OrbSpawner* OrbSpawner;
    struct SoundSource* Idle;
    struct SoundSource* Walking;
    bool CanFall;
    float Size;
    struct LegacySwarmEnemy_States* State;
    bool m_wasSpawned;
    struct AnimationCurve* SpeedXToRotation;
    struct AnimationCurve* SpeedYToRotation;
    float AirTiltAngle;
    float m_jumpDelay;
    struct LegacySwarmEnemyPlaceholder* Owner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LegacySwarmEnemyAnimations.h>
#include <Modloader/app/structs/LegacySwarmEnemyLootSettings.h>
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder.h>
#include <Modloader/app/structs/LegacySwarmEnemySettings.h>
#include <Modloader/app/structs/LegacySwarmEnemy_States.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
