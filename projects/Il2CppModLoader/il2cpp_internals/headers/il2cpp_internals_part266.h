namespace app {

enum CommentHandling__Enum : int32_t {
  CommentHandling__Enum_Ignore = 0,
  CommentHandling__Enum_Load = 1,
};
struct CommentHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CommentHandling__Enum value;
};
enum LineInfoHandling__Enum : int32_t {
  LineInfoHandling__Enum_Ignore = 0,
  LineInfoHandling__Enum_Load = 1,
};
struct LineInfoHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LineInfoHandling__Enum value;
};
enum DuplicatePropertyNameHandling__Enum : int32_t {
  DuplicatePropertyNameHandling__Enum_Replace = 0,
  DuplicatePropertyNameHandling__Enum_Ignore = 1,
  DuplicatePropertyNameHandling__Enum_Error = 2,
};
struct DuplicatePropertyNameHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DuplicatePropertyNameHandling__Enum value;
};
struct __declspec(align(8)) JsonLoadSettings__Fields {
  enum CommentHandling__Enum _commentHandling;
  enum LineInfoHandling__Enum _lineInfoHandling;
  enum DuplicatePropertyNameHandling__Enum _duplicatePropertyNameHandling;
};
struct JsonLoadSettings {
  struct JsonLoadSettings__Class *klass;
  struct MonitorData *monitor;
  struct JsonLoadSettings__Fields fields;
};
struct JsonLoadSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonLoadSettings__StaticFields {
};
struct JsonLoadSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonLoadSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonLoadSettings__VTable vtable;
};

struct JConstructor__Fields {
  struct JContainer__Fields _;
  struct String * _name;
  struct List_1_Newtonsoft_Json_Linq_JToken_ * _values;
};
struct JConstructor {
  struct JConstructor__Class *klass;
  struct MonitorData *monitor;
  struct JConstructor__Fields fields;
};
struct JConstructor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
  VirtualInvokeData CloneToken;
  VirtualInvokeData get_Type;
  VirtualInvokeData get_HasValues;
  VirtualInvokeData get_First;
  VirtualInvokeData get_Last;
  VirtualInvokeData Children;
  VirtualInvokeData WriteTo;
  VirtualInvokeData GetMetaObject;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove;
  VirtualInvokeData System_ComponentModel_ITypedList_GetListName;
  VirtualInvokeData System_ComponentModel_ITypedList_GetItemProperties;
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
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_ChildrenTokens;
  VirtualInvokeData OnAddingNew;
  VirtualInvokeData OnListChanged;
  VirtualInvokeData OnCollectionChanged;
  VirtualInvokeData IndexOfItem;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItemAt;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData GetItem;
  VirtualInvokeData SetItem;
  VirtualInvokeData ClearItems;
  VirtualInvokeData ReplaceItem;
  VirtualInvokeData ContainsItem;
  VirtualInvokeData CopyItemsTo;
  VirtualInvokeData ValidateToken;
  VirtualInvokeData Add;
};
struct JConstructor__StaticFields {
};
struct JConstructor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JConstructor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JConstructor__VTable vtable;
};

struct JProperty__Fields {
  struct JContainer__Fields _;
  struct JProperty_JPropertyList * _content;
  struct String * _name;
};
struct JProperty {
  struct JProperty__Class *klass;
  struct MonitorData *monitor;
  struct JProperty__Fields fields;
};
struct __declspec(align(8)) JProperty_JPropertyList__Fields {
  struct JToken * _token;
};
struct JProperty_JPropertyList {
  struct JProperty_JPropertyList__Class *klass;
  struct MonitorData *monitor;
  struct JProperty_JPropertyList__Fields fields;
};
struct JProperty_JPropertyList__VTable {
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
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct JProperty_JPropertyList__StaticFields {
};
struct JProperty_JPropertyList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JProperty_JPropertyList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JProperty_JPropertyList__VTable vtable;
};
struct JProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
  VirtualInvokeData CloneToken;
  VirtualInvokeData get_Type;
  VirtualInvokeData get_HasValues;
  VirtualInvokeData get_First;
  VirtualInvokeData get_Last;
  VirtualInvokeData Children;
  VirtualInvokeData WriteTo;
  VirtualInvokeData GetMetaObject;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove;
  VirtualInvokeData System_ComponentModel_ITypedList_GetListName;
  VirtualInvokeData System_ComponentModel_ITypedList_GetItemProperties;
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
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_ChildrenTokens;
  VirtualInvokeData OnAddingNew;
  VirtualInvokeData OnListChanged;
  VirtualInvokeData OnCollectionChanged;
  VirtualInvokeData IndexOfItem;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItemAt;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData GetItem;
  VirtualInvokeData SetItem;
  VirtualInvokeData ClearItems;
  VirtualInvokeData ReplaceItem;
  VirtualInvokeData ContainsItem;
  VirtualInvokeData CopyItemsTo;
  VirtualInvokeData ValidateToken;
  VirtualInvokeData Add;
};
struct JProperty__StaticFields {
};
struct JProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JProperty__VTable vtable;
};

struct JObject__Fields {
  struct JContainer__Fields _;
  struct JPropertyKeyedCollection * _properties;
  struct PropertyChangedEventHandler * PropertyChanged;
  struct PropertyChangingEventHandler * PropertyChanging;
};
struct JObject {
  struct JObject__Class *klass;
  struct MonitorData *monitor;
  struct JObject__Fields fields;
};
struct __declspec(align(8)) Collection_1_Newtonsoft_Json_Linq_JToken___Fields {
  struct IList_1_Newtonsoft_Json_Linq_JToken_ * items;
  struct Object * _syncRoot;
};
struct Collection_1_Newtonsoft_Json_Linq_JToken_ {
  struct Collection_1_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct Collection_1_Newtonsoft_Json_Linq_JToken___Fields fields;
};
struct JPropertyKeyedCollection__Fields {
  struct Collection_1_Newtonsoft_Json_Linq_JToken___Fields _;
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ * _dictionary;
};
struct JPropertyKeyedCollection {
  struct JPropertyKeyedCollection__Class *klass;
  struct MonitorData *monitor;
  struct JPropertyKeyedCollection__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ {
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct JToken * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___Fields {
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___Fields {
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___Fields fields;
};
struct ICollection_1_Newtonsoft_Json_Linq_JToken_ {
  struct ICollection_1_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ {
  struct String * key;
  struct JToken * value;
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Boxed {
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ fields;
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array {
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Class *klass;
  struct MonitorData *monitor;
};
struct Collection_1_Newtonsoft_Json_Linq_JToken___VTable {
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
  VirtualInvokeData GetEnumerator;
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
  VirtualInvokeData ClearItems;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData SetItem;
};
struct Collection_1_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct Collection_1_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Collection_1_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Collection_1_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct ICollection_1_Newtonsoft_Json_Linq_JToken___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct ICollection_1_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___VTable {
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
struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields {
};
struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken___VTable vtable;
};
struct JPropertyKeyedCollection__VTable {
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
  VirtualInvokeData GetEnumerator;
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
  VirtualInvokeData ClearItems;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData SetItem;
};
struct JPropertyKeyedCollection__StaticFields {
  struct IEqualityComparer_1_System_String_ * Comparer;
};
struct JPropertyKeyedCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JPropertyKeyedCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JPropertyKeyedCollection__VTable vtable;
};
struct JObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject;
  VirtualInvokeData CloneToken;
  VirtualInvokeData get_Type;
  VirtualInvokeData get_HasValues;
  VirtualInvokeData get_First;
  VirtualInvokeData get_Last;
  VirtualInvokeData Children;
  VirtualInvokeData WriteTo;
  VirtualInvokeData GetMetaObject;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert;
  VirtualInvokeData System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove;
  VirtualInvokeData System_ComponentModel_ITypedList_GetListName;
  VirtualInvokeData System_ComponentModel_ITypedList_GetItemProperties;
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
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_ChildrenTokens;
  VirtualInvokeData OnAddingNew;
  VirtualInvokeData OnListChanged;
  VirtualInvokeData OnCollectionChanged;
  VirtualInvokeData IndexOfItem;
  VirtualInvokeData InsertItem;
  VirtualInvokeData RemoveItemAt;
  VirtualInvokeData RemoveItem;
  VirtualInvokeData GetItem;
  VirtualInvokeData SetItem;
  VirtualInvokeData ClearItems;
  VirtualInvokeData ReplaceItem;
  VirtualInvokeData ContainsItem;
  VirtualInvokeData CopyItemsTo;
  VirtualInvokeData ValidateToken;
  VirtualInvokeData Add;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add_1;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData add_PropertyChanged;
  VirtualInvokeData remove_PropertyChanged;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
  VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
  VirtualInvokeData add_PropertyChanging;
  VirtualInvokeData remove_PropertyChanging;
  VirtualInvokeData OnPropertyChanged;
  VirtualInvokeData OnPropertyChanging;
};
struct JObject__StaticFields {
};
struct JObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JObject__VTable vtable;
};

struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ {
  struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___StaticFields {
};
struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Newtonsoft_Json_Linq_JProperty___VTable vtable;
};

struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject_ {
  struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___Class *klass;
  struct MonitorData *monitor;
};
struct JObject_JObjectDynamicProxy {
  struct JObject_JObjectDynamicProxy__Class *klass;
  struct MonitorData *monitor;
};
struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetDynamicMemberNames;
};
struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___StaticFields {
};
struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicProxy_1_Newtonsoft_Json_Linq_JObject___VTable vtable;
};
struct JObject_JObjectDynamicProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetDynamicMemberNames;
};
struct JObject_JObjectDynamicProxy__StaticFields {
};
struct JObject_JObjectDynamicProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JObject_JObjectDynamicProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JObject_JObjectDynamicProxy__VTable vtable;
};

struct JObject_JObjectDynamicProxy_c {
  struct JObject_JObjectDynamicProxy_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Newtonsoft_Json_Linq_JProperty_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Newtonsoft_Json_Linq_JProperty_String_ {
  struct Func_2_Newtonsoft_Json_Linq_JProperty_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Newtonsoft_Json_Linq_JProperty_String___Fields fields;
};
struct Func_2_Newtonsoft_Json_Linq_JProperty_String___VTable {
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
struct Func_2_Newtonsoft_Json_Linq_JProperty_String___StaticFields {
};
struct Func_2_Newtonsoft_Json_Linq_JProperty_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Newtonsoft_Json_Linq_JProperty_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Newtonsoft_Json_Linq_JProperty_String___VTable vtable;
};
struct JObject_JObjectDynamicProxy_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JObject_JObjectDynamicProxy_c__StaticFields {
  struct JObject_JObjectDynamicProxy_c * __9;
  struct Func_2_Newtonsoft_Json_Linq_JProperty_String_ * __9__2_0;
};
struct JObject_JObjectDynamicProxy_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JObject_JObjectDynamicProxy_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JObject_JObjectDynamicProxy_c__VTable vtable;
};

struct __declspec(align(8)) JObject_GetEnumerator_d_63__Fields {
  int32_t __1__state;
  struct KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ __2__current;
  struct JObject * __4__this;
  struct IEnumerator_1_Newtonsoft_Json_Linq_JToken_ * __7__wrap1;
};
struct JObject_GetEnumerator_d_63 {
  struct JObject_GetEnumerator_d_63__Class *klass;
  struct MonitorData *monitor;
  struct JObject_GetEnumerator_d_63__Fields fields;
};
struct JObject_GetEnumerator_d_63__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct JObject_GetEnumerator_d_63__StaticFields {
};
struct JObject_GetEnumerator_d_63__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JObject_GetEnumerator_d_63__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JObject_GetEnumerator_d_63__VTable vtable;
};

struct __declspec(align(8)) JProperty_JPropertyList_GetEnumerator_d_1__Fields {
  int32_t __1__state;
  struct JToken * __2__current;
  struct JProperty_JPropertyList * __4__this;
};
struct JProperty_JPropertyList_GetEnumerator_d_1 {
  struct JProperty_JPropertyList_GetEnumerator_d_1__Class *klass;
  struct MonitorData *monitor;
  struct JProperty_JPropertyList_GetEnumerator_d_1__Fields fields;
};
struct JProperty_JPropertyList_GetEnumerator_d_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct JProperty_JPropertyList_GetEnumerator_d_1__StaticFields {
};
struct JProperty_JPropertyList_GetEnumerator_d_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JProperty_JPropertyList_GetEnumerator_d_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JProperty_JPropertyList_GetEnumerator_d_1__VTable vtable;
};}