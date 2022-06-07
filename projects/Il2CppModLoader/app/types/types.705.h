namespace app {
struct LeftRightTimeline__Boxed {
    struct LeftRightTimeline__Class *klass;
    MonitorData *monitor;
    struct LeftRightTimeline fields;
};

enum class LeftRightTimeline_Side__Enum : int32_t {
    Left = 0x00000000,
    Right = 0x00000001,
};

struct LeftRightTimeline_Side__Enum__Boxed {
    struct LeftRightTimeline_Side__Enum__Class *klass;
    MonitorData *monitor;
    LeftRightTimeline_Side__Enum value;
    
};

struct LeftRightTimeline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LeftRightTimeline__StaticFields {
};

struct LeftRightTimeline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeftRightTimeline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeftRightTimeline__VTable vtable;
};

struct LeftRightTimeline_Side__Enum__VTable {
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

struct LeftRightTimeline_Side__Enum__StaticFields {
};

struct LeftRightTimeline_Side__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeftRightTimeline_Side__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeftRightTimeline_Side__Enum__VTable vtable;
};

struct PetrifiedOwlBossCameraTargetsProvider__Fields {
    struct CameraTargetsProvider__Fields _;
    struct PetrifiedOwlBossEntity *Powl;
    float MaxTargetVerticalOffsetFromOri;
    struct Vector2 OriPadding;
    struct OriPredictionHelper_Settings *m_oriPredictionSettings;
    bool TEST_FRAME_GROUND;
    struct Transform *Arena1GroundHeightTransform;
    struct Transform *Arena2GroundHeightTransform;
    struct Vector2 GroundPadding;
    float LavaMaxOffsetFromOri;
    float LavaFocusedThreshold;
    struct Transform *PowlReferenceTransform;
    struct Vector3 PowlReferenceOffsetArena1;
    struct Vector3 PowlReferenceOffsetArena2;
    struct Vector2 PowlPadding;
    float PowlPositionSmoothTime;
    float PowlCutOffDistanceFight1;
    float PowlCutOffDistanceFight2;
    struct List_1_Moon_CameraTargetSettings_ *m_targets;
    struct OriPredictionHelper *m_oriPrediction;
};

struct PetrifiedOwlBossCameraTargetsProvider {
    struct PetrifiedOwlBossCameraTargetsProvider__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossCameraTargetsProvider__Fields fields;
};

struct PetrifiedOwlBossCameraTargetsProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetTargets;
    VirtualInvokeData UpdateTargets;
    VirtualInvokeData ModifyZoomRange;
    VirtualInvokeData ModifyPaddings;
    VirtualInvokeData ModifyLerping;
};

struct PetrifiedOwlBossCameraTargetsProvider__StaticFields {
};

struct PetrifiedOwlBossCameraTargetsProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossCameraTargetsProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossCameraTargetsProvider__VTable vtable;
};

struct List_1_Moon_CameraTargetSettings__1__VTable {
};

struct List_1_Moon_CameraTargetSettings__1__StaticFields {
};

struct List_1_Moon_CameraTargetSettings__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_CameraTargetSettings__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_CameraTargetSettings__1__VTable vtable;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState {
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Fields fields;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__VTable {
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

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__StaticFields {
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_BackgroundFlightState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState {
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Fields fields;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__VTable {
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

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__StaticFields {
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState {
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Fields fields;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__VTable {
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

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__StaticFields {
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombHorizontalBehaviour_PetrifiedOwlBossDiveBombHorizontalBehaviour_DiveBombHorizontalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState {
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Fields fields;
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__VTable {
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

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__StaticFields {
};

struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombHorizontalBehaviour_PostAttackState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *TimelineBackground;
    struct MoonTimeline *TimelineWait;
    struct MoonTimeline *TimelineAttack;
    struct MoonTimeline *TimelineOffScreen;
    float AttackDelay;
    float PostAttackDelay;
    bool m_isMirrored;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates *m_states;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates_ *BackgroundFlight;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates_ *Wait;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates_ *Attack;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates_ *PostAttack;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Fields fields;
};

struct __declspec(align(8)) PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates *m_states;
    struct PetrifiedOwlBossEntity *m_entity;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates_ {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields fields;
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___VTable {
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

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___StaticFields {
};

struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour__VTable {
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

struct PetrifiedOwlBossDiveBombVerticalBehaviour__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Fields fields;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__VTable {
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

struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_BackgroundFlightState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Fields fields;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__VTable {
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

struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Fields fields;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__VTable {
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

struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState__VTable vtable;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossDiveBombVerticalBehaviour_PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates___Fields _;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState {
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Fields fields;
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__VTable {
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

struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__StaticFields {
};

struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState__VTable vtable;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields _;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitState {
    struct PetrifiedOwlBossEscape1Behaviour_WaitState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossEscape1Behaviour_WaitState__Fields fields;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitState__VTable {
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

struct PetrifiedOwlBossEscape1Behaviour_WaitState__StaticFields {
};

struct PetrifiedOwlBossEscape1Behaviour_WaitState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEscape1Behaviour_WaitState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEscape1Behaviour_WaitState__VTable vtable;
};

struct PetrifiedOwlBossEscape1Behaviour_JumpState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields _;
};

struct PetrifiedOwlBossEscape1Behaviour_JumpState {
    struct PetrifiedOwlBossEscape1Behaviour_JumpState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossEscape1Behaviour_JumpState__Fields fields;
};

struct PetrifiedOwlBossEscape1Behaviour_JumpState__VTable {
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

struct PetrifiedOwlBossEscape1Behaviour_JumpState__StaticFields {
};

struct PetrifiedOwlBossEscape1Behaviour_JumpState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEscape1Behaviour_JumpState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEscape1Behaviour_JumpState__VTable vtable;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields _;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyStartState {
    struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__Fields fields;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__VTable {
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

struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__StaticFields {
};

struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEscape1Behaviour_FlyStartState__VTable vtable;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields _;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyEndState {
    struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__Fields fields;
};

struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__VTable {
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

struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__StaticFields {
};

struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEscape1Behaviour_FlyEndState__VTable vtable;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Fields {
    struct PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseState_2_PetrifiedOwlBossEscape1Behaviour_PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates___Fields _;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState {
    struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Fields fields;
};

struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__VTable {
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

struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__StaticFields {
};

struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState__VTable vtable;
};

struct PetrifiedOwlBossFeatherFlurryBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *ShootTriggers;
    int32_t TotalUniformlyDistributedProjectiles;
    int32_t TotalProjectiles;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    struct Vector2 ProjectileSpeedRange;
    bool m_isMirrored;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossFeatherFlurryBehaviour {
    struct PetrifiedOwlBossFeatherFlurryBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossFeatherFlurryBehaviour__Fields fields;
};

struct PetrifiedOwlBossFeatherFlurryBehaviour__VTable {
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

struct PetrifiedOwlBossFeatherFlurryBehaviour__StaticFields {
};

struct PetrifiedOwlBossFeatherFlurryBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossFeatherFlurryBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossFeatherFlurryBehaviour__VTable vtable;
};

struct PetrifiedOwlBossFight1ClawSlamBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
};

struct PetrifiedOwlBossFight1ClawSlamBehaviour {
    struct PetrifiedOwlBossFight1ClawSlamBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossFight1ClawSlamBehaviour__Fields fields;
};

struct PetrifiedOwlBossFight1ClawSlamBehaviour__VTable {
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

struct PetrifiedOwlBossFight1ClawSlamBehaviour__StaticFields {
};

struct PetrifiedOwlBossFight1ClawSlamBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PetrifiedOwlBossFight1ClawSlamBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PetrifiedOwlBossFight1ClawSlamBehaviour__VTable vtable;
};

struct PetrifiedOwlBossFight1ClawSwipeBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    bool m_isMirrored;
    struct Enum__Array *Entries;
};

struct PetrifiedOwlBossFight1ClawSwipeBehaviour {
    struct PetrifiedOwlBossFight1ClawSwipeBehaviour__Class *klass;
    MonitorData *monitor;
    struct PetrifiedOwlBossFight1ClawSwipeBehaviour__Fields fields;
};

struct PetrifiedOwlBossFight1ClawSwipeBehaviour__VTable {
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
