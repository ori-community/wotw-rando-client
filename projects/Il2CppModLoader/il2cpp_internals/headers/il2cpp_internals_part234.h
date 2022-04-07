namespace app {
struct PrimaryKeyTypeConverter__StaticFields {
};
struct PrimaryKeyTypeConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PrimaryKeyTypeConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PrimaryKeyTypeConverter__VTable vtable;
};

struct Range {
  int32_t _min;
  int32_t _max;
  bool _isNotNull;
};
struct Range__Boxed {
  struct Range__Class *klass;
  struct MonitorData *monitor;
  struct Range fields;
};
struct Range__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Range__StaticFields {
};
struct Range__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Range__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Range__VTable vtable;
};

struct Nullable_1_System_Data_DataKey_ {
  struct DataKey value;
  bool has_value;
};
struct Nullable_1_System_Data_DataKey___Boxed {
  struct Nullable_1_System_Data_DataKey___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_System_Data_DataKey_ fields;
};
struct RelatedView__Fields {
  struct DataView__Fields _;
  struct Nullable_1_System_Data_DataKey_ _parentKey;
  struct DataKey _childKey;
  struct DataRowView * _parentRowView;
  struct Object__Array * _filterValues;
};
struct RelatedView {
  struct RelatedView__Class *klass;
  struct MonitorData *monitor;
  struct RelatedView__Fields fields;
};
struct Nullable_1_System_Data_DataKey___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_System_Data_DataKey___StaticFields {
};
struct Nullable_1_System_Data_DataKey___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_System_Data_DataKey___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_System_Data_DataKey___VTable vtable;
};
struct RelatedView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData GetService;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_Container;
  VirtualInvokeData GetService_1;
  VirtualInvokeData get_DesignMode;
  VirtualInvokeData System_ComponentModel_IBindingListView_ApplySort;
  VirtualInvokeData System_ComponentModel_IBindingListView_get_Filter;
  VirtualInvokeData System_ComponentModel_IBindingListView_set_Filter;
  VirtualInvokeData System_ComponentModel_IBindingListView_get_SortDescriptions;
  VirtualInvokeData System_ComponentModel_IBindingListView_RemoveFilter;
  VirtualInvokeData System_ComponentModel_IBindingListView_get_SupportsAdvancedSorting;
  VirtualInvokeData System_ComponentModel_IBindingListView_get_SupportsFiltering;
  VirtualInvokeData System_ComponentModel_IBindingList_get_AllowNew;
  VirtualInvokeData System_ComponentModel_IBindingList_AddNew;
  VirtualInvokeData System_ComponentModel_IBindingList_get_AllowEdit;
  VirtualInvokeData System_ComponentModel_IBindingList_get_AllowRemove;
  VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsChangeNotification;
  VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsSearching;
  VirtualInvokeData System_ComponentModel_IBindingList_get_SupportsSorting;
  VirtualInvokeData System_ComponentModel_IBindingList_get_IsSorted;
  VirtualInvokeData System_ComponentModel_IBindingList_get_SortProperty;
  VirtualInvokeData System_ComponentModel_IBindingList_get_SortDirection;
  VirtualInvokeData add_ListChanged;
  VirtualInvokeData remove_ListChanged;
  VirtualInvokeData System_ComponentModel_IBindingList_AddIndex;
  VirtualInvokeData System_ComponentModel_IBindingList_ApplySort;
  VirtualInvokeData System_ComponentModel_IBindingList_Find;
  VirtualInvokeData System_ComponentModel_IBindingList_RemoveIndex;
  VirtualInvokeData System_ComponentModel_IBindingList_RemoveSort;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_ComponentModel_ITypedList_GetListName;
  VirtualInvokeData System_ComponentModel_ITypedList_GetItemProperties;
  VirtualInvokeData get_IsInitialized;
  VirtualInvokeData add_Initialized;
  VirtualInvokeData remove_Initialized;
  VirtualInvokeData BeginInit;
  VirtualInvokeData EndInit;
  VirtualInvokeData get_RowFilter;
  VirtualInvokeData set_RowFilter;
  VirtualInvokeData AddNew;
  VirtualInvokeData GetFilter;
  VirtualInvokeData IndexListChanged;
  VirtualInvokeData OnListChanged;
  VirtualInvokeData SetIndex;
  VirtualInvokeData UpdateIndex;
  VirtualInvokeData ColumnCollectionChanged;
  VirtualInvokeData Invoke;
};
struct RelatedView__StaticFields {
};
struct RelatedView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RelatedView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RelatedView__VTable vtable;
};

struct RelationshipConverter {
  struct RelationshipConverter__Class *klass;
  struct MonitorData *monitor;
};
struct RelationshipConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct RelationshipConverter__StaticFields {
};
struct RelationshipConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RelationshipConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RelationshipConverter__VTable vtable;
};

struct RBTree_1_K_RBTreeEnumerator_System_Int32_ {
  struct RBTree_1_System_Int32_ * _tree;
  int32_t _version;
  int32_t _index;
  int32_t _mainTreeNodeId;
  int32_t _current;
};
struct RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed {
  struct RBTree_1_K_RBTreeEnumerator_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_RBTreeEnumerator_System_Int32_ fields;
};
struct RBTree_1_K_RBTreeEnumerator_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct RBTree_1_K_RBTreeEnumerator_System_Int32___StaticFields {
};
struct RBTree_1_K_RBTreeEnumerator_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RBTree_1_K_RBTreeEnumerator_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RBTree_1_K_RBTreeEnumerator_System_Int32___VTable vtable;
};

struct __declspec(align(8)) List_1_System_Object__1__Fields {
  struct Object__Array__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Object__1 {
  struct List_1_System_Object__1__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Object__1__Fields fields;
};
struct Object__Array__Array {
  struct Object__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Object__Array * vector[32];
};
struct IEnumerator_1_System_Object__1 {
  struct IEnumerator_1_System_Object__1__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Object__1__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Object__1__StaticFields {
};
struct IEnumerator_1_System_Object__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Object__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Object__1__VTable vtable;
};
struct List_1_System_Object__1__VTable {
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
struct List_1_System_Object__1__StaticFields {
  struct Object__Array__Array * _emptyArray;
};
struct List_1_System_Object__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Object__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Object__1__VTable vtable;
};

struct Index_c {
  struct Index_c__Class *klass;
  struct MonitorData *monitor;
};
struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean_ {
  struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___Fields fields;
};
struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___VTable {
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
struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___StaticFields {
};
struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean___VTable vtable;
};
struct Index_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Index_c__StaticFields {
  struct Index_c * __9;
  struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_ * __9__22_0;
  struct Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean_ * __9__85_0;
};
struct Index_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Index_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Index_c__VTable vtable;
};

struct __declspec(align(8)) Index_c_DisplayClass86_0__Fields {
  enum ListChangedType__Enum changedType;
};
struct Index_c_DisplayClass86_0 {
  struct Index_c_DisplayClass86_0__Class *klass;
  struct MonitorData *monitor;
  struct Index_c_DisplayClass86_0__Fields fields;
};
struct Index_c_DisplayClass86_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Index_c_DisplayClass86_0__StaticFields {
};
struct Index_c_DisplayClass86_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Index_c_DisplayClass86_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Index_c_DisplayClass86_0__VTable vtable;
};

struct XMLSchema {
  struct XMLSchema__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XDRSchema__Fields {
  struct String * _schemaName;
  struct String * _schemaUri;
  struct XmlElement * _schemaRoot;
  struct DataSet * _ds_1;
};
struct XDRSchema {
  struct XDRSchema__Class *klass;
  struct MonitorData *monitor;
  struct XDRSchema__Fields fields;
};
struct __declspec(align(8)) XDRSchema_NameType__Fields {
  struct String * name;
  struct Type * type;
};
struct XDRSchema_NameType {
  struct XDRSchema_NameType__Class *klass;
  struct MonitorData *monitor;
  struct XDRSchema_NameType__Fields fields;
};
struct XDRSchema_NameType__Array {
  struct XDRSchema_NameType__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XDRSchema_NameType * vector[32];
};
struct XMLSchema__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XMLSchema__StaticFields {
};
struct XMLSchema__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XMLSchema__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XMLSchema__VTable vtable;
};
struct XDRSchema_NameType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompareTo;
};
struct XDRSchema_NameType__StaticFields {
};
struct XDRSchema_NameType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDRSchema_NameType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDRSchema_NameType__VTable vtable;
};
struct XDRSchema__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XDRSchema__StaticFields {
  struct Char__Array * s_colonArray;
  struct XDRSchema_NameType__Array * s_mapNameTypeXdr;
  struct XDRSchema_NameType * s_enumerationNameType;
};
struct XDRSchema__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XDRSchema__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XDRSchema__VTable vtable;
};

struct __declspec(align(8)) XMLDiffLoader__Fields {
  struct ArrayList * _tables;
  struct DataSet * _dataSet;
  struct DataTable * _dataTable;
};
struct XMLDiffLoader {
  struct XMLDiffLoader__Class *klass;
  struct MonitorData *monitor;
  struct XMLDiffLoader__Fields fields;
};
struct XMLDiffLoader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XMLDiffLoader__StaticFields {
};
struct XMLDiffLoader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XMLDiffLoader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XMLDiffLoader__VTable vtable;
};

struct __declspec(align(8)) ConstraintTable__Fields {
  struct DataTable * table;
  struct XmlSchemaIdentityConstraint * constraint;
};
struct ConstraintTable {
  struct ConstraintTable__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintTable__Fields fields;
};
struct ConstraintTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConstraintTable__StaticFields {
};
struct ConstraintTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintTable__VTable vtable;
};

struct __declspec(align(8)) XSDSchema__Fields {
  struct XmlSchemaSet * _schemaSet;
  struct XmlSchemaElement * _dsElement;
  struct DataSet * _ds_1;
  struct String * _schemaName;
  struct ArrayList * _columnExpressions;
  struct Hashtable * _constraintNodes;
  struct ArrayList * _refTables;
  struct ArrayList * _complexTypes;
  struct XmlSchemaObjectCollection * _annotations;
  struct XmlSchemaObjectCollection * _elements;
  struct Hashtable * _attributes;
  struct Hashtable * _elementsTable;
  struct Hashtable * _attributeGroups;
  struct Hashtable * _schemaTypes;
  struct Hashtable * _expressions;
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * _tableDictionary;
  struct Hashtable * _udSimpleTypes;
  struct Hashtable * _existingSimpleTypeMap;
  bool _fromInference;
};
struct XSDSchema {
  struct XSDSchema__Class *klass;
  struct MonitorData *monitor;
  struct XSDSchema__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Data_DataTable_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ {
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable_ {
  int32_t hashCode;
  int32_t next;
  struct DataTable * key;
  struct List_1_System_Data_DataTable_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable_ vector[32];
};
struct IEqualityComparer_1_System_Data_DataTable_ {
  struct IEqualityComparer_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___Fields {
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___Fields {
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___Fields fields;
};
struct List_1_System_Data_DataTable___Array {
  struct List_1_System_Data_DataTable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_System_Data_DataTable_ * vector[32];
};
struct IEnumerator_1_List_1_System_Data_DataTable_ {
  struct IEnumerator_1_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Data_DataTable_ {
  struct ICollection_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_System_Data_DataTable_ {
  struct ICollection_1_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable_ {
  struct DataTable * key;
  struct List_1_System_Data_DataTable_ * value;
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Boxed {
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable_ fields;
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Array {
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable_ {
  struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Data_DataTable_ {
  struct IEnumerable_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_System_Data_DataTable_ {
  struct IEnumerable_1_List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XSDSchema_NameType__Fields {
  struct String * name;
  struct Type * type;
};
struct XSDSchema_NameType {
  struct XSDSchema_NameType__Class *klass;
  struct MonitorData *monitor;
  struct XSDSchema_NameType__Fields fields;
};
struct XSDSchema_NameType__Array {
  struct XSDSchema_NameType__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XSDSchema_NameType * vector[32];
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct IEqualityComparer_1_System_Data_DataTable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_System_Data_DataTable___StaticFields {
};
struct IEqualityComparer_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_System_Data_DataTable___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct IEnumerator_1_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_System_Data_DataTable___StaticFields {
};
struct IEnumerator_1_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_System_Data_DataTable___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct ICollection_1_System_Data_DataTable___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Data_DataTable___StaticFields {
};
struct ICollection_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Data_DataTable___VTable vtable;
};
struct ICollection_1_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_System_Data_DataTable___StaticFields {
};
struct ICollection_1_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_System_Data_DataTable___VTable vtable;
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct IEnumerable_1_System_Data_DataTable___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Data_DataTable___StaticFields {
};
struct IEnumerable_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Data_DataTable___VTable vtable;
};
struct IEnumerable_1_List_1_System_Data_DataTable___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_System_Data_DataTable___StaticFields {
};
struct IEnumerable_1_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_System_Data_DataTable___VTable vtable;
};
struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable {
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
struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields {
};
struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable___VTable vtable;
};
struct XSDSchema_NameType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompareTo;
};
struct XSDSchema_NameType__StaticFields {
};
struct XSDSchema_NameType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XSDSchema_NameType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XSDSchema_NameType__VTable vtable;
};
struct XSDSchema__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XSDSchema__StaticFields {
  struct XSDSchema_NameType__Array * s_mapNameTypeXsd;
};
struct XSDSchema__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XSDSchema__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XSDSchema__VTable vtable;
};

struct XmlIgnoreNamespaceReader__Fields {
  struct XmlNodeReader__Fields _;
  struct List_1_System_String_ * _namespacesToIgnore;
};
struct XmlIgnoreNamespaceReader {
  struct XmlIgnoreNamespaceReader__Class *klass;
  struct MonitorData *monitor;
  struct XmlIgnoreNamespaceReader__Fields fields;
};
struct XmlIgnoreNamespaceReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_NodeType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_LocalName;
  VirtualInvokeData get_NamespaceURI;
  VirtualInvokeData get_Prefix;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Depth;
  VirtualInvokeData get_BaseURI;
  VirtualInvokeData get_IsEmptyElement;
  VirtualInvokeData get_IsDefault;
  VirtualInvokeData get_QuoteChar;
  VirtualInvokeData get_XmlSpace;
  VirtualInvokeData get_XmlLang;
  VirtualInvokeData get_SchemaInfo;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_AttributeCount;
  VirtualInvokeData GetAttribute;
  VirtualInvokeData GetAttribute_1;
  VirtualInvokeData GetAttribute_2;
  VirtualInvokeData MoveToAttribute;
  VirtualInvokeData MoveToAttribute_1;
  VirtualInvokeData MoveToFirstAttribute;
  VirtualInvokeData MoveToNextAttribute;
  VirtualInvokeData MoveToElement;
  VirtualInvokeData ReadAttributeValue;
  VirtualInvokeData Read;
  VirtualInvokeData get_EOF;
  VirtualInvokeData Close;
  VirtualInvokeData get_ReadState;
  VirtualInvokeData Skip;
  VirtualInvokeData get_NameTable;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData get_CanResolveEntity;
  VirtualInvokeData ResolveEntity;
  VirtualInvokeData get_CanReadValueChunk;
  VirtualInvokeData ReadValueChunk;
  VirtualInvokeData ReadString;
  VirtualInvokeData MoveToContent;
  VirtualInvokeData ReadStartElement;
  VirtualInvokeData ReadElementString;
  VirtualInvokeData ReadEndElement;
  VirtualInvokeData IsStartElement;
  VirtualInvokeData ReadInnerXml;
  VirtualInvokeData get_HasAttributes;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_NamespaceManager;
  VirtualInvokeData get_DtdInfo;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
};}