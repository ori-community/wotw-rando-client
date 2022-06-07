namespace app {
struct DesiredUberStateVirtualAnimator__VTable {
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
};

struct DesiredUberStateVirtualAnimator__StaticFields {
};

struct DesiredUberStateVirtualAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesiredUberStateVirtualAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesiredUberStateVirtualAnimator__VTable vtable;
};

enum class VirtualTimelineRepresentationGroup__Enum : int32_t {
    None = 0x00000000,
    Triggers = 0x00000001,
    Camera = 0x00000002,
    Damage = 0x00000003,
    Ai = 0x00000004,
    Rigs = 0x00000005,
};

struct VirtualTimelineRepresentationGroup__Enum__Boxed {
    struct VirtualTimelineRepresentationGroup__Enum__Class *klass;
    MonitorData *monitor;
    VirtualTimelineRepresentationGroup__Enum value;
    
};

struct __declspec(align(8)) GameObjectVirtualAnimator__Fields {
    struct GameObject *m_target;
    struct String *m_customName;
    VirtualTimelineRepresentationGroup__Enum _Group_k__BackingField;
    
    AnimatorPlayState__Enum _PlayState_k__BackingField;
    
    struct PlaybackStatus *_PlaybackStatus_k__BackingField;
};

struct GameObjectVirtualAnimator {
    struct GameObjectVirtualAnimator__Class *klass;
    MonitorData *monitor;
    struct GameObjectVirtualAnimator__Fields fields;
};

struct VirtualTimelineRepresentationGroup__Enum__VTable {
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

struct VirtualTimelineRepresentationGroup__Enum__StaticFields {
};

struct VirtualTimelineRepresentationGroup__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualTimelineRepresentationGroup__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualTimelineRepresentationGroup__Enum__VTable vtable;
};

struct GameObjectVirtualAnimator__VTable {
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
    VirtualInvokeData get_ExternalTarget;
};

struct GameObjectVirtualAnimator__StaticFields {
};

struct GameObjectVirtualAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameObjectVirtualAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameObjectVirtualAnimator__VTable vtable;
};

struct GameObjectVirtualAnimator_Context {
    struct GameObject *GameObject;
};

struct GameObjectVirtualAnimator_Context__Boxed {
    struct GameObjectVirtualAnimator_Context__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameObjectVirtualAnimator_Context__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameObjectVirtualAnimator_Context__VTable vtable;
};

struct ScenarioRoot__Fields {
    struct MonoBehaviour__Fields _;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct MoonTimeline *m_rootTimeline;
};

struct ScenarioRoot {
    struct ScenarioRoot__Class *klass;
    MonitorData *monitor;
    struct ScenarioRoot__Fields fields;
};

struct __declspec(align(8)) List_1_ITimelineParentOwner___Fields {
    struct ITimelineParentOwner__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ITimelineParentOwner_ {
    struct List_1_ITimelineParentOwner___Class *klass;
    MonitorData *monitor;
    struct List_1_ITimelineParentOwner___Fields fields;
};

struct ITimelineParentOwner {
    struct ITimelineParentOwner__Class *klass;
    MonitorData *monitor;
};

struct ITimelineParentOwner__Array {
    struct ITimelineParentOwner__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ITimelineParentOwner *vector[32];
};

struct IEnumerator_1_ITimelineParentOwner_ {
    struct IEnumerator_1_ITimelineParentOwner___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) VirtualClipsBuilder__Fields {
    float m_baseClipLenght;
    int32_t m_blockSize;
    struct Stack_1_VirtualClipsBuilder_BuilderScope_ *m_scopeStack;
    int32_t _AddedChildren_k__BackingField;
    struct VirtualMoonTimeline *_Root_k__BackingField;
};

struct VirtualClipsBuilder {
    struct VirtualClipsBuilder__Class *klass;
    MonitorData *monitor;
    struct VirtualClipsBuilder__Fields fields;
};

struct __declspec(align(8)) Stack_1_VirtualClipsBuilder_BuilderScope___Fields {
    struct VirtualClipsBuilder_BuilderScope__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_VirtualClipsBuilder_BuilderScope_ {
    struct Stack_1_VirtualClipsBuilder_BuilderScope___Class *klass;
    MonitorData *monitor;
    struct Stack_1_VirtualClipsBuilder_BuilderScope___Fields fields;
};

struct __declspec(align(8)) VirtualClipsBuilder_BuilderScope__Fields {
    struct Stack_1_VirtualClipsBuilder_Layout_ *m_layoutStack;
    struct VirtualMoonTimeline *Root;
    int32_t IndentLevel;
    struct ITimelineEntity *LastAdded;
};

struct VirtualClipsBuilder_BuilderScope {
    struct VirtualClipsBuilder_BuilderScope__Class *klass;
    MonitorData *monitor;
    struct VirtualClipsBuilder_BuilderScope__Fields fields;
};

struct __declspec(align(8)) Stack_1_VirtualClipsBuilder_Layout___Fields {
    struct VirtualClipsBuilder_Layout__Enum__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_VirtualClipsBuilder_Layout_ {
    struct Stack_1_VirtualClipsBuilder_Layout___Class *klass;
    MonitorData *monitor;
    struct Stack_1_VirtualClipsBuilder_Layout___Fields fields;
};

enum class VirtualClipsBuilder_Layout__Enum : int32_t {
    Vertical = 0x00000000,
    Horizontal = 0x00000001,
    Block = 0x00000002,
};

struct VirtualClipsBuilder_Layout__Enum__Boxed {
    struct VirtualClipsBuilder_Layout__Enum__Class *klass;
    MonitorData *monitor;
    VirtualClipsBuilder_Layout__Enum value;
    
};

struct VirtualClipsBuilder_Layout__Enum__Array {
    struct VirtualClipsBuilder_Layout__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    VirtualClipsBuilder_Layout__Enum vector[32];
};

struct IEnumerator_1_VirtualClipsBuilder_Layout_ {
    struct IEnumerator_1_VirtualClipsBuilder_Layout___Class *klass;
    MonitorData *monitor;
};

enum class EntityOperationPermit__Enum : int32_t {
    PerformNormally = 0x00000000,
    AllowWithCustomHandling = 0x00000001,
    WontAllow = 0x00000002,
};

struct EntityOperationPermit__Enum__Boxed {
    struct EntityOperationPermit__Enum__Class *klass;
    MonitorData *monitor;
    EntityOperationPermit__Enum value;
    
};

struct __declspec(align(8)) VirtualMoonTimeline__Fields {
    struct String *m_name;
    struct PlaybackStatus *_PlaybackStatus_k__BackingField;
    bool _ExpandedByDefault_k__BackingField;
    struct List_1_Moon_Timeline_ConstraintsMetaData_ *_ConstraintMetaDatas_k__BackingField;
    struct List_1_Moon_Timeline_TimelineMarkerRecord_ *_MarkerRecords_k__BackingField;
    struct List_1_Moon_Timeline_ExternalTimelineRecord_ *_ExternalRecords_k__BackingField;
    struct List_1_Moon_Timeline_TimelineEntityRecord_ *_EntityRecords_k__BackingField;
    struct VirtualTimelineEntityPool *m_pool;
    EntityOperationPermit__Enum RemoveChildPermit;
    
    struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_ *OnChildRemoveCustomHandling;
    bool _ShouldHideHeader_k__BackingField;
    bool _UseHorizontalCollapse_k__BackingField;
    struct ITrimController *_TrimController_k__BackingField;
    struct String *_FullAddress_k__BackingField;
};

struct VirtualMoonTimeline {
    struct VirtualMoonTimeline__Class *klass;
    MonitorData *monitor;
    struct VirtualMoonTimeline__Fields fields;
};

struct __declspec(align(8)) VirtualTimelineEntityPool__Fields {
    struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *m_pool;
};

struct VirtualTimelineEntityPool {
    struct VirtualTimelineEntityPool__Class *klass;
    MonitorData *monitor;
    struct VirtualTimelineEntityPool__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ fields;
};

struct __declspec(align(8)) Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
    struct IPoolableTimelineEntity__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};

struct IPoolableTimelineEntity {
    struct IPoolableTimelineEntity__Class *klass;
    MonitorData *monitor;
};

struct IPoolableTimelineEntity__Array {
    struct IPoolableTimelineEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IPoolableTimelineEntity *vector[32];
};

struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
    struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields {
    struct Dictionary_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Fields fields;
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *vector[32];
};

struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct Type *key;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity_ *value;
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Boxed {
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ fields;
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array {
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity_ {
    struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class *klass;
    MonitorData *monitor;
};

struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_ {
    struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity___Fields fields;
};

struct VirtualClipsBuilder_BuilderScope__Array {
    struct VirtualClipsBuilder_BuilderScope__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VirtualClipsBuilder_BuilderScope *vector[32];
};

struct IEnumerator_1_VirtualClipsBuilder_BuilderScope_ {
    struct IEnumerator_1_VirtualClipsBuilder_BuilderScope___Class *klass;
    MonitorData *monitor;
};

struct ITimelineParentOwner__VTable {
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
};

struct ITimelineParentOwner__StaticFields {
};

struct ITimelineParentOwner__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineParentOwner__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineParentOwner__VTable vtable;
};

struct ITimelineParentOwner__Array__VTable {
};

struct ITimelineParentOwner__Array__StaticFields {
};

struct ITimelineParentOwner__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineParentOwner__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineParentOwner__Array__VTable vtable;
};

struct IEnumerator_1_ITimelineParentOwner___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ITimelineParentOwner___StaticFields {
};

struct IEnumerator_1_ITimelineParentOwner___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ITimelineParentOwner___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ITimelineParentOwner__Array *_emptyArray;
};

struct List_1_ITimelineParentOwner___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ITimelineParentOwner___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ITimelineParentOwner___VTable vtable;
};

struct VirtualClipsBuilder_Layout__Enum__VTable {
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

struct VirtualClipsBuilder_Layout__Enum__StaticFields {
};

struct VirtualClipsBuilder_Layout__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualClipsBuilder_Layout__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualClipsBuilder_Layout__Enum__VTable vtable;
};

struct VirtualClipsBuilder_Layout__Enum__Array__VTable {
};

struct VirtualClipsBuilder_Layout__Enum__Array__StaticFields {
};

struct VirtualClipsBuilder_Layout__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VirtualClipsBuilder_Layout__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VirtualClipsBuilder_Layout__Enum__Array__VTable vtable;
};

struct IEnumerator_1_VirtualClipsBuilder_Layout___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_VirtualClipsBuilder_Layout___StaticFields {
};

struct IEnumerator_1_VirtualClipsBuilder_Layout___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_VirtualClipsBuilder_Layout___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stack_1_VirtualClipsBuilder_Layout___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stack_1_VirtualClipsBuilder_Layout___VTable vtable;
};

struct IPoolableTimelineEntity__VTable {
    VirtualInvokeData Reset;
};

struct IPoolableTimelineEntity__StaticFields {
};

struct IPoolableTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPoolableTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPoolableTimelineEntity__VTable vtable;
};

struct IPoolableTimelineEntity__Array__VTable {
};

struct IPoolableTimelineEntity__Array__StaticFields {
};

struct IPoolableTimelineEntity__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPoolableTimelineEntity__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPoolableTimelineEntity__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable {
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields {
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable vtable;
};

struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};

struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity__1__VTable {
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity__1__StaticFields {
};

struct Queue_1_Moon_Timeline_IPoolableTimelineEntity__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_Moon_Timeline_IPoolableTimelineEntity__1__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable {
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable vtable;
};

struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields {
};

struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Queue_1_Moon_Timeline_IPoolableTimelineEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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

}
