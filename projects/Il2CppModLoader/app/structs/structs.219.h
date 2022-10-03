namespace app {
    struct List_1_System_Action___StaticFields {
        struct Action__Array* _emptyArray;
    };

    struct List_1_System_Action___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Action___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Action___VTable vtable;
    };

    struct DelayedLog__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DelayedLog__StaticFields {
        int32_t DelayedLogCount;
        struct List_1_System_Action_* m_delayedDebugLogs;
    };

    struct DelayedLog__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DelayedLog__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DelayedLog__VTable vtable;
    };

    struct GameObjectDataProvider__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
    };

    struct GameObjectDataProvider {
        struct GameObjectDataProvider__Class* klass;
        MonitorData* monitor;
        struct GameObjectDataProvider__Fields fields;
    };

    struct __declspec(align(8)) DynamicDataResolver__Fields {
        struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* SerializedDataItems;
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_* DataLinks;
    };

    struct DynamicDataResolver {
        struct DynamicDataResolver__Class* klass;
        MonitorData* monitor;
        struct DynamicDataResolver__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Fields {
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
        struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Fields fields;
    };

    enum class DynamicDataLinkUtils_DataTargetMemberType__Enum : int32_t {
        Property = 0x00000000,
        Method = 0x00000001,
    };

    struct DynamicDataLinkUtils_DataTargetMemberType__Enum__Boxed {
        struct DynamicDataLinkUtils_DataTargetMemberType__Enum__Class* klass;
        MonitorData* monitor;
        DynamicDataLinkUtils_DataTargetMemberType__Enum value;
    };

    struct DynamicDataLinkSerializedData {
        struct Object_1* TargetObject;
        struct String* MemberName;
        struct String* ParameterName;
        DynamicDataLinkUtils_DataTargetMemberType__Enum TargetMemberType;

        int32_t ClassID;
        int32_t FieldID;
    };

    struct DynamicDataLinkSerializedData__Boxed {
        struct DynamicDataLinkSerializedData__Class* klass;
        MonitorData* monitor;
        struct DynamicDataLinkSerializedData fields;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem {
        int32_t Guid;
        struct DynamicDataLinkSerializedData DataLinkItem;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Boxed {
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Class* klass;
        MonitorData* monitor;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem fields;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array {
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem vector[32];
    };

    struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
        struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct IRuntimeDynamicDataLink* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink_ fields;
    };

    struct IRuntimeDynamicDataLink {
        struct IRuntimeDynamicDataLink__Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Fields {
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Fields {
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Fields fields;
    };

    struct IRuntimeDynamicDataLink__Array {
        struct IRuntimeDynamicDataLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IRuntimeDynamicDataLink* vector[32];
    };

    struct IEnumerator_1_Moon_IRuntimeDynamicDataLink_ {
        struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_IRuntimeDynamicDataLink_ {
        struct ICollection_1_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        int32_t key;
        struct IRuntimeDynamicDataLink* value;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Boxed {
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink_ fields;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array {
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_IRuntimeDynamicDataLink_ {
        struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___Class* klass;
        MonitorData* monitor;
    };

    struct DynamicDataLinkUtils_DataTargetMemberType__Enum__VTable {
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

    struct DynamicDataLinkUtils_DataTargetMemberType__Enum__StaticFields {
    };

    struct DynamicDataLinkUtils_DataTargetMemberType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicDataLinkUtils_DataTargetMemberType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicDataLinkUtils_DataTargetMemberType__Enum__VTable vtable;
    };

    struct DynamicDataLinkSerializedData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicDataLinkSerializedData__StaticFields {
    };

    struct DynamicDataLinkSerializedData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicDataLinkSerializedData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicDataLinkSerializedData__VTable vtable;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__StaticFields {
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__VTable vtable;
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__VTable {
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__StaticFields {
    };

    struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___StaticFields {
    };

    struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___VTable vtable;
    };

    struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___VTable {
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

    struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___StaticFields {
        struct DynamicDataResolver_SerializedDynamicDataLinkItem__Array* _emptyArray;
    };

    struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___VTable vtable;
    };

    struct IRuntimeDynamicDataLink__VTable {
        VirtualInvokeData get_TargetObject;
        VirtualInvokeData get_TargetMemberInfo;
        VirtualInvokeData get_ReturnedValueType;
        VirtualInvokeData get_IsValid;
        VirtualInvokeData GetSerializedData;
        VirtualInvokeData Init;
        VirtualInvokeData IsLinkForObjectAndMemberInfoCombo;
    };

    struct IRuntimeDynamicDataLink__StaticFields {
    };

    struct IRuntimeDynamicDataLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRuntimeDynamicDataLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRuntimeDynamicDataLink__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IRuntimeDynamicDataLink___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct IRuntimeDynamicDataLink__Array__VTable {
    };

    struct IRuntimeDynamicDataLink__Array__StaticFields {
    };

    struct IRuntimeDynamicDataLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRuntimeDynamicDataLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRuntimeDynamicDataLink__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct ICollection_1_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct ICollection_1_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct IRuntimeDynamicDataLink___VTable {
    };

    struct IRuntimeDynamicDataLink___StaticFields {
    };

    struct IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IRuntimeDynamicDataLink___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__VTable {
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable {
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

    struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields {
    };

    struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_Moon_IRuntimeDynamicDataLink___VTable vtable;
    };

    struct DynamicDataResolver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ResolveSource;
        VirtualInvokeData CanResolveSource;
        VirtualInvokeData IsMoonTypeProxy;
        VirtualInvokeData GetProxyType;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct DynamicDataResolver__StaticFields {
    };

    struct DynamicDataResolver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicDataResolver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicDataResolver__VTable vtable;
    };

    struct GameObjectDataProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
    };

    struct GameObjectDataProvider__StaticFields {
    };

    struct GameObjectDataProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameObjectDataProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameObjectDataProvider__VTable vtable;
    };

    struct MoonTypeCrossSceneTest__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_UnityEngine_SpriteRenderer_* TestSprite;
        struct MoonInt* TestInt;
        struct MoonReference_1_ITestInterface_* TestInterfaceImplimentor;
    };

    struct MoonTypeCrossSceneTest {
        struct MoonTypeCrossSceneTest__Class* klass;
        MonitorData* monitor;
        struct MoonTypeCrossSceneTest__Fields fields;
    };

    struct MoonTypeExtraData {
        int32_t IntExtraData;
    };

    struct MoonTypeExtraData__Boxed {
        struct MoonTypeExtraData__Class* klass;
        MonitorData* monitor;
        struct MoonTypeExtraData fields;
    };

    struct MoonTypeData {
        struct Object_1* UnityObjectRef;
        struct MoonTypeExtraData ExtraData;
    };

    struct MoonTypeData__Boxed {
        struct MoonTypeData__Class* klass;
        MonitorData* monitor;
        struct MoonTypeData fields;
    };

    struct __declspec(align(8)) MoonReference_1_UnityEngine_SpriteRenderer___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_UnityEngine_SpriteRenderer_* m_cachedProxyType;
        struct SpriteRenderer* m_volatileValue;
    };

    struct MoonReference_1_UnityEngine_SpriteRenderer_ {
        struct MoonReference_1_UnityEngine_SpriteRenderer___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_UnityEngine_SpriteRenderer___Fields fields;
    };

    struct IMoonTypeResolver {
        struct IMoonTypeResolver__Class* klass;
        MonitorData* monitor;
    };

    struct IMoonType_1_UnityEngine_SpriteRenderer_ {
        struct IMoonType_1_UnityEngine_SpriteRenderer___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonResolverContext {
        struct IMoonResolverContext__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MoonInt__Fields {
        int32_t m_staticValue;
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_System_Int32_* m_cachedProxyType;
    };

    struct MoonInt {
        struct MoonInt__Class* klass;
        MonitorData* monitor;
        struct MoonInt__Fields fields;
    };

    struct IMoonType_1_System_Int32_ {
        struct IMoonType_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MoonReference_1_ITestInterface___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_ITestInterface_* m_cachedProxyType;
        struct ITestInterface* m_volatileValue;
    };

    struct MoonReference_1_ITestInterface_ {
        struct MoonReference_1_ITestInterface___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_ITestInterface___Fields fields;
    };

    struct IMoonType_1_ITestInterface_ {
        struct IMoonType_1_ITestInterface___Class* klass;
        MonitorData* monitor;
    };

    struct ITestInterface {
        struct ITestInterface__Class* klass;
        MonitorData* monitor;
    };

    struct MoonTypeExtraData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTypeExtraData__StaticFields {
    };

    struct MoonTypeExtraData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTypeExtraData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTypeExtraData__VTable vtable;
    };

    struct MoonTypeData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoonTypeData__StaticFields {
    };

    struct MoonTypeData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTypeData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTypeData__VTable vtable;
    };

    struct IMoonTypeResolver__VTable {
        VirtualInvokeData ResolveSource;
        VirtualInvokeData CanResolveSource;
        VirtualInvokeData IsMoonTypeProxy;
        VirtualInvokeData GetProxyType;
    };

    struct IMoonTypeResolver__StaticFields {
    };

    struct IMoonTypeResolver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonTypeResolver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonTypeResolver__VTable vtable;
    };

    struct IMoonType_1_UnityEngine_SpriteRenderer___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_UnityEngine_SpriteRenderer___StaticFields {
    };

    struct IMoonType_1_UnityEngine_SpriteRenderer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_UnityEngine_SpriteRenderer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_UnityEngine_SpriteRenderer___VTable vtable;
    };

    struct IMoonResolverContext__VTable {
    };

    struct IMoonResolverContext__StaticFields {
    };

    struct IMoonResolverContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonResolverContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonResolverContext__VTable vtable;
    };

    struct SpriteRenderer___VTable {
    };

    struct SpriteRenderer___StaticFields {
    };

    struct SpriteRenderer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpriteRenderer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpriteRenderer___VTable vtable;
    };

    struct MoonReference_1_UnityEngine_SpriteRenderer___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_UnityEngine_SpriteRenderer___StaticFields {
    };

    struct MoonReference_1_UnityEngine_SpriteRenderer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_UnityEngine_SpriteRenderer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_UnityEngine_SpriteRenderer___VTable vtable;
    };

    struct IMoonType_1_System_Int32___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

} // namespace app
