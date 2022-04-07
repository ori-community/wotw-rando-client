namespace app {
struct List_1_Metaballs2D_MetaballRenderer_IMetaball___VTable {
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
struct List_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields {
  struct MetaballRenderer_IMetaball__Array * _emptyArray;
};
struct List_1_Metaballs2D_MetaballRenderer_IMetaball___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Metaballs2D_MetaballRenderer_IMetaball___VTable vtable;
};
struct MetaballRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData Update;
  VirtualInvokeData Init;
  VirtualInvokeData UdpateMetaBall;
  VirtualInvokeData ApplySpeed;
  VirtualInvokeData OnBeforeUdpate;
  VirtualInvokeData OnAfterUdpate;
};
struct MetaballRenderer__StaticFields {
};
struct MetaballRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MetaballRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MetaballRenderer__VTable vtable;
};
struct PoisonousWaterZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData Update;
  VirtualInvokeData Init;
  VirtualInvokeData UdpateMetaBall;
  VirtualInvokeData ApplySpeed;
  VirtualInvokeData OnBeforeUdpate;
  VirtualInvokeData OnAfterUdpate;
};
struct PoisonousWaterZone__StaticFields {
};
struct PoisonousWaterZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PoisonousWaterZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PoisonousWaterZone__VTable vtable;
};

enum RaceData_RaceStartFaceDirection__Enum : int32_t {
  RaceData_RaceStartFaceDirection__Enum_Left = 0,
  RaceData_RaceStartFaceDirection__Enum_Right = 1,
};
struct RaceData_RaceStartFaceDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceData_RaceStartFaceDirection__Enum value;
};
struct BossRaceData__Fields {
  struct MonoBehaviour__Fields _;
  struct Condition_1 * m_getReadyCondition;
  struct Condition_1 * m_beatenCondition;
  struct Condition_1 * m_postFinishCondition;
  struct DesiredUberStateComposite * m_stateOverride;
  struct List_1_EquipmentType_ * m_disabledAbilities;
  struct RaceSettings * m_raceSettings;
  struct Transform * m_startLineTransform;
  bool PlaceOriDirectlyAtStartTransform;
  struct Transform * m_endTransform;
  struct List_1_SceneMetaData_ * m_requiredPreviewScenes;
  struct List_1_Moon_MoonReference_1__13 * m_raceSyncables;
  enum RaceData_RaceStartFaceDirection__Enum StartFacingDirection;
  struct BooleanUberState * RaceInProgressState;
  float RaceStartOffset;
  struct String * m_leaderBoardId;
};
struct BossRaceData {
  struct BossRaceData__Class *klass;
  struct MonitorData *monitor;
  struct BossRaceData__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__13__Fields {
  struct MoonReference_1_IRaceSyncable___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__13 {
  struct List_1_Moon_MoonReference_1__13__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__13__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IRaceSyncable___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IRaceSyncable_ * m_cachedProxyType;
  struct IRaceSyncable * m_volatileValue;
};
struct MoonReference_1_IRaceSyncable_ {
  struct MoonReference_1_IRaceSyncable___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IRaceSyncable___Fields fields;
};
struct MoonReference_1_IRaceSyncable___Array {
  struct MoonReference_1_IRaceSyncable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_IRaceSyncable_ * vector[32];
};
struct IMoonType_1_IRaceSyncable_ {
  struct IMoonType_1_IRaceSyncable___Class *klass;
  struct MonitorData *monitor;
};
struct IRaceSyncable {
  struct IRaceSyncable__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonReference_1__13 {
  struct IEnumerator_1_Moon_MoonReference_1__13__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_IRaceSyncable___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IRaceSyncable___StaticFields {
};
struct IMoonType_1_IRaceSyncable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IRaceSyncable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IRaceSyncable___VTable vtable;
};
struct IRaceSyncable__VTable {
  VirtualInvokeData OnRaceStart;
  VirtualInvokeData OnSyncRaceTimer;
};
struct IRaceSyncable__StaticFields {
};
struct IRaceSyncable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRaceSyncable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRaceSyncable__VTable vtable;
};
struct MoonReference_1_IRaceSyncable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_IRaceSyncable___StaticFields {
};
struct MoonReference_1_IRaceSyncable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IRaceSyncable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IRaceSyncable___VTable vtable;
};
struct IEnumerator_1_Moon_MoonReference_1__13__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__13__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__13__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__13__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1__13__VTable vtable;
};
struct List_1_Moon_MoonReference_1__13__VTable {
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
struct List_1_Moon_MoonReference_1__13__StaticFields {
  struct MoonReference_1_IRaceSyncable___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__13__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__13__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__13__VTable vtable;
};
struct BossRaceData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RaceName;
  VirtualInvokeData get_RequiredScenes;
  VirtualInvokeData get_StartLinePosition;
  VirtualInvokeData get_EndPosition;
  VirtualInvokeData get_FlythroughTimeline;
  VirtualInvokeData get_RaceSettings;
  VirtualInvokeData get_TimeLimit;
  VirtualInvokeData get_GetReadyCondition;
  VirtualInvokeData get_PostFinishCondition;
  VirtualInvokeData get_IsBeaten;
  VirtualInvokeData get_ShouldPlayEndingAnimation;
  VirtualInvokeData get_StateOverride;
  VirtualInvokeData get_DisabledAbilities;
  VirtualInvokeData get_RaceSyncables;
};
struct BossRaceData__StaticFields {
};
struct BossRaceData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossRaceData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossRaceData__VTable vtable;
};

struct BossRaceHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct BossRaceData * Data;
  bool m_inProgress;
  bool m_startRaceOnEnable;
  struct Action * m_onStartRaceAction;
  struct Vector3 m_oriStartRacePosition;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendables;
  bool m_alreadySuspended;
};
struct BossRaceHandler {
  struct BossRaceHandler__Class *klass;
  struct MonitorData *monitor;
  struct BossRaceHandler__Fields fields;
};
enum RaceStopReason__Enum : int32_t {
  RaceStopReason__Enum_None = 0,
  RaceStopReason__Enum_Finished = 1,
  RaceStopReason__Enum_Timeout = 2,
  RaceStopReason__Enum_Death = 3,
  RaceStopReason__Enum_SpectatingFinished = 4,
  RaceStopReason__Enum_TechnicalFailure = 5,
  RaceStopReason__Enum_UserAction = 6,
};
struct RaceStopReason__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceStopReason__Enum value;
};
enum ScoreResult__Enum : int32_t {
  ScoreResult__Enum_Regular = 0,
  ScoreResult__Enum_NewPersonalBest = 1,
  ScoreResult__Enum_NewBest = 2,
};
struct ScoreResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScoreResult__Enum value;
};
struct __declspec(align(8)) RaceStateMachineContext__Fields {
  struct LeaderBoardService * LeaderBoardService;
  struct RaceConfiguration * Configuration;
  struct MonoBehaviour * CoroutineTarget;
  struct Transform * UiTransform;
  struct RaceLeaderboardUI * LeaderboardUI;
  bool IsNameRequired;
  enum RaceStopReason__Enum StopReason;
  float DeltaTime;
  struct Exception * TechnicalFailure;
  struct GhostIndicatorManager * GhostIndicatorService;
  struct FinishHandlerService * FinishHandlerService;
  struct RacesUiService * RacesUI;
  struct MessageProvider * HelpTopMessageForPedestal;
  struct MessageProvider * HelpBottomMessageForPedestal;
  struct MessageProvider * HelpBottomMessageForPedestalNoFriends;
  struct MessageProvider * ActivateRaceMessage;
  struct MessageProvider * SkipFlythroughMessage;
  struct MessageProvider * TimeoutRaceMessage;
  struct MessageProvider * ReturnRaceMessage;
  struct MessageProvider * AbandonedRaceMessage;
  struct MessageProvider * HelpBottomMessageForRaceFinished;
  struct MessageProvider * HelpBottomMessageForRaceInterrupted;
  struct MessageProvider * HelpBottomMessageForRaceFinishedExitOnly;
  struct MessageProvider * HelpMiddleHashcodeMessage;
  struct MessageProvider * MessageTimeoutControlHelp;
  struct MessageProvider * OfflineMessage;
  struct MessageProvider * NoTokenMessage;
  bool UserRequestedRetry;
  bool UserRequestedWatchReplay;
  bool UserRequestedLeaderboard;
  struct List_1_System_String_ * SelectedPlayerReplays;
  struct RaceStateMachineContext_SequencesConfiguration * Sequences;
  struct RaceStateMachineContext_TimelinesConfiguration * Timelines;
  struct RaceStateMachineContext_MessagesConfiguration * Messages;
  struct List_1_MessageBox_ * DisposableMessageBoxes;
  enum ScoreResult__Enum ScoreResult;
  float LastRaceTime;
  bool JustBeatDevGhost;
  float LastOriPositionX;
};
struct RaceStateMachineContext {
  struct RaceStateMachineContext__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext__Fields fields;
};
struct __declspec(align(8)) RaceConfiguration__Fields {
  bool ShouldSpectate;
  bool ShowLeaderboard;
  struct ITrialData * Race;
  struct ITrialHandler * Handler;
};
struct RaceConfiguration {
  struct RaceConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct RaceConfiguration__Fields fields;
};
struct ITrialData {
  struct ITrialData__Class *klass;
  struct MonitorData *monitor;
};
struct ITrialHandler {
  struct ITrialHandler__Class *klass;
  struct MonitorData *monitor;
};
struct RaceLeaderboardUI__Fields {
  struct MonoBehaviour__Fields _;
  struct Color LocalPlayerNameColor;
  struct Color DefaultNameColor;
  struct List_1_Moon_Race_RaceLeaderboardUI_Entry_ * m_entries;
};
struct RaceLeaderboardUI {
  struct RaceLeaderboardUI__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardUI__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Race_RaceLeaderboardUI_Entry___Fields {
  struct RaceLeaderboardUI_Entry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Race_RaceLeaderboardUI_Entry_ {
  struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Fields fields;
};
struct __declspec(align(8)) RaceLeaderboardUI_Entry__Fields {
  struct GameObject * EntryGameObject;
  struct MessageBox * Rank;
  struct MessageBox * Name;
  struct MessageBox * Time;
};
struct RaceLeaderboardUI_Entry {
  struct RaceLeaderboardUI_Entry__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardUI_Entry__Fields fields;
};
struct RaceLeaderboardUI_Entry__Array {
  struct RaceLeaderboardUI_Entry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceLeaderboardUI_Entry * vector[32];
};
struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry_ {
  struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GhostIndicatorManager__Fields {
  struct GameObject * m_indicator;
  struct GameObject__Array * m_indicatorInstances;
};
struct GhostIndicatorManager {
  struct GhostIndicatorManager__Class *klass;
  struct MonitorData *monitor;
  struct GhostIndicatorManager__Fields fields;
};
struct __declspec(align(8)) FinishHandlerService__Fields {
  struct Action * GhostArrived;
  struct List_1_GhostPlayer_ * m_ghosts;
  struct Boolean__Array * m_arrivals;
  int32_t m_totalArrived;
};
struct FinishHandlerService {
  struct FinishHandlerService__Class *klass;
  struct MonitorData *monitor;
  struct FinishHandlerService__Fields fields;
};
struct __declspec(align(8)) List_1_GhostPlayer___Fields {
  struct GhostPlayer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_GhostPlayer_ {
  struct List_1_GhostPlayer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_GhostPlayer___Fields fields;
};
struct GhostPlayer__Array {
  struct GhostPlayer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GhostPlayer * vector[32];
};
struct IEnumerator_1_GhostPlayer_ {
  struct IEnumerator_1_GhostPlayer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) RacesUiService__Fields {
  float m_defaultHudFadeTime;
  bool m_gameLockedByUi;
  bool m_hidingSeinUi;
  struct MessageBox * m_startPedestalBottomHint;
  bool m_showingOfflineMessage;
  struct MessageBox * m_raceLeaveHint;
};
struct RacesUiService {
  struct RacesUiService__Class *klass;
  struct MonitorData *monitor;
  struct RacesUiService__Fields fields;
};
struct __declspec(align(8)) RaceStateMachineContext_SequencesConfiguration__Fields {
  struct ActionMethod * OutcomeTimeout;
  struct ActionMethod * OutcomeRegular;
  struct ActionMethod * OutcomeHighScore;
  struct ActionMethod * OutcomeGlobalHighScore;
};
struct RaceStateMachineContext_SequencesConfiguration {
  struct RaceStateMachineContext_SequencesConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_SequencesConfiguration__Fields fields;
};
struct __declspec(align(8)) RaceStateMachineContext_TimelinesConfiguration__Fields {
  struct MoonTimeline * OutcomeTimeout;
  struct MoonTimeline * OutcomeRegular;
  struct MoonTimeline * OutcomeHighScore;
  struct MoonTimeline * OutcomeGlobalHighScore;
};
struct RaceStateMachineContext_TimelinesConfiguration {
  struct RaceStateMachineContext_TimelinesConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_TimelinesConfiguration__Fields fields;
};
struct __declspec(align(8)) RaceStateMachineContext_MessagesConfiguration__Fields {
  struct MessageProvider * OutcomeRegular;
  struct MessageProvider * OutcomeHighScore;
  struct MessageProvider * OutcomeGlobalHighScore;
};
struct RaceStateMachineContext_MessagesConfiguration {
  struct RaceStateMachineContext_MessagesConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct RaceStateMachineContext_MessagesConfiguration__Fields fields;
};
struct __declspec(align(8)) List_1_MessageBox___Fields {
  struct MessageBox__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MessageBox_ {
  struct List_1_MessageBox___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MessageBox___Fields fields;
};
struct IEnumerator_1_MessageBox_ {
  struct IEnumerator_1_MessageBox___Class *klass;
  struct MonitorData *monitor;
};
struct BossRaceHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnGhostFinished;
  VirtualInvokeData OnPlayerFinished;
  VirtualInvokeData OnRaceFinished;
  VirtualInvokeData OnRaceFailed;
  VirtualInvokeData SetRaceInProgressState;
  VirtualInvokeData IsInsideRaceArea;
  VirtualInvokeData StartMenuRace;
  VirtualInvokeData PlaceOriAtStart;
};
struct BossRaceHandler__StaticFields {
};
struct BossRaceHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BossRaceHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BossRaceHandler__VTable vtable;
};
struct ITrialData__VTable {
  VirtualInvokeData get_RaceName;
  VirtualInvokeData get_RequiredScenes;
  VirtualInvokeData get_StartLinePosition;
  VirtualInvokeData get_EndPosition;
  VirtualInvokeData get_FlythroughTimeline;
  VirtualInvokeData get_RaceSettings;
  VirtualInvokeData get_TimeLimit;
  VirtualInvokeData get_GetReadyCondition;
  VirtualInvokeData get_PostFinishCondition;
  VirtualInvokeData get_IsBeaten;
  VirtualInvokeData get_ShouldPlayEndingAnimation;
  VirtualInvokeData get_StateOverride;
  VirtualInvokeData get_DisabledAbilities;
  VirtualInvokeData get_RaceSyncables;
};
struct ITrialData__StaticFields {
};
struct ITrialData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITrialData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITrialData__VTable vtable;
};
struct ITrialHandler__VTable {
  VirtualInvokeData OnGhostFinished;
  VirtualInvokeData OnPlayerFinished;
  VirtualInvokeData OnRaceFinished;
  VirtualInvokeData OnRaceFailed;
  VirtualInvokeData SetRaceInProgressState;
  VirtualInvokeData IsInsideRaceArea;
  VirtualInvokeData StartMenuRace;
  VirtualInvokeData PlaceOriAtStart;
};
struct ITrialHandler__StaticFields {
};
struct ITrialHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITrialHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITrialHandler__VTable vtable;
};
struct RaceConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceConfiguration__StaticFields {
};
struct RaceConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceConfiguration__VTable vtable;
};
struct RaceLeaderboardUI_Entry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardUI_Entry__StaticFields {
};
struct RaceLeaderboardUI_Entry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardUI_Entry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardUI_Entry__VTable vtable;
};
struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields {
};
struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___VTable vtable;
};
struct List_1_Moon_Race_RaceLeaderboardUI_Entry___VTable {
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
struct List_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields {
  struct RaceLeaderboardUI_Entry__Array * _emptyArray;
};
struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Race_RaceLeaderboardUI_Entry___VTable vtable;
};
struct RaceLeaderboardUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardUI__StaticFields {
};
struct RaceLeaderboardUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardUI__VTable vtable;
};
struct GhostIndicatorManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GhostIndicatorManager__StaticFields {
};
struct GhostIndicatorManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GhostIndicatorManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GhostIndicatorManager__VTable vtable;
};
struct IEnumerator_1_GhostPlayer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_GhostPlayer___StaticFields {
};
struct IEnumerator_1_GhostPlayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_GhostPlayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_GhostPlayer___VTable vtable;
};
struct List_1_GhostPlayer___VTable {
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
struct List_1_GhostPlayer___StaticFields {
  struct GhostPlayer__Array * _emptyArray;
};
struct List_1_GhostPlayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_GhostPlayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_GhostPlayer___VTable vtable;
};
struct FinishHandlerService__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FinishHandlerService__StaticFields {
};
struct FinishHandlerService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FinishHandlerService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FinishHandlerService__VTable vtable;
};
struct RacesUiService__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RacesUiService__StaticFields {
};
struct RacesUiService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RacesUiService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RacesUiService__VTable vtable;
};
struct RaceStateMachineContext_SequencesConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_SequencesConfiguration__StaticFields {
};
struct RaceStateMachineContext_SequencesConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_SequencesConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_SequencesConfiguration__VTable vtable;
};
struct RaceStateMachineContext_TimelinesConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_TimelinesConfiguration__StaticFields {
};
struct RaceStateMachineContext_TimelinesConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_TimelinesConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_TimelinesConfiguration__VTable vtable;
};
struct RaceStateMachineContext_MessagesConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext_MessagesConfiguration__StaticFields {
};
struct RaceStateMachineContext_MessagesConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext_MessagesConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext_MessagesConfiguration__VTable vtable;
};
struct IEnumerator_1_MessageBox___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MessageBox___StaticFields {
};
struct IEnumerator_1_MessageBox___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MessageBox___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MessageBox___VTable vtable;
};
struct List_1_MessageBox___VTable {
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
struct List_1_MessageBox___StaticFields {
  struct MessageBox__Array * _emptyArray;
};
struct List_1_MessageBox___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MessageBox___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MessageBox___VTable vtable;
};
struct RaceStateMachineContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceStateMachineContext__StaticFields {
  bool EnableOfflineRaceStorage;
  bool DebugSaveAllRacesAsOffline;
};
struct RaceStateMachineContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStateMachineContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStateMachineContext__VTable vtable;
};

struct __declspec(align(8)) BossRaceHandler_ChallengeFailedFade_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct BossRaceHandler * __4__this;
};
struct BossRaceHandler_ChallengeFailedFade_d_15 {
  struct BossRaceHandler_ChallengeFailedFade_d_15__Class *klass;
  struct MonitorData *monitor;
  struct BossRaceHandler_ChallengeFailedFade_d_15__Fields fields;
};
struct BossRaceHandler_ChallengeFailedFade_d_15__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};}