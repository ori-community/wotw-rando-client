namespace app {
struct RaceStartCondition_ButtonStates__Enum__VTable {
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

struct RaceStartCondition_ButtonStates__Enum__StaticFields {
};

struct RaceStartCondition_ButtonStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceStartCondition_ButtonStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceStartCondition_ButtonStates__Enum__VTable vtable;
};

struct RaceStartCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct RaceStartCondition__StaticFields {
};

struct RaceStartCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceStartCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceStartCondition__VTable vtable;
};

struct FinishHandlerService_c {
    struct FinishHandlerService_c__Class *klass;
    MonitorData *monitor;
};

struct FinishHandlerService_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FinishHandlerService_c__StaticFields {
    struct FinishHandlerService_c *__9;
    struct Action *__9__9_0;
};

struct FinishHandlerService_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FinishHandlerService_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FinishHandlerService_c__VTable vtable;
};

struct __declspec(align(8)) RaceBaseState__Fields {
    struct RaceSystem *m_raceSystem;
};

struct RaceBaseState {
    struct RaceBaseState__Class *klass;
    MonitorData *monitor;
    struct RaceBaseState__Fields fields;
};

enum class RaceSystem_DebugRaceList__Enum : int32_t {
    inkwaterMarshRaceSetups = 0x00000000,
    kwolokDropRace = 0x00000001,
    silentWoodlandRaceSetups = 0x00000002,
    wellspringRaceSetups = 0x00000003,
    baursReachWindTunnel = 0x00000004,
    lumaPoolsRaceSetups = 0x00000005,
    mouldwoodDepthsRaceSetups = 0x00000006,
    desertRaceBGScene__clone0 = 0x00000007,
};

struct RaceSystem_DebugRaceList__Enum__Boxed {
    struct RaceSystem_DebugRaceList__Enum__Class *klass;
    MonitorData *monitor;
    RaceSystem_DebugRaceList__Enum value;
    
};

enum class RaceSystem_PrimaryFilter__Enum : int32_t {
    Overall = 0x00000000,
    Friends = 0x00000001,
};

struct RaceSystem_PrimaryFilter__Enum__Boxed {
    struct RaceSystem_PrimaryFilter__Enum__Class *klass;
    MonitorData *monitor;
    RaceSystem_PrimaryFilter__Enum value;
    
};

enum class RaceSystem_SecondaryFilter__Enum : int32_t {
    MyScore = 0x00000000,
    HighScore = 0x00000001,
};

struct RaceSystem_SecondaryFilter__Enum__Boxed {
    struct RaceSystem_SecondaryFilter__Enum__Class *klass;
    MonitorData *monitor;
    RaceSystem_SecondaryFilter__Enum value;
    
};

struct RaceSystem__Fields {
    struct MonoBehaviour__Fields _;
    RaceSystem_DebugRaceList__Enum CurrentDebugRace;
    
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct RaceTimer *m_timer;
    struct RaceLeaderboardUI *m_raceLeaderboardUi;
    struct SerializedIntUberState *m_leaderboardFilterState;
    struct RaceSettings__Array *m_raceSettings;
    struct ActionSequence *m_showFloatingLeaderboard;
    struct ActionSequence *m_hideFloatingLeaderboard;
    struct MessageProvider *m_helpMessagePedestalInactive;
    struct MessageProvider *m_helpTopMessagePedestal;
    struct MessageProvider *m_helpBottomMessagePedestal;
    struct MessageProvider *m_helpBottomMessagePedestalNoFriends;
    struct MessageProvider *m_activateRaceMessage;
    struct MessageProvider *m_skipFlythroughMessage;
    struct MessageProvider *m_timeoutRaceMessage;
    struct MessageProvider *m_returnRaceMessage;
    struct MessageProvider *m_abandonedRaceMessage;
    struct MessageProvider *m_messageRaceFinishedControlHelp;
    struct MessageProvider *m_messageRaceInterruptedControlHelp;
    struct MessageProvider *m_messageRaceFinishedExitOnlyMessage;
    struct MessageProvider *m_hashcodeMessageProvider;
    struct MessageProvider *m_messageTimeoutControlHelp;
    struct MessageProvider *m_messageOffline;
    struct MessageProvider *m_messageNoToken;
    struct MessageProvider *m_leaderboardFilterFriendsMessageProvider;
    struct MessageProvider *m_leaderboardFilterGlobalMessageProvider;
    struct Transform *m_uiTransform;
    struct RaceLeaderboardScreen *m_leaderboardScreenPrefab;
    struct RaceStateMachineContext_SequencesConfiguration *m_sequencesConfiguration;
    struct RaceStateMachineContext_TimelinesConfiguration *m_timelinesConfiguration;
    struct RaceStateMachineContext_MessagesConfiguration *m_messagesConfiguration;
    struct GameObject *Indicator;
    struct OriGhostRigVisuals_GhostVisualSettings__Array *GhostVisualSettings;
    struct RaceTargetIndicator *m_targetIdicatorPrefab;
    struct RaceSettings *m_startFromMenuRaceSettings;
    bool m_startFromMenuLoading;
    bool m_checkOfflineFiles;
    struct StateMachine_2 *m_stateMachine;
    struct GhostService *m_ghostService;
    float m_timeToNextLocalUploadAttempt;
    struct RaceStateMachineContext *_Context_k__BackingField;
    RaceSystem_PrimaryFilter__Enum _CurrentPrimaryFilter_k__BackingField;
    
    RaceSystem_SecondaryFilter__Enum _CurrentSecondaryFilter_k__BackingField;
    
    struct List_1_fsm_IState_ *m_states;
    struct GhostRecorder *m_recorder;
    RaceContentType__Enum LastRaceType;
    
    bool m_showingFloatingLeaderboard;
    struct Vector3 PositionPriorToRaceStart;
    struct SceneMetaData *ScenePriorToRaceStart;
};

struct RaceSystem {
    struct RaceSystem__Class *klass;
    MonitorData *monitor;
    struct RaceSystem__Fields fields;
};

struct RaceTimer__Fields {
    struct MonoBehaviour__Fields _;
    float _ElapsedTime_k__BackingField;
    float _PersonalBestTime_k__BackingField;
    float _TimeLimit_k__BackingField;
    float _BestTime_k__BackingField;
    float _TimeToBeat_k__BackingField;
    float _PreviousElapsedTime_k__BackingField;
    struct Action *TimeoutPulse;
    struct Event_1 *TimeoutWarningEvent;
    struct Event_1 *BestTimeNotBeatenSoundEvent;
    float m_adjustedElapsedTime;
    bool m_startedRace;
    struct ISoundHost *m_soundHost;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct RaceTimer {
    struct RaceTimer__Class *klass;
    MonitorData *monitor;
    struct RaceTimer__Fields fields;
};

struct RaceSettings__Array {
    struct RaceSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RaceSettings *vector[32];
};

struct OriGhostRigVisuals_GhostVisualSettings__Array {
    struct OriGhostRigVisuals_GhostVisualSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct OriGhostRigVisuals_GhostVisualSettings *vector[32];
};

struct TargetIndicator__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *DistanceToScale;
    float RationMultiplier;
    struct Rect ViewportVisibilityBounds;
    struct Renderer__Array *m_renderers;
};

struct TargetIndicator {
    struct TargetIndicator__Class *klass;
    MonitorData *monitor;
    struct TargetIndicator__Fields fields;
};

struct RaceTargetIndicator__Fields {
    struct TargetIndicator__Fields _;
};

struct RaceTargetIndicator {
    struct RaceTargetIndicator__Class *klass;
    MonitorData *monitor;
    struct RaceTargetIndicator__Fields fields;
};

struct GhostIndicator__Fields {
    struct TargetIndicator__Fields _;
    struct MoonTimeline *m_fadeOutTimeline;
    int32_t _Index_k__BackingField;
    bool m_fadeOutFinished;
};

struct GhostIndicator {
    struct GhostIndicator__Class *klass;
    MonitorData *monitor;
    struct GhostIndicator__Fields fields;
};

struct RaceCountdownState__Fields {
    struct RaceBaseState__Fields _;
    bool m_countdownFinished;
    struct MoonTimeline *m_countdownTimeline;
};

struct RaceCountdownState {
    struct RaceCountdownState__Class *klass;
    MonitorData *monitor;
    struct RaceCountdownState__Fields fields;
};

struct RaceSystem_DebugRaceList__Enum__VTable {
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

struct RaceSystem_DebugRaceList__Enum__StaticFields {
};

struct RaceSystem_DebugRaceList__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceSystem_DebugRaceList__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceSystem_DebugRaceList__Enum__VTable vtable;
};

struct RaceTimer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct RaceTimer__StaticFields {
};

struct RaceTimer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceTimer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceTimer__VTable vtable;
};

struct RaceSettings__Array__VTable {
};

struct RaceSettings__Array__StaticFields {
};

struct RaceSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceSettings__Array__VTable vtable;
};

struct OriGhostRigVisuals_GhostVisualSettings__Array__VTable {
};

struct OriGhostRigVisuals_GhostVisualSettings__Array__StaticFields {
};

struct OriGhostRigVisuals_GhostVisualSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriGhostRigVisuals_GhostVisualSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriGhostRigVisuals_GhostVisualSettings__Array__VTable vtable;
};

struct GhostIndicator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AllowIndicator;
    VirtualInvokeData get_TargetPositon;
    VirtualInvokeData get_RotateIndicator;
    VirtualInvokeData get_ScaleByDistance;
    VirtualInvokeData Start;
};

struct GhostIndicator__StaticFields {
};

struct GhostIndicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostIndicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostIndicator__VTable vtable;
};

struct TargetIndicator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData Start;
};

struct TargetIndicator__StaticFields {
};

struct TargetIndicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TargetIndicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TargetIndicator__VTable vtable;
};

struct RaceTargetIndicator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AllowIndicator;
    VirtualInvokeData get_TargetPositon;
    VirtualInvokeData get_RotateIndicator;
    VirtualInvokeData get_ScaleByDistance;
    VirtualInvokeData Start;
};

struct RaceTargetIndicator__StaticFields {
};

struct RaceTargetIndicator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceTargetIndicator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceTargetIndicator__VTable vtable;
};

struct RaceSystem_PrimaryFilter__Enum__VTable {
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

struct RaceSystem_PrimaryFilter__Enum__StaticFields {
};

struct RaceSystem_PrimaryFilter__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceSystem_PrimaryFilter__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceSystem_PrimaryFilter__Enum__VTable vtable;
};

struct RaceSystem_SecondaryFilter__Enum__VTable {
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

struct RaceSystem_SecondaryFilter__Enum__StaticFields {
};

struct RaceSystem_SecondaryFilter__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceSystem_SecondaryFilter__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceSystem_SecondaryFilter__Enum__VTable vtable;
};

struct RaceSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct RaceSystem__StaticFields {
    struct RaceSystem *_Instance_k__BackingField;
    struct LeaderBoardService *LeaderBoardService;
    bool PreloadRaceScenes;
    bool m_showDebug;
};

struct RaceSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceSystem__VTable vtable;
};

struct RaceCountdownState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceCountdownState__StaticFields {
};

struct RaceCountdownState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceCountdownState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceCountdownState__VTable vtable;
};

struct RaceBaseState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
};

struct RaceBaseState__StaticFields {
};

struct RaceBaseState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceBaseState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceBaseState__VTable vtable;
};

struct RaceGetReadyState__Fields {
    struct RaceBaseState__Fields _;
    bool m_inPosition;
};

struct RaceGetReadyState {
    struct RaceGetReadyState__Class *klass;
    MonitorData *monitor;
    struct RaceGetReadyState__Fields fields;
};

struct RaceGetReadyState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceGetReadyState__StaticFields {
};

struct RaceGetReadyState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceGetReadyState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceGetReadyState__VTable vtable;
};

struct RaceIdleState__Fields {
    struct RaceBaseState__Fields _;
    struct MessageBox *m_controlHint1;
    struct MessageBox *m_controlHint2;
    float m_cachedUiFadeTime;
    bool m_isSyncing;
};

struct RaceIdleState {
    struct RaceIdleState__Class *klass;
    MonitorData *monitor;
    struct RaceIdleState__Fields fields;
};

struct RaceIdleState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceIdleState__StaticFields {
};

struct RaceIdleState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceIdleState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceIdleState__VTable vtable;
};

struct RaceRestoreCheckpointState__Fields {
    struct RaceBaseState__Fields _;
    struct RaceStateMachineContext_Waiter *m_wait;
    bool m_restoreRequested;
};

struct RaceRestoreCheckpointState {
    struct RaceRestoreCheckpointState__Class *klass;
    MonitorData *monitor;
    struct RaceRestoreCheckpointState__Fields fields;
};

struct __declspec(align(8)) RaceStateMachineContext_Waiter__Fields {
    float m_timeleft;
    struct RaceStateMachineContext *m_context;
};

struct RaceStateMachineContext_Waiter {
    struct RaceStateMachineContext_Waiter__Class *klass;
    MonitorData *monitor;
    struct RaceStateMachineContext_Waiter__Fields fields;
};

struct RaceStateMachineContext_Waiter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RaceStateMachineContext_Waiter__StaticFields {
};

struct RaceStateMachineContext_Waiter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceStateMachineContext_Waiter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceStateMachineContext_Waiter__VTable vtable;
};

struct RaceRestoreCheckpointState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceRestoreCheckpointState__StaticFields {
};

struct RaceRestoreCheckpointState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceRestoreCheckpointState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceRestoreCheckpointState__VTable vtable;
};

struct RaceRestoreCheckpointState_c {
    struct RaceRestoreCheckpointState_c__Class *klass;
    MonitorData *monitor;
};

struct RaceRestoreCheckpointState_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RaceRestoreCheckpointState_c__StaticFields {
    struct RaceRestoreCheckpointState_c *__9;
    struct Action *__9__11_0;
};

struct RaceRestoreCheckpointState_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceRestoreCheckpointState_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceRestoreCheckpointState_c__VTable vtable;
};

struct RaceLeaderboardState__Fields {
    struct RaceBaseState__Fields _;
    struct RaceLeaderboardScreen *m_leaderboardScreen;
    bool m_selectedReplay;
    bool m_isSyncing;
};

struct RaceLeaderboardState {
    struct RaceLeaderboardState__Class *klass;
    MonitorData *monitor;
    struct RaceLeaderboardState__Fields fields;
};

struct RaceLeaderboardState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceLeaderboardState__StaticFields {
};

struct RaceLeaderboardState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceLeaderboardState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceLeaderboardState__VTable vtable;
};

struct RacePrepareState__Fields {
    struct RaceBaseState__Fields _;
    bool m_waitingForFlythrough;
    float m_flythroughTimeRemaining;
    bool m_flythroughFade;
    float m_databaseSyncingTimeout;
};

struct RacePrepareState {
    struct RacePrepareState__Class *klass;
    MonitorData *monitor;
    struct RacePrepareState__Fields fields;
};

struct RacePrepareState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RacePrepareState__StaticFields {
};

struct RacePrepareState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RacePrepareState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RacePrepareState__VTable vtable;
};

struct __declspec(align(8)) RacePrepareState_ShowFlythroughUi_d_9__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct RacePrepareState *__4__this;
};

struct RacePrepareState_ShowFlythroughUi_d_9 {
    struct RacePrepareState_ShowFlythroughUi_d_9__Class *klass;
    MonitorData *monitor;
    struct RacePrepareState_ShowFlythroughUi_d_9__Fields fields;
};

struct RacePrepareState_ShowFlythroughUi_d_9__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct RacePrepareState_ShowFlythroughUi_d_9__StaticFields {
};

struct RacePrepareState_ShowFlythroughUi_d_9__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RacePrepareState_ShowFlythroughUi_d_9__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RacePrepareState_ShowFlythroughUi_d_9__VTable vtable;
};

struct RaceRunState__Fields {
    struct RaceBaseState__Fields _;
    bool m_insideRaceArea;
    float m_timeSinceLeftRaceArea;
    struct RaceTargetIndicator *m_targetIndicator;
};

struct RaceRunState {
    struct RaceRunState__Class *klass;
    MonitorData *monitor;
    struct RaceRunState__Fields fields;
};

struct RaceRunState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

struct RaceRunState__StaticFields {
};

struct RaceRunState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaceRunState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaceRunState__VTable vtable;
};

struct RaceSpectateState__Fields {
    struct RaceBaseState__Fields _;
    struct Transform *m_spectateTarget;
    int32_t m_ghostIndex;
    int32_t m_topGhostIndex;
    float m_trantisioningOutTime;
    bool m_updateSpectatorPosition;
    RenderScope__Enum m_previousBlurValue;
    
};

struct RaceSpectateState {
    struct RaceSpectateState__Class *klass;
    MonitorData *monitor;
    struct RaceSpectateState__Fields fields;
};

struct RaceSpectateState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData StartRaceRequested;
    VirtualInvokeData FinishRaceRequested;
    VirtualInvokeData RestartRaceRequested;
    VirtualInvokeData CancelRaceRequested;
    VirtualInvokeData SkipRequested;
};

}
