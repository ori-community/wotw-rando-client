namespace app {
struct PathFollowingPlatform__StaticFields {
};

struct PathFollowingPlatform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PathFollowingPlatform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PathFollowingPlatform__VTable vtable;
};

struct ScalePlatform__Fields {
    struct PlatformImplementation__Fields _;
    struct Transform *PlatformObject;
    struct Vector3 m_startScale;
    bool m_hasInitialized;
};

struct ScalePlatform {
    struct ScalePlatform__Class *klass;
    MonitorData *monitor;
    struct ScalePlatform__Fields fields;
};

struct ScalePlatform__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Reset;
    VirtualInvokeData OnUpdate;
};

struct ScalePlatform__StaticFields {
};

struct ScalePlatform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScalePlatform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScalePlatform__VTable vtable;
};

struct IKLimbTargeted__Fields {
    struct IKLimb__Fields _;
    struct Transform *targetTransform;
    struct Vector3 targetPosition;
    bool targetMouse;
    bool animateUsingReference;
    struct Vector3 targetReferenceLocalPosition;
};

struct IKLimbTargeted {
    struct IKLimbTargeted__Class *klass;
    MonitorData *monitor;
    struct IKLimbTargeted__Fields fields;
};

struct IKLimbTargeted__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_RequiresOnUpdate;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData get_TotalWeight;
    VirtualInvokeData get_HasFinished;
    VirtualInvokeData get_Order;
    VirtualInvokeData OnPostEnable;
    VirtualInvokeData OnPostDisable;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Process;
    VirtualInvokeData OnSceneGui;
    VirtualInvokeData OnDrawGizmosSelected;
};

struct IKLimbTargeted__StaticFields {
};

struct IKLimbTargeted__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IKLimbTargeted__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IKLimbTargeted__VTable vtable;
};

struct IKTerrainPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct List_1_Moon_IKLimb_ *limbs;
};

struct IKTerrainPostprocess {
    struct IKTerrainPostprocess__Class *klass;
    MonitorData *monitor;
    struct IKTerrainPostprocess__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_IKLimb___Fields {
    struct IKLimb__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_IKLimb_ {
    struct List_1_Moon_IKLimb___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_IKLimb___Fields fields;
};

struct IEnumerator_1_Moon_IKLimb_ {
    struct IEnumerator_1_Moon_IKLimb___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_Moon_IKLimb___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_IKLimb___StaticFields {
};

struct IEnumerator_1_Moon_IKLimb___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_IKLimb___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_IKLimb___VTable vtable;
};

struct List_1_Moon_IKLimb___VTable {
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

struct List_1_Moon_IKLimb___StaticFields {
    struct IKLimb__Array *_emptyArray;
};

struct List_1_Moon_IKLimb___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_IKLimb___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_IKLimb___VTable vtable;
};

struct IKTerrainPostprocess__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_RequiresOnUpdate;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData get_TotalWeight;
    VirtualInvokeData get_HasFinished;
    VirtualInvokeData get_Order;
    VirtualInvokeData OnPostEnable;
    VirtualInvokeData OnPostDisable;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Process;
    VirtualInvokeData OnSceneGui;
};

struct IKTerrainPostprocess__StaticFields {
};

struct IKTerrainPostprocess__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IKTerrainPostprocess__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IKTerrainPostprocess__VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    int32_t hashCode;
    int32_t next;
    struct PhysicsUpdateHandlerAttribute *key;
    struct List_1_UnityEngine_Component_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ vector[32];
};

struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute_ {
    struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields {
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields {
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Fields fields;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    struct PhysicsUpdateHandlerAttribute *key;
    struct List_1_UnityEngine_Component_ *value;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Boxed {
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ fields;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array {
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__VTable vtable;
};

struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___StaticFields {
};

struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_Moon_PhysicsUpdateHandlerAttribute___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__VTable {
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__StaticFields {
};

struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable {
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

struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields {
};

struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component___VTable vtable;
};

struct FrameCounter_SecondInfo___VTable {
};

struct FrameCounter_SecondInfo___StaticFields {
};

struct FrameCounter_SecondInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FrameCounter_SecondInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FrameCounter_SecondInfo___VTable vtable;
};

struct NanoProfilerDataProvider {
    struct NanoProfilerDataProvider__Class *klass;
    MonitorData *monitor;
};

struct NanoProfilerDataProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_SupportsGraph;
    VirtualInvokeData get_SupportsInspector;
    VirtualInvokeData get_SupportsMarkers;
    VirtualInvokeData get_HistorySize;
    VirtualInvokeData get_NumMetrics;
    VirtualInvokeData get_NumMarkers;
    VirtualInvokeData get_CurrentFrameIndex;
    VirtualInvokeData get_LastCompletedFrameID;
    VirtualInvokeData get_SupportedMetrics;
    VirtualInvokeData GetMetricValueInMS;
    VirtualInvokeData GetLastCompletedMetricValueInMS;
    VirtualInvokeData GetAverageMetricTimeInMSInFrameRange;
    VirtualInvokeData GetPeakMetricTimeInMSInFrameRange;
    VirtualInvokeData get_IsPaused;
    VirtualInvokeData AddPreEndFrameHandler;
    VirtualInvokeData AddPostBeginFrameHandler;
    VirtualInvokeData RemovePreEndFrameHandler;
    VirtualInvokeData RemovePostBeginFrameHandler;
};

struct NanoProfilerDataProvider__StaticFields {
};

struct NanoProfilerDataProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NanoProfilerDataProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NanoProfilerDataProvider__VTable vtable;
};

enum class SceneLoadingTest_RunState__Enum : int32_t {
    NotRunning = 0x00000000,
    Running = 0x00000001,
    Cancelling = 0x00000002,
};

struct SceneLoadingTest_RunState__Enum__Boxed {
    struct SceneLoadingTest_RunState__Enum__Class *klass;
    MonitorData *monitor;
    SceneLoadingTest_RunState__Enum value;
    
};

struct SceneLoadingTest_RunState__Enum__VTable {
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

struct SceneLoadingTest_RunState__Enum__StaticFields {
};

struct SceneLoadingTest_RunState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_RunState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_RunState__Enum__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_Context__Fields {
    struct IProfilingDataProvider *DataProvider;
    struct CsvWriter *Writer;
    struct List_1_System_ValueTuple_2__2 *PendingScenes;
    struct Stopwatch *StatsStopwatch;
};

struct SceneLoadingTest_Context {
    struct SceneLoadingTest_Context__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_Context__Fields fields;
};

struct SceneLoadingTest_Context__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct SceneLoadingTest_Context__StaticFields {
};

struct SceneLoadingTest_Context__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_Context__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_Context__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_Stats__Fields {
    double Duration;
    double PeakFrameTime;
    float PeakIntegrationCost;
};

struct SceneLoadingTest_Stats {
    struct SceneLoadingTest_Stats__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_Stats__Fields fields;
};

struct SceneLoadingTest_Stats__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SceneLoadingTest_Stats__StaticFields {
};

struct SceneLoadingTest_Stats__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_Stats__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_Stats__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_GatherStatsScope__Fields {
    struct SceneLoadingTest_Context *m_ctx;
    struct SceneLoadingTest_Stats *m_stats;
    struct Action *m_endFrameHandler;
};

struct SceneLoadingTest_GatherStatsScope {
    struct SceneLoadingTest_GatherStatsScope__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_GatherStatsScope__Fields fields;
};

struct SceneLoadingTest_GatherStatsScope__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct SceneLoadingTest_GatherStatsScope__StaticFields {
};

struct SceneLoadingTest_GatherStatsScope__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_GatherStatsScope__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_GatherStatsScope__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TaskCompletionSource_1_System_Object_ *tcs;
    struct IEnumerator *_enumerator_5__2;
};

struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18 {
    struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Fields fields;
};

struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__VTable {
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

struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__StaticFields {
};

struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_LoadEmptySceneCoroutine_d_18__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_c_DisplayClass19_0__Fields {
    struct String *scene;
};

struct SceneLoadingTest_c_DisplayClass19_0 {
    struct SceneLoadingTest_c_DisplayClass19_0__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_c_DisplayClass19_0__Fields fields;
};

struct SceneLoadingTest_c_DisplayClass19_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SceneLoadingTest_c_DisplayClass19_0__StaticFields {
};

struct SceneLoadingTest_c_DisplayClass19_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_c_DisplayClass19_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_c_DisplayClass19_0__VTable vtable;
};

struct SceneLoadingTest_Execute_d_19 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CancellationToken cancellationToken;
    bool _wasAllowLoadFromSceneStreaming_5__2;
    struct String *_inProgressPath_5__3;
    struct TaskAwaiter __u__1;
    struct SceneLoadingTest_Context *_ctx_5__4;
};

struct SceneLoadingTest_Execute_d_19__Boxed {
    struct SceneLoadingTest_Execute_d_19__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_Execute_d_19 fields;
};

struct SceneLoadingTest_Execute_d_19__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct SceneLoadingTest_Execute_d_19__StaticFields {
};

struct SceneLoadingTest_Execute_d_19__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_Execute_d_19__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_Execute_d_19__VTable vtable;
};

struct SceneLoadingTest_LoadAndUnloadScene_d_20 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct String *sceneName;
    struct SceneLoadingTest_Context *ctx;
    int32_t buildIndex;
    struct SceneLoadingTest_Stats *_loadStats_5__2;
    struct SceneLoadingTest_Stats *_unloadStats_5__3;
    struct TaskAwaiter __u__1;
    struct SceneLoadingTest_GatherStatsScope *__7__wrap3;
};

struct SceneLoadingTest_LoadAndUnloadScene_d_20__Boxed {
    struct SceneLoadingTest_LoadAndUnloadScene_d_20__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_LoadAndUnloadScene_d_20 fields;
};

struct SceneLoadingTest_LoadAndUnloadScene_d_20__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct SceneLoadingTest_LoadAndUnloadScene_d_20__StaticFields {
};

struct SceneLoadingTest_LoadAndUnloadScene_d_20__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_LoadAndUnloadScene_d_20__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_LoadAndUnloadScene_d_20__VTable vtable;
};

struct SceneLoadingTest_ExtraDelay_d_21 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    int32_t _i_5__2;
    struct YieldAwaitable_YieldAwaiter __u__1;
};

struct SceneLoadingTest_ExtraDelay_d_21__Boxed {
    struct SceneLoadingTest_ExtraDelay_d_21__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_ExtraDelay_d_21 fields;
};

struct SceneLoadingTest_ExtraDelay_d_21__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct SceneLoadingTest_ExtraDelay_d_21__StaticFields {
};

struct SceneLoadingTest_ExtraDelay_d_21__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_ExtraDelay_d_21__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_ExtraDelay_d_21__VTable vtable;
};

struct __declspec(align(8)) SceneLoadingTest_c_DisplayClass22_0__Fields {
    struct TaskCompletionSource_1_System_Object_ *tcs;
};

struct SceneLoadingTest_c_DisplayClass22_0 {
    struct SceneLoadingTest_c_DisplayClass22_0__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingTest_c_DisplayClass22_0__Fields fields;
};

struct SceneLoadingTest_c_DisplayClass22_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SceneLoadingTest_c_DisplayClass22_0__StaticFields {
};

struct SceneLoadingTest_c_DisplayClass22_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingTest_c_DisplayClass22_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingTest_c_DisplayClass22_0__VTable vtable;
};

struct PositionStateOwner__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct SerializedBooleanUberState *StateDescriptor;
    struct Vector3 LocalStartPosition;
    struct Vector3 LocalEndPosition;
    struct Transform *Platform;
    float LastStartedValue;
    struct IUberState__Array *m_affectingUberStates;
};

struct PositionStateOwner {
    struct PositionStateOwner__Class *klass;
    MonitorData *monitor;
    struct PositionStateOwner__Fields fields;
};

struct PositionStateOwner__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData GetResolverForType;
};

struct PositionStateOwner__StaticFields {
};

struct PositionStateOwner__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionStateOwner__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PositionStateOwner__VTable vtable;
};

enum class CrashContext_Flags__Enum : uint32_t {
    Automation = 0x00000001,
    IsDoingCleanup = 0x00000002,
    IsHandheld = 0x00000004,
};

}
