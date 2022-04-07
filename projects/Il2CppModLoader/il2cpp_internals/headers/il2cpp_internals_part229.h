namespace app {
struct RBTree_1_K_TreePage_DataRow_ {
  struct RBTree_1_K_TreePage_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_TreePage_DataRow___Fields fields;
};
struct RBTree_1_K_TreePage_DataRow___Array {
  struct RBTree_1_K_TreePage_DataRow___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_TreePage_DataRow_ * vector[32];
};
struct RBTree_1_K_Node_DataRow_ {
  int32_t _selfId;
  int32_t _leftId;
  int32_t _rightId;
  int32_t _parentId;
  int32_t _nextId;
  int32_t _subTreeSize;
  struct DataRow * _keyOfNode;
  struct RBTree_1_K_NodeColor_DataRow_ * _nodeColor;
};
struct RBTree_1_K_Node_DataRow___Boxed {
  struct RBTree_1_K_Node_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_Node_DataRow_ fields;
};
struct RBTree_1_K_Node_DataRow___Array {
  struct RBTree_1_K_Node_DataRow___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_Node_DataRow_ vector[32];
};
struct __declspec(align(8)) RBTree_1_K_NodeColor_DataRow___Fields {
  int32_t value__;
};
struct RBTree_1_K_NodeColor_DataRow_ {
  struct RBTree_1_K_NodeColor_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_NodeColor_DataRow___Fields fields;
};
struct __declspec(align(8)) DataRelationCollection__Fields {
  struct DataRelation * _inTransition;
  int32_t _defaultNameIndex;
  struct CollectionChangeEventHandler * _onCollectionChangedDelegate;
  struct CollectionChangeEventHandler * _onCollectionChangingDelegate;
  int32_t _objectID;
};
struct DataRelationCollection {
  struct DataRelationCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataRelationCollection__Fields fields;
};
struct DataRelationCollection_DataTableRelationCollection__Fields {
  struct DataRelationCollection__Fields _;
  struct DataTable * _table;
  struct ArrayList * _relations;
  bool _fParentCollection;
  struct CollectionChangeEventHandler * RelationPropertyChanged;
};
struct DataRelationCollection_DataTableRelationCollection {
  struct DataRelationCollection_DataTableRelationCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataRelationCollection_DataTableRelationCollection__Fields fields;
};
struct __declspec(align(8)) RecordManager__Fields {
  struct DataTable * _table;
  int32_t _lastFreeRecord;
  int32_t _minimumCapacity;
  int32_t _recordCapacity;
  struct List_1_System_Int32_ * _freeRecordList;
  struct DataRow__Array * _rows;
};
struct RecordManager {
  struct RecordManager__Class *klass;
  struct MonitorData *monitor;
  struct RecordManager__Fields fields;
};
struct __declspec(align(8)) List_1_System_Data_Index___Fields {
  struct Index__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_Index_ {
  struct List_1_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_Index___Fields fields;
};
struct DataRelation__Array {
  struct DataRelation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataRelation * vector[32];
};
struct DataRowChangeEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataRowChangeEventHandler {
  struct DataRowChangeEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DataRowChangeEventHandler__Fields fields;
};
struct __declspec(align(8)) DataRowChangeEventArgs__Fields {
  struct DataRow * _Row_k__BackingField;
  enum DataRowAction__Enum _Action_k__BackingField;
};
struct DataRowChangeEventArgs {
  struct DataRowChangeEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DataRowChangeEventArgs__Fields fields;
};
struct DataColumnChangeEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataColumnChangeEventHandler {
  struct DataColumnChangeEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DataColumnChangeEventHandler__Fields fields;
};
struct __declspec(align(8)) DataColumnChangeEventArgs__Fields {
  struct DataColumn * _column;
  struct DataRow * _Row_k__BackingField;
  struct Object * _ProposedValue_k__BackingField;
};
struct DataColumnChangeEventArgs {
  struct DataColumnChangeEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DataColumnChangeEventArgs__Fields fields;
};
struct DataTableClearEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataTableClearEventHandler {
  struct DataTableClearEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DataTableClearEventHandler__Fields fields;
};
struct __declspec(align(8)) DataTableClearEventArgs__Fields {
  struct DataTable * _Table_k__BackingField;
};
struct DataTableClearEventArgs {
  struct DataTableClearEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DataTableClearEventArgs__Fields fields;
};
struct DataTableNewRowEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataTableNewRowEventHandler {
  struct DataTableNewRowEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DataTableNewRowEventHandler__Fields fields;
};
struct __declspec(align(8)) DataTableNewRowEventArgs__Fields {
  struct DataRow * _Row_k__BackingField;
};
struct DataTableNewRowEventArgs {
  struct DataTableNewRowEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DataTableNewRowEventArgs__Fields fields;
};
struct __declspec(align(8)) DataRowBuilder__Fields {
  struct DataTable * _table;
  int32_t _record;
};
struct DataRowBuilder {
  struct DataRowBuilder__Class *klass;
  struct MonitorData *monitor;
  struct DataRowBuilder__Fields fields;
};
struct __declspec(align(8)) List_1_System_Data_DataView___Fields {
  struct DataView__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataView_ {
  struct List_1_System_Data_DataView___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataView___Fields fields;
};
struct DataView__Array {
  struct DataView__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataView * vector[32];
};
struct IEnumerator_1_System_Data_DataView_ {
  struct IEnumerator_1_System_Data_DataView___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DataViewManagerListItemTypeDescriptor__Fields {
  struct DataViewManager * _dataViewManager;
  struct PropertyDescriptorCollection * _propsCollection;
};
struct DataViewManagerListItemTypeDescriptor {
  struct DataViewManagerListItemTypeDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct DataViewManagerListItemTypeDescriptor__Fields fields;
};
struct __declspec(align(8)) DataTableCollection__Fields {
  struct DataSet * _dataSet;
  struct ArrayList * _list;
  int32_t _defaultNameIndex;
  struct DataTable__Array * _delayedAddRangeTables;
  struct CollectionChangeEventHandler * _onCollectionChangedDelegate;
  struct CollectionChangeEventHandler * _onCollectionChangingDelegate;
  int32_t _objectID;
};
struct DataTableCollection {
  struct DataTableCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataTableCollection__Fields fields;
};
struct DataTable__Array {
  struct DataTable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataTable * vector[32];
};
struct MergeFailedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct MergeFailedEventHandler {
  struct MergeFailedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct MergeFailedEventHandler__Fields fields;
};
struct __declspec(align(8)) MergeFailedEventArgs__Fields {
  struct DataTable * _Table_k__BackingField;
  struct String * _Conflict_k__BackingField;
};
struct MergeFailedEventArgs {
  struct MergeFailedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct MergeFailedEventArgs__Fields fields;
};
struct DataRowCreatedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataRowCreatedEventHandler {
  struct DataRowCreatedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DataRowCreatedEventHandler__Fields fields;
};
struct DataSetClearEventhandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DataSetClearEventhandler {
  struct DataSetClearEventhandler__Class *klass;
  struct MonitorData *monitor;
  struct DataSetClearEventhandler__Fields fields;
};
enum SchemaSerializationMode__Enum : int32_t {
  SchemaSerializationMode__Enum_IncludeSchema = 1,
  SchemaSerializationMode__Enum_ExcludeSchema = 2,
};
struct SchemaSerializationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaSerializationMode__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyCollection__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataKey__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___VTable vtable;
};
struct IEnumerator_1_System_Data_DataColumn___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Data_DataColumn___StaticFields {
};
struct IEnumerator_1_System_Data_DataColumn___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Data_DataColumn___VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Data_DataColumn___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___VTable vtable;
};
struct IEnumerable_1_System_Data_DataColumn___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Data_DataColumn___StaticFields {
};
struct IEnumerable_1_System_Data_DataColumn___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataColumnCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataColumnCollection__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataError_ColumnError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataError_ColumnError__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataRow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UniqueConstraint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UniqueConstraint__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForeignKeyConstraint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
struct DataRelation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataRelation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataRelation__VTable vtable;
};
struct List_1_System_Data_DataColumn___VTable {
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
struct List_1_System_Data_DataColumn___StaticFields {
  struct DataColumn__Array * _emptyArray;
};
struct List_1_System_Data_DataColumn___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Data_DataColumn___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Data_DataColumn___VTable vtable;
};
struct AggregateNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsSqlColumn;
  VirtualInvokeData Bind;
  VirtualInvokeData Eval;
  VirtualInvokeData Eval_1;
  VirtualInvokeData Eval_2;
  VirtualInvokeData IsConstant;
  VirtualInvokeData IsTableConstant;
  VirtualInvokeData HasLocalAggregate;
  VirtualInvokeData HasRemoteAggregate;
  VirtualInvokeData Optimize;
  VirtualInvokeData DependsOn;
};
struct AggregateNode__StaticFields {
};
struct AggregateNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AggregateNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AggregateNode__VTable vtable;
};
struct ExpressionNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsSqlColumn;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData DependsOn;
};
struct ExpressionNode__StaticFields {
};
struct ExpressionNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExpressionNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExpressionNode__VTable vtable;
};
struct DataExpression__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Invoke;
};
struct DataExpression__StaticFields {
};
struct DataExpression__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataExpression__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataExpression__VTable vtable;
};
struct Tuple_4_Boolean_Boolean_Boolean_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
  VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
  VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData System_ITupleInternal_ToString;
};
struct Tuple_4_Boolean_Boolean_Boolean_Boolean___StaticFields {
};
struct Tuple_4_Boolean_Boolean_Boolean_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean___VTable vtable;
};
struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___VTable {
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
struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___StaticFields {
};
struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___VTable vtable;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___StaticFields {
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___VTable vtable;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___StaticFields {
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___VTable vtable;
};
struct ICollection_1_System_Tuple_4___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Tuple_4___StaticFields {
};
struct ICollection_1_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Tuple_4___VTable vtable;
};
struct KeyValuePair_2_System_Type_System_Tuple_4___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Type_System_Tuple_4___StaticFields {
};
struct KeyValuePair_2_System_Type_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Type_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Type_System_Tuple_4___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___VTable vtable;
};
struct IEnumerable_1_System_Tuple_4___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Tuple_4___StaticFields {
};
struct IEnumerable_1_System_Tuple_4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Tuple_4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Tuple_4___VTable vtable;
};}