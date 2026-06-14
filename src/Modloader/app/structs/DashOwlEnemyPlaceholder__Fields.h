#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_DEFINED
struct DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings;
struct GameObject;
struct DashOwlEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings* Settings;
    struct GameObject* DashOwlEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/DashOwlEnemyPlaceholder_DashOwlEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
