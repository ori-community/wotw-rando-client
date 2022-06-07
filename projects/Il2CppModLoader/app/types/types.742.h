namespace app {
struct WispMessageIcon_Wisp__Enum__StaticFields {
};

struct WispMessageIcon_Wisp__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WispMessageIcon_Wisp__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WispMessageIcon_Wisp__Enum__VTable vtable;
};

struct MessageZoneB__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider *HintMessage;
    float Duration;
    struct Condition_1 *Condition;
    struct MessageBox *m_messageBox;
    struct Transform *m_transform;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct MessageZoneB {
    struct MessageZoneB__Class *klass;
    MonitorData *monitor;
    struct MessageZoneB__Fields fields;
};

struct MessageZoneB__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Category;
};

struct MessageZoneB__StaticFields {
};

struct MessageZoneB__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MessageZoneB__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MessageZoneB__VTable vtable;
};

struct MonoSingleInstance_1_OnScreenPositions___Fields {
    struct MonoBehaviour__Fields _;
};

struct MonoSingleInstance_1_OnScreenPositions_ {
    struct MonoSingleInstance_1_OnScreenPositions___Class *klass;
    MonitorData *monitor;
    struct MonoSingleInstance_1_OnScreenPositions___Fields fields;
};

struct OnScreenPositions__Fields {
    struct MonoSingleInstance_1_OnScreenPositions___Fields _;
    struct Transform *TopLeftTransform;
    struct Vector3 m_topLeft;
    struct Transform *TopCenterTransform;
    struct Vector3 m_topCenter;
    struct Transform *TopRightTransform;
    struct Vector3 m_topRight;
    struct Transform *MiddleLeftTransform;
    struct Vector3 m_middleLeft;
    struct Transform *MiddleCenterTransform;
    struct Vector3 m_middleCenter;
    struct Transform *MiddleRightTransform;
    struct Vector3 m_middleRight;
    struct Transform *BottomLeftTransform;
    struct Vector3 m_bottomLeft;
    struct Transform *BottomCenterTransform;
    struct Vector3 m_bottomCenter;
    struct Transform *BottomRightTransform;
    struct Vector3 m_bottomRight;
};

struct OnScreenPositions {
    struct OnScreenPositions__Class *klass;
    MonitorData *monitor;
    struct OnScreenPositions__Fields fields;
};

struct MonoSingleInstance_1_OnScreenPositions___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MonoSingleInstance_1_OnScreenPositions___StaticFields {
    struct OnScreenPositions *m_instance;
    bool m_initialized;
};

struct MonoSingleInstance_1_OnScreenPositions___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoSingleInstance_1_OnScreenPositions___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoSingleInstance_1_OnScreenPositions___VTable vtable;
};

struct OnScreenPositions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OnScreenPositions__StaticFields {
};

struct OnScreenPositions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OnScreenPositions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OnScreenPositions__VTable vtable;
};

struct FallingRockSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *MainTimeline;
    struct MoonTimeline *DestroyTimeline;
    struct DamageDealer *DamageDealer;
    struct GameObject *RockRoot;
    struct Transform *RockObject;
    bool DestoryRockOnCollision;
    float SpeedReductionPenalty;
    bool m_insideFrustum;
    struct Bounds m_bounds;
};

struct FallingRockSetup {
    struct FallingRockSetup__Class *klass;
    MonitorData *monitor;
    struct FallingRockSetup__Fields fields;
};

struct FallingRockSetup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
};

struct FallingRockSetup__StaticFields {
};

struct FallingRockSetup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallingRockSetup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallingRockSetup__VTable vtable;
};

struct __declspec(align(8)) MoonSet_1_Moon_EntityBehaviour___Fields {
    struct List_1_Moon_EntityBehaviour_ *m_values;
    struct Dictionary_2_System_Type_Moon_EntityBehaviour_ *m_typeToValue;
};

struct MoonSet_1_Moon_EntityBehaviour_ {
    struct MoonSet_1_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct MoonSet_1_Moon_EntityBehaviour___Fields fields;
};

struct BehaviourSet__Fields {
    struct MoonSet_1_Moon_EntityBehaviour___Fields _;
};

struct BehaviourSet {
    struct BehaviourSet__Class *klass;
    MonitorData *monitor;
    struct BehaviourSet__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_EntityBehaviour___Fields {
    struct EntityBehaviour__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_EntityBehaviour_ {
    struct List_1_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_EntityBehaviour___Fields fields;
};

struct IEnumerator_1_Moon_EntityBehaviour_ {
    struct IEnumerator_1_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Type_Moon_EntityBehaviour___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Type_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Type_Moon_EntityBehaviour_ {
    struct Dictionary_2_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Type_Moon_EntityBehaviour___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour_ {
    int32_t hashCode;
    int32_t next;
    struct Type *key;
    struct EntityBehaviour *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___Fields {
    struct Dictionary_2_System_Type_Moon_EntityBehaviour_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___Fields {
    struct Dictionary_2_System_Type_Moon_EntityBehaviour_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___Fields fields;
};

struct ICollection_1_Moon_EntityBehaviour_ {
    struct ICollection_1_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour_ {
    struct Type *key;
    struct EntityBehaviour *value;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Boxed {
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour_ fields;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array {
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour_ {
    struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_EntityBehaviour_ {
    struct IEnumerable_1_Moon_EntityBehaviour___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_Moon_EntityBehaviour___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_EntityBehaviour___StaticFields {
};

struct IEnumerator_1_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_EntityBehaviour___VTable vtable;
};

struct List_1_Moon_EntityBehaviour___VTable {
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

struct List_1_Moon_EntityBehaviour___StaticFields {
    struct EntityBehaviour__Array *_emptyArray;
};

struct List_1_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_EntityBehaviour___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_EntityBehaviour___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct ICollection_1_Moon_EntityBehaviour___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_EntityBehaviour___StaticFields {
};

struct ICollection_1_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_EntityBehaviour___VTable vtable;
};

struct EntityBehaviour___VTable {
};

struct EntityBehaviour___StaticFields {
};

struct EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviour___VTable vtable;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__VTable {
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__StaticFields {
};

struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Type_Moon_EntityBehaviour___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct IEnumerable_1_Moon_EntityBehaviour___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_EntityBehaviour___StaticFields {
};

struct IEnumerable_1_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_EntityBehaviour___VTable vtable;
};

struct Dictionary_2_System_Type_Moon_EntityBehaviour___VTable {
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

struct Dictionary_2_System_Type_Moon_EntityBehaviour___StaticFields {
};

struct Dictionary_2_System_Type_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Type_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Type_Moon_EntityBehaviour___VTable vtable;
};

struct MoonSet_1_Moon_EntityBehaviour___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonSet_1_Moon_EntityBehaviour___StaticFields {
};

struct MoonSet_1_Moon_EntityBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonSet_1_Moon_EntityBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonSet_1_Moon_EntityBehaviour___VTable vtable;
};

struct BehaviourSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BehaviourSet__StaticFields {
};

struct BehaviourSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BehaviourSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BehaviourSet__VTable vtable;
};

struct ObjectBasedMotionBlur__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_GameObject_ *m_generatedGameObjects;
    struct Vector3 m_oldPosition;
    float MotionBlurAmount;
};

struct ObjectBasedMotionBlur {
    struct ObjectBasedMotionBlur__Class *klass;
    MonitorData *monitor;
    struct ObjectBasedMotionBlur__Fields fields;
};

struct ObjectBasedMotionBlur__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ObjectBasedMotionBlur__StaticFields {
};

struct ObjectBasedMotionBlur__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectBasedMotionBlur__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectBasedMotionBlur__VTable vtable;
};

struct __declspec(align(8)) BreadCrumbPositionTracker__Fields {
    struct List_1_UnityEngine_Vector2_ *m_breadCrumbs;
    float m_trackTimer;
    float m_trackInterval;
    float m_killTimer;
    float m_pointLifetime;
};

struct BreadCrumbPositionTracker {
    struct BreadCrumbPositionTracker__Class *klass;
    MonitorData *monitor;
    struct BreadCrumbPositionTracker__Fields fields;
};

struct BreadCrumbPositionTracker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BreadCrumbPositionTracker__StaticFields {
};

struct BreadCrumbPositionTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BreadCrumbPositionTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BreadCrumbPositionTracker__VTable vtable;
};

struct NavigationAgentLegacy__Fields {
    struct MonoBehaviour__Fields _;
};

struct NavigationAgentLegacy {
    struct NavigationAgentLegacy__Class *klass;
    MonitorData *monitor;
    struct NavigationAgentLegacy__Fields fields;
};

struct NavigationAgentLegacy__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NavigationAgentLegacy__StaticFields {
};

struct NavigationAgentLegacy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NavigationAgentLegacy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NavigationAgentLegacy__VTable vtable;
};

struct NavigationPlannerComponent__Fields {
    struct MonoBehaviour__Fields _;
};

struct NavigationPlannerComponent {
    struct NavigationPlannerComponent__Class *klass;
    MonitorData *monitor;
    struct NavigationPlannerComponent__Fields fields;
};

struct NavigationPlannerComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NavigationPlannerComponent__StaticFields {
};

struct NavigationPlannerComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NavigationPlannerComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NavigationPlannerComponent__VTable vtable;
};

struct Comparer_1_UnityEngine_RaycastHit_ {
    struct Comparer_1_UnityEngine_RaycastHit___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) ComparisonComparer_1_UnityEngine_RaycastHit___Fields {
    struct Comparison_1_UnityEngine_RaycastHit_ *_comparison;
};

struct ComparisonComparer_1_UnityEngine_RaycastHit_ {
    struct ComparisonComparer_1_UnityEngine_RaycastHit___Class *klass;
    MonitorData *monitor;
    struct ComparisonComparer_1_UnityEngine_RaycastHit___Fields fields;
};

struct ComparisonComparer_1_UnityEngine_RaycastHit___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IComparer_Compare;
    VirtualInvokeData Compare;
    VirtualInvokeData Compare_1;
};

struct ComparisonComparer_1_UnityEngine_RaycastHit___StaticFields {
};

struct ComparisonComparer_1_UnityEngine_RaycastHit___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComparisonComparer_1_UnityEngine_RaycastHit___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComparisonComparer_1_UnityEngine_RaycastHit___VTable vtable;
};

struct Comparer_1_UnityEngine_RaycastHit___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IComparer_Compare;
    VirtualInvokeData Compare;
    VirtualInvokeData __unknown;
};

struct Comparer_1_UnityEngine_RaycastHit___StaticFields {
    struct Comparer_1_UnityEngine_RaycastHit_ *defaultComparer;
};

struct Comparer_1_UnityEngine_RaycastHit___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparer_1_UnityEngine_RaycastHit___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparer_1_UnityEngine_RaycastHit___VTable vtable;
};

struct PhysicsUtils_c {
    struct PhysicsUtils_c__Class *klass;
    MonitorData *monitor;
};

struct PhysicsUtils_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsUtils_c__StaticFields {
    struct PhysicsUtils_c *__9;
};

struct PhysicsUtils_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsUtils_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsUtils_c__VTable vtable;
};

struct SceneNavigationInfo__Fields {
    struct MonoBehaviour__Fields _;
};

struct SceneNavigationInfo {
    struct SceneNavigationInfo__Class *klass;
    MonitorData *monitor;
    struct SceneNavigationInfo__Fields fields;
};

struct SceneNavigationInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SceneNavigationInfo__StaticFields {
};

struct SceneNavigationInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneNavigationInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneNavigationInfo__VTable vtable;
};

struct IntimidateNightcrawlerAction__Fields {
    struct ActionMethod__Fields _;
    struct NightCrawlerRevealTorchTrigger *TorchTrigger;
    struct ActionSequence *ForthIntimidationActionSequence;
    int32_t m_intimidationCount;
};

struct IntimidateNightcrawlerAction {
    struct IntimidateNightcrawlerAction__Class *klass;
    MonitorData *monitor;
    struct IntimidateNightcrawlerAction__Fields fields;
};

struct NightCrawlerRevealTorchTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Joint;
    bool IsNearTorch;
    struct Collider__Array *CollidersToDisable;
    struct GameObject__Array *ObjectsToDisablePermanently;
    struct LegacyDamageReciever *DamageReceiver;
    struct ActionMethod *OnHitAction;
    float nearTorchTime;
};

struct NightCrawlerRevealTorchTrigger {
    struct NightCrawlerRevealTorchTrigger__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerRevealTorchTrigger__Fields fields;
};

struct NightCrawlerRevealTorchTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NightCrawlerRevealTorchTrigger__StaticFields {
};

struct NightCrawlerRevealTorchTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightCrawlerRevealTorchTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightCrawlerRevealTorchTrigger__VTable vtable;
};

struct IntimidateNightcrawlerAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct IntimidateNightcrawlerAction__StaticFields {
};

struct IntimidateNightcrawlerAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntimidateNightcrawlerAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntimidateNightcrawlerAction__VTable vtable;
};

struct NightCrawlerReveal__Fields {
    struct SaveSerialize__Fields _;
    struct LegacyAttackableSwitch *WoodenGate;
    struct NightCrawlerRevealTorchTrigger *TorchTrigger;
    struct GameObject *Rig;
    struct NightCrawlerReveal_AnimationEventAction__Array *AnimationEventActions;
    int32_t kHashBeforeWoodenGateSmash;
    int32_t kHashTorchInRange;
    struct Animator *m_anim;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
};

}
