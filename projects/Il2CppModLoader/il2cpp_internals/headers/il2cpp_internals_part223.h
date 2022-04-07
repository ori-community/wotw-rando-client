namespace app {
struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry___StaticFields {
};
struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_StateOverrideSystem_IStateOverrideEntry___VTable vtable;
};
struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable {
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
struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields {
};
struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_StateOverrideSystem_IStateOverrideEntry___VTable vtable;
};
struct StateOverrideSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct StateOverrideSystem__StaticFields {
  struct StateOverrideSystem * s_instance;
};
struct StateOverrideSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateOverrideSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateOverrideSystem__VTable vtable;
};

struct StateOverrideSystem_UberStateOverride {
  struct IGenericUberState * UberState;
  struct Nullable_1_Single_ DynamicDesiredState;
};
struct StateOverrideSystem_UberStateOverride__Boxed {
  struct StateOverrideSystem_UberStateOverride__Class *klass;
  struct MonitorData *monitor;
  struct StateOverrideSystem_UberStateOverride fields;
};
struct StateOverrideSystem_UberStateOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyDynamic;
  VirtualInvokeData ApplyStatic;
  VirtualInvokeData get_IsValid;
};
struct StateOverrideSystem_UberStateOverride__StaticFields {
};
struct StateOverrideSystem_UberStateOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateOverrideSystem_UberStateOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateOverrideSystem_UberStateOverride__VTable vtable;
};

struct StateOverrideSystem_PassiveStateOverride {
  struct IPassiveStateDescriptor * Descriptor;
  struct Nullable_1_Int32_ DynamicDesiredState;
  int32_t StaticDesiredState;
  enum UberStateApplyContext__Enum ApplyContextStatic;
};
struct StateOverrideSystem_PassiveStateOverride__Boxed {
  struct StateOverrideSystem_PassiveStateOverride__Class *klass;
  struct MonitorData *monitor;
  struct StateOverrideSystem_PassiveStateOverride fields;
};
struct StateOverrideSystem_PassiveStateOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyDynamic;
  VirtualInvokeData ApplyStatic;
  VirtualInvokeData get_IsValid;
};
struct StateOverrideSystem_PassiveStateOverride__StaticFields {
};
struct StateOverrideSystem_PassiveStateOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateOverrideSystem_PassiveStateOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateOverrideSystem_PassiveStateOverride__VTable vtable;
};

struct __declspec(align(8)) UberStateCondition__Fields {
  enum UberStateConditionType__Enum m_conditionClassID;
  struct MoonReference_1_IUberState_ * Descriptor;
  struct GenericDataContainer * Data;
};
struct UberStateCondition {
  struct UberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct UberStateCondition__Fields fields;
};
struct BooleanUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct BooleanUberStateCondition {
  struct BooleanUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct BooleanUberStateCondition__Fields fields;
};
struct UberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct UberStateCondition__StaticFields {
};
struct UberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateCondition__VTable vtable;
};
struct BooleanUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct BooleanUberStateCondition__StaticFields {
};
struct BooleanUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BooleanUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BooleanUberStateCondition__VTable vtable;
};

struct ByteUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct ByteUberStateCondition {
  struct ByteUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct ByteUberStateCondition__Fields fields;
};
struct ByteUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct ByteUberStateCondition__StaticFields {
};
struct ByteUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ByteUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ByteUberStateCondition__VTable vtable;
};

struct FloatUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct FloatUberStateCondition {
  struct FloatUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct FloatUberStateCondition__Fields fields;
};
struct FloatUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct FloatUberStateCondition__StaticFields {
};
struct FloatUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatUberStateCondition__VTable vtable;
};

struct GenericUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct GenericUberStateCondition {
  struct GenericUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct GenericUberStateCondition__Fields fields;
};
struct GenericUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct GenericUberStateCondition__StaticFields {
};
struct GenericUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericUberStateCondition__VTable vtable;
};

struct IntUberStateCondition__Fields {
  struct UberStateCondition__Fields _;
};
struct IntUberStateCondition {
  struct IntUberStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct IntUberStateCondition__Fields fields;
};
struct IntUberStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct IntUberStateCondition__StaticFields {
};
struct IntUberStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntUberStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntUberStateCondition__VTable vtable;
};

struct __declspec(align(8)) DesiredUberStateGeneric__Fields {
  struct MoonReference_1_IGenericUberState_ * State;
  float DesiredValue;
  float m_previousState;
};
struct DesiredUberStateGeneric {
  struct DesiredUberStateGeneric__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateGeneric__Fields fields;
};
struct DesiredUberStateGeneric__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsFulfilled;
  VirtualInvokeData WriteDesiredStates;
  VirtualInvokeData Revert;
  VirtualInvokeData get_UberState;
  VirtualInvokeData get_NiceName;
};
struct DesiredUberStateGeneric__StaticFields {
};
struct DesiredUberStateGeneric__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateGeneric__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateGeneric__VTable vtable;
};

struct __declspec(align(8)) List_1_Moon_IUberStateApplier___Fields {
  struct IUberStateApplier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IUberStateApplier_ {
  struct List_1_Moon_IUberStateApplier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IUberStateApplier___Fields fields;
};
struct IUberStateApplier {
  struct IUberStateApplier__Class *klass;
  struct MonitorData *monitor;
};
struct IUberStateApplier__Array {
  struct IUberStateApplier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IUberStateApplier * vector[32];
};
struct IEnumerator_1_Moon_IUberStateApplier_ {
  struct IEnumerator_1_Moon_IUberStateApplier___Class *klass;
  struct MonitorData *monitor;
};
struct IUberStateApplier__VTable {
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct IUberStateApplier__StaticFields {
};
struct IUberStateApplier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUberStateApplier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUberStateApplier__VTable vtable;
};
struct IEnumerator_1_Moon_IUberStateApplier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IUberStateApplier___StaticFields {
};
struct IEnumerator_1_Moon_IUberStateApplier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IUberStateApplier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IUberStateApplier___VTable vtable;
};
struct List_1_Moon_IUberStateApplier___VTable {
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
struct List_1_Moon_IUberStateApplier___StaticFields {
  struct IUberStateApplier__Array * _emptyArray;
};
struct List_1_Moon_IUberStateApplier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_IUberStateApplier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_IUberStateApplier___VTable vtable;
};

struct __declspec(align(8)) UberStateController__Fields {
  struct List_1_Moon_UberStateController_ApplierContext_ * AppliersToApply;
  struct List_1_Moon_IUberStateApplier_ * m_tempToRemove;
};
struct UberStateController {
  struct UberStateController__Class *klass;
  struct MonitorData *monitor;
  struct UberStateController__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_IUberStateApplierWithCallbacks___Fields {
  struct IUberStateApplierWithCallbacks__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IUberStateApplierWithCallbacks_ {
  struct List_1_Moon_IUberStateApplierWithCallbacks___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IUberStateApplierWithCallbacks___Fields fields;
};
struct IUberStateApplierWithCallbacks {
  struct IUberStateApplierWithCallbacks__Class *klass;
  struct MonitorData *monitor;
};
struct IUberStateApplierWithCallbacks__Array {
  struct IUberStateApplierWithCallbacks__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IUberStateApplierWithCallbacks * vector[32];
};
struct IEnumerator_1_Moon_IUberStateApplierWithCallbacks_ {
  struct IEnumerator_1_Moon_IUberStateApplierWithCallbacks___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_UberStateController_ApplierContext___Fields {
  struct UberStateController_ApplierContext__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UberStateController_ApplierContext_ {
  struct List_1_Moon_UberStateController_ApplierContext___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UberStateController_ApplierContext___Fields fields;
};
struct UberStateController_ApplierContext {
  struct IUberStateApplier * Applier;
  enum UberStateApplyContext__Enum Context;
};
struct UberStateController_ApplierContext__Boxed {
  struct UberStateController_ApplierContext__Class *klass;
  struct MonitorData *monitor;
  struct UberStateController_ApplierContext fields;
};
struct UberStateController_ApplierContext__Array {
  struct UberStateController_ApplierContext__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateController_ApplierContext vector[32];
};
struct IEnumerator_1_Moon_UberStateController_ApplierContext_ {
  struct IEnumerator_1_Moon_UberStateController_ApplierContext___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_Moon_SceneUberStateGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_SceneUberStateGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_SceneUberStateGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Moon_SceneUberStateGroup_ {
  struct Dictionary_2_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Moon_SceneUberStateGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct SceneUberStateGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_SceneUberStateGroup_ vector[32];
};
struct __declspec(align(8)) SceneUberStateGroup__Fields {
  struct UberID * m_id;
};
struct SceneUberStateGroup {
  struct SceneUberStateGroup__Class *klass;
  struct MonitorData *monitor;
  struct SceneUberStateGroup__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_SceneUberStateGroup___Fields {
  struct Dictionary_2_System_String_Moon_SceneUberStateGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_SceneUberStateGroup_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_SceneUberStateGroup___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_SceneUberStateGroup___Fields {
  struct Dictionary_2_System_String_Moon_SceneUberStateGroup_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_SceneUberStateGroup_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_SceneUberStateGroup___Fields fields;
};
struct SceneUberStateGroup__Array {
  struct SceneUberStateGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneUberStateGroup * vector[32];
};
struct IEnumerator_1_Moon_SceneUberStateGroup_ {
  struct IEnumerator_1_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_SceneUberStateGroup_ {
  struct ICollection_1_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup_ {
  struct String * key;
  struct SceneUberStateGroup * value;
};
struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup___Boxed {
  struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup_ fields;
};
struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup___Array {
  struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Moon_SceneUberStateGroup_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Moon_SceneUberStateGroup_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_SceneUberStateGroup_ {
  struct IEnumerable_1_Moon_SceneUberStateGroup___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_Moon_IGenericUberState_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Moon_IGenericUberState_Single_ {
  struct Action_2_Moon_IGenericUberState_Single___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Moon_IGenericUberState_Single___Fields fields;
};
enum UberStateSaveFileHandler_LoadStatus__Enum : int32_t {
  UberStateSaveFileHandler_LoadStatus__Enum_LOAD_SUCCESSFUL = 0,
  UberStateSaveFileHandler_LoadStatus__Enum_UNSUPPORTED_OLD_SAVE_FILE = 1,
  UberStateSaveFileHandler_LoadStatus__Enum_SAVE_FILE_DOESNT_EXIST = 2,
  UberStateSaveFileHandler_LoadStatus__Enum_LOAD_ERROR = 3,
  UberStateSaveFileHandler_LoadStatus__Enum_FILE_FROM_FUTURE = 4,
};
struct UberStateSaveFileHandler_LoadStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberStateSaveFileHandler_LoadStatus__Enum value;
};
struct __declspec(align(8)) UberStateValueStore__Fields {
  enum UberStateSaveFileHandler_LoadStatus__Enum LoadStatus;
  int32_t _Version_k__BackingField;
  struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ * m_groupMap;
  struct Byte__Array * m_data;
  struct Byte__Array * m_dataBackup;
  int32_t m_dataBackupSize;
  bool m_isInitialized;
  int32_t m_id;
};
struct UberStateValueStore {
  struct UberStateValueStore__Class *klass;
  struct MonitorData *monitor;
  struct UberStateValueStore__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_Moon_UberStateValueGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateValueGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateValueGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ {
  struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_Moon_UberStateValueGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  struct UberStateValueGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateValueGroup_ vector[32];
};
struct __declspec(align(8)) UberStateValueGroup__Fields {
  int32_t UBER_STATE_GROUP_VERSION;
  struct UberID * m_id;
  struct Dictionary_2_Moon_UberID_System_Object_ * m_objectStateMap;
  struct Dictionary_2_Moon_UberID_System_Boolean_ * m_boolStateMap;
  struct Dictionary_2_Moon_UberID_System_Single_ * m_floatStateMap;
  struct Dictionary_2_Moon_UberID_System_Int32_ * m_intStateMap;
  struct Dictionary_2_Moon_UberID_System_Byte_ * m_byteStateMap;
  bool m_isDirty;
  int64_t m_dataSize;
  bool m_isInitialized;
};
struct UberStateValueGroup {
  struct UberStateValueGroup__Class *klass;
  struct MonitorData *monitor;
  struct UberStateValueGroup__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_System_Object___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Object_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_System_Object_ {
  struct Dictionary_2_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_System_Object___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  struct Object * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Object_ vector[32];
};
struct IEqualityComparer_1_Moon_UberID_ {
  struct IEqualityComparer_1_Moon_UberID___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object___Fields {
  struct Dictionary_2_Moon_UberID_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object___Fields fields;
};
struct UberID__Array {
  struct UberID__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberID * vector[32];
};
struct IEnumerator_1_Moon_UberID_ {
  struct IEnumerator_1_Moon_UberID___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Object___Fields {
  struct Dictionary_2_Moon_UberID_System_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Object_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Object___Fields fields;
};
struct ICollection_1_Moon_UberID_ {
  struct ICollection_1_Moon_UberID___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_UberID_System_Object_ {
  struct UberID * key;
  struct Object * value;
};
struct KeyValuePair_2_Moon_UberID_System_Object___Boxed {
  struct KeyValuePair_2_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_UberID_System_Object_ fields;
};
struct KeyValuePair_2_Moon_UberID_System_Object___Array {
  struct KeyValuePair_2_Moon_UberID_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_UberID_System_Object_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Object_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_UberID_ {
  struct IEnumerable_1_Moon_UberID___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_System_Boolean_ {
  struct Dictionary_2_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Boolean_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean___Fields {
  struct Dictionary_2_Moon_UberID_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Boolean___Fields {
  struct Dictionary_2_Moon_UberID_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Boolean___Fields fields;
};
struct KeyValuePair_2_Moon_UberID_System_Boolean_ {
  struct UberID * key;
  bool value;
};
struct KeyValuePair_2_Moon_UberID_System_Boolean___Boxed {
  struct KeyValuePair_2_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_UberID_System_Boolean_ fields;
};
struct KeyValuePair_2_Moon_UberID_System_Boolean___Array {
  struct KeyValuePair_2_Moon_UberID_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_UberID_System_Boolean_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Boolean_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_System_Single_ {
  struct Dictionary_2_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Single_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Single___Fields {
  struct Dictionary_2_Moon_UberID_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Single___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Single___Fields {
  struct Dictionary_2_Moon_UberID_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Single___Fields fields;
};
struct ICollection_1_System_Single_ {
  struct ICollection_1_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_UberID_System_Single_ {
  struct UberID * key;
  float value;
};
struct KeyValuePair_2_Moon_UberID_System_Single___Boxed {
  struct KeyValuePair_2_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_UberID_System_Single_ fields;
};
struct KeyValuePair_2_Moon_UberID_System_Single___Array {
  struct KeyValuePair_2_Moon_UberID_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_UberID_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_System_Int32_ {
  struct Dictionary_2_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Int32___Fields {
  struct Dictionary_2_Moon_UberID_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Int32___Fields {
  struct Dictionary_2_Moon_UberID_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_System_Int32___Fields fields;
};
struct KeyValuePair_2_Moon_UberID_System_Int32_ {
  struct UberID * key;
  int32_t value;
};
struct KeyValuePair_2_Moon_UberID_System_Int32___Boxed {
  struct KeyValuePair_2_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_UberID_System_Int32_ fields;
};
struct KeyValuePair_2_Moon_UberID_System_Int32___Array {
  struct KeyValuePair_2_Moon_UberID_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_UberID_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_System_Int32___Class *klass;
  struct MonitorData *monitor;
};}