namespace app {
struct RemoveOnNintendoSwitch__StaticFields {
};

struct RemoveOnNintendoSwitch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveOnNintendoSwitch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveOnNintendoSwitch__VTable vtable;
};

struct RemoveReflectionOnNintendoSwitch__Fields {
    struct MonoBehaviour__Fields _;
};

struct RemoveReflectionOnNintendoSwitch {
    struct RemoveReflectionOnNintendoSwitch__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RemoveReflectionOnNintendoSwitch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RemoveReflectionOnNintendoSwitch__VTable vtable;
};

struct __declspec(align(8)) RecorderSettings__Fields {
    struct String *m_shotName;
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
    MonitorData *monitor;
    struct RecorderSettings__Fields fields;
};

struct RecorderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RecorderSettings__StaticFields {
    struct RecorderSettings *_Instance_k__BackingField;
};

struct RecorderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RecorderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RecorderSettings__VTable vtable;
};

struct IRecorderShot {
    struct IRecorderShot__Class *klass;
    MonitorData *monitor;
};

struct IRecorderShot__VTable {
    VirtualInvokeData get_ShotName;
    VirtualInvokeData get_InstanceId;
    VirtualInvokeData get_SpawnEnemies;
};

struct IRecorderShot__StaticFields {
};

struct IRecorderShot__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRecorderShot__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRecorderShot__VTable vtable;
};

struct IBuildInformationProvider {
    struct IBuildInformationProvider__Class *klass;
    MonitorData *monitor;
};

struct IBuildInformationProvider__VTable {
    VirtualInvokeData GetRevision;
};

struct IBuildInformationProvider__StaticFields {
};

struct IBuildInformationProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IBuildInformationProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IBuildInformationProvider__VTable vtable;
};

struct __declspec(align(8)) ClientInformationProvider__Fields {
    struct String *m_revision;
};

struct ClientInformationProvider {
    struct ClientInformationProvider__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClientInformationProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClientInformationProvider__VTable vtable;
};

struct MoonTelemetryKustoWebConfig {
    struct MoonTelemetryKustoWebConfig__Class *klass;
    MonitorData *monitor;
};

struct MoonTelemetryKustoWebConfig__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonTelemetryKustoWebConfig__StaticFields {
    bool s_isInited;
    struct String *Path;
};

struct MoonTelemetryKustoWebConfig__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTelemetryKustoWebConfig__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTelemetryKustoWebConfig__VTable vtable;
};

struct __declspec(align(8)) Datadog__Fields {
    struct HashSet_1_System_Threading_Thread_ *m_jobs;
    struct List_1_Datadog_ThresholdItem_ *m_thresholdItems;
};

struct Datadog {
    struct Datadog__Class *klass;
    MonitorData *monitor;
    struct Datadog__Fields fields;
};

struct __declspec(align(8)) HashSet_1_System_Threading_Thread___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_System_Threading_Thread___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_System_Threading_Thread_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_System_Threading_Thread_ {
    struct HashSet_1_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_System_Threading_Thread___Fields fields;
};

struct HashSet_1_T_Slot_System_Threading_Thread_ {
    int32_t hashCode;
    int32_t next;
    struct Thread *value;
};

struct HashSet_1_T_Slot_System_Threading_Thread___Boxed {
    struct HashSet_1_T_Slot_System_Threading_Thread___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_System_Threading_Thread_ fields;
};

struct HashSet_1_T_Slot_System_Threading_Thread___Array {
    struct HashSet_1_T_Slot_System_Threading_Thread___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_System_Threading_Thread_ vector[32];
};

struct __declspec(align(8)) List_1_Datadog_ThresholdItem___Fields {
    struct Datadog_ThresholdItem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Datadog_ThresholdItem_ {
    struct List_1_Datadog_ThresholdItem___Class *klass;
    MonitorData *monitor;
    struct List_1_Datadog_ThresholdItem___Fields fields;
};

struct Datadog_ThresholdItem {
    bool IsSet;
    int32_t Hash;
    int64_t LastTime;
};

struct Datadog_ThresholdItem__Boxed {
    struct Datadog_ThresholdItem__Class *klass;
    MonitorData *monitor;
    struct Datadog_ThresholdItem fields;
};

struct Datadog_ThresholdItem__Array {
    struct Datadog_ThresholdItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Datadog_ThresholdItem vector[32];
};

struct IEnumerator_1_Datadog_ThresholdItem_ {
    struct IEnumerator_1_Datadog_ThresholdItem___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_System_Threading_Thread___VTable vtable;
};

struct HashSet_1_T_Slot_System_Threading_Thread___Array__VTable {
};

struct HashSet_1_T_Slot_System_Threading_Thread___Array__StaticFields {
};

struct HashSet_1_T_Slot_System_Threading_Thread___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_System_Threading_Thread___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_System_Threading_Thread___Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_System_Threading_Thread___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datadog_ThresholdItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datadog_ThresholdItem__VTable vtable;
};

struct Datadog_ThresholdItem__Array__VTable {
};

struct Datadog_ThresholdItem__Array__StaticFields {
};

struct Datadog_ThresholdItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datadog_ThresholdItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datadog_ThresholdItem__Array__VTable vtable;
};

struct IEnumerator_1_Datadog_ThresholdItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Datadog_ThresholdItem___StaticFields {
};

struct IEnumerator_1_Datadog_ThresholdItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Datadog_ThresholdItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Datadog_ThresholdItem__Array *_emptyArray;
};

struct List_1_Datadog_ThresholdItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Datadog_ThresholdItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Datadog_ThresholdItem___VTable vtable;
};

struct Datadog__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Datadog__StaticFields {
    struct Datadog *m_instance;
    struct Object *m_lock;
};

struct Datadog__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datadog__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datadog__VTable vtable;
};

struct DatadogEvent {
    struct DatadogEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DatadogEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DatadogEvent__VTable vtable;
};

struct __declspec(align(8)) Datadog_c_DisplayClass11_0__Fields {
    struct Datadog *__4__this;
    struct DatadogEvent *payload;
};

struct Datadog_c_DisplayClass11_0 {
    struct Datadog_c_DisplayClass11_0__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datadog_c_DisplayClass11_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datadog_c_DisplayClass11_0__VTable vtable;
};

struct IDataEvent {
    struct IDataEvent__Class *klass;
    MonitorData *monitor;
};

struct IDataEvent__VTable {
};

struct IDataEvent__StaticFields {
};

struct IDataEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDataEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDataEvent__VTable vtable;
};

struct __declspec(align(8)) DatadogMetricsEvent__Fields {
    struct DatadogMetricsEvent_Series__Array *series;
};

struct DatadogMetricsEvent {
    struct DatadogMetricsEvent__Class *klass;
    MonitorData *monitor;
    struct DatadogMetricsEvent__Fields fields;
};

struct __declspec(align(8)) DatadogMetricsEvent_Series__Fields {
    struct String *metric;
    struct String *type;
    struct String *host;
    struct List_1_System_String_ *tags;
    struct String *points;
    struct List_1_System_Int64_ *PointsObject;
};

struct DatadogMetricsEvent_Series {
    struct DatadogMetricsEvent_Series__Class *klass;
    MonitorData *monitor;
    struct DatadogMetricsEvent_Series__Fields fields;
};

struct __declspec(align(8)) List_1_System_Int64___Fields {
    struct Int64__Array__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Int64_ {
    struct List_1_System_Int64___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Int64___Fields fields;
};

struct Int64__Array__Array {
    struct Int64__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Int64__Array *vector[32];
};

struct IEnumerator_1_System_Int64_ {
    struct IEnumerator_1_System_Int64___Class *klass;
    MonitorData *monitor;
};

struct DatadogMetricsEvent_Series__Array {
    struct DatadogMetricsEvent_Series__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DatadogMetricsEvent_Series *vector[32];
};

struct Int64__Array__Array__VTable {
};

struct Int64__Array__Array__StaticFields {
};

struct Int64__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int64__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int64__Array__Array__VTable vtable;
};

struct IEnumerator_1_System_Int64___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Int64___StaticFields {
};

struct IEnumerator_1_System_Int64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Int64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Int64__Array__Array *_emptyArray;
};

struct List_1_System_Int64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Int64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DatadogMetricsEvent_Series__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DatadogMetricsEvent_Series__VTable vtable;
};

struct DatadogMetricsEvent_Series__Array__VTable {
};

struct DatadogMetricsEvent_Series__Array__StaticFields {
};

struct DatadogMetricsEvent_Series__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DatadogMetricsEvent_Series__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DatadogMetricsEvent_Series__Array__VTable vtable;
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
    struct String *m_url;
};

struct DatadogMetricsEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DatadogMetricsEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DatadogMetricsEvent__VTable vtable;
};

struct __declspec(align(8)) DatadogRegularEvent__Fields {
    struct String *title;
    struct String *text;
    struct List_1_System_String_ *tags;
    struct String *alert_type;
    struct String *aggregation_key;
};

struct DatadogRegularEvent {
    struct DatadogRegularEvent__Class *klass;
    MonitorData *monitor;
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
    struct String *m_url;
};

struct DatadogRegularEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DatadogRegularEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DatadogRegularEvent__VTable vtable;
};

struct __declspec(align(8)) GenericRegularEvent__Fields {
    LogType__Enum LogType;
    
    struct String *Message;
    struct String *Stacktrace;
    struct String *Group;
};

struct GenericRegularEvent {
    struct GenericRegularEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericRegularEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericRegularEvent__VTable vtable;
};

struct __declspec(align(8)) EditorSceneSaveEvent__Fields {
    struct String *_SceneName_k__BackingField;
    int64_t _TimeTaken_k__BackingField;
};

struct EditorSceneSaveEvent {
    struct EditorSceneSaveEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EditorSceneSaveEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EditorSceneSaveEvent__VTable vtable;
};

struct __declspec(align(8)) AssemblyCompiledEvent__Fields {
    struct String *_Assembly_k__BackingField;
    int32_t _TimeTaken_k__BackingField;
};

struct AssemblyCompiledEvent {
    struct AssemblyCompiledEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyCompiledEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyCompiledEvent__VTable vtable;
};

struct __declspec(align(8)) AssemblyReloadedEvent__Fields {
    int32_t _TimeTaken_k__BackingField;
};

struct AssemblyReloadedEvent {
    struct AssemblyReloadedEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyReloadedEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyReloadedEvent__VTable vtable;
};

struct __declspec(align(8)) PlaymodeEnteredEvent__Fields {
    int32_t _TimeTaken_k__BackingField;
    struct String *_Scene_k__BackingField;
};

struct PlaymodeEnteredEvent {
    struct PlaymodeEnteredEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlaymodeEnteredEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlaymodeEnteredEvent__VTable vtable;
};

struct __declspec(align(8)) MoonTelemetryEvent__Fields {
    struct String *BuildNumberString;
};

struct MoonTelemetryEvent {
    struct MoonTelemetryEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryEvent__Fields fields;
};

struct MoonTelemetryClientBaseEvent__Fields {
    struct MoonTelemetryEvent__Fields _;
    float PositionX;
    float PositionY;
    struct String *UserID;
    struct String *PlayerSessionID;
    float SessionDuration;
    struct String *SandboxID;
    int32_t PlatformID;
    struct String *ClientHardwareID;
    struct String *BuildID;
    struct String *ClientTimestampUTC;
    struct String *BuildTag;
    bool IsPirate;
    bool Docked;
    bool QualityMode;
    int32_t PCQualityMode;
    bool HFRSupported;
    struct DateTime _Time_k__BackingField;
};

struct MoonTelemetryClientBaseEvent {
    struct MoonTelemetryClientBaseEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryClientBaseEvent__Fields fields;
};

struct MoonTelemetryCharacterBaseEvent__Fields {
    struct MoonTelemetryClientBaseEvent__Fields _;
    bool WasDebugUsed;
    struct String *SaveGameID;
    int32_t LifeID;
    float LocationX;
    float LocationY;
    int32_t MapArea;
    struct String *SceneName;
    int32_t GameTime;
    int32_t Difficulty;
    struct String *TrackedQuest;
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
    struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ *m_fieldInfos;
    struct Vector2 _LastScreenPosition_k__BackingField;
};

struct MoonTelemetryCharacterBaseEvent {
    struct MoonTelemetryCharacterBaseEvent__Class *klass;
    MonitorData *monitor;
    struct MoonTelemetryCharacterBaseEvent__Fields fields;
};

enum class MoonTelemetryDamageTransactionEvent_DamageEntity__Enum : int32_t {
    Undefined = 0x00000000,
    Ori = 0x00000001,
    Slug = 0x00000002,
    SpikeSlug = 0x00000003,
    DropSlug = 0x00000004,
    BombSlug = 0x00000005,
    AcidSlug = 0x00000006,
    ShellSlug = 0x00000007,
    ElectricSlug = 0x00000008,
    Lizard = 0x00000009,
    KamikazeLizard = 0x0000000a,
    Frog = 0x0000000b,
    Mantis = 0x0000000c,
    ShockwaveMantis = 0x0000000d,
    MultijumpMantis = 0x0000000e,
    ElectricShockwaveMantis = 0x0000000f,
    Piranha = 0x00000010,
    Skeeto = 0x00000011,
    ScaredySkeeto = 0x00000012,
    KamikazeSkeeto = 0x00000013,
    SkeetoGroup = 0x00000014,
    ShelledHornbug = 0x00000015,
    NakedHornbug = 0x00000016,
    HornbugMiniboss = 0x00000017,
    Mortar = 0x00000018,
    IceMortar = 0x00000019,
    SneezeSlug = 0x0000001a,
    SneezeSlugVariation = 0x0000001b,
    Tentacle = 0x0000001c,
    TentacleVariation = 0x0000001d,
    PickaxeMiner = 0x0000001e,
    FeralMiner = 0x0000001f,
    MeleeMiner = 0x00000020,
    IceMiner = 0x00000021,
    ShieldedMiner = 0x00000022,
    GrenadeMiner = 0x00000023,
    CrazyMiner = 0x00000024,
    Gasball = 0x00000025,
    Sandworm = 0x00000026,
    BabySandworm = 0x00000027,
    BabyWaterWorm = 0x00000028,
    WaterEel = 0x00000029,
    WaterEelTrail = 0x0000002a,
    SpiderBat = 0x0000002b,
    SpiderBatSpew = 0x0000002c,
    MothsSwarm = 0x0000002d,
    BatsSwarm = 0x0000002e,
    CorruptedSpiderling = 0x0000002f,
    Snaptrap = 0x00000030,
    SnaptrapLeashHook = 0x00000031,
    CarnivorousLiana = 0x00000032,
    ProximityMine = 0x00000033,
    Crab = 0x00000034,
    SpinningCrab = 0x00000035,
    LaserShooter = 0x00000036,
    TurretShooter = 0x00000037,
    ShieldedLaserShooter = 0x00000038,
};

}
