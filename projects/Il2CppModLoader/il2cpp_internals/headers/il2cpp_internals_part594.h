namespace app {
struct TargetIndicator__StaticFields {
};
struct TargetIndicator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetIndicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceTargetIndicator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceTargetIndicator__VTable vtable;
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
  struct RaceSystem * _Instance_k__BackingField;
  struct LeaderBoardService * LeaderBoardService;
  bool PreloadRaceScenes;
  bool m_showDebug;
};
struct RaceSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceCountdownState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceBaseState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceBaseState__VTable vtable;
};

struct RaceGetReadyState__Fields {
  struct RaceBaseState__Fields _;
  bool m_inPosition;
};
struct RaceGetReadyState {
  struct RaceGetReadyState__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceGetReadyState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceGetReadyState__VTable vtable;
};

struct RaceIdleState__Fields {
  struct RaceBaseState__Fields _;
  struct MessageBox * m_controlHint1;
  struct MessageBox * m_controlHint2;
  float m_cachedUiFadeTime;
  bool m_isSyncing;
};
struct RaceIdleState {
  struct RaceIdleState__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceIdleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceIdleState__VTable vtable;
};

struct RaceRestoreCheckpointState__Fields {
  struct RaceBaseState__Fields _;
  struct RaceStateMachineContext_Waiter * m_wait;
  bool m_restoreRequested;
};
struct RaceRestoreCheckpointState {
  struct RaceRestoreCheckpointState__Class *klass;
  struct MonitorData *monitor;
  struct RaceRestoreCheckpointState__Fields fields;
};
struct __declspec(align(8)) RaceStateMachineContext_Waiter__Fields {
  float m_timeleft;
  struct RaceStateMachineContext * m_context;
};
struct RaceStateMachineContext_Waiter {
  struct RaceStateMachineContext_Waiter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_Waiter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceRestoreCheckpointState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceRestoreCheckpointState__VTable vtable;
};

struct RaceRestoreCheckpointState_c {
  struct RaceRestoreCheckpointState_c__Class *klass;
  struct MonitorData *monitor;
};
struct RaceRestoreCheckpointState_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceRestoreCheckpointState_c__StaticFields {
  struct RaceRestoreCheckpointState_c * __9;
  struct Action * __9__11_0;
};
struct RaceRestoreCheckpointState_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceRestoreCheckpointState_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceRestoreCheckpointState_c__VTable vtable;
};

struct RaceLeaderboardState__Fields {
  struct RaceBaseState__Fields _;
  struct RaceLeaderboardScreen * m_leaderboardScreen;
  bool m_selectedReplay;
  bool m_isSyncing;
};
struct RaceLeaderboardState {
  struct RaceLeaderboardState__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RacePrepareState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RacePrepareState__VTable vtable;
};

struct __declspec(align(8)) RacePrepareState_ShowFlythroughUi_d_9__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct RacePrepareState * __4__this;
};
struct RacePrepareState_ShowFlythroughUi_d_9 {
  struct RacePrepareState_ShowFlythroughUi_d_9__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RacePrepareState_ShowFlythroughUi_d_9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RacePrepareState_ShowFlythroughUi_d_9__VTable vtable;
};

struct RaceRunState__Fields {
  struct RaceBaseState__Fields _;
  bool m_insideRaceArea;
  float m_timeSinceLeftRaceArea;
  struct RaceTargetIndicator * m_targetIndicator;
};
struct RaceRunState {
  struct RaceRunState__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceRunState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceRunState__VTable vtable;
};

struct RaceSpectateState__Fields {
  struct RaceBaseState__Fields _;
  struct Transform * m_spectateTarget;
  int32_t m_ghostIndex;
  int32_t m_topGhostIndex;
  float m_trantisioningOutTime;
  bool m_updateSpectatorPosition;
  enum RenderScope__Enum m_previousBlurValue;
};
struct RaceSpectateState {
  struct RaceSpectateState__Class *klass;
  struct MonitorData *monitor;
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
struct RaceSpectateState__StaticFields {
};
struct RaceSpectateState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceSpectateState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceSpectateState__VTable vtable;
};

struct __declspec(align(8)) RaceStateMachineContext_OfflineRaceMetaData__Fields {
  struct String * RaceName;
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array * Waypoints;
  struct RaceStateMachineContext_OfflineRaceMetaData_Position * StartLinePosition;
  struct RaceStateMachineContext_OfflineRaceMetaData_Position * EndPosition;
  enum RaceContentType__Enum Type;
};
struct RaceStateMachineContext_OfflineRaceMetaData {
  struct RaceStateMachineContext_OfflineRaceMetaData__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_OfflineRaceMetaData__Fields fields;
};
struct __declspec(align(8)) RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Fields {
  float X;
  float Y;
  float Width;
  float Height;
};
struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect {
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Fields fields;
};
struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array {
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect * vector[32];
};
struct __declspec(align(8)) RaceStateMachineContext_OfflineRaceMetaData_Position__Fields {
  float X;
  float Y;
  float Z;
};
struct RaceStateMachineContext_OfflineRaceMetaData_Position {
  struct RaceStateMachineContext_OfflineRaceMetaData_Position__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_OfflineRaceMetaData_Position__Fields fields;
};
struct __declspec(align(8)) ReplayValidatorData__Fields {
  struct String * RaceName;
  struct Rect__Array * Waypoints;
  struct Vector3 StartLinePosition;
  struct Vector3 EndPosition;
  enum RaceContentType__Enum Type;
};
struct ReplayValidatorData {
  struct ReplayValidatorData__Class *klass;
  struct MonitorData *monitor;
  struct ReplayValidatorData__Fields fields;
};
struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__StaticFields {
};
struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__VTable vtable;
};
struct RaceStateMachineContext_OfflineRaceMetaData_Position__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_OfflineRaceMetaData_Position__StaticFields {
};
struct RaceStateMachineContext_OfflineRaceMetaData_Position__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_OfflineRaceMetaData_Position__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_OfflineRaceMetaData_Position__VTable vtable;
};
struct RaceStateMachineContext_OfflineRaceMetaData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_OfflineRaceMetaData__StaticFields {
};
struct RaceStateMachineContext_OfflineRaceMetaData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_OfflineRaceMetaData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_OfflineRaceMetaData__VTable vtable;
};
struct ReplayValidatorData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayValidatorData__StaticFields {
};
struct ReplayValidatorData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayValidatorData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayValidatorData__VTable vtable;
};

struct RaceStopState__Fields {
  struct RaceBaseState__Fields _;
  struct MoonTimeline * m_outcomeTimeline;
  struct RaceStateMachineContext_Waiter * m_wait;
  bool m_outcomeTimelineStarted;
  bool m_finishedUiShown;
  float m_adjustedElapsedTime;
  bool m_raceInterruptedUIShown;
};
struct RaceStopState {
  struct RaceStopState__Class *klass;
  struct MonitorData *monitor;
  struct RaceStopState__Fields fields;
};
struct RaceStopState__VTable {
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
struct RaceStopState__StaticFields {
};
struct RaceStopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStopState__VTable vtable;
};

struct __declspec(align(8)) RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct RaceSystem * __4__this;
  float _timeSoFar_5__2;
};
struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147 {
  struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class *klass;
  struct MonitorData *monitor;
  struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Fields fields;
};
struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__VTable {
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
struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__StaticFields {
};
struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceSystem_StartRaceFromMainMenuCoroutine_d_147__VTable vtable;
};

struct RestartRaceAction__Fields {
  struct ActionMethod__Fields _;
};
struct RestartRaceAction {
  struct RestartRaceAction__Class *klass;
  struct MonitorData *monitor;
  struct RestartRaceAction__Fields fields;
};
struct RestartRaceAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct RestartRaceAction__StaticFields {
};
struct RestartRaceAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RestartRaceAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RestartRaceAction__VTable vtable;
};

struct TimerStringValueProvider__Fields {
  struct StringValueProvider__Fields _;
};
struct TimerStringValueProvider {
  struct TimerStringValueProvider__Class *klass;
  struct MonitorData *monitor;
  struct TimerStringValueProvider__Fields fields;
};
struct TimerStringValueProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetStringValue;
};
struct TimerStringValueProvider__StaticFields {
};
struct TimerStringValueProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerStringValueProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerStringValueProvider__VTable vtable;
};

struct TimerTargetStringValueProvider__Fields {
  struct StringValueProvider__Fields _;
  int32_t m_cachedMs;
  struct String * m_cachedString;
};
struct TimerTargetStringValueProvider {
  struct TimerTargetStringValueProvider__Class *klass;
  struct MonitorData *monitor;
  struct TimerTargetStringValueProvider__Fields fields;
};
struct TimerTargetStringValueProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetStringValue;
};
struct TimerTargetStringValueProvider__StaticFields {
};
struct TimerTargetStringValueProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerTargetStringValueProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerTargetStringValueProvider__VTable vtable;
};

struct TimerTextbox__Fields {
  struct MonoBehaviour__Fields _;
  struct TextBox__Array * TextBox;
  struct Color NormalColor;
  struct Color OvertimeColor;
  struct MoonTimeline * TimeoutPulseTimeline;
  bool m_initialized;
  bool m_wasOvertimeLastFrame;
};
struct TimerTextbox {
  struct TimerTextbox__Class *klass;
  struct MonitorData *monitor;
  struct TimerTextbox__Fields fields;
};
struct TextBox__Array {
  struct TextBox__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextBox * vector[32];
};
struct TimerTextbox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimerTextbox__StaticFields {
};
struct TimerTextbox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerTextbox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerTextbox__VTable vtable;
};

struct LightningAnimator_LightningEvent {
  float LightningTime;
  struct BaseAnimator * LightningAnimator;
};
struct LightningAnimator_LightningEvent__Boxed {
  struct LightningAnimator_LightningEvent__Class *klass;
  struct MonitorData *monitor;
  struct LightningAnimator_LightningEvent fields;
};
struct LightningAnimator__Fields {
  struct MonoBehaviour__Fields _;
  float MinTimeBetweenLightnings;
  float MaxTimeBetweenLightnings;
  float MinLightningDuration;
  float MaxLightningDuration;
  struct Transform * SoundTarget;
  struct BaseAnimator__Array * LightningTimelines;
  struct LightningAnimator_LightningEvent m_nextLightning;
};
struct LightningAnimator {
  struct LightningAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LightningAnimator__Fields fields;
};
struct LightningAnimator_LightningEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightningAnimator_LightningEvent__StaticFields {
};
struct LightningAnimator_LightningEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightningAnimator_LightningEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightningAnimator_LightningEvent__VTable vtable;
};
struct LightningAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightningAnimator__StaticFields {
};
struct LightningAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightningAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightningAnimator__VTable vtable;
};

struct LightningController_LightningEvent {
  float LightningTime;
  struct MoonTimeline * LightningTimeline;
  struct MoonTimeline * CameraShakeTimeline;
  struct MoonTimeline * BrightnessTimeline;
};
struct LightningController_LightningEvent__Boxed {
  struct LightningController_LightningEvent__Class *klass;
  struct MonitorData *monitor;
  struct LightningController_LightningEvent fields;
};
struct LightningController__Fields {
  struct MonoBehaviour__Fields _;
  float MinTimeBetweenLightnings;
  float MaxTimeBetweenLightnings;
  struct MoonTimeline__Array * LightningTimelines;
  struct MoonTimeline__Array * CameraShakeTimelines;
  struct MoonTimeline__Array * BrightnessTimelines;
  struct FloatRange_1 CameraShakeStrenghMultiplier;
  struct FloatRange_1 CameraShakeSpeedMultiplier;
  struct FloatRange_1 BrightnessMultiplier;
  struct CameraShakeModifierContext * m_cameraShakeContext;
  struct IntensityMultiplierContext * m_brightnessIntensityContext;
  struct LightningController_LightningEvent m_nextLightning;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct LightningController {
  struct LightningController__Class *klass;
  struct MonitorData *monitor;
  struct LightningController__Fields fields;
};
struct LightningController_LightningEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightningController_LightningEvent__StaticFields {
};
struct LightningController_LightningEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightningController_LightningEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightningController_LightningEvent__VTable vtable;
};
struct LightningController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct LightningController__StaticFields {
};
struct LightningController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightningController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightningController__VTable vtable;
};

struct AsyncRenderCapture__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_outputPath;
  int32_t m_framesToRecord;
  struct Action_1_Int32_ * m_onComplete;
  float m_deltaTime;
  int32_t _CaptureCount_k__BackingField;
  bool m_showFrameCount;
  int32_t m_startFrame;
};
struct AsyncRenderCapture {
  struct AsyncRenderCapture__Class *klass;
  struct MonitorData *monitor;
  struct AsyncRenderCapture__Fields fields;
};
struct AsyncRenderCapture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncRenderCapture__StaticFields {
  struct MethodInfo_1 * m_gameViewRepaintAllMethod;
  struct Type * _GameViewType_k__BackingField;
};
struct AsyncRenderCapture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncRenderCapture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncRenderCapture__VTable vtable;
};

enum RenderTargetType__Enum : int32_t {
  RenderTargetType__Enum_None = 0,
  RenderTargetType__Enum_Permanent = 1,
  RenderTargetType__Enum_Temp = 2,
  RenderTargetType__Enum_TempCB = 3,
  RenderTargetType__Enum_External = 4,
};
struct RenderTargetType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTargetType__Enum value;
};
struct RenderTargetDescriptor {
  enum RenderTargetType__Enum type;
  struct String * name;
  struct RenderTextureDescriptor desc;
  enum FilterMode__Enum filterMode;
  struct RenderTexture * external;
  bool drsUsed;
};
struct RenderTargetDescriptor__Boxed {
  struct RenderTargetDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct RenderTargetDescriptor fields;
};
enum RenderTarget_State__Enum : int32_t {
  RenderTarget_State__Enum_None = 0,
  RenderTarget_State__Enum_Acquired = 1,
  RenderTarget_State__Enum_Released = 2,
};
struct RenderTarget_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTarget_State__Enum value;
};
struct Int2 {
  int32_t x;
  int32_t y;
};
struct Int2__Boxed {
  struct Int2__Class *klass;
  struct MonitorData *monitor;
  struct Int2 fields;
};
struct __declspec(align(8)) RenderTarget__Fields {
  struct RenderTargetDescriptor desc;
  enum RenderTarget_State__Enum state;
  struct RenderTargetDescriptor current;
  struct Int2 acquiredSize;
  struct RenderTexture * _tex_k__BackingField;
  int32_t _nameID_k__BackingField;
  struct RenderTargetIdentifier _id_k__BackingField;
};}