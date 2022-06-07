namespace app {
struct GroundPatrolMode__Enum__StaticFields {
};

struct GroundPatrolMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundPatrolMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundPatrolMode__Enum__VTable vtable;
};

struct GroundPatrolWithDirectionBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct GroundPatrolWithDirectionBehaviour__StaticFields {
};

struct GroundPatrolWithDirectionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundPatrolWithDirectionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundPatrolWithDirectionBehaviour__VTable vtable;
};

enum class MirroredTurningBehaviour_State__Enum : int32_t {
    FirstHalf = 0x00000000,
    Flip = 0x00000001,
    SecondHalf = 0x00000002,
};

struct MirroredTurningBehaviour_State__Enum__Boxed {
    struct MirroredTurningBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    MirroredTurningBehaviour_State__Enum value;
    
};

struct MirroredTurningBehaviour__Fields {
    struct TurningBehaviour__Fields _;
    struct LegacyTimelineSequence *TurningStart;
    struct LegacyTimelineSequence *TurningEnd;
    float m_lookDirection;
    MirroredTurningBehaviour_State__Enum m_state;
    
};

struct MirroredTurningBehaviour {
    struct MirroredTurningBehaviour__Class *klass;
    MonitorData *monitor;
    struct MirroredTurningBehaviour__Fields fields;
};

struct MirroredTurningBehaviour_State__Enum__VTable {
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

struct MirroredTurningBehaviour_State__Enum__StaticFields {
};

struct MirroredTurningBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirroredTurningBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirroredTurningBehaviour_State__Enum__VTable vtable;
};

struct MirroredTurningBehaviour__VTable {
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
};

struct MirroredTurningBehaviour__StaticFields {
};

struct MirroredTurningBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MirroredTurningBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MirroredTurningBehaviour__VTable vtable;
};

struct MoveToBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    int32_t _TraversalSpeed_k__BackingField;
    struct Locomotion *m_locomotion;
};

struct MoveToBehaviour {
    struct MoveToBehaviour__Class *klass;
    MonitorData *monitor;
    struct MoveToBehaviour__Fields fields;
};

struct MoveToBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct MoveToBehaviour__StaticFields {
};

struct MoveToBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoveToBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoveToBehaviour__VTable vtable;
};

struct NewGroundPatrolBehaviour__Fields {
    struct EntityBehaviour__Fields _;
};

struct NewGroundPatrolBehaviour {
    struct NewGroundPatrolBehaviour__Class *klass;
    MonitorData *monitor;
    struct NewGroundPatrolBehaviour__Fields fields;
};

struct NewGroundPatrolBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct NewGroundPatrolBehaviour__StaticFields {
};

struct NewGroundPatrolBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NewGroundPatrolBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NewGroundPatrolBehaviour__VTable vtable;
};

struct PatrolBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 m_patrolOrigin;
};

struct PatrolBehaviour {
    struct PatrolBehaviour__Class *klass;
    MonitorData *monitor;
    struct PatrolBehaviour__Fields fields;
};

struct PatrolBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct PatrolBehaviour__StaticFields {
};

struct PatrolBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PatrolBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PatrolBehaviour__VTable vtable;
};

struct FlutteringProjectileDropBehaviour_c {
    struct FlutteringProjectileDropBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct FlutteringProjectileDropBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlutteringProjectileDropBehaviour_c__StaticFields {
    struct FlutteringProjectileDropBehaviour_c *__9;
    struct Action *__9__40_0;
};

struct FlutteringProjectileDropBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringProjectileDropBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringProjectileDropBehaviour_c__VTable vtable;
};

struct FlutteringShotDownBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline *HitTimeline;
    struct MoonTimeline *FallTimeline;
    struct MoonTimeline *LandTimeline;
    struct RootMotionProcessorData *StartRootMotion;
    struct RootMotionProcessorData *EndRootMotion;
    float StunDuration;
    float DescentSpeed;
    struct StateMachine_2 *m_stateMachine;
    struct FlutteringShotDownBehaviour_States *m_states;
    struct MoonTimeline *m_currentTimeline;
    struct AirEntityLocomotion *m_airLocomotion;
    struct GroundEntityLocomotion *m_groundLocomotion;
};

struct FlutteringShotDownBehaviour {
    struct FlutteringShotDownBehaviour__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour__Fields fields;
};

struct __declspec(align(8)) FlutteringShotDownBehaviour_States__Fields {
    struct FlutteringShotDownBehaviour_FlutterShotDownState *HitState;
    struct FlutteringShotDownBehaviour_FlutterShotDownState *FallState;
    struct FlutteringShotDownBehaviour_FlutterShotDownState *LandState;
};

struct FlutteringShotDownBehaviour_States {
    struct FlutteringShotDownBehaviour_States__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour_States__Fields fields;
};

struct __declspec(align(8)) FlutteringShotDownBehaviour_FlutterShotDownState__Fields {
    struct FlutteringShotDownBehaviour *m_behaviour;
};

struct FlutteringShotDownBehaviour_FlutterShotDownState {
    struct FlutteringShotDownBehaviour_FlutterShotDownState__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour_FlutterShotDownState__Fields fields;
};

struct FlutteringShotDownBehaviour_FlutterShotDownState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringShotDownBehaviour_FlutterShotDownState__StaticFields {
};

struct FlutteringShotDownBehaviour_FlutterShotDownState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_FlutterShotDownState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_FlutterShotDownState__VTable vtable;
};

struct FlutteringShotDownBehaviour_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlutteringShotDownBehaviour_States__StaticFields {
};

struct FlutteringShotDownBehaviour_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_States__VTable vtable;
};

struct FlutteringShotDownBehaviour__VTable {
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

struct FlutteringShotDownBehaviour__StaticFields {
};

struct FlutteringShotDownBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour__VTable vtable;
};

struct FlutteringShotDownBehaviour_HitState__Fields {
    struct FlutteringShotDownBehaviour_FlutterShotDownState__Fields _;
};

struct FlutteringShotDownBehaviour_HitState {
    struct FlutteringShotDownBehaviour_HitState__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour_HitState__Fields fields;
};

struct FlutteringShotDownBehaviour_HitState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringShotDownBehaviour_HitState__StaticFields {
};

struct FlutteringShotDownBehaviour_HitState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_HitState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_HitState__VTable vtable;
};

struct FlutteringShotDownBehaviour_FallState__Fields {
    struct FlutteringShotDownBehaviour_FlutterShotDownState__Fields _;
};

struct FlutteringShotDownBehaviour_FallState {
    struct FlutteringShotDownBehaviour_FallState__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour_FallState__Fields fields;
};

struct FlutteringShotDownBehaviour_FallState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringShotDownBehaviour_FallState__StaticFields {
};

struct FlutteringShotDownBehaviour_FallState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_FallState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_FallState__VTable vtable;
};

struct FlutteringShotDownBehaviour_LandState__Fields {
    struct FlutteringShotDownBehaviour_FlutterShotDownState__Fields _;
};

struct FlutteringShotDownBehaviour_LandState {
    struct FlutteringShotDownBehaviour_LandState__Class *klass;
    MonitorData *monitor;
    struct FlutteringShotDownBehaviour_LandState__Fields fields;
};

struct FlutteringShotDownBehaviour_LandState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringShotDownBehaviour_LandState__StaticFields {
};

struct FlutteringShotDownBehaviour_LandState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_LandState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_LandState__VTable vtable;
};

struct FlutteringShotDownBehaviour_c {
    struct FlutteringShotDownBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct FlutteringShotDownBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlutteringShotDownBehaviour_c__StaticFields {
    struct FlutteringShotDownBehaviour_c *__9;
    struct Action *__9__22_0;
};

struct FlutteringShotDownBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringShotDownBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringShotDownBehaviour_c__VTable vtable;
};

struct FlutteringSlamBehaviour_StartState__Fields {
    struct FlutteringSlamBehaviour_FlutterSlamState__Fields _;
};

struct FlutteringSlamBehaviour_StartState {
    struct FlutteringSlamBehaviour_StartState__Class *klass;
    MonitorData *monitor;
    struct FlutteringSlamBehaviour_StartState__Fields fields;
};

struct FlutteringSlamBehaviour_StartState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringSlamBehaviour_StartState__StaticFields {
};

struct FlutteringSlamBehaviour_StartState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringSlamBehaviour_StartState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringSlamBehaviour_StartState__VTable vtable;
};

struct FlutteringSlamBehaviour_LoopState__Fields {
    struct FlutteringSlamBehaviour_FlutterSlamState__Fields _;
};

struct FlutteringSlamBehaviour_LoopState {
    struct FlutteringSlamBehaviour_LoopState__Class *klass;
    MonitorData *monitor;
    struct FlutteringSlamBehaviour_LoopState__Fields fields;
};

struct FlutteringSlamBehaviour_LoopState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringSlamBehaviour_LoopState__StaticFields {
};

struct FlutteringSlamBehaviour_LoopState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringSlamBehaviour_LoopState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringSlamBehaviour_LoopState__VTable vtable;
};

struct FlutteringSlamBehaviour_EndState__Fields {
    struct FlutteringSlamBehaviour_FlutterSlamState__Fields _;
};

struct FlutteringSlamBehaviour_EndState {
    struct FlutteringSlamBehaviour_EndState__Class *klass;
    MonitorData *monitor;
    struct FlutteringSlamBehaviour_EndState__Fields fields;
};

struct FlutteringSlamBehaviour_EndState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringSlamBehaviour_EndState__StaticFields {
};

struct FlutteringSlamBehaviour_EndState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringSlamBehaviour_EndState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringSlamBehaviour_EndState__VTable vtable;
};

struct FlutteringSlamBehaviour_c {
    struct FlutteringSlamBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct FlutteringSlamBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlutteringSlamBehaviour_c__StaticFields {
    struct FlutteringSlamBehaviour_c *__9;
    struct Action *__9__24_0;
};

struct FlutteringSlamBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringSlamBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringSlamBehaviour_c__VTable vtable;
};

struct FlutteringTakeOffBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3 *TargetPosition;
    struct MoonTimeline *TurnStartTimeline;
    struct MoonTimeline *StartTimeline;
    struct RootMotionProcessorData *StartRootMotion;
    struct MoonTimeline *LoopTimeline;
    struct MoonTimeline *EndTimeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *TurnTriggers;
    float FlutteringHeight;
    float Speed;
    int32_t TakeOffSlamDamage;
    DamageWeight__Enum TakeOffSlamWeight;
    
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *TakeOffSlamTriggers;
    struct StateMachine_2 *m_stateMachine;
    struct FlutteringTakeOffBehaviour_States *m_states;
    struct MoonTimeline *m_currentTimeline;
    struct AirEntityLocomotion *m_airLocomotion;
};

struct FlutteringTakeOffBehaviour {
    struct FlutteringTakeOffBehaviour__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour__Fields fields;
};

struct __declspec(align(8)) FlutteringTakeOffBehaviour_States__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState *TurnStartState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState *StartState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState *LoopState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState *EndState;
};

struct FlutteringTakeOffBehaviour_States {
    struct FlutteringTakeOffBehaviour_States__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour_States__Fields fields;
};

struct __declspec(align(8)) FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields {
    struct FlutteringTakeOffBehaviour *m_behaviour;
};

struct FlutteringTakeOffBehaviour_FlutterTakeOffState {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields fields;
};

struct FlutteringTakeOffBehaviour_FlutterTakeOffState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringTakeOffBehaviour_FlutterTakeOffState__StaticFields {
};

struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FlutteringTakeOffBehaviour_States__StaticFields {
};

struct FlutteringTakeOffBehaviour_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringTakeOffBehaviour_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringTakeOffBehaviour_States__VTable vtable;
};

struct FlutteringTakeOffBehaviour__VTable {
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

struct FlutteringTakeOffBehaviour__StaticFields {
};

struct FlutteringTakeOffBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringTakeOffBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringTakeOffBehaviour__VTable vtable;
};

struct FlutteringTakeOffBehaviour_TurnStartState__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
    struct AirEntityMovementProcessor *m_airMovement;
    struct Quaternion m_initialRotation;
};

struct FlutteringTakeOffBehaviour_TurnStartState {
    struct FlutteringTakeOffBehaviour_TurnStartState__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour_TurnStartState__Fields fields;
};

struct FlutteringTakeOffBehaviour_TurnStartState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringTakeOffBehaviour_TurnStartState__StaticFields {
};

struct FlutteringTakeOffBehaviour_TurnStartState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringTakeOffBehaviour_TurnStartState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringTakeOffBehaviour_TurnStartState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_StartState__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
    struct Vector3 m_desiredPoint;
    struct AirEntityMovementProcessor *m_airMovement;
    struct Quaternion m_initialRotation;
};

struct FlutteringTakeOffBehaviour_StartState {
    struct FlutteringTakeOffBehaviour_StartState__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour_StartState__Fields fields;
};

struct FlutteringTakeOffBehaviour_StartState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnExit_1;
};

struct FlutteringTakeOffBehaviour_StartState__StaticFields {
};

struct FlutteringTakeOffBehaviour_StartState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlutteringTakeOffBehaviour_StartState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlutteringTakeOffBehaviour_StartState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_LoopState__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
    struct Vector3 m_desiredPoint;
    struct CharacterPlatformMovement *m_platformMovement;
    struct AirEntityMovementProcessor *m_airMovement;
};

struct FlutteringTakeOffBehaviour_LoopState {
    struct FlutteringTakeOffBehaviour_LoopState__Class *klass;
    MonitorData *monitor;
    struct FlutteringTakeOffBehaviour_LoopState__Fields fields;
};

}
