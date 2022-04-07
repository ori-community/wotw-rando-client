namespace app {

struct RemoveOnNintendoSwitch__Fields {
  struct MonoBehaviour__Fields _;
};
struct RemoveOnNintendoSwitch {
  struct RemoveOnNintendoSwitch__Class *klass;
  struct MonitorData *monitor;
  struct RemoveOnNintendoSwitch__Fields fields;
};
struct RemoveOnNintendoSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoveOnNintendoSwitch__StaticFields {
};
struct RemoveOnNintendoSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveOnNintendoSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveOnNintendoSwitch__VTable vtable;
};

struct RemoveReflectionOnNintendoSwitch__Fields {
  struct MonoBehaviour__Fields _;
};
struct RemoveReflectionOnNintendoSwitch {
  struct RemoveReflectionOnNintendoSwitch__Class *klass;
  struct MonitorData *monitor;
  struct RemoveReflectionOnNintendoSwitch__Fields fields;
};
struct RemoveReflectionOnNintendoSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoveReflectionOnNintendoSwitch__StaticFields {
};
struct RemoveReflectionOnNintendoSwitch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveReflectionOnNintendoSwitch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveReflectionOnNintendoSwitch__VTable vtable;
};

struct __declspec(align(8)) RecorderSettings__Fields {
  struct String * m_shotName;
  bool m_showInputScreen;
  bool m_dumpFrames;
  bool m_spawnEnemies;
  bool m_enableMotionBlur;
  bool m_enable120FPS;
  float PlayBackScale;
  bool ScaleEntireShot;
};
struct RecorderSettings {
  struct RecorderSettings__Class *klass;
  struct MonitorData *monitor;
  struct RecorderSettings__Fields fields;
};
struct RecorderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderSettings__StaticFields {
  struct RecorderSettings * _Instance_k__BackingField;
};
struct RecorderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderSettings__VTable vtable;
};

struct IRecorderShot {
  struct IRecorderShot__Class *klass;
  struct MonitorData *monitor;
};
struct IRecorderShot__VTable {
  VirtualInvokeData get_ShotName;
  VirtualInvokeData get_InstanceId;
  VirtualInvokeData get_SpawnEnemies;
};
struct IRecorderShot__StaticFields {
};
struct IRecorderShot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRecorderShot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRecorderShot__VTable vtable;
};

struct IBuildInformationProvider {
  struct IBuildInformationProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IBuildInformationProvider__VTable {
  VirtualInvokeData GetRevision;
};
struct IBuildInformationProvider__StaticFields {
};
struct IBuildInformationProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IBuildInformationProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IBuildInformationProvider__VTable vtable;
};

struct __declspec(align(8)) ClientInformationProvider__Fields {
  struct String * m_revision;
};
struct ClientInformationProvider {
  struct ClientInformationProvider__Class *klass;
  struct MonitorData *monitor;
  struct ClientInformationProvider__Fields fields;
};
struct ClientInformationProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetRevision;
};
struct ClientInformationProvider__StaticFields {
};
struct ClientInformationProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientInformationProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientInformationProvider__VTable vtable;
};

struct MoonTelemetryKustoWebConfig {
  struct MoonTelemetryKustoWebConfig__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTelemetryKustoWebConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTelemetryKustoWebConfig__StaticFields {
  bool s_isInited;
  struct String * Path;
};
struct MoonTelemetryKustoWebConfig__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTelemetryKustoWebConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTelemetryKustoWebConfig__VTable vtable;
};

struct __declspec(align(8)) Datadog__Fields {
  struct HashSet_1_System_Threading_Thread_ * m_jobs;
  struct List_1_Datadog_ThresholdItem_ * m_thresholdItems;
};
struct Datadog {
  struct Datadog__Class *klass;
  struct MonitorData *monitor;
  struct Datadog__Fields fields;
};
struct __declspec(align(8)) HashSet_1_System_Threading_Thread___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_System_Threading_Thread___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_System_Threading_Thread_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_System_Threading_Thread_ {
  struct HashSet_1_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_System_Threading_Thread___Fields fields;
};
struct HashSet_1_T_Slot_System_Threading_Thread_ {
  int32_t hashCode;
  int32_t next;
  struct Thread * value;
};
struct HashSet_1_T_Slot_System_Threading_Thread___Boxed {
  struct HashSet_1_T_Slot_System_Threading_Thread___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_System_Threading_Thread_ fields;
};
struct HashSet_1_T_Slot_System_Threading_Thread___Array {
  struct HashSet_1_T_Slot_System_Threading_Thread___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_System_Threading_Thread_ vector[32];
};
struct __declspec(align(8)) List_1_Datadog_ThresholdItem___Fields {
  struct Datadog_ThresholdItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Datadog_ThresholdItem_ {
  struct List_1_Datadog_ThresholdItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Datadog_ThresholdItem___Fields fields;
};
struct Datadog_ThresholdItem {
  bool IsSet;
  int32_t Hash;
  int64_t LastTime;
};
struct Datadog_ThresholdItem__Boxed {
  struct Datadog_ThresholdItem__Class *klass;
  struct MonitorData *monitor;
  struct Datadog_ThresholdItem fields;
};
struct Datadog_ThresholdItem__Array {
  struct Datadog_ThresholdItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Datadog_ThresholdItem vector[32];
};
struct IEnumerator_1_Datadog_ThresholdItem_ {
  struct IEnumerator_1_Datadog_ThresholdItem___Class *klass;
  struct MonitorData *monitor;
};
struct HashSet_1_T_Slot_System_Threading_Thread___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_System_Threading_Thread___StaticFields {
};
struct HashSet_1_T_Slot_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_System_Threading_Thread___VTable vtable;
};
struct HashSet_1_System_Threading_Thread___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_System_Threading_Thread___StaticFields {
};
struct HashSet_1_System_Threading_Thread___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_System_Threading_Thread___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_System_Threading_Thread___VTable vtable;
};
struct Datadog_ThresholdItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Datadog_ThresholdItem__StaticFields {
};
struct Datadog_ThresholdItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datadog_ThresholdItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datadog_ThresholdItem__VTable vtable;
};
struct IEnumerator_1_Datadog_ThresholdItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Datadog_ThresholdItem___StaticFields {
};
struct IEnumerator_1_Datadog_ThresholdItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Datadog_ThresholdItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Datadog_ThresholdItem___VTable vtable;
};
struct List_1_Datadog_ThresholdItem___VTable {
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
struct List_1_Datadog_ThresholdItem___StaticFields {
  struct Datadog_ThresholdItem__Array * _emptyArray;
};
struct List_1_Datadog_ThresholdItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Datadog_ThresholdItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Datadog_ThresholdItem___VTable vtable;
};
struct Datadog__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Datadog__StaticFields {
  struct Datadog * m_instance;
  struct Object * m_lock;
};
struct Datadog__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datadog__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datadog__VTable vtable;
};

struct DatadogEvent {
  struct DatadogEvent__Class *klass;
  struct MonitorData *monitor;
};
struct DatadogEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Url;
  VirtualInvokeData get_UniqueHash;
  VirtualInvokeData ToJson;
};
struct DatadogEvent__StaticFields {
};
struct DatadogEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DatadogEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DatadogEvent__VTable vtable;
};

struct __declspec(align(8)) Datadog_c_DisplayClass11_0__Fields {
  struct Datadog * __4__this;
  struct DatadogEvent * payload;
};
struct Datadog_c_DisplayClass11_0 {
  struct Datadog_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct Datadog_c_DisplayClass11_0__Fields fields;
};
struct Datadog_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Datadog_c_DisplayClass11_0__StaticFields {
};
struct Datadog_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datadog_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datadog_c_DisplayClass11_0__VTable vtable;
};

struct IDataEvent {
  struct IDataEvent__Class *klass;
  struct MonitorData *monitor;
};
struct IDataEvent__VTable {
};
struct IDataEvent__StaticFields {
};
struct IDataEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDataEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDataEvent__VTable vtable;
};

struct __declspec(align(8)) DatadogMetricsEvent__Fields {
  struct DatadogMetricsEvent_Series__Array * series;
};
struct DatadogMetricsEvent {
  struct DatadogMetricsEvent__Class *klass;
  struct MonitorData *monitor;
  struct DatadogMetricsEvent__Fields fields;
};
struct __declspec(align(8)) DatadogMetricsEvent_Series__Fields {
  struct String * metric;
  struct String * type;
  struct String * host;
  struct List_1_System_String_ * tags;
  struct String * points;
  struct List_1_System_Int64_ * PointsObject;
};
struct DatadogMetricsEvent_Series {
  struct DatadogMetricsEvent_Series__Class *klass;
  struct MonitorData *monitor;
  struct DatadogMetricsEvent_Series__Fields fields;
};
struct DatadogMetricsEvent_Series__Array {
  struct DatadogMetricsEvent_Series__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DatadogMetricsEvent_Series * vector[32];
};
struct __declspec(align(8)) List_1_System_Int64___Fields {
  struct Int64__Array__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Int64_ {
  struct List_1_System_Int64___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Int64___Fields fields;
};
struct Int64__Array__Array {
  struct Int64__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Int64__Array * vector[32];
};
struct IEnumerator_1_System_Int64_ {
  struct IEnumerator_1_System_Int64___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Int64___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Int64___StaticFields {
};
struct IEnumerator_1_System_Int64___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Int64___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Int64___VTable vtable;
};
struct List_1_System_Int64___VTable {
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
struct List_1_System_Int64___StaticFields {
  struct Int64__Array__Array * _emptyArray;
};
struct List_1_System_Int64___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Int64___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Int64___VTable vtable;
};
struct DatadogMetricsEvent_Series__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DatadogMetricsEvent_Series__StaticFields {
};
struct DatadogMetricsEvent_Series__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DatadogMetricsEvent_Series__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DatadogMetricsEvent_Series__VTable vtable;
};
struct DatadogMetricsEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Url;
  VirtualInvokeData get_UniqueHash;
  VirtualInvokeData ToJson;
};
struct DatadogMetricsEvent__StaticFields {
  struct String * m_url;
};
struct DatadogMetricsEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DatadogMetricsEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DatadogMetricsEvent__VTable vtable;
};

struct __declspec(align(8)) DatadogRegularEvent__Fields {
  struct String * title;
  struct String * text;
  struct List_1_System_String_ * tags;
  struct String * alert_type;
  struct String * aggregation_key;
};
struct DatadogRegularEvent {
  struct DatadogRegularEvent__Class *klass;
  struct MonitorData *monitor;
  struct DatadogRegularEvent__Fields fields;
};
struct DatadogRegularEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Url;
  VirtualInvokeData get_UniqueHash;
  VirtualInvokeData ToJson;
};
struct DatadogRegularEvent__StaticFields {
  struct String * m_url;
};
struct DatadogRegularEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DatadogRegularEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DatadogRegularEvent__VTable vtable;
};

struct __declspec(align(8)) GenericRegularEvent__Fields {
  enum LogType__Enum LogType;
  struct String * Message;
  struct String * Stacktrace;
  struct String * Group;
};
struct GenericRegularEvent {
  struct GenericRegularEvent__Class *klass;
  struct MonitorData *monitor;
  struct GenericRegularEvent__Fields fields;
};
struct GenericRegularEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCompatibleEvent;
};
struct GenericRegularEvent__StaticFields {
};
struct GenericRegularEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericRegularEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericRegularEvent__VTable vtable;
};

struct __declspec(align(8)) EditorSceneSaveEvent__Fields {
  struct String * _SceneName_k__BackingField;
  int64_t _TimeTaken_k__BackingField;
};
struct EditorSceneSaveEvent {
  struct EditorSceneSaveEvent__Class *klass;
  struct MonitorData *monitor;
  struct EditorSceneSaveEvent__Fields fields;
};
struct EditorSceneSaveEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCompatibleEvent;
};
struct EditorSceneSaveEvent__StaticFields {
};
struct EditorSceneSaveEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EditorSceneSaveEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EditorSceneSaveEvent__VTable vtable;
};

struct __declspec(align(8)) AssemblyCompiledEvent__Fields {
  struct String * _Assembly_k__BackingField;
  int32_t _TimeTaken_k__BackingField;
};
struct AssemblyCompiledEvent {
  struct AssemblyCompiledEvent__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyCompiledEvent__Fields fields;
};
struct AssemblyCompiledEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCompatibleEvent;
};
struct AssemblyCompiledEvent__StaticFields {
};
struct AssemblyCompiledEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyCompiledEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyCompiledEvent__VTable vtable;
};

struct __declspec(align(8)) AssemblyReloadedEvent__Fields {
  int32_t _TimeTaken_k__BackingField;
};
struct AssemblyReloadedEvent {
  struct AssemblyReloadedEvent__Class *klass;
  struct MonitorData *monitor;
  struct AssemblyReloadedEvent__Fields fields;
};
struct AssemblyReloadedEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCompatibleEvent;
};
struct AssemblyReloadedEvent__StaticFields {
};
struct AssemblyReloadedEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssemblyReloadedEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssemblyReloadedEvent__VTable vtable;
};

struct __declspec(align(8)) PlaymodeEnteredEvent__Fields {
  int32_t _TimeTaken_k__BackingField;
  struct String * _Scene_k__BackingField;
};
struct PlaymodeEnteredEvent {
  struct PlaymodeEnteredEvent__Class *klass;
  struct MonitorData *monitor;
  struct PlaymodeEnteredEvent__Fields fields;
};
struct PlaymodeEnteredEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCompatibleEvent;
};
struct PlaymodeEnteredEvent__StaticFields {
};
struct PlaymodeEnteredEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaymodeEnteredEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaymodeEnteredEvent__VTable vtable;
};

struct __declspec(align(8)) MoonTelemetryEvent__Fields {
  struct String * BuildNumberString;
};
struct MoonTelemetryEvent {
  struct MoonTelemetryEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryEvent__Fields fields;
};
struct MoonTelemetryClientBaseEvent__Fields {
  struct MoonTelemetryEvent__Fields _;
  float PositionX;
  float PositionY;
  struct String * UserID;
  struct String * PlayerSessionID;
  float SessionDuration;
  struct String * SandboxID;
  int32_t PlatformID;
  struct String * ClientHardwareID;
  struct String * BuildID;
  struct String * ClientTimestampUTC;
  struct String * BuildTag;
  bool IsPirate;
  bool Docked;
  bool QualityMode;
  int32_t PCQualityMode;
  bool HFRSupported;
  struct DateTime _Time_k__BackingField;
};
struct MoonTelemetryClientBaseEvent {
  struct MoonTelemetryClientBaseEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryClientBaseEvent__Fields fields;
};
struct MoonTelemetryCharacterBaseEvent__Fields {
  struct MoonTelemetryClientBaseEvent__Fields _;
  bool WasDebugUsed;
  struct String * SaveGameID;
  int32_t LifeID;
  float LocationX;
  float LocationY;
  int32_t MapArea;
  struct String * SceneName;
  int32_t GameTime;
  int32_t Difficulty;
  struct String * TrackedQuest;
  float LifeCurrent;
  float LifeCap;
  float EnergyCurrent;
  float EnergyCap;
  int32_t SpiritLightBalance;
  int32_t SpiritLightCollected;
  int32_t ShardSlotsMax;
  int32_t AbilitySlotX;
  int32_t AbilitySlotY;
  int32_t AbilitySlotB;
  struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ * m_fieldInfos;
  struct Vector2 _LastScreenPosition_k__BackingField;
};
struct MoonTelemetryCharacterBaseEvent {
  struct MoonTelemetryCharacterBaseEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryCharacterBaseEvent__Fields fields;
};
enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum : int32_t {
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Undefined = 0,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Ori = 1,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Slug = 2,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SpikeSlug = 3,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_DropSlug = 4,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_BombSlug = 5,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_AcidSlug = 6,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ShellSlug = 7,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ElectricSlug = 8,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Lizard = 9,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_KamikazeLizard = 10,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Frog = 11,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Mantis = 12,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ShockwaveMantis = 13,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_MultijumpMantis = 14,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ElectricShockwaveMantis = 15,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Piranha = 16,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Skeeto = 17,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ScaredySkeeto = 18,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_KamikazeSkeeto = 19,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SkeetoGroup = 20,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ShelledHornbug = 21,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_NakedHornbug = 22,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_HornbugMiniboss = 23,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Mortar = 24,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_IceMortar = 25,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SneezeSlug = 26,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SneezeSlugVariation = 27,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Tentacle = 28,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_TentacleVariation = 29,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_PickaxeMiner = 30,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_FeralMiner = 31,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_MeleeMiner = 32,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_IceMiner = 33,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ShieldedMiner = 34,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_GrenadeMiner = 35,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_CrazyMiner = 36,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Gasball = 37,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Sandworm = 38,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_BabySandworm = 39,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_BabyWaterWorm = 40,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_WaterEel = 41,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_WaterEelTrail = 42,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SpiderBat = 43,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SpiderBatSpew = 44,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_MothsSwarm = 45,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_BatsSwarm = 46,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_CorruptedSpiderling = 47,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Snaptrap = 48,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SnaptrapLeashHook = 49,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_CarnivorousLiana = 50,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ProximityMine = 51,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_Crab = 52,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_SpinningCrab = 53,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_LaserShooter = 54,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_TurretShooter = 55,
  MoonTelemetryDamageTransactionEvent_DamageEntity__Enum_ShieldedLaserShooter = 56,
};
struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
};
struct MoonTelemetryDamageTransactionEvent__Fields {
  struct MoonTelemetryCharacterBaseEvent__Fields _;
  int32_t ID;
  int32_t AbilityType;
  int32_t DamageType;
  float DamageValue;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageSource;
  struct String * DamageSourceID;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageTarget;
  struct String * DamageTargetID;
  float OtherXLocation;
  float OtherYLocation;
  float ForceX;
  float ForceY;
  int32_t Weight;
  float StunDuration;
  bool TargetDestroyed;
  struct String * _Name_k__BackingField;
};
struct MoonTelemetryDamageTransactionEvent {
  struct MoonTelemetryDamageTransactionEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonTelemetryDamageTransactionEvent__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
  struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
  struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
};
struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array {
  struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum vector[32];
};
struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
  struct Type * key;
  enum MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
};
struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Boxed {
  struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ fields;
};
struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array {
  struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ vector[32];
};}