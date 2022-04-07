namespace app {
struct MoonReference_1_IByteUberState_ {
  struct MoonReference_1_IByteUberState___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IByteUberState___Fields fields;
};
struct IMoonType_1_IByteUberState_ {
  struct IMoonType_1_IByteUberState___Class *klass;
  struct MonitorData *monitor;
};
struct IByteUberState {
  struct IByteUberState__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_IByteUberState___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IByteUberState___StaticFields {
};
struct IMoonType_1_IByteUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IByteUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IByteUberState___VTable vtable;
};
struct IByteUberState__VTable {
  VirtualInvokeData get_Value;
  VirtualInvokeData set_Value;
  VirtualInvokeData get_Options;
  VirtualInvokeData get_DefaultByteValue;
  VirtualInvokeData set_DefaultByteValue;
};
struct IByteUberState__StaticFields {
};
struct IByteUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IByteUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IByteUberState__VTable vtable;
};
struct MoonReference_1_IByteUberState___VTable {
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
struct MoonReference_1_IByteUberState___StaticFields {
};
struct MoonReference_1_IByteUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IByteUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IByteUberState___VTable vtable;
};
struct DesiredUberStateByte__VTable {
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
struct DesiredUberStateByte__StaticFields {
};
struct DesiredUberStateByte__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateByte__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateByte__VTable vtable;
};

struct __declspec(align(8)) DesiredUberStateComposite__Fields {
  struct List_1_DesiredUberStateBool_ * BoolRequirements;
  struct List_1_DesiredUberStateFloat_ * FloatRequirements;
  struct List_1_DesiredUberStateInt_ * IntRequirements;
  struct List_1_DesiredUberStateByte_ * ByteRequirements;
  struct List_1_Moon_IUberState_ * m_allDescriptors;
};
struct DesiredUberStateComposite {
  struct DesiredUberStateComposite__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateComposite__Fields fields;
};
struct __declspec(align(8)) List_1_DesiredUberStateBool___Fields {
  struct DesiredUberStateBool__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DesiredUberStateBool_ {
  struct List_1_DesiredUberStateBool___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DesiredUberStateBool___Fields fields;
};
struct DesiredUberStateBool__Array {
  struct DesiredUberStateBool__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DesiredUberStateBool * vector[32];
};
struct IEnumerator_1_DesiredUberStateBool_ {
  struct IEnumerator_1_DesiredUberStateBool___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DesiredUberStateFloat___Fields {
  struct DesiredUberStateFloat__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DesiredUberStateFloat_ {
  struct List_1_DesiredUberStateFloat___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DesiredUberStateFloat___Fields fields;
};
struct __declspec(align(8)) DesiredUberStateFloat__Fields {
  struct SerializedFloatUberState * Descriptor;
  float DesiredValue;
  float m_previousState;
};
struct DesiredUberStateFloat {
  struct DesiredUberStateFloat__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateFloat__Fields fields;
};
struct DesiredUberStateFloat__Array {
  struct DesiredUberStateFloat__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DesiredUberStateFloat * vector[32];
};
struct SerializedFloatUberState__Fields {
  struct UberIDOwnerSO__Fields _;
  float DefaultValue;
  float EditorValue;
  struct NamedValues_1_System_Single_ * NamedValues;
  struct UberStateGroup * Group;
  struct UberID * m_cachedGroupID;
  bool m_isGroupIDCached;
  float m_value;
  struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
struct SerializedFloatUberState {
  struct SerializedFloatUberState__Class *klass;
  struct MonitorData *monitor;
  struct SerializedFloatUberState__Fields fields;
};
struct __declspec(align(8)) NamedValues_1_System_Single___Fields {
  struct NamedValue_1_System_Single___Array * Entries;
};
struct NamedValues_1_System_Single_ {
  struct NamedValues_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct NamedValues_1_System_Single___Fields fields;
};
struct __declspec(align(8)) NamedValue_1_System_Single___Fields {
  struct String * Name;
  float Value;
};
struct NamedValue_1_System_Single_ {
  struct NamedValue_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct NamedValue_1_System_Single___Fields fields;
};
struct NamedValue_1_System_Single___Array {
  struct NamedValue_1_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NamedValue_1_System_Single_ * vector[32];
};
struct IEnumerator_1_DesiredUberStateFloat_ {
  struct IEnumerator_1_DesiredUberStateFloat___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DesiredUberStateInt___Fields {
  struct DesiredUberStateInt__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DesiredUberStateInt_ {
  struct List_1_DesiredUberStateInt___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DesiredUberStateInt___Fields fields;
};
struct __declspec(align(8)) DesiredUberStateInt__Fields {
  struct SerializedIntUberState * Descriptor;
  int32_t DesiredValue;
  int32_t m_previousState;
};
struct DesiredUberStateInt {
  struct DesiredUberStateInt__Class *klass;
  struct MonitorData *monitor;
  struct DesiredUberStateInt__Fields fields;
};
struct DesiredUberStateInt__Array {
  struct DesiredUberStateInt__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DesiredUberStateInt * vector[32];
};
struct SerializedIntUberState__Fields {
  struct UberIDOwnerSO__Fields _;
  int32_t DefaultValue;
  struct UberStateGroup * Group;
  struct UberID * m_cachedGroupID;
  bool m_isGroupIDCached;
  int32_t m_value;
  struct NamedValues_1_System_Int32_ * NamedValues;
  struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
struct SerializedIntUberState {
  struct SerializedIntUberState__Class *klass;
  struct MonitorData *monitor;
  struct SerializedIntUberState__Fields fields;
};
struct __declspec(align(8)) NamedValues_1_System_Int32___Fields {
  struct NamedValue_1_System_Int32___Array * Entries;
};
struct NamedValues_1_System_Int32_ {
  struct NamedValues_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct NamedValues_1_System_Int32___Fields fields;
};
struct __declspec(align(8)) NamedValue_1_System_Int32___Fields {
  struct String * Name;
  int32_t Value;
};
struct NamedValue_1_System_Int32_ {
  struct NamedValue_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct NamedValue_1_System_Int32___Fields fields;
};
struct NamedValue_1_System_Int32___Array {
  struct NamedValue_1_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NamedValue_1_System_Int32_ * vector[32];
};
struct IEnumerator_1_DesiredUberStateInt_ {
  struct IEnumerator_1_DesiredUberStateInt___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DesiredUberStateByte___Fields {
  struct DesiredUberStateByte__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DesiredUberStateByte_ {
  struct List_1_DesiredUberStateByte___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DesiredUberStateByte___Fields fields;
};
struct DesiredUberStateByte__Array {
  struct DesiredUberStateByte__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DesiredUberStateByte * vector[32];
};
struct IEnumerator_1_DesiredUberStateByte_ {
  struct IEnumerator_1_DesiredUberStateByte___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_IUberState___Fields {
  struct IUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IUberState_ {
  struct List_1_Moon_IUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IUberState___Fields fields;
};
struct IUberState__Array {
  struct IUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IUberState * vector[32];
};
struct IEnumerator_1_Moon_IUberState_ {
  struct IEnumerator_1_Moon_IUberState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_DesiredUberStateBool___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DesiredUberStateBool___StaticFields {
};
struct IEnumerator_1_DesiredUberStateBool___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DesiredUberStateBool___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DesiredUberStateBool___VTable vtable;
};
struct List_1_DesiredUberStateBool___VTable {
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
struct List_1_DesiredUberStateBool___StaticFields {
  struct DesiredUberStateBool__Array * _emptyArray;
};
struct List_1_DesiredUberStateBool___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DesiredUberStateBool___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DesiredUberStateBool___VTable vtable;
};
struct NamedValue_1_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValue_1_System_Single___StaticFields {
};
struct NamedValue_1_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValue_1_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValue_1_System_Single___VTable vtable;
};
struct NamedValues_1_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValues_1_System_Single___StaticFields {
};
struct NamedValues_1_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValues_1_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValues_1_System_Single___VTable vtable;
};
struct SerializedFloatUberState__VTable {
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
  VirtualInvokeData get_Options;
  VirtualInvokeData get_GenericValue;
  VirtualInvokeData set_GenericValue;
  VirtualInvokeData get_VolitileGenericOverrideValue;
  VirtualInvokeData set_VolitileGenericOverrideValue;
};
struct SerializedFloatUberState__StaticFields {
};
struct SerializedFloatUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializedFloatUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializedFloatUberState__VTable vtable;
};
struct DesiredUberStateFloat__VTable {
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
struct DesiredUberStateFloat__StaticFields {
};
struct DesiredUberStateFloat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateFloat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateFloat__VTable vtable;
};
struct IEnumerator_1_DesiredUberStateFloat___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DesiredUberStateFloat___StaticFields {
};
struct IEnumerator_1_DesiredUberStateFloat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DesiredUberStateFloat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DesiredUberStateFloat___VTable vtable;
};
struct List_1_DesiredUberStateFloat___VTable {
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
struct List_1_DesiredUberStateFloat___StaticFields {
  struct DesiredUberStateFloat__Array * _emptyArray;
};
struct List_1_DesiredUberStateFloat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DesiredUberStateFloat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DesiredUberStateFloat___VTable vtable;
};
struct NamedValue_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValue_1_System_Int32___StaticFields {
};
struct NamedValue_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValue_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValue_1_System_Int32___VTable vtable;
};
struct NamedValues_1_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NamedValues_1_System_Int32___StaticFields {
};
struct NamedValues_1_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamedValues_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamedValues_1_System_Int32___VTable vtable;
};
struct SerializedIntUberState__VTable {
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
  VirtualInvokeData get_Options;
  VirtualInvokeData get_GenericValue;
  VirtualInvokeData set_GenericValue;
  VirtualInvokeData get_VolitileGenericOverrideValue;
  VirtualInvokeData set_VolitileGenericOverrideValue;
};
struct SerializedIntUberState__StaticFields {
};
struct SerializedIntUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializedIntUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializedIntUberState__VTable vtable;
};
struct DesiredUberStateInt__VTable {
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
struct DesiredUberStateInt__StaticFields {
};
struct DesiredUberStateInt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateInt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateInt__VTable vtable;
};
struct IEnumerator_1_DesiredUberStateInt___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DesiredUberStateInt___StaticFields {
};
struct IEnumerator_1_DesiredUberStateInt___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DesiredUberStateInt___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DesiredUberStateInt___VTable vtable;
};
struct List_1_DesiredUberStateInt___VTable {
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
struct List_1_DesiredUberStateInt___StaticFields {
  struct DesiredUberStateInt__Array * _emptyArray;
};
struct List_1_DesiredUberStateInt___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DesiredUberStateInt___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DesiredUberStateInt___VTable vtable;
};
struct IEnumerator_1_DesiredUberStateByte___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DesiredUberStateByte___StaticFields {
};
struct IEnumerator_1_DesiredUberStateByte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DesiredUberStateByte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DesiredUberStateByte___VTable vtable;
};
struct List_1_DesiredUberStateByte___VTable {
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
struct List_1_DesiredUberStateByte___StaticFields {
  struct DesiredUberStateByte__Array * _emptyArray;
};
struct List_1_DesiredUberStateByte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DesiredUberStateByte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DesiredUberStateByte___VTable vtable;
};
struct IEnumerator_1_Moon_IUberState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IUberState___StaticFields {
};
struct IEnumerator_1_Moon_IUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IUberState___VTable vtable;
};
struct List_1_Moon_IUberState___VTable {
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
struct List_1_Moon_IUberState___StaticFields {
  struct IUberState__Array * _emptyArray;
};
struct List_1_Moon_IUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_IUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_IUberState___VTable vtable;
};
struct DesiredUberStateComposite__VTable {
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
struct DesiredUberStateComposite__StaticFields {
};
struct DesiredUberStateComposite__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DesiredUberStateComposite__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DesiredUberStateComposite__VTable vtable;
};

struct IDesiredUberState {
  struct IDesiredUberState__Class *klass;
  struct MonitorData *monitor;
};
struct IDesiredUberState__Array {
  struct IDesiredUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDesiredUberState * vector[32];
};
struct IDesiredUberState__VTable {
  VirtualInvokeData IsFulfilled;
  VirtualInvokeData WriteDesiredStates;
  VirtualInvokeData Revert;
  VirtualInvokeData get_UberState;
  VirtualInvokeData get_NiceName;
};
struct IDesiredUberState__StaticFields {
};
struct IDesiredUberState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDesiredUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDesiredUberState__VTable vtable;
};

struct UberStateCollection__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_UnityEngine_ScriptableObject_ * m_descriptors;
  struct IUberState__Array * m_descriptorsArray;
  struct List_1_Moon_INonSerializedUberState_ * m_nonSerializedUberStates;
  struct List_1_Moon_IExternallyModifiableUberState_ * m_externallModifiableUberStates;
  struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ * m_readOnlyExternallyModifiableUberStates;
  bool m_hasReadOnlyCollection;
  struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup_ * UberStateDescriptorGroups;
};
struct UberStateCollection {
  struct UberStateCollection__Class *klass;
  struct MonitorData *monitor;
  struct UberStateCollection__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_ScriptableObject___Fields {
  struct ScriptableObject__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_ScriptableObject_ {
  struct List_1_UnityEngine_ScriptableObject___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_ScriptableObject___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_INonSerializedUberState___Fields {
  struct INonSerializedUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_INonSerializedUberState_ {
  struct List_1_Moon_INonSerializedUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_INonSerializedUberState___Fields fields;
};
struct INonSerializedUberState {
  struct INonSerializedUberState__Class *klass;
  struct MonitorData *monitor;
};
struct INonSerializedUberState__Array {
  struct INonSerializedUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct INonSerializedUberState * vector[32];
};
struct IEnumerator_1_Moon_INonSerializedUberState_ {
  struct IEnumerator_1_Moon_INonSerializedUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_IExternallyModifiableUberState___Fields {
  struct IExternallyModifiableUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IExternallyModifiableUberState_ {
  struct List_1_Moon_IExternallyModifiableUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IExternallyModifiableUberState___Fields fields;
};
struct IExternallyModifiableUberState {
  struct IExternallyModifiableUberState__Class *klass;
  struct MonitorData *monitor;
};
struct IExternallyModifiableUberState__Array {
  struct IExternallyModifiableUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IExternallyModifiableUberState * vector[32];
};
struct IEnumerator_1_Moon_IExternallyModifiableUberState_ {
  struct IEnumerator_1_Moon_IExternallyModifiableUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ReadOnlyCollection_1_Moon_IExternallyModifiableUberState___Fields {
  struct IList_1_Moon_IExternallyModifiableUberState_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_ {
  struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState___Fields fields;
};
struct IList_1_Moon_IExternallyModifiableUberState_ {
  struct IList_1_Moon_IExternallyModifiableUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_UberStateCollectionGroup___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_UberStateCollectionGroup_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_UberStateCollectionGroup_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup_ {
  struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct UberStateCollectionGroup * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_UberStateCollectionGroup_ vector[32];
};
struct __declspec(align(8)) UberStateCollectionGroup__Fields {
  struct Dictionary_2_System_Int32_Moon_IUberState_ * DescriptorMap;
};
struct UberStateCollectionGroup {
  struct UberStateCollectionGroup__Class *klass;
  struct MonitorData *monitor;
  struct UberStateCollectionGroup__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_IUberState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IUberState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_IUberState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_IUberState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_IUberState_ {
  struct Dictionary_2_System_Int32_Moon_IUberState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_IUberState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IUberState_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct IUberState * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IUberState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IUberState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_IUberState_ fields;
};}