#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSwimming__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSwimming__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinSwimming_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinSwimming_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinSwimming__Fields_DEFINED
struct GameObject;
struct State;
struct Event_1;
struct RTPC;
struct Switch_1;
struct SoundProvider;
struct SoundSource;
struct AnimationCurve;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct CharacterPlatformMovement_ScheduledSpeedCurve;
struct List_1_UnityEngine_GameObject_;
struct WaterZone;
struct LegacyAnimator__Array;
struct Collider__Array;
struct HashSet_1_Moon_DamageOwner_;
struct SeinSwimming__Fields {
    struct CharacterState__Fields _;
    SeinSwimming_State__Enum PreviousState;

    SeinSwimming_State__Enum CurrentState;

    struct GameObject* BreathingUI;
    struct State* OriUnderWaterWwiseState;
    struct State* OriOutOfWaterWwiseState;
    struct Event_1* UnderwaterAmbienceEvent;
    struct RTPC* UnderwaterSwimmingSpeedRtpc;
    struct Switch_1* RegularWaterSwitch;
    struct Switch_1* DamagingWaterSwitch;
    struct Event_1* SharpTurnEvent;
    struct WwiseEventSystem_SoundHandle m_underwaterAmbienceSoundHandle;
    bool m_oriUnderWaterWwiseStateValue;
    float Breath;
    bool InstaKillWhenOutOfBreath;
    float DrownDamage;
    float DrownDamageTickRate;
    float DrownYSpeed;
    float DrownRotationSpeed;
    float ImpureWaterDamage;
    float ImpureWaterDamageTickRate;
    float DiveUnderwaterSpeed;
    struct SoundProvider* InWaterSoundProvider;
    struct SoundProvider* BashIntoWaterSoundProvider;
    struct SoundProvider* StompIntoWaterSoundProvider;
    float JumpOutOfWaterSpeed;
    struct SoundProvider* OutOfWaterSoundProvider;
    float SkipSurfaceSpeedIn;
    float SkipSurfaceSpeedOut;
    struct SoundSource* SurfaceSwimmingSoundProvider;
    struct SoundSource* UnderwaterSwimmingSoundProvider;
    struct Event_1* EmergeHighBreathSound;
    struct Event_1* EmergeMedBreathSound;
    struct Event_1* EmergeLowBreathSound;
    struct Event_1* BoostSoundEvent;
    float SwimGravity;
    float SwimSpeed;
    struct AnimationCurve* SwimSpeedBoostCurve;
    float BoostPeakTime;
    float HorizontalEnterSpeedDamp;
    float m_boostTime;
    float BoostDuration;
    bool m_isBoosting;
    float m_swimAngle;
    float SwimAngleDeltaLimit;
    float m_swimMovingTime;
    float m_swimIdleTime;
    float m_swimAccelerationTime;
    float m_nextPaddleSoundTime;
    float SwimUpwardsGravity;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* SwimmingOnSurfaceHorizontalSpeed;
    struct AnimationCurve* WaterCurrentForceMultiplierForAngle;
    float MinShakeStrength;
    float MaxShakeStrength;
    float ExitDashRootScale;
    float ExitDashDuration;
    struct Event_1* DashWwiseEvent;
    struct Event_1* DashIntoWaterWwiseEvent;
    struct AnimationCurve* DashSpeedCurve;
    float DashMaxSpeed;
    float DashTime;
    float DashCooldown;
    float DashAngleDeltaLimit;
    float DashDamage;
    DamageWeight__Enum DamageWeight;

    float DashDamageRadius;
    float DashDamageForce;
    struct LayerMask DashDamageLayerMask;
    float DashExitMinPrerequisiteSpeed;
    struct AnimationCurve* DashExitSpeedMultiplierBasedOnDashProgress;
    struct AnimationCurve* DashExitSpeedCurveNormalized;
    float DashExitCurveMaxSpeed;
    float DashExitSpeedCurveDuration;
    float DashExitMaxCameraShakeStrength;
    float DashExitMaxControllerShakeStrength;
    float LimitSpeedToStickToSurfaceInsteadOfJump;
    float DashExitWhileSwimmingOnSurfaceThreshold;
    float DashEnterWhileSwimmingOnSurfaceThreshold;
    struct Event_1* SurfacePaddleSoundEvent;
    struct AnimationCurve* PaddleSoundsPerSecondOverSpeed;
    struct AnimationCurve* SurfaceDashSpeedCurveNormalized;
    float SurfaceDashCurveMaxSpeed;
    float SurfaceDashCurveDuration;
    float DashIntoWaterMaxDistance;
    struct AnimationCurve* DashIntoWaterMaxDistanceMultiplierGraph;
    struct AnimationCurve* DashIntoWaterAccelerationSpeedCurveNormalized;
    float DashIntoWaterCurveMaxSpeed;
    float DashIntoWaterAccelerationDuration;
    struct AnimationCurve* DashIntoWaterDecelerationSpeedCurveNormalized;
    float DashIntoWaterDecelerationDuration;
    struct AnimationCurve* DashIntoWaterAngleDeltaCurveNormalized;
    float DashIntoWaterAngleDeltaLimit;
    float DelayBeforeDashIntoWaterCanDashAgain;
    float DashExitEnableTurnThreshold;
    float m_exitingWaterDuration;
    struct CharacterPlatformMovement_ScheduledSpeedCurve* m_dashExitCurve;
    float DashDecelSmoothDamp;
    float DashDecelMaxSpeed;
    float DashCooldownOnExit;
    float DashCooldownOnEnter;
    float DashTurnSmoothTime;
    float OutOfDashSpeed;
    float OutOfDashDuration;
    struct AnimationCurve* OutOfDashSpeedCurve;
    bool ApplyDashExitCurve;
    struct AnimationCurve* DashExitCurve;
    float DashExitDigSpeed;
    float AutoDashMaxDistance;
    struct LayerMask WallImpactCheckMask;
    float MaxAcceptedAngleForWallImpact;
    float MinSpeedForWallImpact;
    bool m_canCancelWallImpact;
    float MaxAcceptedAngleForSurfaceWallImpact;
    float MinSpeedForSurfaceWallImpact;
    bool m_canCancelSurfaceWallImpact;
    float KickbackForceMagnitudeSurface;
    float KickbackForceMagnitudeUnderWater;
    bool m_shouldStartDashing;
    bool m_isDashing;
    float m_dashTimer;
    float m_dashCooldown;
    struct GameObject* m_swimDashEffect;
    struct List_1_UnityEngine_GameObject_* m_swimDashStartEffects;
    struct GameObject* m_surfaceDashEffect;
    int32_t m_currentDamageID;
    float m_timeInsideWater;
    float m_distanceSwam;
    struct Vector3 m_previousSwamPosition;
    struct AnimationCurve* DeadZoneRemappingCurve;
    bool m_lastFacingLeft;
    struct WaterZone* m_previousWater;
    struct WaterZone* m_currentWater;
    float m_timeSinceLastDrownDamageTick;
    float m_timeSinceLastImpureWaterDamageTick;
    float m_timeSinceLastDamagingWaterDamageTick;
    float m_reEnterWaterCooldown;
    float m_reEnterWaterCooldownRemaining;
    float m_currentStateTime;
    float m_rotationFrom;
    float _RemainingBreath_k__BackingField;
    bool m_spriteMirrorLock;
    struct LegacyAnimator__Array* m_breathingUIAnimators;
    float SurfaceDecelSpeed;
    bool CanHorizontalSwimJump;
    float Deceleration;
    float MaxFallSpeed;
    float MaxFloatSpeed;
    float DistanceToSurfaceToFloat;
    struct Collider__Array* m_damageHitColliders;
    struct Collider__Array* m_previousDamageHitColliders;
    struct HashSet_1_Moon_DamageOwner_* m_dashDamagedEntities;
    float BashTime;
    float SmoothAngleDelta;
    struct AnimationCurve* AccelerationOverTime;
    float m_boostAnimationRemainingTime;
    bool CanJumpUnderwater;
    bool HoldAToSwimLoop;
    float SwimJumpSpeedDelta;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSwimming__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSwimming__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterPlatformMovement_ScheduledSpeedCurve.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_DamageOwner_.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_SeinSwimming__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimming__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSwimming__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSwimming__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSwimming__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
