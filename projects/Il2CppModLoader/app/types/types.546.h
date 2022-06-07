namespace app {
struct SeinGrabRope__Fields {
    struct CharacterState__Fields _;
    struct Transform *PlayerCenter;
    float MinActivationTimeAfterJump;
    float JumpImpulse;
    float AttachImpulse;
    float AttachMaxSnapSpeed;
    float ClimbForce;
    float ClimbForceFrequency;
    bool AllowDashOff;
    bool FaceJumpDirectionBack;
    float MinRopeAngleWithHorizontalForDash;
    struct AnimationCurve *ForceAddedToRopeVsOriSpeed;
    struct FloatAnimationParameter *HorizontalClimbSlopeParameter;
    struct SoundSource *SwingLoopSound;
    struct Event_1 *SwingLoopSoundWwise;
    struct RTPC *SwingLoopSoundRtpc;
    struct Event_1 *SlideDownLoopSound;
    struct Event_1 *ClimbUpLoopSound;
    struct Event_1 *SwingExitSound;
    struct Event_1 *DashToPoleSound;
    struct Event_1 *JumpOnPoleVerticalSound;
    struct Event_1 *JumpOffPoleVerticalSound;
    struct Event_1 *JumpOnPoleHorizontalSound;
    struct Event_1 *JumpOffPoleHorizontalSound;
    struct Event_1 *JumpOnPoleHandStandSound;
    struct Event_1 *JumpOffPoleHandStandSound;
    struct Event_1 *VerticalPoleJumpUpSound;
    struct Event_1 *EnterPoleDangleSound;
    struct SeinGrabRope_VerticalVFXPlayer *VerticalVFX;
    struct SeinGrabRope_HorizontalVFXPlayer *HorizontalVFX;
    struct SeinGrabRope_SwingVFXPlayer *SwingVFX;
    struct MaterialBasedResourceMap *EffectsMap;
    float DelayPostGrabBeforeJumpAllowed;
    float DurationAfterDropToCheckOverlap;
    float DelayAfterGrabBeforeDropAllowed;
    float DropPressComboMaxDelay;
    float SwingPosOffset;
    struct AnimationCurve *SwingUpAnimationSpeedCurve;
    struct AnimationCurve *SlowDownDurationCurve;
    float SwingSlowDownRate;
    float SwingSlowDownMinSpeed;
    float SwingSlowDownNormalizedExitTime;
    float MinEdgeDistanceToAllowSwing;
    float SwingJumpDuration;
    float SwingJumpVelocityMultiplier;
    struct AnimationCurve *SwingJumpVelocityCurve;
    struct AnimationCurve *SwingSpeedVsSpinDuration;
    struct AnimationCurve *SwingSoundPitchVsSpeedCurve;
    float NormalizedTransitionToSwingJumpTime;
    float NormalizedSwingJumpAnimStartTime;
    float AutoReleaseDistance;
    float ClimbSpeedUp;
    float ClimbSpeedDown;
    float ClimbSpeedHorizontal;
    float Acceleration;
    float InputDelayAfterJumpUpPole;
    float HandStandOffset;
    float JumpToHandStandMaxActivationOffset;
    float HandStandSpeedUp;
    float HandStandSpeedDown;
    float HandStandJumpHeight;
    float HandStandJumpHorizontalSpeed;
    float ClimbToHandstandSwitchSidesLock;
    float DangleOffset;
    float DangleSpeedUp;
    float DangleSpeedDown;
    float ClimbToDangleSwitchSidesLock;
    struct AnimationCurve *SlipperySpeedCurve;
    float SlipperyStickDuration;
    float m_slippingDuration;
    SeinGrabRope_State__Enum m_currentState;
    
    SeinGrabRope_State__Enum m_previousState;
    
    float m_currentStateTime;
    float m_positionOnRope;
    struct IGrabbableRope *m_rope;
    float m_lastDownPressTime;
    bool m_wantsToStopSwinging;
    int32_t m_wantsToStopSwingingLastCycle;
    struct ActiveAnimationHandle m_swingLoopAnimationState;
    struct ActiveAnimationHandle m_swingUpAnimationState;
    bool m_wantsToPerformSwingJump;
    float m_swingLoopEndTime;
    float m_swingJumpStartTime;
    float m_numSwingCycles;
    float m_swingLoopSpeed;
    float m_timeUntilJumpFinished;
    float m_swingJumpSpeed;
    bool _m_isFlipped_k__BackingField;
    bool m_queuedFaceLeft;
    bool m_applyQueuedFaceLeft;
    float m_side;
    bool m_movingToDangle;
    bool m_movingToHandstand;
    bool m_forceHandStand;
    bool m_isInHandStand;
    float m_lastJumpToHandstandTime;
    bool m_switchingSidesFaceLeft;
    float m_horizontalSpeed;
    float m_verticalSpeed;
    struct ActiveAnimationHandle m_jumpUpPoleAnimation;
    bool m_shouldPlayDangleSound;
    bool m_enterHandStandSoundPlayed;
    bool m_climbUpSoundIsPlaying;
    bool m_slideDownSoundIsPlaying;
    bool m_swingSoundIsPlaying;
    bool m_hasClearedRopeAfterDrop;
    float m_lastJumpTime;
    float m_lastDropTime;
    bool m_enteredStateByDashing;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};

struct SeinGrabRope {
    struct SeinGrabRope__Class *klass;
    MonitorData *monitor;
    struct SeinGrabRope__Fields fields;
};

struct __declspec(align(8)) SurfaceMaterialTimelinePlayer__Fields {
    struct Transform *VFXHolder;
    struct MaterialBasedResourceMap *EffectsMap;
    struct MoonTimeline *m_currentVFX;
    SurfaceMaterialType__Enum m_currentSurfaceMaterial;
    
    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ *m_vfx;
};

struct SurfaceMaterialTimelinePlayer {
    struct SurfaceMaterialTimelinePlayer__Class *klass;
    MonitorData *monitor;
    struct SurfaceMaterialTimelinePlayer__Fields fields;
};

struct SeinGrabRope_VerticalVFXPlayer__Fields {
    struct SurfaceMaterialTimelinePlayer__Fields _;
};

struct SeinGrabRope_VerticalVFXPlayer {
    struct SeinGrabRope_VerticalVFXPlayer__Class *klass;
    MonitorData *monitor;
    struct SeinGrabRope_VerticalVFXPlayer__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_SurfaceMaterialType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    int32_t hashCode;
    int32_t next;
    SurfaceMaterialType__Enum key;
    
    struct MoonTimeline *value;
};

struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array {
    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};

struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    SurfaceMaterialType__Enum key;
    
    struct MoonTimeline *value;
};

struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Boxed {
    struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ fields;
};

struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array {
    struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

struct SeinGrabRope_HorizontalVFXPlayer__Fields {
    struct SurfaceMaterialTimelinePlayer__Fields _;
};

struct SeinGrabRope_HorizontalVFXPlayer {
    struct SeinGrabRope_HorizontalVFXPlayer__Class *klass;
    MonitorData *monitor;
    struct SeinGrabRope_HorizontalVFXPlayer__Fields fields;
};

struct SeinGrabRope_SwingVFXPlayer__Fields {
    struct SurfaceMaterialTimelinePlayer__Fields _;
};

struct SeinGrabRope_SwingVFXPlayer {
    struct SeinGrabRope_SwingVFXPlayer__Class *klass;
    MonitorData *monitor;
    struct SeinGrabRope_SwingVFXPlayer__Fields fields;
};

struct IGrabbableRope {
    struct IGrabbableRope__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinEdgeClamber___Fields {
    bool HasState;
    struct SeinEdgeClamber *State;
};

struct CharacterStateWrapper_1_SeinEdgeClamber_ {
    struct CharacterStateWrapper_1_SeinEdgeClamber___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinEdgeClamber___Fields fields;
};

struct SeinEdgeClamber__Fields {
    struct CharacterState__Fields _;
    struct SoundProvider *EdgeClamberSound;
    struct MaterialBasedSeinEffectsMap *EffectsMap;
    float HorizontalSpeedFraction;
    float VerticalSpeed;
    bool m_isEdgeClambering;
    float JumpSustainSpeedToLose;
    float LandOnTrigger_Duration;
    float LandOnTrigger_MaxSpeed;
    float LandOnTrigger_Acceleration;
    float LandOnTrigger_Decceleration;
    float LandOnTrigger_GravityStrength;
    bool m_landOnTriggerStarted;
    float m_landOnTriggerUntilTime;
    float m_landOnTriggerDir;
};

struct SeinEdgeClamber {
    struct SeinEdgeClamber__Class *klass;
    MonitorData *monitor;
    struct SeinEdgeClamber__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinSwimming___Fields {
    bool HasState;
    struct SeinSwimming *State;
};

struct CharacterStateWrapper_1_SeinSwimming_ {
    struct CharacterStateWrapper_1_SeinSwimming___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinSwimming___Fields fields;
};

enum class SeinSwimming_State__Enum : int32_t {
    Invalid = -1,
    OutOfWater = 0x00000000,
    SwimmingOnSurface = 0x00000001,
    SwimMovingUnderwater = 0x00000002,
    SwimIdleUnderwater = 0x00000003,
    Dashing = 0x00000004,
    DashingOutOfWater = 0x00000005,
    WallImpact = 0x00000006,
    SurfaceDash = 0x00000007,
    DashIntoWater = 0x00000008,
    SurfaceWallImpact = 0x00000009,
    Digging = 0x0000000a,
    Drowning = 0x0000000b,
    Bashing = 0x0000000c,
};

struct SeinSwimming_State__Enum__Boxed {
    struct SeinSwimming_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinSwimming_State__Enum value;
    
};

struct SeinSwimming__Fields {
    struct CharacterState__Fields _;
    SeinSwimming_State__Enum PreviousState;
    
    SeinSwimming_State__Enum CurrentState;
    
    struct GameObject *BreathingUI;
    struct State *OriUnderWaterWwiseState;
    struct State *OriOutOfWaterWwiseState;
    struct Event_1 *UnderwaterAmbienceEvent;
    struct RTPC *UnderwaterSwimmingSpeedRtpc;
    struct Switch_1 *RegularWaterSwitch;
    struct Switch_1 *DamagingWaterSwitch;
    struct Event_1 *SharpTurnEvent;
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
    struct SoundProvider *InWaterSoundProvider;
    struct SoundProvider *BashIntoWaterSoundProvider;
    struct SoundProvider *StompIntoWaterSoundProvider;
    float JumpOutOfWaterSpeed;
    struct SoundProvider *OutOfWaterSoundProvider;
    float SkipSurfaceSpeedIn;
    float SkipSurfaceSpeedOut;
    struct SoundSource *SurfaceSwimmingSoundProvider;
    struct SoundSource *UnderwaterSwimmingSoundProvider;
    struct Event_1 *EmergeHighBreathSound;
    struct Event_1 *EmergeMedBreathSound;
    struct Event_1 *EmergeLowBreathSound;
    struct Event_1 *BoostSoundEvent;
    float SwimGravity;
    float SwimSpeed;
    struct AnimationCurve *SwimSpeedBoostCurve;
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
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet *SwimmingOnSurfaceHorizontalSpeed;
    struct AnimationCurve *WaterCurrentForceMultiplierForAngle;
    float MinShakeStrength;
    float MaxShakeStrength;
    float ExitDashRootScale;
    float ExitDashDuration;
    struct Event_1 *DashWwiseEvent;
    struct Event_1 *DashIntoWaterWwiseEvent;
    struct AnimationCurve *DashSpeedCurve;
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
    struct AnimationCurve *DashExitSpeedMultiplierBasedOnDashProgress;
    struct AnimationCurve *DashExitSpeedCurveNormalized;
    float DashExitCurveMaxSpeed;
    float DashExitSpeedCurveDuration;
    float DashExitMaxCameraShakeStrength;
    float DashExitMaxControllerShakeStrength;
    float LimitSpeedToStickToSurfaceInsteadOfJump;
    float DashExitWhileSwimmingOnSurfaceThreshold;
    float DashEnterWhileSwimmingOnSurfaceThreshold;
    struct Event_1 *SurfacePaddleSoundEvent;
    struct AnimationCurve *PaddleSoundsPerSecondOverSpeed;
    struct AnimationCurve *SurfaceDashSpeedCurveNormalized;
    float SurfaceDashCurveMaxSpeed;
    float SurfaceDashCurveDuration;
    float DashIntoWaterMaxDistance;
    struct AnimationCurve *DashIntoWaterMaxDistanceMultiplierGraph;
    struct AnimationCurve *DashIntoWaterAccelerationSpeedCurveNormalized;
    float DashIntoWaterCurveMaxSpeed;
    float DashIntoWaterAccelerationDuration;
    struct AnimationCurve *DashIntoWaterDecelerationSpeedCurveNormalized;
    float DashIntoWaterDecelerationDuration;
    struct AnimationCurve *DashIntoWaterAngleDeltaCurveNormalized;
    float DashIntoWaterAngleDeltaLimit;
    float DelayBeforeDashIntoWaterCanDashAgain;
    float DashExitEnableTurnThreshold;
    float m_exitingWaterDuration;
    struct CharacterPlatformMovement_ScheduledSpeedCurve *m_dashExitCurve;
    float DashDecelSmoothDamp;
    float DashDecelMaxSpeed;
    float DashCooldownOnExit;
    float DashCooldownOnEnter;
    float DashTurnSmoothTime;
    float OutOfDashSpeed;
    float OutOfDashDuration;
    struct AnimationCurve *OutOfDashSpeedCurve;
    bool ApplyDashExitCurve;
    struct AnimationCurve *DashExitCurve;
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
    struct GameObject *m_swimDashEffect;
    struct List_1_UnityEngine_GameObject_ *m_swimDashStartEffects;
    struct GameObject *m_surfaceDashEffect;
    int32_t m_currentDamageID;
    float m_timeInsideWater;
    float m_distanceSwam;
    struct Vector3 m_previousSwamPosition;
    struct AnimationCurve *DeadZoneRemappingCurve;
    bool m_lastFacingLeft;
    struct WaterZone *m_previousWater;
    struct WaterZone *m_currentWater;
    float m_timeSinceLastDrownDamageTick;
    float m_timeSinceLastImpureWaterDamageTick;
    float m_timeSinceLastDamagingWaterDamageTick;
    float m_reEnterWaterCooldown;
    float m_reEnterWaterCooldownRemaining;
    float m_currentStateTime;
    float m_rotationFrom;
    float _RemainingBreath_k__BackingField;
    bool m_spriteMirrorLock;
    struct LegacyAnimator__Array *m_breathingUIAnimators;
    float SurfaceDecelSpeed;
    bool CanHorizontalSwimJump;
    float Deceleration;
    float MaxFallSpeed;
    float MaxFloatSpeed;
    float DistanceToSurfaceToFloat;
    struct Collider__Array *m_damageHitColliders;
    struct Collider__Array *m_previousDamageHitColliders;
    struct HashSet_1_Moon_DamageOwner_ *m_dashDamagedEntities;
    float BashTime;
    float SmoothAngleDelta;
    struct AnimationCurve *AccelerationOverTime;
    float m_boostAnimationRemainingTime;
    bool CanJumpUnderwater;
    bool HoldAToSwimLoop;
    float SwimJumpSpeedDelta;
};

struct SeinSwimming {
    struct SeinSwimming__Class *klass;
    MonitorData *monitor;
    struct SeinSwimming__Fields fields;
};

enum class CharacterPlatformMovement_SpeedSpace__Enum : int32_t {
    Local = 0x00000000,
    World = 0x00000001,
};

struct CharacterPlatformMovement_SpeedSpace__Enum__Boxed {
    struct CharacterPlatformMovement_SpeedSpace__Enum__Class *klass;
    MonitorData *monitor;
    CharacterPlatformMovement_SpeedSpace__Enum value;
    
};

struct __declspec(align(8)) CharacterPlatformMovement_ScheduledSpeedCurve__Fields {
    CharacterPlatformMovement_SpeedSpace__Enum m_space;
    
    bool m_additive;
    struct AnimationCurve *m_curveX;
    struct AnimationCurve *m_curveY;
    struct AnimationCurve *m_directionCurve;
    float m_curveScaleX;
    float m_curveScaleY;
    float m_directionCurveScale;
    float m_timeScale;
    struct Func_1_Boolean_ *m_canContinue;
    struct Vector2 m_direction;
    struct Vector2 m_lastSpeed;
    float m_timer;
};

struct CharacterPlatformMovement_ScheduledSpeedCurve {
    struct CharacterPlatformMovement_ScheduledSpeedCurve__Class *klass;
    MonitorData *monitor;
    struct CharacterPlatformMovement_ScheduledSpeedCurve__Fields fields;
};

enum class WaterZone_DamageApplyType__Enum : int32_t {
    ApplyDamageWhenCorrupted = 0x00000000,
    AlwaysApplyDamage = 0x00000001,
    NeverApplyDamage = 0x00000002,
};

struct WaterZone_DamageApplyType__Enum__Boxed {
    struct WaterZone_DamageApplyType__Enum__Class *klass;
    MonitorData *monitor;
    WaterZone_DamageApplyType__Enum value;
    
};

struct WaterZone__Fields {
    struct MonoBehaviour__Fields _;
    bool IgnoreZoneDamage;
    float DamageAmount;
    float DamageTickRate;
    struct Rect Bounds;
    bool HasTopSurface;
    float SwimGravityMultiplier;
    bool DisableDamageIfPurified;
    WaterZone_DamageApplyType__Enum DamageCondition;
    
    struct Vector3 m_previousPosition;
    struct Vector3 m_previousScale;
    struct Vector2 m_velocity;
};

struct WaterZone {
    struct WaterZone__Class *klass;
    MonitorData *monitor;
    struct WaterZone__Fields fields;
};

struct LegacyAnimator__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isInScene;
    struct AnimationCurve *AnimationCurve;
    bool PlayAutomatically;
    bool SampleFirstFrameOnStart;
    float TimeOffset;
    float CurveMagnitude;
    float Speed;
    float m_startSpeed;
    bool m_stopped;
    bool _Reversed_k__BackingField;
    float _MaxTime_k__BackingField;
    float _MinTime_k__BackingField;
    float _CurrentTime_k__BackingField;
    struct Action *OnAnimationEndEvent;
    bool m_hasStarted;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
    bool m_wasStopped;
};

struct LegacyAnimator {
    struct LegacyAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyAnimator__Fields fields;
};

struct CameraOffsetAnimator__Fields {
    struct LegacyAnimator__Fields _;
    float m_lastValue;
    bool AnimateX;
    bool AnimateY;
    bool AnimateZ;
};

struct CameraOffsetAnimator {
    struct CameraOffsetAnimator__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetAnimator__Fields fields;
};

struct LegacyAnimator__Array {
    struct LegacyAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyAnimator *vector[32];
};

struct __declspec(align(8)) HashSet_1_Moon_DamageOwner___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_Moon_DamageOwner___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_Moon_DamageOwner_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_Moon_DamageOwner_ {
    struct HashSet_1_Moon_DamageOwner___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_Moon_DamageOwner___Fields fields;
};

struct HashSet_1_T_Slot_Moon_DamageOwner_ {
    int32_t hashCode;
    int32_t next;
    struct DamageOwner *value;
};

struct HashSet_1_T_Slot_Moon_DamageOwner___Boxed {
    struct HashSet_1_T_Slot_Moon_DamageOwner___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_Moon_DamageOwner_ fields;
};

struct HashSet_1_T_Slot_Moon_DamageOwner___Array {
    struct HashSet_1_T_Slot_Moon_DamageOwner___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_Moon_DamageOwner_ vector[32];
};

struct IEqualityComparer_1_Moon_DamageOwner_ {
    struct IEqualityComparer_1_Moon_DamageOwner___Class *klass;
    MonitorData *monitor;
};

struct DamageOwner__Array {
    struct DamageOwner__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DamageOwner *vector[32];
};

struct IEnumerator_1_Moon_DamageOwner_ {
    struct IEnumerator_1_Moon_DamageOwner___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_DamageOwner_ {
    struct IEnumerable_1_Moon_DamageOwner___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinDigging___Fields {
    bool HasState;
    struct SeinDigging *State;
};

struct CharacterStateWrapper_1_SeinDigging_ {
    struct CharacterStateWrapper_1_SeinDigging___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinDigging___Fields fields;
};

enum class SeinDigging_State__Enum : int32_t {
    OutOfZone = 0x00000000,
    OutOfZoneDashing = 0x00000001,
    Digging = 0x00000002,
    Dashing = 0x00000003,
    ExitingSand = 0x00000004,
};

struct SeinDigging_State__Enum__Boxed {
    struct SeinDigging_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinDigging_State__Enum value;
    
};

enum class StressTestStatus__Enum : int32_t {
    Resting = 0x00000000,
    Running = 0x00000001,
    Finished = 0x00000002,
};

struct StressTestStatus__Enum__Boxed {
    struct StressTestStatus__Enum__Class *klass;
    MonitorData *monitor;
    StressTestStatus__Enum value;
    
};

struct SeinDigging__Fields {
    struct CharacterState__Fields _;
    bool DebugDrawEnabled;
    SeinDigging_State__Enum m_currentState;
    
    struct AnimationCurve *DeadZoneRemappingCurve;
    float DigSpeed;
    float DigAccel;
    float DashSpeed;
    float DashTime;
    float DashDecelSmoothDamp;
    float DashDecelMaxSpeed;
    float DashCooldown;
    float DashCooldownOnExit;
    float DashCooldownOnEnter;
    float TurnSmoothTime;
    struct AnimationCurve *SmoothTimeVsInputMagnitude;
    float MinSmoothTime;
    float DashTurnSmoothTime;
    float SpeedMultiplierOnExit;
    float OutOfDigDashSpeed;
    float OutOfDigDashDuration;
    float ExitDashDuration;
    struct AnimationCurve *OutOfDigDashSpeedCurve;
    float DashDamage;
    DamageWeight__Enum DashDamageWeight;
    
    float DashDamageRadius;
    float DashDamageForce;
    struct LayerMask DashDamageLayerMask;
    bool ApplyDashExitCurve;
    struct AnimationCurve *DashExitCurve;
    float DashExitDigSpeed;
    struct GameObject *DashHitEffect;
    float DashExitEnableTurnThreshold;
    float AutoDashMaxDistance;
    float FailedDashRotationResetTime;
    struct LayerMask RicochetCheckMask;
    float RicochetInputCooldown;
    float RicochetStickToWallCooldown;
    float SpeedMultiplierOnRicochet;
    float RicochetCheckMinDotProduct;
    struct LayerMask StickToWallCheckMask;
    float StickToWallRadius;
    float StickToWallMaxDotProduct;
    float StickToWallMinInputAlignment;
    float StickToWallTurnSmoothTime;
    float DigBlendParameterSpeed;
    float ExitSandRootScale;
    struct SeinDigging_DiggingEffects__Array *DiggingVFX;
    struct SeinDigging_DiggingEffects *m_currentVFX;
    float m_pushTimeoutInterval;
    float m_pushTimeout;
    float RicochetEffectCooldown;
    float m_ricochetEffectTimer;
    float TrailEffectDistance;
    float TrailAllowedBorder;
    float DashExtraSandParticleRadius;
    int32_t DashExtraSandParticleAmount;
    float SeinRadius;
    float DigInsteadOfDashPredictionTime;
    float DigInsteadOfDashRadius;
    struct AnimationCurve *DigInsteadOfDashThreasholdAngleCurve;
    struct SoundProvider *DashSoundProvider;
    struct SoundProvider *RicochetSoundProvider;
    struct SoundProvider *InSandSoundLoopingProvider;
    struct SoundProvider *StartDigAbilitySoundProvider;
    struct SoundProvider *EnterSandSoundEvent;
    struct SoundProvider *ExitSandSoundEvent;
    struct State *InSandSoundState;
    struct State *OutSandSoundState;
    struct Event_1 *DashEnableSoundEvent;
    struct RTPC *DigTurnAngle;
    struct Event_1 *DigTurn;
    float DigTurnThreshold;
    float CameraXWeight;
    float CameraYWeight;
    struct Vector2 CameraMinOffset;
    struct Vector2 CameraMaxOffset;
    float CameraSpeed;
    int32_t StartVFX;
    bool m_cameraLookAheadActive;
    float m_currentStateTime;
    struct DigZone *m_currentZone;
    struct Rigidbody *m_currentZoneBody;
    struct DigZone *m_lastZone;
    float m_speed;
    float m_angle;
    float m_previousWantedAngle;
    struct CharacterPlatformMovement_ScheduledSpeedCurve *m_dashExitCurve;
    float m_angleSpeed;
    float m_dashDecelSmoothVelocity;
    struct Vector3 m_dir;
    struct GameObject *m_trailEffect;
    struct ParticleSystem *m_trailParticleSystem;
    float m_ricochetCooldownRemaining;
    float m_ricochetStickToWallCooldownRemaining;
    bool m_damaged;
    bool m_isSlidingAlongWall;
    struct Vector2 m_lastCollisionNormal;
    bool m_isDashing;
    float m_dashTimer;
    float m_dashCooldown;
    struct GameObject *m_digDashEffect;
    struct Vector2 m_outOfZoneDashStartDirection;
    float m_totalDigDistanceTravelled;
    float m_exitingSandDuration;
    bool m_canDealDamage;
    float m_dealDamageTimer;
    struct DigZoneHandler *m_digZoneEntranceHandler;
    struct Collider__Array *m_damageHitColliders;
    int32_t m_currentDamageID;
    bool m_shouldStartDashing;
    bool m_adjustDashDirection;
    struct Vector2 m_adjustedDashDirection;
    float m_rotationFrom;
    struct Vector3 m_lastSandEnterPosition;
    float m_currentDigBlendValue;
    bool m_wasInSand;
    float m_timeSinceLastOutOfSandDash;
    struct Transform *m_trailAnchor;
    struct Vector3 m_trailAnchorPos;
    struct Transform *m_trailBackAnchor;
    struct Vector3 m_lastTrailAnchorPosition;
    struct WwiseEventSystem_SoundHandle m_inSandSoundHandle;
    float m_deltaAngle;
    float m_digParam;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
    
};

struct SeinDigging {
    struct SeinDigging__Class *klass;
    MonitorData *monitor;
    struct SeinDigging__Fields fields;
};

struct __declspec(align(8)) SeinDigging_DiggingEffects__Fields {
    struct PhysicMaterial *PhysicsMat;
    struct GameObject *EffectOnEnter;
    struct GameObject *EffectOnEnterUnderwater;
    struct GameObject *TrailEffect;
    struct GameObject *DigDashEffect;
    struct GameObject *RicochetEffect;
};

struct SeinDigging_DiggingEffects {
    struct SeinDigging_DiggingEffects__Class *klass;
    MonitorData *monitor;
    struct SeinDigging_DiggingEffects__Fields fields;
};

struct SeinDigging_DiggingEffects__Array {
    struct SeinDigging_DiggingEffects__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SeinDigging_DiggingEffects *vector[32];
};

struct DigZone__Fields {
    struct MonoBehaviour__Fields _;
    bool LockHorizontalEntrance;
    bool LockVerticalEntrance;
    struct Transform *insideTester;
    struct Vector2 exitPushMultiplier;
    bool autoDashOnExit;
    float TurningSpeedMultiplier;
    struct Action *OnDigStartedInZoneCallback;
    struct CageStructureTool *m_cageStructure;
    bool m_hasInitedCageStructure;
    struct Collider *m_cageCollider;
};

struct DigZone {
    struct DigZone__Class *klass;
    MonitorData *monitor;
    struct DigZone__Fields fields;
};

struct Action_1_DigZone___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_DigZone_ {
    struct Action_1_DigZone___Class *klass;
    MonitorData *monitor;
    struct Action_1_DigZone___Fields fields;
};

struct CageStructureTool__Fields {
    struct MonoBehaviour__Fields _;
    int32_t VerticeUniqueID;
    int32_t EdgeUniqueID;
    int32_t FaceUniqueID;
    int32_t EditingMode;
    struct List_1_ICageMetaData_ *MetaData;
    struct Texture2D *CageStructureTexture;
    struct Byte__Array *ZoneMap;
    int32_t ZoneMapWidth;
    int32_t ZoneMapHeight;
    bool UseTextureMap;
    struct List_1_CageStructureTool_Vertex_ *Vertices;
    struct List_1_CageStructureTool_Edge_ *Edges;
    struct List_1_CageStructureTool_Face_ *Faces;
    struct Action_1_CageStructureTool_Vertex_ *OnAddVertex;
    struct Action_1_CageStructureTool_Vertex_ *OnRemoveVertex;
    struct Action_1_CageStructureTool_Edge_ *OnAddEdge;
    struct Action_1_CageStructureTool_Edge_ *OnRemoveEdge;
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ *OnSplitEdge;
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ *OnMergeEdge;
    struct Action_1_CageStructureTool_Face_ *OnAddFace;
    struct Action_1_CageStructureTool_Face_ *OnRemoveFace;
    struct Action *OnModified;
    struct Action_3_CageStructureTool_Face_Boolean_Boolean_ *OnDisplayFace;
    struct Action_3_CageStructureTool_Edge_Boolean_Boolean_ *OnDisplayEdge;
    struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_ *OnDisplayVertex;
    struct List_1_CageStructureTool_Vertex_ *m_selectedVertices;
    struct Dictionary_2_System_Int32_System_Int32_ *m_faceHashToIdMap;
    struct Renderer *m_renderer;
    bool EnableBoundsCheckOptimization;
    bool ShouldBeStrippedForBuilds;
    bool cage3D;
    bool saveMeshToAsset;
    struct Transform *m_transform;
    bool DontGenerateFaces;
    struct Rect__Array *m_faceOptimisation;
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ *Connections;
    bool m_localPolyValid;
    struct List_1_UnityEngine_Vector2_ *m_localVertices;
    struct Bounds m_bounds;
    bool m_hasBoundsBeenCalculated;
    struct Vector3 m_boundsCenterInLocalSpace;
};

struct CageStructureTool {
    struct CageStructureTool__Class *klass;
    MonitorData *monitor;
    struct CageStructureTool__Fields fields;
};

struct __declspec(align(8)) List_1_ICageMetaData___Fields {
    struct ICageMetaData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ICageMetaData_ {
    struct List_1_ICageMetaData___Class *klass;
    MonitorData *monitor;
    struct List_1_ICageMetaData___Fields fields;
};

struct ICageMetaData {
    struct ICageMetaData__Class *klass;
    MonitorData *monitor;
};

struct ICageMetaData__Array {
    struct ICageMetaData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ICageMetaData *vector[32];
};

struct IEnumerator_1_ICageMetaData_ {
    struct IEnumerator_1_ICageMetaData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CageStructureTool_Vertex___Fields {
    struct CageStructureTool_Vertex__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CageStructureTool_Vertex_ {
    struct List_1_CageStructureTool_Vertex___Class *klass;
    MonitorData *monitor;
    struct List_1_CageStructureTool_Vertex___Fields fields;
};

}
