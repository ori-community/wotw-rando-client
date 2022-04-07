namespace app {
struct __declspec(align(8)) List_1_Moon_Timeline_MoonTimeline___Fields {
  struct MoonTimeline__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_MoonTimeline_ {
  struct List_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_MoonTimeline___Fields fields;
};
struct MoonTimeline__Array {
  struct MoonTimeline__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonTimeline * vector[32];
};
struct IEnumerator_1_Moon_Timeline_MoonTimeline_ {
  struct IEnumerator_1_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_ConstraintsMetaData___Fields {
  struct ConstraintsMetaData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ConstraintsMetaData_ {
  struct List_1_Moon_Timeline_ConstraintsMetaData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ConstraintsMetaData___Fields fields;
};
struct __declspec(align(8)) ConstraintsMetaData__Fields {
  struct EntityId Entity;
  enum Constraint__Enum Type;
  enum ConstraintFlag__Enum Flags;
};
struct ConstraintsMetaData {
  struct ConstraintsMetaData__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintsMetaData__Fields fields;
};
struct ConstraintsMetaData__Array {
  struct ConstraintsMetaData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConstraintsMetaData * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ConstraintsMetaData_ {
  struct IEnumerator_1_Moon_Timeline_ConstraintsMetaData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_TimelineEntityRecord___Fields {
  struct TimelineEntityRecord__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_TimelineEntityRecord_ {
  struct List_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_TimelineEntityRecord___Fields fields;
};
struct TimelineEntityRecord__Array {
  struct TimelineEntityRecord__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimelineEntityRecord * vector[32];
};
struct IEnumerator_1_Moon_Timeline_TimelineEntityRecord_ {
  struct IEnumerator_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_TimelineMarkerRecord___Fields {
  struct TimelineMarkerRecord__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_TimelineMarkerRecord_ {
  struct List_1_Moon_Timeline_TimelineMarkerRecord___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_TimelineMarkerRecord___Fields fields;
};
struct __declspec(align(8)) TimelineMarkerRecord__Fields {
  struct EntityId m_id;
  struct EntityId m_constrainedToEntityId;
  int32_t m_eventId;
  float m_previewTime;
  struct EntityId m_entityToDrawOn;
  float _VolatilePreviewTime_k__BackingField;
};
struct TimelineMarkerRecord {
  struct TimelineMarkerRecord__Class *klass;
  struct MonitorData *monitor;
  struct TimelineMarkerRecord__Fields fields;
};
struct TimelineMarkerRecord__Array {
  struct TimelineMarkerRecord__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimelineMarkerRecord * vector[32];
};
struct IEnumerator_1_Moon_Timeline_TimelineMarkerRecord_ {
  struct IEnumerator_1_Moon_Timeline_TimelineMarkerRecord___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_ExternalTimelineRecord___Fields {
  struct ExternalTimelineRecord__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_ExternalTimelineRecord_ {
  struct List_1_Moon_Timeline_ExternalTimelineRecord___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_ExternalTimelineRecord___Fields fields;
};
struct __declspec(align(8)) ExternalTimelineRecord__Fields {
  struct EntityId m_id;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * m_entity;
};
struct ExternalTimelineRecord {
  struct ExternalTimelineRecord__Class *klass;
  struct MonitorData *monitor;
  struct ExternalTimelineRecord__Fields fields;
};
struct ExternalTimelineRecord__Array {
  struct ExternalTimelineRecord__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExternalTimelineRecord * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ExternalTimelineRecord_ {
  struct IEnumerator_1_Moon_Timeline_ExternalTimelineRecord___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TimelineContext__Fields {
  struct MoonTimeline * _ContainingTimeline_k__BackingField;
  bool _IsSkippable_k__BackingField;
};
struct TimelineContext {
  struct TimelineContext__Class *klass;
  struct MonitorData *monitor;
  struct TimelineContext__Fields fields;
};
struct ITrimController {
  struct ITrimController__Class *klass;
  struct MonitorData *monitor;
};
struct IConstrainedEntityWithChildren {
  struct IConstrainedEntityWithChildren__Class *klass;
  struct MonitorData *monitor;
};
struct IConstraint {
  struct IConstraint__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_IEventDescriptor___Fields {
  struct IEventDescriptor__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_IEventDescriptor_ {
  struct List_1_Moon_Timeline_IEventDescriptor___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_IEventDescriptor___Fields fields;
};
struct IEventDescriptor {
  struct IEventDescriptor__Class *klass;
  struct MonitorData *monitor;
};
struct IEventDescriptor__Array {
  struct IEventDescriptor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IEventDescriptor * vector[32];
};
struct IEnumerator_1_Moon_Timeline_IEventDescriptor_ {
  struct IEnumerator_1_Moon_Timeline_IEventDescriptor___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_Moon_Timeline_MoonTimeline___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_Timeline_MoonTimeline___StaticFields {
};
struct IMoonType_1_Moon_Timeline_MoonTimeline___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_Timeline_MoonTimeline___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_Timeline_MoonTimeline___VTable vtable;
};
struct PlaybackStatus__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlaybackStatus__StaticFields {
};
struct PlaybackStatus__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaybackStatus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaybackStatus__VTable vtable;
};
struct IEventReciever__VTable {
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
};
struct IEventReciever__StaticFields {
};
struct IEventReciever__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEventReciever__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEventReciever__VTable vtable;
};
struct ITimelineEntityParent__VTable {
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
};
struct ITimelineEntityParent__StaticFields {
};
struct ITimelineEntityParent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITimelineEntityParent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITimelineEntityParent__VTable vtable;
};
struct EntityId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct EntityId__StaticFields {
};
struct EntityId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityId__VTable vtable;
};
struct TimelineConstraint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Dirty;
  VirtualInvokeData set_Dirty;
  VirtualInvokeData get_CachedValue;
  VirtualInvokeData set_CachedValue;
  VirtualInvokeData get_EventId;
  VirtualInvokeData get_ConstrainedTo;
  VirtualInvokeData get_TimeOffset;
  VirtualInvokeData get_Flags;
};
struct TimelineConstraint__StaticFields {
};
struct TimelineConstraint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineConstraint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineConstraint__VTable vtable;
};
struct IMoonType_1_Moon_Timeline_ITimelineEntity___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct IMoonType_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct ITimelineEntity__VTable {
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
};
struct ITimelineEntity__StaticFields {
};
struct ITimelineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITimelineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITimelineEntity__VTable vtable;
};
struct MoonReference_1_Moon_Timeline_ITimelineEntity___VTable {
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
struct MoonReference_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct MoonReference_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct IConstrainedEntity__VTable {
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
};
struct IConstrainedEntity__StaticFields {
};
struct IConstrainedEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IConstrainedEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IConstrainedEntity__VTable vtable;
};
struct EventHistoryItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventHistoryItem__StaticFields {
};
struct EventHistoryItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventHistoryItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventHistoryItem__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct ICollection_1_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct ICollection_1_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_EventHistoryItem___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable {
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
struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields {
};
struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};
struct TimelineEntityRecord__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData HasFinished;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData PostRequest_1;
};
struct TimelineEntityRecord__StaticFields {
};
struct TimelineEntityRecord__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineEntityRecord__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineEntityRecord__VTable vtable;
};
struct TimelineEntity__VTable {
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
struct TimelineEntity__StaticFields {
  bool DebugTimeline;
};
struct TimelineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineEntity__VTable vtable;
};
struct HashSet_1_T_Slot_Moon_Timeline_EntityId___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_Moon_Timeline_EntityId___StaticFields {
};
struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_Moon_Timeline_EntityId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_Moon_Timeline_EntityId___VTable vtable;
};
struct IEqualityComparer_1_Moon_Timeline_EntityId___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_Timeline_EntityId___StaticFields {
};
struct IEqualityComparer_1_Moon_Timeline_EntityId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_Timeline_EntityId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_Timeline_EntityId___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_EntityId___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_EntityId___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_EntityId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_EntityId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_EntityId___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_EntityId___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_EntityId___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_EntityId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_EntityId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_EntityId___VTable vtable;
};
struct HashSet_1_Moon_Timeline_EntityId___VTable {
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
struct HashSet_1_Moon_Timeline_EntityId___StaticFields {
};
struct HashSet_1_Moon_Timeline_EntityId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_Moon_Timeline_EntityId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_Moon_Timeline_EntityId___VTable vtable;
};
struct CustomPlaybackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomPlaybackSettings__StaticFields {
};
struct CustomPlaybackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomPlaybackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomPlaybackSettings__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_TimelineEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_TimelineEntity___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_TimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_TimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_TimelineEntity___VTable vtable;
};
struct List_1_Moon_Timeline_TimelineEntity___VTable {
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
struct List_1_Moon_Timeline_TimelineEntity___StaticFields {
  struct TimelineEntity__Array * _emptyArray;
};
struct List_1_Moon_Timeline_TimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_TimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_TimelineEntity___VTable vtable;
};
struct Reaction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Reaction__StaticFields {
};
struct Reaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Reaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Reaction__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_Reaction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_Reaction___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_Reaction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_Reaction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_Reaction___VTable vtable;
};
struct List_1_Moon_Timeline_Reaction___VTable {
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
struct List_1_Moon_Timeline_Reaction___StaticFields {
  struct Reaction__Array * _emptyArray;
};
struct List_1_Moon_Timeline_Reaction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_Reaction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_Reaction___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___VTable vtable;
};
struct IEqualityComparer_1_System_UInt32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_System_UInt32___StaticFields {
};
struct IEqualityComparer_1_System_UInt32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_System_UInt32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_System_UInt32___VTable vtable;
};
struct IEnumerator_1_System_UInt32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_UInt32___StaticFields {
};
struct IEnumerator_1_System_UInt32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_UInt32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_UInt32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___VTable vtable;
};
struct IEnumerator_1_List_1_Moon_Timeline_Reaction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_Moon_Timeline_Reaction___StaticFields {
};
struct IEnumerator_1_List_1_Moon_Timeline_Reaction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_Moon_Timeline_Reaction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_Moon_Timeline_Reaction___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction___VTable {
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
};}