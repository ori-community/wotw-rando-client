#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float ChargeDuration;
    float ShootingDuration;
    float ShootingForce;
    float LaserForce;
    float SpringForce;
    float Drag;
    float ProjectileSpeed;
    float LaserDuration;
    float LaserChaseSpeed;
    float LaserChaseSpeedDistance;
    float LaserLength;
    float LaserDamage;
    float CloseDistance;
    float TriggerDistance;
    float LaserAngularOffset;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
