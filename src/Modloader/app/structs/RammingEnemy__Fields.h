#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemy__Fields_DEFINED
struct RammingEnemyAnimations;
struct RammingEnemySettings;
struct RammingEnemySounds;
struct PrefabSpawner;
struct Transform__Array;
struct RammingEnemy_States;
struct RammingEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct RammingEnemyAnimations* Animations;
    struct RammingEnemySettings* Settings;
    struct RammingEnemySounds* Sounds;
    struct PrefabSpawner* HitWallEffect;
    struct Transform__Array* Zones;
    struct RammingEnemy_States* State;
    float IdleWaitTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemy__Fields_FWDDECL
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RammingEnemyAnimations.h>
#include <Modloader/app/structs/RammingEnemySettings.h>
#include <Modloader/app/structs/RammingEnemySounds.h>
#include <Modloader/app/structs/RammingEnemy_States.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
