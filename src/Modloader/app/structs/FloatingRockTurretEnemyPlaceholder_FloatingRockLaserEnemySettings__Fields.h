#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float ChargeDuration;
    float ShootingDuration;
    float ShootingForce;
    float SpringForce;
    float Drag;
    float DisolveDistance;
    float TriggerDistance;
    float ProjectileSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
