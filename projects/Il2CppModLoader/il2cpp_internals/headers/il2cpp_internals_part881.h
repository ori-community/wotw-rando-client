namespace app {
struct CanSkipRaceCondition__VTable {
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
struct CanSkipRaceCondition__StaticFields {
};
struct CanSkipRaceCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanSkipRaceCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanSkipRaceCondition__VTable vtable;
};

struct Database_c {
  struct Database_c__Class *klass;
  struct MonitorData *monitor;
};
struct Database_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Database_c__StaticFields {
  struct Database_c * __9;
  struct Comparison_1_Moon_Race_LeaderBoardEntry_ * __9__9_0;
  struct Action_1_System_Threading_Tasks_Task_ * __9__11_1;
};
struct Database_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Database_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Database_c__VTable vtable;
};

struct __declspec(align(8)) Database_c_DisplayClass11_0__Fields {
  struct RaceLeaderBoard * leaderBoard;
  struct String * raceId;
  struct ITrialData * trialData;
  struct RaceSettings * raceSettings;
};
struct Database_c_DisplayClass11_0 {
  struct Database_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct Database_c_DisplayClass11_0__Fields fields;
};
struct Database_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Database_c_DisplayClass11_0__StaticFields {
};
struct Database_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Database_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Database_c_DisplayClass11_0__VTable vtable;
};

struct __declspec(align(8)) Database_c_DisplayClass13_0__Fields {
  struct String * displayName;
};
struct Database_c_DisplayClass13_0 {
  struct Database_c_DisplayClass13_0__Class *klass;
  struct MonitorData *monitor;
  struct Database_c_DisplayClass13_0__Fields fields;
};
struct Database_c_DisplayClass13_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Database_c_DisplayClass13_0__StaticFields {
};
struct Database_c_DisplayClass13_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Database_c_DisplayClass13_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Database_c_DisplayClass13_0__VTable vtable;
};

struct EscapeRaceData__Fields {
  struct MonoBehaviour__Fields _;
  struct DesiredUberStateComposite * m_stateOverride;
  struct List_1_EquipmentType_ * m_disabledAbilities;
  struct RaceSettings * m_raceSettings;
  struct Transform * m_startLineTransform;
  struct Transform * m_endTransform;
  struct List_1_SceneMetaData_ * m_requiredPreviewScenes;
  struct List_1_Moon_MoonReference_1__13 * m_raceSyncables;
  struct TriggerColliderCallback * m_endTriggerCollider;
  struct BooleanUberState * RaceInProgressState;
  struct PlayerInsideZoneChecker__Array * m_raceAreaCheckers;
  struct String * m_leaderBoardId;
};
struct EscapeRaceData {
  struct EscapeRaceData__Class *klass;
  struct MonitorData *monitor;
  struct EscapeRaceData__Fields fields;
};
struct EscapeRaceData__VTable {
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
struct EscapeRaceData__StaticFields {
};
struct EscapeRaceData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EscapeRaceData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EscapeRaceData__VTable vtable;
};

struct EscapeRaceHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct EscapeRaceData * Data;
  bool m_inProgress;
  bool m_inStartProximity;
  bool m_inEndProximity;
  bool m_startRaceOnEnable;
  struct Action * m_onStartRaceAction;
};
struct EscapeRaceHandler {
  struct EscapeRaceHandler__Class *klass;
  struct MonitorData *monitor;
  struct EscapeRaceHandler__Fields fields;
};
struct EscapeRaceHandler__VTable {
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
struct EscapeRaceHandler__StaticFields {
};
struct EscapeRaceHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EscapeRaceHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EscapeRaceHandler__VTable vtable;
};

struct __declspec(align(8)) EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct EscapeRaceHandler * __4__this;
};
struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21 {
  struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class *klass;
  struct MonitorData *monitor;
  struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Fields fields;
};
struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__VTable {
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
struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__StaticFields {
};
struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EscapeRaceHandler_StartMenuRaceNextFrame_d_21__VTable vtable;
};

struct LeaderBoardService_c {
  struct LeaderBoardService_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_ {
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Fields fields;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___VTable {
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
struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___StaticFields {
};
struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean___VTable vtable;
};
struct LeaderBoardService_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderBoardService_c__StaticFields {
  struct LeaderBoardService_c * __9;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_ * __9__1_0;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_ * __9__2_0;
  struct Comparison_1_Moon_Race_LeaderBoardEntry_ * __9__4_0;
  struct Func_2_Moon_Race_LeaderBoardEntry_Boolean_ * __9__4_1;
};
struct LeaderBoardService_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderBoardService_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderBoardService_c__VTable vtable;
};

struct __declspec(align(8)) LeaderBoardWrapper__Fields {
  struct List_1_Moon_Race_LeaderBoardEntry_ * LeaderBoards;
};
struct LeaderBoardWrapper {
  struct LeaderBoardWrapper__Class *klass;
  struct MonitorData *monitor;
  struct LeaderBoardWrapper__Fields fields;
};
struct LeaderBoardWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderBoardWrapper__StaticFields {
};
struct LeaderBoardWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderBoardWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderBoardWrapper__VTable vtable;
};

struct MatchmakingExtensions_c {
  struct MatchmakingExtensions_c__Class *klass;
  struct MonitorData *monitor;
};
struct MatchmakingExtensions_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingExtensions_c__StaticFields {
  struct MatchmakingExtensions_c * __9;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32_ * __9__0_0;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32_ * __9__0_1;
  struct Predicate_1_Moon_Race_LeaderBoardEntry_ * __9__0_2;
  struct Comparison_1_Moon_Race_LeaderBoardEntry_ * __9__1_1;
};
struct MatchmakingExtensions_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingExtensions_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingExtensions_c__VTable vtable;
};

struct __declspec(align(8)) MatchmakingExtensions_c_DisplayClass1_0__Fields {
  struct String * playerName;
};
struct MatchmakingExtensions_c_DisplayClass1_0 {
  struct MatchmakingExtensions_c_DisplayClass1_0__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingExtensions_c_DisplayClass1_0__Fields fields;
};
struct MatchmakingExtensions_c_DisplayClass1_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingExtensions_c_DisplayClass1_0__StaticFields {
};
struct MatchmakingExtensions_c_DisplayClass1_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingExtensions_c_DisplayClass1_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingExtensions_c_DisplayClass1_0__VTable vtable;
};

enum RaceData_RaceDataState__Enum : int32_t {
  RaceData_RaceDataState__Enum_Inactive = 0,
  RaceData_RaceDataState__Enum_Active = 1,
  RaceData_RaceDataState__Enum_Beaten = 2,
};
struct RaceData_RaceDataState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceData_RaceDataState__Enum value;
};

struct RaceLeaderboardAction__Fields {
  struct ActionMethod__Fields _;
  struct RaceHandler * m_raceHandler;
};
struct RaceLeaderboardAction {
  struct RaceLeaderboardAction__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardAction__Fields fields;
};
struct RaceLeaderboardAction__VTable {
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
struct RaceLeaderboardAction__StaticFields {
};
struct RaceLeaderboardAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardAction__VTable vtable;
};

struct RaceLeaderboardUI_c {
  struct RaceLeaderboardUI_c__Class *klass;
  struct MonitorData *monitor;
};
struct RaceLeaderboardUI_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardUI_c__StaticFields {
  struct RaceLeaderboardUI_c * __9;
  struct Predicate_1_Moon_Race_LeaderBoardEntry_ * __9__4_0;
};
struct RaceLeaderboardUI_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardUI_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardUI_c__VTable vtable;
};

struct RaceProximityAction__Fields {
  struct ActionMethod__Fields _;
  struct RaceHandler * m_raceHandler;
  bool m_inProximity;
};
struct RaceProximityAction {
  struct RaceProximityAction__Class *klass;
  struct MonitorData *monitor;
  struct RaceProximityAction__Fields fields;
};
struct RaceProximityAction__VTable {
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
struct RaceProximityAction__StaticFields {
};
struct RaceProximityAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceProximityAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceProximityAction__VTable vtable;
};

struct RaceSkipAction__Fields {
  struct ActionMethod__Fields _;
};
struct RaceSkipAction {
  struct RaceSkipAction__Class *klass;
  struct MonitorData *monitor;
  struct RaceSkipAction__Fields fields;
};
struct RaceSkipAction__VTable {
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
struct RaceSkipAction__StaticFields {
};
struct RaceSkipAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceSkipAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceSkipAction__VTable vtable;
};

struct RaceStartAction__Fields {
  struct ActionMethod__Fields _;
  struct RaceHandler * m_raceHandler;
  bool m_isSpectator;
};
struct RaceStartAction {
  struct RaceStartAction__Class *klass;
  struct MonitorData *monitor;
  struct RaceStartAction__Fields fields;
};
struct RaceStartAction__VTable {
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
struct RaceStartAction__StaticFields {
};
struct RaceStartAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStartAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStartAction__VTable vtable;
};

struct RaceStopAction__Fields {
  struct ActionMethod__Fields _;
};
struct RaceStopAction {
  struct RaceStopAction__Class *klass;
  struct MonitorData *monitor;
  struct RaceStopAction__Fields fields;
};
struct RaceStopAction__VTable {
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
struct RaceStopAction__StaticFields {
};
struct RaceStopAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceStopAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceStopAction__VTable vtable;
};

struct ReplayValidator_ValidReason {
  bool IsValid;
  struct String * Reason;
  float Value;
};
struct ReplayValidator_ValidReason__Boxed {
  struct ReplayValidator_ValidReason__Class *klass;
  struct MonitorData *monitor;
  struct ReplayValidator_ValidReason fields;
};
struct ReplayValidator_ValidReason__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayValidator_ValidReason__StaticFields {
};
struct ReplayValidator_ValidReason__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayValidator_ValidReason__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayValidator_ValidReason__VTable vtable;
};

struct __declspec(align(8)) ReplayValidator_Constraint__Fields {
  float Interval;
  struct Vector2 Min;
  struct Vector2 Max;
  float SqrMagnitude;
  struct Vector2 MinRecorded;
  struct Vector2 MaxRecorded;
  float RecordedSqrMagnitude;
};
struct ReplayValidator_Constraint {
  struct ReplayValidator_Constraint__Class *klass;
  struct MonitorData *monitor;
  struct ReplayValidator_Constraint__Fields fields;
};
struct __declspec(align(8)) ReplayValidator_Snapshot__Fields {
  int32_t Frame;
  struct Nullable_1_UnityEngine_Vector3_ Position;
  float Time;
};
struct ReplayValidator_Snapshot {
  struct ReplayValidator_Snapshot__Class *klass;
  struct MonitorData *monitor;
  struct ReplayValidator_Snapshot__Fields fields;
};
struct ReplayValidator_Constraint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayValidator_Constraint__StaticFields {
};
struct ReplayValidator_Constraint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayValidator_Constraint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayValidator_Constraint__VTable vtable;
};
struct ReplayValidator_Snapshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayValidator_Snapshot__StaticFields {
};
struct ReplayValidator_Snapshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayValidator_Snapshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayValidator_Snapshot__VTable vtable;
};

struct ReplayValidator_c {
  struct ReplayValidator_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_UnityEngine_Rect_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_Rect_Boolean_ {
  struct Func_2_UnityEngine_Rect_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_Rect_Boolean___Fields fields;
};
struct Func_2_IGhostFrameData_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_IGhostFrameData_Boolean_ {
  struct Func_2_IGhostFrameData_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_IGhostFrameData_Boolean___Fields fields;
};
struct Func_2_UnityEngine_Rect_Boolean___VTable {
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
struct Func_2_UnityEngine_Rect_Boolean___StaticFields {
};
struct Func_2_UnityEngine_Rect_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_UnityEngine_Rect_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_UnityEngine_Rect_Boolean___VTable vtable;
};
struct Func_2_IGhostFrameData_Boolean___VTable {
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
struct Func_2_IGhostFrameData_Boolean___StaticFields {
};
struct Func_2_IGhostFrameData_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_IGhostFrameData_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_IGhostFrameData_Boolean___VTable vtable;
};
struct ReplayValidator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayValidator_c__StaticFields {
  struct ReplayValidator_c * __9;
  struct Func_2_UnityEngine_Rect_Boolean_ * __9__5_0;
  struct Func_2_IGhostFrameData_Boolean_ * __9__5_1;
};
struct ReplayValidator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayValidator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayValidator_c__VTable vtable;
};

struct __declspec(align(8)) Entry__Fields {
  struct String * player;
  float duration;
  struct String * replay;
};
struct Entry {
  struct Entry__Class *klass;
  struct MonitorData *monitor;
  struct Entry__Fields fields;
};
struct Entry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Entry__StaticFields {
};
struct Entry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Entry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Entry__VTable vtable;
};

struct __declspec(align(8)) LeaderboadData__Fields {
  struct List_1_Moon_Race_Networking_Entry_ * replays;
  bool _IsReady_k__BackingField;
};
struct LeaderboadData {
  struct LeaderboadData__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboadData__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Race_Networking_Entry___Fields {
  struct Entry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Race_Networking_Entry_ {
  struct List_1_Moon_Race_Networking_Entry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Race_Networking_Entry___Fields fields;
};
struct Entry__Array {
  struct Entry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Entry * vector[32];
};
struct IEnumerator_1_Moon_Race_Networking_Entry_ {
  struct IEnumerator_1_Moon_Race_Networking_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Race_Networking_Entry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Race_Networking_Entry___StaticFields {
};
struct IEnumerator_1_Moon_Race_Networking_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Race_Networking_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Race_Networking_Entry___VTable vtable;
};
struct List_1_Moon_Race_Networking_Entry___VTable {
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
struct List_1_Moon_Race_Networking_Entry___StaticFields {
  struct Entry__Array * _emptyArray;
};
struct List_1_Moon_Race_Networking_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Race_Networking_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Race_Networking_Entry___VTable vtable;
};
struct LeaderboadData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboadData__StaticFields {
};
struct LeaderboadData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboadData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboadData__VTable vtable;
};

struct __declspec(align(8)) WebService_c_DisplayClass0_0__Fields {
  struct String * raceName;
  struct String * playerId;
  struct ReplayData * replay;
};
struct WebService_c_DisplayClass0_0 {
  struct WebService_c_DisplayClass0_0__Class *klass;
  struct MonitorData *monitor;
  struct WebService_c_DisplayClass0_0__Fields fields;
};
struct WebService_c_DisplayClass0_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebService_c_DisplayClass0_0__StaticFields {
};
struct WebService_c_DisplayClass0_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebService_c_DisplayClass0_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebService_c_DisplayClass0_0__VTable vtable;
};

struct __declspec(align(8)) WebService_c_DisplayClass1_0__Fields {
  struct String * raceName;
  struct LeaderboadData * replayMetaData;
};
struct WebService_c_DisplayClass1_0 {
  struct WebService_c_DisplayClass1_0__Class *klass;
  struct MonitorData *monitor;
  struct WebService_c_DisplayClass1_0__Fields fields;
};
struct WebService_c_DisplayClass1_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebService_c_DisplayClass1_0__StaticFields {
};
struct WebService_c_DisplayClass1_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebService_c_DisplayClass1_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebService_c_DisplayClass1_0__VTable vtable;
};

struct __declspec(align(8)) WebService_c_DisplayClass2_0__Fields {
  struct String * raceName;
  struct ReplayData * replay;
};
struct WebService_c_DisplayClass2_0 {
  struct WebService_c_DisplayClass2_0__Class *klass;
  struct MonitorData *monitor;
  struct WebService_c_DisplayClass2_0__Fields fields;
};
struct WebService_c_DisplayClass2_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebService_c_DisplayClass2_0__StaticFields {
};
struct WebService_c_DisplayClass2_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebService_c_DisplayClass2_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebService_c_DisplayClass2_0__VTable vtable;
};

struct MothAggroCondition {
  struct MothAggroCondition__Class *klass;
  struct MonitorData *monitor;
};
struct MothAggroCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MothAggroCondition__StaticFields {
};
struct MothAggroCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothAggroCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothAggroCondition__VTable vtable;
};

struct MothFleeCondition {
  struct MothFleeCondition__Class *klass;
  struct MonitorData *monitor;
};
struct MothFleeCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MothFleeCondition__StaticFields {
};
struct MothFleeCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MothFleeCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MothFleeCondition__VTable vtable;
};

struct TurtleAggroCondition {
  struct TurtleAggroCondition__Class *klass;
  struct MonitorData *monitor;
};
struct TurtleAggroCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TurtleAggroCondition__StaticFields {
};
struct TurtleAggroCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurtleAggroCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurtleAggroCondition__VTable vtable;
};}