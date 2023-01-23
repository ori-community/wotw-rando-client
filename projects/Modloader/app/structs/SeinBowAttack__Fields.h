#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationLayerContext.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinBowAttack_State__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SeinBowAttack_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_AnimationLayerContext_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinBowAttack__Fields_DEFINED
struct SeinBowAttack_BalancingData;
struct UpgradableMultiplier;
struct SeinBowAttack_Settings;
struct Kickback;
struct InstantiationRecycleHelper;
struct SoundProvider;
struct SoundSource;
struct RTPC;
struct Event_1;
struct MoonTimeline;
struct Transform;
struct IBowAttackable;
struct HashSet_1_Moon_ISuspendable_;
struct SeinBowMark;
struct List_1_Moon_ComboSystem_IComboMove_;
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_;
struct List_1_UnityEngine_ParticleSystem_;
struct SeinBowAttack__Fields {
    struct CharacterState__Fields _;
    struct SeinBowAttack_BalancingData* Balancing;
    struct UpgradableMultiplier* Upgradable;
    float AimChangeSpeed;
    float MaxTrajectoryLength;
    bool ConeLimitedAutoAim;
    struct LayerMask AutoAimVisionCheckMask;
    float AutoAimConeSize;
    bool AutoSnapToTargetUponShoot;
    bool SnapToTargets;
    float SnapConeSize;
    float AimDuration;
    float AimDurationCritical;
    float AirMovementMultiplier;
    float RapidFireCooldown;
    struct SeinBowAttack_Settings* GroundSettings;
    float SpeedMultiplierGround;
    float MinAimAngleGround;
    float ChargeKickbackStrengthGround;
    struct Kickback* ChargeKickbackGround;
    bool ControlAfterShotGround;
    struct SeinBowAttack_Settings* AirSettings;
    float SpeedMultiplierAir;
    float MinAimAngleAir;
    float ChargeKickbackStrengthAir;
    struct Kickback* ChargeKickbackAir;
    bool ControlAfterShotAir;
    float ArrowGravity;
    struct Vector2 RapidArrowScale;
    struct Vector2 ArrowScale;
    struct Vector2 ChargeArrowScale;
    float MaxArrowInitialSpeedDeviation;
    float MinArrowSpeed;
    float MaxArrowSpeed;
    float ArrowDamage;
    float ArrowEnergyCost;
    float RapidArrowDamage;
    float ChargeArrowSpeed;
    float ChargeArrowDamage;
    float ChargeExplosionCameraShake;
    float ChargeExplosionScale;
    float ChargeShotEnergyCost;
    float SteadyAimChargedShotDelay;
    float SteadyAimChargeShotReset;
    struct InstantiationRecycleHelper* SurfaceHitEffectRecycler;
    struct InstantiationRecycleHelper* WeaponEffectRecycler;
    int32_t WeaponFXPrewarmAmount;
    int32_t SurfaceFXPrewarmAmount;
    struct SoundProvider* DrawSound;
    struct SoundProvider* ShootSound;
    struct SoundProvider* AirChargeBeginSound;
    struct SoundProvider* AirChargeEndSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundSource* AimCriticalSound;
    struct RTPC* BowDamageRtpc;
    struct Event_1* ReleaseBowEvent;
    bool m_effectiveSettingsIsGround;
    float m_targetAimAngle;
    float m_currentAimAngle;
    float m_savedStickAngle;
    SeinBowAttack_State__Enum m_currentState;

    float m_currentStateTime;
    float m_currentShotTime;
    float m_timeToEnterChargedShot;
    struct Vector2 m_currentArrowScale;
    bool m_playerAimEnabled;
    bool m_attackButtonWasReleased;
    bool m_gameSuspended;
    bool m_spriteMirrorLock;
    bool m_wasGroundedAfterAirShot;
    bool m_performRapidShot;
    bool m_arrowReleased;
    struct MoonTimeline* m_curTimeline;
    struct Transform* m_leftHand;
    struct Transform* m_leftShoulder;
    struct Transform* m_rightHand;
    struct Transform* m_weapon1Jnt;
    struct IBowAttackable* m_currentAutoTarget;
    float m_currentArrowDamage;
    float m_currentArrowSpeed;
    float m_currentExplosionScale;
    float m_currentExplosionCameraShake;
    float m_currentExplosionVolume;
    float m_chargeAmount;
    float m_preChargeArrowSpeed;
    struct AnimationLayerContext m_tandemAnimationContext;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    struct SeinBowMark* m_currentMarkerInstance;
    bool m_initialised;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _ProviderCooldown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    float m_moveTime;
    struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* m_particleSystems;
    struct List_1_UnityEngine_ParticleSystem_* m_tempPSList;
    struct ActiveAnimationHandle m_aimStateAnimation;
    struct ActiveAnimationHandle m_aimStateBowAnimation;
    int32_t m_arrowCountPerPress;
    int32_t m_amountOfArrowsForStressTest;
    float m_shotIntervalStressTest;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBowAttack__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SeinBowAttack_BalancingData.h>
#include <Modloader/app/structs/SeinBowAttack_Settings.h>
#include <Modloader/app/structs/SeinBowMark.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_SeinBowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBowAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
