namespace app {
    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array {
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___Fields {
        struct Dictionary_2_BaseAnimator_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___Fields {
        struct Dictionary_2_BaseAnimator_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___Fields fields;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32_ {
        struct BaseAnimator* key;
        int32_t value;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Boxed {
        struct KeyValuePair_2_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_BaseAnimator_System_Int32_ fields;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Array {
        struct KeyValuePair_2_BaseAnimator_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_BaseAnimator_System_Int32_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32_ {
        struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    enum class PetrifiedOwlLookState__Enum : int32_t {
        NotLooking = 0x00000000,
        LookingPaused = 0x00000001,
        LookingAtOri = 0x00000002,
    };

    struct PetrifiedOwlLookState__Enum__Boxed {
        struct PetrifiedOwlLookState__Enum__Class* klass;
        MonitorData* monitor;
        PetrifiedOwlLookState__Enum value;
    };

    struct PetrifiedOwlStats__Fields {
        struct MonoBehaviour__Fields _;
        struct FloatFraction LeftClawHealth;
        struct FloatFraction RightClawHealth;
        struct FloatFraction LeftHornHealth;
        struct FloatFraction RightHornHealth;
        struct FloatFraction ClawStamina;
        struct FloatFraction DoubleClawChance;
        struct FloatFraction StiltGrabAgitation;
        float ClawFatigueRegen;
        float DoubleClawChancePerAttack;
        float AgitationReductionRate;
        float CurrentIdleTime;
        PetrifiedOwlLookState__Enum PetrifiedOwlLookState;
    };

    struct PetrifiedOwlStats {
        struct PetrifiedOwlStats__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlStats__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_AnimationPostprocess___Fields {
        struct AnimationPostprocess__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_AnimationPostprocess_ {
        struct List_1_Moon_AnimationPostprocess___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_AnimationPostprocess___Fields fields;
    };

    struct IEnumerator_1_Moon_AnimationPostprocess_ {
        struct IEnumerator_1_Moon_AnimationPostprocess___Class* klass;
        MonitorData* monitor;
    };

    struct GhostReplayMetaData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GhostReplayMetaData__StaticFields {
    };

    struct GhostReplayMetaData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GhostReplayMetaData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GhostReplayMetaData__VTable vtable;
    };

    struct GhostReplayAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
    };

    struct GhostReplayAnimator__StaticFields {
    };

    struct GhostReplayAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GhostReplayAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GhostReplayAnimator__VTable vtable;
    };

    struct ServerConfigurationProperties__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ServerConfigurationProperties__StaticFields {
    };

    struct ServerConfigurationProperties__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServerConfigurationProperties__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServerConfigurationProperties__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32___VTable vtable;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___StaticFields {
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_BaseAnimator_System_Int32___VTable vtable;
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Array__VTable {
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Array__StaticFields {
    };

    struct KeyValuePair_2_BaseAnimator_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_BaseAnimator_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_BaseAnimator_System_Int32___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_BaseAnimator_System_Int32___VTable vtable;
    };

    struct Dictionary_2_BaseAnimator_System_Int32___VTable {
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

    struct Dictionary_2_BaseAnimator_System_Int32___StaticFields {
    };

    struct Dictionary_2_BaseAnimator_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_BaseAnimator_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_BaseAnimator_System_Int32___VTable vtable;
    };

    struct BrainScript__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
        VirtualInvokeData UpdateEntries;
        VirtualInvokeData ExecuteEntry;
        VirtualInvokeData ExecuteEntry_1;
        VirtualInvokeData UpdateEntries_1;
    };

    struct BrainScript__StaticFields {
    };

    struct BrainScript__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrainScript__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrainScript__VTable vtable;
    };

    struct PetrifiedOwlLookState__Enum__VTable {
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

    struct PetrifiedOwlLookState__Enum__StaticFields {
    };

    struct PetrifiedOwlLookState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlLookState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlLookState__Enum__VTable vtable;
    };

    struct PetrifiedOwlStats__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PetrifiedOwlStats__StaticFields {
    };

    struct PetrifiedOwlStats__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlStats__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlStats__VTable vtable;
    };

    struct IEnumerator_1_Moon_AnimationPostprocess___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_AnimationPostprocess___StaticFields {
    };

    struct IEnumerator_1_Moon_AnimationPostprocess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_AnimationPostprocess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_AnimationPostprocess___VTable vtable;
    };

    struct List_1_Moon_AnimationPostprocess___VTable {
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

    struct List_1_Moon_AnimationPostprocess___StaticFields {
        struct AnimationPostprocess__Array* _emptyArray;
    };

    struct List_1_Moon_AnimationPostprocess___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_AnimationPostprocess___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_AnimationPostprocess___VTable vtable;
    };

    struct PetrifiedOwlBrainBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
        VirtualInvokeData UpdateEntries;
        VirtualInvokeData ExecuteEntry;
        VirtualInvokeData ExecuteEntry_1;
        VirtualInvokeData UpdateEntries_1;
        VirtualInvokeData OnPreRestore;
    };

    struct PetrifiedOwlBrainBase__StaticFields {
    };

    struct PetrifiedOwlBrainBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PetrifiedOwlBrainBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PetrifiedOwlBrainBase__VTable vtable;
    };

    struct PetrifiedOwlPhaseABrain__Fields {
        struct PetrifiedOwlBrainBase__Fields _;
        struct Robin* Robin;
        struct Brain* Brain;
        struct GameObject__Array* HornDamageReceivers;
        struct DamageReceiverForwarder* LeftClawDamageReceiver;
        struct DamageReceiverForwarder* RightClawDamageReceiver;
        struct BrainBehaviour* LeftClawHurtBehaviour;
        struct BrainBehaviour* RightClawHurtBehaviour;
        struct GameObject* HurtMaskLeftPrefab;
        struct GameObject* HurtMaskRightPrefab;
        float HurtMaskTransitionSpeed;
        struct AnimationPostprocess* HitReactionClawLeft;
        struct AnimationPostprocess* HitReactionClawRight;
        struct SoundProvider* HurtSound;
        struct BrainBehaviour* IdleBehaviour;
    };

    struct PetrifiedOwlPhaseABrain {
        struct PetrifiedOwlPhaseABrain__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlPhaseABrain__Fields fields;
    };

    struct Robin__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject__Array* Objects;
    };

    struct Robin {
        struct Robin__Class* klass;
        MonitorData* monitor;
        struct Robin__Fields fields;
    };

    struct Brain__Fields {
        struct Suspendable__Fields _;
        bool _IsSuspended_k__BackingField;
        bool Enabled;
        float MinBehaviourScore;
        struct BrainBehaviour* CurrentBehaviour;
        struct List_1_Moon_BrainBehaviour_* Behaviours;
        struct Action_1_Moon_BrainBehaviour_* BehaviourStarted;
        struct Action_1_Moon_BrainBehaviour_* BehaviourEnded;
        struct Queue_1_Moon_BrainBehaviour_* m_behaviourQueue;
        bool m_prevEnabled;
        float m_lastSelectedBehaviourScore;
    };

    struct Brain {
        struct Brain__Class* klass;
        MonitorData* monitor;
        struct Brain__Fields fields;
    };

    struct BrainBehaviour__Fields {
        struct MonoBehaviour__Fields _;
        bool Enabled;
        bool Interruptable;
        float Cooldown;
        float CurrentCooldown;
        float m_cooldownTime;
        struct Brain* m_brain;
    };

    struct BrainBehaviour {
        struct BrainBehaviour__Class* klass;
        MonitorData* monitor;
        struct BrainBehaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BrainBehaviour___Fields {
        struct BrainBehaviour__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BrainBehaviour_ {
        struct List_1_Moon_BrainBehaviour___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BrainBehaviour___Fields fields;
    };

    struct BrainBehaviour__Array {
        struct BrainBehaviour__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BrainBehaviour* vector[32];
    };

    struct IEnumerator_1_Moon_BrainBehaviour_ {
        struct IEnumerator_1_Moon_BrainBehaviour___Class* klass;
        MonitorData* monitor;
    };

    struct Action_1_Moon_BrainBehaviour___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_BrainBehaviour_ {
        struct Action_1_Moon_BrainBehaviour___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_BrainBehaviour___Fields fields;
    };

    struct __declspec(align(8)) Queue_1_Moon_BrainBehaviour___Fields {
        struct BrainBehaviour__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_BrainBehaviour_ {
        struct Queue_1_Moon_BrainBehaviour___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_BrainBehaviour___Fields fields;
    };

    struct Robin__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Robin__StaticFields {
    };

    struct Robin__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Robin__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Robin__VTable vtable;
    };

    struct BrainBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnStartBehaviour;
        VirtualInvokeData OnEndBehaviour;
        VirtualInvokeData OnUpdateBehaviour;
        VirtualInvokeData EndCondition;
        VirtualInvokeData GetScore;
        VirtualInvokeData ResetBehaviour;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
    };

    struct BrainBehaviour__StaticFields {
    };

    struct BrainBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrainBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrainBehaviour__VTable vtable;
    };

    struct BrainBehaviour__Array__VTable {
    };

    struct BrainBehaviour__Array__StaticFields {
    };

    struct BrainBehaviour__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrainBehaviour__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrainBehaviour__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_BrainBehaviour___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_BrainBehaviour___StaticFields {
    };

    struct IEnumerator_1_Moon_BrainBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_BrainBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_BrainBehaviour___VTable vtable;
    };

    struct List_1_Moon_BrainBehaviour___VTable {
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

    struct List_1_Moon_BrainBehaviour___StaticFields {
        struct BrainBehaviour__Array* _emptyArray;
    };

    struct List_1_Moon_BrainBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_BrainBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_BrainBehaviour___VTable vtable;
    };

    struct Action_1_Moon_BrainBehaviour___VTable {
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

    struct Action_1_Moon_BrainBehaviour___StaticFields {
    };

    struct Action_1_Moon_BrainBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Moon_BrainBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_Moon_BrainBehaviour___VTable vtable;
    };

    struct Queue_1_Moon_BrainBehaviour___VTable {
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

    struct Queue_1_Moon_BrainBehaviour___StaticFields {
    };

    struct Queue_1_Moon_BrainBehaviour___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_Moon_BrainBehaviour___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_Moon_BrainBehaviour___VTable vtable;
    };

    struct Brain__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
    };

    struct Brain__StaticFields {
    };

    struct Brain__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Brain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Brain__VTable vtable;
    };

    struct PetrifiedOwlPhaseABrain__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData Convert;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_IsLooping;
        VirtualInvokeData get_CurrentTime;
        VirtualInvokeData set_CurrentTime;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData Play;
        VirtualInvokeData Stop;
        VirtualInvokeData Pause;
        VirtualInvokeData OnFixedUpdate_1;
        VirtualInvokeData CacheOriginals;
        VirtualInvokeData SampleValue;
        VirtualInvokeData UpdateDurationAndTimeCache;
        VirtualInvokeData OnStartPlay;
        VirtualInvokeData OnStopPlay;
        VirtualInvokeData get_Duration;
        VirtualInvokeData RestoreToOriginalState;
        VirtualInvokeData Convert_1;
        VirtualInvokeData UpdateEntries;
        VirtualInvokeData ExecuteEntry;
        VirtualInvokeData ExecuteEntry_1;
        VirtualInvokeData UpdateEntries_1;
        VirtualInvokeData OnPreRestore;
    };

} // namespace app
