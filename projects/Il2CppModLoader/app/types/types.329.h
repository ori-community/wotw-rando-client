namespace app {
struct BrainEntityTester__StaticFields {
};

struct BrainEntityTester__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BrainEntityTester__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BrainEntityTester__VTable vtable;
};

struct SerializationSetupObserverNotifier {
    struct SerializationSetupObserverNotifier__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ISerializedSetupObserver___Fields {
    struct ISerializedSetupObserver__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ISerializedSetupObserver_ {
    struct List_1_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
    struct List_1_ISerializedSetupObserver___Fields fields;
};

struct ISerializedSetupObserver {
    struct ISerializedSetupObserver__Class *klass;
    MonitorData *monitor;
};

struct ISerializedSetupObserver__Array {
    struct ISerializedSetupObserver__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ISerializedSetupObserver *vector[32];
};

struct IEnumerator_1_ISerializedSetupObserver_ {
    struct IEnumerator_1_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_ISerializedSetupObserver___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_ISerializedSetupObserver___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_ISerializedSetupObserver_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_ISerializedSetupObserver_ {
    struct HashSet_1_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_ISerializedSetupObserver___Fields fields;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver_ {
    int32_t hashCode;
    int32_t next;
    struct ISerializedSetupObserver *value;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Boxed {
    struct HashSet_1_T_Slot_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_ISerializedSetupObserver_ fields;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Array {
    struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_ISerializedSetupObserver_ vector[32];
};

struct IEqualityComparer_1_ISerializedSetupObserver_ {
    struct IEqualityComparer_1_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_ISerializedSetupObserver_ {
    struct IEnumerable_1_ISerializedSetupObserver___Class *klass;
    MonitorData *monitor;
};

struct ISerializedSetupObserver__VTable {
    VirtualInvokeData get_ObservedTarget;
    VirtualInvokeData get_ObservedModifierType;
    VirtualInvokeData get_FromStateGuid;
    VirtualInvokeData set_FromStateGuid;
    VirtualInvokeData get_ToStateGuid;
    VirtualInvokeData set_ToStateGuid;
    VirtualInvokeData OnStartObserving;
    VirtualInvokeData OnStopObserving;
    VirtualInvokeData OnSetupChanged;
};

struct ISerializedSetupObserver__StaticFields {
};

struct ISerializedSetupObserver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISerializedSetupObserver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISerializedSetupObserver__VTable vtable;
};

struct ISerializedSetupObserver__Array__VTable {
};

struct ISerializedSetupObserver__Array__StaticFields {
};

struct ISerializedSetupObserver__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ISerializedSetupObserver__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ISerializedSetupObserver__Array__VTable vtable;
};

struct IEnumerator_1_ISerializedSetupObserver___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ISerializedSetupObserver___StaticFields {
};

struct IEnumerator_1_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ISerializedSetupObserver___VTable vtable;
};

struct List_1_ISerializedSetupObserver___VTable {
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

struct List_1_ISerializedSetupObserver___StaticFields {
    struct ISerializedSetupObserver__Array *_emptyArray;
};

struct List_1_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ISerializedSetupObserver___VTable vtable;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___StaticFields {
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_ISerializedSetupObserver___VTable vtable;
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__VTable {
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__StaticFields {
};

struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_T_Slot_ISerializedSetupObserver___Array__VTable vtable;
};

struct IEqualityComparer_1_ISerializedSetupObserver___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_ISerializedSetupObserver___StaticFields {
};

struct IEqualityComparer_1_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_ISerializedSetupObserver___VTable vtable;
};

struct IEnumerable_1_ISerializedSetupObserver___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_ISerializedSetupObserver___StaticFields {
};

struct IEnumerable_1_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_ISerializedSetupObserver___VTable vtable;
};

struct HashSet_1_ISerializedSetupObserver___VTable {
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

struct HashSet_1_ISerializedSetupObserver___StaticFields {
};

struct HashSet_1_ISerializedSetupObserver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HashSet_1_ISerializedSetupObserver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HashSet_1_ISerializedSetupObserver___VTable vtable;
};

struct SerializationSetupObserverNotifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SerializationSetupObserverNotifier__StaticFields {
    struct List_1_ISerializedSetupObserver_ *s_serializedSetupObservers;
    struct HashSet_1_ISerializedSetupObserver_ *s_activeObservers;
};

struct SerializationSetupObserverNotifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SerializationSetupObserverNotifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SerializationSetupObserverNotifier__VTable vtable;
};

struct UberStateEditorTracker {
    struct UberStateEditorTracker__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ITimelineStateRequirementResolver___Fields {
    struct ITimelineStateRequirementResolver__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ITimelineStateRequirementResolver_ {
    struct List_1_ITimelineStateRequirementResolver___Class *klass;
    MonitorData *monitor;
    struct List_1_ITimelineStateRequirementResolver___Fields fields;
};

struct ITimelineStateRequirementResolver {
    struct ITimelineStateRequirementResolver__Class *klass;
    MonitorData *monitor;
};

struct ITimelineStateRequirementResolver__Array {
    struct ITimelineStateRequirementResolver__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ITimelineStateRequirementResolver *vector[32];
};

struct IEnumerator_1_ITimelineStateRequirementResolver_ {
    struct IEnumerator_1_ITimelineStateRequirementResolver___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_ITimelineStateRequirementResolverArray___Fields {
    struct ITimelineStateRequirementResolverArray__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ITimelineStateRequirementResolverArray_ {
    struct List_1_ITimelineStateRequirementResolverArray___Class *klass;
    MonitorData *monitor;
    struct List_1_ITimelineStateRequirementResolverArray___Fields fields;
};

struct ITimelineStateRequirementResolverArray {
    struct ITimelineStateRequirementResolverArray__Class *klass;
    MonitorData *monitor;
};

struct ITimelineStateRequirementResolverArray__Array {
    struct ITimelineStateRequirementResolverArray__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ITimelineStateRequirementResolverArray *vector[32];
};

struct IEnumerator_1_ITimelineStateRequirementResolverArray_ {
    struct IEnumerator_1_ITimelineStateRequirementResolverArray___Class *klass;
    MonitorData *monitor;
};

struct ITimelineStateRequirementResolver__VTable {
    VirtualInvokeData GetRequirementsForTimeline;
};

struct ITimelineStateRequirementResolver__StaticFields {
};

struct ITimelineStateRequirementResolver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineStateRequirementResolver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineStateRequirementResolver__VTable vtable;
};

struct ITimelineStateRequirementResolver__Array__VTable {
};

struct ITimelineStateRequirementResolver__Array__StaticFields {
};

struct ITimelineStateRequirementResolver__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineStateRequirementResolver__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineStateRequirementResolver__Array__VTable vtable;
};

struct IEnumerator_1_ITimelineStateRequirementResolver___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ITimelineStateRequirementResolver___StaticFields {
};

struct IEnumerator_1_ITimelineStateRequirementResolver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ITimelineStateRequirementResolver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ITimelineStateRequirementResolver___VTable vtable;
};

struct List_1_ITimelineStateRequirementResolver___VTable {
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

struct List_1_ITimelineStateRequirementResolver___StaticFields {
    struct ITimelineStateRequirementResolver__Array *_emptyArray;
};

struct List_1_ITimelineStateRequirementResolver___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ITimelineStateRequirementResolver___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ITimelineStateRequirementResolver___VTable vtable;
};

struct ITimelineStateRequirementResolverArray__VTable {
    VirtualInvokeData GetRequirementsForTimeline;
};

struct ITimelineStateRequirementResolverArray__StaticFields {
};

struct ITimelineStateRequirementResolverArray__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineStateRequirementResolverArray__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineStateRequirementResolverArray__VTable vtable;
};

struct ITimelineStateRequirementResolverArray__Array__VTable {
};

struct ITimelineStateRequirementResolverArray__Array__StaticFields {
};

struct ITimelineStateRequirementResolverArray__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineStateRequirementResolverArray__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineStateRequirementResolverArray__Array__VTable vtable;
};

struct IEnumerator_1_ITimelineStateRequirementResolverArray___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ITimelineStateRequirementResolverArray___StaticFields {
};

struct IEnumerator_1_ITimelineStateRequirementResolverArray___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ITimelineStateRequirementResolverArray___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ITimelineStateRequirementResolverArray___VTable vtable;
};

struct List_1_ITimelineStateRequirementResolverArray___VTable {
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

struct List_1_ITimelineStateRequirementResolverArray___StaticFields {
    struct ITimelineStateRequirementResolverArray__Array *_emptyArray;
};

struct List_1_ITimelineStateRequirementResolverArray___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ITimelineStateRequirementResolverArray___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ITimelineStateRequirementResolverArray___VTable vtable;
};

struct UberStateEditorTracker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberStateEditorTracker__StaticFields {
    struct List_1_Moon_IUberStateApplier_ *s_allAppliers;
    struct List_1_ITimelineStateRequirementResolver_ *s_timelineStateResolvers;
    struct List_1_ITimelineStateRequirementResolverArray_ *s_timelineStateResolversArray;
};

struct UberStateEditorTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateEditorTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateEditorTracker__VTable vtable;
};

struct __declspec(align(8)) StateChangeDefinition__Fields {
    struct DesiredUberStateComposite *State;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *MoonTransition;
    struct MoonTimeline *Transition;
};

struct StateChangeDefinition {
    struct StateChangeDefinition__Class *klass;
    MonitorData *monitor;
    struct StateChangeDefinition__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_Moon_Timeline_MoonTimeline___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_Moon_Timeline_MoonTimeline_ *m_cachedProxyType;
    struct MoonTimeline *m_volatileValue;
};

struct MoonReference_1_Moon_Timeline_MoonTimeline_ {
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_Moon_Timeline_MoonTimeline___Fields fields;
};

struct IMoonType_1_Moon_Timeline_MoonTimeline_ {
    struct IMoonType_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

enum class AnimatorPlayState__Enum : int32_t {
    Stopped = 0x00000000,
    Playing = 0x00000001,
    Paused = 0x00000002,
    None = 0x00000003,
};

struct AnimatorPlayState__Enum__Boxed {
    struct AnimatorPlayState__Enum__Class *klass;
    MonitorData *monitor;
    AnimatorPlayState__Enum value;
    
};

struct TimelineEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct TimelineEntity *LeftPadEntity;
    struct TimelineEntity *RightPadEntity;
    int32_t m_instanceId;
    bool m_instanceIdCached;
    bool _ExpandedByDefault_k__BackingField;
    bool _ShowSampling_k__BackingField;
    AnimatorPlayState__Enum _PlayState_k__BackingField;
    
    int32_t m_executionOrder;
    float m_timeScale;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct PlaybackStatus *m_status;
    struct IEventReciever *_EventReciever_k__BackingField;
};

struct TimelineEntity {
    struct TimelineEntity__Class *klass;
    MonitorData *monitor;
    struct TimelineEntity__Fields fields;
};

enum class TimelineStartMode__Enum : int32_t {
    Manual = 0x00000000,
    OnEnable = 0x00000001,
};

struct TimelineStartMode__Enum__Boxed {
    struct TimelineStartMode__Enum__Class *klass;
    MonitorData *monitor;
    TimelineStartMode__Enum value;
    
};

struct MoonTimeline__Fields {
    struct TimelineEntity__Fields _;
    struct CustomPlaybackSettings *CustomPlaybackSettings;
    struct List_1_Moon_Timeline_TimelineEntity_ *m_rootScopeStopRegistrations;
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_ *m_reactionsMap;
    struct Queue_1_Moon_Timeline_Reaction_ *m_helperQueue;
    struct Queue_1_Moon_Timeline_Reaction_ *m_pendingReactions;
    struct TimelineDoubleEndQueue *m_queueToProcess;
    bool IsSkipped;
    bool IsSkippable;
    int32_t indent;
    float AcceptableTimeError;
    struct Action *ContentLengthChanged;
    struct Action *OnStopEvent;
    struct Action *OnStartEvent;
    bool Loop;
    TimelineStartMode__Enum StartMode;
    
    float _CurrentTime_k__BackingField;
    struct Nullable_1_Single_ m_duration;
    struct List_1_Moon_Timeline_ConstraintsMetaData_ *m_constraintMetaDatas;
    struct List_1_Moon_Timeline_TimelineEntityRecord_ *m_entityRecords;
    struct List_1_Moon_Timeline_TimelineMarkerRecord_ *m_markerRecords;
    struct List_1_Moon_Timeline_ExternalTimelineRecord_ *m_externalRecords;
    bool m_isFinished;
    struct TimelineContext *m_timelineContext;
    struct IContext *m_context;
    bool m_markerInitialized;
    bool m_contentEnd;
    bool m_loopRestart;
    struct Nullable_1_Single_ _ForcedDuration_k__BackingField;
    struct ITrimController *_TrimController_k__BackingField;
    bool _SelfManaged_k__BackingField;
};

struct MoonTimeline {
    struct MoonTimeline__Class *klass;
    MonitorData *monitor;
    struct MoonTimeline__Fields fields;
};

struct __declspec(align(8)) PlaybackStatus__Fields {
    bool _IsFinished_k__BackingField;
    bool _IsStarted_k__BackingField;
    float _StartTime_k__BackingField;
    int32_t _StartFrame_k__BackingField;
    float _EndTime_k__BackingField;
    int32_t _EndFrame_k__BackingField;
    float _LocalTime_k__BackingField;
    int32_t _LocalFrame_k__BackingField;
};

struct PlaybackStatus {
    struct PlaybackStatus__Class *klass;
    MonitorData *monitor;
    struct PlaybackStatus__Fields fields;
};

struct IEventReciever {
    struct IEventReciever__Class *klass;
    MonitorData *monitor;
};

struct ITimelineEntityParent {
    struct ITimelineEntityParent__Class *klass;
    MonitorData *monitor;
};

struct EntityId {
    int32_t Id;
};

struct EntityId__Boxed {
    struct EntityId__Class *klass;
    MonitorData *monitor;
    struct EntityId fields;
};

enum class TimelineEntityRecord_EntityPlayState__Enum : int32_t {
    NotStarted = 0x00000000,
    Playing = 0x00000001,
    Paused = 0x00000002,
    Finished = 0x00000003,
};

struct TimelineEntityRecord_EntityPlayState__Enum__Boxed {
    struct TimelineEntityRecord_EntityPlayState__Enum__Class *klass;
    MonitorData *monitor;
    TimelineEntityRecord_EntityPlayState__Enum value;
    
};

enum class TimelineEntityRecord_EntityQueue__Enum : int32_t {
    StartScheduled = 0x00000000,
    EndScheduled = 0x00000001,
    Idle = 0x00000002,
};

struct TimelineEntityRecord_EntityQueue__Enum__Boxed {
    struct TimelineEntityRecord_EntityQueue__Enum__Class *klass;
    MonitorData *monitor;
    TimelineEntityRecord_EntityQueue__Enum value;
    
};

struct __declspec(align(8)) TimelineEntityRecord__Fields {
    struct TimelineConstraint *StartConstraint;
    struct TimelineConstraint *EndConstraint;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *Entity;
    struct EntityId Id;
    TimelineEntityRecord_EntityPlayState__Enum PlayState;
    
    TimelineEntityRecord_EntityQueue__Enum QueueState;
    
    struct IConstrainedEntity *m_constrainedEntity;
    struct ITimelineEntityParent *m_scope;
    struct IEventReciever *m_eventReciever;
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ *m_eventHistory;
};

struct TimelineEntityRecord {
    struct TimelineEntityRecord__Class *klass;
    MonitorData *monitor;
    struct TimelineEntityRecord__Fields fields;
};

enum class ConstraintFlag__Enum : int32_t {
    None = 0x00000000,
    Pad = 0x00000001,
    Overhang = 0x00000002,
};

struct ConstraintFlag__Enum__Boxed {
    struct ConstraintFlag__Enum__Class *klass;
    MonitorData *monitor;
    ConstraintFlag__Enum value;
    
};

struct __declspec(align(8)) TimelineConstraint__Fields {
    float m_timeOffset;
    int32_t m_eventId;
    struct EntityId m_entityId;
    ConstraintFlag__Enum m_flags;
    
    float m_lastValue;
    bool m_dirty;
};

struct TimelineConstraint {
    struct TimelineConstraint__Class *klass;
    MonitorData *monitor;
    struct TimelineConstraint__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_Moon_Timeline_ITimelineEntity___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_Moon_Timeline_ITimelineEntity_ *m_cachedProxyType;
    struct ITimelineEntity *m_volatileValue;
};

struct MoonReference_1_Moon_Timeline_ITimelineEntity_ {
    struct MoonReference_1_Moon_Timeline_ITimelineEntity___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity___Fields fields;
};

struct IMoonType_1_Moon_Timeline_ITimelineEntity_ {
    struct IMoonType_1_Moon_Timeline_ITimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct ITimelineEntity {
    struct ITimelineEntity__Class *klass;
    MonitorData *monitor;
};

struct IConstrainedEntity {
    struct IConstrainedEntity__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ {
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem___Fields fields;
};

struct EventHistoryItem {
    float Time;
    int32_t Frame;
    float GlobalTime;
};

struct EventHistoryItem__Boxed {
    struct EventHistoryItem__Class *klass;
    MonitorData *monitor;
    struct EventHistoryItem fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct EventHistoryItem value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_EventHistoryItem___Fields fields;
};

struct EventHistoryItem__Array {
    struct EventHistoryItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EventHistoryItem vector[32];
};

struct IEnumerator_1_Moon_Timeline_EventHistoryItem_ {
    struct IEnumerator_1_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_Timeline_EventHistoryItem_ {
    struct ICollection_1_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_ {
    int32_t key;
    struct EventHistoryItem value;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Array {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_EventHistoryItem_ {
    struct IEnumerable_1_Moon_Timeline_EventHistoryItem___Class *klass;
    MonitorData *monitor;
};

enum class Constraint__Enum : int32_t {
    Start = 0x00000000,
    End = 0x00000001,
    Marker = 0x00000002,
};

}
