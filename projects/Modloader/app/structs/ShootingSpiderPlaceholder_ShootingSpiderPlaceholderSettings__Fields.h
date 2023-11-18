#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct Rope;
struct PhysicalSystemManager;
struct __declspec(align(8)) ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    float ProjectileDamage;
    float ProjectileSpeed;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    struct Rope* Rope;
    struct PhysicalSystemManager* PhysicalSystem;
    bool SpreadShot;
};
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/Rope.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
