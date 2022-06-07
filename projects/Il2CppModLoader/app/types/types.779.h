namespace app {
struct Segment_1__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Link_ *Links;
};

struct Segment_1 {
    struct Segment_1__Class *klass;
    MonitorData *monitor;
    struct Segment_1__Fields fields;
};

struct PointSegment__Fields {
    struct Segment_1__Fields _;
    struct List_1_UnityEngine_Vector3_ *Points;
};

struct PointSegment {
    struct PointSegment__Class *klass;
    MonitorData *monitor;
    struct PointSegment__Fields fields;
};

struct GroundSegment__Fields {
    struct PointSegment__Fields _;
    float TestX;
};

struct GroundSegment {
    struct GroundSegment__Class *klass;
    MonitorData *monitor;
    struct GroundSegment__Fields fields;
};

struct __declspec(align(8)) List_1_Segment___Fields {
    struct Segment_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Segment_ {
    struct List_1_Segment___Class *klass;
    MonitorData *monitor;
    struct List_1_Segment___Fields fields;
};

struct Segment_1__Array {
    struct Segment_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Segment_1 *vector[32];
};

struct IEnumerator_1_Segment_ {
    struct IEnumerator_1_Segment___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Link___Fields {
    struct Link__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Link_ {
    struct List_1_Link___Class *klass;
    MonitorData *monitor;
    struct List_1_Link___Fields fields;
};

struct Link__Fields {
    struct MonoBehaviour__Fields _;
    struct Segment_1 *From;
    struct Segment_1 *To;
    struct Vector3 Start;
    struct Vector3 End;
};

struct Link {
    struct Link__Class *klass;
    MonitorData *monitor;
    struct Link__Fields fields;
};

struct Link__Array {
    struct Link__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Link *vector[32];
};

struct IEnumerator_1_Link_ {
    struct IEnumerator_1_Link___Class *klass;
    MonitorData *monitor;
};

struct Segment_1__Array__VTable {
};

struct Segment_1__Array__StaticFields {
};

struct Segment_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Segment_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Segment_1__Array__VTable vtable;
};

struct IEnumerator_1_Segment___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Segment___StaticFields {
};

struct IEnumerator_1_Segment___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Segment___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Segment___VTable vtable;
};

struct List_1_Segment___VTable {
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

struct List_1_Segment___StaticFields {
    struct Segment_1__Array *_emptyArray;
};

struct List_1_Segment___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Segment___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Segment___VTable vtable;
};

struct Link__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Link__StaticFields {
};

struct Link__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Link__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Link__VTable vtable;
};

struct Link__Array__VTable {
};

struct Link__Array__StaticFields {
};

struct Link__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Link__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Link__Array__VTable vtable;
};

struct IEnumerator_1_Link___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Link___StaticFields {
};

struct IEnumerator_1_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Link___VTable vtable;
};

struct List_1_Link___VTable {
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

struct List_1_Link___StaticFields {
    struct Link__Array *_emptyArray;
};

struct List_1_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Link___VTable vtable;
};

struct Segment_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct Segment_1__StaticFields {
    struct List_1_Segment_ *All;
};

struct Segment_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Segment_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Segment_1__VTable vtable;
};

struct PointSegment__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct PointSegment__StaticFields {
};

struct PointSegment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PointSegment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PointSegment__VTable vtable;
};

struct GroundSegment__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ClampPosition;
};

struct GroundSegment__StaticFields {
};

struct GroundSegment__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundSegment__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundSegment__VTable vtable;
};

struct GroundSegment_c {
    struct GroundSegment_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_UnityEngine_Vector3___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_UnityEngine_Vector3_ {
    struct Comparison_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_UnityEngine_Vector3___Fields fields;
};

struct Comparison_1_UnityEngine_Vector3___VTable {
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

struct Comparison_1_UnityEngine_Vector3___StaticFields {
};

struct Comparison_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_UnityEngine_Vector3___VTable vtable;
};

struct GroundSegment_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GroundSegment_c__StaticFields {
    struct GroundSegment_c *__9;
    struct Comparison_1_UnityEngine_Vector3_ *__9__5_0;
};

struct GroundSegment_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GroundSegment_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GroundSegment_c__VTable vtable;
};

struct FallLink__Fields {
    struct Link__Fields _;
};

struct FallLink {
    struct FallLink__Class *klass;
    MonitorData *monitor;
    struct FallLink__Fields fields;
};

struct FallLink__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FallLink__StaticFields {
};

struct FallLink__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallLink__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallLink__VTable vtable;
};

struct NodeGraphPathFinder__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_Link_Link_ *m_prev;
    struct Dictionary_2_Link_System_Single_ *m_cost;
    struct SortedList_2_System_Single_Link_ *m_open;
    struct List_1_Link_ *m_path;
};

struct NodeGraphPathFinder {
    struct NodeGraphPathFinder__Class *klass;
    MonitorData *monitor;
    struct NodeGraphPathFinder__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Link_Link___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Link_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Link_Link_ {
    struct Dictionary_2_Link_Link___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Link_Link___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link_ {
    int32_t hashCode;
    int32_t next;
    struct Link *key;
    struct Link *value;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array {
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link_ vector[32];
};

struct IEqualityComparer_1_Link_ {
    struct IEqualityComparer_1_Link___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Link_Link___Fields {
    struct Dictionary_2_Link_Link_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Link_Link___Fields {
    struct Dictionary_2_Link_Link_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___Fields fields;
};

struct ICollection_1_Link_ {
    struct ICollection_1_Link___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Link_Link_ {
    struct Link *key;
    struct Link *value;
};

struct KeyValuePair_2_Link_Link___Boxed {
    struct KeyValuePair_2_Link_Link___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Link_Link_ fields;
};

struct KeyValuePair_2_Link_Link___Array {
    struct KeyValuePair_2_Link_Link___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Link_Link_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Link_Link_ {
    struct IEnumerator_1_KeyValuePair_2_Link_Link___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Link_ {
    struct IEnumerable_1_Link___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_Link_System_Single___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Link_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_System_Single_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_System_Single_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Link_System_Single_ {
    struct Dictionary_2_Link_System_Single___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Link_System_Single___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single_ {
    int32_t hashCode;
    int32_t next;
    struct Link *key;
    float value;
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Array {
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Link_System_Single___Fields {
    struct Dictionary_2_Link_System_Single_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Link_System_Single_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_System_Single___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_System_Single___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Link_System_Single___Fields {
    struct Dictionary_2_Link_System_Single_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Link_System_Single_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_System_Single___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_System_Single___Fields fields;
};

struct KeyValuePair_2_Link_System_Single_ {
    struct Link *key;
    float value;
};

struct KeyValuePair_2_Link_System_Single___Boxed {
    struct KeyValuePair_2_Link_System_Single___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Link_System_Single_ fields;
};

struct KeyValuePair_2_Link_System_Single___Array {
    struct KeyValuePair_2_Link_System_Single___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Link_System_Single_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Link_System_Single_ {
    struct IEnumerator_1_KeyValuePair_2_Link_System_Single___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SortedList_2_System_Single_Link___Fields {
    struct Single__Array *keys;
    struct Link__Array *values;
    int32_t _size;
    int32_t version;
    struct IComparer_1_System_Single_ *comparer;
    struct SortedList_2_TKey_TValue_KeyList_System_Single_Link_ *keyList;
    struct SortedList_2_TKey_TValue_ValueList_System_Single_Link_ *valueList;
    struct Object *_syncRoot;
};

struct SortedList_2_System_Single_Link_ {
    struct SortedList_2_System_Single_Link___Class *klass;
    MonitorData *monitor;
    struct SortedList_2_System_Single_Link___Fields fields;
};

struct IComparer_1_System_Single_ {
    struct IComparer_1_System_Single___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) SortedList_2_TKey_TValue_KeyList_System_Single_Link___Fields {
    struct SortedList_2_System_Single_Link_ *_dict;
};

struct SortedList_2_TKey_TValue_KeyList_System_Single_Link_ {
    struct SortedList_2_TKey_TValue_KeyList_System_Single_Link___Class *klass;
    MonitorData *monitor;
    struct SortedList_2_TKey_TValue_KeyList_System_Single_Link___Fields fields;
};

struct __declspec(align(8)) SortedList_2_TKey_TValue_ValueList_System_Single_Link___Fields {
    struct SortedList_2_System_Single_Link_ *_dict;
};

struct SortedList_2_TKey_TValue_ValueList_System_Single_Link_ {
    struct SortedList_2_TKey_TValue_ValueList_System_Single_Link___Class *klass;
    MonitorData *monitor;
    struct SortedList_2_TKey_TValue_ValueList_System_Single_Link___Fields fields;
};

struct KeyValuePair_2_System_Single_Link_ {
    float key;
    struct Link *value;
};

struct KeyValuePair_2_System_Single_Link___Boxed {
    struct KeyValuePair_2_System_Single_Link___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Single_Link_ fields;
};

struct KeyValuePair_2_System_Single_Link___Array {
    struct KeyValuePair_2_System_Single_Link___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Single_Link_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Single_Link_ {
    struct IEnumerator_1_KeyValuePair_2_System_Single_Link___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Link_Link___Array__VTable vtable;
};

struct IEqualityComparer_1_Link___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_Link___StaticFields {
};

struct IEqualityComparer_1_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_Link___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_Link_Link___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_Link_Link___VTable vtable;
};

struct ICollection_1_Link___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Link___StaticFields {
};

struct ICollection_1_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Link___VTable vtable;
};

struct Link___VTable {
};

struct Link___StaticFields {
};

struct Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Link___VTable vtable;
};

struct KeyValuePair_2_Link_Link___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_Link_Link___StaticFields {
};

struct KeyValuePair_2_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Link_Link___VTable vtable;
};

struct KeyValuePair_2_Link_Link___Array__VTable {
};

struct KeyValuePair_2_Link_Link___Array__StaticFields {
};

struct KeyValuePair_2_Link_Link___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Link_Link___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Link_Link___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_Link_Link___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_Link_Link___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_Link_Link___VTable vtable;
};

struct IEnumerable_1_Link___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Link___StaticFields {
};

struct IEnumerable_1_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Link___VTable vtable;
};

struct Dictionary_2_Link_Link___VTable {
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

struct Dictionary_2_Link_Link___StaticFields {
};

struct Dictionary_2_Link_Link___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_Link_Link___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_Link_Link___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Link_System_Single___VTable vtable;
};

}
