#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_State__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastHit__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_RaycastCommand__DEFINED) && defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_DEFINED
struct GameObject;
struct Transform;
struct Event_1;
struct CapsuleCollider;
struct LeashMarkEffect;
struct List_1_SpiritLeashEffectPoseAnimator_;
struct PlatformMovement;
struct SoundProvider;
struct SeinBashVersionAsset;
struct AnimationCurve;
struct DamageType__Enum__Array;
struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_;
struct List_1_UnityEngine_GameObject_;
struct ISpiritLeashAttackable;
struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_;
struct SeinSpiritLeashAbility_RayDependency__Array;
struct GrabbableSurface__Array;
struct Vector3__Array;
struct Int32__Array;
struct SpherecastCommand__Array;
struct Boolean__Array;
struct RaycastHit__Array;
struct List_1_Moon_ComboSystem_IComboMove_;
struct SeinSpiritLeashAbility__Fields {
    struct CharacterState__Fields _;
    float SpiritLeashPullSpeed;
    float SpiritLeashMaxPullSpeed;
    float SpiritLeashHookedSpeed;
    float SpiritLeashRange;
    float SpiritLeashRangeCurrentTarget;
    float DurationToKeepTargetWhileFacingAway;
    float SustainedTargetAdditionalCost;
    float HoldReleaseAttackDuration;
    float HoldReleaseAttackEndDistance;
    float HoldAttackDuration;
    float DistanceFromTarget;
    float DistanceFromOri;
    float ReleaseDistanceForGrabbableSurface;
    float PullJumpSpeedY;
    float PullMoveMaxSpeedX;
    float PullMoveSpeedXDeceleration;
    float HookLeashEffectDelay;
    float InterruptSpeedTransfer;
    struct Vector2 HookJumpStrength;
    struct GameObject* LeashMarkPrefab;
    struct Transform* m_leashMarkPositionTransform;
    struct Vector3 m_lastMarkPosition;
    float TimeTillPullCheck;
    float MinDistanceToFlingTarget;
    float SurfaceTargetSmoothingDelay;
    struct Event_1* EndGrabSoundEvent;
    struct CapsuleCollider* m_oriCollider;
    struct LeashMarkEffect* m_leashMark;
    float m_maxSlideAlongCeilingTimer;
    int32_t TestEffectCount;
    struct Vector3 m_initialDirection;
    struct Vector3 m_predictedTarget;
    float TargetPredictionDistance;
    struct List_1_SpiritLeashEffectPoseAnimator_* m_spiritLeashEffect;
    bool m_wasGrabbing;
    bool m_wasHooking;
    SeinSpiritLeashAbility_State__Enum m_currentState;

    struct PlatformMovement* m_platformMovement;
    struct SeinSpiritLeashAbility_LeashableInfo m_targetLeash;
    struct SeinSpiritLeashAbility_LeashableInfo m_activeLeash;
    struct Vector3 m_slingshotTargetPosition;
    struct Vector3 m_quickAttackTargetPosition;
    int32_t m_enemyLeashesBeforeTouchingGround;
    struct ActiveAnimationHandle m_throwActiveAnimation;
    float m_currentStateTime;
    float m_floatingOnAirTimer;
    bool isHooked;
    bool m_startedOnGround;
    struct ActiveAnimationHandle m_pullActiveAnimation;
    struct ActiveAnimationHandle m_grabSurfaceActiveAnimation;
    bool m_isHookedIdling;
    float FlingAnimationDisallowTurnTime;
    struct ActiveAnimationHandle m_flingActiveAnimation;
    float m_genericJumpFlipTransitionRemainingTime;
    struct ActiveAnimationHandle m_hookJumpActiveAnimation;
    float InputSustainDuration;
    float m_sustainedInputRemainingTime;
    struct Vector2 m_sustainedInput;
    struct SoundProvider* leashThrowSound;
    struct SoundProvider* noLeashAvailableSound;
    struct SoundProvider* pullSound;
    struct SoundProvider* pulledSound;
    struct SeinBashVersionAsset* BashVersionAsset;
    struct LayerMask stopMask;
    struct LayerMask HookDetectionBlockerMask;
    float MinThrowNormalizedTimeForQuickAttack;
    float TimeBeforeInterruptIsAllowed;
    float TimeBeforeJumpCancelIsAllowed;
    struct AnimationCurve* InterruptSpeedCurve;
    struct Vector2 MinInterruptSpeedMultiplier;
    float MinInterruptSpeedMaximum;
    struct Vector2 MaxInterruptSpeedMultiplier;
    float MaxInterruptSpeedMaximum;
    struct Vector2 HookFlingSpeedMaxMultiplier;
    float HookFlingSpeedMaximum;
    struct DamageType__Enum__Array* DamageThatWillInterruptLeash;
    float TargetReadySpeed;
    float MoveToReadySpeed;
    float LeashReadyDrag;
    struct Vector2 m_flingVelocity;
    bool m_spriteMirrorLock;
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_* m_recentHitObjects;
    struct List_1_UnityEngine_GameObject_* m_removeObjects;
    float FlingDashClampSpeed;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct Vector3 m_lastSpeed;
    float m_timeSinceActivationButtonPressed;
    float MaxDelayOnLateActivation;
    float m_pullAnimationTime;
    bool m_hasAppliedSpeed;
    float m_remainingTrajectoryCorrectionY;
    float m_trajectoryCorrectionSpeed;
    float WheelProbeDistance;
    float m_hookTimer;
    int32_t m_lockCounter;
    bool isThrowing;
    bool SpiritLeashSpawned;
    float animationAimAngle;
    struct AnimationCurve* FrictionCurve;
    float m_remainingFrictionTime;
    float FrictionDuration;
    bool isGrabbing;
    float HookDirectionErrorAngle;
    float HookDirectionErrorAngleNoInput;
    float HookDirectionErrorAngleRetainTargetBonus;
    float FacingDirectionErrorAngle;
    struct ISpiritLeashAttackable* lastTargetSpiritLeashAttackable;
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_* m_markPerObject;
    struct GameObject* m_markedObject;
    struct List_1_UnityEngine_GameObject_* m_markedObjectsToRemove;
    float DistanceCostMultiplier;
    float AngleCostMultiplier;
    float AngleCostNoInputMultiplier;
    float InputDirectionOffsetY;
    float NoInputDirectionOffsetY;
    struct GameObject* m_lastTargetObject;
    bool m_lastTargetSustained;
    float m_lastTargetTime;
    struct SeinSpiritLeashAbility_RayDependency__Array* m_rayDependencies;
    struct GrabbableSurface__Array* m_raySurfaces;
    struct Vector3__Array* m_rayHitPoints;
    struct Int32__Array* m_rayModeDebug;
    bool UseJobs;
    struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
    struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
    struct SpherecastCommand__Array* m_cmds;
    struct Boolean__Array* m_hitResults;
    bool m_hasCreatedNativeArrays;
    int32_t m_requestId;
    struct RaycastHit__Array* m_raycastHits;
    bool m_hasCreatedIDsAndHits;
    struct Guid _AttackableConsumerID_k__BackingField;
    float HookJumpGravityOverride;
    float m_prevGravity;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _CoolDown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/DamageType__Enum__Array.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_GrabbableSurface_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableSurface__Array.h>
#include <Modloader/app/structs/ISpiritLeashAttackable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LeashMarkEffect.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_SpiritLeashEffectPoseAnimator_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SeinBashVersionAsset.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_RayDependency__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SpherecastCommand__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritLeashAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritLeashAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
