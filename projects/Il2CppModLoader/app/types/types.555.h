namespace app {
struct IChargeDashAttackable {
    struct IChargeDashAttackable__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrenadeAttack___Fields {
    bool HasState;
    struct SeinGrenadeAttack *State;
};

struct CharacterStateWrapper_1_SeinGrenadeAttack_ {
    struct CharacterStateWrapper_1_SeinGrenadeAttack___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinGrenadeAttack___Fields fields;
};

enum class SeinGrenadeAttack_Preset__Enum : int32_t {
    None = 0x00000000,
    M28 = 0x00000001,
    AnderSuggestion = 0x00000002,
};

struct SeinGrenadeAttack_Preset__Enum__Boxed {
    struct SeinGrenadeAttack_Preset__Enum__Class *klass;
    MonitorData *monitor;
    SeinGrenadeAttack_Preset__Enum value;
    
};

struct SeinGrenadeAttack__Fields {
    struct CharacterState__Fields _;
    SeinGrenadeAttack_Preset__Enum PresetMode;
    
    struct SeinGrenadeAttack_BalancingData *Balancing;
    struct UpgradableMultiplier *Upgradable;
    struct GameObject *Grenade;
    struct GameObject *GrenadeCharged;
    struct GameObject *GrenadeFractured;
    struct GameObject *GrenadeAiming;
    struct GameObject *GrenadeFailEffect;
    struct GameObject *GrenadeFractureEffect;
    struct GameObject *GrenadeBurnEffect;
    struct GameObject *ChargedHandGrenade;
    struct GameObject *m_grenadeAiming;
    struct StartLoopEndEffect *m_chargedHandGrenadeEffect;
    struct SeinGrenadeTrajectory *Trajectory;
    float TrajectorySmoothSpeed;
    float AirMovementMultiplier;
    float GroundDeceleration;
    float AirDeceleration;
    int32_t MaxSpamGrenades;
    float ThrowCooldown;
    float ProjectileSpawnDelay;
    float SafeThrowCheckDistance;
    float InitialAimStrength;
    float MaxAimStrength;
    float MaxAimStrengthTime;
    float GrenadeGravity;
    float QuickThrowAllowedPressTime;
    struct Vector2 QuickThrowAllowedAngleThresoldGround;
    struct Vector2 QuickThrowAllowedAngleThresoldAir;
    struct AnimationCurve *AutoAimAirTime;
    bool m_autoAimAllowed;
    bool m_explodeWithSecondButtonPress;
    bool ExplodeFracturedGrenadesWithSecondButtonPress;
    bool m_forceExplodeGrenadeOnCollision;
    float DelayBeforeCanManuallyExplode;
    bool AffectedByScatterShot;
    struct FloatAnimationParameter *AimAngle;
    struct MoonAnimation *Aiming;
    struct MoonAnimation *AimingTurn;
    struct SeinGrenadeAttack_ThrowInfo *Throw;
    struct MoonAnimation *WallAiming;
    struct SeinGrenadeAttack_ThrowInfo *WallThrow;
    struct MoonAnimation *AirAiming;
    struct SeinGrenadeAttack_ThrowInfo *AirThrow;
    struct MoonAnimation__Array *NotEnoughEnergyThrow;
    struct MoonAnimation__Array *NotEnoughEnergyWallThrow;
    float AimBlendAngularSpeed;
    struct SoundProvider *NotEnoughEnergySound;
    struct SoundProvider *TurnAroundAimingSound;
    struct SoundProvider *ThrowGrenadeSound;
    struct SoundProvider *StopAimingSound;
    struct SoundProvider *StartAimingSound;
    struct SoundSource *AimingSound;
    float m_lockPressingInputTime;
    bool m_isAiming;
    float m_aimDuration;
    bool m_quickThrowAssistAllowed;
    bool m_wasGroundedAfterAirAiming;
    float m_timeTillProjectileSpawn;
    struct Vector2 m_projectileSpawnVelocity;
    struct Vector2 m_aimDir;
    float m_aimStrength;
    struct Vector2 m_aimDirSmoothed;
    struct List_1_IGreanade_ *m_grenades;
    float m_animationAimAngle;
    bool m_lastAimWasOnWall;
    struct SeinGrenadeAttack_ThrowInfo *m_currentThrow;
    float m_lockAimAnimationRemainingTime;
    bool m_faceLeft;
    struct Input_InputButtonProcessor *m_button;
    float MaxAimWallAnimationAngle;
    float MinAimWallAnimationAngle;
    float MaxAimGroundAnimationAngle;
    float MinAimGroundAnimationAngle;
    float m_spentEnergy;
    bool m_inputPressed;
    struct IAttackable *m_autoTarget;
    struct SeinGrenadeAttack_AutoAimSettings *AutoAim;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
    
};

struct SeinGrenadeAttack {
    struct SeinGrenadeAttack__Class *klass;
    MonitorData *monitor;
    struct SeinGrenadeAttack__Fields fields;
};

struct SeinGrenadeAttack_BalancingData__Fields {
    struct OriAttackBalancingData__Fields _;
    float GrenadeDamage;
    float ChargedGrenadeDamage;
    float EnergyCost;
    float FireDamage;
    float FireDamageInterval;
    float FireDamageDuration;
};

struct SeinGrenadeAttack_BalancingData {
    struct SeinGrenadeAttack_BalancingData__Class *klass;
    MonitorData *monitor;
    struct SeinGrenadeAttack_BalancingData__Fields fields;
};

enum class CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum : int32_t {
    Sword = 0x00000000,
    Hammer = 0x00000001,
    Bow = 0x00000002,
    Spear = 0x00000003,
    Grenade = 0x00000004,
    Chakram = 0x00000005,
    Missiles = 0x00000006,
};

struct CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Boxed {
    struct CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class *klass;
    MonitorData *monitor;
    CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum value;
    
};

struct __declspec(align(8)) UpgradableMultiplier__Fields {
    struct SerializedByteUberState *Level;
    CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum Type;
    
    struct CombinedUpgradeEffectiveness *Effectiveness;
};

struct UpgradableMultiplier {
    struct UpgradableMultiplier__Class *klass;
    MonitorData *monitor;
    struct UpgradableMultiplier__Fields fields;
};

struct CombinedUpgradeEffectiveness__Fields {
    struct ScriptableObject__Fields _;
    struct CombinedUpgradeEffectiveness_UpgradableAbility__Array *Abilities;
};

struct CombinedUpgradeEffectiveness {
    struct CombinedUpgradeEffectiveness__Class *klass;
    MonitorData *monitor;
    struct CombinedUpgradeEffectiveness__Fields fields;
};

struct __declspec(align(8)) CombinedUpgradeEffectiveness_UpgradableAbility__Fields {
    CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum Type;
    
    struct Single__Array *Effectiveness;
};

struct CombinedUpgradeEffectiveness_UpgradableAbility {
    struct CombinedUpgradeEffectiveness_UpgradableAbility__Class *klass;
    MonitorData *monitor;
    struct CombinedUpgradeEffectiveness_UpgradableAbility__Fields fields;
};

struct CombinedUpgradeEffectiveness_UpgradableAbility__Array {
    struct CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CombinedUpgradeEffectiveness_UpgradableAbility *vector[32];
};

enum class StartLoopEndEffect_State__Enum : int32_t {
    Invalid = 0x00000000,
    Start = 0x00000001,
    Loop = 0x00000002,
    End = 0x00000003,
    Cancel = 0x00000004,
};

struct StartLoopEndEffect_State__Enum__Boxed {
    struct StartLoopEndEffect_State__Enum__Class *klass;
    MonitorData *monitor;
    StartLoopEndEffect_State__Enum value;
    
};

struct StartLoopEndEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *StartTimeline;
    struct MoonTimeline *LoopTimeline;
    struct MoonTimeline *EndTimeline;
    struct MoonTimeline *CancelTimeline;
    StartLoopEndEffect_State__Enum m_currentState;
    
    bool m_shouldCancel;
    bool m_shouldEnd;
};

struct StartLoopEndEffect {
    struct StartLoopEndEffect__Class *klass;
    MonitorData *monitor;
    struct StartLoopEndEffect__Fields fields;
};

struct __declspec(align(8)) SeinGrenadeAttack_ThrowInfo__Fields {
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *MovementRestrictedWindow;
};

struct SeinGrenadeAttack_ThrowInfo {
    struct SeinGrenadeAttack_ThrowInfo__Class *klass;
    MonitorData *monitor;
    struct SeinGrenadeAttack_ThrowInfo__Fields fields;
};

struct __declspec(align(8)) List_1_IGreanade___Fields {
    struct IGreanade__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_IGreanade_ {
    struct List_1_IGreanade___Class *klass;
    MonitorData *monitor;
    struct List_1_IGreanade___Fields fields;
};

struct IGreanade {
    struct IGreanade__Class *klass;
    MonitorData *monitor;
};

struct IGreanade__Array {
    struct IGreanade__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IGreanade *vector[32];
};

struct IEnumerator_1_IGreanade_ {
    struct IEnumerator_1_IGreanade___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Input_InputButtonProcessor__Fields {
    bool WasPressed;
    bool IsPressed;
    bool Used;
    int32_t _ForcePressedFrames_k__BackingField;
};

struct Input_InputButtonProcessor {
    struct Input_InputButtonProcessor__Class *klass;
    MonitorData *monitor;
    struct Input_InputButtonProcessor__Fields fields;
};

struct __declspec(align(8)) SeinGrenadeAttack_AutoAimSettings__Fields {
    float MaxDistance;
    float MinDistance;
};

struct SeinGrenadeAttack_AutoAimSettings {
    struct SeinGrenadeAttack_AutoAimSettings__Class *klass;
    MonitorData *monitor;
    struct SeinGrenadeAttack_AutoAimSettings__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinTeleportSpell___Fields {
    bool HasState;
    struct SeinTeleportSpell *State;
};

struct CharacterStateWrapper_1_SeinTeleportSpell_ {
    struct CharacterStateWrapper_1_SeinTeleportSpell___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinTeleportSpell___Fields fields;
};

struct SeinTeleportSpell__Fields {
    struct SeinGrenadeAttack__Fields _;
    struct Action *OnBeforeOriTeleport;
    struct Action *OnAfterOriTeleport;
};

struct SeinTeleportSpell {
    struct SeinTeleportSpell__Class *klass;
    MonitorData *monitor;
    struct SeinTeleportSpell__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinBounceAbility___Fields {
    bool HasState;
    struct SeinBounceAbility *State;
};

struct CharacterStateWrapper_1_SeinBounceAbility_ {
    struct CharacterStateWrapper_1_SeinBounceAbility___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinBounceAbility___Fields fields;
};

struct SeinBounceAbility__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation *Jump;
    struct BaseAnimator *AppearAnimator;
    float m_fallTime;
};

struct SeinBounceAbility {
    struct SeinBounceAbility__Class *klass;
    MonitorData *monitor;
    struct SeinBounceAbility__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritLeashAbility___Fields {
    bool HasState;
    struct SeinSpiritLeashAbility *State;
};

struct CharacterStateWrapper_1_SeinSpiritLeashAbility_ {
    struct CharacterStateWrapper_1_SeinSpiritLeashAbility___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinSpiritLeashAbility___Fields fields;
};

enum class SeinSpiritLeashAbility_State__Enum : int32_t {
    Idle = 0x00000000,
    Ready = 0x00000001,
    QuickAttack = 0x00000002,
    HoldReleaseAttack = 0x00000003,
    HoldAttack = 0x00000004,
    Hook = 0x00000005,
    HookPull = 0x00000006,
    Hooked = 0x00000007,
    Fling = 0x00000008,
};

struct SeinSpiritLeashAbility_State__Enum__Boxed {
    struct SeinSpiritLeashAbility_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinSpiritLeashAbility_State__Enum value;
    
};

struct SeinSpiritLeashAbility_LeashableInfo {
    struct GameObject *GameObject;
    struct Vector3 AttackableRelativePosition;
    struct Vector3 SurfaceWorldPos;
    struct ISpiritLeashAttackable *SpiritLeashAttackable;
    struct IAttackable *Attackable;
    struct GrabbableSurface *Surface;
};

struct SeinSpiritLeashAbility_LeashableInfo__Boxed {
    struct SeinSpiritLeashAbility_LeashableInfo__Class *klass;
    MonitorData *monitor;
    struct SeinSpiritLeashAbility_LeashableInfo fields;
};

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
    struct GameObject *LeashMarkPrefab;
    struct Transform *m_leashMarkPositionTransform;
    struct Vector3 m_lastMarkPosition;
    float TimeTillPullCheck;
    float MinDistanceToFlingTarget;
    float SurfaceTargetSmoothingDelay;
    struct Event_1 *EndGrabSoundEvent;
    struct CapsuleCollider *m_oriCollider;
    struct LeashMarkEffect *m_leashMark;
    float m_maxSlideAlongCeilingTimer;
    int32_t TestEffectCount;
    struct Vector3 m_initialDirection;
    struct Vector3 m_predictedTarget;
    float TargetPredictionDistance;
    struct List_1_SpiritLeashEffectPoseAnimator_ *m_spiritLeashEffect;
    bool m_wasGrabbing;
    bool m_wasHooking;
    SeinSpiritLeashAbility_State__Enum m_currentState;
    
    struct PlatformMovement *m_platformMovement;
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
    struct SoundProvider *leashThrowSound;
    struct SoundProvider *noLeashAvailableSound;
    struct SoundProvider *pullSound;
    struct SoundProvider *pulledSound;
    struct SeinBashVersionAsset *BashVersionAsset;
    struct LayerMask stopMask;
    struct LayerMask HookDetectionBlockerMask;
    float MinThrowNormalizedTimeForQuickAttack;
    float TimeBeforeInterruptIsAllowed;
    float TimeBeforeJumpCancelIsAllowed;
    struct AnimationCurve *InterruptSpeedCurve;
    struct Vector2 MinInterruptSpeedMultiplier;
    float MinInterruptSpeedMaximum;
    struct Vector2 MaxInterruptSpeedMultiplier;
    float MaxInterruptSpeedMaximum;
    struct Vector2 HookFlingSpeedMaxMultiplier;
    float HookFlingSpeedMaximum;
    struct DamageType__Enum__Array *DamageThatWillInterruptLeash;
    float TargetReadySpeed;
    float MoveToReadySpeed;
    float LeashReadyDrag;
    struct Vector2 m_flingVelocity;
    bool m_spriteMirrorLock;
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ *m_recentHitObjects;
    struct List_1_UnityEngine_GameObject_ *m_removeObjects;
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
    struct AnimationCurve *FrictionCurve;
    float m_remainingFrictionTime;
    float FrictionDuration;
    bool isGrabbing;
    float HookDirectionErrorAngle;
    float HookDirectionErrorAngleNoInput;
    float HookDirectionErrorAngleRetainTargetBonus;
    float FacingDirectionErrorAngle;
    struct ISpiritLeashAttackable *lastTargetSpiritLeashAttackable;
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ *m_markPerObject;
    struct GameObject *m_markedObject;
    struct List_1_UnityEngine_GameObject_ *m_markedObjectsToRemove;
    float DistanceCostMultiplier;
    float AngleCostMultiplier;
    float AngleCostNoInputMultiplier;
    float InputDirectionOffsetY;
    float NoInputDirectionOffsetY;
    struct GameObject *m_lastTargetObject;
    bool m_lastTargetSustained;
    float m_lastTargetTime;
    struct SeinSpiritLeashAbility_RayDependency__Array *m_rayDependencies;
    struct GrabbableSurface__Array *m_raySurfaces;
    struct Vector3__Array *m_rayHitPoints;
    struct Int32__Array *m_rayModeDebug;
    bool UseJobs;
    struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
    struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
    struct SpherecastCommand__Array *m_cmds;
    struct Boolean__Array *m_hitResults;
    bool m_hasCreatedNativeArrays;
    int32_t m_requestId;
    struct RaycastHit__Array *m_raycastHits;
    bool m_hasCreatedIDsAndHits;
    struct Guid _AttackableConsumerID_k__BackingField;
    float HookJumpGravityOverride;
    float m_prevGravity;
    struct List_1_Moon_ComboSystem_IComboMove_ *_ComboMoves_k__BackingField;
    float _CoolDown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
    
};

struct SeinSpiritLeashAbility {
    struct SeinSpiritLeashAbility__Class *klass;
    MonitorData *monitor;
    struct SeinSpiritLeashAbility__Fields fields;
};

enum class LeashMarkEffect_State__Enum : int32_t {
    Hidden = 0x00000000,
    Appearing = 0x00000001,
    Playing = 0x00000002,
    Disappearing = 0x00000003,
};

struct LeashMarkEffect_State__Enum__Boxed {
    struct LeashMarkEffect_State__Enum__Class *klass;
    MonitorData *monitor;
    LeashMarkEffect_State__Enum value;
    
};

struct LeashMarkEffect__Fields {
    struct Suspendable__Fields _;
    struct MoonTimeline *Appearing;
    struct MoonTimeline *Playing;
    struct MoonTimeline *Disappearing;
    struct Transform *Mark;
    struct Transform *DirectionPreview;
    LeashMarkEffect_State__Enum m_currentState;
    
    bool _IsSuspended_k__BackingField;
    struct IEnumerator *m_delayedDestroyInactive;
};

struct LeashMarkEffect {
    struct LeashMarkEffect__Class *klass;
    MonitorData *monitor;
    struct LeashMarkEffect__Fields fields;
};

struct __declspec(align(8)) List_1_SpiritLeashEffectPoseAnimator___Fields {
    struct SpiritLeashEffectPoseAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SpiritLeashEffectPoseAnimator_ {
    struct List_1_SpiritLeashEffectPoseAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_SpiritLeashEffectPoseAnimator___Fields fields;
};

struct SpiritLeashEffectPoseAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *CircleScaleAnimation;
    struct LineRenderer *LineRenderer;
    struct Transform *LightObject;
    struct Transform *CircleTransform;
    struct SeinCharacter *m_sein;
    struct IAttackable *m_target;
    struct Vector3 m_targetRelativePosition;
    struct Transform *m_targetTransform;
    struct Vector3 m_circleStartScale;
    float EffectDuration;
    float m_currentTime;
    struct Transform *GlowSprite;
    struct Vector3 GlowOffsetStart;
    struct Vector3 GlowOffsetEnd;
    struct AnimationCurve *DistanceOverTime;
    struct AnimationCurve *TransparencyOverTime;
    int32_t VertexCount;
    struct Vector3__Array *m_positions;
    struct SpiritLeashEffectKeyframe__Array *Frames;
    struct AnimationCurve *widthCurve;
    struct AnimationCurve *widthOverTime;
    float randomTimeOffset;
    float EndDistanceOffset;
    float EndDistancePerpendicularOffset;
    struct Transform *m_handTransformCache;
    struct Vector2 endOffset;
};

struct SpiritLeashEffectPoseAnimator {
    struct SpiritLeashEffectPoseAnimator__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashEffectPoseAnimator__Fields fields;
};

struct __declspec(align(8)) SpiritLeashEffectKeyframe__Fields {
    float Time;
    struct SpiritLeashEffectPose *Pose;
};

struct SpiritLeashEffectKeyframe {
    struct SpiritLeashEffectKeyframe__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashEffectKeyframe__Fields fields;
};

struct SpiritLeashEffectPose__Fields {
    struct ScriptableObject__Fields _;
    struct AnimationCurve *pointDistributionCurve;
    struct AnimationCurve *verticalSineTimeProgression;
    struct AnimationCurve *verticalSineSpeedOverTime;
    struct AnimationCurve *verticalSineAmplitude;
    struct AnimationCurve *verticalSineFrequency;
    struct AnimationCurve *horizontalSineTimeProgression;
    struct AnimationCurve *horizontalSineSpeedOverTime;
    struct AnimationCurve *horizontalSineAmplitude;
    struct AnimationCurve *horizontalSineFrequency;
    float randomTimeOffset;
};

struct SpiritLeashEffectPose {
    struct SpiritLeashEffectPose__Class *klass;
    MonitorData *monitor;
    struct SpiritLeashEffectPose__Fields fields;
};

struct SpiritLeashEffectKeyframe__Array {
    struct SpiritLeashEffectKeyframe__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SpiritLeashEffectKeyframe *vector[32];
};

struct SpiritLeashEffectPoseAnimator__Array {
    struct SpiritLeashEffectPoseAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SpiritLeashEffectPoseAnimator *vector[32];
};

struct IEnumerator_1_SpiritLeashEffectPoseAnimator_ {
    struct IEnumerator_1_SpiritLeashEffectPoseAnimator___Class *klass;
    MonitorData *monitor;
};

struct ISpiritLeashAttackable {
    struct ISpiritLeashAttackable__Class *klass;
    MonitorData *monitor;
};

struct DamageType__Enum__Array {
    struct DamageType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    DamageType__Enum vector[32];
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_GameObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ {
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ {
    int32_t hashCode;
    int32_t next;
    struct GameObject *key;
    struct LeashMarkEffect *value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Fields {
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Fields {
    struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};

struct LeashMarkEffect__Array {
    struct LeashMarkEffect__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LeashMarkEffect *vector[32];
};

struct IEnumerator_1_LeashMarkEffect_ {
    struct IEnumerator_1_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_LeashMarkEffect_ {
    struct ICollection_1_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ {
    struct GameObject *key;
    struct LeashMarkEffect *value;
};

struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Boxed {
    struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ fields;
};

struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Array {
    struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_LeashMarkEffect_ {
    struct IEnumerable_1_LeashMarkEffect___Class *klass;
    MonitorData *monitor;
};

struct SeinSpiritLeashAbility_RayDependency {
    int32_t i;
    int32_t j;
};

struct SeinSpiritLeashAbility_RayDependency__Boxed {
    struct SeinSpiritLeashAbility_RayDependency__Class *klass;
    MonitorData *monitor;
    struct SeinSpiritLeashAbility_RayDependency fields;
};

struct SeinSpiritLeashAbility_RayDependency__Array {
    struct SeinSpiritLeashAbility_RayDependency__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SeinSpiritLeashAbility_RayDependency vector[32];
};

struct SpherecastCommand__Array {
    struct SpherecastCommand__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SpherecastCommand vector[32];
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritSlash___Fields {
    bool HasState;
    struct SeinSpiritSlash *State;
};

struct CharacterStateWrapper_1_SeinSpiritSlash_ {
    struct CharacterStateWrapper_1_SeinSpiritSlash___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinSpiritSlash___Fields fields;
};

enum class SeinSpiritSlash_State__Enum : int32_t {
    Idle = 0x00000000,
    Attacking = 0x00000001,
};

struct SeinSpiritSlash_State__Enum__Boxed {
    struct SeinSpiritSlash_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinSpiritSlash_State__Enum value;
    
};

struct SeinSpiritSlash__Fields {
    struct CharacterState__Fields _;
    float AirJumpSpeed;
    float AttackGravity;
    float HorizontalSpeed;
    struct AnimationCurve *HorizontalSpeedCurve;
    struct List_1_LightAttackData_ *AirLightAttackData;
    struct List_1_LightAttackData_ *GroundLightAttackData;
    float StingerAdjustSpeed;
    float StingerDamageForce;
    float StingerDistanceFromTarget;
    float StingerMinimumDistance;
    float StingerRange;
    float StingerSpeed;
    float AttackRange;
    float SlashAngleAdjustSpeed;
    struct ISpiritSlashAttackable *m_closestAttackable;
    int32_t m_comboIndex;
    float m_cooldownDuration;
    bool m_currentIsStinger;
    SeinSpiritSlash_State__Enum m_currentState;
    
    float m_currentStateTime;
    struct Transform *m_currentTargetTransform;
    bool m_hasTarget;
    bool m_hasDealtDamage;
    bool m_hasSpawnedSlashEffect;
    bool m_spriteMirrorLock;
    struct Vector3 m_stingerTargetPosition;
    bool m_triggeredCombo;
    float AttackAirDeceleration;
    float AttackGroundDeceleration;
    float SlashAngle;
    struct LightAttackData *m_currentAttackData;
    struct GameObject *m_slashEffect;
};

struct SeinSpiritSlash {
    struct SeinSpiritSlash__Class *klass;
    MonitorData *monitor;
    struct SeinSpiritSlash__Fields fields;
};

struct __declspec(align(8)) List_1_LightAttackData___Fields {
    struct LightAttackData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LightAttackData_ {
    struct List_1_LightAttackData___Class *klass;
    MonitorData *monitor;
    struct List_1_LightAttackData___Fields fields;
};

struct __declspec(align(8)) LightAttackData__Fields {
    float Duration;
    float ComboDelay;
    float Cooldown;
    float SlashEffectDelay;
    float DealDamageDelay;
    DamageType__Enum DamageType;
    
    float Damage;
    struct MoonAnimation *NewAnimation;
    struct GameObject *Effect;
    struct GameObject *SlashEffect;
    struct SoundProvider *HitSound;
    struct SoundProvider *SlashSound;
};

struct LightAttackData {
    struct LightAttackData__Class *klass;
    MonitorData *monitor;
    struct LightAttackData__Fields fields;
};

struct LightAttackData__Array {
    struct LightAttackData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LightAttackData *vector[32];
};

struct IEnumerator_1_LightAttackData_ {
    struct IEnumerator_1_LightAttackData___Class *klass;
    MonitorData *monitor;
};

struct ISpiritSlashAttackable {
    struct ISpiritSlashAttackable__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinHeavySpiritSlash___Fields {
    bool HasState;
    struct SeinHeavySpiritSlash *State;
};

struct CharacterStateWrapper_1_SeinHeavySpiritSlash_ {
    struct CharacterStateWrapper_1_SeinHeavySpiritSlash___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinHeavySpiritSlash___Fields fields;
};

enum class SeinHeavySpiritSlash_State__Enum : int32_t {
    Idle = 0x00000000,
    Charge = 0x00000001,
    Slash = 0x00000002,
};

struct SeinHeavySpiritSlash_State__Enum__Boxed {
    struct SeinHeavySpiritSlash_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinHeavySpiritSlash_State__Enum value;
    
};

struct SeinHeavySpiritSlash__Fields {
    struct CharacterState__Fields _;
    float Deceleration;
    float HorizontalSpeed;
    struct AnimationCurve *HorizontalSpeedCurve;
    float EnergyCost;
    struct MoonAnimation *Charge;
    struct SoundProvider *ChargeSoundProvider;
    struct SoundProvider *SlashSoundProvider;
    struct GameObject *SlashEffect;
    struct GameObject *HitEffect;
    float SlashAngle;
    float ChargeDuration;
    float SlashDuration;
    struct AnimationCurve *SlashRadius;
    DamageType__Enum DamageType;
    
    float Damage;
    struct AnimationCurve *SlashAngleCurve;
    SeinHeavySpiritSlash_State__Enum m_currentState;
    
    float m_currentStateTime;
    bool m_spriteMirrorLock;
    struct List_1_IAttackable_ *m_haveBeenHit;
    bool m_hasDealtDamage;
    struct GameObject *m_slashEffect;
    struct GameObject *m_hitEffect;
    bool m_slashedMidAir;
};

struct SeinHeavySpiritSlash {
    struct SeinHeavySpiritSlash__Class *klass;
    MonitorData *monitor;
    struct SeinHeavySpiritSlash__Fields fields;
};

struct __declspec(align(8)) List_1_IAttackable___Fields {
    struct IAttackable__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

}
