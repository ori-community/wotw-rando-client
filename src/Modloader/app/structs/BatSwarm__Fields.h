#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarm__Fields_DEFINED)
#include <Modloader/app/structs/UberSwarm__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberSwarm__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BatSwarm__Fields_DEFINED
struct GameObject;
struct BatSwarmerSettings;
struct Transform;
struct BatSwarm__Fields {
    struct UberSwarm__Fields _;
    struct GameObject* BatPrefab;
    struct BatSwarmerSettings* SettingsIdle;
    struct BatSwarmerSettings* SettingsAttack;
    struct BatSwarmerSettings* SettingsFlee;
    struct BatSwarmerSettings* SettingsCarryStickyMine;
    struct Transform* IdleLocation;
    float BatHealth;
    uint32_t NumToSpawn;
    uint32_t NumInNest;
    uint32_t m_numKilled;
    float SpawnRadius;
    float SpawnInterval;
    float SpawnIntervalInitial;
    float m_spawnTimer;
    float TerritoryRadius;
    struct Vector2 m_swarmCenter;
    struct Vector2 m_pathTarget;
    struct Vector3 m_swarmDeathPoint;
    float m_deathPointIntensity;
    float AvoidMultiplier;
    float AvoidTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarm__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatSwarm__Fields_FWDDECL
#include <Modloader/app/structs/BatSwarmerSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BatSwarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarm__Fields_FWDDECL)
#include <Modloader/app/structs/BatSwarm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
