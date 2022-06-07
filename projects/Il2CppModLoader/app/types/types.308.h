namespace app {
struct DataRowBuilder {
    struct DataRowBuilder__Class *klass;
    MonitorData *monitor;
    struct DataRowBuilder__Fields fields;
};

struct __declspec(align(8)) List_1_System_Data_DataView___Fields {
    struct DataView__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Data_DataView_ {
    struct List_1_System_Data_DataView___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Data_DataView___Fields fields;
};

struct DataView__Array {
    struct DataView__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DataView *vector[32];
};

struct IEnumerator_1_System_Data_DataView_ {
    struct IEnumerator_1_System_Data_DataView___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) DataViewManagerListItemTypeDescriptor__Fields {
    struct DataViewManager *_dataViewManager;
    struct PropertyDescriptorCollection *_propsCollection;
};

struct DataViewManagerListItemTypeDescriptor {
    struct DataViewManagerListItemTypeDescriptor__Class *klass;
    MonitorData *monitor;
    struct DataViewManagerListItemTypeDescriptor__Fields fields;
};

struct __declspec(align(8)) DataTableCollection__Fields {
    struct DataSet *_dataSet;
    struct ArrayList *_list;
    int32_t _defaultNameIndex;
    struct DataTable__Array *_delayedAddRangeTables;
    struct CollectionChangeEventHandler *_onCollectionChangedDelegate;
    struct CollectionChangeEventHandler *_onCollectionChangingDelegate;
    int32_t _objectID;
};

struct DataTableCollection {
    struct DataTableCollection__Class *klass;
    MonitorData *monitor;
    struct DataTableCollection__Fields fields;
};

struct DataTable__Array {
    struct DataTable__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DataTable *vector[32];
};

struct MergeFailedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct MergeFailedEventHandler {
    struct MergeFailedEventHandler__Class *klass;
    MonitorData *monitor;
    struct MergeFailedEventHandler__Fields fields;
};

struct __declspec(align(8)) MergeFailedEventArgs__Fields {
    struct DataTable *_Table_k__BackingField;
    struct String *_Conflict_k__BackingField;
};

struct MergeFailedEventArgs {
    struct MergeFailedEventArgs__Class *klass;
    MonitorData *monitor;
    struct MergeFailedEventArgs__Fields fields;
};

struct DataRowCreatedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DataRowCreatedEventHandler {
    struct DataRowCreatedEventHandler__Class *klass;
    MonitorData *monitor;
    struct DataRowCreatedEventHandler__Fields fields;
};

struct DataSetClearEventhandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct DataSetClearEventhandler {
    struct DataSetClearEventhandler__Class *klass;
    MonitorData *monitor;
    struct DataSetClearEventhandler__Fields fields;
};

enum class SchemaSerializationMode__Enum : int32_t {
    IncludeSchema = 0x00000001,
    ExcludeSchema = 0x00000002,
};

struct SchemaSerializationMode__Enum__Boxed {
    struct SchemaSerializationMode__Enum__Class *klass;
    MonitorData *monitor;
    SchemaSerializationMode__Enum value;
    
};

struct StorageType__Enum__VTable {
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

struct StorageType__Enum__StaticFields {
};

struct StorageType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StorageType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StorageType__Enum__VTable vtable;
};

struct DataSetDateTime__Enum__VTable {
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

struct DataSetDateTime__Enum__StaticFields {
};

struct DataSetDateTime__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataSetDateTime__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataSetDateTime__Enum__VTable vtable;
};

struct AggregateType__Enum__VTable {
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

struct AggregateType__Enum__StaticFields {
};

struct AggregateType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AggregateType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AggregateType__Enum__VTable vtable;
};

struct Aggregate__Enum__VTable {
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

struct Aggregate__Enum__StaticFields {
};

struct Aggregate__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Aggregate__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Aggregate__Enum__VTable vtable;
};

struct PropertyCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData get_Keys;
    VirtualInvokeData get_Values;
    VirtualInvokeData Contains;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_IsFixedSize;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData Remove;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData Clone;
    VirtualInvokeData Add_1;
    VirtualInvokeData Clear_1;
    VirtualInvokeData Clone_1;
    VirtualInvokeData Contains_1;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData ToKeyValuePairsArray;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData set_Item_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData GetHash;
    VirtualInvokeData get_IsReadOnly_1;
    VirtualInvokeData get_IsFixedSize_1;
    VirtualInvokeData get_IsSynchronized_1;
    VirtualInvokeData KeyEquals;
    VirtualInvokeData get_Keys_1;
    VirtualInvokeData get_Values_1;
    VirtualInvokeData Remove_1;
    VirtualInvokeData get_SyncRoot_1;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct PropertyCollection__StaticFields {
};

struct PropertyCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PropertyCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PropertyCollection__VTable vtable;
};

struct DataColumn__Array__VTable {
};

struct DataColumn__Array__StaticFields {
};

struct DataColumn__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataColumn__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataColumn__Array__VTable vtable;
};

struct DataKey__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataKey__StaticFields {
};

struct DataKey__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataKey__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataKey__VTable vtable;
};

struct Constraint_1__Array__VTable {
};

struct Constraint_1__Array__StaticFields {
};

struct Constraint_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Constraint_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Constraint_1__Array__VTable vtable;
};

struct ConstraintCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData get_List;
};

struct ConstraintCollection__StaticFields {
};

struct ConstraintCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConstraintCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConstraintCollection__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___VTable vtable;
};

struct IEnumerator_1_System_Data_DataColumn___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Data_DataColumn___StaticFields {
};

struct IEnumerator_1_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Data_DataColumn___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___VTable vtable;
};

struct ICollection_1_System_Data_DataColumn___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_Data_DataColumn___StaticFields {
};

struct ICollection_1_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_Data_DataColumn___VTable vtable;
};

struct DataColumn___VTable {
};

struct DataColumn___StaticFields {
};

struct DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataColumn___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields {
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Data_DataColumn___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__VTable {
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__StaticFields {
};

struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___VTable vtable;
};

struct IEnumerable_1_System_Data_DataColumn___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Data_DataColumn___StaticFields {
};

struct IEnumerable_1_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Data_DataColumn___VTable vtable;
};

struct Dictionary_2_System_String_System_Data_DataColumn___VTable {
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

struct Dictionary_2_System_String_System_Data_DataColumn___StaticFields {
};

struct Dictionary_2_System_String_System_Data_DataColumn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Data_DataColumn___VTable vtable;
};

struct DataColumnCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData GetEnumerator_1;
    VirtualInvokeData get_List;
};

struct DataColumnCollection__StaticFields {
};

struct DataColumnCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataColumnCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataColumnCollection__VTable vtable;
};

struct DataRowAction__Enum__VTable {
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

struct DataRowAction__Enum__StaticFields {
};

struct DataRowAction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataRowAction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataRowAction__Enum__VTable vtable;
};

struct DataError_ColumnError__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataError_ColumnError__StaticFields {
};

struct DataError_ColumnError__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataError_ColumnError__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataError_ColumnError__VTable vtable;
};

struct DataError_ColumnError__Array__VTable {
};

struct DataError_ColumnError__Array__StaticFields {
};

struct DataError_ColumnError__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataError_ColumnError__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataError_ColumnError__Array__VTable vtable;
};

struct DataError__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataError__StaticFields {
};

struct DataError__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataError__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataError__VTable vtable;
};

struct DataRow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DataRow__StaticFields {
    int32_t s_objectTypeCount;
};

struct DataRow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DataRow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DataRow__VTable vtable;
};

struct UniqueConstraint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConstraintName;
    VirtualInvokeData set_ConstraintName;
    VirtualInvokeData get_InCollection;
    VirtualInvokeData set_InCollection;
    VirtualInvokeData get_Table;
    VirtualInvokeData ContainsColumn;
    VirtualInvokeData CanEnableConstraint;
    VirtualInvokeData Clone;
    VirtualInvokeData Clone_1;
    VirtualInvokeData CheckCanAddToCollection;
    VirtualInvokeData CanBeRemovedFromCollection;
    VirtualInvokeData CheckConstraint;
    VirtualInvokeData CheckState;
    VirtualInvokeData get__DataSet;
    VirtualInvokeData IsConstraintViolated;
    VirtualInvokeData get_Columns;
};

struct UniqueConstraint__StaticFields {
};

struct UniqueConstraint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UniqueConstraint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UniqueConstraint__VTable vtable;
};

struct Rule__Enum__VTable {
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

struct Rule__Enum__StaticFields {
};

struct Rule__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Rule__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Rule__Enum__VTable vtable;
};

struct AcceptRejectRule__Enum__VTable {
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

struct AcceptRejectRule__Enum__StaticFields {
};

struct AcceptRejectRule__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcceptRejectRule__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcceptRejectRule__Enum__VTable vtable;
};

struct ForeignKeyConstraint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConstraintName;
    VirtualInvokeData set_ConstraintName;
    VirtualInvokeData get_InCollection;
    VirtualInvokeData set_InCollection;
    VirtualInvokeData get_Table;
    VirtualInvokeData ContainsColumn;
    VirtualInvokeData CanEnableConstraint;
    VirtualInvokeData Clone;
    VirtualInvokeData Clone_1;
    VirtualInvokeData CheckCanAddToCollection;
    VirtualInvokeData CanBeRemovedFromCollection;
    VirtualInvokeData CheckConstraint;
    VirtualInvokeData CheckState;
    VirtualInvokeData get__DataSet;
    VirtualInvokeData IsConstraintViolated;
    VirtualInvokeData get_Columns;
    VirtualInvokeData get_AcceptRejectRule;
    VirtualInvokeData set_AcceptRejectRule;
    VirtualInvokeData get_DeleteRule;
    VirtualInvokeData set_DeleteRule;
    VirtualInvokeData get_RelatedColumns;
    VirtualInvokeData get_RelatedTable;
    VirtualInvokeData get_UpdateRule;
    VirtualInvokeData set_UpdateRule;
};

struct ForeignKeyConstraint__StaticFields {
};

struct ForeignKeyConstraint__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ForeignKeyConstraint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ForeignKeyConstraint__VTable vtable;
};

struct DataRelation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ChildColumns;
    VirtualInvokeData get_ChildTable;
    VirtualInvokeData get_DataSet;
    VirtualInvokeData get_ParentColumns;
    VirtualInvokeData get_ParentTable;
    VirtualInvokeData get_RelationName;
    VirtualInvokeData get_Nested;
    VirtualInvokeData set_Nested;
    VirtualInvokeData get_ParentKeyConstraint;
    VirtualInvokeData get_ChildKeyConstraint;
};

struct DataRelation__StaticFields {
    int32_t s_objectTypeCount;
};

}
