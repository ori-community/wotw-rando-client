#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState_AttackType__Enum.h>
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState_AttackType__Enum_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct TentacleEnemy_MeleeAttackState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float PrepareSeekForce;
    float PrepareChargeForce;
    float AttackForce;
    float StabProbability;
    float StabChargeTimeMin;
    float StabChargeTimeMax;
    float CatchChargeTimeMin;
    float CatchChargeTimeMax;
    float StabDamage;
    float EvadeTrackingTreshold;
    struct SoundProvider* AttackSound;
    struct SoundProvider* ChargeSound;
    struct SoundProvider* HitGroundSound;
    struct GameObject* HitGorundParticleEffectPrefab;
    float m_timeToAttack;
    struct Vector3 m_attackDirection;
    struct Vector3 m_startAttackSeinPosition;
    bool m_tracingSein;
    TentacleEnemy_MeleeAttackState_AttackType__Enum m_currentAttackType;

    bool m_reset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_MeleeAttackState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_MeleeAttackState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
