namespace app {
struct IEnumerator_1_AmplifyColor_VolumeEffectComponent_ {
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AmplifyColor_VolumeEffect_ {
  struct IEnumerator_1_AmplifyColor_VolumeEffect___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_AmplifyColorVolumeBase___Fields {
  struct AmplifyColorVolumeBase__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColorVolumeBase_ {
  struct List_1_AmplifyColorVolumeBase___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColorVolumeBase___Fields fields;
};
struct AmplifyColorVolumeBase__Array {
  struct AmplifyColorVolumeBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AmplifyColorVolumeBase * vector[32];
};
struct IEnumerator_1_AmplifyColorVolumeBase_ {
  struct IEnumerator_1_AmplifyColorVolumeBase___Class *klass;
  struct MonitorData *monitor;
};
struct AmplifyColorTriggerProxyBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Reference;
  struct AmplifyColorBase * OwnerEffect;
};
struct AmplifyColorTriggerProxyBase {
  struct AmplifyColorTriggerProxyBase__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorTriggerProxyBase__Fields fields;
};
struct __declspec(align(8)) VolumeEffectFlags__Fields {
  struct List_1_AmplifyColor_VolumeEffectComponentFlags_ * components;
};
struct VolumeEffectFlags {
  struct VolumeEffectFlags__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectFlags__Fields fields;
};
struct __declspec(align(8)) List_1_AmplifyColor_VolumeEffectComponentFlags___Fields {
  struct VolumeEffectComponentFlags__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColor_VolumeEffectComponentFlags_ {
  struct List_1_AmplifyColor_VolumeEffectComponentFlags___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColor_VolumeEffectComponentFlags___Fields fields;
};
struct __declspec(align(8)) VolumeEffectComponentFlags__Fields {
  struct String * componentName;
  struct List_1_AmplifyColor_VolumeEffectFieldFlags_ * componentFields;
  bool blendFlag;
};
struct VolumeEffectComponentFlags {
  struct VolumeEffectComponentFlags__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectComponentFlags__Fields fields;
};
struct VolumeEffectComponentFlags__Array {
  struct VolumeEffectComponentFlags__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VolumeEffectComponentFlags * vector[32];
};
struct __declspec(align(8)) List_1_AmplifyColor_VolumeEffectFieldFlags___Fields {
  struct VolumeEffectFieldFlags__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColor_VolumeEffectFieldFlags_ {
  struct List_1_AmplifyColor_VolumeEffectFieldFlags___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColor_VolumeEffectFieldFlags___Fields fields;
};
struct __declspec(align(8)) VolumeEffectFieldFlags__Fields {
  struct String * fieldName;
  struct String * fieldType;
  bool blendFlag;
};
struct VolumeEffectFieldFlags {
  struct VolumeEffectFieldFlags__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectFieldFlags__Fields fields;
};
struct VolumeEffectFieldFlags__Array {
  struct VolumeEffectFieldFlags__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VolumeEffectFieldFlags * vector[32];
};
struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags_ {
  struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags_ {
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___Class *klass;
  struct MonitorData *monitor;
};
struct VolumeEffectField__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectField__StaticFields {
};
struct VolumeEffectField__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectField__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectField__VTable vtable;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectField___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectField___StaticFields {
};
struct IEnumerator_1_AmplifyColor_VolumeEffectField___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColor_VolumeEffectField___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColor_VolumeEffectField___VTable vtable;
};
struct List_1_AmplifyColor_VolumeEffectField___VTable {
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
struct List_1_AmplifyColor_VolumeEffectField___StaticFields {
  struct VolumeEffectField__Array * _emptyArray;
};
struct List_1_AmplifyColor_VolumeEffectField___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColor_VolumeEffectField___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColor_VolumeEffectField___VTable vtable;
};
struct VolumeEffectComponent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectComponent__StaticFields {
};
struct VolumeEffectComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectComponent__VTable vtable;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___StaticFields {
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponent___VTable vtable;
};
struct List_1_AmplifyColor_VolumeEffectComponent___VTable {
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
struct List_1_AmplifyColor_VolumeEffectComponent___StaticFields {
  struct VolumeEffectComponent__Array * _emptyArray;
};
struct List_1_AmplifyColor_VolumeEffectComponent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColor_VolumeEffectComponent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColor_VolumeEffectComponent___VTable vtable;
};
struct VolumeEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffect__StaticFields {
};
struct VolumeEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffect__VTable vtable;
};
struct IEnumerator_1_AmplifyColor_VolumeEffect___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColor_VolumeEffect___StaticFields {
};
struct IEnumerator_1_AmplifyColor_VolumeEffect___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColor_VolumeEffect___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColor_VolumeEffect___VTable vtable;
};
struct List_1_AmplifyColor_VolumeEffect___VTable {
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
struct List_1_AmplifyColor_VolumeEffect___StaticFields {
  struct VolumeEffect__Array * _emptyArray;
};
struct List_1_AmplifyColor_VolumeEffect___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColor_VolumeEffect___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColor_VolumeEffect___VTable vtable;
};
struct VolumeEffectContainer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectContainer__StaticFields {
};
struct VolumeEffectContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectContainer__VTable vtable;
};
struct AmplifyColorVolumeBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorVolumeBase__StaticFields {
};
struct AmplifyColorVolumeBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorVolumeBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorVolumeBase__VTable vtable;
};
struct IEnumerator_1_AmplifyColorVolumeBase___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColorVolumeBase___StaticFields {
};
struct IEnumerator_1_AmplifyColorVolumeBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColorVolumeBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColorVolumeBase___VTable vtable;
};
struct List_1_AmplifyColorVolumeBase___VTable {
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
struct List_1_AmplifyColorVolumeBase___StaticFields {
  struct AmplifyColorVolumeBase__Array * _emptyArray;
};
struct List_1_AmplifyColorVolumeBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColorVolumeBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColorVolumeBase___VTable vtable;
};
struct AmplifyColorTriggerProxyBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorTriggerProxyBase__StaticFields {
};
struct AmplifyColorTriggerProxyBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorTriggerProxyBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorTriggerProxyBase__VTable vtable;
};
struct VolumeEffectFieldFlags__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectFieldFlags__StaticFields {
};
struct VolumeEffectFieldFlags__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectFieldFlags__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectFieldFlags__VTable vtable;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___StaticFields {
};
struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColor_VolumeEffectFieldFlags___VTable vtable;
};
struct List_1_AmplifyColor_VolumeEffectFieldFlags___VTable {
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
struct List_1_AmplifyColor_VolumeEffectFieldFlags___StaticFields {
  struct VolumeEffectFieldFlags__Array * _emptyArray;
};
struct List_1_AmplifyColor_VolumeEffectFieldFlags___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColor_VolumeEffectFieldFlags___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColor_VolumeEffectFieldFlags___VTable vtable;
};
struct VolumeEffectComponentFlags__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectComponentFlags__StaticFields {
};
struct VolumeEffectComponentFlags__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectComponentFlags__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectComponentFlags__VTable vtable;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___StaticFields {
};
struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AmplifyColor_VolumeEffectComponentFlags___VTable vtable;
};
struct List_1_AmplifyColor_VolumeEffectComponentFlags___VTable {
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
struct List_1_AmplifyColor_VolumeEffectComponentFlags___StaticFields {
  struct VolumeEffectComponentFlags__Array * _emptyArray;
};
struct List_1_AmplifyColor_VolumeEffectComponentFlags___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AmplifyColor_VolumeEffectComponentFlags___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AmplifyColor_VolumeEffectComponentFlags___VTable vtable;
};
struct VolumeEffectFlags__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectFlags__StaticFields {
};
struct VolumeEffectFlags__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectFlags__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectFlags__VTable vtable;
};
struct AmplifyColorBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorBase__StaticFields {
};
struct AmplifyColorBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorBase__VTable vtable;
};

struct AmplifyColorEffect__Fields {
  struct AmplifyColorBase__Fields _;
};
struct AmplifyColorEffect {
  struct AmplifyColorEffect__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorEffect__Fields fields;
};
struct AmplifyColorEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorEffect__StaticFields {
};
struct AmplifyColorEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorEffect__VTable vtable;
};

struct AmplifyColorTriggerProxy__Fields {
  struct AmplifyColorTriggerProxyBase__Fields _;
  struct SphereCollider * sphereCollider;
  struct Rigidbody * rigidBody;
};
struct AmplifyColorTriggerProxy {
  struct AmplifyColorTriggerProxy__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorTriggerProxy__Fields fields;
};
struct AmplifyColorTriggerProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorTriggerProxy__StaticFields {
};
struct AmplifyColorTriggerProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorTriggerProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorTriggerProxy__VTable vtable;
};

struct AmplifyColorTriggerProxy2D__Fields {
  struct AmplifyColorTriggerProxyBase__Fields _;
  struct CircleCollider2D * circleCollider;
  struct Rigidbody2D * rigidBody;
};
struct AmplifyColorTriggerProxy2D {
  struct AmplifyColorTriggerProxy2D__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorTriggerProxy2D__Fields fields;
};
struct AmplifyColorTriggerProxy2D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorTriggerProxy2D__StaticFields {
};
struct AmplifyColorTriggerProxy2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorTriggerProxy2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorTriggerProxy2D__VTable vtable;
};

struct AmplifyColorVolume__Fields {
  struct AmplifyColorVolumeBase__Fields _;
};
struct AmplifyColorVolume {
  struct AmplifyColorVolume__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorVolume__Fields fields;
};
struct AmplifyColorVolume__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorVolume__StaticFields {
};
struct AmplifyColorVolume__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorVolume__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorVolume__VTable vtable;
};

struct AmplifyColorVolume2D__Fields {
  struct AmplifyColorVolumeBase__Fields _;
};
struct AmplifyColorVolume2D {
  struct AmplifyColorVolume2D__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorVolume2D__Fields fields;
};
struct AmplifyColorVolume2D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmplifyColorVolume2D__StaticFields {
};
struct AmplifyColorVolume2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmplifyColorVolume2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmplifyColorVolume2D__VTable vtable;
};

struct __declspec(align(8)) VersionInfo__Fields {
  int32_t m_major;
  int32_t m_minor;
  int32_t m_release;
};
struct VersionInfo {
  struct VersionInfo__Class *klass;
  struct MonitorData *monitor;
  struct VersionInfo__Fields fields;
};
struct VersionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VersionInfo__StaticFields {
  struct String * StageSuffix;
  struct String * TrialSuffix;
};
struct VersionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VersionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VersionInfo__VTable vtable;
};

struct __declspec(align(8)) VolumeEffectComponent_c_DisplayClass7_0__Fields {
  struct VolumeEffectFieldFlags * fieldFlags;
};
struct VolumeEffectComponent_c_DisplayClass7_0 {
  struct VolumeEffectComponent_c_DisplayClass7_0__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectComponent_c_DisplayClass7_0__Fields fields;
};
struct VolumeEffectComponent_c_DisplayClass7_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectComponent_c_DisplayClass7_0__StaticFields {
};
struct VolumeEffectComponent_c_DisplayClass7_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectComponent_c_DisplayClass7_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectComponent_c_DisplayClass7_0__VTable vtable;
};

struct VolumeEffectComponent_c {
  struct VolumeEffectComponent_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_AmplifyColor_VolumeEffectField_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_AmplifyColor_VolumeEffectField_String_ {
  struct Func_2_AmplifyColor_VolumeEffectField_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_AmplifyColor_VolumeEffectField_String___Fields fields;
};
struct Func_2_AmplifyColor_VolumeEffectField_String___VTable {
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
struct Func_2_AmplifyColor_VolumeEffectField_String___StaticFields {
};
struct Func_2_AmplifyColor_VolumeEffectField_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_AmplifyColor_VolumeEffectField_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_AmplifyColor_VolumeEffectField_String___VTable vtable;
};
struct VolumeEffectComponent_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffectComponent_c__StaticFields {
  struct VolumeEffectComponent_c * __9;
  struct Func_2_System_Reflection_FieldInfo_Boolean_ * __9__9_0;
  struct Func_2_AmplifyColor_VolumeEffectField_String_ * __9__10_0;
};
struct VolumeEffectComponent_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffectComponent_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffectComponent_c__VTable vtable;
};

struct VolumeEffect_c {
  struct VolumeEffect_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_UnityEngine_Component_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_Component_Boolean_ {
  struct Func_2_UnityEngine_Component_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_Component_Boolean___Fields fields;
};
struct Func_2_AmplifyColor_VolumeEffectComponent_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_AmplifyColor_VolumeEffectComponent_String_ {
  struct Func_2_AmplifyColor_VolumeEffectComponent_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_AmplifyColor_VolumeEffectComponent_String___Fields fields;
};
struct Func_2_UnityEngine_Component_Boolean___VTable {
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
struct Func_2_UnityEngine_Component_Boolean___StaticFields {
};
struct Func_2_UnityEngine_Component_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_UnityEngine_Component_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_UnityEngine_Component_Boolean___VTable vtable;
};
struct Func_2_AmplifyColor_VolumeEffectComponent_String___VTable {
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
struct Func_2_AmplifyColor_VolumeEffectComponent_String___StaticFields {
};
struct Func_2_AmplifyColor_VolumeEffectComponent_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_AmplifyColor_VolumeEffectComponent_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_AmplifyColor_VolumeEffectComponent_String___VTable vtable;
};
struct VolumeEffect_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumeEffect_c__StaticFields {
  struct VolumeEffect_c * __9;
  struct Func_2_UnityEngine_Component_Boolean_ * __9__10_0;
  struct Func_2_AmplifyColor_VolumeEffectComponent_String_ * __9__11_0;
};
struct VolumeEffect_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeEffect_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeEffect_c__VTable vtable;
};

struct AmplifyColorBase__Array {
  struct AmplifyColorBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AmplifyColorBase * vector[32];
};

struct VolumeEffectContainer_c {
  struct VolumeEffectContainer_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase_ {
  struct Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase___Fields fields;
};
struct Func_2_AmplifyColor_VolumeEffect_AmplifyColorBase___VTable {
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
};}