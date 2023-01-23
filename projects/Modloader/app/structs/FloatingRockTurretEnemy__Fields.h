#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_DEFINED
struct FloatingRockTurretEnemy_States;
struct FloatingRockTurrentEnemySettings;
struct FloatingRockTurretEnemyAnimations;
struct CharacterAnimationSystem;
struct PrefabSpawner;
struct SoundProvider;
struct ProjectileSpawner;
struct RigidbodyMovement;
struct SpriteRotationController;
struct FloatingRockTurretEnemyEffects;
struct BaseAnimator;
struct FloatingRockTurretEnemy__Fields {
    struct Enemy2D__Fields _;
    struct FloatingRockTurretEnemy_States* State;
    struct FloatingRockTurrentEnemySettings* Settings;
    struct FloatingRockTurretEnemyAnimations* Animations;
    struct FloatingRockTurretEnemyAnimations* AnimationsB;
    struct FloatingRockTurretEnemyAnimations* AnimationsC;
    struct CharacterAnimationSystem* AnimationB;
    struct CharacterAnimationSystem* AnimationC;
    struct PrefabSpawner* ChargingEffect;
    struct PrefabSpawner* ShootingEffect;
    struct SoundProvider* FormingSound;
    struct SoundProvider* ShootingSound;
    struct SoundProvider* DeformingSound;
    struct ProjectileSpawner* ProjectileSpawner;
    struct RigidbodyMovement* Movement;
    struct SpriteRotationController* SpriteRotation;
    struct FloatingRockTurretEnemyEffects* Effects;
    struct BaseAnimator* RespawnAnimator;
    bool m_timedRespawn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/FloatingRockTurrentEnemySettings.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyAnimations.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyEffects.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy_States.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/RigidbodyMovement.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpriteRotationController.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockTurretEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockTurretEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockTurretEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
