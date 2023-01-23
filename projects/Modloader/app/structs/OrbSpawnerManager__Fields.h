#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrbSpawnerManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrbSpawnerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_OrbSpawnerManager__Fields_DEFINED
struct GameObject;
struct OrbSpawnerSettingsOverride;
struct Queue_1_OrbSpawnerManager_ItemToSpawn_;
struct OrbSpawnerManager__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* SmallExpOrb;
    struct GameObject* MediumExpOrb;
    struct GameObject* LargeExpOrb;
    struct GameObject* EnergyPickup;
    struct GameObject* HealthPickup;
    struct OrbSpawnerSettingsOverride* GlobalEnemySettings;
    int32_t m_smallOrbXPAmount;
    int32_t m_mediumOrbXPAmount;
    int32_t m_largeOrbXPAmount;
    struct Queue_1_OrbSpawnerManager_ItemToSpawn_* Items;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_OrbSpawnerManager__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/OrbSpawnerSettingsOverride.h>
#include <Modloader/app/structs/Queue_1_OrbSpawnerManager_ItemToSpawn_.h>
#endif
#undef IL2CPP_STRUCT_OrbSpawnerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrbSpawnerManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OrbSpawnerManager__Fields_FWDDECL)
#include <Modloader/app/structs/OrbSpawnerManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrbSpawnerManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
