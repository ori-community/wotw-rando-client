#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields {
    float Health;
    float Damage;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    bool EnableSpitAttack;
    bool EnableStabAttack;
    bool IsObstacle;
    float HeadDamageMultiplier;
    float MeleeAttackDelay;
    float SpitAttackDelay;
    float SpitToMeleeDelay;
    float SpeedMultiplier;
    float AttackSpeedMultiplier;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
