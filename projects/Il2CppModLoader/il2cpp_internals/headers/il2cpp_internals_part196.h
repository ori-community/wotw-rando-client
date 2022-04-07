namespace app {
struct Metric__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Metric__Enum value;
};
struct __declspec(align(8)) FrameProfiler_MetricInfo__Fields {
  enum Metric__Enum Metric;
  struct String * ShortName;
  struct Color Color;
};
struct FrameProfiler_MetricInfo {
  struct FrameProfiler_MetricInfo__Class *klass;
  struct MonitorData *monitor;
  struct FrameProfiler_MetricInfo__Fields fields;
};
struct FrameProfiler_MetricInfo__Array {
  struct FrameProfiler_MetricInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FrameProfiler_MetricInfo * vector[32];
};
struct IEnumerator_1_FrameProfiler_MetricInfo_ {
  struct IEnumerator_1_FrameProfiler_MetricInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) FrameProfiler_FrameData__Fields {
  int64_t NsEnd;
  struct FrameProfiler_FrameSample__Array * Samples;
};
struct FrameProfiler_FrameData {
  struct FrameProfiler_FrameData__Class *klass;
  struct MonitorData *monitor;
  struct FrameProfiler_FrameData__Fields fields;
};
struct FrameProfiler_FrameData__Array {
  struct FrameProfiler_FrameData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FrameProfiler_FrameData * vector[32];
};
struct __declspec(align(8)) FrameProfiler_FrameSample__Fields {
  int64_t NsStart;
  int64_t NsEnd;
  struct FrameProfiler_MetricInfo * Metric;
};
struct FrameProfiler_FrameSample {
  struct FrameProfiler_FrameSample__Class *klass;
  struct MonitorData *monitor;
  struct FrameProfiler_FrameSample__Fields fields;
};
struct FrameProfiler_FrameSample__Array {
  struct FrameProfiler_FrameSample__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FrameProfiler_FrameSample * vector[32];
};
struct FrameProfiler_MetricInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameProfiler_MetricInfo__StaticFields {
};
struct FrameProfiler_MetricInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameProfiler_MetricInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameProfiler_MetricInfo__VTable vtable;
};
struct IEnumerator_1_FrameProfiler_MetricInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FrameProfiler_MetricInfo___StaticFields {
};
struct IEnumerator_1_FrameProfiler_MetricInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FrameProfiler_MetricInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FrameProfiler_MetricInfo___VTable vtable;
};
struct List_1_FrameProfiler_MetricInfo___VTable {
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
struct List_1_FrameProfiler_MetricInfo___StaticFields {
  struct FrameProfiler_MetricInfo__Array * _emptyArray;
};
struct List_1_FrameProfiler_MetricInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FrameProfiler_MetricInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FrameProfiler_MetricInfo___VTable vtable;
};
struct FrameProfiler_FrameSample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameProfiler_FrameSample__StaticFields {
};
struct FrameProfiler_FrameSample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameProfiler_FrameSample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameProfiler_FrameSample__VTable vtable;
};
struct FrameProfiler_FrameData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameProfiler_FrameData__StaticFields {
};
struct FrameProfiler_FrameData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameProfiler_FrameData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameProfiler_FrameData__VTable vtable;
};
struct FrameProfiler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameProfiler__StaticFields {
  struct List_1_FrameProfiler_MetricInfo_ * s_metrics;
  struct Int32__Array * s_metricIndices;
  int32_t MetricCount;
  int32_t HistoryLength;
  struct FrameProfiler * Instance;
};
struct FrameProfiler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameProfiler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameProfiler__VTable vtable;
};

struct __declspec(align(8)) FrameProfiler_c_DisplayClass17_0__Fields {
  int32_t i;
};
struct FrameProfiler_c_DisplayClass17_0 {
  struct FrameProfiler_c_DisplayClass17_0__Class *klass;
  struct MonitorData *monitor;
  struct FrameProfiler_c_DisplayClass17_0__Fields fields;
};
struct FrameProfiler_c_DisplayClass17_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameProfiler_c_DisplayClass17_0__StaticFields {
};
struct FrameProfiler_c_DisplayClass17_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameProfiler_c_DisplayClass17_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameProfiler_c_DisplayClass17_0__VTable vtable;
};

enum Marker__Enum : int32_t {
  Marker__Enum_SceneStreaming = 0,
  Marker__Enum_Timeslicing = 1,
  Marker__Enum_ShaderPrewarm = 2,
  Marker__Enum_PoolingPrewarm = 3,
  Marker__Enum_AudioPrewarm = 4,
  Marker__Enum_LoadIntro = 5,
  Marker__Enum_AsyncUpload = 6,
  Marker__Enum_Custom = 7,
  Marker__Enum_Count = 8,
};
struct Marker__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Marker__Enum value;
};

enum Stat__Enum : int32_t {
  Stat__Enum_Mono_Update_Called = 5,
  Stat__Enum_Mono_Update_Bypassed = 6,
  Stat__Enum_Mono_FixedUpdate_Called = 7,
  Stat__Enum_Mono_FixedUpdate_Bypassed = 8,
  Stat__Enum_AllocDefault = 9,
  Stat__Enum_AllocTempJob = 10,
  Stat__Enum_AllocTempBackgroundJob = 11,
  Stat__Enum_AllocGameobject = 12,
  Stat__Enum_AllocGfx = 13,
  Stat__Enum_AllocTempThread = 14,
  Stat__Enum_GPUMemorySize = 15,
  Stat__Enum_GCTotalMemory = 16,
  Stat__Enum_MaxHeapSize = 17,
  Stat__Enum_GarbageCollect = 18,
  Stat__Enum_ScenesActive = 19,
  Stat__Enum_DynamicResolutionScale = 20,
  Stat__Enum_Count = 21,
};
struct Stat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Stat__Enum value;
};

struct __declspec(align(8)) MicroProfiler_SampleStats__Fields {
  struct MicroProfiler_MetricStats__Array * m_metricStats;
  struct MicroProfiler_StatInfo__Array * m_stats;
  struct MicroProfiler_MarkerInfo__Array * m_markers;
  int32_t m_frameId;
};
struct MicroProfiler_SampleStats {
  struct MicroProfiler_SampleStats__Class *klass;
  struct MonitorData *monitor;
  struct MicroProfiler_SampleStats__Fields fields;
};
struct MicroProfiler_MetricStats {
  int64_t PeakFrameDuration;
  int64_t TimeInvocated;
  uint32_t InvocationsCount;
  uint32_t PeakFrameInvocationsCount;
  bool Invoked;
};
struct MicroProfiler_MetricStats__Boxed {
  struct MicroProfiler_MetricStats__Class *klass;
  struct MonitorData *monitor;
  struct MicroProfiler_MetricStats fields;
};
struct MicroProfiler_MetricStats__Array {
  struct MicroProfiler_MetricStats__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MicroProfiler_MetricStats vector[32];
};
enum MicroProfiler_StatType__Enum : uint8_t {
  MicroProfiler_StatType__Enum_Bool = 0,
  MicroProfiler_StatType__Enum_Float = 1,
  MicroProfiler_StatType__Enum_Int = 2,
};
struct MicroProfiler_StatType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MicroProfiler_StatType__Enum value;
};
struct MicroProfiler_StatInfo {
  float m_value;
  enum MicroProfiler_StatType__Enum m_type;
};
struct MicroProfiler_StatInfo__Boxed {
  struct MicroProfiler_StatInfo__Class *klass;
  struct MonitorData *monitor;
  struct MicroProfiler_StatInfo fields;
};
struct MicroProfiler_StatInfo__Array {
  struct MicroProfiler_StatInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MicroProfiler_StatInfo vector[32];
};
enum MicroProfiler_MarkerInfo_FrameFlags__Enum : uint8_t {
  MicroProfiler_MarkerInfo_FrameFlags__Enum_Inactive = 0,
  MicroProfiler_MarkerInfo_FrameFlags__Enum_Begun = 1,
  MicroProfiler_MarkerInfo_FrameFlags__Enum_Active = 2,
  MicroProfiler_MarkerInfo_FrameFlags__Enum_Ended = 4,
};
struct MicroProfiler_MarkerInfo_FrameFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MicroProfiler_MarkerInfo_FrameFlags__Enum value;
};
struct MicroProfiler_MarkerInfo {
  enum MicroProfiler_MarkerInfo_FrameFlags__Enum m_frameFlags;
};
struct MicroProfiler_MarkerInfo__Boxed {
  struct MicroProfiler_MarkerInfo__Class *klass;
  struct MonitorData *monitor;
  struct MicroProfiler_MarkerInfo fields;
};
struct MicroProfiler_MarkerInfo__Array {
  struct MicroProfiler_MarkerInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MicroProfiler_MarkerInfo vector[32];
};
struct MicroProfiler_MetricStats__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_MetricStats__StaticFields {
};
struct MicroProfiler_MetricStats__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_MetricStats__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_MetricStats__VTable vtable;
};
struct MicroProfiler_StatInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_StatInfo__StaticFields {
};
struct MicroProfiler_StatInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_StatInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_StatInfo__VTable vtable;
};
struct MicroProfiler_MarkerInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_MarkerInfo__StaticFields {
};
struct MicroProfiler_MarkerInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_MarkerInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_MarkerInfo__VTable vtable;
};
struct MicroProfiler_SampleStats__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_SampleStats__StaticFields {
};
struct MicroProfiler_SampleStats__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_SampleStats__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_SampleStats__VTable vtable;
};

struct MicroProfiler_SampleStats__Array {
  struct MicroProfiler_SampleStats__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MicroProfiler_SampleStats * vector[32];
};

struct MicroProfiler {
  struct MicroProfiler__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MicroProfiler_Timer__Fields {
  struct Stopwatch * stopwatch;
};
struct MicroProfiler_Timer {
  struct MicroProfiler_Timer__Class *klass;
  struct MonitorData *monitor;
  struct MicroProfiler_Timer__Fields fields;
};
struct MicroProfiler_Timer__Array {
  struct MicroProfiler_Timer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MicroProfiler_Timer * vector[32];
};
struct MicroProfiler_Timer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_Timer__StaticFields {
};
struct MicroProfiler_Timer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_Timer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_Timer__VTable vtable;
};
struct MicroProfiler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler__StaticFields {
  struct Action * PreEndFrameHandler;
  struct Action * PostBeginFrameHandler;
  struct MicroProfiler_SampleStats * m_currentFrameStats;
  struct MicroProfiler_SampleStats * m_lastCompletedFrameStats;
  struct MicroProfiler_SampleStats * m_currentSampleStats;
  struct MicroProfiler_SampleStats * m_lastRecordedSampleStats;
  struct MicroProfiler_SampleStats__Array * m_frames;
  struct MicroProfiler_Timer__Array * m_timers;
  int32_t m_currentFrame;
  int32_t m_currentFrameUnwrapped;
  bool m_paused;
  float m_lastFrameComplete;
  struct FrameTiming__Array * frameTimings;
};
struct MicroProfiler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler__VTable vtable;
};

struct MicroProfiler_c {
  struct MicroProfiler_c__Class *klass;
  struct MonitorData *monitor;
};
struct MicroProfiler_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MicroProfiler_c__StaticFields {
  struct MicroProfiler_c * __9;
};
struct MicroProfiler_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfiler_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfiler_c__VTable vtable;
};

enum Presentation__Enum : int32_t {
  Presentation__Enum_Avg = 0,
  Presentation__Enum_Peak = 1,
  Presentation__Enum_Count = 2,
  Presentation__Enum_PeakCount = 3,
  Presentation__Enum_Sum = 4,
  Presentation__Enum_SumPlusCount = 5,
};
struct Presentation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Presentation__Enum value;
};
struct MetricOutput {
  enum Metric__Enum metric;
  enum Presentation__Enum presentation;
  struct String * name;
};
struct MetricOutput__Boxed {
  struct MetricOutput__Class *klass;
  struct MonitorData *monitor;
  struct MetricOutput fields;
};
struct MetricOutput__Array {
  struct MetricOutput__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MetricOutput vector[32];
};
struct MetricOutput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MetricOutput__StaticFields {
};
struct MetricOutput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MetricOutput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MetricOutput__VTable vtable;
};

struct ProfilerMetric {
};
struct ProfilerMetric__Boxed {
  struct ProfilerMetric__Class *klass;
  struct MonitorData *monitor;
  struct ProfilerMetric fields;
};
struct ProfilerMetric__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct ProfilerMetric__StaticFields {
};
struct ProfilerMetric__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProfilerMetric__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProfilerMetric__VTable vtable;
};

struct MicroProfilerDataProvider {
  struct MicroProfilerDataProvider__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Profile_Metric___Fields {
  struct Metric__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Profile_Metric_ {
  struct List_1_Moon_Profile_Metric___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Profile_Metric___Fields fields;
};
struct Metric__Enum__Array {
  struct Metric__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum Metric__Enum vector[32];
};
struct IEnumerator_1_Moon_Profile_Metric_ {
  struct IEnumerator_1_Moon_Profile_Metric___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Profile_Metric___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Profile_Metric___StaticFields {
};
struct IEnumerator_1_Moon_Profile_Metric___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Profile_Metric___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Profile_Metric___VTable vtable;
};
struct List_1_Moon_Profile_Metric___VTable {
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
struct List_1_Moon_Profile_Metric___StaticFields {
  struct Metric__Enum__Array * _emptyArray;
};
struct List_1_Moon_Profile_Metric___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Profile_Metric___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Profile_Metric___VTable vtable;
};
struct MicroProfilerDataProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_SupportsGraph;
  VirtualInvokeData get_SupportsInspector;
  VirtualInvokeData get_SupportsMarkers;
  VirtualInvokeData get_HistorySize;
  VirtualInvokeData get_NumMetrics;
  VirtualInvokeData get_NumMarkers;
  VirtualInvokeData get_CurrentFrameIndex;
  VirtualInvokeData get_LastCompletedFrameID;
  VirtualInvokeData get_SupportedMetrics;
  VirtualInvokeData GetMetricValueInMS;
  VirtualInvokeData GetLastCompletedMetricValueInMS;
  VirtualInvokeData GetAverageMetricTimeInMSInFrameRange;
  VirtualInvokeData GetPeakMetricTimeInMSInFrameRange;
  VirtualInvokeData get_IsPaused;
  VirtualInvokeData AddPreEndFrameHandler;
  VirtualInvokeData AddPostBeginFrameHandler;
  VirtualInvokeData RemovePreEndFrameHandler;
  VirtualInvokeData RemovePostBeginFrameHandler;
};
struct MicroProfilerDataProvider__StaticFields {
  struct List_1_Moon_Profile_Metric_ * s_allMetrics;
};
struct MicroProfilerDataProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MicroProfilerDataProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MicroProfilerDataProvider__VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Fields {
  struct PlayerLoopSystem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ {
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Fields fields;
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ {
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Class *klass;
  struct MonitorData *monitor;
};
enum PlayerLoopHelper_InsertionMode__Enum : int32_t {
  PlayerLoopHelper_InsertionMode__Enum_Before = 0,
  PlayerLoopHelper_InsertionMode__Enum_After = 1,
};
struct PlayerLoopHelper_InsertionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayerLoopHelper_InsertionMode__Enum value;
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___VTable vtable;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___VTable {
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
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___StaticFields {
  struct PlayerLoopSystem__Array * _emptyArray;
};
struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem___VTable vtable;
};

struct PlayerLoopHelper {
  struct PlayerLoopHelper__Class *klass;
  struct MonitorData *monitor;
};
struct PlayerLoopHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLoopHelper__StaticFields {
};
struct PlayerLoopHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLoopHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLoopHelper__VTable vtable;
};

struct AssemblyBridge {
  struct AssemblyBridge__Class *klass;
  struct MonitorData *monitor;
};
struct AssemblyBridge__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AssemblyBridge__StaticFields {
  struct Dictionary_2_System_String_System_Type_ * s_globalTypeDic;
};
struct AssemblyBridge__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyBridge__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyBridge__VTable vtable;
};

struct IMoonDriverExecutionOrderMap {
  struct IMoonDriverExecutionOrderMap__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonDriverExecutionOrderMap__VTable {
  VirtualInvokeData TryGetExecutionOrderFor;
};
struct IMoonDriverExecutionOrderMap__StaticFields {
};
struct IMoonDriverExecutionOrderMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonDriverExecutionOrderMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonDriverExecutionOrderMap__VTable vtable;
};

enum UpdateCategory__Enum : int32_t {
  UpdateCategory__Enum_Visuals = 0,
  UpdateCategory__Enum_Physical = 1,
};
struct UpdateCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UpdateCategory__Enum value;
};

struct DrivableGroup__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_groupName;
  struct HashSet_1_Moon_IDrivable_ * m_drivablesHash;
  struct List_1_Moon_IDrivable_ * m_drivables;
  bool _IsActive_k__BackingField;
};
struct DrivableGroup {
  struct DrivableGroup__Class *klass;
  struct MonitorData *monitor;
  struct DrivableGroup__Fields fields;
};
struct __declspec(align(8)) HashSet_1_Moon_IDrivable___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_IDrivable___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_IDrivable_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_IDrivable_ {
  struct HashSet_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_IDrivable___Fields fields;
};
struct HashSet_1_T_Slot_Moon_IDrivable_ {
  int32_t hashCode;
  int32_t next;
  struct IDrivable * value;
};
struct HashSet_1_T_Slot_Moon_IDrivable___Boxed {
  struct HashSet_1_T_Slot_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_IDrivable_ fields;
};
struct HashSet_1_T_Slot_Moon_IDrivable___Array {
  struct HashSet_1_T_Slot_Moon_IDrivable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_IDrivable_ vector[32];
};
struct IDrivable {
  struct IDrivable__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_Moon_IDrivable_ {
  struct IEqualityComparer_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
};
struct IDrivable__Array {
  struct IDrivable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDrivable * vector[32];
};
struct IEnumerator_1_Moon_IDrivable_ {
  struct IEnumerator_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_IDrivable_ {
  struct IEnumerable_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_IDrivable___Fields {
  struct IDrivable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IDrivable_ {
  struct List_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IDrivable___Fields fields;
};
struct IDrivable__VTable {
  VirtualInvokeData OnPauseDrivable;
  VirtualInvokeData OnResumeDrivable;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_IsRunning;
  VirtualInvokeData set_IsRunning;
  VirtualInvokeData get_ExecutionOrder;
};
struct IDrivable__StaticFields {
};
struct IDrivable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDrivable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDrivable__VTable vtable;
};
struct HashSet_1_T_Slot_Moon_IDrivable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_Moon_IDrivable___StaticFields {
};
struct HashSet_1_T_Slot_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_Moon_IDrivable___VTable vtable;
};
struct IEqualityComparer_1_Moon_IDrivable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_IDrivable___StaticFields {
};
struct IEqualityComparer_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_IDrivable___VTable vtable;
};
struct IEnumerator_1_Moon_IDrivable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IDrivable___StaticFields {
};
struct IEnumerator_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IDrivable___VTable vtable;
};
struct IEnumerable_1_Moon_IDrivable___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_IDrivable___StaticFields {
};
struct IEnumerable_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_IDrivable___VTable vtable;
};}