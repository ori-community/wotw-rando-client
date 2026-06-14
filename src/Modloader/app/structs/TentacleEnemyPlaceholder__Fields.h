#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_DEFINED
struct TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings;
struct GameObject;
struct TentacleEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings* Settings;
    struct GameObject* TentacleEnemy;
    float TentacleStartScale;
    float TentacleEndScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TentacleEnemyPlaceholder_TentacleEnemyPlaceholderSettings.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemyPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemyPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemyPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
