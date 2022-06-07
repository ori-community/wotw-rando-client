namespace app {
struct Constraint__Enum__Boxed {
    struct Constraint__Enum__Class *klass;
    MonitorData *monitor;
    Constraint__Enum value;
    
};

struct __declspec(align(8)) CustomPlaybackSettings__Fields {
    struct HashSet_1_Moon_Timeline_EntityId_ *MutedClips;
    struct HashSet_1_Moon_Timeline_EntityId_ *StartImmediatelyClips;
};

struct CustomPlaybackSettings {
    struct CustomPlaybackSettings__Class *klass;
    MonitorData *monitor;
    struct CustomPlaybackSettings__Fields fields;
};

struct __declspec(align(8)) HashSet_1_Moon_Timeline_EntityId___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_Moon_Timeline_EntityId_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_Moon_Timeline_EntityId_ {
    struct HashSet_1_Moon_Timeline_EntityId___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_Moon_Timeline_EntityId___Fields fields;
};

struct HashSet_1_T_Slot_Moon_Timeline_EntityId_ {
    int32_t hashCode;
    int32_t next;
    struct EntityId value;
};

struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Boxed {
    struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_Moon_Timeline_EntityId_ fields;
};

struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Array {
    struct HashSet_1_T_Slot_Moon_Timeline_EntityId___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_Moon_Timeline_EntityId_ vector[32];
};

struct IEqualityComparer_1_Moon_Timeline_EntityId_ {
    struct IEqualityComparer_1_Moon_Timeline_EntityId___Class *klass;
    MonitorData *monitor;
};

struct EntityId__Array {
    struct EntityId__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EntityId vector[32];
};

struct IEnumerator_1_Moon_Timeline_EntityId_ {
    struct IEnumerator_1_Moon_Timeline_EntityId___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_EntityId_ {
    struct IEnumerable_1_Moon_Timeline_EntityId___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_TimelineEntity___Fields {
    struct TimelineEntity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_TimelineEntity_ {
    struct List_1_Moon_Timeline_TimelineEntity___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_TimelineEntity___Fields fields;
};

struct TimelineEntity__Array {
    struct TimelineEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimelineEntity *vector[32];
};

struct IEnumerator_1_Moon_Timeline_TimelineEntity_ {
    struct IEnumerator_1_Moon_Timeline_TimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_UInt32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    int32_t hashCode;
    int32_t next;
    uint32_t key;
    struct List_1_Moon_Timeline_Reaction_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction_ fields;
};

struct __declspec(align(8)) List_1_Moon_Timeline_Reaction___Fields {
    struct Reaction__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_Reaction_ {
    struct List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_Reaction___Fields fields;
};

struct Reaction {
    struct EntityId EntityId;
    float TimeOffset;
    int32_t EventId;
    struct ITimelineEntityParent *Scope;
    struct TimelineEntityRecord *Record;
};

struct Reaction__Boxed {
    struct Reaction__Class *klass;
    MonitorData *monitor;
    struct Reaction fields;
};

struct Reaction__Array {
    struct Reaction__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Reaction vector[32];
};

struct IEnumerator_1_Moon_Timeline_Reaction_ {
    struct IEnumerator_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_List_1_Moon_Timeline_Reaction_ vector[32];
};

struct IEqualityComparer_1_System_UInt32_ {
    struct IEqualityComparer_1_System_UInt32___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Fields {
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Fields fields;
};

struct IEnumerator_1_System_UInt32_ {
    struct IEnumerator_1_System_UInt32___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Fields {
    struct Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_List_1_Moon_Timeline_Reaction___Fields fields;
};

struct List_1_Moon_Timeline_Reaction___Array {
    struct List_1_Moon_Timeline_Reaction___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_Moon_Timeline_Reaction_ *vector[32];
};

struct IEnumerator_1_List_1_Moon_Timeline_Reaction_ {
    struct IEnumerator_1_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_UInt32_ {
    struct ICollection_1_System_UInt32___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_Moon_Timeline_Reaction_ {
    struct ICollection_1_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    uint32_t key;
    struct List_1_Moon_Timeline_Reaction_ *value;
};

struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction___Boxed {
    struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction_ fields;
};

struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction___Array {
    struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction_ {
    struct IEnumerator_1_KeyValuePair_2_System_UInt32_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_UInt32_ {
    struct IEnumerable_1_System_UInt32___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_Moon_Timeline_Reaction_ {
    struct IEnumerable_1_List_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Queue_1_Moon_Timeline_Reaction___Fields {
    struct Reaction__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_Moon_Timeline_Reaction_ {
    struct Queue_1_Moon_Timeline_Reaction___Class *klass;
    MonitorData *monitor;
    struct Queue_1_Moon_Timeline_Reaction___Fields fields;
};

struct __declspec(align(8)) TimelineDoubleEndQueue__Fields {
    struct List_1_Moon_Timeline_Reaction_ *m_earlyReactions;
    struct List_1_Moon_Timeline_Reaction_ *m_lateReactions;
};

struct TimelineDoubleEndQueue {
    struct TimelineDoubleEndQueue__Class *klass;
    MonitorData *monitor;
    struct TimelineDoubleEndQueue__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Timeline_MoonTimeline___Fields {
    struct MoonTimeline__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_MoonTimeline_ {
    struct List_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_MoonTimeline___Fields fields;
};

struct MoonTimeline__Array {
    struct MoonTimeline__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonTimeline *vector[32];
};

struct IEnumerator_1_Moon_Timeline_MoonTimeline_ {
    struct IEnumerator_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ConstraintsMetaData___Fields {
    struct ConstraintsMetaData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ConstraintsMetaData_ {
    struct List_1_Moon_Timeline_ConstraintsMetaData___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ConstraintsMetaData___Fields fields;
};

struct __declspec(align(8)) ConstraintsMetaData__Fields {
    struct EntityId Entity;
    Constraint__Enum Type;
    
    ConstraintFlag__Enum Flags;
    
};

struct ConstraintsMetaData {
    struct ConstraintsMetaData__Class *klass;
    MonitorData *monitor;
    struct ConstraintsMetaData__Fields fields;
};

struct ConstraintsMetaData__Array {
    struct ConstraintsMetaData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ConstraintsMetaData *vector[32];
};

struct IEnumerator_1_Moon_Timeline_ConstraintsMetaData_ {
    struct IEnumerator_1_Moon_Timeline_ConstraintsMetaData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_TimelineEntityRecord___Fields {
    struct TimelineEntityRecord__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_TimelineEntityRecord_ {
    struct List_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_TimelineEntityRecord___Fields fields;
};

struct TimelineEntityRecord__Array {
    struct TimelineEntityRecord__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimelineEntityRecord *vector[32];
};

struct IEnumerator_1_Moon_Timeline_TimelineEntityRecord_ {
    struct IEnumerator_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_TimelineMarkerRecord___Fields {
    struct TimelineMarkerRecord__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_TimelineMarkerRecord_ {
    struct List_1_Moon_Timeline_TimelineMarkerRecord___Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
    struct TimelineMarkerRecord__Fields fields;
};

struct TimelineMarkerRecord__Array {
    struct TimelineMarkerRecord__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimelineMarkerRecord *vector[32];
};

struct IEnumerator_1_Moon_Timeline_TimelineMarkerRecord_ {
    struct IEnumerator_1_Moon_Timeline_TimelineMarkerRecord___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ExternalTimelineRecord___Fields {
    struct ExternalTimelineRecord__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ExternalTimelineRecord_ {
    struct List_1_Moon_Timeline_ExternalTimelineRecord___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ExternalTimelineRecord___Fields fields;
};

struct __declspec(align(8)) ExternalTimelineRecord__Fields {
    struct EntityId m_id;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *m_entity;
};

struct ExternalTimelineRecord {
    struct ExternalTimelineRecord__Class *klass;
    MonitorData *monitor;
    struct ExternalTimelineRecord__Fields fields;
};

struct ExternalTimelineRecord__Array {
    struct ExternalTimelineRecord__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExternalTimelineRecord *vector[32];
};

struct IEnumerator_1_Moon_Timeline_ExternalTimelineRecord_ {
    struct IEnumerator_1_Moon_Timeline_ExternalTimelineRecord___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) TimelineContext__Fields {
    struct MoonTimeline *_ContainingTimeline_k__BackingField;
    bool _IsSkippable_k__BackingField;
};

struct TimelineContext {
    struct TimelineContext__Class *klass;
    MonitorData *monitor;
    struct TimelineContext__Fields fields;
};

struct ITrimController {
    struct ITrimController__Class *klass;
    MonitorData *monitor;
};

struct IConstrainedEntityWithChildren {
    struct IConstrainedEntityWithChildren__Class *klass;
    MonitorData *monitor;
};

struct IConstraint {
    struct IConstraint__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_IEventDescriptor___Fields {
    struct IEventDescriptor__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_IEventDescriptor_ {
    struct List_1_Moon_Timeline_IEventDescriptor___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_IEventDescriptor___Fields fields;
};

struct IEventDescriptor {
    struct IEventDescriptor__Class *klass;
    MonitorData *monitor;
};

struct IEventDescriptor__Array {
    struct IEventDescriptor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IEventDescriptor *vector[32];
};

struct IEnumerator_1_Moon_Timeline_IEventDescriptor_ {
    struct IEnumerator_1_Moon_Timeline_IEventDescriptor___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_Moon_Timeline_MoonTimeline___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_Moon_Timeline_MoonTimeline___StaticFields {
};

struct IMoonType_1_Moon_Timeline_MoonTimeline___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_Moon_Timeline_MoonTimeline___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_Moon_Timeline_MoonTimeline___VTable vtable;
};

struct AnimatorPlayState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct AnimatorPlayState__Enum__StaticFields {
};

struct AnimatorPlayState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorPlayState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorPlayState__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlaybackStatus__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEventReciever__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineEntityParent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityId__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityId__VTable vtable;
};

struct ConstraintFlag__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ConstraintFlag__Enum__StaticFields {
};

struct ConstraintFlag__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConstraintFlag__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConstraintFlag__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineConstraint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};

struct ITimelineEntity__VTable {
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
};

struct ITimelineEntity__StaticFields {
};

struct ITimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineEntity__VTable vtable;
};

struct ITimelineEntity___VTable {
};

struct ITimelineEntity___StaticFields {
};

struct ITimelineEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineEntity___VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};

struct TimelineEntityRecord_EntityPlayState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct TimelineEntityRecord_EntityPlayState__Enum__StaticFields {
};

struct TimelineEntityRecord_EntityPlayState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineEntityRecord_EntityPlayState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineEntityRecord_EntityPlayState__Enum__VTable vtable;
};

struct TimelineEntityRecord_EntityQueue__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct TimelineEntityRecord_EntityQueue__Enum__StaticFields {
};

struct TimelineEntityRecord_EntityQueue__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineEntityRecord_EntityQueue__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineEntityRecord_EntityQueue__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IConstrainedEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHistoryItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_EventHistoryItem___Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_EventHistoryItem___VTable vtable;
};

struct EventHistoryItem__Array__VTable {
};

struct EventHistoryItem__Array__StaticFields {
};

struct EventHistoryItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHistoryItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventHistoryItem__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_EventHistoryItem___VTable {
    VirtualInvokeData get_Current;
};

}
