#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct GameObject;
struct __declspec(align(8)) StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float WalkSpeed;
    float ProjectileSpeed;
    struct GameObject* Projectile;
    bool SpawnProjectileOnDeath;
};
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
