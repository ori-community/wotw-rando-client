namespace app {
struct PetrifiedOwlSingleClawBehaviour_ClawType__Enum__StaticFields {
};

struct PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlSingleClawBehaviour_ClawType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlSingleClawBehaviour_ClawType__Enum__VTable vtable;
};

struct PetrifiedOwlSingleClawBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnStartBehaviour;
    VirtualInvokeData OnEndBehaviour;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData EndCondition;
    VirtualInvokeData GetScore;
    VirtualInvokeData ResetBehaviour;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
};

struct PetrifiedOwlSingleClawBehaviour__StaticFields {
};

struct PetrifiedOwlSingleClawBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlSingleClawBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlSingleClawBehaviour__VTable vtable;
};

enum class PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum : int32_t {
    Left = 0x00000000,
    Right = 0x00000001,
};

struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Boxed {
    struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class *klass;
    MonitorData *monitor;
    PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum value;
    
};

struct PetrifiedOwlSingleClawHighBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float StaminaPerAttack;
    float StaminaThreshold;
    float StaminaThresholdScore;
    float StayInsideTriggerScore;
    float ClawHurtScore;
    PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum Claw;
    
    struct PetrifiedOwlStats *Stats;
    struct BaseAnimator *AttackAnimator;
    struct PlayerStayInsideZoneTrigger *AttackZoneTrigger;
};

struct PetrifiedOwlSingleClawHighBehaviour {
    struct PetrifiedOwlSingleClawHighBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlSingleClawHighBehaviour__Fields fields;
};

struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__VTable {
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

struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__StaticFields {
};

struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__VTable vtable;
};

struct PetrifiedOwlSingleClawHighBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnStartBehaviour;
    VirtualInvokeData OnEndBehaviour;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData EndCondition;
    VirtualInvokeData GetScore;
    VirtualInvokeData ResetBehaviour;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
};

struct PetrifiedOwlSingleClawHighBehaviour__StaticFields {
};

struct PetrifiedOwlSingleClawHighBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlSingleClawHighBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlSingleClawHighBehaviour__VTable vtable;
};

struct PetrifiedOwlStompBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float StayInsideTriggerScore;
    float GrabInnerStiltScore;
    float ScorePerAgitation;
    float SeinPositionPredictionTime;
    struct GameObject *OwlEntity;
    struct PetrifiedOwlStats *Stats;
    struct BaseAnimator *LeftStompAnimator;
    struct BaseAnimator *RightStompAnimator;
    struct PlayerStayInsideZoneTrigger *LeftStompTrigger;
    struct PlayerStayInsideZoneTrigger *RightStompTrigger;
    struct BaseAnimator *m_currentAnimator;
};

struct PetrifiedOwlStompBehaviour {
    struct PetrifiedOwlStompBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlStompBehaviour__Fields fields;
};

struct PetrifiedOwlStompBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnStartBehaviour;
    VirtualInvokeData OnEndBehaviour;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData EndCondition;
    VirtualInvokeData GetScore;
    VirtualInvokeData ResetBehaviour;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
};

struct PetrifiedOwlStompBehaviour__StaticFields {
};

struct PetrifiedOwlStompBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlStompBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlStompBehaviour__VTable vtable;
};

struct SuspendWhenOutOfFrustrumWithCondition___VTable {
};

struct SuspendWhenOutOfFrustrumWithCondition___StaticFields {
};

struct SuspendWhenOutOfFrustrumWithCondition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SuspendWhenOutOfFrustrumWithCondition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SuspendWhenOutOfFrustrumWithCondition___VTable vtable;
};

struct Entity_c {
    struct Entity_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_Moon_IEntityOwned___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_Moon_IEntityOwned_ {
    struct Comparison_1_Moon_IEntityOwned___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_Moon_IEntityOwned___Fields fields;
};

struct Comparison_1_Moon_IEntityOwned___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Comparison_1_Moon_IEntityOwned___StaticFields {
};

struct Comparison_1_Moon_IEntityOwned___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_Moon_IEntityOwned___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_Moon_IEntityOwned___VTable vtable;
};

struct Entity_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Entity_c__StaticFields {
    struct Entity_c *__9;
    struct Comparison_1_Moon_IEntityOwned_ *__9__212_0;
    struct Action *__9__359_0;
};

struct Entity_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Entity_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Entity_c__VTable vtable;
};

struct EntityState__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsRunning_k__BackingField;
};

struct EntityState {
    struct EntityState__Class *klass;
    MonitorData *monitor;
    struct EntityState__Fields fields;
};

struct EntityState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData UpdateState_1;
};

struct EntityState__StaticFields {
};

struct EntityState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityState__VTable vtable;
};

struct EntityBehaviourParameter {
    struct EntityBehaviourParameter__Class *klass;
    MonitorData *monitor;
};

struct EntityBehaviourParameter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct EntityBehaviourParameter__StaticFields {
};

struct EntityBehaviourParameter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviourParameter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviourParameter__VTable vtable;
};

struct EntityDeathEvent__Fields {
    struct EntityDamageEvent__Fields _;
};

struct EntityDeathEvent {
    struct EntityDeathEvent__Class *klass;
    MonitorData *monitor;
    struct EntityDeathEvent__Fields fields;
};

struct EntityDeathEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityDeathEvent__StaticFields {
};

struct EntityDeathEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityDeathEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityDeathEvent__VTable vtable;
};

struct EntityKickbackEvent__Fields {
    struct EntityDamageEvent__Fields _;
    struct Vector2 Direction;
    float Multiplier;
    bool Instant;
    struct Vector2 ForceBeforeMultiplier;
};

struct EntityKickbackEvent {
    struct EntityKickbackEvent__Class *klass;
    MonitorData *monitor;
    struct EntityKickbackEvent__Fields fields;
};

struct EntityKickbackEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityKickbackEvent__StaticFields {
};

struct EntityKickbackEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityKickbackEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityKickbackEvent__VTable vtable;
};

struct LocomotionGoal_c {
    struct LocomotionGoal_c__Class *klass;
    MonitorData *monitor;
};

struct LocomotionGoal_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LocomotionGoal_c__StaticFields {
    struct LocomotionGoal_c *__9;
    struct Action *__9__1_0;
    struct Action_1_Moon_LocomotionGoal_GoalStatus_ *__9__1_1;
};

struct LocomotionGoal_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocomotionGoal_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocomotionGoal_c__VTable vtable;
};

struct Locomotion_StateTransitionEntry {
    struct EntityLocomotionTask *TargetTask;
    struct Func_1_Boolean_ *Condition;
};

struct Locomotion_StateTransitionEntry__Boxed {
    struct Locomotion_StateTransitionEntry__Class *klass;
    MonitorData *monitor;
    struct Locomotion_StateTransitionEntry fields;
};

struct Locomotion_StateTransitionEntry__Array {
    struct Locomotion_StateTransitionEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Locomotion_StateTransitionEntry vector[32];
};

struct Locomotion_StateTransitionEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Locomotion_StateTransitionEntry__StaticFields {
};

struct Locomotion_StateTransitionEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Locomotion_StateTransitionEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Locomotion_StateTransitionEntry__VTable vtable;
};

struct Locomotion_StateTransitionEntry__Array__VTable {
};

struct Locomotion_StateTransitionEntry__Array__StaticFields {
};

struct Locomotion_StateTransitionEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Locomotion_StateTransitionEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Locomotion_StateTransitionEntry__Array__VTable vtable;
};

struct __declspec(align(8)) Locomotion_c_DisplayClass85_0__Fields {
    struct Func_1_Boolean_ *condition;
    struct EntityLocomotionTask *targetTask;
    struct Locomotion *__4__this;
};

struct Locomotion_c_DisplayClass85_0 {
    struct Locomotion_c_DisplayClass85_0__Class *klass;
    MonitorData *monitor;
    struct Locomotion_c_DisplayClass85_0__Fields fields;
};

struct Locomotion_c_DisplayClass85_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Locomotion_c_DisplayClass85_0__StaticFields {
};

struct Locomotion_c_DisplayClass85_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Locomotion_c_DisplayClass85_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Locomotion_c_DisplayClass85_0__VTable vtable;
};

struct SimpleGroundNavigation__Fields {
    struct MonoBehaviour__Fields _;
    struct GroundEntityLocomotion *Locomotion;
    float sphereRadius;
    float arriveDistance;
    float maxJumpHeight;
    float minJumpHeight;
    float maxJumpDistance;
    float minJumpDistance;
    float jumpTryStepDistance;
    float avoidEdgeDistance;
    float maxFloorDistance;
    float maxCeilingDistance;
    float obstacleRayDistance;
    float ledgeRayOriginDistance;
    float obstacleNormalThreshold;
    float maxGroundProjectDistance;
    float runAwayTime;
    float timeSlice;
    struct Vector3 groundTarget;
    struct Vector3 moveVector;
    struct Vector3 nextMovePoint;
    bool directView;
    bool obstacleAhead;
    bool pitAhead;
    bool ceilingUp;
    bool underGround;
    bool abovePlatform;
    bool deadEnd;
    bool runningAway;
    bool canJump;
    float m_runningAway;
    float m_runSide;
    float m_timeout;
};

struct SimpleGroundNavigation {
    struct SimpleGroundNavigation__Class *klass;
    MonitorData *monitor;
    struct SimpleGroundNavigation__Fields fields;
};

struct SimpleGroundNavigation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SimpleGroundNavigation__StaticFields {
};

struct SimpleGroundNavigation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleGroundNavigation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleGroundNavigation__VTable vtable;
};

struct Vitals_DamageProcessHelper_c {
    struct Vitals_DamageProcessHelper_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
    struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields fields;
};

struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Clone_1;
    VirtualInvokeData GetMethodImpl;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetInvocationList;
    VirtualInvokeData CombineImpl;
    VirtualInvokeData RemoveImpl;
    VirtualInvokeData Invoke;
    VirtualInvokeData BeginInvoke;
    VirtualInvokeData EndInvoke;
};

struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___StaticFields {
};

struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___VTable vtable;
};

struct Vitals_DamageProcessHelper_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Vitals_DamageProcessHelper_c__StaticFields {
    struct Vitals_DamageProcessHelper_c *__9;
    struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ *__9__10_0;
};

struct Vitals_DamageProcessHelper_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vitals_DamageProcessHelper_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vitals_DamageProcessHelper_c__VTable vtable;
};

struct Vitals_c {
    struct Vitals_c__Class *klass;
    MonitorData *monitor;
};

struct Vitals_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Vitals_c__StaticFields {
    struct Vitals_c *__9;
    struct Action_1_DamageResult_ *__9__101_0;
    struct Action_1_DamageResult_ *__9__101_1;
};

struct Vitals_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vitals_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vitals_c__VTable vtable;
};

struct __declspec(align(8)) ExecutionOrderMap__Fields {
    struct Dictionary_2_System_Type_System_Int32_ *m_orderByType;
};

struct ExecutionOrderMap {
    struct ExecutionOrderMap__Class *klass;
    MonitorData *monitor;
    struct ExecutionOrderMap__Fields fields;
};

struct ExecutionOrderMap__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData TryGetExecutionOrderFor;
};

struct ExecutionOrderMap__StaticFields {
};

struct ExecutionOrderMap__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExecutionOrderMap__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExecutionOrderMap__VTable vtable;
};

struct FlameExtinguisher__Fields {
    struct MonoBehaviour__Fields _;
};

struct FlameExtinguisher {
    struct FlameExtinguisher__Class *klass;
    MonitorData *monitor;
    struct FlameExtinguisher__Fields fields;
};

struct FlameExtinguisher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnFlameEnter;
};

struct FlameExtinguisher__StaticFields {
};

struct FlameExtinguisher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlameExtinguisher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlameExtinguisher__VTable vtable;
};

struct FlameSpark__Fields {
    struct MonoBehaviour__Fields _;
    struct LayerMask InteractionMask;
    float Radius;
    struct Vector3 Offset;
    int32_t SparkFrames;
    Flammable_FlameColor__Enum Color;
    
    int32_t m_framesRemaining;
};

struct FlameSpark {
    struct FlameSpark__Class *klass;
    MonitorData *monitor;
    struct FlameSpark__Fields fields;
};

struct FlameSpark__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlameSpark__StaticFields {
    struct Collider__Array *s_colliders;
};

struct FlameSpark__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlameSpark__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlameSpark__VTable vtable;
};

struct Flammable_c {
    struct Flammable_c__Class *klass;
    MonitorData *monitor;
};

struct Flammable_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Flammable_c__StaticFields {
    struct Flammable_c *__9;
    struct Action_1_Moon_Flammable_ *__9__59_0;
};

struct Flammable_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Flammable_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Flammable_c__VTable vtable;
};

enum class TriggerEnterPrefabSpawner_VelocityCheckMode__Enum : int32_t {
    Self = 0x00000000,
    Other = 0x00000001,
};

struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Boxed {
    struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class *klass;
    MonitorData *monitor;
    TriggerEnterPrefabSpawner_VelocityCheckMode__Enum value;
    
};

struct TriggerEnterPrefabSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject__Array *Prefabs;
    TriggerEnterPrefabSpawner_VelocityCheckMode__Enum VelocityCheckObject;
    
    float MinimumVelocity;
    bool UseCollisionNormalAsUpRotation;
    struct Transform *SpecificSpawnPoint;
    struct Rigidbody *m_rigidbody;
};

struct TriggerEnterPrefabSpawner {
    struct TriggerEnterPrefabSpawner__Class *klass;
    MonitorData *monitor;
    struct TriggerEnterPrefabSpawner__Fields fields;
};

struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__VTable {
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

struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__StaticFields {
};

struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__VTable vtable;
};

struct TriggerEnterPrefabSpawner__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerEnterPrefabSpawner__StaticFields {
};

struct TriggerEnterPrefabSpawner__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerEnterPrefabSpawner__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerEnterPrefabSpawner__VTable vtable;
};

enum class CartographerDesertPatrolBehaviour_State__Enum : int32_t {
    Inactive = 0x00000000,
    MoveToCrate = 0x00000001,
    MoveToMap = 0x00000002,
    MoveToFarRight = 0x00000003,
    Breakup = 0x00000004,
    WaitingBefore = 0x00000005,
    WaitingAfter = 0x00000006,
};

struct CartographerDesertPatrolBehaviour_State__Enum__Boxed {
    struct CartographerDesertPatrolBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    CartographerDesertPatrolBehaviour_State__Enum value;
    
};

struct CartographerDesertPatrolBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    CartographerDesertPatrolBehaviour_State__Enum m_prevState;
    
    CartographerDesertPatrolBehaviour_State__Enum m_currentState;
    
    float m_waitTimer;
    float TraversalSpeed;
    struct CartographerDesertPatrolBehaviour_IdleStop *CrateStop;
    struct CartographerDesertPatrolBehaviour_IdleStop *RockStop;
    struct CartographerDesertPatrolBehaviour_IdleStop *FarRightStop;
    struct CartographerDesertPatrolBehaviour_IdleStop *m_currentTargetStop;
    bool m_arrivedAtGoal;
    struct MoonTimeline *m_currentTimeline;
    int32_t m_breakupId;
    int32_t m_breakupsToPlay;
    struct GroundEntityLocomotion *m_groundLocomotion;
};

struct CartographerDesertPatrolBehaviour {
    struct CartographerDesertPatrolBehaviour__Class *klass;
    MonitorData *monitor;
    struct CartographerDesertPatrolBehaviour__Fields fields;
};

enum class CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum : int32_t {
    Crate = 0x00000000,
    Rock = 0x00000001,
    FarRight = 0x00000002,
};

struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Boxed {
    struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class *klass;
    MonitorData *monitor;
    CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum value;
    
};

struct __declspec(align(8)) CartographerDesertPatrolBehaviour_IdleStop__Fields {
    struct MoonTimeline *IdleLoopRight;
    struct MoonTimeline *IdleLoopLeft;
    struct MoonTimeline__Array *BreakupsRight;
    struct MoonTimeline__Array *BreakupsLeft;
    struct MoonReference_1_UnityEngine_GameObject_ *PositionRightObject;
    struct MoonReference_1_UnityEngine_GameObject_ *PositionLeftObject;
    bool StopsLeft;
    bool StopsRight;
    bool EndingStop;
    CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum StopName;
    
    float WaitTimeBeforeBreakup;
    float WaitTimeAfter;
    int32_t BreakupsToPlay;
    struct GameObject *m_left;
    struct GameObject *m_right;
};

struct CartographerDesertPatrolBehaviour_IdleStop {
    struct CartographerDesertPatrolBehaviour_IdleStop__Class *klass;
    MonitorData *monitor;
    struct CartographerDesertPatrolBehaviour_IdleStop__Fields fields;
};

struct CartographerDesertPatrolBehaviour_State__Enum__VTable {
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

struct CartographerDesertPatrolBehaviour_State__Enum__StaticFields {
};

struct CartographerDesertPatrolBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerDesertPatrolBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerDesertPatrolBehaviour_State__Enum__VTable vtable;
};

struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__VTable {
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

}
