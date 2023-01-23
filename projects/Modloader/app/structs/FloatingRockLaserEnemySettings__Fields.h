#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) FloatingRockLaserEnemySettings__Fields {
    float ChargeDuration;
    float ShootingDuration;
    float ShootingForce;
    float LaserForce;
    float SpringForce;
    float Drag;
    struct GameObject* Projectile;
    float ProjectileSpeed;
    float LaserDuration;
    float LaserChaseSpeed;
    float LaserChaseSpeedDistance;
    float LaserLength;
    float LaserDamage;
    float CloseDistance;
    float LaserAngularOffset;
    float ProjectileDamage;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockLaserEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockLaserEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockLaserEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
