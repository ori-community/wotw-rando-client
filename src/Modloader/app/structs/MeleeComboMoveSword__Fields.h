#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSword__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSword__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSword__Fields_DEFINED
struct SwordComboMove_BalancingData;
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct SoundProvider;
struct MeleeWeaponSword;
struct HammerTrail;
struct Transform;
struct Damage;
struct RaycastHit__Array;
struct MeleeComboMoveSword__Fields {
    struct MeleeComboMove__Fields _;
    struct SwordComboMove_BalancingData* Balancing;
    float Damage;
    DamageWeight__Enum DamageWeight;

    struct Vector2 KickbackDirection;
    float KickbackStrength;
    float DisableEnemyFallingDuration;
    bool IsGroundMove;
    bool StopDecentAboveGround;
    bool ModifyHorizontalMovementSettings;
    bool ModifyGravitySettings;
    float GravityStrength;
    float EnterMoveVelocityMultiplierX;
    float EnterMoveVelocityMultiplierUp;
    float EnterMoveVelocityMultiplierDown;
    float EnterMoveVelocityMultiplierUpAdd;
    float EnterMoveVelocityMultiplierDownAdd;
    float KnockbackAddX;
    float KnockbackAddY;
    bool IsKnockbackAdditiveX;
    bool IsKnockbackAdditiveY;
    struct Vector2 OnHitRootMotionMultiplier;
    float BoostY;
    float BoostX;
    bool IsBoostAdditiveX;
    bool IsBoostAdditiveY;
    bool ResetBoostOnGround;
    float BoostMultiplierWhenNearEnemy;
    float EnemyRangeCheckDistance;
    struct MoonTimeline* AttackTimeline;
    struct EventTriggerAnimator* SpawnEffectsTrigger;
    struct EventTriggerAnimator* AttackBoostTrigger;
    struct EventTriggerAnimator* ApplySettingsTrigger;
    struct GameObject* BlockEffect;
    struct GameObject* ShockWave;
    bool ShockWaveShouldFollowOri;
    float ShockWaveFollowStep;
    float OffsetScale;
    struct Vector3 ShockWaveOffsetAbs;
    struct Vector3 ShockWaveOffsetSigned;
    struct SoundProvider* AttackSound;
    struct SoundProvider* HitSound;
    float AnimationSpeedMultiplier;
    bool AffectedByRapidAttack;
    bool m_applyOnHitRootMotionMultiplier;
    struct Vector3 m_shockWaveOffsetSigned;
    struct MeleeWeaponSword* m_swordWeapon;
    bool m_inMove;
    bool m_allowContinuation;
    bool m_hasRapidShard;
    bool m_attackSegmentEnded;
    bool m_wasInterrupted;
    float m_lastInterruptionTime;
    struct HammerTrail* m_currentTrail;
    float m_effectiveAnimationSpeedMultiplier;
    struct Transform* m_currentShockwaveTransform;
    struct Nullable_1_UnityEngine_Vector3_ m_prevCheckCenter;
    bool m_appliedSettings;
    float m_lastUseBoostTime;
    bool m_rootMotionDisabledByDefault;
    float m_previousAnticipationLandTime;
    struct Damage* m_damage;
    struct RaycastHit__Array* m_tempHits;
    float SlowDownOnGroundedSpeed;
    float m_lastTimeUsed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSword__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSword__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/MeleeWeaponSword.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SwordComboMove_BalancingData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSword__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSword__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSword__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSword__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSword__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
