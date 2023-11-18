#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_DEFINED
struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings;
struct GameObject;
struct Transform__Array;
struct RammingEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings* Settings;
    struct GameObject* RammingEnemy;
    struct Transform__Array* Zones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
