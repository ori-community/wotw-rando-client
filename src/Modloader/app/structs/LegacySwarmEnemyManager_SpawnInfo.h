#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_DEFINED
struct MoonGuid;
struct OrbSpawner;
struct GameObject;
struct LegacySwarmEnemyPlaceholder;
struct LegacySwarmEnemyManager_SpawnInfo {
    struct Vector3 Pos;
    struct Vector3 Velocity;
    struct MoonGuid* SceneRoot;
    int32_t LootAmount;
    struct OrbSpawner* OrbSpawner;
    struct GameObject* Child;
    float DamageOnTouch;
    struct LegacySwarmEnemyPlaceholder* Owner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/OrbSpawner.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemyManager_SpawnInfo_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
