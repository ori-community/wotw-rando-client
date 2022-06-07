namespace app {
struct SkeetoRunAwayBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoRunAwayBehaviour__StaticFields {
};

struct SkeetoRunAwayBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoRunAwayBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoRunAwayBehaviour__VTable vtable;
};

enum class SkeetoShootBehaviour_State__Enum : int32_t {
    Unset = 0x00000000,
    FlipTowardsTarget = 0x00000001,
    PreShoot = 0x00000002,
    PostShoot = 0x00000003,
};

struct SkeetoShootBehaviour_State__Enum__Boxed {
    struct SkeetoShootBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    SkeetoShootBehaviour_State__Enum value;
    
};

struct SkeetoShootBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct MoonTimeline *FlipTimeline;
    struct EventTriggerAnimator *FlipTrigger;
    bool UnlockLookDirectionOnEnd;
    struct MoonTimeline *ShootTimeline;
    struct EventTriggerAnimator *ShootTrigger;
    struct ScaredySkeetoProjectileSettings *Settings;
    struct PrefabSpawner *ProjectileSpawner;
    struct Transform *ShootOrigin;
    float RecoilForce;
    float PreShotDuration;
    float DecelerationMultiplier;
    float AimVerticalOffset;
    float MaxRotationSpeed;
    float MaxAimAssistDegrees;
    bool AllowLookDirectionFlip;
    SkeetoShootBehaviour_State__Enum m_currentState;
    
    struct MoonTimeline *m_currentTimeline;
    float m_lookDirection;
    float m_postShootAngle;
    float m_postShootTimelineTimestamp;
    float m_timeInState;
    float m_targetLookDirection;
    bool m_flipTimelineStarted;
};

struct SkeetoShootBehaviour {
    struct SkeetoShootBehaviour__Class *klass;
    MonitorData *monitor;
    struct SkeetoShootBehaviour__Fields fields;
};

struct SkeetoShootBehaviour_State__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct SkeetoShootBehaviour_State__Enum__StaticFields {
};

struct SkeetoShootBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoShootBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoShootBehaviour_State__Enum__VTable vtable;
};

struct SkeetoShootBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoShootBehaviour__StaticFields {
};

struct SkeetoShootBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoShootBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoShootBehaviour__VTable vtable;
};

struct SkeetoShootBehaviour_c {
    struct SkeetoShootBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct SkeetoShootBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkeetoShootBehaviour_c__StaticFields {
    struct SkeetoShootBehaviour_c *__9;
    struct Action *__9__33_0;
    struct Action *__9__41_0;
    struct Action *__9__46_0;
    struct Action *__9__46_1;
};

struct SkeetoShootBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoShootBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoShootBehaviour_c__VTable vtable;
};

struct SkeetoBombAttack__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    float ProximityDistance;
};

struct SkeetoBombAttack {
    struct SkeetoBombAttack__Class *klass;
    MonitorData *monitor;
    struct SkeetoBombAttack__Fields fields;
};

struct SkeetoBombAttack__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoBombAttack__StaticFields {
};

struct SkeetoBombAttack__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoBombAttack__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoBombAttack__VTable vtable;
};

enum class SkeetoDiveAttackBehaviour_DiveAttackState__Enum : int32_t {
    Unset = 0x00000000,
    ScheduledJobs = 0x00000001,
    FlipTowardsTarget = 0x00000002,
    AttackAnticipation = 0x00000003,
    AttackLoop = 0x00000004,
    AttackResolve = 0x00000005,
    HitWallHit = 0x00000006,
    HitWallStunnedLoop = 0x00000007,
    HitWallResolve = 0x00000008,
    HitWallBackward = 0x00000009,
};

struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Boxed {
    struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class *klass;
    MonitorData *monitor;
    SkeetoDiveAttackBehaviour_DiveAttackState__Enum value;
    
};

struct SkeetoDiveAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct RootMotionProcessorData *RootMotionSetting;
    bool AttackOnlyTargetsBelow;
    float MinXDistanceToTarget;
    float MinYDistanceToTarget;
    bool FailIfOffScreen;
    struct MoonTimeline *FlipTimeline;
    struct EventTriggerAnimator *FlipTrigger;
    bool UnlockLookDirectionOnExit;
    struct MoonTimeline *AnticipationTimeline;
    struct MoonTimeline *AttackTimeline;
    float DashSpeed;
    float DashTargetArriveDistance;
    float AttackAcceleration;
    float MaxAttackLoopTime;
    float Deceleration;
    float TurningSpeed;
    struct SplitTurnAnimationMoonTimeline *ResolveAnimation;
    float WallHitDotTreshold;
    struct MoonTimeline *HitWallTimeline;
    float StunTime;
    struct MoonTimeline *StunTimeline;
    struct MoonTimeline *HitWallResolveTimeline;
    struct MoonTimeline *HitWallBackwardTimeline;
    float BounceOffWallAmountForStun;
    int32_t AttackTokensRequired;
    struct SphereCollider *ClearanceRequired;
    bool DebugPauseOnFlipTowardsTarget;
    bool DebugPauseOnAttackAnticipation;
    bool DebugPauseOnAttackLoop;
    bool DebugPauseOnAttackResolve;
    bool DebugPauseOnHitWallHit;
    bool DebugPauseOnHitWallStunnedLoop;
    bool DebugPauseOnHitWallResolve;
    bool DebugPauseOnHitWallBackward;
    bool DebugPauseOnTargetLost;
    SkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;
    
    struct SkeetoHitReaction *m_hitReaction;
    struct BatchedSpherecast *m_batchedRaycasts;
    struct RaycastHit__Array *m_hits;
    struct SpherecastCommand__Array *m_commands;
    float m_timeInState;
    struct MoonTimeline *m_currentTimeline;
    struct Vector2 m_attackDirection;
    struct Vector2 m_attackVelocity;
    float m_targetLookDirection;
    struct Rigidbody *m_rigidbody;
    struct Vector3 _InitialTargetPosition_k__BackingField;
};

struct SkeetoDiveAttackBehaviour {
    struct SkeetoDiveAttackBehaviour__Class *klass;
    MonitorData *monitor;
    struct SkeetoDiveAttackBehaviour__Fields fields;
};

struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__StaticFields {
};

struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__VTable vtable;
};

struct SkeetoDiveAttackBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoDiveAttackBehaviour__StaticFields {
};

struct SkeetoDiveAttackBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoDiveAttackBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoDiveAttackBehaviour__VTable vtable;
};

struct SkeetoDiveAttackBehaviour_c {
    struct SkeetoDiveAttackBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct SkeetoDiveAttackBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkeetoDiveAttackBehaviour_c__StaticFields {
    struct SkeetoDiveAttackBehaviour_c *__9;
    struct Action *__9__82_0;
};

struct SkeetoDiveAttackBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoDiveAttackBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoDiveAttackBehaviour_c__VTable vtable;
};

struct SkeetoEatingBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct EntityReactionBehaviour *HitReaction;
    float EatingTime;
    float Deceleration;
    float m_eatingTimer;
    struct Vector3 m_velocity;
};

struct SkeetoEatingBehaviour {
    struct SkeetoEatingBehaviour__Class *klass;
    MonitorData *monitor;
    struct SkeetoEatingBehaviour__Fields fields;
};

struct SkeetoEatingBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoEatingBehaviour__StaticFields {
};

struct SkeetoEatingBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoEatingBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoEatingBehaviour__VTable vtable;
};

struct SkeetoLockLookDirection__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    bool LockDirection;
    struct MoonVector3 *m_targetPosition;
    struct MoonFloat *m_minXDistanceFromTarget;
    struct SkeetoLocomotion *m_skeetoLocomotion;
};

struct SkeetoLockLookDirection {
    struct SkeetoLockLookDirection__Class *klass;
    MonitorData *monitor;
    struct SkeetoLockLookDirection__Fields fields;
};

struct SkeetoLockLookDirection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct SkeetoLockLookDirection__StaticFields {
};

struct SkeetoLockLookDirection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoLockLookDirection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoLockLookDirection__VTable vtable;
};

struct SkeetoLocomotionIdleBehaviour_c {
    struct SkeetoLocomotionIdleBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct SkeetoLocomotionIdleBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkeetoLocomotionIdleBehaviour_c__StaticFields {
    struct SkeetoLocomotionIdleBehaviour_c *__9;
    struct Action *__9__30_0;
};

struct SkeetoLocomotionIdleBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoLocomotionIdleBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoLocomotionIdleBehaviour_c__VTable vtable;
};

struct SkeetoLocomotionTurningBehaviour__Fields {
    struct LocomotionTurningTimelineBehaviour__Fields _;
};

struct SkeetoLocomotionTurningBehaviour {
    struct SkeetoLocomotionTurningBehaviour__Class *klass;
    MonitorData *monitor;
    struct SkeetoLocomotionTurningBehaviour__Fields fields;
};

struct SkeetoLocomotionTurningBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_TargetLookDirectionX;
    VirtualInvokeData set_TargetLookDirectionX;
    VirtualInvokeData PlayAnimation;
    VirtualInvokeData ShouldEndBehaviour;
    VirtualInvokeData get_IsPlaying;
    VirtualInvokeData CanCancel;
    VirtualInvokeData RootMotionModifier;
};

struct SkeetoLocomotionTurningBehaviour__StaticFields {
};

struct SkeetoLocomotionTurningBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoLocomotionTurningBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoLocomotionTurningBehaviour__VTable vtable;
};

struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields {
    struct CompositeNode__Fields _;
    struct List_1_SkeetoEntity_SkeetoState_ *Options;
};

struct EnumSelector_1_SkeetoEntity_SkeetoState_ {
    struct EnumSelector_1_SkeetoEntity_SkeetoState___Class *klass;
    MonitorData *monitor;
    struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields fields;
};

struct SkeetoStateSelector__Fields {
    struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields _;
};

struct SkeetoStateSelector {
    struct SkeetoStateSelector__Class *klass;
    MonitorData *monitor;
    struct SkeetoStateSelector__Fields fields;
};

struct __declspec(align(8)) List_1_SkeetoEntity_SkeetoState___Fields {
    struct SkeetoEntity_SkeetoState__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SkeetoEntity_SkeetoState_ {
    struct List_1_SkeetoEntity_SkeetoState___Class *klass;
    MonitorData *monitor;
    struct List_1_SkeetoEntity_SkeetoState___Fields fields;
};

enum class SkeetoEntity_SkeetoState__Enum : int32_t {
    Normal = 0x00000000,
    Bomb = 0x00000001,
};

struct SkeetoEntity_SkeetoState__Enum__Boxed {
    struct SkeetoEntity_SkeetoState__Enum__Class *klass;
    MonitorData *monitor;
    SkeetoEntity_SkeetoState__Enum value;
    
};

struct SkeetoEntity_SkeetoState__Enum__Array {
    struct SkeetoEntity_SkeetoState__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    SkeetoEntity_SkeetoState__Enum vector[32];
};

struct IEnumerator_1_SkeetoEntity_SkeetoState_ {
    struct IEnumerator_1_SkeetoEntity_SkeetoState___Class *klass;
    MonitorData *monitor;
};

struct SkeetoEntity_SkeetoState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct SkeetoEntity_SkeetoState__Enum__StaticFields {
};

struct SkeetoEntity_SkeetoState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoEntity_SkeetoState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoEntity_SkeetoState__Enum__VTable vtable;
};

struct SkeetoEntity_SkeetoState__Enum__Array__VTable {
};

struct SkeetoEntity_SkeetoState__Enum__Array__StaticFields {
};

struct SkeetoEntity_SkeetoState__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoEntity_SkeetoState__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoEntity_SkeetoState__Enum__Array__VTable vtable;
};

struct IEnumerator_1_SkeetoEntity_SkeetoState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SkeetoEntity_SkeetoState___StaticFields {
};

struct IEnumerator_1_SkeetoEntity_SkeetoState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SkeetoEntity_SkeetoState___VTable vtable;
};

struct List_1_SkeetoEntity_SkeetoState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_SkeetoEntity_SkeetoState___StaticFields {
    struct SkeetoEntity_SkeetoState__Enum__Array *_emptyArray;
};

struct List_1_SkeetoEntity_SkeetoState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SkeetoEntity_SkeetoState___VTable vtable;
};

struct EnumSelector_1_SkeetoEntity_SkeetoState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData AddChild;
    VirtualInvokeData __unknown;
};

struct EnumSelector_1_SkeetoEntity_SkeetoState___StaticFields {
};

struct EnumSelector_1_SkeetoEntity_SkeetoState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnumSelector_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnumSelector_1_SkeetoEntity_SkeetoState___VTable vtable;
};

struct SkeetoStateSelector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData AddChild;
    VirtualInvokeData GetEnumValue;
};

struct SkeetoStateSelector__StaticFields {
};

struct SkeetoStateSelector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoStateSelector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoStateSelector__VTable vtable;
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct SkeetoEntity *Entity;
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
    struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class *klass;
    MonitorData *monitor;
    struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Fields fields;
};

enum class SkeetoSpawnType__Enum : int32_t {
    ZNegative = 0x00000000,
    ZPositive_CurrentlyBroken = 0x00000001,
    SpawnFromNest = 0x00000002,
};

struct SkeetoSpawnType__Enum__Boxed {
    struct SkeetoSpawnType__Enum__Class *klass;
    MonitorData *monitor;
    SkeetoSpawnType__Enum value;
    
};

}
