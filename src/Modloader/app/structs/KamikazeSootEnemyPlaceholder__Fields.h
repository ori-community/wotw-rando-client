#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_DEFINED
struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings;
struct GameObject;
struct KamikazeSootEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings* Settings;
    struct GameObject* Prefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings.h>
#endif
#undef IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeSootEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
