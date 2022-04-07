namespace app {

struct GameObjectVirtualAnimator_Context {
  struct GameObject * GameObject;
};
struct GameObjectVirtualAnimator_Context__Boxed {
  struct GameObjectVirtualAnimator_Context__Class *klass;
  struct MonitorData *monitor;
  struct GameObjectVirtualAnimator_Context fields;
};
struct GameObjectVirtualAnimator_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameObjectVirtualAnimator_Context__StaticFields {
};
struct GameObjectVirtualAnimator_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameObjectVirtualAnimator_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameObjectVirtualAnimator_Context__VTable vtable;
};

struct ScenarioRoot__Fields {
  struct MonoBehaviour__Fields _;
  bool _InvalidateParentTimelineCache_k__BackingField;
  struct MoonTimeline * m_rootTimeline;
};
struct ScenarioRoot {
  struct ScenarioRoot__Class *klass;
  struct MonitorData *monitor;
  struct ScenarioRoot__Fields fields;
};
struct __declspec(align(8)) List_1_ITimelineParentOwner___Fields {
  struct ITimelineParentOwner__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ITimelineParentOwner_ {
  struct List_1_ITimelineParentOwner___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ITimelineParentOwner___Fields fields;
};
struct ITimelineParentOwner {
  struct ITimelineParentOwner__Class *klass;
  struct MonitorData *monitor;
};
struct ITimelineParentOwner__Array {
  struct ITimelineParentOwner__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ITimelineParentOwner * vector[32];
};
struct IEnumerator_1_ITimelineParentOwner_ {
  struct IEnumerator_1_ITimelineParentOwner___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) VirtualClipsBuilder__Fields {
  float m_baseClipLenght;
  int32_t m_blockSize;
  struct Stack_1_VirtualClipsBuilder_BuilderScope_ * m_scopeStack;
  int32_t _AddedChildren_k__BackingField;
  struct VirtualMoonTimeline * _Root_k__BackingField;
};
struct VirtualClipsBuilder {
  struct VirtualClipsBuilder__Class *klass;
  struct MonitorData *monitor;
  struct VirtualClipsBuilder__Fields fields;
};
struct __declspec(align(8)) Stack_1_VirtualClipsBuilder_BuilderScope___Fields {
  struct VirtualClipsBuilder_BuilderScope__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_VirtualClipsBuilder_BuilderScope_ {
  struct Stack_1_VirtualClipsBuilder_BuilderScope___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_VirtualClipsBuilder_BuilderScope___Fields fields;
};
struct __declspec(align(8)) VirtualClipsBuilder_BuilderScope__Fields {
  struct Stack_1_VirtualClipsBuilder_Layout_ * m_layoutStack;
  struct VirtualMoonTimeline * Root;
  int32_t IndentLevel;
  struct ITimelineEntity * LastAdded;
};
struct VirtualClipsBuilder_BuilderScope {
  struct VirtualClipsBuilder_BuilderScope__Class *klass;
  struct MonitorData *monitor;
  struct VirtualClipsBuilder_BuilderScope__Fields fields;
};
struct VirtualClipsBuilder_BuilderScope__Array {
  struct VirtualClipsBuilder_BuilderScope__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VirtualClipsBuilder_BuilderScope * vector[32];
};
struct __declspec(align(8)) Stack_1_VirtualClipsBuilder_Layout___Fields {
  struct VirtualClipsBuilder_Layout__Enum__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_VirtualClipsBuilder_Layout_ {
  struct Stack_1_VirtualClipsBuilder_Layout___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_VirtualClipsBuilder_Layout___Fields fields;
};
enum VirtualClipsBuilder_Layout__Enum : int32_t {
  VirtualClipsBuilder_Layout__Enum_Vertical = 0,
  VirtualClipsBuilder_Layout__Enum_Horizontal = 1,
  VirtualClipsBuilder_Layout__Enum_Block = 2,
};
struct VirtualClipsBuilder_Layout__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VirtualClipsBuilder_Layout__Enum value;
};
struct VirtualClipsBuilder_Layout__Enum__Array {
  struct VirtualClipsBuilder_Layout__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum VirtualClipsBuilder_Layout__Enum vector[32];
};
struct IEnumerator_1_VirtualClipsBuilder_Layout_ {
  struct IEnumerator_1_VirtualClipsBuilder_Layout___Class *klass;
  struct MonitorData *monitor;
};
enum EntityOperationPermit__Enum : int32_t {
  EntityOperationPermit__Enum_PerformNormally = 0,
  EntityOperationPermit__Enum_AllowWithCustomHandling = 1,
  EntityOperationPermit__Enum_WontAllow = 2,
};
struct EntityOperationPermit__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EntityOperationPermit__Enum value;
};
struct __declspec(align(8)) VirtualMoonTimeline__Fields {
  struct String * m_name;
  struct PlaybackStatus * _PlaybackStatus_k__BackingField;
  bool _ExpandedByDefault_k__BackingField;
  struct List_1_Moon_Timeline_ConstraintsMetaData_ * _ConstraintMetaDatas_k__BackingField;
  struct List_1_Moon_Timeline_TimelineMarkerRecord_ * _MarkerRecords_k__BackingField;
  struct List_1_Moon_Timeline_ExternalTimelineRecord_ * _ExternalRecords_k__BackingField;
  struct List_1_Moon_Timeline_TimelineEntityRecord_ * _EntityRecords_k__BackingField;
  struct VirtualTimelineEntityPool * m_pool;
  enum EntityOperationPermit__Enum RemoveChildPermit;
  struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_ * OnChildRemoveCustomHandling;
  bool _ShouldHideHeader_k__BackingField;
  bool _UseHorizontalCollapse_k__BackingField;
  struct ITrimController * _TrimController_k__BackingField;
  struct String * _FullAddress_k__BackingField;
};
struct VirtualMoonTimeline {
  struct VirtualMoonTimeline__Class *klass;
  struct MonitorData *monitor;
  struct VirtualMoonTimeline__Fields fields;
};
struct __declspec(align(8)) VirtualTimelineEntityPool__Fields {
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * m_pool;
};
struct VirtualTimelineEntityPool {
  struct VirtualTimelineEntityPool__Class *klass;
  struct MonitorData *monitor;
  struct VirtualTimelineEntityPool__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ vector[32];
};
struct __declspec(align(8)) Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
  struct IPoolableTimelineEntity__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};
struct IPoolableTimelineEntity {
  struct IPoolableTimelineEntity__Class *klass;
  struct MonitorData *monitor;
};
struct IPoolableTimelineEntity__Array {
  struct IPoolableTimelineEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPoolableTimelineEntity * vector[32];
};
struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};
struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * vector[32];
};
struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct Type * key;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ * value;
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Boxed {
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ fields;
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
  struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_ {
  struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Fields fields;
};
struct IEnumerator_1_VirtualClipsBuilder_BuilderScope_ {
  struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___Class *klass;
  struct MonitorData *monitor;
};
struct ITimelineParentOwner__VTable {
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct ITimelineParentOwner__StaticFields {
};
struct ITimelineParentOwner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITimelineParentOwner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITimelineParentOwner__VTable vtable;
};
struct IEnumerator_1_ITimelineParentOwner___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ITimelineParentOwner___StaticFields {
};
struct IEnumerator_1_ITimelineParentOwner___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ITimelineParentOwner___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ITimelineParentOwner___VTable vtable;
};
struct List_1_ITimelineParentOwner___VTable {
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
struct List_1_ITimelineParentOwner___StaticFields {
  struct ITimelineParentOwner__Array * _emptyArray;
};
struct List_1_ITimelineParentOwner___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ITimelineParentOwner___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ITimelineParentOwner___VTable vtable;
};
struct IEnumerator_1_VirtualClipsBuilder_Layout___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_VirtualClipsBuilder_Layout___StaticFields {
};
struct IEnumerator_1_VirtualClipsBuilder_Layout___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_VirtualClipsBuilder_Layout___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_VirtualClipsBuilder_Layout___VTable vtable;
};
struct Stack_1_VirtualClipsBuilder_Layout___VTable {
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
struct Stack_1_VirtualClipsBuilder_Layout___StaticFields {
};
struct Stack_1_VirtualClipsBuilder_Layout___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_VirtualClipsBuilder_Layout___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_VirtualClipsBuilder_Layout___VTable vtable;
};
struct IPoolableTimelineEntity__VTable {
  VirtualInvokeData Reset;
};
struct IPoolableTimelineEntity__StaticFields {
};
struct IPoolableTimelineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPoolableTimelineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPoolableTimelineEntity__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
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
struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
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
struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};
struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};
struct VirtualTimelineEntityPool__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VirtualTimelineEntityPool__StaticFields {
};
struct VirtualTimelineEntityPool__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualTimelineEntityPool__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualTimelineEntityPool__VTable vtable;
};
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___VTable {
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
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct VirtualMoonTimeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
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
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData get_UseHorizontalCollapse;
  VirtualInvokeData set_UseHorizontalCollapse;
  VirtualInvokeData OnBeforeAddChild;
  VirtualInvokeData CustomAddChild;
  VirtualInvokeData OnBeforeRemoveChild;
  VirtualInvokeData CustomRemoveChild;
};
struct VirtualMoonTimeline__StaticFields {
};
struct VirtualMoonTimeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualMoonTimeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualMoonTimeline__VTable vtable;
};
struct VirtualClipsBuilder_BuilderScope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VirtualClipsBuilder_BuilderScope__StaticFields {
};
struct VirtualClipsBuilder_BuilderScope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualClipsBuilder_BuilderScope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualClipsBuilder_BuilderScope__VTable vtable;
};
struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___StaticFields {
};
struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___VTable vtable;
};
struct Stack_1_VirtualClipsBuilder_BuilderScope___VTable {
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
struct Stack_1_VirtualClipsBuilder_BuilderScope___StaticFields {
};
struct Stack_1_VirtualClipsBuilder_BuilderScope___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_VirtualClipsBuilder_BuilderScope___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_VirtualClipsBuilder_BuilderScope___VTable vtable;
};
struct VirtualClipsBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VirtualClipsBuilder__StaticFields {
};
struct VirtualClipsBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualClipsBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualClipsBuilder__VTable vtable;
};
struct ScenarioRoot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetOutsideOwners;
  VirtualInvokeData CreateTimelineParentEntity;
  VirtualInvokeData get_AddChildren;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct ScenarioRoot__StaticFields {
};
struct ScenarioRoot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenarioRoot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenarioRoot__VTable vtable;
};

struct ScenarioRecorderTracker {
  struct ScenarioRecorderTracker__Class *klass;
  struct MonitorData *monitor;
};
struct ScenarioRecorderTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScenarioRecorderTracker__StaticFields {
  int32_t ScenarioParsingVersion;
};
struct ScenarioRecorderTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenarioRecorderTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenarioRecorderTracker__VTable vtable;
};

struct __declspec(align(8)) SetupStateVirtualAnimator__Fields {
  struct SetupState * _State_k__BackingField;
  struct NewSetupStateController * _StateController_k__BackingField;
  float m_desiredValue;
  enum AnimatorPlayState__Enum _PlayState_k__BackingField;
  struct PlaybackStatus * _PlaybackStatus_k__BackingField;
};
struct SetupStateVirtualAnimator {
  struct SetupStateVirtualAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SetupStateVirtualAnimator__Fields fields;
};
struct SetupStateVirtualAnimator__VTable {
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
  VirtualInvokeData Reset;
};
struct SetupStateVirtualAnimator__StaticFields {
};
struct SetupStateVirtualAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetupStateVirtualAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetupStateVirtualAnimator__VTable vtable;
};

struct SetupStateVirtualAnimator_Context {
  struct NewSetupStateController * StateController;
  struct SetupState * State;
  struct IGenericUberState * UberState;
  float DesiredValue;
};
struct SetupStateVirtualAnimator_Context__Boxed {
  struct SetupStateVirtualAnimator_Context__Class *klass;
  struct MonitorData *monitor;
  struct SetupStateVirtualAnimator_Context fields;
};
struct SetupStateVirtualAnimator_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetupStateVirtualAnimator_Context__StaticFields {
};
struct SetupStateVirtualAnimator_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetupStateVirtualAnimator_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetupStateVirtualAnimator_Context__VTable vtable;
};

struct TimelineParentOwnerUtils {
  struct TimelineParentOwnerUtils__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_VirtualTimelineRepresentationGroup_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_VirtualTimelineRepresentationGroup_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_VirtualTimelineRepresentationGroup_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_ {
  struct Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  enum VirtualTimelineRepresentationGroup__Enum key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_VirtualTimelineRepresentationGroup_System_Boolean_ vector[32];
};
struct IEqualityComparer_1_VirtualTimelineRepresentationGroup_ {
  struct IEqualityComparer_1_VirtualTimelineRepresentationGroup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_VirtualTimelineRepresentationGroup_System_Boolean___Fields {
  struct Dictionary_2_VirtualTimelineRepresentationGroup_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_VirtualTimelineRepresentationGroup_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_VirtualTimelineRepresentationGroup_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_VirtualTimelineRepresentationGroup_System_Boolean___Fields fields;
};}