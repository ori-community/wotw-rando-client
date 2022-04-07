namespace app {
struct MoonReference_1_MoonAnimation___VTable {
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
struct MoonReference_1_MoonAnimation___StaticFields {
};
struct MoonReference_1_MoonAnimation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_MoonAnimation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_MoonAnimation___VTable vtable;
};
struct AnimationPlayer__VTable {
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
  VirtualInvokeData OnEntityCreated;
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData Play;
  VirtualInvokeData OnActiveAnimationStopEvent;
};
struct AnimationPlayer__StaticFields {
};
struct AnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationPlayer__VTable vtable;
};

struct BrainEntity__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_IBrainController_ * BrainController;
  struct Dictionary_2_System_Int32_Moon_MoonReference_1_ * m_entryLookup;
  struct List_1_Moon_MoonReference_1__2 * m_entries;
  struct MoonTimeline * m_targetTimeline;
  int32_t m_previewBranchIndex;
  struct List_1_Moon_Timeline_TimelineEntityRecord_ * m_records;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * m_activeTimeline;
  float _CurrentTime_k__BackingField;
  bool _ShouldUpdateRecords_k__BackingField;
  struct IBrainController * m_resolvedBrainController;
  struct ITrimController * _TrimController_k__BackingField;
};
struct BrainEntity {
  struct BrainEntity__Class *klass;
  struct MonitorData *monitor;
  struct BrainEntity__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IBrainController___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IBrainController_ * m_cachedProxyType;
  struct IBrainController * m_volatileValue;
};
struct MoonReference_1_IBrainController_ {
  struct MoonReference_1_IBrainController___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IBrainController___Fields fields;
};
struct IMoonType_1_IBrainController_ {
  struct IMoonType_1_IBrainController___Class *klass;
  struct MonitorData *monitor;
};
struct IBrainController {
  struct IBrainController__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_MoonReference_1___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_MoonReference_1_ {
  struct Dictionary_2_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_MoonReference_1___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___Fields {
  struct Dictionary_2_System_Int32_Moon_MoonReference_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___Fields {
  struct Dictionary_2_System_Int32_Moon_MoonReference_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___Fields fields;
};
struct MoonReference_1_Moon_Timeline_ITimelineEntity___Array {
  struct MoonReference_1_Moon_Timeline_ITimelineEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * vector[32];
};
struct IEnumerator_1_Moon_MoonReference_1__2 {
  struct IEnumerator_1_Moon_MoonReference_1__2__Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_MoonReference_1_ {
  struct ICollection_1_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1_ {
  int32_t key;
  struct MoonReference_1_Moon_Timeline_ITimelineEntity_ * value;
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___Boxed {
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1_ fields;
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___Array {
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_MoonReference_1_ {
  struct IEnumerable_1_Moon_MoonReference_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonReference_1__2__Fields {
  struct MoonReference_1_Moon_Timeline_ITimelineEntity___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonReference_1__2 {
  struct List_1_Moon_MoonReference_1__2__Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonReference_1__2__Fields fields;
};
struct IMoonType_1_IBrainController___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IBrainController___StaticFields {
};
struct IMoonType_1_IBrainController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IBrainController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IBrainController___VTable vtable;
};
struct IBrainController__VTable {
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct IBrainController__StaticFields {
};
struct IBrainController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IBrainController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IBrainController__VTable vtable;
};
struct MoonReference_1_IBrainController___VTable {
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
struct MoonReference_1_IBrainController___StaticFields {
};
struct MoonReference_1_IBrainController___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IBrainController___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IBrainController___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct IEnumerator_1_Moon_MoonReference_1__2__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonReference_1__2__StaticFields {
};
struct IEnumerator_1_Moon_MoonReference_1__2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonReference_1__2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonReference_1__2__VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct ICollection_1_Moon_MoonReference_1___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_MoonReference_1___StaticFields {
};
struct ICollection_1_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_MoonReference_1___VTable vtable;
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct IEnumerable_1_Moon_MoonReference_1___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_MoonReference_1___StaticFields {
};
struct IEnumerable_1_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_MoonReference_1___VTable vtable;
};
struct Dictionary_2_System_Int32_Moon_MoonReference_1___VTable {
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
struct Dictionary_2_System_Int32_Moon_MoonReference_1___StaticFields {
};
struct Dictionary_2_System_Int32_Moon_MoonReference_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_Moon_MoonReference_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_Moon_MoonReference_1___VTable vtable;
};
struct List_1_Moon_MoonReference_1__2__VTable {
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
struct List_1_Moon_MoonReference_1__2__StaticFields {
  struct MoonReference_1_Moon_Timeline_ITimelineEntity___Array * _emptyArray;
};
struct List_1_Moon_MoonReference_1__2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonReference_1__2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonReference_1__2__VTable vtable;
};
struct BrainEntity__VTable {
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
  VirtualInvokeData get_Timelines;
  VirtualInvokeData get_ActiveTimeline;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
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
};
struct BrainEntity__StaticFields {
};
struct BrainEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrainEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrainEntity__VTable vtable;
};

struct DynamicAnimationPlayer__Fields {
  struct AnimationPlayer__Fields _;
};
struct DynamicAnimationPlayer {
  struct DynamicAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct DynamicAnimationPlayer__Fields fields;
};
struct DynamicAnimationPlayer__VTable {
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
  VirtualInvokeData OnEntityCreated;
  VirtualInvokeData get_ExternalTarget;
  VirtualInvokeData Play;
  VirtualInvokeData OnActiveAnimationStopEvent;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
};
struct DynamicAnimationPlayer__StaticFields {
};
struct DynamicAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicAnimationPlayer__VTable vtable;
};

struct __declspec(align(8)) IntensityMultiplierContext__Fields {
  float Multiplier;
};
struct IntensityMultiplierContext {
  struct IntensityMultiplierContext__Class *klass;
  struct MonitorData *monitor;
  struct IntensityMultiplierContext__Fields fields;
};
struct IntensityMultiplierContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntensityMultiplierContext__StaticFields {
};
struct IntensityMultiplierContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntensityMultiplierContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntensityMultiplierContext__VTable vtable;
};

struct __declspec(align(8)) CameraShakeModifierContext__Fields {
  float StrengthMultiplier;
  float SpeedMultiplier;
};
struct CameraShakeModifierContext {
  struct CameraShakeModifierContext__Class *klass;
  struct MonitorData *monitor;
  struct CameraShakeModifierContext__Fields fields;
};
struct CameraShakeModifierContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraShakeModifierContext__StaticFields {
};
struct CameraShakeModifierContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraShakeModifierContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraShakeModifierContext__VTable vtable;
};

enum MoonAnimationPlayer_StopBehaviourType__Enum : int32_t {
  MoonAnimationPlayer_StopBehaviourType__Enum_StopAnimation = 0,
  MoonAnimationPlayer_StopBehaviourType__Enum_None = 1,
};
struct MoonAnimationPlayer_StopBehaviourType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonAnimationPlayer_StopBehaviourType__Enum value;
};
struct MoonAnimationPlayer__Fields {
  struct TimelineEntity__Fields _;
  enum MoonAnimationPlayer_StopBehaviourType__Enum StopBehaviour;
  struct MoonReference_1_MoonAnimator_ * Animator;
  struct MoonReference_1_MoonAnimation_ * Animation;
  int32_t Priority;
  float Speed;
  struct GameObject * PreviewRig;
  struct MoonAnimator * m_animator;
  struct ActiveAnimationHandle m_activeAnimation;
  float m_additiveStrengthMultiplier;
  bool m_delayedAnimation;
  float m_time;
};
struct MoonAnimationPlayer {
  struct MoonAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimationPlayer__Fields fields;
};
struct MoonAnimationPlayer__VTable {
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
  VirtualInvokeData OnEntityCreated;
};
struct MoonAnimationPlayer__StaticFields {
};
struct MoonAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimationPlayer__VTable vtable;
};

struct ScalableAnimationPlayer__Fields {
  struct AnimationPlayer__Fields _;
  struct List_1_Moon_ScalableAnimationPlayer_Event_ * MarkerEvents;
  struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval_ * ScalingAllowedIntervals;
  struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ * m_scenarioPlaybackData;
  int32_t m_currentPlaybackDataVersion;
  float m_previewDuration;
  bool _ShouldUpdatePreviewDuration_k__BackingField;
  bool m_useSimulationDataForPreview;
};
struct ScalableAnimationPlayer {
  struct ScalableAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct ScalableAnimationPlayer__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ScalableAnimationPlayer_Event___Fields {
  struct ScalableAnimationPlayer_Event__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ScalableAnimationPlayer_Event_ {
  struct List_1_Moon_ScalableAnimationPlayer_Event___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ScalableAnimationPlayer_Event___Fields fields;
};
struct __declspec(align(8)) ScalableAnimationPlayer_Event__Fields {
  float NormalizedTime;
  int32_t Id;
  struct String * Title;
  float _SimulatedTime_k__BackingField;
  bool _IsSent_k__BackingField;
  float _VolatilePreviewTime_k__BackingField;
};
struct ScalableAnimationPlayer_Event {
  struct ScalableAnimationPlayer_Event__Class *klass;
  struct MonitorData *monitor;
  struct ScalableAnimationPlayer_Event__Fields fields;
};
struct ScalableAnimationPlayer_Event__Array {
  struct ScalableAnimationPlayer_Event__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScalableAnimationPlayer_Event * vector[32];
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event_ {
  struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ScalableAnimationPlayer_ScalingInterval___Fields {
  struct ScalableAnimationPlayer_ScalingInterval__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval_ {
  struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ScalableAnimationPlayer_ScalingInterval___Fields fields;
};
struct __declspec(align(8)) ScalableAnimationPlayer_ScalingInterval__Fields {
  float NormalizedStart;
  float NormalizedDuration;
};
struct ScalableAnimationPlayer_ScalingInterval {
  struct ScalableAnimationPlayer_ScalingInterval__Class *klass;
  struct MonitorData *monitor;
  struct ScalableAnimationPlayer_ScalingInterval__Fields fields;
};
struct ScalableAnimationPlayer_ScalingInterval__Array {
  struct ScalableAnimationPlayer_ScalingInterval__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScalableAnimationPlayer_ScalingInterval * vector[32];
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_ScalingInterval_ {
  struct IEnumerator_1_Moon_ScalableAnimationPlayer_ScalingInterval___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData___Fields {
  struct ScalableAnimationPlayer_ScenarioPlaybackData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ {
  struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData___Fields fields;
};
struct ScalableAnimationPlayer_ScenarioPlaybackData {
  float Time;
  float NormalizedAnimationTime;
};
struct ScalableAnimationPlayer_ScenarioPlaybackData__Boxed {
  struct ScalableAnimationPlayer_ScenarioPlaybackData__Class *klass;
  struct MonitorData *monitor;
  struct ScalableAnimationPlayer_ScenarioPlaybackData fields;
};
struct ScalableAnimationPlayer_ScenarioPlaybackData__Array {
  struct ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScalableAnimationPlayer_ScenarioPlaybackData vector[32];
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ {
  struct IEnumerator_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData___Class *klass;
  struct MonitorData *monitor;
};
struct ScalableAnimationPlayer_Event__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_CanBeDragged;
  VirtualInvokeData get_EventNormalizedTime;
  VirtualInvokeData set_EventNormalizedTime;
  VirtualInvokeData get_EventId;
  VirtualInvokeData get_IsStatic;
  VirtualInvokeData get_StaticTime;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_IsConstrainable;
  VirtualInvokeData get_IsDeletable;
};
struct ScalableAnimationPlayer_Event__StaticFields {
};
struct ScalableAnimationPlayer_Event__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScalableAnimationPlayer_Event__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScalableAnimationPlayer_Event__VTable vtable;
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___StaticFields {
};
struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_ScalableAnimationPlayer_Event___VTable vtable;
};
struct List_1_Moon_ScalableAnimationPlayer_Event___VTable {
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
};}