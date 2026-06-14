#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#include <Modloader/app/structs/MeleeComboMoveHammer_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboMoveHammer_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_DEFINED
struct HammerComboMove_BalancingData;
struct GameObject;
struct SoundProvider;
struct MoonTimeline;
struct EventTriggerAnimator;
struct HammerTrail;
struct Damage;
struct MeleeComboMoveHammer__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    float PrepareDuration;
    float ChargeDuration;
    struct HammerComboMove_BalancingData* Balancing;
    DamageWeight__Enum QuickAttackDamageWeight;

    DamageWeight__Enum ChargedAttackDamageWeight;

    struct Vector2 KickbackDirection;
    float QuickAttackKickbackStrength;
    float ChargedAttackKickBackStrength;
    float ChargedHitCameraShake;
    float ChargedAttackHammerScaleMultiplier;
    struct GameObject* ShockWave;
    struct GameObject* BlockEffect;
    struct GameObject* ChargedHitEffect;
    struct GameObject* GroundHitEffect;
    struct GameObject* ChargedGroundHitEffect;
    float CollisionSpeedTreshold;
    struct SoundProvider* HitSound;
    struct SoundProvider* ChargedHitSound;
    struct SoundProvider* AttackSound;
    struct SoundProvider* ChargedAttackSound;
    struct SoundProvider* GroundHitSound;
    struct SoundProvider* ChargedGroundHitSound;
    float GravityStrength;
    float DisableEnemyFallingDuration;
    struct MoonTimeline* PrepareTimeline;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* ChargeTimeline;
    struct EventTriggerAnimator* SpawnEffectsTrigger;
    struct MoonTimeline* GroundHitResolveTimeline;
    float m_transitionTime;
    MeleeComboMoveHammer_State__Enum m_currentState;

    float m_currentStateTime;
    bool m_isChargedHit;
    struct HammerTrail* m_currentTrail;
    struct Damage* m_damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerComboMove_BalancingData.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammer__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
