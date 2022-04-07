namespace app {
struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___StaticFields {
};
struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double___VTable vtable;
};
struct LoadingBootstrap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap__StaticFields {
  struct LoadingBootstrap * Instance;
  bool IsPotato;
  bool UseNewPrewarming;
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation_ * s_prewarmOperations;
  bool m_playerLoopInitialized;
  struct Dictionary_2_UnityEngine_ThreadPriority_System_Double_ * LoadingIntegrationTimesliceValues;
  bool IsXboxOneX;
  bool IsSeriesS;
  bool IsSeriesX;
};
struct LoadingBootstrap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap__VTable vtable;
};

enum PrewarmOperationSlot__Enum : int32_t {
  PrewarmOperationSlot__Enum_RunningOri = 0,
  PrewarmOperationSlot__Enum_BlackAfterRunningOri = 1,
  PrewarmOperationSlot__Enum_IntroLogosBlocking = 2,
  PrewarmOperationSlot__Enum_IntroLogosAndTitleScreen = 3,
  PrewarmOperationSlot__Enum_BlackAfterIntroLogos = 4,
};
struct PrewarmOperationSlot__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PrewarmOperationSlot__Enum value;
};

struct __declspec(align(8)) LoadingBootstrap_c_DisplayClass23_0__Fields {
  struct String * flag;
};
struct LoadingBootstrap_c_DisplayClass23_0 {
  struct LoadingBootstrap_c_DisplayClass23_0__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_c_DisplayClass23_0__Fields fields;
};
struct LoadingBootstrap_c_DisplayClass23_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap_c_DisplayClass23_0__StaticFields {
};
struct LoadingBootstrap_c_DisplayClass23_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_c_DisplayClass23_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_c_DisplayClass23_0__VTable vtable;
};

struct LoadingBootstrap_c {
  struct LoadingBootstrap_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_ {
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___Fields fields;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___VTable {
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
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___StaticFields {
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32___VTable vtable;
};
struct LoadingBootstrap_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap_c__StaticFields {
  struct LoadingBootstrap_c * __9;
  struct Func_2_String_Boolean_ * __9__25_0;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_ * __9__28_1;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_ * __9__28_3;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_ * __9__29_1;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Int32_ * __9__37_1;
};
struct LoadingBootstrap_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_c__VTable vtable;
};

struct __declspec(align(8)) LoadingBootstrap_Start_d_25__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct LoadingBootstrap * __4__this;
  float _maxPrewarmSize_5__2;
  float _maxPrewarmRatio_5__3;
  bool _skipShaderPrewarm_5__4;
  struct String * _maxPrewarmSizeArg_5__5;
  struct String * _maxPrewarmRatioArg_5__6;
  int32_t _oldVsync_5__7;
  struct AsyncOperation_1 * _loadIntroOp_5__8;
  int32_t _i_5__9;
};
struct LoadingBootstrap_Start_d_25 {
  struct LoadingBootstrap_Start_d_25__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_Start_d_25__Fields fields;
};
struct LoadingBootstrap_Start_d_25__VTable {
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
struct LoadingBootstrap_Start_d_25__StaticFields {
};
struct LoadingBootstrap_Start_d_25__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_Start_d_25__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_Start_d_25__VTable vtable;
};

struct __declspec(align(8)) LoadingBootstrap_c_DisplayClass28_0__Fields {
  enum PrewarmOperationSlot__Enum slot;
  struct List_1_frameworks_loading_Prewarmers_IPrewarmOperation_ * failedToFinish;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean_ * __9__2;
};
struct LoadingBootstrap_c_DisplayClass28_0 {
  struct LoadingBootstrap_c_DisplayClass28_0__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_c_DisplayClass28_0__Fields fields;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean_ {
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___Fields fields;
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___VTable {
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
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___StaticFields {
};
struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_frameworks_loading_Prewarmers_IPrewarmOperation_Boolean___VTable vtable;
};
struct LoadingBootstrap_c_DisplayClass28_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap_c_DisplayClass28_0__StaticFields {
};
struct LoadingBootstrap_c_DisplayClass28_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_c_DisplayClass28_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_c_DisplayClass28_0__VTable vtable;
};

struct __declspec(align(8)) LoadingBootstrap_c_DisplayClass29_0__Fields {
  enum PrewarmOperationSlot__Enum slot;
};
struct LoadingBootstrap_c_DisplayClass29_0 {
  struct LoadingBootstrap_c_DisplayClass29_0__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_c_DisplayClass29_0__Fields fields;
};
struct LoadingBootstrap_c_DisplayClass29_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap_c_DisplayClass29_0__StaticFields {
};
struct LoadingBootstrap_c_DisplayClass29_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_c_DisplayClass29_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_c_DisplayClass29_0__VTable vtable;
};

struct __declspec(align(8)) LoadingBootstrap_OnEndOfFrame_d_34__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct LoadingBootstrap * __4__this;
};
struct LoadingBootstrap_OnEndOfFrame_d_34 {
  struct LoadingBootstrap_OnEndOfFrame_d_34__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_OnEndOfFrame_d_34__Fields fields;
};
struct LoadingBootstrap_OnEndOfFrame_d_34__VTable {
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
struct LoadingBootstrap_OnEndOfFrame_d_34__StaticFields {
};
struct LoadingBootstrap_OnEndOfFrame_d_34__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_OnEndOfFrame_d_34__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_OnEndOfFrame_d_34__VTable vtable;
};

struct __declspec(align(8)) LoadingBootstrap_c_DisplayClass37_0__Fields {
  enum PrewarmOperationSlot__Enum slot;
};
struct LoadingBootstrap_c_DisplayClass37_0 {
  struct LoadingBootstrap_c_DisplayClass37_0__Class *klass;
  struct MonitorData *monitor;
  struct LoadingBootstrap_c_DisplayClass37_0__Fields fields;
};
struct LoadingBootstrap_c_DisplayClass37_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoadingBootstrap_c_DisplayClass37_0__StaticFields {
};
struct LoadingBootstrap_c_DisplayClass37_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadingBootstrap_c_DisplayClass37_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadingBootstrap_c_DisplayClass37_0__VTable vtable;
};

struct LoadRemoveAction__Fields {
  struct ActionMethod__Fields _;
};
struct LoadRemoveAction {
  struct LoadRemoveAction__Class *klass;
  struct MonitorData *monitor;
  struct LoadRemoveAction__Fields fields;
};
struct LoadRemoveAction__VTable {
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
struct LoadRemoveAction__StaticFields {
};
struct LoadRemoveAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadRemoveAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadRemoveAction__VTable vtable;
};

struct CanBackOutCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanBackOutCondition {
  struct CanBackOutCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanBackOutCondition__Fields fields;
};
struct CanBackOutCondition__VTable {
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
struct CanBackOutCondition__StaticFields {
};
struct CanBackOutCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanBackOutCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanBackOutCondition__VTable vtable;
};

struct CanRestartLoremasterReplayCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanRestartLoremasterReplayCondition {
  struct CanRestartLoremasterReplayCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanRestartLoremasterReplayCondition__Fields fields;
};
struct CanRestartLoremasterReplayCondition__VTable {
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
struct CanRestartLoremasterReplayCondition__StaticFields {
};
struct CanRestartLoremasterReplayCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanRestartLoremasterReplayCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanRestartLoremasterReplayCondition__VTable vtable;
};

struct CanSkipCutsceneCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanSkipCutsceneCondition {
  struct CanSkipCutsceneCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanSkipCutsceneCondition__Fields fields;
};
struct CanSkipCutsceneCondition__VTable {
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
struct CanSkipCutsceneCondition__StaticFields {
};
struct CanSkipCutsceneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanSkipCutsceneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanSkipCutsceneCondition__VTable vtable;
};

struct CanUseBackupsCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanUseBackupsCondition {
  struct CanUseBackupsCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanUseBackupsCondition__Fields fields;
};
struct CanUseBackupsCondition__VTable {
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
struct CanUseBackupsCondition__StaticFields {
};
struct CanUseBackupsCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanUseBackupsCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanUseBackupsCondition__VTable vtable;
};

struct ClearScenesLoadedForCheckpointAction__Fields {
  struct ActionMethod__Fields _;
};
struct ClearScenesLoadedForCheckpointAction {
  struct ClearScenesLoadedForCheckpointAction__Class *klass;
  struct MonitorData *monitor;
  struct ClearScenesLoadedForCheckpointAction__Fields fields;
};
struct ClearScenesLoadedForCheckpointAction__VTable {
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
struct ClearScenesLoadedForCheckpointAction__StaticFields {
};
struct ClearScenesLoadedForCheckpointAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClearScenesLoadedForCheckpointAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClearScenesLoadedForCheckpointAction__VTable vtable;
};

struct ClearSkipCutsceneAction__Fields {
  struct ActionMethod__Fields _;
};
struct ClearSkipCutsceneAction {
  struct ClearSkipCutsceneAction__Class *klass;
  struct MonitorData *monitor;
  struct ClearSkipCutsceneAction__Fields fields;
};
struct ClearSkipCutsceneAction__VTable {
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
struct ClearSkipCutsceneAction__StaticFields {
};
struct ClearSkipCutsceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClearSkipCutsceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClearSkipCutsceneAction__VTable vtable;
};

struct InLoremasterReplayCondition__Fields {
  struct Condition_1__Fields _;
};
struct InLoremasterReplayCondition {
  struct InLoremasterReplayCondition__Class *klass;
  struct MonitorData *monitor;
  struct InLoremasterReplayCondition__Fields fields;
};
struct InLoremasterReplayCondition__VTable {
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
struct InLoremasterReplayCondition__StaticFields {
};
struct InLoremasterReplayCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InLoremasterReplayCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InLoremasterReplayCondition__VTable vtable;
};

struct RegisterSkipCutsceneAction__Fields {
  struct ActionMethod__Fields _;
  struct MasterTimelineSequence * MasterTimelineSequence;
};
struct RegisterSkipCutsceneAction {
  struct RegisterSkipCutsceneAction__Class *klass;
  struct MonitorData *monitor;
  struct RegisterSkipCutsceneAction__Fields fields;
};
struct RegisterSkipCutsceneAction__VTable {
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
struct RegisterSkipCutsceneAction__StaticFields {
};
struct RegisterSkipCutsceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegisterSkipCutsceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegisterSkipCutsceneAction__VTable vtable;
};

struct TimelineSequenceLabel__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTimelineSequence * m_timelineSequence;
};
struct TimelineSequenceLabel {
  struct TimelineSequenceLabel__Class *klass;
  struct MonitorData *monitor;
  struct TimelineSequenceLabel__Fields fields;
};
struct __declspec(align(8)) List_1_TimelineSequenceLabel___Fields {
  struct TimelineSequenceLabel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TimelineSequenceLabel_ {
  struct List_1_TimelineSequenceLabel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TimelineSequenceLabel___Fields fields;
};
struct TimelineSequenceLabel__Array {
  struct TimelineSequenceLabel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimelineSequenceLabel * vector[32];
};
struct IEnumerator_1_TimelineSequenceLabel_ {
  struct IEnumerator_1_TimelineSequenceLabel___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_TimelineSequenceLabel___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_TimelineSequenceLabel___StaticFields {
};
struct IEnumerator_1_TimelineSequenceLabel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_TimelineSequenceLabel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_TimelineSequenceLabel___VTable vtable;
};
struct List_1_TimelineSequenceLabel___VTable {
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
struct List_1_TimelineSequenceLabel___StaticFields {
  struct TimelineSequenceLabel__Array * _emptyArray;
};
struct List_1_TimelineSequenceLabel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_TimelineSequenceLabel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_TimelineSequenceLabel___VTable vtable;
};
struct TimelineSequenceLabel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimelineSequenceLabel__StaticFields {
  struct List_1_TimelineSequenceLabel_ * All;
};
struct TimelineSequenceLabel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineSequenceLabel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineSequenceLabel__VTable vtable;
};

struct MaterialVFXManager__Fields {
  struct MonoBehaviour__Fields _;
  struct MaterialBasedSeinEffectsMap * EffectsMap;
  struct PhysicsEffectsMap * PhysicsMap;
};
struct MaterialVFXManager {
  struct MaterialVFXManager__Class *klass;
  struct MonitorData *monitor;
  struct MaterialVFXManager__Fields fields;
};
struct MaterialVFXManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MaterialVFXManager__StaticFields {
  struct MaterialVFXManager * Instance;
};
struct MaterialVFXManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaterialVFXManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaterialVFXManager__VTable vtable;
};

enum ButtonPressedCondition_ButtonStates__Enum : int32_t {
  ButtonPressedCondition_ButtonStates__Enum_Pressed = 0,
  ButtonPressedCondition_ButtonStates__Enum_Released = 1,
  ButtonPressedCondition_ButtonStates__Enum_OnPressed = 2,
  ButtonPressedCondition_ButtonStates__Enum_OnReleased = 3,
};
struct ButtonPressedCondition_ButtonStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ButtonPressedCondition_ButtonStates__Enum value;
};
struct ButtonPressedCondition__Fields {
  struct Condition_1__Fields _;
  enum Input_Button__Enum Button;
  enum ButtonPressedCondition_ButtonStates__Enum State;
  bool IgnoreInputLock;
  bool IgnoreWhenMenusAreOpened;
};
struct ButtonPressedCondition {
  struct ButtonPressedCondition__Class *klass;
  struct MonitorData *monitor;
  struct ButtonPressedCondition__Fields fields;
};
struct ButtonPressedCondition__VTable {
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
struct ButtonPressedCondition__StaticFields {
};
struct ButtonPressedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ButtonPressedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ButtonPressedCondition__VTable vtable;
};

enum CommandPressedCondition_ButtonStates__Enum : int32_t {
  CommandPressedCondition_ButtonStates__Enum_Pressed = 0,
  CommandPressedCondition_ButtonStates__Enum_Released = 1,
  CommandPressedCondition_ButtonStates__Enum_OnPressed = 2,
  CommandPressedCondition_ButtonStates__Enum_OnReleased = 3,
};
struct CommandPressedCondition_ButtonStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CommandPressedCondition_ButtonStates__Enum value;
};
struct CommandPressedCondition__Fields {
  struct Condition_1__Fields _;
  enum Input_Command__Enum Command;
  enum CommandPressedCondition_ButtonStates__Enum State;
  bool IgnoreInputLock;
};
struct CommandPressedCondition {
  struct CommandPressedCondition__Class *klass;
  struct MonitorData *monitor;
  struct CommandPressedCondition__Fields fields;
};
struct CommandPressedCondition__VTable {
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
struct CommandPressedCondition__StaticFields {
};
struct CommandPressedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CommandPressedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CommandPressedCondition__VTable vtable;
};

struct MessageBoxMessageScreen__Fields {
  struct Suspendable__Fields _;
  struct AnimationCurve * ScaleIn;
  struct AnimationCurve * OpacityIn;
  struct AnimationCurve * ScaleOut;
  struct AnimationCurve * OpacityOut;
  float TransitionInDuration;
  float TransitionOutDuration;
  float WaitDuration;
  float m_time;
  float m_timeSpeed;
  float m_delayTime;
  bool m_fadingOut;
  struct Vector3 m_originalScale;
  struct Renderer * m_renderer;
  struct GUITexture * m_guiTexture;
  bool _IsSuspended_k__BackingField;
};
struct MessageBoxMessageScreen {
  struct MessageBoxMessageScreen__Class *klass;
  struct MonitorData *monitor;
  struct MessageBoxMessageScreen__Fields fields;
};
struct MessageBoxMessageScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct MessageBoxMessageScreen__StaticFields {
};
struct MessageBoxMessageScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MessageBoxMessageScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MessageBoxMessageScreen__VTable vtable;
};

struct PlayerDistanceCondition__Fields {
  struct Condition_1__Fields _;
  float Distance;
};
struct PlayerDistanceCondition {
  struct PlayerDistanceCondition__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDistanceCondition__Fields fields;
};
struct PlayerDistanceCondition__VTable {
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
struct PlayerDistanceCondition__StaticFields {
};
struct PlayerDistanceCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDistanceCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDistanceCondition__VTable vtable;
};

enum Button__Enum : int32_t {
  Button__Enum_GamepadButtonA = 0,
  Button__Enum_GamepadButtonB = 1,
  Button__Enum_GamepadButtonX = 2,
  Button__Enum_GamepadButtonY = 3,
  Button__Enum_GamepadButtonLeftShoulder = 4,
  Button__Enum_GamepadButtonRightShoulder = 5,
  Button__Enum_GamepadButtonView = 6,
  Button__Enum_GamepadButtonMenu = 7,
  Button__Enum_GamepadButtonLeftThumbstick = 8,
  Button__Enum_GamepadButtonRightThumbstick = 9,
  Button__Enum_GamepadButtonDPadUp = 10,
  Button__Enum_GamepadButtonDPadDown = 11,
  Button__Enum_GamepadButtonDPadLeft = 12,
  Button__Enum_GamepadButtonDPadRight = 13,
  Button__Enum_LeftTrigger = 14,
  Button__Enum_RightTrigger = 15,
};
struct Button__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Button__Enum value;
};

enum XboxOneController_Button__Enum : int32_t {
  XboxOneController_Button__Enum_GamepadButtonA = 330,
  XboxOneController_Button__Enum_GamepadButtonB = 331,
  XboxOneController_Button__Enum_GamepadButtonX = 332,
  XboxOneController_Button__Enum_GamepadButtonY = 333,
  XboxOneController_Button__Enum_GamepadButtonLeftShoulder = 334,
  XboxOneController_Button__Enum_GamepadButtonRightShoulder = 335,
  XboxOneController_Button__Enum_GamepadButtonView = 336,
  XboxOneController_Button__Enum_GamepadButtonMenu = 337,
  XboxOneController_Button__Enum_GamepadButtonLeftThumbstick = 338,
  XboxOneController_Button__Enum_GamepadButtonRightThumbstick = 339,
  XboxOneController_Button__Enum_GamepadButtonDPadUp = 342,
  XboxOneController_Button__Enum_GamepadButtonDPadDown = 343,
  XboxOneController_Button__Enum_GamepadButtonDPadLeft = 344,
  XboxOneController_Button__Enum_GamepadButtonDPadRight = 345,
  XboxOneController_Button__Enum_Gamepad1ButtonA = 350,
  XboxOneController_Button__Enum_Gamepad1ButtonB = 351,
  XboxOneController_Button__Enum_Gamepad1ButtonX = 352,
  XboxOneController_Button__Enum_Gamepad1ButtonY = 353,
  XboxOneController_Button__Enum_Gamepad1ButtonLeftShoulder = 354,
  XboxOneController_Button__Enum_Gamepad1ButtonRightShoulder = 355,
  XboxOneController_Button__Enum_Gamepad1ButtonView = 356,
  XboxOneController_Button__Enum_Gamepad1ButtonMenu = 357,
  XboxOneController_Button__Enum_Gamepad1ButtonLeftThumbstick = 358,
  XboxOneController_Button__Enum_Gamepad1ButtonRightThumbstick = 359,
  XboxOneController_Button__Enum_Gamepad1ButtonDPadUp = 362,
  XboxOneController_Button__Enum_Gamepad1ButtonDPadDown = 363,
  XboxOneController_Button__Enum_Gamepad1ButtonDPadLeft = 364,
  XboxOneController_Button__Enum_Gamepad1ButtonDPadRight = 365,
  XboxOneController_Button__Enum_Gamepad2ButtonA = 370,
  XboxOneController_Button__Enum_Gamepad2ButtonB = 371,
  XboxOneController_Button__Enum_Gamepad2ButtonX = 372,
  XboxOneController_Button__Enum_Gamepad2ButtonY = 373,
  XboxOneController_Button__Enum_Gamepad2ButtonLeftShoulder = 374,
  XboxOneController_Button__Enum_Gamepad2ButtonRightShoulder = 375,
  XboxOneController_Button__Enum_Gamepad2ButtonView = 376,
  XboxOneController_Button__Enum_Gamepad2ButtonMenu = 377,
  XboxOneController_Button__Enum_Gamepad2ButtonLeftThumbstick = 378,
  XboxOneController_Button__Enum_Gamepad2ButtonRightThumbstick = 379,
  XboxOneController_Button__Enum_Gamepad2ButtonDPadUp = 382,
  XboxOneController_Button__Enum_Gamepad2ButtonDPadDown = 383,
  XboxOneController_Button__Enum_Gamepad2ButtonDPadLeft = 384,
  XboxOneController_Button__Enum_Gamepad2ButtonDPadRight = 385,
  XboxOneController_Button__Enum_Gamepad3ButtonA = 390,
  XboxOneController_Button__Enum_Gamepad3ButtonB = 391,
  XboxOneController_Button__Enum_Gamepad3ButtonX = 392,
  XboxOneController_Button__Enum_Gamepad3ButtonY = 393,
  XboxOneController_Button__Enum_Gamepad3ButtonLeftShoulder = 394,
  XboxOneController_Button__Enum_Gamepad3ButtonRightShoulder = 395,
  XboxOneController_Button__Enum_Gamepad3ButtonView = 396,
  XboxOneController_Button__Enum_Gamepad3ButtonMenu = 397,
  XboxOneController_Button__Enum_Gamepad3ButtonLeftThumbstick = 398,
  XboxOneController_Button__Enum_Gamepad3ButtonRightThumbstick = 399,
  XboxOneController_Button__Enum_Gamepad3ButtonDPadUp = 402,
  XboxOneController_Button__Enum_Gamepad3ButtonDPadDown = 403,
  XboxOneController_Button__Enum_Gamepad3ButtonDPadLeft = 404,
  XboxOneController_Button__Enum_Gamepad3ButtonDPadRight = 405,
  XboxOneController_Button__Enum_Gamepad4ButtonA = 410,
  XboxOneController_Button__Enum_Gamepad4ButtonB = 411,
  XboxOneController_Button__Enum_Gamepad4ButtonX = 412,
  XboxOneController_Button__Enum_Gamepad4ButtonY = 413,
  XboxOneController_Button__Enum_Gamepad4ButtonLeftShoulder = 414,
  XboxOneController_Button__Enum_Gamepad4ButtonRightShoulder = 415,
  XboxOneController_Button__Enum_Gamepad4ButtonView = 416,
  XboxOneController_Button__Enum_Gamepad4ButtonMenu = 417,
  XboxOneController_Button__Enum_Gamepad4ButtonLeftThumbstick = 418,
  XboxOneController_Button__Enum_Gamepad4ButtonRightThumbstick = 419,
  XboxOneController_Button__Enum_Gamepad4ButtonDPadUp = 422,
  XboxOneController_Button__Enum_Gamepad4ButtonDPadDown = 423,
  XboxOneController_Button__Enum_Gamepad4ButtonDPadLeft = 424,
  XboxOneController_Button__Enum_Gamepad4ButtonDPadRight = 425,
  XboxOneController_Button__Enum_Gamepad5ButtonA = 430,
  XboxOneController_Button__Enum_Gamepad5ButtonB = 431,
  XboxOneController_Button__Enum_Gamepad5ButtonX = 432,
  XboxOneController_Button__Enum_Gamepad5ButtonY = 433,
  XboxOneController_Button__Enum_Gamepad5ButtonLeftShoulder = 434,
  XboxOneController_Button__Enum_Gamepad5ButtonRightShoulder = 435,
  XboxOneController_Button__Enum_Gamepad5ButtonView = 436,
  XboxOneController_Button__Enum_Gamepad5ButtonMenu = 437,
  XboxOneController_Button__Enum_Gamepad5ButtonLeftThumbstick = 438,
  XboxOneController_Button__Enum_Gamepad5ButtonRightThumbstick = 439,
  XboxOneController_Button__Enum_Gamepad5ButtonDPadUp = 442,
  XboxOneController_Button__Enum_Gamepad5ButtonDPadDown = 443,
  XboxOneController_Button__Enum_Gamepad5ButtonDPadLeft = 444,
  XboxOneController_Button__Enum_Gamepad5ButtonDPadRight = 445,
  XboxOneController_Button__Enum_Gamepad6ButtonA = 450,
  XboxOneController_Button__Enum_Gamepad6ButtonB = 451,
  XboxOneController_Button__Enum_Gamepad6ButtonX = 452,
  XboxOneController_Button__Enum_Gamepad6ButtonY = 453,
  XboxOneController_Button__Enum_Gamepad6ButtonLeftShoulder = 454,
  XboxOneController_Button__Enum_Gamepad6ButtonRightShoulder = 455,
  XboxOneController_Button__Enum_Gamepad6ButtonView = 456,
  XboxOneController_Button__Enum_Gamepad6ButtonMenu = 457,
  XboxOneController_Button__Enum_Gamepad6ButtonLeftThumbstick = 458,
  XboxOneController_Button__Enum_Gamepad6ButtonRightThumbstick = 459,
  XboxOneController_Button__Enum_Gamepad6ButtonDPadUp = 462,
  XboxOneController_Button__Enum_Gamepad6ButtonDPadDown = 463,
  XboxOneController_Button__Enum_Gamepad6ButtonDPadLeft = 464,
  XboxOneController_Button__Enum_Gamepad6ButtonDPadRight = 465,
  XboxOneController_Button__Enum_Gamepad7ButtonA = 470,
  XboxOneController_Button__Enum_Gamepad7ButtonB = 471,
  XboxOneController_Button__Enum_Gamepad7ButtonX = 472,
  XboxOneController_Button__Enum_Gamepad7ButtonY = 473,
  XboxOneController_Button__Enum_Gamepad7ButtonLeftShoulder = 474,
  XboxOneController_Button__Enum_Gamepad7ButtonRightShoulder = 475,
  XboxOneController_Button__Enum_Gamepad7ButtonView = 476,
  XboxOneController_Button__Enum_Gamepad7ButtonMenu = 477,
  XboxOneController_Button__Enum_Gamepad7ButtonLeftThumbstick = 478,
  XboxOneController_Button__Enum_Gamepad7ButtonRightThumbstick = 479,
  XboxOneController_Button__Enum_Gamepad7ButtonDPadUp = 482,
  XboxOneController_Button__Enum_Gamepad7ButtonDPadDown = 483,
  XboxOneController_Button__Enum_Gamepad7ButtonDPadLeft = 484,
  XboxOneController_Button__Enum_Gamepad7ButtonDPadRight = 485,
  XboxOneController_Button__Enum_Gamepad8ButtonA = 490,
  XboxOneController_Button__Enum_Gamepad8ButtonB = 491,
  XboxOneController_Button__Enum_Gamepad8ButtonX = 492,
  XboxOneController_Button__Enum_Gamepad8ButtonY = 493,
  XboxOneController_Button__Enum_Gamepad8ButtonLeftShoulder = 494,
  XboxOneController_Button__Enum_Gamepad8ButtonRightShoulder = 495,
  XboxOneController_Button__Enum_Gamepad8ButtonView = 496,
  XboxOneController_Button__Enum_Gamepad8ButtonMenu = 497,
  XboxOneController_Button__Enum_Gamepad8ButtonLeftThumbstick = 498,
  XboxOneController_Button__Enum_Gamepad8ButtonRightThumbstick = 499,
  XboxOneController_Button__Enum_Gamepad8ButtonDPadUp = 502,
  XboxOneController_Button__Enum_Gamepad8ButtonDPadDown = 503,
  XboxOneController_Button__Enum_Gamepad8ButtonDPadLeft = 504,
  XboxOneController_Button__Enum_Gamepad8ButtonDPadRight = 505,
};}