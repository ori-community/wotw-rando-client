namespace app {
struct UpdateManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UpdateManager__StaticFields {
  bool EnableRegistrationCallstackTracking;
  bool DisableEntryManagement;
  struct Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * m_entryPool;
  struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_ * m_explicitPool;
  struct UpdateManager_ActiveEntryComparer * m_activeEntryCmp;
  struct UpdateManager_UpdatedEntryComparer * m_updatedEntryCmp;
};
struct UpdateManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager__VTable vtable;
};
struct MoonDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnDestroy;
};
struct MoonDriver__StaticFields {
  struct MoonDriver * s_instance;
  enum UpdateType__Enum DefaultUpdateType;
};
struct MoonDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonDriver__VTable vtable;
};

struct IUpdateHandlerWithExecutionOrderOffset {
  struct IUpdateHandlerWithExecutionOrderOffset__Class *klass;
  struct MonitorData *monitor;
};
struct IUpdateHandlerWithExecutionOrderOffset__VTable {
  VirtualInvokeData get_ExecutionOrderOffset;
};
struct IUpdateHandlerWithExecutionOrderOffset__StaticFields {
};
struct IUpdateHandlerWithExecutionOrderOffset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUpdateHandlerWithExecutionOrderOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUpdateHandlerWithExecutionOrderOffset__VTable vtable;
};

struct MoonDriverSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct Dictionary_2_System_Type_Moon_IDrivableGroup_ * m_groupMap;
  struct List_1_Moon_IDrivableGroup_ * m_groups;
  struct Queue_1_Moon_IDrivable_ * m_drivableRegistrationQueue;
  struct List_1_Moon_IDrivable_ * m_drivables;
};
struct MoonDriverSystem {
  struct MoonDriverSystem__Class *klass;
  struct MonitorData *monitor;
  struct MoonDriverSystem__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_Moon_IDrivableGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_Moon_IDrivableGroup_ {
  struct Dictionary_2_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_Moon_IDrivableGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct IDrivableGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup_ vector[32];
};
struct IDrivableGroup {
  struct IDrivableGroup__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___Fields {
  struct Dictionary_2_System_Type_Moon_IDrivableGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___Fields {
  struct Dictionary_2_System_Type_Moon_IDrivableGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___Fields fields;
};
struct IDrivableGroup__Array {
  struct IDrivableGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDrivableGroup * vector[32];
};
struct IEnumerator_1_Moon_IDrivableGroup_ {
  struct IEnumerator_1_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_IDrivableGroup_ {
  struct ICollection_1_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup_ {
  struct Type * key;
  struct IDrivableGroup * value;
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___Boxed {
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup_ fields;
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___Array {
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_IDrivableGroup_ {
  struct IEnumerable_1_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_IDrivableGroup___Fields {
  struct IDrivableGroup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IDrivableGroup_ {
  struct List_1_Moon_IDrivableGroup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IDrivableGroup___Fields fields;
};
struct __declspec(align(8)) Queue_1_Moon_IDrivable___Fields {
  struct IDrivable__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_IDrivable_ {
  struct Queue_1_Moon_IDrivable___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_IDrivable___Fields fields;
};
struct IDrivableGroup__VTable {
  VirtualInvokeData Pause;
  VirtualInvokeData Resume;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData RegisterDrivable;
  VirtualInvokeData UnregisterDrivable;
  VirtualInvokeData Contains;
  VirtualInvokeData get_GroupName;
  VirtualInvokeData set_GroupName;
  VirtualInvokeData get_GroupSize;
};
struct IDrivableGroup__StaticFields {
};
struct IDrivableGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDrivableGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDrivableGroup__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct IEnumerator_1_Moon_IDrivableGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IDrivableGroup___StaticFields {
};
struct IEnumerator_1_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IDrivableGroup___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct ICollection_1_Moon_IDrivableGroup___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_IDrivableGroup___StaticFields {
};
struct ICollection_1_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_IDrivableGroup___VTable vtable;
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct IEnumerable_1_Moon_IDrivableGroup___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_IDrivableGroup___StaticFields {
};
struct IEnumerable_1_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_IDrivableGroup___VTable vtable;
};
struct Dictionary_2_System_Type_Moon_IDrivableGroup___VTable {
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
struct Dictionary_2_System_Type_Moon_IDrivableGroup___StaticFields {
};
struct Dictionary_2_System_Type_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Type_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Type_Moon_IDrivableGroup___VTable vtable;
};
struct List_1_Moon_IDrivableGroup___VTable {
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
struct List_1_Moon_IDrivableGroup___StaticFields {
  struct IDrivableGroup__Array * _emptyArray;
};
struct List_1_Moon_IDrivableGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_IDrivableGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_IDrivableGroup___VTable vtable;
};
struct Queue_1_Moon_IDrivable___VTable {
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
struct Queue_1_Moon_IDrivable___StaticFields {
};
struct Queue_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_IDrivable___VTable vtable;
};
struct MoonDriverSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonDriverSystem__StaticFields {
  struct MoonDriverSystem * s_instance;
};
struct MoonDriverSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonDriverSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonDriverSystem__VTable vtable;
};

struct __declspec(align(8)) UpdateHandle__Fields {
  enum UpdateType__Enum m_updateType;
  int32_t m_order;
  struct Action_1_Single_ * m_method;
};
struct UpdateHandle {
  struct UpdateHandle__Class *klass;
  struct MonitorData *monitor;
  struct UpdateHandle__Fields fields;
};
struct Action_1_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Single_ {
  struct Action_1_Single___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Single___Fields fields;
};
struct Action_1_Single___VTable {
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
struct Action_1_Single___StaticFields {
};
struct Action_1_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Single___VTable vtable;
};
struct UpdateHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct UpdateHandle__StaticFields {
};
struct UpdateHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateHandle__VTable vtable;
};

struct UpdateTypeEnumComparer {
};
struct UpdateTypeEnumComparer__Boxed {
  struct UpdateTypeEnumComparer__Class *klass;
  struct MonitorData *monitor;
  struct UpdateTypeEnumComparer fields;
};
struct UpdateTypeEnumComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
};
struct UpdateTypeEnumComparer__StaticFields {
};
struct UpdateTypeEnumComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateTypeEnumComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateTypeEnumComparer__VTable vtable;
};

struct IComparer_1_Moon_Driver_UpdateManager_Entry_ {
  struct IComparer_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct IComparer_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};

struct UpdateManager_c {
  struct UpdateManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ {
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___Fields fields;
};
struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___VTable {
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
struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___StaticFields {
};
struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean___VTable vtable;
};
struct UpdateManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UpdateManager_c__StaticFields {
  struct UpdateManager_c * __9;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_0;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_1;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_2;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_3;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_4;
  struct Func_2_Moon_Driver_UpdateManager_Entry_Boolean_ * __9__40_5;
};
struct UpdateManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_c__VTable vtable;
};

struct BulletHole__Fields {
  struct MonoBehaviour__Fields _;
  float lifeTime;
};
struct BulletHole {
  struct BulletHole__Class *klass;
  struct MonitorData *monitor;
  struct BulletHole__Fields fields;
};
struct BulletHole__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BulletHole__StaticFields {
};
struct BulletHole__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BulletHole__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BulletHole__VTable vtable;
};

struct __declspec(align(8)) BulletHole_DestroyDelayed_d_2__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct BulletHole * __4__this;
};
struct BulletHole_DestroyDelayed_d_2 {
  struct BulletHole_DestroyDelayed_d_2__Class *klass;
  struct MonitorData *monitor;
  struct BulletHole_DestroyDelayed_d_2__Fields fields;
};
struct BulletHole_DestroyDelayed_d_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct BulletHole_DestroyDelayed_d_2__StaticFields {
};
struct BulletHole_DestroyDelayed_d_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BulletHole_DestroyDelayed_d_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BulletHole_DestroyDelayed_d_2__VTable vtable;
};

enum CameraController_UpdateMode__Enum : int32_t {
  CameraController_UpdateMode__Enum_Update = 0,
  CameraController_UpdateMode__Enum_FixedUpdate = 1,
  CameraController_UpdateMode__Enum_LateUpdate = 2,
};
struct CameraController_UpdateMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraController_UpdateMode__Enum value;
};
struct CameraController__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * target;
  struct Transform * rotationSpace;
  enum CameraController_UpdateMode__Enum updateMode;
  bool lockCursor;
  bool smoothFollow;
  float followSpeed;
  float distance;
  float minDistance;
  float maxDistance;
  float zoomSpeed;
  float zoomSensitivity;
  float rotationSensitivity;
  float yMinLimit;
  float yMaxLimit;
  struct Vector3 offset;
  bool rotateAlways;
  bool rotateOnLeftButton;
  bool rotateOnRightButton;
  bool rotateOnMiddleButton;
  float _x_k__BackingField;
  float _y_k__BackingField;
  float _distanceTarget_k__BackingField;
  struct Vector3 targetDistance;
  struct Vector3 position;
  struct Quaternion rotation;
  struct Vector3 smoothPosition;
  struct Camera * cam;
  struct Quaternion r;
  struct Vector3 lastUp;
};
struct CameraController {
  struct CameraController__Class *klass;
  struct MonitorData *monitor;
  struct CameraController__Fields fields;
};
struct CameraController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData Update;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData LateUpdate;
};
struct CameraController__StaticFields {
};
struct CameraController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraController__VTable vtable;
};

struct CameraControllerFPS__Fields {
  struct MonoBehaviour__Fields _;
  float rotationSensitivity;
  float yMinLimit;
  float yMaxLimit;
  float x;
  float y;
};
struct CameraControllerFPS {
  struct CameraControllerFPS__Class *klass;
  struct MonitorData *monitor;
  struct CameraControllerFPS__Fields fields;
};
struct CameraControllerFPS__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraControllerFPS__StaticFields {
};
struct CameraControllerFPS__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraControllerFPS__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraControllerFPS__VTable vtable;
};

enum Axis__Enum : int32_t {
  Axis__Enum_X = 0,
  Axis__Enum_Y = 1,
  Axis__Enum_Z = 2,
};
struct Axis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Axis__Enum value;
};

struct AxisTools {
  struct AxisTools__Class *klass;
  struct MonitorData *monitor;
};
struct AxisTools__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AxisTools__StaticFields {
};
struct AxisTools__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AxisTools__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AxisTools__VTable vtable;
};

struct __declspec(align(8)) BipedLimbOrientations__Fields {
  struct BipedLimbOrientations_LimbOrientation * leftArm;
  struct BipedLimbOrientations_LimbOrientation * rightArm;
  struct BipedLimbOrientations_LimbOrientation * leftLeg;
  struct BipedLimbOrientations_LimbOrientation * rightLeg;
};
struct BipedLimbOrientations {
  struct BipedLimbOrientations__Class *klass;
  struct MonitorData *monitor;
  struct BipedLimbOrientations__Fields fields;
};
struct __declspec(align(8)) BipedLimbOrientations_LimbOrientation__Fields {
  struct Vector3 upperBoneForwardAxis;
  struct Vector3 lowerBoneForwardAxis;
  struct Vector3 lastBoneLeftAxis;
};
struct BipedLimbOrientations_LimbOrientation {
  struct BipedLimbOrientations_LimbOrientation__Class *klass;
  struct MonitorData *monitor;
  struct BipedLimbOrientations_LimbOrientation__Fields fields;
};
struct BipedLimbOrientations_LimbOrientation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BipedLimbOrientations_LimbOrientation__StaticFields {
};
struct BipedLimbOrientations_LimbOrientation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedLimbOrientations_LimbOrientation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedLimbOrientations_LimbOrientation__VTable vtable;
};
struct BipedLimbOrientations__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BipedLimbOrientations__StaticFields {
};
struct BipedLimbOrientations__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedLimbOrientations__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedLimbOrientations__VTable vtable;
};

enum BipedNaming_BoneType__Enum : int32_t {
  BipedNaming_BoneType__Enum_Unassigned = 0,
  BipedNaming_BoneType__Enum_Spine = 1,
  BipedNaming_BoneType__Enum_Head = 2,
  BipedNaming_BoneType__Enum_Arm = 3,
  BipedNaming_BoneType__Enum_Leg = 4,
  BipedNaming_BoneType__Enum_Tail = 5,
  BipedNaming_BoneType__Enum_Eye = 6,
};
struct BipedNaming_BoneType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BipedNaming_BoneType__Enum value;
};

enum BipedNaming_BoneSide__Enum : int32_t {
  BipedNaming_BoneSide__Enum_Center = 0,
  BipedNaming_BoneSide__Enum_Left = 1,
  BipedNaming_BoneSide__Enum_Right = 2,
};
struct BipedNaming_BoneSide__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BipedNaming_BoneSide__Enum value;
};

struct __declspec(align(8)) BipedReferences__Fields {
  struct Transform * root;
  struct Transform * pelvis;
  struct Transform * leftThigh;
  struct Transform * leftCalf;
  struct Transform * leftFoot;
  struct Transform * rightThigh;
  struct Transform * rightCalf;
  struct Transform * rightFoot;
  struct Transform * leftUpperArm;
  struct Transform * leftForearm;
  struct Transform * leftHand;
  struct Transform * rightUpperArm;
  struct Transform * rightForearm;
  struct Transform * rightHand;
  struct Transform * head;
  struct Transform__Array * spine;
  struct Transform__Array * eyes;
};
struct BipedReferences {
  struct BipedReferences__Class *klass;
  struct MonitorData *monitor;
  struct BipedReferences__Fields fields;
};
struct BipedReferences__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_isFilled;
  VirtualInvokeData IsEmpty;
  VirtualInvokeData Contains;
};
struct BipedReferences__StaticFields {
};
struct BipedReferences__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedReferences__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedReferences__VTable vtable;
};

struct BipedReferences_AutoDetectParams {
  bool legsParentInSpine;
  bool includeEyes;
};
struct BipedReferences_AutoDetectParams__Boxed {
  struct BipedReferences_AutoDetectParams__Class *klass;
  struct MonitorData *monitor;
  struct BipedReferences_AutoDetectParams fields;
};}