#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_DEFINED
struct __declspec(align(8)) ChargingSootEnemySettings__Fields {
    float Acceleration;
    float Deceleration;
    float WalkSpeed;
    float RunSpeed;
    float AlertDuration;
    float IdleDuration;
    float WalkDuration;
    float SeePlayerDistance;
    float MinChargeDistance;
    float ChargeDuration;
    float ShootingDuration;
    float StunnedDuration;
    float ThrownDrag;
    float ProjectileSpeed;
    float Gravity;
    float ProjectileGravity;
    float ProjectileDamage;
    bool SpreadShot;
};
#endif
#if !defined(IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChargingSootEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/ChargingSootEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargingSootEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
