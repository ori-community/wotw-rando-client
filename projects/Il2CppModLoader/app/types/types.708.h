namespace app {
struct PetrifiedOwlBossLegStompBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *BeamSpawnTrigger;
    bool m_isMirrored;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossLegStompBehaviour {
    struct PetrifiedOwlBossLegStompBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLegStompBehaviour__Fields fields;
};

struct PetrifiedOwlBossLegStompBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct PetrifiedOwlBossLegStompBehaviour__StaticFields {
};

struct PetrifiedOwlBossLegStompBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLegStompBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLegStompBehaviour__VTable vtable;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *AirTimeline;
    bool RandomizeWings;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates *m_states;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour {
    struct PetrifiedOwlBossLowFlightArena2Behaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightArena2Behaviour__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates_ *Air;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates {
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___Fields {
    struct PetrifiedOwlBossLowFlightArena2Behaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates *m_states;
    struct PetrifiedOwlBossEntity *m_entity;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates_ {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___Fields fields;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___VTable {
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

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___StaticFields {
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___VTable vtable;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__StaticFields {
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates__VTable vtable;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour__StaticFields {
};

struct PetrifiedOwlBossLowFlightArena2Behaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightArena2Behaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightArena2Behaviour__VTable vtable;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightArena2Behaviour_PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates___Fields _;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState {
    struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Fields fields;
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__VTable {
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

struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__StaticFields {
};

struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_AirState__VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *JumpTimeline;
    struct MoonTimeline *AirTimeline;
    struct MoonTimeline *LandTimeline;
    bool RandomizeWings;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates *m_states;
};

struct PetrifiedOwlBossLowFlightBehaviour {
    struct PetrifiedOwlBossLowFlightBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightBehaviour__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates_ *Jump;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates_ *Air;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates_ *Land;
};

struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates {
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Fields {
    struct PetrifiedOwlBossLowFlightBehaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates *m_states;
    struct PetrifiedOwlBossEntity *m_entity;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates_ {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Fields fields;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___VTable {
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

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___StaticFields {
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__StaticFields {
};

struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates__VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
};

struct PetrifiedOwlBossLowFlightBehaviour__StaticFields {
};

struct PetrifiedOwlBossLowFlightBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightBehaviour__VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour_JumpState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Fields _;
};

struct PetrifiedOwlBossLowFlightBehaviour_JumpState {
    struct PetrifiedOwlBossLowFlightBehaviour_JumpState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightBehaviour_JumpState__Fields fields;
};

struct PetrifiedOwlBossLowFlightBehaviour_JumpState__VTable {
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

struct PetrifiedOwlBossLowFlightBehaviour_JumpState__StaticFields {
};

struct PetrifiedOwlBossLowFlightBehaviour_JumpState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightBehaviour_JumpState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightBehaviour_JumpState__VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour_AirState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Fields _;
};

struct PetrifiedOwlBossLowFlightBehaviour_AirState {
    struct PetrifiedOwlBossLowFlightBehaviour_AirState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightBehaviour_AirState__Fields fields;
};

struct PetrifiedOwlBossLowFlightBehaviour_AirState__VTable {
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

struct PetrifiedOwlBossLowFlightBehaviour_AirState__StaticFields {
};

struct PetrifiedOwlBossLowFlightBehaviour_AirState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightBehaviour_AirState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightBehaviour_AirState__VTable vtable;
};

struct PetrifiedOwlBossLowFlightBehaviour_LandState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossLowFlightBehaviour_PetrifiedOwlBossLowFlightBehaviour_LowFlightStates___Fields _;
};

struct PetrifiedOwlBossLowFlightBehaviour_LandState {
    struct PetrifiedOwlBossLowFlightBehaviour_LandState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossLowFlightBehaviour_LandState__Fields fields;
};

struct PetrifiedOwlBossLowFlightBehaviour_LandState__VTable {
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

struct PetrifiedOwlBossLowFlightBehaviour_LandState__StaticFields {
};

struct PetrifiedOwlBossLowFlightBehaviour_LandState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossLowFlightBehaviour_LandState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossLowFlightBehaviour_LandState__VTable vtable;
};

struct PetrifiedOwlBossOffLimitsBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    bool PlayAnticipation;
    struct EventTriggerAnimator *AnticipationPlayEvent;
    struct EventTriggerAnimator *ArenaOffLimitsVFXPlayEvent;
};

struct PetrifiedOwlBossOffLimitsBehaviour {
    struct PetrifiedOwlBossOffLimitsBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossOffLimitsBehaviour__Fields fields;
};

struct PetrifiedOwlBossOffLimitsBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
};

struct PetrifiedOwlBossOffLimitsBehaviour__StaticFields {
};

struct PetrifiedOwlBossOffLimitsBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossOffLimitsBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossOffLimitsBehaviour__VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *StartTimeline;
    struct MoonTimeline *LoopTimeline;
    struct MoonTimeline *EndTimeline;
    float SpawnHeightOffset;
    float SeekerChance;
    int32_t MaxSeekersPerRound;
    int32_t TotalProjectiles;
    float TimeToShotProjectiles;
    struct EventTriggerAnimator *ShootTrigger;
    float ProjectileMaxSpeed;
    float DistanceToStopHoming;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float ProjectileSpeed;
    float ProjectileSpeedVariation;
    bool m_isShooting;
    float m_shootTimer;
    int32_t m_spawnedSeekers;
    int32_t m_spawnedNormals;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates *m_states;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour {
    struct PetrifiedOwlBossRainOfFeathersBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossRainOfFeathersBehaviour__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates_ *Start;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates_ *Loop;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates_ *End;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates {
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Fields {
    struct PetrifiedOwlBossRainOfFeathersBehaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates *m_states;
    struct PetrifiedOwlBossEntity *m_entity;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates_ {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Fields fields;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___VTable {
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

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___StaticFields {
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__StaticFields {
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates__VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour__StaticFields {
};

struct PetrifiedOwlBossRainOfFeathersBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossRainOfFeathersBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossRainOfFeathersBehaviour__VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Fields _;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState {
    struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Fields fields;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__VTable {
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

struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__StaticFields {
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_StartState__VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Fields _;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState {
    struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Fields fields;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__VTable {
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

struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__StaticFields {
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_LoopState__VTable vtable;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossRainOfFeathersBehaviour_PetrifiedOwlBossRainOfFeathersBehaviour_RainOfFeathersStates___Fields _;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState {
    struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Fields fields;
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__VTable {
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

struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__StaticFields {
};

struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossRainOfFeathersBehaviour_EndState__VTable vtable;
};

struct PetrifiedOwlBossShriekArena2Behaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *ShriekSpawnTrigger;
    struct GameObject *ShriekPrefab;
    bool m_isMirrored;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossShriekArena2Behaviour {
    struct PetrifiedOwlBossShriekArena2Behaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossShriekArena2Behaviour__Fields fields;
};

struct PetrifiedOwlBossShriekArena2Behaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct PetrifiedOwlBossShriekArena2Behaviour__StaticFields {
};

struct PetrifiedOwlBossShriekArena2Behaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossShriekArena2Behaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossShriekArena2Behaviour__VTable vtable;
};

struct PetrifiedOwlBossShriekBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *ShriekSpawnTrigger;
    struct GameObject *ShriekPrefab;
    bool PlayStompAntic;
    bool m_isMirrored;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossShriekBehaviour {
    struct PetrifiedOwlBossShriekBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossShriekBehaviour__Fields fields;
};

struct PetrifiedOwlBossShriekBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_States;
    VirtualInvokeData get_StateMachine;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData CanTakeDamage;
    VirtualInvokeData CopyData;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData ModifyRootMotion;
    VirtualInvokeData ModifyDesiredDamageDirectionMode;
    VirtualInvokeData ModifyMaxLookAt;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

}
