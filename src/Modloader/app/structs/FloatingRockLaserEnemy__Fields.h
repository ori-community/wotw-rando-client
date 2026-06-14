#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_DEFINED
struct FloatingRockLaserEnemy_States;
struct FloatingRockLaserEnemySettings;
struct FloatingRockLaserEnemyAnimations;
struct CharacterAnimationSystem;
struct PrefabSpawner;
struct ProjectileSpawner;
struct RigidbodyMovement;
struct SoundSource;
struct AnimationCurve;
struct BlockableLaser;
struct FloatingRockLaserEnemy__Fields {
    struct Enemy2D__Fields _;
    struct FloatingRockLaserEnemy_States* State;
    struct FloatingRockLaserEnemySettings* Settings;
    struct FloatingRockLaserEnemyAnimations* Animations;
    struct FloatingRockLaserEnemyAnimations* AnimationsB;
    struct FloatingRockLaserEnemyAnimations* AnimationsC;
    struct CharacterAnimationSystem* AnimationB;
    struct CharacterAnimationSystem* AnimationC;
    struct PrefabSpawner* ChargingEffect;
    struct PrefabSpawner* ShootingEffect;
    struct ProjectileSpawner* ProjectileSpawner;
    struct RigidbodyMovement* Movement;
    struct SoundSource* ChargingSound;
    struct SoundSource* ShootingSound;
    struct SoundSource* LaserSound;
    struct SoundSource* IdleSound;
    struct SoundSource* LaserHitSound;
    struct AnimationCurve* LaserThicknessCurve;
    struct AnimationCurve* LaserAngleOverTimeCurve;
    struct BlockableLaser* Laser;
    struct LayerMask LaserLayerMask;
    float m_laserSpeed;
    struct Vector3 m_laserDirection;
    float m_laserRotationSpeed;
    struct Vector3 m_laserStartPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BlockableLaser.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyAnimations.h>
#include <Modloader/app/structs/FloatingRockLaserEnemySettings.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy_States.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/RigidbodyMovement.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockLaserEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/FloatingRockLaserEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockLaserEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
