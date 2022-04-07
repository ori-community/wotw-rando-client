namespace app {

struct __declspec(align(8)) SwitchGpuFreqCaptureAgent__Fields {
  int32_t m_lastGpuFreq;
};
struct SwitchGpuFreqCaptureAgent {
  struct SwitchGpuFreqCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct SwitchGpuFreqCaptureAgent__Fields fields;
};
struct SwitchGpuFreqCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData_1;
  VirtualInvokeData GetDataHeaderNames;
};
struct SwitchGpuFreqCaptureAgent__StaticFields {
};
struct SwitchGpuFreqCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchGpuFreqCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchGpuFreqCaptureAgent__VTable vtable;
};

struct __declspec(align(8)) TimesliceBudgetCaptureAgent__Fields {
  struct String__Array * m_frameData;
  bool m_expensiveReportThisFrame;
  float m_budget;
  double m_usedTime;
  int32_t m_amountOfJobs;
  struct String * m_expensiveObjectReport;
};
struct TimesliceBudgetCaptureAgent {
  struct TimesliceBudgetCaptureAgent__Class *klass;
  struct MonitorData *monitor;
  struct TimesliceBudgetCaptureAgent__Fields fields;
};
struct TimesliceBudgetCaptureAgent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCaptureAgentValid;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnTestEnd;
  VirtualInvokeData GetFrameData;
  VirtualInvokeData GetDataHeaderNames;
};
struct TimesliceBudgetCaptureAgent__StaticFields {
};
struct TimesliceBudgetCaptureAgent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimesliceBudgetCaptureAgent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimesliceBudgetCaptureAgent__VTable vtable;
};

enum ExceptionsTest_State__Enum : int32_t {
  ExceptionsTest_State__Enum_Idle = 0,
  ExceptionsTest_State__Enum_StartLoadScene = 1,
  ExceptionsTest_State__Enum_SceneLoading = 2,
  ExceptionsTest_State__Enum_EndLoadScene = 3,
  ExceptionsTest_State__Enum_StartTest = 4,
  ExceptionsTest_State__Enum_Testing = 5,
  ExceptionsTest_State__Enum_EndTest = 6,
  ExceptionsTest_State__Enum_StartUnloadScene = 7,
  ExceptionsTest_State__Enum_UnloadingScene = 8,
  ExceptionsTest_State__Enum_EndUnloadScene = 9,
  ExceptionsTest_State__Enum_Done = 10,
};
struct ExceptionsTest_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExceptionsTest_State__Enum value;
};
struct ExceptionsTest__Fields {
  struct MonoBehaviour__Fields _;
  struct String * TestFolderName;
  enum ExceptionsTest_State__Enum CurrentState;
  float m_currentStateTime;
  int32_t CurrentSceneMetaDataIndex;
  float StartTestGraceTime;
  float TestDuration;
  struct String * EmptyTestSceneName;
  struct LogCallbackHandler * m_logCallbackHandler;
  struct String * m_workspace;
  struct JUnitReporter_TestSuite * m_testSuite;
  struct JUnitReporter_Failure * m_failure;
};
struct ExceptionsTest {
  struct ExceptionsTest__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionsTest__Fields fields;
};
struct ExceptionsTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExceptionsTest__StaticFields {
};
struct ExceptionsTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExceptionsTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExceptionsTest__VTable vtable;
};

struct ExceptionsTest_c {
  struct ExceptionsTest_c__Class *klass;
  struct MonitorData *monitor;
};
struct ExceptionsTest_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExceptionsTest_c__StaticFields {
  struct ExceptionsTest_c * __9;
  struct Func_1_Boolean_ * __9__15_0;
  struct Func_1_Boolean_ * __9__15_1;
  struct Func_1_Boolean_ * __9__15_2;
  struct Func_1_Boolean_ * __9__15_3;
};
struct ExceptionsTest_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExceptionsTest_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExceptionsTest_c__VTable vtable;
};

struct __declspec(align(8)) ExceptionsTest_StartExceptionsTest_d_15__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct GameObject * go;
};
struct ExceptionsTest_StartExceptionsTest_d_15 {
  struct ExceptionsTest_StartExceptionsTest_d_15__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionsTest_StartExceptionsTest_d_15__Fields fields;
};
struct ExceptionsTest_StartExceptionsTest_d_15__VTable {
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
struct ExceptionsTest_StartExceptionsTest_d_15__StaticFields {
};
struct ExceptionsTest_StartExceptionsTest_d_15__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExceptionsTest_StartExceptionsTest_d_15__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExceptionsTest_StartExceptionsTest_d_15__VTable vtable;
};

struct FPSSamplePositionMarker__Fields {
  struct MonoBehaviour__Fields _;
};
struct FPSSamplePositionMarker {
  struct FPSSamplePositionMarker__Class *klass;
  struct MonitorData *monitor;
  struct FPSSamplePositionMarker__Fields fields;
};
struct FPSSamplePositionMarker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSSamplePositionMarker__StaticFields {
};
struct FPSSamplePositionMarker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSSamplePositionMarker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSSamplePositionMarker__VTable vtable;
};

struct __declspec(align(8)) FpsTcTestOutput__Fields {
  struct List_1_System_String_ * m_writtenKeys;
  struct StreamWriter * m_stream;
};
struct FpsTcTestOutput {
  struct FpsTcTestOutput__Class *klass;
  struct MonitorData *monitor;
  struct FpsTcTestOutput__Fields fields;
};
struct FpsTcTestOutput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FpsTcTestOutput__StaticFields {
};
struct FpsTcTestOutput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FpsTcTestOutput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FpsTcTestOutput__VTable vtable;
};

enum FPSTestFields_Field__Enum : int32_t {
  FPSTestFields_Field__Enum_id = 0,
  FPSTestFields_Field__Enum_SceneName = 1,
  FPSTestFields_Field__Enum_SceneLoadTime = 2,
  FPSTestFields_Field__Enum_SceneUnloadTime = 3,
  FPSTestFields_Field__Enum_ActivationTime = 4,
  FPSTestFields_Field__Enum_DeactivationTime = 5,
  FPSTestFields_Field__Enum_Time = 6,
  FPSTestFields_Field__Enum_Total_Scenes = 7,
  FPSTestFields_Field__Enum_Loaded_Scenes = 8,
  FPSTestFields_Field__Enum_Min_FPS = 9,
  FPSTestFields_Field__Enum_Average_FPS = 10,
  FPSTestFields_Field__Enum_Min_FPS_No_Camera = 11,
  FPSTestFields_Field__Enum_Average_FPS_No_Camera = 12,
  FPSTestFields_Field__Enum_Min_FPS_quad0 = 13,
  FPSTestFields_Field__Enum_Average_FPS_quad0 = 14,
  FPSTestFields_Field__Enum_Total_Memory = 15,
  FPSTestFields_Field__Enum_Audio_Memory = 16,
  FPSTestFields_Field__Enum_Texture_Memory = 17,
  FPSTestFields_Field__Enum_SampleID = 18,
  FPSTestFields_Field__Enum_Disabled_Scenes = 19,
  FPSTestFields_Field__Enum_Disabling_Scenes = 20,
  FPSTestFields_Field__Enum_Loading_Scenes = 21,
  FPSTestFields_Field__Enum_Loading_Cancelled_Scenes = 22,
  FPSTestFields_Field__Enum_SamplePositionX = 23,
  FPSTestFields_Field__Enum_SamplePositionY = 24,
  FPSTestFields_Field__Enum_CPU_Time = 25,
  FPSTestFields_Field__Enum_GPU_Time = 26,
  FPSTestFields_Field__Enum_FixedUpdate_Time = 27,
  FPSTestFields_Field__Enum_FixedUpdate_Count = 28,
  FPSTestFields_Field__Enum_Update_Time = 29,
  FPSTestFields_Field__Enum_Update_Count = 30,
  FPSTestFields_Field__Enum_LateUpdate_Time = 31,
  FPSTestFields_Field__Enum_LateUpdate_Count = 32,
  FPSTestFields_Field__Enum_Coroutines_Time = 33,
  FPSTestFields_Field__Enum_Coroutines_Count = 34,
  FPSTestFields_Field__Enum_Physics_FixedUpdate_Time = 35,
  FPSTestFields_Field__Enum_Physics_FixedUpdate_Count = 36,
  FPSTestFields_Field__Enum_Total_Gameplay_Time = 37,
  FPSTestFields_Field__Enum_SRP_Total_User_Time = 38,
  FPSTestFields_Field__Enum_SRP_Total_Engine_Time = 39,
  FPSTestFields_Field__Enum_SRP_Total_Time = 40,
  FPSTestFields_Field__Enum_SRP_Posts_And_UI_Time = 41,
  FPSTestFields_Field__Enum_SRP_Cull_Time = 42,
  FPSTestFields_Field__Enum_SRP_Cull_Count = 43,
  FPSTestFields_Field__Enum_SRP_RT_User_Time = 44,
  FPSTestFields_Field__Enum_SRP_RT_Engine_Time = 45,
  FPSTestFields_Field__Enum_SRP_RT_Total_Time = 46,
  FPSTestFields_Field__Enum_SRP_Slices_User_Time = 47,
  FPSTestFields_Field__Enum_SRP_Slices_Engine_Time = 48,
  FPSTestFields_Field__Enum_SRP_Slices_Total_Time = 49,
  FPSTestFields_Field__Enum_SRP_Subtotal_User_Time = 50,
  FPSTestFields_Field__Enum_SRP_Subtotal_Engine_Time = 51,
  FPSTestFields_Field__Enum_SRP_SubTotal_Time = 52,
  FPSTestFields_Field__Enum_SRP_Post_and_UI_Time = 53,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Time = 54,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Count = 55,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Internal_Time = 56,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Internal_Count = 57,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Internal_GPU_Time = 58,
  FPSTestFields_Field__Enum_SRP_RT_Acquire_Internal_GPU_Count = 59,
  FPSTestFields_Field__Enum_SRP_RT_Release_Time = 60,
  FPSTestFields_Field__Enum_SRP_RT_Release_Count = 61,
  FPSTestFields_Field__Enum_SRP_RT_Release_Internal_Time = 62,
  FPSTestFields_Field__Enum_SRP_RT_Release_Internal_Count = 63,
  FPSTestFields_Field__Enum_SRP_RT_Release_Internal_GPU_Time = 64,
  FPSTestFields_Field__Enum_SRP_RT_Release_Internal_GPU_Count = 65,
  FPSTestFields_Field__Enum_Danger_Frames = 66,
  FPSTestFields_Field__Enum_Dropped_Frames_Single = 67,
  FPSTestFields_Field__Enum_Dropped_Frames_Double = 68,
  FPSTestFields_Field__Enum_Dropped_Frames_Triple = 69,
  FPSTestFields_Field__Enum_Dropped_Frames_Multiple = 70,
  FPSTestFields_Field__Enum_Exceptions = 71,
  FPSTestFields_Field__Enum_ExceptionMessages = 72,
  FPSTestFields_Field__Enum_Hitch_Count = 73,
  FPSTestFields_Field__Enum_Slowdown_Count = 74,
  FPSTestFields_Field__Enum_Health = 75,
};
struct FPSTestFields_Field__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FPSTestFields_Field__Enum value;
};

struct MainThreadSleepTester__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_renderString;
  struct GUIStyle * m_labelStyle;
};
struct MainThreadSleepTester {
  struct MainThreadSleepTester__Class *klass;
  struct MonitorData *monitor;
  struct MainThreadSleepTester__Fields fields;
};
struct MainThreadSleepTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MainThreadSleepTester__StaticFields {
  struct MainThreadSleepTester * Instance;
  int32_t SpleepMiliseconds;
  bool s_spleepEnabled;
};
struct MainThreadSleepTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MainThreadSleepTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MainThreadSleepTester__VTable vtable;
};

enum SceneFPSTest_State__Enum : int32_t {
  SceneFPSTest_State__Enum_Idle = 0,
  SceneFPSTest_State__Enum_StartLoadScene = 1,
  SceneFPSTest_State__Enum_SceneLoading = 2,
  SceneFPSTest_State__Enum_EndLoadScene = 3,
  SceneFPSTest_State__Enum_StartTakeSample = 4,
  SceneFPSTest_State__Enum_TakingSample = 5,
  SceneFPSTest_State__Enum_EndTakeSample = 6,
  SceneFPSTest_State__Enum_StartCPUSample = 7,
  SceneFPSTest_State__Enum_TakingCPUSample = 8,
  SceneFPSTest_State__Enum_EndCPUSample = 9,
  SceneFPSTest_State__Enum_StartCPUBSample = 10,
  SceneFPSTest_State__Enum_TakingCPUBSample = 11,
  SceneFPSTest_State__Enum_EndCPUBSample = 12,
  SceneFPSTest_State__Enum_TakeMemorySnapshot = 13,
  SceneFPSTest_State__Enum_StartUnloadScene = 14,
  SceneFPSTest_State__Enum_UnloadingScene = 15,
  SceneFPSTest_State__Enum_EndUnloadScene = 16,
  SceneFPSTest_State__Enum_Done = 17,
};
struct SceneFPSTest_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneFPSTest_State__Enum value;
};
struct SceneFPSTest__Fields {
  struct MonoBehaviour__Fields _;
  bool ShouldCreateScreenshot;
  bool ShouldCreateMemoryReport;
  bool ShouldRunSample;
  bool ShouldRunCPUSample;
  bool ShouldRunCPUBSample;
  bool ShouldSkipCutcenes;
  struct String * OutputFilePath;
  enum SceneFPSTest_State__Enum m_currentState;
  float m_currentStateTime;
  float m_currentStateTimeNoLoading;
  int32_t m_currentSampleIndex;
  struct DroppedFrameMonitor * m_droppedFrameMonitor;
  float m_sceneLoadingStartTime;
  float m_sceneUnladingStartTime;
  float m_sceneLoadingGraceTime;
  float m_sampleSwitchingGraceTime;
  float m_sampleDuration;
  float m_CPUSampleDuration;
  float m_CPUBSampleDuration;
  struct String * m_emptyTestSceneName;
  struct FpsTcTestOutput * m_fpsTcTestOutput;
  struct FPSTestOutput * m_fpsTestOutput;
  struct FPSTestResult * m_fpsTestResult;
  struct FPSSampleData * m_fpsSampleData;
  struct IProfilingDataProvider * m_dataProvider;
  int32_t m_startFrame;
  struct DateTime m_dateTime;
  struct String * m_workspace;
  struct LogCallbackHandler * m_logCallbackHandler;
  struct JUnitReporter_TestSuite * m_testSuite;
  struct JUnitReporter_Failure * m_failure;
  int32_t m_exceptionCount;
  bool m_shouldDisplayFinishedMesage;
  struct String * m_currentException;
  struct SceneFPSTest_TestEntry__Array * m_additionalTests;
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * m_additionalTestsBeginStateToIndx;
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * m_additionalTestsEndStateToIndx;
  struct Dictionary_2_System_Type_System_String_ * m_additionalTestsDataByType;
  struct List_1_RuntimeSceneMetaData_ * m_editorScenes;
  struct List_1_System_String_ * FPSTestData;
  bool m_memorySnapshotFinished;
  struct WorldEvents * m_mistyWoodsWorldEvents;
  int32_t m_oldScreenWidth;
  int32_t m_oldScreenHeight;
  struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_ * m_sceneSamplesCache;
  struct Texture2D * m_backgroundTexture;
};
struct SceneFPSTest {
  struct SceneFPSTest__Class *klass;
  struct MonitorData *monitor;
  struct SceneFPSTest__Fields fields;
};
struct __declspec(align(8)) SceneFPSTest_TestEntry__Fields {
  struct IMoonTest * Test;
  enum SceneFPSTest_State__Enum BeginState;
  enum SceneFPSTest_State__Enum EndState;
  bool Active;
};
struct SceneFPSTest_TestEntry {
  struct SceneFPSTest_TestEntry__Class *klass;
  struct MonitorData *monitor;
  struct SceneFPSTest_TestEntry__Fields fields;
};
struct SceneFPSTest_TestEntry__Array {
  struct SceneFPSTest_TestEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneFPSTest_TestEntry * vector[32];
};
struct IMoonTest {
  struct IMoonTest__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_SceneFPSTest_State_List_1_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SceneFPSTest_State_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ {
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  enum SceneFPSTest_State__Enum key;
  struct List_1_System_Int32_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32_ vector[32];
};
struct IEqualityComparer_1_SceneFPSTest_State_ {
  struct IEqualityComparer_1_SceneFPSTest_State___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___Fields {
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___Fields fields;
};
struct SceneFPSTest_State__Enum__Array {
  struct SceneFPSTest_State__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum SceneFPSTest_State__Enum vector[32];
};
struct IEnumerator_1_SceneFPSTest_State_ {
  struct IEnumerator_1_SceneFPSTest_State___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___Fields {
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___Fields fields;
};
struct ICollection_1_SceneFPSTest_State_ {
  struct ICollection_1_SceneFPSTest_State___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32_ {
  enum SceneFPSTest_State__Enum key;
  struct List_1_System_Int32_ * value;
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Boxed {
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32_ fields;
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Array {
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SceneFPSTest_State_ {
  struct IEnumerable_1_SceneFPSTest_State___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Type_System_String___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_System_String_ {
  struct Dictionary_2_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_System_String___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct String * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___Fields {
  struct Dictionary_2_System_Type_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String___Fields {
  struct Dictionary_2_System_Type_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String___Fields fields;
};
struct KeyValuePair_2_System_Type_System_String_ {
  struct Type * key;
  struct String * value;
};
struct KeyValuePair_2_System_Type_System_String___Boxed {
  struct KeyValuePair_2_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_System_String_ fields;
};
struct KeyValuePair_2_System_Type_System_String___Array {
  struct KeyValuePair_2_System_Type_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_System_String_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_String_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_List_1_UnityEngine_Vector3___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UnityEngine_Vector3_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UnityEngine_Vector3_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_ {
  struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct List_1_UnityEngine_Vector3_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_UnityEngine_Vector3_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UnityEngine_Vector3___Fields {
  struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UnityEngine_Vector3_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_UnityEngine_Vector3___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UnityEngine_Vector3___Fields {
  struct Dictionary_2_System_Int32_List_1_UnityEngine_Vector3_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UnityEngine_Vector3_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_UnityEngine_Vector3___Fields fields;
};
struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3_ {
  int32_t key;
  struct List_1_UnityEngine_Vector3_ * value;
};
struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3___Boxed {
  struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3_ fields;
};
struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3___Array {
  struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonTest__VTable {
  VirtualInvokeData get_TestName;
  VirtualInvokeData StartTest;
  VirtualInvokeData UpdateTest;
  VirtualInvokeData StopTest;
  VirtualInvokeData CollectData;
  VirtualInvokeData get_CSVHeader;
  VirtualInvokeData get_Tag;
};
struct IMoonTest__StaticFields {
};
struct IMoonTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonTest__VTable vtable;
};
struct SceneFPSTest_TestEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneFPSTest_TestEntry__StaticFields {
};
struct SceneFPSTest_TestEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneFPSTest_TestEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneFPSTest_TestEntry__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct IEqualityComparer_1_SceneFPSTest_State___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_SceneFPSTest_State___StaticFields {
};
struct IEqualityComparer_1_SceneFPSTest_State___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_SceneFPSTest_State___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_SceneFPSTest_State___VTable vtable;
};
struct IEnumerator_1_SceneFPSTest_State___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SceneFPSTest_State___StaticFields {
};
struct IEnumerator_1_SceneFPSTest_State___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SceneFPSTest_State___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SceneFPSTest_State___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct ICollection_1_SceneFPSTest_State___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_SceneFPSTest_State___StaticFields {
};
struct ICollection_1_SceneFPSTest_State___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_SceneFPSTest_State___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_SceneFPSTest_State___VTable vtable;
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct IEnumerable_1_SceneFPSTest_State___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SceneFPSTest_State___StaticFields {
};
struct IEnumerable_1_SceneFPSTest_State___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SceneFPSTest_State___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SceneFPSTest_State___VTable vtable;
};
struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___StaticFields {
};
struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_SceneFPSTest_State_List_1_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};}