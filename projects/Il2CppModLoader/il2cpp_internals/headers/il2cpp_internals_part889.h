namespace app {
struct __declspec(align(8)) UberShaderAnimatorStrategyExperimental_RendererState__Fields {
  int32_t InstanceID;
  struct Renderer * Renderer;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ * VectorRequests;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_ * FloatRequests;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ * ColorRequests;
  struct UberShaderAnimatorStrategyExperimental_VectorValue__Array * VectorOriginals;
  struct UberShaderAnimatorStrategyExperimental_FloatValue__Array * FloatOriginals;
  struct UberShaderAnimatorStrategyExperimental_ColorValue__Array * ColorOriginals;
  int32_t OriginalCounter;
};
struct UberShaderAnimatorStrategyExperimental_RendererState {
  struct UberShaderAnimatorStrategyExperimental_RendererState__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_RendererState__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Fields {
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ {
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Fields fields;
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest {
  struct Vector4 DesiredValue;
  float Weight;
  enum UberShaderProperty_Vector__Enum Property;
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest__Boxed {
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_VectorRequest fields;
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array {
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_VectorRequest vector[32];
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ {
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Fields {
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_ {
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Fields fields;
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest {
  float DesiredValue;
  float Weight;
  enum UberShaderProperty_Float__Enum Property;
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest__Boxed {
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_FloatRequest fields;
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array {
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_FloatRequest vector[32];
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_ {
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Fields {
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Fields fields;
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest {
  struct Color DesiredValue;
  float Weight;
  enum UberShaderProperty_Color__Enum Property;
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest__Boxed {
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_ColorRequest fields;
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array {
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_ColorRequest vector[32];
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class *klass;
  struct MonitorData *monitor;
};
struct UberShaderAnimatorStrategyExperimental_VectorValue {
  struct Vector4 Value;
  bool Set;
};
struct UberShaderAnimatorStrategyExperimental_VectorValue__Boxed {
  struct UberShaderAnimatorStrategyExperimental_VectorValue__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_VectorValue fields;
};
struct UberShaderAnimatorStrategyExperimental_VectorValue__Array {
  struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_VectorValue vector[32];
};
struct UberShaderAnimatorStrategyExperimental_FloatValue {
  float Value;
  bool Set;
};
struct UberShaderAnimatorStrategyExperimental_FloatValue__Boxed {
  struct UberShaderAnimatorStrategyExperimental_FloatValue__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_FloatValue fields;
};
struct UberShaderAnimatorStrategyExperimental_FloatValue__Array {
  struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_FloatValue vector[32];
};
struct UberShaderAnimatorStrategyExperimental_ColorValue {
  struct Color Value;
  bool Set;
};
struct UberShaderAnimatorStrategyExperimental_ColorValue__Boxed {
  struct UberShaderAnimatorStrategyExperimental_ColorValue__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyExperimental_ColorValue fields;
};
struct UberShaderAnimatorStrategyExperimental_ColorValue__Array {
  struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_ColorValue vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
};
struct UberShaderAnimatorStrategyExperimental_RendererState__Array {
  struct UberShaderAnimatorStrategyExperimental_RendererState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyExperimental_RendererState * vector[32];
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  int32_t key;
  struct UberShaderAnimatorStrategyExperimental_RendererState * value;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Boxed {
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ fields;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array {
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
  struct UberShaderAnimatorStrategyExperimental_RendererState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
};
struct __declspec(align(8)) Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
  struct UberShaderAnimatorStrategyExperimental_RendererState__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
  struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
};
struct UberShaderAnimatorStrategyBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
};
struct UberShaderAnimatorStrategyBase__StaticFields {
};
struct UberShaderAnimatorStrategyBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyBase__VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_VectorRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable vtable;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable {
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
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields {
  struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array * _emptyArray;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_FloatRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable vtable;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable {
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
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields {
  struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array * _emptyArray;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_ColorRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable vtable;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable {
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
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields {
  struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array * _emptyArray;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_VectorValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_VectorValue__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_VectorValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_VectorValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_VectorValue__VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_FloatValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_FloatValue__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_FloatValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_FloatValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_FloatValue__VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_ColorValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_ColorValue__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_ColorValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_ColorValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_ColorValue__VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental_RendererState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAnimatorStrategyExperimental_RendererState__StaticFields {
};
struct UberShaderAnimatorStrategyExperimental_RendererState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental_RendererState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental_RendererState__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
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
struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
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
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
  struct UberShaderAnimatorStrategyExperimental_RendererState__Array * _emptyArray;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
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
struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
};
struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
};
struct UberShaderAnimatorStrategyExperimental__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ClearColorRequests;
  VirtualInvokeData ClearVector4Requests;
  VirtualInvokeData ClearFloatRequests;
  VirtualInvokeData GetStaticVector;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData SubmitColorInternal;
  VirtualInvokeData SubmitVector4Internal;
  VirtualInvokeData SubmitFloatInternal;
  VirtualInvokeData Initialize;
};
struct UberShaderAnimatorStrategyExperimental__StaticFields {
  struct UberShaderAnimatorStrategyExperimental_ColorValue__Array * m_colorBuffer;
  struct UberShaderAnimatorStrategyExperimental_FloatValue__Array * m_floatBuffer;
  struct UberShaderAnimatorStrategyExperimental_VectorValue__Array * m_vectorBuffer;
  struct Boolean__Array * m_isColorAnimatable;
  struct Boolean__Array * m_isFloatAnimatable;
  struct Boolean__Array * m_isVectorAnimatable;
};
struct UberShaderAnimatorStrategyExperimental__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAnimatorStrategyExperimental__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAnimatorStrategyExperimental__VTable vtable;
};

struct __declspec(align(8)) UberShaderAnimatorStrategyStandard__Fields {
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ * m_trackingDatas;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ * m_rendererStates;
  struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ * m_statePool;
};
struct UberShaderAnimatorStrategyStandard {
  struct UberShaderAnimatorStrategyStandard__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyStandard__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ {
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct UberShaderAnimatorStrategyStandard_RendererState * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyStandard_RendererState_ vector[32];
};
struct __declspec(align(8)) UberShaderAnimatorStrategyStandard_RendererState__Fields {
  int32_t InstanceID;
  struct Renderer * Renderer;
  struct Dictionary_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ * ColorAnimations;
  struct Dictionary_2_UberShaderProperty_Vector_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ * Vector4Animations;
  struct Dictionary_2_UberShaderProperty_Float_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ * FloatAnimations;
};
struct UberShaderAnimatorStrategyStandard_RendererState {
  struct UberShaderAnimatorStrategyStandard_RendererState__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyStandard_RendererState__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShaderProperty_Color_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ {
  struct Dictionary_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ {
  int32_t hashCode;
  int32_t next;
  enum UberShaderProperty_Color__Enum key;
  struct UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShaderProperty_Color_Moon_Timeline_UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_ vector[32];
};
struct __declspec(align(8)) UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color___Fields {
  struct Color OriginalValue;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_ * Requests;
};
struct UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color_ {
  struct UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1___Fields {
  struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_ {
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1___Fields fields;
};
struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ {
  struct Color DesiredValue;
  float Weight;
};
struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Boxed {
  struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ fields;
};
struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array {
  struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderAnimatorStrategyStandard_Request_1_UnityEngine_Color_ vector[32];
};
struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1_ {
  struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyStandard_Request_1___Class *klass;
  struct MonitorData *monitor;
};}