namespace app {
struct MoonRenderPipelineView_SrpProfilerFrame__Boxed {
  struct MoonRenderPipelineView_SrpProfilerFrame__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_SrpProfilerFrame fields;
};
struct MoonProfilerFrame {
  float cpuTime;
  float gpuTime;
  float frameTime;
  struct MoonProfilerSample fixedUpdate;
  struct MoonProfilerSample update;
  struct MoonProfilerSample lateUpdate;
  struct MoonProfilerSample coroutines;
  struct MoonProfilerSample physicsFixedUpdate;
  float gameplayTime;
  struct MoonRenderPipelineView_SrpProfilerFrame srp;
};
struct MoonProfilerFrame__Boxed {
  struct MoonProfilerFrame__Class *klass;
  struct MonitorData *monitor;
  struct MoonProfilerFrame fields;
};
struct __declspec(align(8)) FPSSampleData__Fields {
  struct String * SampleID;
  int32_t AverageFPS;
  int32_t MinimumFPS;
  float AverageFrameTime;
  float MinFrameTime;
  int32_t CPUAverageFPS;
  int32_t CPUMinimumFPS;
  int32_t CPUBAverageFPS;
  int32_t CPUBMinimumFPS;
  float CPUBAverageFrameTime;
  float CPUBMinFrameTime;
  float TotalMemory;
  float TextureMemory;
  float AudioMemory;
  struct Vector3 SamplePosition;
  struct MoonProfilerFrame FrameData;
  int32_t DangerFrames;
  int32_t DroppedFrames_Single;
  int32_t DroppedFrames_Double;
  int32_t DroppedFrames_Triple;
  int32_t DroppedFrames_Multiple;
  struct MicroProfiler_SampleStats * MicroProfilerStats;
  int32_t ExceptionsCount;
  struct String * ExceptionMessages;
  int32_t HitchCount;
  int32_t SlowdownCount;
  int32_t Health;
};
struct FPSSampleData {
  struct FPSSampleData__Class *klass;
  struct MonitorData *monitor;
  struct FPSSampleData__Fields fields;
};
struct FPSSampleData__Array {
  struct FPSSampleData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FPSSampleData * vector[32];
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice {
  struct MoonRenderPipelineView_SrpProfilerSample draw;
  float blurAmount;
  float downsampling;
  struct Int2 rtSize;
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Boxed {
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice fields;
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array {
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice vector[32];
};
struct IEnumerator_1_FPSSampleData_ {
  struct IEnumerator_1_FPSSampleData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_FPSTestResult___Fields {
  struct FPSTestResult__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FPSTestResult_ {
  struct List_1_FPSTestResult___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FPSTestResult___Fields fields;
};
struct FPSTestResult__Array {
  struct FPSTestResult__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FPSTestResult * vector[32];
};
struct IEnumerator_1_FPSTestResult_ {
  struct IEnumerator_1_FPSTestResult___Class *klass;
  struct MonitorData *monitor;
};
struct DroppedFrameMonitor_TempData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DroppedFrameMonitor_TempData__StaticFields {
};
struct DroppedFrameMonitor_TempData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DroppedFrameMonitor_TempData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DroppedFrameMonitor_TempData__VTable vtable;
};
struct IEnumerator_1_DroppedFrameMonitor_TempData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DroppedFrameMonitor_TempData___StaticFields {
};
struct IEnumerator_1_DroppedFrameMonitor_TempData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DroppedFrameMonitor_TempData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DroppedFrameMonitor_TempData___VTable vtable;
};
struct List_1_DroppedFrameMonitor_TempData___VTable {
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
struct List_1_DroppedFrameMonitor_TempData___StaticFields {
  struct DroppedFrameMonitor_TempData__Array * _emptyArray;
};
struct List_1_DroppedFrameMonitor_TempData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DroppedFrameMonitor_TempData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DroppedFrameMonitor_TempData___VTable vtable;
};
struct DroppedFrameMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DroppedFrameMonitor__StaticFields {
  bool DEBUG_ENABLED;
};
struct DroppedFrameMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DroppedFrameMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DroppedFrameMonitor__VTable vtable;
};
struct FPSMonitor_FrameTimingData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSMonitor_FrameTimingData__StaticFields {
};
struct FPSMonitor_FrameTimingData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSMonitor_FrameTimingData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSMonitor_FrameTimingData__VTable vtable;
};
struct FPSMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSMonitor__StaticFields {
  struct FPSMonitor * Instance;
  struct Color m_terribleColor;
  struct Color m_badColor;
  struct Color m_goodColor;
  struct Color m_mediumStartColor;
  struct Color m_mediumEndColor;
  int32_t m_terribleHealthMax;
  int32_t m_badHealthMax;
  int32_t m_mediumHealthMax;
  int32_t m_perfectDRSMin;
  int32_t m_mediumDRSMin;
  int32_t m_badDRSMin;
  int32_t m_terribleDRSMin;
  float m_terribleGPUTimeMin;
  float m_terribleGPUTimeMax;
};
struct FPSMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSMonitor__VTable vtable;
};
struct MoonProfilerSample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonProfilerSample__StaticFields {
};
struct MoonProfilerSample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonProfilerSample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonProfilerSample__VTable vtable;
};
struct MoonRenderPipelineView_SrpProfilerSample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineView_SrpProfilerSample__StaticFields {
};
struct MoonRenderPipelineView_SrpProfilerSample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineView_SrpProfilerSample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineView_SrpProfilerSample__VTable vtable;
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__StaticFields {
};
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice__VTable vtable;
};
struct MoonRenderPipelineView_SrpProfilerFrame__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineView_SrpProfilerFrame__StaticFields {
};
struct MoonRenderPipelineView_SrpProfilerFrame__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineView_SrpProfilerFrame__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineView_SrpProfilerFrame__VTable vtable;
};
struct MoonProfilerFrame__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonProfilerFrame__StaticFields {
};
struct MoonProfilerFrame__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonProfilerFrame__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonProfilerFrame__VTable vtable;
};
struct FPSSampleData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSSampleData__StaticFields {
};
struct FPSSampleData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSSampleData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSSampleData__VTable vtable;
};
struct IEnumerator_1_FPSSampleData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FPSSampleData___StaticFields {
};
struct IEnumerator_1_FPSSampleData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FPSSampleData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FPSSampleData___VTable vtable;
};
struct List_1_FPSSampleData___VTable {
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
struct List_1_FPSSampleData___StaticFields {
  struct FPSSampleData__Array * _emptyArray;
};
struct List_1_FPSSampleData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FPSSampleData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FPSSampleData___VTable vtable;
};
struct FPSTestResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSTestResult__StaticFields {
};
struct FPSTestResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSTestResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSTestResult__VTable vtable;
};
struct IEnumerator_1_FPSTestResult___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FPSTestResult___StaticFields {
};
struct IEnumerator_1_FPSTestResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FPSTestResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FPSTestResult___VTable vtable;
};
struct List_1_FPSTestResult___VTable {
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
struct List_1_FPSTestResult___StaticFields {
  struct FPSTestResult__Array * _emptyArray;
};
struct List_1_FPSTestResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FPSTestResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FPSTestResult___VTable vtable;
};
struct PerformanceMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PerformanceMonitor__StaticFields {
  struct PerformanceMonitor * Instance;
  bool DebugMode;
  struct Action * OnGoodPerformance;
  struct Action * OnNotMonitoringPerformance;
  bool Enabled;
};
struct PerformanceMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformanceMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformanceMonitor__VTable vtable;
};

struct PerformanceMonitor_c {
  struct PerformanceMonitor_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_SceneManagerScene_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_SceneManagerScene_Boolean_ {
  struct Func_2_SceneManagerScene_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_SceneManagerScene_Boolean___Fields fields;
};
struct Func_2_SceneManagerScene_Boolean___VTable {
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
struct Func_2_SceneManagerScene_Boolean___StaticFields {
};
struct Func_2_SceneManagerScene_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_SceneManagerScene_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_SceneManagerScene_Boolean___VTable vtable;
};
struct PerformanceMonitor_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PerformanceMonitor_c__StaticFields {
  struct PerformanceMonitor_c * __9;
  struct Func_2_SceneManagerScene_Boolean_ * __9__14_0;
};
struct PerformanceMonitor_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformanceMonitor_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformanceMonitor_c__VTable vtable;
};

enum PerformanceTestManager_State__Enum : int32_t {
  PerformanceTestManager_State__Enum_Start = 0,
  PerformanceTestManager_State__Enum_RegularTest = 1,
  PerformanceTestManager_State__Enum_QuadScale = 2,
  PerformanceTestManager_State__Enum_NoCamera = 3,
  PerformanceTestManager_State__Enum_FinishedTest = 4,
  PerformanceTestManager_State__Enum_Done = 5,
};
struct PerformanceTestManager_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PerformanceTestManager_State__Enum value;
};
struct PerformanceTestManager__Fields {
  struct MonoBehaviour__Fields _;
  struct FPSTestOutput * m_fpsTestOutput;
  float m_stateCurrentTime;
  enum PerformanceTestManager_State__Enum CurrentState;
};
struct PerformanceTestManager {
  struct PerformanceTestManager__Class *klass;
  struct MonitorData *monitor;
  struct PerformanceTestManager__Fields fields;
};
struct __declspec(align(8)) FPSTestOutput__Fields {
  struct StreamWriter * m_streamWriter;
  struct String * m_outputFolder;
};
struct FPSTestOutput {
  struct FPSTestOutput__Class *klass;
  struct MonitorData *monitor;
  struct FPSTestOutput__Fields fields;
};
enum FPSTestFields_Scope__Enum : int32_t {
  FPSTestFields_Scope__Enum_OriDE = 1,
  FPSTestFields_Scope__Enum_Wisps = 2,
  FPSTestFields_Scope__Enum_All = 3,
};
struct FPSTestFields_Scope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FPSTestFields_Scope__Enum value;
};
struct FPSTestOutput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSTestOutput__StaticFields {
  struct String * FILE_END_STRING;
};
struct FPSTestOutput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSTestOutput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSTestOutput__VTable vtable;
};
struct PerformanceTestManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PerformanceTestManager__StaticFields {
  struct PerformanceTestManager * Instance;
  bool DebugMode;
};
struct PerformanceTestManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformanceTestManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformanceTestManager__VTable vtable;
};

struct SceneFrameworkPerformanceMonitor__Fields {
  struct MonoBehaviour__Fields _;
  struct StreamWriter * m_streamWriter;
  struct List_1_System_String_ * m_lines;
};
struct SceneFrameworkPerformanceMonitor {
  struct SceneFrameworkPerformanceMonitor__Class *klass;
  struct MonitorData *monitor;
  struct SceneFrameworkPerformanceMonitor__Fields fields;
};
struct SceneFrameworkPerformanceMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneFrameworkPerformanceMonitor__StaticFields {
  struct SceneFrameworkPerformanceMonitor * m_instance;
};
struct SceneFrameworkPerformanceMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneFrameworkPerformanceMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneFrameworkPerformanceMonitor__VTable vtable;
};

struct __declspec(align(8)) Test__Fields {
  struct String * TestFilePath;
};
struct Test {
  struct Test__Class *klass;
  struct MonitorData *monitor;
  struct Test__Fields fields;
};
struct Test__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Test__StaticFields {
};
struct Test__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Test__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Test__VTable vtable;
};

struct __declspec(align(8)) TestReporter__Fields {
  struct String * m_reportPath;
};
struct TestReporter {
  struct TestReporter__Class *klass;
  struct MonitorData *monitor;
  struct TestReporter__Fields fields;
};
struct TestReporter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestReporter__StaticFields {
};
struct TestReporter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestReporter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestReporter__VTable vtable;
};

struct __declspec(align(8)) TestSet__Fields {
  struct String * TestSetFolderPath;
  struct List_1_Test_ * Tests;
  struct TestSetConfiguration * TestSetConfiguration;
  struct String * OutputFolderPath;
  struct LogCallbackHandler * m_logCallbackHandler;
  int32_t m_testIndex;
};
struct TestSet {
  struct TestSet__Class *klass;
  struct MonitorData *monitor;
  struct TestSet__Fields fields;
};
struct __declspec(align(8)) List_1_Test___Fields {
  struct Test__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Test_ {
  struct List_1_Test___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Test___Fields fields;
};
struct Test__Array {
  struct Test__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Test * vector[32];
};
struct IEnumerator_1_Test_ {
  struct IEnumerator_1_Test___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TestSetConfiguration__Fields {
  struct String * FirstTestSetSceneName;
};
struct TestSetConfiguration {
  struct TestSetConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct TestSetConfiguration__Fields fields;
};
struct IEnumerator_1_Test___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Test___StaticFields {
};
struct IEnumerator_1_Test___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Test___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Test___VTable vtable;
};
struct List_1_Test___VTable {
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
struct List_1_Test___StaticFields {
  struct Test__Array * _emptyArray;
};
struct List_1_Test___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Test___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Test___VTable vtable;
};
struct TestSetConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestSetConfiguration__StaticFields {
};
struct TestSetConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestSetConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestSetConfiguration__VTable vtable;
};
struct TestSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestSet__StaticFields {
};
struct TestSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestSet__VTable vtable;
};

struct TestSet_c {
  struct TestSet_c__Class *klass;
  struct MonitorData *monitor;
};
struct TestSet_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestSet_c__StaticFields {
  struct TestSet_c * __9;
  struct Func_2_String_Boolean_ * __9__16_0;
};
struct TestSet_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestSet_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestSet_c__VTable vtable;
};

struct __declspec(align(8)) TestSet_c_DisplayClass17_0__Fields {
  struct Test * test;
};
struct TestSet_c_DisplayClass17_0 {
  struct TestSet_c_DisplayClass17_0__Class *klass;
  struct MonitorData *monitor;
  struct TestSet_c_DisplayClass17_0__Fields fields;
};
struct TestSet_c_DisplayClass17_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestSet_c_DisplayClass17_0__StaticFields {
};
struct TestSet_c_DisplayClass17_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestSet_c_DisplayClass17_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestSet_c_DisplayClass17_0__VTable vtable;
};

struct TestSetManager__Fields {
  struct MonoBehaviour__Fields _;
};
struct TestSetManager {
  struct TestSetManager__Class *klass;
  struct MonitorData *monitor;
  struct TestSetManager__Fields fields;
};
struct __declspec(align(8)) List_1_TestSet___Fields {
  struct TestSet__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TestSet_ {
  struct List_1_TestSet___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TestSet___Fields fields;
};
struct TestSet__Array {
  struct TestSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TestSet * vector[32];
};
struct IEnumerator_1_TestSet_ {
  struct IEnumerator_1_TestSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) JUnitReporter_TestSuite__Fields {
  struct String * m_id;
  struct String * m_name;
  struct TimeSpan m_timeSpan;
  struct List_1_JUnitReporter_TestCase_ * m_testCases;
  int32_t m_numberOfTestCasesWrittenToOutput;
};
struct JUnitReporter_TestSuite {
  struct JUnitReporter_TestSuite__Class *klass;
  struct MonitorData *monitor;
  struct JUnitReporter_TestSuite__Fields fields;
};
struct __declspec(align(8)) List_1_JUnitReporter_TestCase___Fields {
  struct JUnitReporter_TestCase__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_JUnitReporter_TestCase_ {
  struct List_1_JUnitReporter_TestCase___Class *klass;
  struct MonitorData *monitor;
  struct List_1_JUnitReporter_TestCase___Fields fields;
};
struct __declspec(align(8)) JUnitReporter_TestCase__Fields {
  struct String * m_id;
  struct String * m_name;
  struct List_1_JUnitReporter_Failure_ * m_failure;
  struct TimeSpan m_timeSpan;
};
struct JUnitReporter_TestCase {
  struct JUnitReporter_TestCase__Class *klass;
  struct MonitorData *monitor;
  struct JUnitReporter_TestCase__Fields fields;
};
struct JUnitReporter_TestCase__Array {
  struct JUnitReporter_TestCase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JUnitReporter_TestCase * vector[32];
};
struct __declspec(align(8)) List_1_JUnitReporter_Failure___Fields {
  struct JUnitReporter_Failure__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_JUnitReporter_Failure_ {
  struct List_1_JUnitReporter_Failure___Class *klass;
  struct MonitorData *monitor;
  struct List_1_JUnitReporter_Failure___Fields fields;
};
struct __declspec(align(8)) JUnitReporter_Failure__Fields {
  struct String * m_message;
  struct String * m_type;
  struct String * m_detailedMessage;
};
struct JUnitReporter_Failure {
  struct JUnitReporter_Failure__Class *klass;
  struct MonitorData *monitor;
  struct JUnitReporter_Failure__Fields fields;
};
struct JUnitReporter_Failure__Array {
  struct JUnitReporter_Failure__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JUnitReporter_Failure * vector[32];
};}