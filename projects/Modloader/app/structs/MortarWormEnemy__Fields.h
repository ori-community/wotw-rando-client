#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemy__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/WormEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_WormEnemy__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_MortarWormEnemy__Fields_DEFINED
struct MortarWormSettings;
struct MortarWormEnemyAnimations;
struct PrefabSpawner;
struct SoundSource;
struct MortarWormEnemyProjectileSpawnerTransform;
struct WormHole;
struct Transform;
struct GameObject;
struct MortarWormEnemy_States;
struct ProjectileSpawner;
struct MortarWormTrajectoryHelper;
struct MortarWormEnemy__Fields {
    struct WormEnemy__Fields _;
    struct MortarWormSettings* Settings;
    struct MortarWormEnemyAnimations* Animations;
    struct PrefabSpawner* ChargingEffect;
    struct PrefabSpawner* EmergingEffect;
    struct PrefabSpawner* HidingEffect;
    struct PrefabSpawner* ShootingEffect;
    struct SoundSource* ChargingSound;
    struct SoundSource* EmergingSound;
    struct SoundSource* HidingSound;
    struct SoundSource* ShootingSound;
    struct MortarWormEnemyProjectileSpawnerTransform* Spawn;
    struct WormHole* WormHole;
    bool IsBlocked;
    struct Transform* ProjectileTrajectorySpawnPoint;
    struct GameObject* HideGroup;
    struct MortarWormEnemy_States* State;
    struct ProjectileSpawner* ProjectileSpawner;
    struct LayerMask RayTestLayerMask;
    struct MortarWormTrajectoryHelper* m_wormTrajectoryHelper;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormEnemy__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MortarWormEnemyAnimations.h>
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform.h>
#include <Modloader/app/structs/MortarWormEnemy_States.h>
#include <Modloader/app/structs/MortarWormSettings.h>
#include <Modloader/app/structs/MortarWormTrajectoryHelper.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WormHole.h>
#endif
#undef IL2CPP_STRUCT_MortarWormEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
