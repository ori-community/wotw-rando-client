#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float AlertRange;
    float FallRange;
    float DropDistance;
    float Speed;
    float ExplosionDamage;
};
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
