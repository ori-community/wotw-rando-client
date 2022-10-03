namespace app {
    struct ColorAnimator__StaticFields {
    };

    struct ColorAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimator__VTable vtable;
    };

    struct ColorAnimatorSystem__Fields {
        struct MonoBehaviour__Fields _;
        bool _IsRunning_k__BackingField;
        struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState_* m_statePool;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array* m_colorTrackingDatas;
        struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState_* m_rendererStates;
    };

    struct ColorAnimatorSystem {
        struct ColorAnimatorSystem__Class* klass;
        MonitorData* monitor;
        struct ColorAnimatorSystem__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
        struct ColorAnimatorSystem_RendererState__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
    };

    struct __declspec(align(8)) ColorAnimatorSystem_RendererState__Fields {
        UberShaderProperty_Color__Enum ColorProperty;

        int32_t InstanceID;
        struct Renderer* Renderer;
        struct Color OriginalColor;
        struct List_1_UnityEngine_Color_* Requests;
    };

    struct ColorAnimatorSystem_RendererState {
        struct ColorAnimatorSystem_RendererState__Class* klass;
        MonitorData* monitor;
        struct ColorAnimatorSystem_RendererState__Fields fields;
    };

    struct ColorAnimatorSystem_RendererState__Array {
        struct ColorAnimatorSystem_RendererState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ColorAnimatorSystem_RendererState* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct ColorAnimatorSystem_RendererState* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
    };

    struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        int32_t key;
        struct ColorAnimatorSystem_RendererState* value;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Boxed {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ fields;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array {
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState_* vector[32];
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields {
        struct ColorAnimatorSystem_RendererState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState_ {
        struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Fields fields;
    };

    struct ColorAnimatorSystem_RendererState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ColorAnimatorSystem_RendererState__StaticFields {
    };

    struct ColorAnimatorSystem_RendererState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimatorSystem_RendererState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimatorSystem_RendererState__VTable vtable;
    };

    struct ColorAnimatorSystem_RendererState__Array__VTable {
    };

    struct ColorAnimatorSystem_RendererState__Array__StaticFields {
    };

    struct ColorAnimatorSystem_RendererState__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimatorSystem_RendererState__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimatorSystem_RendererState__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
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

    struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct ColorAnimatorSystem_RendererState___VTable {
    };

    struct ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
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

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_Moon_Timeline_ColorAnimatorSystem_RendererState___Array__VTable vtable;
    };

    struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable {
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

    struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields {
        struct ColorAnimatorSystem_RendererState__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_ColorAnimatorSystem_RendererState___VTable vtable;
    };

    struct ColorAnimatorSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct ColorAnimatorSystem__StaticFields {
        struct ColorAnimatorSystem* s_instance;
    };

    struct ColorAnimatorSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimatorSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimatorSystem__VTable vtable;
    };

    struct ColorTweenAnimator__Fields {
        struct TimelineEntity__Fields _;
        struct MoonReference_1_UnityEngine_GameObject_* Target;
        ColorAnimator_ColorType__Enum ColorProperty;

        struct MoonColor* StartColor;
        struct MoonColor* EndColor;
        struct MoonFloat* Speed;
        struct Color m_currentStartColor;
        struct Color m_currentEndColor;
        bool m_hasStarted;
        bool m_isFinished;
        struct MoveTowardsColorTweenable* m_tweener;
        struct Renderer* m_renderer;
    };

    struct ColorTweenAnimator {
        struct ColorTweenAnimator__Class* klass;
        MonitorData* monitor;
        struct ColorTweenAnimator__Fields fields;
    };

    struct ColorTweenAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData HasFinished;
        VirtualInvokeData GetGameObjectTarget;
        VirtualInvokeData get_ExternalTarget;
        VirtualInvokeData OnEntityCreated;
    };

    struct ColorTweenAnimator__StaticFields {
    };

    struct ColorTweenAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorTweenAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorTweenAnimator__VTable vtable;
    };

    struct CreateCheckpointEntity__Fields {
        struct TimelineEntity__Fields _;
        struct CheckpointFunctionality Checkpoint;
    };

    struct CreateCheckpointEntity {
        struct CreateCheckpointEntity__Class* klass;
        MonitorData* monitor;
        struct CreateCheckpointEntity__Fields fields;
    };

    struct CreateCheckpointEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
    };

    struct CreateCheckpointEntity__StaticFields {
    };

    struct CreateCheckpointEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CreateCheckpointEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CreateCheckpointEntity__VTable vtable;
    };

    enum class PrefabReferenceType__Enum : int32_t {
        Prefab = 0x00000000,
        MoonEffect = 0x00000001,
    };

    struct PrefabReferenceType__Enum__Boxed {
        struct PrefabReferenceType__Enum__Class* klass;
        MonitorData* monitor;
        PrefabReferenceType__Enum value;
    };

    struct InstantiateAnimator__Fields {
        struct TimelineEntity__Fields _;
        PrefabReferenceType__Enum PrefabType;

        struct MoonReference_1_UnityEngine_GameObject_* Prefab;
        struct MoonEffectWispsRoot* MoonEffect;
        int32_t PrewarmAmount;
        struct MoonReference_1_UnityEngine_Transform_* InstantiationLocation;
        struct Vector3 InstantiationPosition;
        struct MoonBool* ShouldMirror;
        bool FollowLocationTransform;
        bool UseConstant;
        bool ApplyRotation;
        bool ProjectOnGround;
        bool ProjectYOnly;
    };

    struct InstantiateAnimator {
        struct InstantiateAnimator__Class* klass;
        MonitorData* monitor;
        struct InstantiateAnimator__Fields fields;
    };

    struct DamageDealerInstantiateAnimator__Fields {
        struct InstantiateAnimator__Fields _;
        struct Transform* DamagePositionCenter;
        struct Transform* Parent;
        struct MoonBool* Active;
        bool OverrideDamageAmount;
        struct MoonFloat* DamageAmount;
    };

    struct DamageDealerInstantiateAnimator {
        struct DamageDealerInstantiateAnimator__Class* klass;
        MonitorData* monitor;
        struct DamageDealerInstantiateAnimator__Fields fields;
    };

    struct PrefabReferenceType__Enum__VTable {
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

    struct PrefabReferenceType__Enum__StaticFields {
    };

    struct PrefabReferenceType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrefabReferenceType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrefabReferenceType__Enum__VTable vtable;
    };

    struct InstantiateAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData OnEntityCreated;
    };

    struct InstantiateAnimator__StaticFields {
    };

    struct InstantiateAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstantiateAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstantiateAnimator__VTable vtable;
    };

    struct DamageDealerInstantiateAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData OnEntityCreated;
    };

    struct DamageDealerInstantiateAnimator__StaticFields {
    };

    struct DamageDealerInstantiateAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageDealerInstantiateAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageDealerInstantiateAnimator__VTable vtable;
    };

    enum class DiscoverAreasEntity_State__Enum : int32_t {
        Start = 0x00000000,
        Reveal = 0x00000001,
        Move = 0x00000002,
        Fade = 0x00000003,
        WaitForInput = 0x00000004,
    };

    struct DiscoverAreasEntity_State__Enum__Boxed {
        struct DiscoverAreasEntity_State__Enum__Class* klass;
        MonitorData* monitor;
        DiscoverAreasEntity_State__Enum value;
    };

    struct DiscoverAreasEntity__Fields {
        struct TimelineEntity__Fields _;
        struct SoundProvider* RevealSound;
        struct Transform* RevealPosition;
        DiscoverAreasEntity_State__Enum m_currentState;

        bool m_canFinish;
        float m_timer;
        struct AreaMapCanvas* m_canvas;
        float WaitTime;
        float MoveTime;
        float FadeDuration;
        float FreeInputTime;
        struct Vector2 m_playerMapPoition;
        struct Vector2 m_targetMapPosition;
        bool Pause;
        bool UseExperience;
        float m_initialZoom;
        float m_targetZoom;
        struct SpellUIExperience* m_experience;
    };

} // namespace app
