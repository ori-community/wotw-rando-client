#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct LaserShieldDamageReceiver;
struct LaserShieldPieceProjectile;
struct LaserShieldRotationController;
struct LaserShooterRockSpawnPoint__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* EffectTimeline;
    struct EventTriggerAnimator* SpawnTrigger;
    struct LaserShieldDamageReceiver* m_piece;
    float m_projectileSpeed;
    struct LaserShieldPieceProjectile* m_prefab;
    struct LaserShieldRotationController* m_shieldController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterRockSpawnPoint__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterRockSpawnPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterRockSpawnPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
