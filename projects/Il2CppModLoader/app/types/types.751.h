namespace app {
struct StatisticianEntity__StaticFields {
};

struct StatisticianEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianEntity__VTable vtable;
};

enum class StatisticianIdle_IdleStates__Enum : int32_t {
    Paused = 0x00000000,
    TrackingPlayer = 0x00000001,
    HideToTop = 0x00000002,
    IdleTopA = 0x00000003,
    IdleTopB = 0x00000004,
    TopToHide = 0x00000005,
    PeekLeft = 0x00000006,
    PeekRight = 0x00000007,
};

struct StatisticianIdle_IdleStates__Enum__Boxed {
    struct StatisticianIdle_IdleStates__Enum__Class *klass;
    MonitorData *monitor;
    StatisticianIdle_IdleStates__Enum value;
    
};

struct StatisticianIdle__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline *TrackingPlayer;
    struct MoonTimeline *HideToTop;
    struct MoonTimeline *IdleTopA;
    struct MoonTimeline *IdleTopB;
    struct MoonTimeline *TopToHide;
    struct MoonTimeline *PeekLeft;
    struct MoonTimeline *PeekRight;
    struct MoonTimeline *TalkIdle;
    struct IKLookPostprocess *HeadIK;
    StatisticianIdle_IdleStates__Enum m_currentState;
    
    struct MoonTimeline *m_currentTimeline;
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_ *m_recentlyUsedStates;
    float m_desiredIkWeigth;
    float m_trackingTimer;
    struct StatisticianEntity *m_statisticianEntity;
};

struct StatisticianIdle {
    struct StatisticianIdle__Class *klass;
    MonitorData *monitor;
    struct StatisticianIdle__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_StatisticianIdle_IdleStates_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_ {
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean_ {
    int32_t hashCode;
    int32_t next;
    StatisticianIdle_IdleStates__Enum key;
    
    bool value;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array {
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean_ vector[32];
};

struct IEqualityComparer_1_StatisticianIdle_IdleStates_ {
    struct IEqualityComparer_1_StatisticianIdle_IdleStates___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___Fields {
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___Fields fields;
};

struct StatisticianIdle_IdleStates__Enum__Array {
    struct StatisticianIdle_IdleStates__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    StatisticianIdle_IdleStates__Enum vector[32];
};

struct IEnumerator_1_StatisticianIdle_IdleStates_ {
    struct IEnumerator_1_StatisticianIdle_IdleStates___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___Fields {
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___Fields fields;
};

struct ICollection_1_StatisticianIdle_IdleStates_ {
    struct ICollection_1_StatisticianIdle_IdleStates___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean_ {
    StatisticianIdle_IdleStates__Enum key;
    
    bool value;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Boxed {
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean_ fields;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array {
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean_ {
    struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_StatisticianIdle_IdleStates_ {
    struct IEnumerable_1_StatisticianIdle_IdleStates___Class *klass;
    MonitorData *monitor;
};

struct StatisticianIdle_IdleStates__Enum__VTable {
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

struct StatisticianIdle_IdleStates__Enum__StaticFields {
};

struct StatisticianIdle_IdleStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianIdle_IdleStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianIdle_IdleStates__Enum__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_StatisticianIdle_IdleStates_System_Boolean___Array__VTable vtable;
};

struct IEqualityComparer_1_StatisticianIdle_IdleStates___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_StatisticianIdle_IdleStates___StaticFields {
};

struct IEqualityComparer_1_StatisticianIdle_IdleStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_StatisticianIdle_IdleStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_StatisticianIdle_IdleStates___VTable vtable;
};

struct StatisticianIdle_IdleStates__Enum__Array__VTable {
};

struct StatisticianIdle_IdleStates__Enum__Array__StaticFields {
};

struct StatisticianIdle_IdleStates__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianIdle_IdleStates__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianIdle_IdleStates__Enum__Array__VTable vtable;
};

struct IEnumerator_1_StatisticianIdle_IdleStates___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_StatisticianIdle_IdleStates___StaticFields {
};

struct IEnumerator_1_StatisticianIdle_IdleStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_StatisticianIdle_IdleStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_StatisticianIdle_IdleStates___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct ICollection_1_StatisticianIdle_IdleStates___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_StatisticianIdle_IdleStates___StaticFields {
};

struct ICollection_1_StatisticianIdle_IdleStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_StatisticianIdle_IdleStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_StatisticianIdle_IdleStates___VTable vtable;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__VTable {
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__StaticFields {
};

struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct IEnumerable_1_StatisticianIdle_IdleStates___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_StatisticianIdle_IdleStates___StaticFields {
};

struct IEnumerable_1_StatisticianIdle_IdleStates___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_StatisticianIdle_IdleStates___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_StatisticianIdle_IdleStates___VTable vtable;
};

struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___VTable {
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

struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields {
};

struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean___VTable vtable;
};

struct StatisticianIdle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};

struct StatisticianIdle__StaticFields {
};

struct StatisticianIdle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianIdle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianIdle__VTable vtable;
};

enum class StatisticianInteractionBehaviour_InteractionStates__Enum : int32_t {
    Intro = 0x00000000,
    ShowingStats = 0x00000001,
    Farewell = 0x00000002,
    Hiding = 0x00000003,
};

struct StatisticianInteractionBehaviour_InteractionStates__Enum__Boxed {
    struct StatisticianInteractionBehaviour_InteractionStates__Enum__Class *klass;
    MonitorData *monitor;
    StatisticianInteractionBehaviour_InteractionStates__Enum value;
    
};

struct StatisticianInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline *BushToFrontIdle;
    struct MoonTimeline *FrontIdleA;
    struct MoonTimeline *FrontTalkA;
    struct MoonTimeline *TalkAtoB;
    struct MoonTimeline *FrontIdleB;
    struct MoonTimeline *FrontTalkB;
    struct MoonTimeline *FrontToBush;
    struct MoonReference_1_IDialogCallbackNotifier_ *ShowStatsDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_ *FarewellDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_ *OfferStatsDialogNode;
    struct MoonTimeline *m_currentTimeline;
    StatisticianInteractionBehaviour_InteractionStates__Enum m_currentState;
    
    struct IDialogCallbackNotifier *m_resolvedShowStatsNode;
    struct IDialogCallbackNotifier *m_resolvedFarewellNode;
    struct IDialogCallbackNotifier *m_resolvedOfferStatsNode;
    struct NPCEntity *m_npcEntity;
};

struct StatisticianInteractionBehaviour {
    struct StatisticianInteractionBehaviour__Class *klass;
    MonitorData *monitor;
    struct StatisticianInteractionBehaviour__Fields fields;
};

struct StatisticianInteractionBehaviour_InteractionStates__Enum__VTable {
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

struct StatisticianInteractionBehaviour_InteractionStates__Enum__StaticFields {
};

struct StatisticianInteractionBehaviour_InteractionStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianInteractionBehaviour_InteractionStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianInteractionBehaviour_InteractionStates__Enum__VTable vtable;
};

struct StatisticianInteractionBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct StatisticianInteractionBehaviour__StaticFields {
};

struct StatisticianInteractionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianInteractionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianInteractionBehaviour__VTable vtable;
};

struct StatisticianPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
};

struct StatisticianPlaceholder {
    struct StatisticianPlaceholder__Class *klass;
    MonitorData *monitor;
    struct StatisticianPlaceholder__Fields fields;
};

struct StatisticianPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_Prefab;
    VirtualInvokeData get_RequiresGroundToSpawn;
    VirtualInvokeData get_CheckForOverlap;
    VirtualInvokeData ClearPrefabLinks;
    VirtualInvokeData get_CanSpawn;
    VirtualInvokeData InstantiateInstance;
    VirtualInvokeData PoolCurrentInstance;
    VirtualInvokeData Spawn;
    VirtualInvokeData OnStart;
    VirtualInvokeData OnPlaceholderEnable;
    VirtualInvokeData OnPlaceholderDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnHealthZero;
    VirtualInvokeData OnDeath;
    VirtualInvokeData UpdateAutoSpawnState;
    VirtualInvokeData UpdateSpawnOnEventState;
    VirtualInvokeData get_IsOnScreenPaddedExtended;
    VirtualInvokeData get_IsOnScreenPadded;
    VirtualInvokeData get_IsOnScreen;
    VirtualInvokeData InstantiateFromPooledObj;
    VirtualInvokeData IsUsingVariations;
    VirtualInvokeData CanUseAutosetupPositionInOnSand;
};

struct StatisticianPlaceholder__StaticFields {
};

struct StatisticianPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticianPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticianPlaceholder__VTable vtable;
};

struct TreeKeeperEntity__Fields {
    struct NPCEntity__Fields _;
};

struct TreeKeeperEntity {
    struct TreeKeeperEntity__Class *klass;
    MonitorData *monitor;
    struct TreeKeeperEntity__Fields fields;
};

struct TreeKeeperEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_BehaviourTree;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ShouldKillBubble;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData get_ExternalID;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData IPortalVisitor_get_Position;
    VirtualInvokeData IPortalVisitor_set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
    VirtualInvokeData get_IsFacingTarget;
    VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
    VirtualInvokeData get_ScreenPadding;
    VirtualInvokeData IsBehaviourTreePaused;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnAwake;
    VirtualInvokeData GetBehaviourTree;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData UnserializedInitialization;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
    VirtualInvokeData OnSuspendedStay;
    VirtualInvokeData OnUpdate_2;
    VirtualInvokeData EnterSpawningState;
    VirtualInvokeData UpdateSpawningState;
    VirtualInvokeData ExitSpawningState;
    VirtualInvokeData EnterDecisionMakingState;
    VirtualInvokeData UpdateDecisionMakingState;
    VirtualInvokeData ExitDecisionMakingState;
    VirtualInvokeData EnterReactionState;
    VirtualInvokeData UpdateReactionState;
    VirtualInvokeData ExitReactionState;
    VirtualInvokeData EnterCinematicState;
    VirtualInvokeData UpdateCinematicState;
    VirtualInvokeData ExitCinematicState;
    VirtualInvokeData GetActiveLocomotion;
    VirtualInvokeData OnContactDamageDealt;
    VirtualInvokeData OnHandleFireDamage;
    VirtualInvokeData OnHandleIceDamage;
    VirtualInvokeData OnDamageReceived;
    VirtualInvokeData OnDamageBlocked;
    VirtualInvokeData DeactivateDamageReceivers;
    VirtualInvokeData InstantKill;
    VirtualInvokeData OnDied;
    VirtualInvokeData SpawnOrbs;
    VirtualInvokeData OnDiedOutOfBounds;
    VirtualInvokeData OnEndDeathBehaviour;
    VirtualInvokeData OnPostRestoreCheckpoint;
    VirtualInvokeData ResetEntity;
    VirtualInvokeData GetHitStopAutoSuspendables_1;
    VirtualInvokeData OnHitStopStart_1;
    VirtualInvokeData OnHitStopEnd_1;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData IsFacingPoint;
    VirtualInvokeData ResolveDamage_1;
    VirtualInvokeData get_CameraTargetActive_1;
    VirtualInvokeData get_CameraTargetPosition_1;
    VirtualInvokeData get_CameraTargetPadding_1;
    VirtualInvokeData get_CameraInfluenceMinDist_1;
    VirtualInvokeData get_CameraInfluenceMaxDist_1;
    VirtualInvokeData get_CameraZoomFactor_1;
    VirtualInvokeData get_TargetType_1;
    VirtualInvokeData AdjustCameraTargetWeight_1;
    VirtualInvokeData get_IsAggroed;
    VirtualInvokeData get_InteractableType;
    VirtualInvokeData CanInteractWithCharacter;
    VirtualInvokeData OnInteractionStart;
    VirtualInvokeData InteractionUpdate;
    VirtualInvokeData OnInteractionEnd;
    VirtualInvokeData ShouldFinishInteraction;
    VirtualInvokeData get_ActivationMode;
    VirtualInvokeData get_ActivationButton;
    VirtualInvokeData get_InteractionMessageHint;
    VirtualInvokeData get_DialogActorName;
    VirtualInvokeData get_DialogActorAnimator;
    VirtualInvokeData get_DialogActorPosition;
    VirtualInvokeData get_InteractionActorName;
    VirtualInvokeData get_InteractionActorAnimator;
    VirtualInvokeData get_InteractionActorPosition;
    VirtualInvokeData get_CanEffectivelyStartInteraction;
    VirtualInvokeData get_ActivationButton_1;
    VirtualInvokeData get_DialogActorName_1;
    VirtualInvokeData get_InteractionActorName_1;
    VirtualInvokeData UpdateAnimParameter;
    VirtualInvokeData CanInteractWithCharacter_1;
    VirtualInvokeData OnInteractionStart_1;
    VirtualInvokeData InteractionUpdate_1;
    VirtualInvokeData OnInteractionEnd_1;
    VirtualInvokeData get_ActivationMode_1;
    VirtualInvokeData SetInteractionCameraOffsetZone;
};

struct TreeKeeperEntity__StaticFields {
};

struct TreeKeeperEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TreeKeeperEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TreeKeeperEntity__VTable vtable;
};

struct TreeKeeperPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
};

struct TreeKeeperPlaceholder {
    struct TreeKeeperPlaceholder__Class *klass;
    MonitorData *monitor;
    struct TreeKeeperPlaceholder__Fields fields;
};

struct TreeKeeperPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_Prefab;
    VirtualInvokeData get_RequiresGroundToSpawn;
    VirtualInvokeData get_CheckForOverlap;
    VirtualInvokeData ClearPrefabLinks;
    VirtualInvokeData get_CanSpawn;
    VirtualInvokeData InstantiateInstance;
    VirtualInvokeData PoolCurrentInstance;
    VirtualInvokeData Spawn;
    VirtualInvokeData OnStart;
    VirtualInvokeData OnPlaceholderEnable;
    VirtualInvokeData OnPlaceholderDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnHealthZero;
    VirtualInvokeData OnDeath;
    VirtualInvokeData UpdateAutoSpawnState;
    VirtualInvokeData UpdateSpawnOnEventState;
    VirtualInvokeData get_IsOnScreenPaddedExtended;
    VirtualInvokeData get_IsOnScreenPadded;
    VirtualInvokeData get_IsOnScreen;
    VirtualInvokeData InstantiateFromPooledObj;
    VirtualInvokeData IsUsingVariations;
    VirtualInvokeData CanUseAutosetupPositionInOnSand;
};

struct TreeKeeperPlaceholder__StaticFields {
};

struct TreeKeeperPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TreeKeeperPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TreeKeeperPlaceholder__VTable vtable;
};

struct WandererDesertQuestCompletedInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct WandererEntity *m_wandererEntity;
    struct GroundEntityLocomotion *m_locomotion;
    struct WandererTurningBehaviour *m_turningBehaviour;
    struct WandererNPC *m_npc;
};

struct WandererDesertQuestCompletedInteractionBehaviour {
    struct WandererDesertQuestCompletedInteractionBehaviour__Class *klass;
    MonitorData *monitor;
    struct WandererDesertQuestCompletedInteractionBehaviour__Fields fields;
};

enum class TokkInteractionSpot__Enum : int32_t {
    Placeholder = -1,
    InkwaterMarshFirstEncounter = 0x00000000,
    InkwaterMarshBeforeKwolok = 0x00000001,
    InkwaterMarshBeforeMill = 0x00000002,
    WindsweptWastes = 0x00000003,
    LostNeedle = 0x00000004,
};

struct TokkInteractionSpot__Enum__Boxed {
    struct TokkInteractionSpot__Enum__Class *klass;
    MonitorData *monitor;
    TokkInteractionSpot__Enum value;
    
};

enum class WandererEntity_TokkTurningPattern__Enum : int32_t {
    Never = 0x00000000,
    Talking = 0x00000001,
    Always = 0x00000002,
};

struct WandererEntity_TokkTurningPattern__Enum__Boxed {
    struct WandererEntity_TokkTurningPattern__Enum__Class *klass;
    MonitorData *monitor;
    WandererEntity_TokkTurningPattern__Enum value;
    
};

}
