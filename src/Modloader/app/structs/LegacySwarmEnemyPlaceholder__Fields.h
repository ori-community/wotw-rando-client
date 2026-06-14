#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_DEFINED
struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings;
struct GameObject;
struct List_1_System_Int32_;
struct LegacySwarmEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings* Settings;
    struct GameObject* SwarmEnemy;
    struct List_1_System_Int32_* m_childComponentEnemies;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
