namespace app {
struct IEnumerator_1_KeyValuePair_2_System_Type_UberTypeTracker_IDerivedTypeTracker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Type_UberTypeTracker_IDerivedTypeTracker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Type_UberTypeTracker_IDerivedTypeTracker___VTable vtable;
};

struct IEnumerable_1_UberTypeTracker_IDerivedTypeTracker___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_UberTypeTracker_IDerivedTypeTracker___StaticFields {
};

struct IEnumerable_1_UberTypeTracker_IDerivedTypeTracker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_UberTypeTracker_IDerivedTypeTracker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_UberTypeTracker_IDerivedTypeTracker___VTable vtable;
};

struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___VTable {
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

struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___StaticFields {
};

struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___VTable vtable;
};

enum class UberStateMatcher_UberStateMatcherTypeIds__Enum : int32_t {
    Undefined = 0x00000000,
    Boolean = 0x00000001,
    Float = 0x00000002,
    Door = 0x00000003,
    Condition = 0x00000004,
    PlayerAbility = 0x00000005,
    Int = 0x00000006,
};

struct UberStateMatcher_UberStateMatcherTypeIds__Enum__Boxed {
    struct UberStateMatcher_UberStateMatcherTypeIds__Enum__Class *klass;
    MonitorData *monitor;
    UberStateMatcher_UberStateMatcherTypeIds__Enum value;
    
};

struct __declspec(align(8)) UberStateMatcher__Fields {
    struct GenericDataContainer *Data;
    UberStateMatcher_UberStateMatcherTypeIds__Enum m_stateMatcherId;
    
};

struct UberStateMatcher {
    struct UberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct UberStateMatcher__Fields fields;
};

struct BooleanUberStateMatcher__Fields {
    struct UberStateMatcher__Fields _;
};

struct BooleanUberStateMatcher {
    struct BooleanUberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct BooleanUberStateMatcher__Fields fields;
};

struct UberStateMatcher_UberStateMatcherTypeIds__Enum__VTable {
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

struct UberStateMatcher_UberStateMatcherTypeIds__Enum__StaticFields {
};

struct UberStateMatcher_UberStateMatcherTypeIds__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateMatcher_UberStateMatcherTypeIds__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateMatcher_UberStateMatcherTypeIds__Enum__VTable vtable;
};

struct UberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct UberStateMatcher__StaticFields {
};

struct UberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateMatcher__VTable vtable;
};

struct BooleanUberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct BooleanUberStateMatcher__StaticFields {
};

struct BooleanUberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanUberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanUberStateMatcher__VTable vtable;
};

struct BooleanUberStateMatcherBase__Fields {
    struct UberStateMatcher__Fields _;
};

struct BooleanUberStateMatcherBase {
    struct BooleanUberStateMatcherBase__Class *klass;
    MonitorData *monitor;
    struct BooleanUberStateMatcherBase__Fields fields;
};

struct BooleanUberStateMatcherBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
};

struct BooleanUberStateMatcherBase__StaticFields {
};

struct BooleanUberStateMatcherBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanUberStateMatcherBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanUberStateMatcherBase__VTable vtable;
};

struct __declspec(align(8)) BooleanUberStatePairBase__Fields {
    int32_t State;
};

struct BooleanUberStatePairBase {
    struct BooleanUberStatePairBase__Class *klass;
    MonitorData *monitor;
    struct BooleanUberStatePairBase__Fields fields;
};

struct BooleanUberStatePair__Fields {
    struct BooleanUberStatePairBase__Fields _;
    bool Value;
};

struct BooleanUberStatePair {
    struct BooleanUberStatePair__Class *klass;
    MonitorData *monitor;
    struct BooleanUberStatePair__Fields fields;
};

struct BooleanUberStatePair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EffectiveValue;
};

struct BooleanUberStatePair__StaticFields {
};

struct BooleanUberStatePair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanUberStatePair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanUberStatePair__VTable vtable;
};

struct BooleanUberStatePairBase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct BooleanUberStatePairBase__StaticFields {
};

struct BooleanUberStatePairBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanUberStatePairBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanUberStatePairBase__VTable vtable;
};

struct DoorUberStatePair__Fields {
    struct BooleanUberStatePairBase__Fields _;
    DesiredUberStateDoor_DoorState__Enum Value;
    
};

struct DoorUberStatePair {
    struct DoorUberStatePair__Class *klass;
    MonitorData *monitor;
    struct DoorUberStatePair__Fields fields;
};

struct DoorUberStatePair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EffectiveValue;
};

struct DoorUberStatePair__StaticFields {
};

struct DoorUberStatePair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorUberStatePair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorUberStatePair__VTable vtable;
};

struct ConditionUberStateMatcher__Fields {
    struct BooleanUberStateMatcher__Fields _;
};

struct ConditionUberStateMatcher {
    struct ConditionUberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct ConditionUberStateMatcher__Fields fields;
};

struct ConditionUberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct ConditionUberStateMatcher__StaticFields {
};

struct ConditionUberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConditionUberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConditionUberStateMatcher__VTable vtable;
};

struct DoorUberStateMatcher__Fields {
    struct BooleanUberStateMatcher__Fields _;
};

struct DoorUberStateMatcher {
    struct DoorUberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct DoorUberStateMatcher__Fields fields;
};

struct DoorUberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct DoorUberStateMatcher__StaticFields {
};

struct DoorUberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorUberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorUberStateMatcher__VTable vtable;
};

struct __declspec(align(8)) FloatRangeUberStatePair__Fields {
    int32_t State;
    float Min;
    float Max;
};

struct FloatRangeUberStatePair {
    struct FloatRangeUberStatePair__Class *klass;
    MonitorData *monitor;
    struct FloatRangeUberStatePair__Fields fields;
};

struct FloatRangeUberStatePair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FloatRangeUberStatePair__StaticFields {
};

struct FloatRangeUberStatePair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatRangeUberStatePair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatRangeUberStatePair__VTable vtable;
};

struct FloatUberStateMatcher__Fields {
    struct UberStateMatcher__Fields _;
};

struct FloatUberStateMatcher {
    struct FloatUberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct FloatUberStateMatcher__Fields fields;
};

struct FloatUberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct FloatUberStateMatcher__StaticFields {
};

struct FloatUberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatUberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatUberStateMatcher__VTable vtable;
};

struct IntUberStateMatcher__Fields {
    struct UberStateMatcher__Fields _;
};

struct IntUberStateMatcher {
    struct IntUberStateMatcher__Class *klass;
    MonitorData *monitor;
    struct IntUberStateMatcher__Fields fields;
};

struct IntUberStateMatcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetIdToTypeMap;
    VirtualInvokeData Resolve;
    VirtualInvokeData GetIdToTypeMap_1;
};

struct IntUberStateMatcher__StaticFields {
};

struct IntUberStateMatcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntUberStateMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntUberStateMatcher__VTable vtable;
};

struct __declspec(align(8)) IntUberStateMatcher_IntRangeUberStatePair__Fields {
    int32_t State;
    int32_t Value;
};

struct IntUberStateMatcher_IntRangeUberStatePair {
    struct IntUberStateMatcher_IntRangeUberStatePair__Class *klass;
    MonitorData *monitor;
    struct IntUberStateMatcher_IntRangeUberStatePair__Fields fields;
};

struct IntUberStateMatcher_IntRangeUberStatePair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IntUberStateMatcher_IntRangeUberStatePair__StaticFields {
};

struct IntUberStateMatcher_IntRangeUberStatePair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IntUberStateMatcher_IntRangeUberStatePair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IntUberStateMatcher_IntRangeUberStatePair__VTable vtable;
};

struct __declspec(align(8)) UberStateMatcherAttribute__Fields {
    struct Type *m_inputType;
};

struct UberStateMatcherAttribute {
    struct UberStateMatcherAttribute__Class *klass;
    MonitorData *monitor;
    struct UberStateMatcherAttribute__Fields fields;
};

struct UberStateMatcherAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct UberStateMatcherAttribute__StaticFields {
};

struct UberStateMatcherAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateMatcherAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateMatcherAttribute__VTable vtable;
};

struct __declspec(align(8)) UberStateMatcherDrawerAttribute__Fields {
    struct Type *m_matcherType;
};

struct UberStateMatcherDrawerAttribute {
    struct UberStateMatcherDrawerAttribute__Class *klass;
    MonitorData *monitor;
    struct UberStateMatcherDrawerAttribute__Fields fields;
};

struct UberStateMatcherDrawerAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct UberStateMatcherDrawerAttribute__StaticFields {
};

struct UberStateMatcherDrawerAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateMatcherDrawerAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateMatcherDrawerAttribute__VTable vtable;
};

struct RefTest__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_ *x;
    struct MoonReference_1_SetupState_ *error;
    struct MoonReference_1_SetupStateModifier_ *z;
};

struct RefTest {
    struct RefTest__Class *klass;
    MonitorData *monitor;
    struct RefTest__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_SetupState___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_SetupState_ *m_cachedProxyType;
    struct SetupState *m_volatileValue;
};

struct MoonReference_1_SetupState_ {
    struct MoonReference_1_SetupState___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_SetupState___Fields fields;
};

struct IMoonType_1_SetupState_ {
    struct IMoonType_1_SetupState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MoonReference_1_SetupStateModifier___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_SetupStateModifier_ *m_cachedProxyType;
    struct SetupStateModifier *m_volatileValue;
};

struct MoonReference_1_SetupStateModifier_ {
    struct MoonReference_1_SetupStateModifier___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_SetupStateModifier___Fields fields;
};

struct IMoonType_1_SetupStateModifier_ {
    struct IMoonType_1_SetupStateModifier___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_SetupState___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_SetupState___StaticFields {
};

struct IMoonType_1_SetupState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_SetupState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_SetupState___VTable vtable;
};

struct MoonReference_1_SetupState___VTable {
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

struct MoonReference_1_SetupState___StaticFields {
};

struct MoonReference_1_SetupState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_SetupState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_SetupState___VTable vtable;
};

struct IMoonType_1_SetupStateModifier___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_SetupStateModifier___StaticFields {
};

struct IMoonType_1_SetupStateModifier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_SetupStateModifier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_SetupStateModifier___VTable vtable;
};

struct MoonReference_1_SetupStateModifier___VTable {
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

struct MoonReference_1_SetupStateModifier___StaticFields {
};

struct MoonReference_1_SetupStateModifier___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_SetupStateModifier___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_SetupStateModifier___VTable vtable;
};

struct RefTest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RefTest__StaticFields {
};

struct RefTest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RefTest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RefTest__VTable vtable;
};

struct UberStateTestHookUp__Fields {
    struct MonoBehaviour__Fields _;
};

struct UberStateTestHookUp {
    struct UberStateTestHookUp__Class *klass;
    MonitorData *monitor;
    struct UberStateTestHookUp__Fields fields;
};

struct UberStateTestHookUp__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UberStateTestHookUp__StaticFields {
};

struct UberStateTestHookUp__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateTestHookUp__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateTestHookUp__VTable vtable;
};

struct StateOverrideSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_System_Int32_ *m_trackedObjectIDs;
    struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ *m_stateByObjectId;
};

struct StateOverrideSystem {
    struct StateOverrideSystem__Class *klass;
    MonitorData *monitor;
    struct StateOverrideSystem__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct StateOverrideSystem_IStateOverrideEntry *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry_ fields;
};

struct StateOverrideSystem_IStateOverrideEntry {
    struct StateOverrideSystem_IStateOverrideEntry__Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields {
    struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields {
    struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Fields fields;
};

struct StateOverrideSystem_IStateOverrideEntry__Array {
    struct StateOverrideSystem_IStateOverrideEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StateOverrideSystem_IStateOverrideEntry *vector[32];
};

struct IEnumerator_1_StateOverrideSystem_IStateOverrideEntry_ {
    struct IEnumerator_1_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_StateOverrideSystem_IStateOverrideEntry_ {
    struct ICollection_1_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    int32_t key;
    struct StateOverrideSystem_IStateOverrideEntry *value;
};

struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Boxed {
    struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ fields;
};

struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array {
    struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry_ {
    struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry___Class *klass;
    MonitorData *monitor;
};

struct StateOverrideSystem_IStateOverrideEntry__VTable {
    VirtualInvokeData ApplyDynamic;
    VirtualInvokeData ApplyStatic;
    VirtualInvokeData get_IsValid;
};

struct StateOverrideSystem_IStateOverrideEntry__StaticFields {
};

struct StateOverrideSystem_IStateOverrideEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateOverrideSystem_IStateOverrideEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateOverrideSystem_IStateOverrideEntry__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_StateOverrideSystem_IStateOverrideEntry___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable vtable;
};

struct StateOverrideSystem_IStateOverrideEntry__Array__VTable {
};

struct StateOverrideSystem_IStateOverrideEntry__Array__StaticFields {
};

struct StateOverrideSystem_IStateOverrideEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateOverrideSystem_IStateOverrideEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateOverrideSystem_IStateOverrideEntry__Array__VTable vtable;
};

}
