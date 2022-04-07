namespace app {
struct __declspec(align(8)) List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Fields {
  struct LabelScopeInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_ {
  struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Fields fields;
};
enum LabelScopeKind__Enum : int32_t {
  LabelScopeKind__Enum_Statement = 0,
  LabelScopeKind__Enum_Block = 1,
  LabelScopeKind__Enum_Switch = 2,
  LabelScopeKind__Enum_Lambda = 3,
  LabelScopeKind__Enum_Try = 4,
  LabelScopeKind__Enum_Catch = 5,
  LabelScopeKind__Enum_Finally = 6,
  LabelScopeKind__Enum_Filter = 7,
  LabelScopeKind__Enum_Expression = 8,
};
struct LabelScopeKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LabelScopeKind__Enum value;
};
struct __declspec(align(8)) LabelScopeInfo__Fields {
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * _labels;
  enum LabelScopeKind__Enum Kind;
  struct LabelScopeInfo * Parent;
};
struct LabelScopeInfo {
  struct LabelScopeInfo__Class *klass;
  struct MonitorData *monitor;
  struct LabelScopeInfo__Fields fields;
};
struct LabelScopeInfo__Array {
  struct LabelScopeInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LabelScopeInfo * vector[32];
};
struct __declspec(align(8)) HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___Fields {
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array * _keysAndValues;
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ * _dict;
};
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ {
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___Fields fields;
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct LabelTarget * key;
  struct LabelInfo * value;
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Boxed {
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ fields;
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array {
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Linq_Expressions_LabelTarget_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  int32_t hashCode;
  int32_t next;
  struct LabelTarget * key;
  struct LabelInfo * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields {
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields {
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Fields fields;
};
struct LabelInfo__Array {
  struct LabelInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LabelInfo * vector[32];
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo_ {
  struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_ {
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable {
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
struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields {
};
struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Linq_Expressions_LabelTarget_System_Linq_Expressions_Interpreter_LabelInfo___VTable vtable;
};
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___StaticFields {
};
struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo___VTable vtable;
};
struct LabelScopeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LabelScopeInfo__StaticFields {
};
struct LabelScopeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LabelScopeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LabelScopeInfo__VTable vtable;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields {
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable vtable;
};
struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable {
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
struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields {
  struct LabelScopeInfo__Array * _emptyArray;
};
struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable vtable;
};
struct LabelInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LabelInfo__StaticFields {
};
struct LabelInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LabelInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LabelInfo__VTable vtable;
};

struct __declspec(align(8)) LightCompiler__Fields {
  struct InstructionList * _instructions;
  struct LocalVariables * _locals;
  struct List_1_System_Linq_Expressions_Interpreter_DebugInfo_ * _debugInfos;
  struct HybridReferenceDictionary_2_System_Linq_Expressions_LabelTarget_LabelInfo_ * _treeLabels;
  struct LabelScopeInfo * _labelBlock;
  struct Stack_1_System_Linq_Expressions_ParameterExpression_ * _exceptionForRethrowStack;
  struct LightCompiler * _parent;
  struct StackGuard_1 * _guard;
};
struct LightCompiler {
  struct LightCompiler__Class *klass;
  struct MonitorData *monitor;
  struct LightCompiler__Fields fields;
};
struct __declspec(align(8)) List_1_System_Linq_Expressions_Interpreter_DebugInfo___Fields {
  struct DebugInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Linq_Expressions_Interpreter_DebugInfo_ {
  struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___Fields fields;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo_ {
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Stack_1_System_Linq_Expressions_ParameterExpression___Fields {
  struct ParameterExpression__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_System_Linq_Expressions_ParameterExpression_ {
  struct Stack_1_System_Linq_Expressions_ParameterExpression___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_System_Linq_Expressions_ParameterExpression___Fields fields;
};
struct LocalDefinition {
  int32_t _Index_k__BackingField;
  struct ParameterExpression * _Parameter_k__BackingField;
};
struct LocalDefinition__Boxed {
  struct LocalDefinition__Class *klass;
  struct MonitorData *monitor;
  struct LocalDefinition fields;
};
struct LocalDefinition__Array {
  struct LocalDefinition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocalDefinition vector[32];
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___StaticFields {
};
struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Linq_Expressions_Interpreter_DebugInfo___VTable vtable;
};
struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___VTable {
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
struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___StaticFields {
  struct DebugInfo__Array * _emptyArray;
};
struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Linq_Expressions_Interpreter_DebugInfo___VTable vtable;
};
struct Stack_1_System_Linq_Expressions_ParameterExpression___VTable {
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
struct Stack_1_System_Linq_Expressions_ParameterExpression___StaticFields {
};
struct Stack_1_System_Linq_Expressions_ParameterExpression___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_System_Linq_Expressions_ParameterExpression___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_System_Linq_Expressions_ParameterExpression___VTable vtable;
};
struct LocalDefinition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LocalDefinition__StaticFields {
};
struct LocalDefinition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocalDefinition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocalDefinition__VTable vtable;
};
struct LightCompiler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightCompiler__StaticFields {
  struct LocalDefinition__Array * s_emptyLocals;
};
struct LightCompiler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightCompiler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightCompiler__VTable vtable;
};

struct LabelInfo_c {
  struct LabelInfo_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo_ {
  struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___Fields fields;
};
struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable {
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
struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields {
};
struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo___VTable vtable;
};
struct LabelInfo_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LabelInfo_c__StaticFields {
  struct LabelInfo_c * __9;
  struct Func_2_System_Linq_Expressions_Interpreter_LabelScopeInfo_System_Linq_Expressions_Interpreter_LabelScopeInfo_ * __9__9_0;
};
struct LabelInfo_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LabelInfo_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LabelInfo_c__VTable vtable;
};

struct LeftShiftInstruction {
  struct LeftShiftInstruction__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftSByte {
  struct LeftShiftInstruction_LeftShiftSByte__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftSByte__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftSByte__StaticFields {
};
struct LeftShiftInstruction_LeftShiftSByte__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftSByte__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftSByte__VTable vtable;
};
struct LeftShiftInstruction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction__StaticFields {
  struct Instruction * s_SByte;
  struct Instruction * s_Int16;
  struct Instruction * s_Int32;
  struct Instruction * s_Int64;
  struct Instruction * s_Byte;
  struct Instruction * s_UInt16;
  struct Instruction * s_UInt32;
  struct Instruction * s_UInt64;
};
struct LeftShiftInstruction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftInt16 {
  struct LeftShiftInstruction_LeftShiftInt16__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftInt16__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftInt16__StaticFields {
};
struct LeftShiftInstruction_LeftShiftInt16__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftInt16__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftInt16__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftInt32 {
  struct LeftShiftInstruction_LeftShiftInt32__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftInt32__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftInt32__StaticFields {
};
struct LeftShiftInstruction_LeftShiftInt32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftInt32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftInt32__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftInt64 {
  struct LeftShiftInstruction_LeftShiftInt64__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftInt64__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftInt64__StaticFields {
};
struct LeftShiftInstruction_LeftShiftInt64__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftInt64__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftInt64__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftByte {
  struct LeftShiftInstruction_LeftShiftByte__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftByte__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftByte__StaticFields {
};
struct LeftShiftInstruction_LeftShiftByte__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftByte__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftByte__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftUInt16 {
  struct LeftShiftInstruction_LeftShiftUInt16__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftUInt16__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftUInt16__StaticFields {
};
struct LeftShiftInstruction_LeftShiftUInt16__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftUInt16__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftUInt16__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftUInt32 {
  struct LeftShiftInstruction_LeftShiftUInt32__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftUInt32__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftUInt32__StaticFields {
};
struct LeftShiftInstruction_LeftShiftUInt32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftUInt32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftUInt32__VTable vtable;
};

struct LeftShiftInstruction_LeftShiftUInt64 {
  struct LeftShiftInstruction_LeftShiftUInt64__Class *klass;
  struct MonitorData *monitor;
};
struct LeftShiftInstruction_LeftShiftUInt64__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LeftShiftInstruction_LeftShiftUInt64__StaticFields {
};
struct LeftShiftInstruction_LeftShiftUInt64__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftShiftInstruction_LeftShiftUInt64__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftShiftInstruction_LeftShiftUInt64__VTable vtable;
};

struct __declspec(align(8)) LessThanInstruction__Fields {
  struct Object * _nullValue;
};
struct LessThanInstruction {
  struct LessThanInstruction__Class *klass;
  struct MonitorData *monitor;
  struct LessThanInstruction__Fields fields;
};
struct LessThanInstruction_LessThanSByte__Fields {
  struct LessThanInstruction__Fields _;
};
struct LessThanInstruction_LessThanSByte {
  struct LessThanInstruction_LessThanSByte__Class *klass;
  struct MonitorData *monitor;
  struct LessThanInstruction_LessThanSByte__Fields fields;
};
struct LessThanInstruction_LessThanSByte__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData Run;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};
struct LessThanInstruction_LessThanSByte__StaticFields {
};
struct LessThanInstruction_LessThanSByte__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LessThanInstruction_LessThanSByte__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LessThanInstruction_LessThanSByte__VTable vtable;
};
struct LessThanInstruction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ConsumedStack;
  VirtualInvokeData get_ProducedStack;
  VirtualInvokeData get_ConsumedContinuations;
  VirtualInvokeData get_ProducedContinuations;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_InstructionName;
  VirtualInvokeData ToDebugString;
};}