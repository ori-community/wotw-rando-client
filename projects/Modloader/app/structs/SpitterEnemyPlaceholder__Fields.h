#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_DEFINED
struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings;
struct GameObject;
struct SpitterEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings* Settings;
    struct GameObject* ChargingSootEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
