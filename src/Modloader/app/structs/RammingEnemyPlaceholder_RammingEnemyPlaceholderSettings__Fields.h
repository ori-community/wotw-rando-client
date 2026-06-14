#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    float AlertRange;
    bool CanDieToLevelUpBlast;
    struct DropLootSettings* LootSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
