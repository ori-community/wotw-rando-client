#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_DEFINED
struct Transform;
struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings;
struct GameObject;
struct FishEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct Transform* WanderTarget;
    struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings* Settings;
    struct GameObject* FishEnemy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/FishEnemyPlaceholder_FishEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
