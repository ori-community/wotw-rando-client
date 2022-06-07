namespace app {
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Fields {
    struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Fields {
    struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Fields fields;
};

struct EquipmentRadialSelection_ItemCache__Array {
    struct EquipmentRadialSelection_ItemCache__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EquipmentRadialSelection_ItemCache *vector[32];
};

struct IEnumerator_1_EquipmentRadialSelection_ItemCache_ {
    struct IEnumerator_1_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_EquipmentRadialSelection_ItemCache_ {
    struct ICollection_1_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache_ {
    EquipmentType__Enum key;
    
    struct EquipmentRadialSelection_ItemCache *value;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Boxed {
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache_ fields;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array {
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache_ {
    struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_EquipmentRadialSelection_ItemCache_ {
    struct IEnumerable_1_EquipmentRadialSelection_ItemCache___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_EquipmentType___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_EquipmentType___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_EquipmentType_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_EquipmentType_ {
    struct HashSet_1_EquipmentType___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_EquipmentType___Fields fields;
};

struct HashSet_1_T_Slot_EquipmentType_ {
    int32_t hashCode;
    int32_t next;
    EquipmentType__Enum value;
    
};

struct HashSet_1_T_Slot_EquipmentType___Boxed {
    struct HashSet_1_T_Slot_EquipmentType___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_EquipmentType_ fields;
};

struct HashSet_1_T_Slot_EquipmentType___Array {
    struct HashSet_1_T_Slot_EquipmentType___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_EquipmentType_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_CleverMenuItem_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    int32_t hashCode;
    int32_t next;
    struct CleverMenuItem *key;
    struct EquipmentRadialSelection_RadialItemVisual *value;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ fields;
};

struct __declspec(align(8)) EquipmentRadialSelection_RadialItemVisual__Fields {
    struct CleverMenuItem *m_menuItem;
    struct Transform *m_root;
    struct Renderer__Array *m_renderers;
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ *m_originalColors;
    float m_transparency;
    struct Vector2 m_center;
    struct Vector2 m_direction;
    float m_angle;
};

struct EquipmentRadialSelection_RadialItemVisual {
    struct EquipmentRadialSelection_RadialItemVisual__Class *klass;
    MonitorData *monitor;
    struct EquipmentRadialSelection_RadialItemVisual__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_Renderer_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ {
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color_ {
    int32_t hashCode;
    int32_t next;
    struct Renderer *key;
    struct Color value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___Fields {
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___Fields {
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___Fields fields;
};

struct ICollection_1_UnityEngine_Renderer_ {
    struct ICollection_1_UnityEngine_Renderer___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color_ {
    struct Renderer *key;
    struct Color value;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Boxed {
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color_ fields;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array {
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array {
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ vector[32];
};

struct IEqualityComparer_1_CleverMenuItem_ {
    struct IEqualityComparer_1_CleverMenuItem___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields {
    struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields {
    struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Fields fields;
};

struct EquipmentRadialSelection_RadialItemVisual__Array {
    struct EquipmentRadialSelection_RadialItemVisual__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EquipmentRadialSelection_RadialItemVisual *vector[32];
};

struct IEnumerator_1_EquipmentRadialSelection_RadialItemVisual_ {
    struct IEnumerator_1_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_CleverMenuItem_ {
    struct ICollection_1_CleverMenuItem___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_EquipmentRadialSelection_RadialItemVisual_ {
    struct ICollection_1_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    struct CleverMenuItem *key;
    struct EquipmentRadialSelection_RadialItemVisual *value;
};

struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Boxed {
    struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ fields;
};

struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array {
    struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual_ {
    struct IEnumerator_1_KeyValuePair_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_CleverMenuItem_ {
    struct IEnumerable_1_CleverMenuItem___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_EquipmentRadialSelection_RadialItemVisual_ {
    struct IEnumerable_1_EquipmentRadialSelection_RadialItemVisual___Class *klass;
    MonitorData *monitor;
};

struct EquipmentRadialSelection_ItemCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EquipmentRadialSelection_ItemCache__StaticFields {
};

struct EquipmentRadialSelection_ItemCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EquipmentRadialSelection_ItemCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EquipmentRadialSelection_ItemCache__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_EquipmentType_EquipmentRadialSelection_ItemCache___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct EquipmentRadialSelection_ItemCache__Array__VTable {
};

struct EquipmentRadialSelection_ItemCache__Array__StaticFields {
};

struct EquipmentRadialSelection_ItemCache__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EquipmentRadialSelection_ItemCache__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EquipmentRadialSelection_ItemCache__Array__VTable vtable;
};

struct IEnumerator_1_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct IEnumerator_1_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct ICollection_1_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct ICollection_1_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct EquipmentRadialSelection_ItemCache___VTable {
};

struct EquipmentRadialSelection_ItemCache___StaticFields {
};

struct EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__VTable {
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__StaticFields {
};

struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct IEnumerable_1_EquipmentRadialSelection_ItemCache___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct IEnumerable_1_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable {
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

struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields {
};

struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_EquipmentType_EquipmentRadialSelection_ItemCache___VTable vtable;
};

struct HashSet_1_T_Slot_EquipmentType___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HashSet_1_T_Slot_EquipmentType___StaticFields {
};

struct HashSet_1_T_Slot_EquipmentType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_EquipmentType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_EquipmentType___VTable vtable;
};

struct HashSet_1_T_Slot_EquipmentType___Array__VTable {
};

struct HashSet_1_T_Slot_EquipmentType___Array__StaticFields {
};

struct HashSet_1_T_Slot_EquipmentType___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_EquipmentType___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_EquipmentType___Array__VTable vtable;
};

struct HashSet_1_EquipmentType___VTable {
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

struct HashSet_1_EquipmentType___StaticFields {
};

struct HashSet_1_EquipmentType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_EquipmentType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_EquipmentType___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Renderer_UnityEngine_Color___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct ICollection_1_UnityEngine_Renderer___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UnityEngine_Renderer___StaticFields {
};

struct ICollection_1_UnityEngine_Renderer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UnityEngine_Renderer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UnityEngine_Renderer___VTable vtable;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__VTable {
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__StaticFields {
};

struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___VTable {
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

struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields {
};

struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color___VTable vtable;
};

struct EquipmentRadialSelection_RadialItemVisual__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EquipmentRadialSelection_RadialItemVisual__StaticFields {
    float s_lerpSpeed;
};

struct EquipmentRadialSelection_RadialItemVisual__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EquipmentRadialSelection_RadialItemVisual__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EquipmentRadialSelection_RadialItemVisual__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__VTable vtable;
};

}
