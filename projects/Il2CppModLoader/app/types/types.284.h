namespace app {
struct TransformAnimatorSystem_RotationModification__Boxed {
    struct TransformAnimatorSystem_RotationModification__Class *klass;
    MonitorData *monitor;
    struct TransformAnimatorSystem_RotationModification fields;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ {
    struct TransformAnimatorSystem_RotationModification value;
    bool has_value;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___Boxed {
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ fields;
};

struct TransformAnimatorSystem_ScaleModification {
    struct Vector3 Value;
};

struct TransformAnimatorSystem_ScaleModification__Boxed {
    struct TransformAnimatorSystem_ScaleModification__Class *klass;
    MonitorData *monitor;
    struct TransformAnimatorSystem_ScaleModification fields;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ {
    struct TransformAnimatorSystem_ScaleModification value;
    bool has_value;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed {
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ fields;
};

struct __declspec(align(8)) TransformAnimatorSystem_ObjectState__Fields {
    struct Transform *Transform;
    struct Rigidbody *Rigidbody;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ StaticPositionModification;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ StaticRotationModification;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ StaticScaleModification;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ DynamicPositionModification;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ DynamicRotationModification;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ DynamicScaleModification;
    bool PositionChangedThisFrame;
    bool RotationChangedThisFrame;
    bool ScaleChangedThisFrame;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ m_handoverPosition;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification_ m_handoverRotation;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ m_handoverScale;
    bool m_hasValidPositionHandover;
    bool m_hasValidRotationHandover;
    bool m_hasValidScaleHandover;
};

struct TransformAnimatorSystem_ObjectState {
    struct TransformAnimatorSystem_ObjectState__Class *klass;
    MonitorData *monitor;
    struct TransformAnimatorSystem_ObjectState__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields fields;
};

struct TransformAnimatorSystem_ObjectState__Array {
    struct TransformAnimatorSystem_ObjectState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TransformAnimatorSystem_ObjectState *vector[32];
};

struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    int32_t key;
    struct TransformAnimatorSystem_ObjectState *value;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields {
    struct TransformAnimatorSystem_ObjectState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState_ {
    struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Fields fields;
};

struct TransformAnimatorSystem_PositionModification__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformAnimatorSystem_PositionModification__StaticFields {
};

struct TransformAnimatorSystem_PositionModification__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_PositionModification__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_PositionModification__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___VTable vtable;
};

struct TransformAnimatorSystem_RotationModification__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformAnimatorSystem_RotationModification__StaticFields {
};

struct TransformAnimatorSystem_RotationModification__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_RotationModification__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_RotationModification__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification___VTable vtable;
};

struct TransformAnimatorSystem_ScaleModification__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformAnimatorSystem_ScaleModification__StaticFields {
};

struct TransformAnimatorSystem_ScaleModification__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_ScaleModification__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_ScaleModification__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___VTable vtable;
};

struct TransformAnimatorSystem_ObjectState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformAnimatorSystem_ObjectState__StaticFields {
};

struct TransformAnimatorSystem_ObjectState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_ObjectState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_ObjectState__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct TransformAnimatorSystem_ObjectState__Array__VTable {
};

struct TransformAnimatorSystem_ObjectState__Array__StaticFields {
};

struct TransformAnimatorSystem_ObjectState__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_ObjectState__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_ObjectState__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct TransformAnimatorSystem_ObjectState___VTable {
};

struct TransformAnimatorSystem_ObjectState___StaticFields {
};

struct TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__VTable {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
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

struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
};

struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int32_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable {
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

struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields {
    struct TransformAnimatorSystem_ObjectState__Array *_emptyArray;
};

struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_TransformAnimatorSystem_ObjectState___VTable vtable;
};

struct TransformAnimatorSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnUpdate;
};

struct TransformAnimatorSystem__StaticFields {
    struct TransformAnimatorSystem *m_instance;
};

struct TransformAnimatorSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorSystem__VTable vtable;
};

enum class HandoverMode__Enum : int32_t {
    NoHandover = 0x00000000,
    HandoverDynamic = 0x00000001,
};

struct HandoverMode__Enum__Boxed {
    struct HandoverMode__Enum__Class *klass;
    MonitorData *monitor;
    HandoverMode__Enum value;
    
};

struct HandoverMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct HandoverMode__Enum__StaticFields {
};

struct HandoverMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HandoverMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HandoverMode__Enum__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification__1__VTable {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification__1__StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification__1__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification__1__VTable {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification__1__StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_RotationModification__1__VTable vtable;
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification__1__VTable {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification__1__StaticFields {
};

struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification__1__VTable vtable;
};

struct BigInteger_2 {
    int32_t _sign;
    struct UInt32__Array *_bits;
};

struct BigInteger_2__Boxed {
    struct BigInteger_2__Class *klass;
    MonitorData *monitor;
    struct BigInteger_2 fields;
};

struct BigInteger_2__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ToString_1;
    VirtualInvokeData CompareTo;
    VirtualInvokeData CompareTo_1;
    VirtualInvokeData Equals_1;
};

struct BigInteger_2__StaticFields {
    struct BigInteger_2 s_bnMinInt;
    struct BigInteger_2 s_bnOneInt;
    struct BigInteger_2 s_bnZeroInt;
    struct BigInteger_2 s_bnMinusOneInt;
    struct Byte__Array *s_success;
};

struct BigInteger_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BigInteger_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BigInteger_2__VTable vtable;
};

struct ReadOnlySpan_1_Byte_ {
    struct Pinnable_1_Byte_ *_pinnable;
    void *_byteOffset;
    int32_t _length;
};

struct ReadOnlySpan_1_Byte___Boxed {
    struct ReadOnlySpan_1_Byte___Class *klass;
    MonitorData *monitor;
    struct ReadOnlySpan_1_Byte_ fields;
};

struct __declspec(align(8)) Pinnable_1_Byte___Fields {
    uint8_t Data;
};

struct Pinnable_1_Byte_ {
    struct Pinnable_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Pinnable_1_Byte___Fields fields;
};

struct Pinnable_1_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Pinnable_1_Byte___StaticFields {
};

struct Pinnable_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Pinnable_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Pinnable_1_Byte___VTable vtable;
};

struct ReadOnlySpan_1_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReadOnlySpan_1_Byte___StaticFields {
};

struct ReadOnlySpan_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlySpan_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlySpan_1_Byte___VTable vtable;
};

enum class BigInteger_GetBytesMode__Enum : int32_t {
    AllocateArray = 0x00000000,
    Count = 0x00000001,
    Span = 0x00000002,
};

struct BigInteger_GetBytesMode__Enum__Boxed {
    struct BigInteger_GetBytesMode__Enum__Class *klass;
    MonitorData *monitor;
    BigInteger_GetBytesMode__Enum value;
    
};

struct Span_1_Byte_ {
    struct Pinnable_1_Byte_ *_pinnable;
    void *_byteOffset;
    int32_t _length;
};

struct Span_1_Byte___Boxed {
    struct Span_1_Byte___Class *klass;
    MonitorData *monitor;
    struct Span_1_Byte_ fields;
};

struct BigInteger_GetBytesMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct BigInteger_GetBytesMode__Enum__StaticFields {
};

struct BigInteger_GetBytesMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BigInteger_GetBytesMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BigInteger_GetBytesMode__Enum__VTable vtable;
};

struct Span_1_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Span_1_Byte___StaticFields {
};

struct Span_1_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Span_1_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Span_1_Byte___VTable vtable;
};

struct ArgumentException___VTable {
};

struct ArgumentException___StaticFields {
};

struct ArgumentException___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArgumentException___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArgumentException___VTable vtable;
};

struct ReadOnlySpan_1_Char_ {
    struct Pinnable_1_Char_ *_pinnable;
    void *_byteOffset;
    int32_t _length;
};

struct ReadOnlySpan_1_Char___Boxed {
    struct ReadOnlySpan_1_Char___Class *klass;
    MonitorData *monitor;
    struct ReadOnlySpan_1_Char_ fields;
};

struct __declspec(align(8)) Pinnable_1_Char___Fields {
    uint16_t Data;
};

struct Pinnable_1_Char_ {
    struct Pinnable_1_Char___Class *klass;
    MonitorData *monitor;
    struct Pinnable_1_Char___Fields fields;
};

struct Pinnable_1_Char___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Pinnable_1_Char___StaticFields {
};

struct Pinnable_1_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Pinnable_1_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Pinnable_1_Char___VTable vtable;
};

struct ReadOnlySpan_1_Char___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReadOnlySpan_1_Char___StaticFields {
};

struct ReadOnlySpan_1_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReadOnlySpan_1_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReadOnlySpan_1_Char___VTable vtable;
};

}
