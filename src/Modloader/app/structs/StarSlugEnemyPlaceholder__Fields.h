#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_DEFINED
struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings;
struct GameObject;
struct StarSlugEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings* Settings;
    struct GameObject* StarSlugEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder_StarSlugEnemyPlaceholderSettings.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
