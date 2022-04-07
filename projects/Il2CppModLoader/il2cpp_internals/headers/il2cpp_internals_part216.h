namespace app {

struct DrawAsButtonAttribute {
  struct DrawAsButtonAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DrawAsButtonAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DrawAsButtonAttribute__StaticFields {
};
struct DrawAsButtonAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrawAsButtonAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrawAsButtonAttribute__VTable vtable;
};

struct DynamicHierarchyAttribute {
  struct DynamicHierarchyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct DynamicHierarchyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DynamicHierarchyAttribute__StaticFields {
};
struct DynamicHierarchyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicHierarchyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicHierarchyAttribute__VTable vtable;
};

enum HelpAttribute_MessageType__Enum : int32_t {
  HelpAttribute_MessageType__Enum_None = 0,
  HelpAttribute_MessageType__Enum_Info = 1,
  HelpAttribute_MessageType__Enum_Warning = 2,
  HelpAttribute_MessageType__Enum_Error = 3,
};
struct HelpAttribute_MessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HelpAttribute_MessageType__Enum value;
};
struct __declspec(align(8)) HelpAttribute__Fields {
  struct String * Text;
  enum HelpAttribute_MessageType__Enum Type;
};
struct HelpAttribute {
  struct HelpAttribute__Class *klass;
  struct MonitorData *monitor;
  struct HelpAttribute__Fields fields;
};
struct HelpAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct HelpAttribute__StaticFields {
};
struct HelpAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HelpAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HelpAttribute__VTable vtable;
};

struct __declspec(align(8)) MinMaxSliderAttribute__Fields {
  float Min;
  float Max;
};
struct MinMaxSliderAttribute {
  struct MinMaxSliderAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MinMaxSliderAttribute__Fields fields;
};
struct MinMaxSliderAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MinMaxSliderAttribute__StaticFields {
};
struct MinMaxSliderAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinMaxSliderAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinMaxSliderAttribute__VTable vtable;
};

struct ReadOnlyAttribute_2 {
  struct ReadOnlyAttribute_2__Class *klass;
  struct MonitorData *monitor;
};
struct ReadOnlyAttribute_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ReadOnlyAttribute_2__StaticFields {
};
struct ReadOnlyAttribute_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyAttribute_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyAttribute_2__VTable vtable;
};

struct AnimationCurve__Array {
  struct AnimationCurve__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationCurve * vector[32];
};

enum AnimationCurveExtensions_TangentMode__Enum : int32_t {
  AnimationCurveExtensions_TangentMode__Enum_Editable = 0,
  AnimationCurveExtensions_TangentMode__Enum_Smooth = 1,
  AnimationCurveExtensions_TangentMode__Enum_Linear = 2,
  AnimationCurveExtensions_TangentMode__Enum_Stepped = 3,
};
struct AnimationCurveExtensions_TangentMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationCurveExtensions_TangentMode__Enum value;
};

enum AnimationCurveExtensions_TangentDirection__Enum : int32_t {
  AnimationCurveExtensions_TangentDirection__Enum_Left = 0,
  AnimationCurveExtensions_TangentDirection__Enum_Right = 1,
};
struct AnimationCurveExtensions_TangentDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationCurveExtensions_TangentDirection__Enum value;
};

struct __declspec(align(8)) UberStateConditionDrawerAttribute__Fields {
  struct Type * m_conditionType;
};
struct UberStateConditionDrawerAttribute {
  struct UberStateConditionDrawerAttribute__Class *klass;
  struct MonitorData *monitor;
  struct UberStateConditionDrawerAttribute__Fields fields;
};
struct UberStateConditionDrawerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UberStateConditionDrawerAttribute__StaticFields {
};
struct UberStateConditionDrawerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateConditionDrawerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateConditionDrawerAttribute__VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_UberStateConditionType_System_Type___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberStateConditionType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberStateConditionType_System_Type_ {
  struct Dictionary_2_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberStateConditionType_System_Type___Fields fields;
};
enum UberStateConditionType__Enum : int32_t {
  UberStateConditionType__Enum_Undefined = 0,
  UberStateConditionType__Enum_BooleanCondition = 1,
  UberStateConditionType__Enum_FloatCondition = 2,
  UberStateConditionType__Enum_AbilityCondition = 3,
  UberStateConditionType__Enum_IntCondition = 4,
  UberStateConditionType__Enum_HoldingTorchCondition = 5,
  UberStateConditionType__Enum_ByteCondition = 6,
  UberStateConditionType__Enum_SceneCondition = 7,
  UberStateConditionType__Enum_GenericCondition = 8,
};
struct UberStateConditionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberStateConditionType__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type_ {
  int32_t hashCode;
  int32_t next;
  enum UberStateConditionType__Enum key;
  struct Type * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type_ vector[32];
};
struct IEqualityComparer_1_UberStateConditionType_ {
  struct IEqualityComparer_1_UberStateConditionType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___Fields {
  struct Dictionary_2_UberStateConditionType_System_Type_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___Fields fields;
};
struct UberStateConditionType__Enum__Array {
  struct UberStateConditionType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberStateConditionType__Enum vector[32];
};
struct IEnumerator_1_UberStateConditionType_ {
  struct IEnumerator_1_UberStateConditionType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___Fields {
  struct Dictionary_2_UberStateConditionType_System_Type_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___Fields fields;
};
struct ICollection_1_UberStateConditionType_ {
  struct ICollection_1_UberStateConditionType___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberStateConditionType_System_Type_ {
  enum UberStateConditionType__Enum key;
  struct Type * value;
};
struct KeyValuePair_2_UberStateConditionType_System_Type___Boxed {
  struct KeyValuePair_2_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberStateConditionType_System_Type_ fields;
};
struct KeyValuePair_2_UberStateConditionType_System_Type___Array {
  struct KeyValuePair_2_UberStateConditionType_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberStateConditionType_System_Type_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type_ {
  struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberStateConditionType_ {
  struct IEnumerable_1_UberStateConditionType___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UberStateConditionType_System_Type___VTable vtable;
};
struct IEqualityComparer_1_UberStateConditionType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UberStateConditionType___StaticFields {
};
struct IEqualityComparer_1_UberStateConditionType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UberStateConditionType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UberStateConditionType___VTable vtable;
};
struct IEnumerator_1_UberStateConditionType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberStateConditionType___StaticFields {
};
struct IEnumerator_1_UberStateConditionType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberStateConditionType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberStateConditionType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberStateConditionType_System_Type___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberStateConditionType_System_Type___VTable vtable;
};
struct ICollection_1_UberStateConditionType___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UberStateConditionType___StaticFields {
};
struct ICollection_1_UberStateConditionType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UberStateConditionType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UberStateConditionType___VTable vtable;
};
struct KeyValuePair_2_UberStateConditionType_System_Type___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UberStateConditionType_System_Type___StaticFields {
};
struct KeyValuePair_2_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UberStateConditionType_System_Type___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UberStateConditionType_System_Type___VTable vtable;
};
struct IEnumerable_1_UberStateConditionType___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UberStateConditionType___StaticFields {
};
struct IEnumerable_1_UberStateConditionType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UberStateConditionType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UberStateConditionType___VTable vtable;
};
struct Dictionary_2_UberStateConditionType_System_Type___VTable {
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
struct Dictionary_2_UberStateConditionType_System_Type___StaticFields {
};
struct Dictionary_2_UberStateConditionType_System_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UberStateConditionType_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UberStateConditionType_System_Type___VTable vtable;
};

struct __declspec(align(8)) UberStateConditionHelper_c_DisplayClass3_0__Fields {
  struct Type * derivedType;
};
struct UberStateConditionHelper_c_DisplayClass3_0 {
  struct UberStateConditionHelper_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct UberStateConditionHelper_c_DisplayClass3_0__Fields fields;
};
struct UberStateConditionHelper_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateConditionHelper_c_DisplayClass3_0__StaticFields {
};
struct UberStateConditionHelper_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateConditionHelper_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateConditionHelper_c_DisplayClass3_0__VTable vtable;
};

struct UberStateConditionHelper_c {
  struct UberStateConditionHelper_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1_ {
  struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___Fields fields;
};
struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___VTable {
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
struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___StaticFields {
};
struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1___VTable vtable;
};
struct UberStateConditionHelper_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateConditionHelper_c__StaticFields {
  struct UberStateConditionHelper_c * __9;
  struct Func_2_System_Reflection_Assembly_System_Collections_Generic_IEnumerable_1_ * __9__3_0;
};
struct UberStateConditionHelper_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateConditionHelper_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateConditionHelper_c__VTable vtable;
};

struct __declspec(align(8)) DesiredUberStateBoolBase__Fields {
  struct SerializedBooleanUberState * Descriptor;
  bool m_previousState;
};
struct DesiredUberStateBoolBase {
  struct DesiredUberStateBoolBase__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateBoolBase__Fields fields;
};
struct UberIDOwnerSO__Fields {
  struct ScriptableObject__Fields _;
  struct UberID * m_id;
  struct String * m_awakeName;
};
struct UberIDOwnerSO {
  struct UberIDOwnerSO__Class *klass;
  struct MonitorData *monitor;
  struct UberIDOwnerSO__Fields fields;
};
struct SerializedBooleanUberState__Fields {
  struct UberIDOwnerSO__Fields _;
  bool DefaultValue;
  bool EditorValue;
  struct NamedValues_1_System_Boolean_ * NamedValues;
  struct UberStateGroup * Group;
  struct UberID * m_cachedGroupID;
  bool m_isGroupIDCached;
  bool m_value;
  struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
struct SerializedBooleanUberState {
  struct SerializedBooleanUberState__Class *klass;
  struct MonitorData *monitor;
  struct SerializedBooleanUberState__Fields fields;
};
struct __declspec(align(8)) UberID__Fields {
  int32_t m_id;
};
struct UberID {
  struct UberID__Class *klass;
  struct MonitorData *monitor;
  struct UberID__Fields fields;
};
struct __declspec(align(8)) NamedValues_1_System_Boolean___Fields {
  struct NamedValue_1_System_Boolean___Array * Entries;
};
struct NamedValues_1_System_Boolean_ {
  struct NamedValues_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct NamedValues_1_System_Boolean___Fields fields;
};
struct __declspec(align(8)) NamedValue_1_System_Boolean___Fields {
  struct String * Name;
  bool Value;
};
struct NamedValue_1_System_Boolean_ {
  struct NamedValue_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct NamedValue_1_System_Boolean___Fields fields;
};
struct NamedValue_1_System_Boolean___Array {
  struct NamedValue_1_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NamedValue_1_System_Boolean_ * vector[32];
};
struct UberStateGroup__Fields {
  struct UberIDOwnerSO__Fields _;
};
struct UberStateGroup {
  struct UberStateGroup__Class *klass;
  struct MonitorData *monitor;
  struct UberStateGroup__Fields fields;
};
struct __declspec(align(8)) UberStateArchive__Fields {
  struct Byte__Array * m_buffer;
  int32_t m_caret;
  bool m_writing;
};
struct UberStateArchive {
  struct UberStateArchive__Class *klass;
  struct MonitorData *monitor;
  struct UberStateArchive__Fields fields;
};
enum UberStateHeader_UberStateType__Enum : int32_t {
  UberStateHeader_UberStateType__Enum_Uninitialized = 0,
  UberStateHeader_UberStateType__Enum_Int = 1,
  UberStateHeader_UberStateType__Enum_Float = 2,
  UberStateHeader_UberStateType__Enum_Boolean = 3,
  UberStateHeader_UberStateType__Enum_Byte = 4,
  UberStateHeader_UberStateType__Enum_Player = 5,
  UberStateHeader_UberStateType__Enum_SavePedestal = 6,
  UberStateHeader_UberStateType__Enum_OldSaveNoType = 7,
};
struct UberStateHeader_UberStateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberStateHeader_UberStateType__Enum value;
};
struct IUberStateGroup {
  struct IUberStateGroup__Class *klass;
  struct MonitorData *monitor;
};
struct IUberState {
  struct IUberState__Class *klass;
  struct MonitorData *monitor;
};
struct DesiredUberStateBool__Fields {
  struct DesiredUberStateBoolBase__Fields _;
  bool DesiredValue;
};
struct DesiredUberStateBool {
  struct DesiredUberStateBool__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateBool__Fields fields;
};
struct UberID__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberID__StaticFields {
};
struct UberID__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberID__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberID__VTable vtable;
};
struct UberIDOwnerSO__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ID;
};
struct UberIDOwnerSO__StaticFields {
};
struct UberIDOwnerSO__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberIDOwnerSO__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberIDOwnerSO__VTable vtable;
};
struct NamedValue_1_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValue_1_System_Boolean___StaticFields {
};
struct NamedValue_1_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValue_1_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValue_1_System_Boolean___VTable vtable;
};
struct NamedValues_1_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValues_1_System_Boolean___StaticFields {
};
struct NamedValues_1_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValues_1_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValues_1_System_Boolean___VTable vtable;
};
struct UberStateGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ID;
  VirtualInvokeData get_ID_1;
  VirtualInvokeData get_GroupName;
};
struct UberStateGroup__StaticFields {
};
struct UberStateGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateGroup__VTable vtable;
};
struct UberStateArchive__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateArchive__StaticFields {
};
struct UberStateArchive__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateArchive__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateArchive__VTable vtable;
};
struct IUberStateGroup__VTable {
  VirtualInvokeData get_ID;
  VirtualInvokeData get_GroupName;
};
struct IUberStateGroup__StaticFields {
};
struct IUberStateGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUberStateGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUberStateGroup__VTable vtable;
};
struct SerializedBooleanUberState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ID;
  VirtualInvokeData get_Size;
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData get_Type;
  VirtualInvokeData CreateDefaultUberState;
  VirtualInvokeData get_UberStateGroup;
  VirtualInvokeData get_GroupID;
  VirtualInvokeData get_StateID;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Value;
  VirtualInvokeData set_Value;
  VirtualInvokeData get_DefaultBooleanValue;
  VirtualInvokeData set_DefaultBooleanValue;
  VirtualInvokeData get_Options;
  VirtualInvokeData get_GenericValue;
  VirtualInvokeData set_GenericValue;
  VirtualInvokeData get_VolitileGenericOverrideValue;
  VirtualInvokeData set_VolitileGenericOverrideValue;
};
struct SerializedBooleanUberState__StaticFields {
};
struct SerializedBooleanUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializedBooleanUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializedBooleanUberState__VTable vtable;
};
struct IUberState__VTable {
  VirtualInvokeData get_UberStateGroup;
  VirtualInvokeData get_GroupID;
  VirtualInvokeData get_StateID;
  VirtualInvokeData get_Name;
};
struct IUberState__StaticFields {
};
struct IUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUberState__VTable vtable;
};
struct DesiredUberStateBool__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsFulfilled;
  VirtualInvokeData WriteDesiredStates;
  VirtualInvokeData Revert;
  VirtualInvokeData get_UberState;
  VirtualInvokeData get_NiceName;
  VirtualInvokeData get_BoolDesiredValue;
};
struct DesiredUberStateBool__StaticFields {
};
struct DesiredUberStateBool__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateBool__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateBool__VTable vtable;
};
struct DesiredUberStateBoolBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsFulfilled;
  VirtualInvokeData WriteDesiredStates;
  VirtualInvokeData Revert;
  VirtualInvokeData get_UberState;
  VirtualInvokeData get_NiceName;
  VirtualInvokeData __unknown;
};
struct DesiredUberStateBoolBase__StaticFields {
};
struct DesiredUberStateBoolBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateBoolBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateBoolBase__VTable vtable;
};

enum DesiredUberStateDoor_DoorState__Enum : int32_t {
  DesiredUberStateDoor_DoorState__Enum_Opened = 0,
  DesiredUberStateDoor_DoorState__Enum_Closed = 1,
};
struct DesiredUberStateDoor_DoorState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DesiredUberStateDoor_DoorState__Enum value;
};
struct DesiredUberStateDoor__Fields {
  struct DesiredUberStateBoolBase__Fields _;
  enum DesiredUberStateDoor_DoorState__Enum DesiredDoorState;
};
struct DesiredUberStateDoor {
  struct DesiredUberStateDoor__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateDoor__Fields fields;
};
struct DesiredUberStateDoor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsFulfilled;
  VirtualInvokeData WriteDesiredStates;
  VirtualInvokeData Revert;
  VirtualInvokeData get_UberState;
  VirtualInvokeData get_NiceName;
  VirtualInvokeData get_BoolDesiredValue;
};
struct DesiredUberStateDoor__StaticFields {
};
struct DesiredUberStateDoor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateDoor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateDoor__VTable vtable;
};

struct __declspec(align(8)) DesiredUberStateByte__Fields {
  struct MoonReference_1_IByteUberState_ * State;
  uint8_t DesiredStateValue;
  uint8_t m_previousState;
};
struct DesiredUberStateByte {
  struct DesiredUberStateByte__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateByte__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IByteUberState___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IByteUberState_ * m_cachedProxyType;
  struct IByteUberState * m_volatileValue;
};}