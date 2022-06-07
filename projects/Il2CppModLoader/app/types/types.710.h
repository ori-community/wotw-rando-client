namespace app {
struct PiranhaAttackBehaviour {
    struct PiranhaAttackBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaAttackBehaviour__Fields fields;
};

struct SwimmingLocomotion__Fields {
    struct Locomotion__Fields _;
    struct EntityLocomotionTask *IdleBehaviour;
    struct TraversalBehaviour *SwimmingBehaviour;
    struct VolumeEntityMovementProcessor *m_volumeMovement;
    bool FlipOnZAxis;
    float WaterCurrentSpeedLerp;
    float ArrivalDistance;
    bool m_lookDirectionLocked;
    bool m_mirrorRotationOnFlip;
    struct Transform *m_mirrorTransform;
    struct Transform *m_rotationTransform;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
    
    struct Nullable_1_Single_ m_registeredLookDirection;
};

struct SwimmingLocomotion {
    struct SwimmingLocomotion__Class *klass;
    MonitorData *monitor;
    struct SwimmingLocomotion__Fields fields;
};

struct EntityBehaviourNode_1_PiranhaEntity___VTable {
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
    VirtualInvokeData __unknown;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct EntityBehaviourNode_1_PiranhaEntity___StaticFields {
};

struct EntityBehaviourNode_1_PiranhaEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviourNode_1_PiranhaEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviourNode_1_PiranhaEntity___VTable vtable;
};

struct SwimmingLocomotion__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveToPoint;
    VirtualInvokeData MoveInTheDirection;
    VirtualInvokeData Stop;
    VirtualInvokeData get_TraversalTier;
    VirtualInvokeData set_TraversalTier;
    VirtualInvokeData get_FeetPosition;
    VirtualInvokeData get_HasArrivedAtTarget;
    VirtualInvokeData get_IsMovingToTarget;
    VirtualInvokeData get_GravityDirection;
    VirtualInvokeData OnEntityReset;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
    VirtualInvokeData get_PositionForWaterfallInteraction;
    VirtualInvokeData get_SpeedForWaterfallInteraction;
    VirtualInvokeData set_SpeedForWaterfallInteraction;
    VirtualInvokeData get_BoundsForWaterfallInteraction;
    VirtualInvokeData get_WaterfallIntersectionMode;
    VirtualInvokeData get_RigidbodyForWaterfallInteraction;
    VirtualInvokeData get_IsFlamable;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_FeetTransform;
    VirtualInvokeData get_FeetPosition_1;
    VirtualInvokeData get_HasArrivedAtTarget_1;
    VirtualInvokeData get_Gravity;
    VirtualInvokeData set_Gravity;
    VirtualInvokeData get_Weight;
    VirtualInvokeData set_Weight;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_ShouldReset;
    VirtualInvokeData get_IsMovingToTarget_1;
    VirtualInvokeData get_GravityDirection_1;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnPrewarm;
    VirtualInvokeData OnEntityInitialization_1;
    VirtualInvokeData Awake;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData ConfigureStateMachine;
    VirtualInvokeData get_DefaultFSMState;
    VirtualInvokeData OnEntityReset_1;
    VirtualInvokeData ResetLocomotion;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData UpdateLocomotionBehaviours;
    VirtualInvokeData GetNextBehaviour;
    VirtualInvokeData MoveToPoint_1;
    VirtualInvokeData MoveInTheDirection_1;
    VirtualInvokeData Stop_1;
    VirtualInvokeData SetLookDirectionX;
    VirtualInvokeData SetLookDirection;
    VirtualInvokeData SetLookDirectionTowardsPoint;
    VirtualInvokeData get_LookDirection;
    VirtualInvokeData get_IsFacingLeft;
    VirtualInvokeData get_IsTurning;
    VirtualInvokeData get_MovementProcessor;
    VirtualInvokeData PropagateTargetPoint;
    VirtualInvokeData InstantFlip;
    VirtualInvokeData get_LookDirection_1;
    VirtualInvokeData get_LookDirectionXYNormalized;
    VirtualInvokeData get_IsFacingLeft_1;
};

struct SwimmingLocomotion__StaticFields {
};

struct SwimmingLocomotion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwimmingLocomotion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwimmingLocomotion__VTable vtable;
};

struct PiranhaAttackBehaviour_State__Enum__VTable {
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

struct PiranhaAttackBehaviour_State__Enum__StaticFields {
};

struct PiranhaAttackBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaAttackBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaAttackBehaviour_State__Enum__VTable vtable;
};

struct PiranhaAttackBehaviour__VTable {
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

struct PiranhaAttackBehaviour__StaticFields {
};

struct PiranhaAttackBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaAttackBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaAttackBehaviour__VTable vtable;
};

struct PiranhaChaseBehaviour__Fields {
    struct EntityBehaviourNode_1_PiranhaEntity___Fields _;
    struct MoonVector3 *TargetPosition;
    float ArriveDistance;
    float ArrivalCheckConeAngle;
    float TraversalTier;
    float MinSubmersion;
    float SubmersionCheckStep;
    int32_t MaxSubmersionChecks;
    struct Vector2 m_targetPosition;
    struct SwimmingLocomotion *m_locomotion;
};

struct PiranhaChaseBehaviour {
    struct PiranhaChaseBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaChaseBehaviour__Fields fields;
};

struct PiranhaChaseBehaviour__VTable {
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

struct PiranhaChaseBehaviour__StaticFields {
};

struct PiranhaChaseBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaChaseBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaChaseBehaviour__VTable vtable;
};

struct PiranhaDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline *DeathTimeline;
    struct MoonTimeline *DeathOnGroundTimeline;
    struct MoonTimeline *ShakeTimeline;
    float MinSubmersion;
    struct Vector2 TargetDrownSpeed;
    float DrownAcceleration;
    struct DeathStartEffectSpawnSetting *DeathStartEffect;
    struct MoonTimeline *m_currentTimeline;
    struct SwimmingLocomotion *m_locomotion;
};

struct PiranhaDeathReactionBehaviour {
    struct PiranhaDeathReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaDeathReactionBehaviour__Fields fields;
};

struct PiranhaDeathReactionBehaviour__VTable {
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
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
};

struct PiranhaDeathReactionBehaviour__StaticFields {
};

struct PiranhaDeathReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaDeathReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaDeathReactionBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_PiranhaEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_PiranhaEntity_ {
    struct EntityReactionBehaviour_1_PiranhaEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_PiranhaEntity___Fields fields;
};

struct EntityHitReactionBehaviour_1_PiranhaEntity___Fields {
    struct EntityReactionBehaviour_1_PiranhaEntity___Fields _;
    struct List_1_DamageType_ *DamageTypePreventingInterruption;
    struct List_1_DamageWeight_ *DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_ *m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_ *m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement *m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;
    
    struct HitReactionSettings *m_kickbackSettings;
};

struct EntityHitReactionBehaviour_1_PiranhaEntity_ {
    struct EntityHitReactionBehaviour_1_PiranhaEntity___Class *klass;
    MonitorData *monitor;
    struct EntityHitReactionBehaviour_1_PiranhaEntity___Fields fields;
};

struct PiranhaHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_PiranhaEntity___Fields _;
    struct MoonTimeline *Hit;
    struct MoonTimeline *ShakeTimeline;
    struct Event_1 *OnAnyHitEvent;
    struct MoonTimeline *m_currentTimeline;
    struct SwimmingLocomotion *m_locomotion;
    struct EntityDamageEvent *_DamageEvent_k__BackingField;
};

struct PiranhaHitReactionBehaviour {
    struct PiranhaHitReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaHitReactionBehaviour__Fields fields;
};

struct EntityReactionBehaviour_1_PiranhaEntity___VTable {
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
    VirtualInvokeData __unknown;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
};

struct EntityReactionBehaviour_1_PiranhaEntity___StaticFields {
};

struct EntityReactionBehaviour_1_PiranhaEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityReactionBehaviour_1_PiranhaEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityReactionBehaviour_1_PiranhaEntity___VTable vtable;
};

struct EntityHitReactionBehaviour_1_PiranhaEntity___VTable {
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
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
    VirtualInvokeData IsDamageTypePreventingInterruption;
    VirtualInvokeData IsInterruptingDamageWeight;
};

struct EntityHitReactionBehaviour_1_PiranhaEntity___StaticFields {
};

struct EntityHitReactionBehaviour_1_PiranhaEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityHitReactionBehaviour_1_PiranhaEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityHitReactionBehaviour_1_PiranhaEntity___VTable vtable;
};

struct PiranhaHitReactionBehaviour__VTable {
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
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
    VirtualInvokeData IsDamageTypePreventingInterruption;
    VirtualInvokeData IsInterruptingDamageWeight;
};

struct PiranhaHitReactionBehaviour__StaticFields {
};

struct PiranhaHitReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaHitReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaHitReactionBehaviour__VTable vtable;
};

enum class PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum : int32_t {
    Linear = 0x00000000,
    Lerp = 0x00000001,
};

struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Boxed {
    struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class *klass;
    MonitorData *monitor;
    PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum value;
    
};

enum class PiranhaLocomotionIdleBehaviour_State__Enum : int32_t {
    Unset = 0x00000000,
    Down = 0x00000001,
    Up = 0x00000002,
};

struct PiranhaLocomotionIdleBehaviour_State__Enum__Boxed {
    struct PiranhaLocomotionIdleBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    PiranhaLocomotionIdleBehaviour_State__Enum value;
    
};

struct PiranhaLocomotionIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline *IdleTimeline;
    struct FloatAnimationParameter *BendParam;
    float UnbendRate;
    float UnrotateSpeed;
    float MaxSpeed;
    PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum AccelerationType;
    
    float Acceleration;
    float LerpRate;
    float MaxDistanceInOneDirection;
    float MaxTimeInOneDirection;
    struct SwimmingLocomotion *m_locomotion;
    struct Vector3 m_initialPosition;
    PiranhaLocomotionIdleBehaviour_State__Enum m_state;
    
    float m_timeInState;
    struct Vector2 m_targetSpeed;
    float m_bendValue;
};

struct PiranhaLocomotionIdleBehaviour {
    struct PiranhaLocomotionIdleBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaLocomotionIdleBehaviour__Fields fields;
};

struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__VTable {
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

struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__StaticFields {
};

struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__VTable vtable;
};

struct PiranhaLocomotionIdleBehaviour_State__Enum__VTable {
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

struct PiranhaLocomotionIdleBehaviour_State__Enum__StaticFields {
};

struct PiranhaLocomotionIdleBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionIdleBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionIdleBehaviour_State__Enum__VTable vtable;
};

struct PiranhaLocomotionIdleBehaviour__VTable {
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
};

struct PiranhaLocomotionIdleBehaviour__StaticFields {
};

struct PiranhaLocomotionIdleBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionIdleBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionIdleBehaviour__VTable vtable;
};

enum class PiranhaLocomotionSwimmingBehaviour_State__Enum : int32_t {
    Unset = 0x00000000,
    Swimming = 0x00000001,
    FlipHorizontal = 0x00000002,
    FlipVertical = 0x00000003,
};

struct PiranhaLocomotionSwimmingBehaviour_State__Enum__Boxed {
    struct PiranhaLocomotionSwimmingBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    PiranhaLocomotionSwimmingBehaviour_State__Enum value;
    
};

struct PiranhaLocomotionSwimmingBehaviour__Fields {
    struct TraversalBehaviour__Fields _;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array *SpeedSettings;
    struct MoonTimeline *SwimmingTimeline;
    struct MoonTimeline *VerticalFlipTimeline;
    struct MoonTimeline *HorizontalFlipTimeline;
    struct FloatAnimationParameter *BendParam;
    float SmoothAngleDeltaFlipTreshold;
    float HorizontalFlipDotTreshold;
    float TargetDirectionToVelocityRatioForFlip;
    float RatioFlipSpeedTreshold;
    float BendSharpnessRate;
    float BendAngleRange;
    float DelayBetweenFlips;
    bool DebugDrawGizmos;
    struct SwimmingLocomotion *m_locomotion;
    struct IActiveAnimation *m_activeAnimation;
    float m_smoothAngleDelta;
    PiranhaLocomotionSwimmingBehaviour_State__Enum m_state;
    
    float m_timeInState;
    struct MoonTimeline *m_currentTimeline;
    struct Vector2 m_currentLookDirection;
    struct Vector2 m_targetMoveDirection;
    struct Transform *m_mirrorTransform;
    float m_flipCooldown;
    struct Vector3 _TargetPosition_k__BackingField;
    int32_t LookUpdateRate;
    int32_t m_delayLook;
};

struct PiranhaLocomotionSwimmingBehaviour {
    struct PiranhaLocomotionSwimmingBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaLocomotionSwimmingBehaviour__Fields fields;
};

struct __declspec(align(8)) PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Fields {
    float MinTier;
    float MaxTier;
    float MaxSpeed;
    float Acceleration;
    float MaxTightTurnAcceleration;
    float RotationSpeed;
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting {
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class *klass;
    MonitorData *monitor;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Fields fields;
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array {
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting *vector[32];
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__StaticFields {
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__VTable vtable;
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__VTable {
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__StaticFields {
};

struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__VTable vtable;
};

struct PiranhaLocomotionSwimmingBehaviour_State__Enum__VTable {
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

struct PiranhaLocomotionSwimmingBehaviour_State__Enum__StaticFields {
};

struct PiranhaLocomotionSwimmingBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionSwimmingBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionSwimmingBehaviour_State__Enum__VTable vtable;
};

struct PiranhaLocomotionSwimmingBehaviour__VTable {
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
    VirtualInvokeData get_TargetPosition;
    VirtualInvokeData set_TargetPosition;
    VirtualInvokeData get_TraversalSpeed;
    VirtualInvokeData set_TraversalSpeed;
    VirtualInvokeData get_TargetPosition_1;
    VirtualInvokeData set_TargetPosition_1;
    VirtualInvokeData get_TraversalSpeed_1;
    VirtualInvokeData set_TraversalSpeed_1;
    VirtualInvokeData IsAtPoint;
    VirtualInvokeData get_HasArrivedAtTarget;
};

struct PiranhaLocomotionSwimmingBehaviour__StaticFields {
};

struct PiranhaLocomotionSwimmingBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PiranhaLocomotionSwimmingBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PiranhaLocomotionSwimmingBehaviour__VTable vtable;
};

struct PiranhaPatrolBehaviour__Fields {
    struct EntityBehaviourNode_1_PiranhaEntity___Fields _;
    int32_t LatitudePointsCount;
    int32_t LongtitdePointsCount;
    float SpeetTier;
    float MinDistanceToTarget;
    float MaxDistanceToTarget;
    float MinLatitudeT;
    float MaxLatitudeT;
    bool LimitToPatrolArea;
    bool LimitToAllowedArea;
    bool ReturnToSpawnPositionOnFail;
    float MaxPatrolTime;
    float MinSubmersion;
    bool UseSelfAsAimTarget;
    bool AllowMoveBelowTarget;
    bool LockFacingDirection;
    float LookLockDelay;
    struct Rigidbody *m_rigidbody;
    bool m_hasValidFinalPosition;
    struct Vector3 m_positionToMoveTo;
    float m_time;
    bool m_lockDirection;
    float m_arrivalTime;
    struct Vector3 m_initialEntityPosition;
    int32_t m_randomIndexOffset;
    struct Vector3__Array_1 *m_positionCache;
    struct Color d_pointsColor;
};

struct PiranhaPatrolBehaviour {
    struct PiranhaPatrolBehaviour__Class *klass;
    MonitorData *monitor;
    struct PiranhaPatrolBehaviour__Fields fields;
};

struct Vector3__Array_1 {
    struct Vector3__Array_1__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Vector3 vector[32];
};

struct Vector3__Array_1__VTable {
};

struct Vector3__Array_1__StaticFields {
};

struct Vector3__Array_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vector3__Array_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vector3__Array_1__VTable vtable;
};

struct PiranhaPatrolBehaviour__VTable {
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

}
