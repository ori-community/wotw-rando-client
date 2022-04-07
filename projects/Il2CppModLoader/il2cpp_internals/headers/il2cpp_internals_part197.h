namespace app {
struct HashSet_1_Moon_IDrivable___VTable {
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
struct HashSet_1_Moon_IDrivable___StaticFields {
};
struct HashSet_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_Moon_IDrivable___VTable vtable;
};
struct List_1_Moon_IDrivable___VTable {
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
struct List_1_Moon_IDrivable___StaticFields {
  struct IDrivable__Array * _emptyArray;
};
struct List_1_Moon_IDrivable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_IDrivable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_IDrivable___VTable vtable;
};
struct DrivableGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
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
struct DrivableGroup__StaticFields {
};
struct DrivableGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrivableGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrivableGroup__VTable vtable;
};

struct MoonDriver__Fields {
  struct MonoBehaviour__Fields _;
  struct IMoonDriverExecutionOrderMap * m_defaultMap;
  struct IMoonDriverExecutionOrderMap * m_executionOrderMap;
  struct UpdateManager * m_updateManager;
  struct UpdateManager * m_lateUpdateManager;
  struct UpdateManager * m_fixedUpdateManager;
  struct UpdateManager__Array * m_managers;
  struct String * m_updateString;
  struct String * m_lateUpdateString;
  struct String * m_fixedUpdateString;
};
struct MoonDriver {
  struct MoonDriver__Class *klass;
  struct MonitorData *monitor;
  struct MoonDriver__Fields fields;
};
struct __declspec(align(8)) UpdateManager__Fields {
  enum UpdateType__Enum UpdateType;
  struct List_1_Moon_Driver_UpdateManager_Entry_ * m_activeEntries;
  struct Queue_1_Moon_Driver_UpdateManager_Entry_ * m_registrationQueue;
  struct Queue_1_Moon_Driver_UpdateManager_Entry_ * m_deregistrationQueue;
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * m_entryByHandler;
  struct UpdateManager__Array * m_managers;
  int32_t m_updateCounter;
  bool _EnableProfiling_k__BackingField;
  bool m_newEntriesToBeAdded;
  struct List_1_Moon_Driver_UpdateManager_Entry_ * m_entriesToUpdate;
};
struct UpdateManager {
  struct UpdateManager__Class *klass;
  struct MonitorData *monitor;
  struct UpdateManager__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Driver_UpdateManager_Entry___Fields {
  struct UpdateManager_Entry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Driver_UpdateManager_Entry_ {
  struct List_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Driver_UpdateManager_Entry___Fields fields;
};
struct __declspec(align(8)) UpdateManager_Entry__Fields {
  int32_t ExecutionOrder;
  int32_t UpdateCounter;
  bool MarkedForRemoval;
  bool ShouldBeAutoSuspended;
  struct String * UpdateHandlerType;
  struct MonoBehaviour * HandlerBehaviour;
  struct GameObject * HandlerGameObject;
  bool IsMonobehaviour;
  bool NewlyAdded;
  struct IUpdateWhileDisabled * HandlerAsUpdateWhileDisabled;
};
struct UpdateManager_Entry {
  struct UpdateManager_Entry__Class *klass;
  struct MonitorData *monitor;
  struct UpdateManager_Entry__Fields fields;
};
struct UpdateManager_Entry__Array {
  struct UpdateManager_Entry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpdateManager_Entry * vector[32];
};
struct IUpdateWhileDisabled {
  struct IUpdateWhileDisabled__Class *klass;
  struct MonitorData *monitor;
};
struct UpdateManager_GenericEntry__Fields {
  struct UpdateManager_Entry__Fields _;
  struct IUpdateHandler * GenericHandler;
};
struct UpdateManager_GenericEntry {
  struct UpdateManager_GenericEntry__Class *klass;
  struct MonitorData *monitor;
  struct UpdateManager_GenericEntry__Fields fields;
};
struct IUpdateHandler {
  struct IUpdateHandler__Class *klass;
  struct MonitorData *monitor;
};
struct IUpdateHandlerBase {
  struct IUpdateHandlerBase__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_Entry_ {
  struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Queue_1_Moon_Driver_UpdateManager_Entry___Fields {
  struct UpdateManager_Entry__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Driver_UpdateManager_Entry_ {
  struct Queue_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Driver_UpdateManager_Entry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_IUpdateHandlerBase_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  int32_t hashCode;
  int32_t next;
  struct IUpdateHandlerBase * key;
  struct UpdateManager_Entry * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ vector[32];
};
struct IEqualityComparer_1_Moon_IUpdateHandlerBase_ {
  struct IEqualityComparer_1_Moon_IUpdateHandlerBase___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields {
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields fields;
};
struct IUpdateHandlerBase__Array {
  struct IUpdateHandlerBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IUpdateHandlerBase * vector[32];
};
struct IEnumerator_1_Moon_IUpdateHandlerBase_ {
  struct IEnumerator_1_Moon_IUpdateHandlerBase___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields {
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Fields fields;
};
struct ICollection_1_Moon_IUpdateHandlerBase_ {
  struct ICollection_1_Moon_IUpdateHandlerBase___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Driver_UpdateManager_Entry_ {
  struct ICollection_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  struct IUpdateHandlerBase * key;
  struct UpdateManager_Entry * value;
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Boxed {
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ fields;
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Array {
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_IUpdateHandlerBase_ {
  struct IEnumerable_1_Moon_IUpdateHandlerBase___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Driver_UpdateManager_Entry_ {
  struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___Class *klass;
  struct MonitorData *monitor;
};
struct UpdateManager__Array {
  struct UpdateManager__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpdateManager * vector[32];
};
struct __declspec(align(8)) Queue_1_Moon_Driver_UpdateManager_GenericEntry___Fields {
  struct UpdateManager_GenericEntry__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Driver_UpdateManager_GenericEntry_ {
  struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___Fields fields;
};
struct UpdateManager_GenericEntry__Array {
  struct UpdateManager_GenericEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpdateManager_GenericEntry * vector[32];
};
struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry_ {
  struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___Fields {
  struct UpdateManager_ExplicitEntry__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_ {
  struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___Fields fields;
};
struct UpdateManager_ExplicitEntry__Fields {
  struct UpdateManager_Entry__Fields _;
  struct IExplicitUpdateHandler * m_updateHandler;
  struct IExplicitFixedUpdateHandler * m_fixedUpdateHandler;
  struct IExplicitLateUpdateHandler * m_lateUpdateHandler;
  struct IExplicitUpdateHandlerBase * ExplicitHandler;
  enum UpdateType__Enum UpdateType;
};
struct UpdateManager_ExplicitEntry {
  struct UpdateManager_ExplicitEntry__Class *klass;
  struct MonitorData *monitor;
  struct UpdateManager_ExplicitEntry__Fields fields;
};
struct UpdateManager_ExplicitEntry__Array {
  struct UpdateManager_ExplicitEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpdateManager_ExplicitEntry * vector[32];
};
struct IExplicitUpdateHandler {
  struct IExplicitUpdateHandler__Class *klass;
  struct MonitorData *monitor;
};
struct IExplicitFixedUpdateHandler {
  struct IExplicitFixedUpdateHandler__Class *klass;
  struct MonitorData *monitor;
};
struct IExplicitLateUpdateHandler {
  struct IExplicitLateUpdateHandler__Class *klass;
  struct MonitorData *monitor;
};
struct IExplicitUpdateHandlerBase {
  struct IExplicitUpdateHandlerBase__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry_ {
  struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___Class *klass;
  struct MonitorData *monitor;
};
struct UpdateManager_ActiveEntryComparer {
  struct UpdateManager_ActiveEntryComparer__Class *klass;
  struct MonitorData *monitor;
};
struct UpdateManager_UpdatedEntryComparer {
  struct UpdateManager_UpdatedEntryComparer__Class *klass;
  struct MonitorData *monitor;
};
struct IUpdateWhileDisabled__VTable {
  VirtualInvokeData get_ShouldUpdateWhileDisabled;
};
struct IUpdateWhileDisabled__StaticFields {
};
struct IUpdateWhileDisabled__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUpdateWhileDisabled__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUpdateWhileDisabled__VTable vtable;
};
struct IUpdateHandler__VTable {
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct IUpdateHandler__StaticFields {
};
struct IUpdateHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUpdateHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUpdateHandler__VTable vtable;
};
struct IUpdateHandlerBase__VTable {
};
struct IUpdateHandlerBase__StaticFields {
};
struct IUpdateHandlerBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUpdateHandlerBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUpdateHandlerBase__VTable vtable;
};
struct UpdateManager_GenericEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Handler;
  VirtualInvokeData set_Handler;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData Reset;
};
struct UpdateManager_GenericEntry__StaticFields {
};
struct UpdateManager_GenericEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_GenericEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_GenericEntry__VTable vtable;
};
struct UpdateManager_Entry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData Reset;
};
struct UpdateManager_Entry__StaticFields {
};
struct UpdateManager_Entry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_Entry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_Entry__VTable vtable;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct List_1_Moon_Driver_UpdateManager_Entry___VTable {
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
struct List_1_Moon_Driver_UpdateManager_Entry___StaticFields {
  struct UpdateManager_Entry__Array * _emptyArray;
};
struct List_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct Queue_1_Moon_Driver_UpdateManager_Entry___VTable {
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
struct Queue_1_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct Queue_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct IEqualityComparer_1_Moon_IUpdateHandlerBase___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_IUpdateHandlerBase___StaticFields {
};
struct IEqualityComparer_1_Moon_IUpdateHandlerBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_IUpdateHandlerBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_IUpdateHandlerBase___VTable vtable;
};
struct IEnumerator_1_Moon_IUpdateHandlerBase___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IUpdateHandlerBase___StaticFields {
};
struct IEnumerator_1_Moon_IUpdateHandlerBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IUpdateHandlerBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IUpdateHandlerBase___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct ICollection_1_Moon_IUpdateHandlerBase___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_IUpdateHandlerBase___StaticFields {
};
struct ICollection_1_Moon_IUpdateHandlerBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_IUpdateHandlerBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_IUpdateHandlerBase___VTable vtable;
};
struct ICollection_1_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct ICollection_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct IEnumerable_1_Moon_IUpdateHandlerBase___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_IUpdateHandlerBase___StaticFields {
};
struct IEnumerable_1_Moon_IUpdateHandlerBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_IUpdateHandlerBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_IUpdateHandlerBase___VTable vtable;
};
struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable {
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
struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields {
};
struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry___VTable vtable;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___StaticFields {
};
struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Driver_UpdateManager_GenericEntry___VTable vtable;
};
struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___VTable {
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
struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___StaticFields {
};
struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_Driver_UpdateManager_GenericEntry___VTable vtable;
};
struct IExplicitUpdateHandler__VTable {
  VirtualInvokeData OnUpdate;
};
struct IExplicitUpdateHandler__StaticFields {
};
struct IExplicitUpdateHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExplicitUpdateHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExplicitUpdateHandler__VTable vtable;
};
struct IExplicitFixedUpdateHandler__VTable {
  VirtualInvokeData OnFixedUpdate;
};
struct IExplicitFixedUpdateHandler__StaticFields {
};
struct IExplicitFixedUpdateHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExplicitFixedUpdateHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExplicitFixedUpdateHandler__VTable vtable;
};
struct IExplicitLateUpdateHandler__VTable {
  VirtualInvokeData OnLateUpdate;
};
struct IExplicitLateUpdateHandler__StaticFields {
};
struct IExplicitLateUpdateHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExplicitLateUpdateHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExplicitLateUpdateHandler__VTable vtable;
};
struct IExplicitUpdateHandlerBase__VTable {
};
struct IExplicitUpdateHandlerBase__StaticFields {
};
struct IExplicitUpdateHandlerBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExplicitUpdateHandlerBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExplicitUpdateHandlerBase__VTable vtable;
};
struct UpdateManager_ExplicitEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Handler;
  VirtualInvokeData set_Handler;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData Reset;
};
struct UpdateManager_ExplicitEntry__StaticFields {
};
struct UpdateManager_ExplicitEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_ExplicitEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_ExplicitEntry__VTable vtable;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___StaticFields {
};
struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Driver_UpdateManager_ExplicitEntry___VTable vtable;
};
struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___VTable {
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
struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___StaticFields {
};
struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry___VTable vtable;
};
struct UpdateManager_ActiveEntryComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct UpdateManager_ActiveEntryComparer__StaticFields {
};
struct UpdateManager_ActiveEntryComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_ActiveEntryComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_ActiveEntryComparer__VTable vtable;
};
struct UpdateManager_UpdatedEntryComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct UpdateManager_UpdatedEntryComparer__StaticFields {
};
struct UpdateManager_UpdatedEntryComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpdateManager_UpdatedEntryComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpdateManager_UpdatedEntryComparer__VTable vtable;
};}