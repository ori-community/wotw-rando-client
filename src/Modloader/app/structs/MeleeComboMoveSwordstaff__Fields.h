#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct MeleeComboMoveSword;
struct MoonTimeline;
struct EventTriggerAnimator;
struct SphereCollider;
struct MeleeWeaponSwordstaff;
struct HammerTrail;
struct Transform;
struct MeleeComboMoveSwordstaff__Fields {
    struct MeleeComboMove__Fields _;
    bool ModifyHorizontalMovementSettings;
    bool ModifyGravitySettings;
    float GravityStrength;
    float EnterMoveVelocityMultiplierX;
    float EnterMoveVelocityMultiplierUp;
    float EnterMoveVelocityMultiplierDown;
    float EnterMoveVelocityMultiplierUpAdd;
    float EnterMoveVelocityMultiplierDownAdd;
    DamageWeight__Enum DamageWeight;

    float Damage;
    struct Vector2 KickbackDirection;
    float KickbackStrength;
    float DisableEnemyFallingDuration;
    float AnimationSpeedMultiplier;
    struct SoundProvider* AttackSound;
    struct SoundProvider* HitSound;
    struct GameObject* BlockEffect;
    struct GameObject* ShockWave;
    bool ShockWaveShouldFollowOri;
    float ShockWaveFollowStep;
    float OffsetScale;
    struct Vector3 ShockWaveOffsetAbs;
    struct Vector3 ShockWaveOffsetSigned;
    bool AffectedByRapidAttack;
    struct MeleeComboMoveSword* RapidAttackShardNextMove;
    struct Vector3 m_shockWaveOffsetSigned;
    struct MoonTimeline* AttackTimeline;
    struct EventTriggerAnimator* SpawnEffectsTrigger;
    struct EventTriggerAnimator* AttackBoostTrigger;
    struct EventTriggerAnimator* ApplySettingsTrigger;
    bool m_appliedSettings;
    bool ResetBoostOnGround;
    float m_lastUseBoostTime;
    bool IsBoostAdditiveX;
    bool IsBoostAdditiveY;
    float BoostY;
    float BoostX;
    struct SphereCollider* AttackTrigger;
    struct MeleeWeaponSwordstaff* m_swordstaffWeapon;
    bool m_inMove;
    bool m_allowContinuation;
    bool m_oneTimeOnCollisionEffectPlayed;
    bool m_hasRapidShard;
    bool m_attackSegmentEnded;
    float m_lastInterruptionTime;
    struct HammerTrail* m_currentTrail;
    float m_effectiveAnimationSpeedMultiplier;
    struct Transform* m_currentShockwaveTransform;
    struct Nullable_1_UnityEngine_Vector3_ m_prevCheckCenter;
    bool IsGroundMove;
    bool m_rootMotionDisabledByDefault;
    float KnockbackAddX;
    float KnockbackAddY;
    bool IsKnockbackAdditiveX;
    bool IsKnockbackAdditiveY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/MeleeComboMoveSword.h>
#include <Modloader/app/structs/MeleeWeaponSwordstaff.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSwordstaff__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSwordstaff__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSwordstaff__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
