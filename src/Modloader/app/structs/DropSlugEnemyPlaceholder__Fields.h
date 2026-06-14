#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_DEFINED
struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings;
struct EntityPlaceholderScalingData;
struct GameObject;
struct DropSlugEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings* Settings;
    struct EntityPlaceholderScalingData* Scaling;
    struct GameObject* DropOwlEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
