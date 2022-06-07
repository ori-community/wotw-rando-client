namespace app {
struct StompPost__StaticFields {
};

struct StompPost__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StompPost__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StompPost__VTable vtable;
};

struct TeleportRestrictZone__Fields {
    struct MonoBehaviour__Fields _;
    struct CageStructureTool *CageStructureTool;
};

struct TeleportRestrictZone {
    struct TeleportRestrictZone__Class *klass;
    MonitorData *monitor;
    struct TeleportRestrictZone__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_Object_System_Boolean___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_Object_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_Object_System_Boolean_ {
    struct Dictionary_2_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_Object_System_Boolean___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ {
    int32_t hashCode;
    int32_t next;
    struct Object_1 *key;
    bool value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Fields {
    struct Dictionary_2_UnityEngine_Object_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Fields {
    struct Dictionary_2_UnityEngine_Object_System_Boolean_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Fields fields;
};

struct ICollection_1_UnityEngine_Object_ {
    struct ICollection_1_UnityEngine_Object___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ {
    struct Object_1 *key;
    bool value;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Boxed {
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ fields;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array {
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct ICollection_1_UnityEngine_Object___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UnityEngine_Object___StaticFields {
};

struct ICollection_1_UnityEngine_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UnityEngine_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UnityEngine_Object___VTable vtable;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields {
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__VTable {
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__StaticFields {
};

struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct Dictionary_2_UnityEngine_Object_System_Boolean___VTable {
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

struct Dictionary_2_UnityEngine_Object_System_Boolean___StaticFields {
};

struct Dictionary_2_UnityEngine_Object_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_UnityEngine_Object_System_Boolean___VTable vtable;
};

struct TeleportRestrictZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TeleportRestrictZone__StaticFields {
    struct Dictionary_2_UnityEngine_Object_System_Boolean_ *s_restrictionZones;
};

struct TeleportRestrictZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TeleportRestrictZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TeleportRestrictZone__VTable vtable;
};

struct TiggerWithConditionOrWaitTime__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *Action;
    struct Condition_1 *Condition;
    bool TriggerOnce;
    bool UseWaitTime;
    float WaitTime;
    float m_elapsedTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct TiggerWithConditionOrWaitTime {
    struct TiggerWithConditionOrWaitTime__Class *klass;
    MonitorData *monitor;
    struct TiggerWithConditionOrWaitTime__Fields fields;
};

struct TiggerWithConditionOrWaitTime__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct TiggerWithConditionOrWaitTime__StaticFields {
};

struct TiggerWithConditionOrWaitTime__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TiggerWithConditionOrWaitTime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TiggerWithConditionOrWaitTime__VTable vtable;
};

struct TimedTrigger__Fields {
    struct Condition_1__Fields _;
    float Duration;
    bool Repeat;
    bool Paused;
    struct MoonTimeline *Timeline;
    float m_time;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct TimedTrigger {
    struct TimedTrigger__Class *klass;
    MonitorData *monitor;
    struct TimedTrigger__Fields fields;
};

struct TimedTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct TimedTrigger__StaticFields {
};

struct TimedTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimedTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimedTrigger__VTable vtable;
};

enum class TorchInsideZoneChecker_TorchStateType__Enum : int32_t {
    Either = 0x00000000,
    IsLit = 0x00000001,
    IsUnlit = 0x00000002,
};

struct TorchInsideZoneChecker_TorchStateType__Enum__Boxed {
    struct TorchInsideZoneChecker_TorchStateType__Enum__Class *klass;
    MonitorData *monitor;
    TorchInsideZoneChecker_TorchStateType__Enum value;
    
};

enum class TorchInsideZoneChecker_FlameColorType__Enum : int32_t {
    Either = 0x00000000,
    Red = 0x00000001,
    Blue = 0x00000002,
};

struct TorchInsideZoneChecker_FlameColorType__Enum__Boxed {
    struct TorchInsideZoneChecker_FlameColorType__Enum__Class *klass;
    MonitorData *monitor;
    TorchInsideZoneChecker_FlameColorType__Enum value;
    
};

struct TorchInsideZoneChecker__Fields {
    struct ObjectInsideZoneChecker__Fields _;
    TorchInsideZoneChecker_TorchStateType__Enum TorchStateCheck;
    
    TorchInsideZoneChecker_FlameColorType__Enum FlameColorCheck;
    
    bool m_isInside;
};

struct TorchInsideZoneChecker {
    struct TorchInsideZoneChecker__Class *klass;
    MonitorData *monitor;
    struct TorchInsideZoneChecker__Fields fields;
};

struct TorchInsideZoneChecker_TorchStateType__Enum__VTable {
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

struct TorchInsideZoneChecker_TorchStateType__Enum__StaticFields {
};

struct TorchInsideZoneChecker_TorchStateType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TorchInsideZoneChecker_TorchStateType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TorchInsideZoneChecker_TorchStateType__Enum__VTable vtable;
};

struct TorchInsideZoneChecker_FlameColorType__Enum__VTable {
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

struct TorchInsideZoneChecker_FlameColorType__Enum__StaticFields {
};

struct TorchInsideZoneChecker_FlameColorType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TorchInsideZoneChecker_FlameColorType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TorchInsideZoneChecker_FlameColorType__Enum__VTable vtable;
};

struct TorchInsideZoneChecker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
    VirtualInvokeData get_IsInside;
    VirtualInvokeData FixedUpdate;
    VirtualInvokeData Awake;
};

struct TorchInsideZoneChecker__StaticFields {
};

struct TorchInsideZoneChecker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TorchInsideZoneChecker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TorchInsideZoneChecker__VTable vtable;
};

struct __declspec(align(8)) Trigger_ProcessTrigger_d_39__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct Trigger_1 *__4__this;
    float _t_5__2;
};

struct Trigger_ProcessTrigger_d_39 {
    struct Trigger_ProcessTrigger_d_39__Class *klass;
    MonitorData *monitor;
    struct Trigger_ProcessTrigger_d_39__Fields fields;
};

struct Trigger_ProcessTrigger_d_39__VTable {
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

struct Trigger_ProcessTrigger_d_39__StaticFields {
};

struct Trigger_ProcessTrigger_d_39__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Trigger_ProcessTrigger_d_39__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Trigger_ProcessTrigger_d_39__VTable vtable;
};

struct Trigger_c {
    struct Trigger_c__Class *klass;
    MonitorData *monitor;
};

struct Trigger_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Trigger_c__StaticFields {
    struct Trigger_c *__9;
    struct Action_1_Trigger_ *__9__41_0;
};

struct Trigger_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Trigger_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Trigger_c__VTable vtable;
};

struct TriggerByString__Fields {
    struct LegacyTrigger__Fields _;
    struct TriggerByString_StringTriggerData *Data;
};

struct TriggerByString {
    struct TriggerByString__Class *klass;
    MonitorData *monitor;
    struct TriggerByString__Fields fields;
};

enum class TriggerByString_TriggerEvent__Enum : int32_t {
    Awake = 0x00000000,
    Start = 0x00000001,
    SceneEnabledAfterSerialize = 0x00000002,
    Always = 0x00000003,
};

struct TriggerByString_TriggerEvent__Enum__Boxed {
    struct TriggerByString_TriggerEvent__Enum__Class *klass;
    MonitorData *monitor;
    TriggerByString_TriggerEvent__Enum value;
    
};

struct __declspec(align(8)) TriggerByString_StringTriggerData__Fields {
    struct String *String;
    TriggerByString_TriggerEvent__Enum TriggerEvent;
    
};

struct TriggerByString_StringTriggerData {
    struct TriggerByString_StringTriggerData__Class *klass;
    MonitorData *monitor;
    struct TriggerByString_StringTriggerData__Fields fields;
};

struct TriggerByString_TriggerEvent__Enum__VTable {
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

struct TriggerByString_TriggerEvent__Enum__StaticFields {
};

struct TriggerByString_TriggerEvent__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerByString_TriggerEvent__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerByString_TriggerEvent__Enum__VTable vtable;
};

struct TriggerByString_StringTriggerData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerByString_StringTriggerData__StaticFields {
};

struct TriggerByString_StringTriggerData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerByString_StringTriggerData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerByString_StringTriggerData__VTable vtable;
};

struct TriggerByString__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnTriggerEnable;
    VirtualInvokeData OnTriggerDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnTriggerActivated;
};

struct TriggerByString__StaticFields {
    struct List_1_System_String_ *m_stringTriggersList;
};

struct TriggerByString__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerByString__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerByString__VTable vtable;
};

struct TriggerWithCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *Action;
    struct Condition_1 *Condition;
    bool TriggerOnce;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct TriggerWithCondition {
    struct TriggerWithCondition__Class *klass;
    MonitorData *monitor;
    struct TriggerWithCondition__Fields fields;
};

struct TriggerWithCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct TriggerWithCondition__StaticFields {
};

struct TriggerWithCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerWithCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerWithCondition__VTable vtable;
};

struct ActionSequence_c {
    struct ActionSequence_c__Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_ActionMethod___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_ActionMethod_ {
    struct Comparison_1_ActionMethod___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_ActionMethod___Fields fields;
};

struct Comparison_1_ActionMethod___VTable {
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

struct Comparison_1_ActionMethod___StaticFields {
};

struct Comparison_1_ActionMethod___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_ActionMethod___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Comparison_1_ActionMethod___VTable vtable;
};

struct ActionSequence_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ActionSequence_c__StaticFields {
    struct ActionSequence_c *__9;
    struct Comparison_1_ActionMethod_ *__9__22_0;
};

struct ActionSequence_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActionSequence_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActionSequence_c__VTable vtable;
};

struct ActionSequenceSerializer__Fields {
    struct SaveSerialize__Fields _;
    struct ActionSequence *m_actionSequence;
};

struct ActionSequenceSerializer {
    struct ActionSequenceSerializer__Class *klass;
    MonitorData *monitor;
    struct ActionSequenceSerializer__Fields fields;
};

struct ActionSequenceSerializer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct ActionSequenceSerializer__StaticFields {
};

struct ActionSequenceSerializer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActionSequenceSerializer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActionSequenceSerializer__VTable vtable;
};

struct WaitAction__Fields {
    struct PerformingAction__Fields _;
    float Duration;
    bool LastActionFinished;
    struct Condition_1 *Condition;
    struct Condition_1 *CancelCondition;
    struct PerformingAction *LastAction;
    float m_time;
    float m_remainingTime;
    struct IContext *m_context;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct WaitAction {
    struct WaitAction__Class *klass;
    MonitorData *monitor;
    struct WaitAction__Fields fields;
};

struct WaitAction__VTable {
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
    VirtualInvokeData Stop;
    VirtualInvokeData get_IsPerforming;
    VirtualInvokeData get_IsBlocking;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
};

struct WaitAction__StaticFields {
};

struct WaitAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitAction__VTable vtable;
};

struct SeinAnimationSystemSwitcher__Fields {
    struct MonoBehaviour__Fields _;
    KeyCode__Enum OldSystemKeyCode;
    
    KeyCode__Enum NewSystemKeyCode;
    
    struct GameObject *OldSystem;
    struct GameObject *NewSystem;
};

struct SeinAnimationSystemSwitcher {
    struct SeinAnimationSystemSwitcher__Class *klass;
    MonitorData *monitor;
    struct SeinAnimationSystemSwitcher__Fields fields;
};

struct SeinAnimationSystemSwitcher__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
