namespace app {
struct GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__StaticFields {
};

struct GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum__VTable vtable;
};

struct GhostTimelineEventsPlugin_TimelineEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData get_FrameType;
    VirtualInvokeData GetDataSize;
    VirtualInvokeData get_Executed;
    VirtualInvokeData set_Executed;
};

struct GhostTimelineEventsPlugin_TimelineEventData__StaticFields {
};

struct GhostTimelineEventsPlugin_TimelineEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostTimelineEventsPlugin_TimelineEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostTimelineEventsPlugin_TimelineEventData__VTable vtable;
};

struct GhostTimeTrackingPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    float m_startTime;
};

struct GhostTimeTrackingPlugin {
    struct GhostTimeTrackingPlugin__Class *klass;
    MonitorData *monitor;
    struct GhostTimeTrackingPlugin__Fields fields;
};

struct GhostTimeTrackingPlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PlayCycle;
    VirtualInvokeData RecordCycle;
    VirtualInvokeData GetRecordingType;
    VirtualInvokeData OnStopRecording;
    VirtualInvokeData OnStartRecording;
};

struct GhostTimeTrackingPlugin__StaticFields {
};

struct GhostTimeTrackingPlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostTimeTrackingPlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostTimeTrackingPlugin__VTable vtable;
};

struct __declspec(align(8)) GhostTimeTrackingPlugin_Data__Fields {
    float Time;
    bool _Executed_k__BackingField;
};

struct GhostTimeTrackingPlugin_Data {
    struct GhostTimeTrackingPlugin_Data__Class *klass;
    MonitorData *monitor;
    struct GhostTimeTrackingPlugin_Data__Fields fields;
};

struct GhostTimeTrackingPlugin_Data__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData get_FrameType;
    VirtualInvokeData GetDataSize;
    VirtualInvokeData get_Executed;
    VirtualInvokeData set_Executed;
};

struct GhostTimeTrackingPlugin_Data__StaticFields {
};

struct GhostTimeTrackingPlugin_Data__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostTimeTrackingPlugin_Data__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostTimeTrackingPlugin_Data__VTable vtable;
};

struct GhostUberStatePlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
};

struct GhostUberStatePlugin {
    struct GhostUberStatePlugin__Class *klass;
    MonitorData *monitor;
    struct GhostUberStatePlugin__Fields fields;
};

struct GhostUberStatePlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PlayCycle;
    VirtualInvokeData RecordCycle;
    VirtualInvokeData GetRecordingType;
    VirtualInvokeData OnStopRecording;
    VirtualInvokeData OnStartRecording;
};

struct GhostUberStatePlugin__StaticFields {
};

struct GhostUberStatePlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostUberStatePlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostUberStatePlugin__VTable vtable;
};

struct __declspec(align(8)) GhostUberStatePlugin_UberStateData__Fields {
    struct String *AssetGuid;
    float GenericValue;
    bool _Executed_k__BackingField;
};

struct GhostUberStatePlugin_UberStateData {
    struct GhostUberStatePlugin_UberStateData__Class *klass;
    MonitorData *monitor;
    struct GhostUberStatePlugin_UberStateData__Fields fields;
};

struct GhostUberStatePlugin_UberStateData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Save;
    VirtualInvokeData Load;
    VirtualInvokeData get_FrameType;
    VirtualInvokeData GetDataSize;
    VirtualInvokeData get_Executed;
    VirtualInvokeData set_Executed;
};

struct GhostUberStatePlugin_UberStateData__StaticFields {
};

struct GhostUberStatePlugin_UberStateData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostUberStatePlugin_UberStateData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostUberStatePlugin_UberStateData__VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ *m_pendingInstantiations;
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ *TransformTrackingEntries;
    struct GlobalRecordingTable *_GlobalRecordingTable_k__BackingField;
};

struct GhostWorldObjectsLifetimePlugin {
    struct GhostWorldObjectsLifetimePlugin__Class *klass;
    MonitorData *monitor;
    struct GhostWorldObjectsLifetimePlugin__Fields fields;
};

struct __declspec(align(8)) Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Fields {
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ {
    struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Class *klass;
    MonitorData *monitor;
    struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Fields fields;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation {
    struct GameObject *Instance;
    struct GameObject *Prefab;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed {
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class *klass;
    MonitorData *monitor;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation fields;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array {
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation vector[32];
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation_ {
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int64_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    int32_t hashCode;
    int32_t next;
    int64_t key;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ fields;
};

struct __declspec(align(8)) GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields {
    struct GameObject *GameObject;
    struct GlobalRecordingTable_RecordableEntry *RecordableEntry;
    bool ForceRecordActivation;
    bool ForceRecordTransform;
    struct Vector3 LastPosition;
    struct Quaternion LastRotation;
    struct Vector3 LastScale;
    bool LastActivation;
    bool PositionChanged;
    bool RotationChanged;
    bool ScaleChanged;
    bool ActivationChanged;
    bool TrackTransformChanges;
    bool IsChildTransform;
    int32_t AmountOfRecordedPositions;
    int32_t AmountOfRecordedRotation;
    int32_t AmountOfRecordedScale;
    int32_t AmountOfRecordedActivation;
    struct TrackingExclusions Exclusions;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry {
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class *klass;
    MonitorData *monitor;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields {
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields {
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Fields fields;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array {
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry *vector[32];
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    int64_t key;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry *value;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Boxed {
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ fields;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array {
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry_ {
    struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class *klass;
    MonitorData *monitor;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__StaticFields {
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__VTable {
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__StaticFields {
};

struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin_PendingInstantiation__Array__VTable vtable;
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___StaticFields {
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___VTable vtable;
};

struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_1;
};

struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___StaticFields {
};

struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_GhostWorldObjectsLifetimePlugin_PendingInstantiation___VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__StaticFields {
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__VTable {
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__StaticFields {
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Array__VTable vtable;
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__VTable {
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__StaticFields {
};

struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable {
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

struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields {
};

struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry___VTable vtable;
};

struct GhostWorldObjectsLifetimePlugin__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PlayCycle;
    VirtualInvokeData RecordCycle;
    VirtualInvokeData GetRecordingType;
    VirtualInvokeData OnStopRecording;
    VirtualInvokeData OnStartRecording;
    VirtualInvokeData get_GlobalRecordingTable;
    VirtualInvokeData set_GlobalRecordingTable;
};

struct GhostWorldObjectsLifetimePlugin__StaticFields {
};

struct GhostWorldObjectsLifetimePlugin__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostWorldObjectsLifetimePlugin__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostWorldObjectsLifetimePlugin__VTable vtable;
};

struct ScenariosParticleSystemPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct GhostGenericEventsPlugin *m_ghostGenericEventsPlugin;
};

struct ScenariosParticleSystemPlugin {
    struct ScenariosParticleSystemPlugin__Class *klass;
    MonitorData *monitor;
    struct ScenariosParticleSystemPlugin__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_ParticleSystem_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    struct Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    int32_t hashCode;
    int32_t next;
    struct ParticleSystem *key;
    struct ScenariosParticleSystemPlugin_TrackingID *value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields {
    struct Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields {
    struct Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Fields fields;
};

struct ScenariosParticleSystemPlugin_TrackingID__Array {
    struct ScenariosParticleSystemPlugin_TrackingID__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ScenariosParticleSystemPlugin_TrackingID *vector[32];
};

struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID_ {
    struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_ScenariosParticleSystemPlugin_TrackingID_ {
    struct ICollection_1_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    struct ParticleSystem *key;
    struct ScenariosParticleSystemPlugin_TrackingID *value;
};

struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Boxed {
    struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ fields;
};

struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array {
    struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_ScenariosParticleSystemPlugin_TrackingID_ {
    struct IEnumerable_1_ScenariosParticleSystemPlugin_TrackingID___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___VTable vtable;
};

struct ScenariosParticleSystemPlugin_TrackingID__Array__VTable {
};

struct ScenariosParticleSystemPlugin_TrackingID__Array__StaticFields {
};

struct ScenariosParticleSystemPlugin_TrackingID__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenariosParticleSystemPlugin_TrackingID__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenariosParticleSystemPlugin_TrackingID__Array__VTable vtable;
};

struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___StaticFields {
};

struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ScenariosParticleSystemPlugin_TrackingID___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID___VTable {
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

}
