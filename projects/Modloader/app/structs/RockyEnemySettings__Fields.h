#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemySettings__Fields_DEFINED
struct ActionMethod;
struct __declspec(align(8)) RockyEnemySettings__Fields {
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
    float CloseDistance;
    float OpenDistance;
    float AnticipationDuration;
    float OpeningDuration;
    float ClosingDuration;
    float OnDamageCloseDuration;
    float MinimumClosedDuration;
    float TurnToEnemyTimeOffsetSinceOpening;
    float AlmostStillSensitivity;
    struct ActionMethod* OnClosedDamageAction;
    struct ActionMethod* OnClosedDeathAction;
    struct ActionMethod* OnOpenDamageAction;
    struct ActionMethod* OnOpenDeathAction;
};
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
