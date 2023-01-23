#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_DEFINED
struct ProjectileSpawner;
struct SoundProvider;
struct TentacleEnemy_SpitAttackState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float ShootDelayMin;
    float ShootDelayMax;
    float ProjectileGravity;
    float ProjectileSpeed;
    struct ProjectileSpawner* ProjectileSpawner;
    struct LayerMask SweepTestLayerMask;
    float HeadOrientationForce;
    float PushBackForce;
    float VibrateAngle;
    float ChargeDiminishFactor;
    struct SoundProvider* AttackSound;
    struct SoundProvider* ChargeSound;
    float m_timeToShoot;
    float m_currentDelay;
    float m_originalHeadMass;
    bool m_updateSpawner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_FWDDECL
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_SpitAttackState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_SpitAttackState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_SpitAttackState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
