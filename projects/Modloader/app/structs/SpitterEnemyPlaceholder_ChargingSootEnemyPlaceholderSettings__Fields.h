#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct Transform__Array;
struct ActionMethod;
struct __declspec(align(8)) SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float WalkSpeed;
    float RunSpeed;
    float IdleDuration;
    float WalkDuration;
    float SeePlayerDistance;
    float MinChargeDistance;
    float ShootingDuration;
    float ProjectileSpeed;
    float Gravity;
    float ProjectileGravity;
    bool SpreadShot;
    struct Transform__Array* ActionZones;
    struct ActionMethod* EnterZoneAction;
};
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/DropLootSettings.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
