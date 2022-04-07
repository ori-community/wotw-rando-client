namespace app {
struct JsonBuilder_Object__StaticFields {
};
struct JsonBuilder_Object__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonBuilder_Object__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonBuilder_Object__VTable vtable;
};

struct JsonBuilder_Array {
  int32_t m_ident;
  struct JsonBuilder * m_builder;
};
struct JsonBuilder_Array__Boxed {
  struct JsonBuilder_Array__Class *klass;
  struct MonitorData *monitor;
  struct JsonBuilder_Array fields;
};
struct JsonBuilder_Array__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct JsonBuilder_Array__StaticFields {
};
struct JsonBuilder_Array__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonBuilder_Array__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonBuilder_Array__VTable vtable;
};

struct Substr {
  int32_t m_start;
  int32_t m_length;
};
struct Substr__Boxed {
  struct Substr__Class *klass;
  struct MonitorData *monitor;
  struct Substr fields;
};
struct __declspec(align(8)) JsonParser__Fields {
  struct StringBuilder * m_sb;
  struct String * m_source;
  struct Substr m_span;
  bool m_expectSeparator;
  bool m_encounteredParsingError;
  struct List_1_System_Int32_ * m_scopes;
  int32_t m_nextIdent;
  int32_t m_activeSlot;
};
struct JsonParser {
  struct JsonParser__Class *klass;
  struct MonitorData *monitor;
  struct JsonParser__Fields fields;
};
struct Substr__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Substr__StaticFields {
};
struct Substr__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Substr__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Substr__VTable vtable;
};
struct JsonParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonParser__StaticFields {
};
struct JsonParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonParser__VTable vtable;
};

struct JsonParser_Slot {
  int32_t m_ident;
  struct JsonParser * m_parser;
};
struct JsonParser_Slot__Boxed {
  struct JsonParser_Slot__Class *klass;
  struct MonitorData *monitor;
  struct JsonParser_Slot fields;
};
struct JsonParser_Slot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JsonParser_Slot__StaticFields {
};
struct JsonParser_Slot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonParser_Slot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonParser_Slot__VTable vtable;
};

enum JsonToken__Enum : int32_t {
  JsonToken__Enum_Null = 0,
  JsonToken__Enum_True = 1,
  JsonToken__Enum_False = 2,
  JsonToken__Enum_Number = 3,
  JsonToken__Enum_String = 4,
  JsonToken__Enum_Colon = 5,
  JsonToken__Enum_Comma = 6,
  JsonToken__Enum_ObjStart = 7,
  JsonToken__Enum_ObjEnd = 8,
  JsonToken__Enum_ArrStart = 9,
  JsonToken__Enum_ArrEnd = 10,
  JsonToken__Enum_EndOfString = 11,
};
struct JsonToken__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JsonToken__Enum value;
};

struct JsonParser_Object {
  int32_t m_ident;
  struct JsonParser * m_parser;
};
struct JsonParser_Object__Boxed {
  struct JsonParser_Object__Class *klass;
  struct MonitorData *monitor;
  struct JsonParser_Object fields;
};
struct Nullable_1_Moon_JsonParser_Object_ {
  struct JsonParser_Object value;
  bool has_value;
};
struct Nullable_1_Moon_JsonParser_Object___Boxed {
  struct Nullable_1_Moon_JsonParser_Object___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_JsonParser_Object_ fields;
};
struct JsonParser_Object__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct JsonParser_Object__StaticFields {
};
struct JsonParser_Object__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonParser_Object__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonParser_Object__VTable vtable;
};
struct Nullable_1_Moon_JsonParser_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_JsonParser_Object___StaticFields {
};
struct Nullable_1_Moon_JsonParser_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_JsonParser_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_JsonParser_Object___VTable vtable;
};

struct JsonParser_Array {
  int32_t m_ident;
  struct JsonParser * m_parser;
};
struct JsonParser_Array__Boxed {
  struct JsonParser_Array__Class *klass;
  struct MonitorData *monitor;
  struct JsonParser_Array fields;
};
struct Nullable_1_Moon_JsonParser_Array_ {
  struct JsonParser_Array value;
  bool has_value;
};
struct Nullable_1_Moon_JsonParser_Array___Boxed {
  struct Nullable_1_Moon_JsonParser_Array___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_JsonParser_Array_ fields;
};
struct JsonParser_Array__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct JsonParser_Array__StaticFields {
};
struct JsonParser_Array__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonParser_Array__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonParser_Array__VTable vtable;
};
struct Nullable_1_Moon_JsonParser_Array___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_JsonParser_Array___StaticFields {
};
struct Nullable_1_Moon_JsonParser_Array___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_JsonParser_Array___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_JsonParser_Array___VTable vtable;
};

struct Nullable_1_Moon_JsonParser_Slot_ {
  struct JsonParser_Slot value;
  bool has_value;
};
struct Nullable_1_Moon_JsonParser_Slot___Boxed {
  struct Nullable_1_Moon_JsonParser_Slot___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_JsonParser_Slot_ fields;
};
struct Nullable_1_Moon_JsonParser_Slot___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_JsonParser_Slot___StaticFields {
};
struct Nullable_1_Moon_JsonParser_Slot___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_JsonParser_Slot___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_JsonParser_Slot___VTable vtable;
};

struct SharedJsonBuilder {
  struct JsonBuilder * Instance;
};
struct SharedJsonBuilder__Boxed {
  struct SharedJsonBuilder__Class *klass;
  struct MonitorData *monitor;
  struct SharedJsonBuilder fields;
};
struct IComparer_1_Moon_JsonBuilder_ {
  struct IComparer_1_Moon_JsonBuilder___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_JsonBuilder___Fields {
  struct JsonBuilder__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_JsonBuilder_ {
  struct List_1_Moon_JsonBuilder___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_JsonBuilder___Fields fields;
};
struct JsonBuilder__Array {
  struct JsonBuilder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JsonBuilder * vector[32];
};
struct IEnumerator_1_Moon_JsonBuilder_ {
  struct IEnumerator_1_Moon_JsonBuilder___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_Moon_JsonBuilder___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_Moon_JsonBuilder___StaticFields {
};
struct IComparer_1_Moon_JsonBuilder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_Moon_JsonBuilder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_Moon_JsonBuilder___VTable vtable;
};
struct IEnumerator_1_Moon_JsonBuilder___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_JsonBuilder___StaticFields {
};
struct IEnumerator_1_Moon_JsonBuilder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_JsonBuilder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_JsonBuilder___VTable vtable;
};
struct List_1_Moon_JsonBuilder___VTable {
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
struct List_1_Moon_JsonBuilder___StaticFields {
  struct JsonBuilder__Array * _emptyArray;
};
struct List_1_Moon_JsonBuilder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_JsonBuilder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_JsonBuilder___VTable vtable;
};
struct SharedJsonBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct SharedJsonBuilder__StaticFields {
  struct IComparer_1_Moon_JsonBuilder_ * s_comparer;
  struct List_1_Moon_JsonBuilder_ * s_builders;
};
struct SharedJsonBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SharedJsonBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SharedJsonBuilder__VTable vtable;
};

struct SharedJsonBuilder_c {
  struct SharedJsonBuilder_c__Class *klass;
  struct MonitorData *monitor;
};
struct SharedJsonBuilder_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SharedJsonBuilder_c__StaticFields {
  struct SharedJsonBuilder_c * __9;
};
struct SharedJsonBuilder_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SharedJsonBuilder_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SharedJsonBuilder_c__VTable vtable;
};

struct SharedJsonParser {
  struct JsonParser * Instance;
};
struct SharedJsonParser__Boxed {
  struct SharedJsonParser__Class *klass;
  struct MonitorData *monitor;
  struct SharedJsonParser fields;
};
struct IComparer_1_Moon_JsonParser_ {
  struct IComparer_1_Moon_JsonParser___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_JsonParser___Fields {
  struct JsonParser__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_JsonParser_ {
  struct List_1_Moon_JsonParser___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_JsonParser___Fields fields;
};
struct JsonParser__Array {
  struct JsonParser__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct JsonParser * vector[32];
};
struct IEnumerator_1_Moon_JsonParser_ {
  struct IEnumerator_1_Moon_JsonParser___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_Moon_JsonParser___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_Moon_JsonParser___StaticFields {
};
struct IComparer_1_Moon_JsonParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_Moon_JsonParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_Moon_JsonParser___VTable vtable;
};
struct IEnumerator_1_Moon_JsonParser___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_JsonParser___StaticFields {
};
struct IEnumerator_1_Moon_JsonParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_JsonParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_JsonParser___VTable vtable;
};
struct List_1_Moon_JsonParser___VTable {
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
struct List_1_Moon_JsonParser___StaticFields {
  struct JsonParser__Array * _emptyArray;
};
struct List_1_Moon_JsonParser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_JsonParser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_JsonParser___VTable vtable;
};
struct SharedJsonParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct SharedJsonParser__StaticFields {
  struct IComparer_1_Moon_JsonParser_ * s_comparer;
  struct List_1_Moon_JsonParser_ * s_builders;
};
struct SharedJsonParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SharedJsonParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SharedJsonParser__VTable vtable;
};

struct SharedJsonParser_c {
  struct SharedJsonParser_c__Class *klass;
  struct MonitorData *monitor;
};
struct SharedJsonParser_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SharedJsonParser_c__StaticFields {
  struct SharedJsonParser_c * __9;
};
struct SharedJsonParser_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SharedJsonParser_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SharedJsonParser_c__VTable vtable;
};

struct __declspec(align(8)) List_1_Moon_Substr___Fields {
  struct Substr__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Substr_ {
  struct List_1_Moon_Substr___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Substr___Fields fields;
};
struct Substr__Array {
  struct Substr__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Substr vector[32];
};
struct IEnumerator_1_Moon_Substr_ {
  struct IEnumerator_1_Moon_Substr___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Substr___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Substr___StaticFields {
};
struct IEnumerator_1_Moon_Substr___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Substr___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Substr___VTable vtable;
};
struct List_1_Moon_Substr___VTable {
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
struct List_1_Moon_Substr___StaticFields {
  struct Substr__Array * _emptyArray;
};
struct List_1_Moon_Substr___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Substr___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Substr___VTable vtable;
};

struct ExposedProperties__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty_ * Properties;
};
struct ExposedProperties {
  struct ExposedProperties__Class *klass;
  struct MonitorData *monitor;
  struct ExposedProperties__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ExposedPropertiesInspector_ExposedProperty___Fields {
  struct ExposedProperty__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty_ {
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___Fields fields;
};
enum ExposedPropertyCategory__Enum : int32_t {
  ExposedPropertyCategory__Enum_NotExposed = 0,
  ExposedPropertyCategory__Enum_Basic = 1,
  ExposedPropertyCategory__Enum_Advanced = 2,
};
struct ExposedPropertyCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExposedPropertyCategory__Enum value;
};
struct __declspec(align(8)) ExposedProperty__Fields {
  int32_t Id;
  enum ExposedPropertyCategory__Enum Category;
  struct String * Name;
  struct String * PropertyPath;
  struct Component_1 * Component;
};
struct ExposedProperty {
  struct ExposedProperty__Class *klass;
  struct MonitorData *monitor;
  struct ExposedProperty__Fields fields;
};
struct ExposedProperty__Array {
  struct ExposedProperty__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExposedProperty * vector[32];
};
struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty_ {
  struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___Class *klass;
  struct MonitorData *monitor;
};
struct ExposedProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExposedProperty__StaticFields {
};
struct ExposedProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExposedProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExposedProperty__VTable vtable;
};
struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___StaticFields {
};
struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_ExposedPropertiesInspector_ExposedProperty___VTable vtable;
};
struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___VTable {
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
struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___StaticFields {
  struct ExposedProperty__Array * _emptyArray;
};
struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty___VTable vtable;
};
struct ExposedProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExposedProperties__StaticFields {
};
struct ExposedProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExposedProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExposedProperties__VTable vtable;
};

struct __declspec(align(8)) ExposedPropertyGroup__Fields {
  struct String * Name;
  struct List_1_System_Int32_ * PropertyIds;
  bool Visible;
  struct List_1_Moon_ExposedPropertiesInspector_ExposedProperty_ * Properties;
};
struct ExposedPropertyGroup {
  struct ExposedPropertyGroup__Class *klass;
  struct MonitorData *monitor;
  struct ExposedPropertyGroup__Fields fields;
};
struct ExposedPropertyGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExposedPropertyGroup__StaticFields {
};
struct ExposedPropertyGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExposedPropertyGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExposedPropertyGroup__VTable vtable;
};

struct ExposedPropertyAttribute {
  struct ExposedPropertyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExposedPropertyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExposedPropertyAttribute__StaticFields {
};
struct ExposedPropertyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExposedPropertyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExposedPropertyAttribute__VTable vtable;
};

struct __declspec(align(8)) ColorAttribute_1__Fields {
  float r;
  float g;
  float b;
  float a;
  struct Color m_color;
};
struct ColorAttribute_1 {
  struct ColorAttribute_1__Class *klass;
  struct MonitorData *monitor;
  struct ColorAttribute_1__Fields fields;
};
struct ColorAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ColorAttribute_1__StaticFields {
};
struct ColorAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorAttribute_1__VTable vtable;
};

struct __declspec(align(8)) PostProcessRenderContext__Fields {
  struct Object * view;
  struct CommandBuffer * cmd;
  struct RenderTargetIdentifier source;
  struct RenderTargetIdentifier destination;
  struct RenderTextureDescriptor descSource;
  struct RenderTextureDescriptor descDest;
  float currentDRSScale;
  float currentDRSScaleY;
};
struct PostProcessRenderContext {
  struct PostProcessRenderContext__Class *klass;
  struct MonitorData *monitor;
  struct PostProcessRenderContext__Fields fields;
};
struct PostProcessRenderContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PostProcessRenderContext__StaticFields {
};
struct PostProcessRenderContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PostProcessRenderContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PostProcessRenderContext__VTable vtable;
};

struct BrainEntityTester__Fields {
  struct MonoBehaviour__Fields _;
  bool Skip;
  struct Enum__Array * Entries;
};
struct BrainEntityTester {
  struct BrainEntityTester__Class *klass;
  struct MonitorData *monitor;
  struct BrainEntityTester__Fields fields;
};
struct Enum__Array {
  struct Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Enum vector[32];
};
struct BrainEntityTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct BrainEntityTester__StaticFields {
};
struct BrainEntityTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrainEntityTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrainEntityTester__VTable vtable;
};

struct SerializationSetupObserverNotifier {
  struct SerializationSetupObserverNotifier__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ISerializedSetupObserver___Fields {
  struct ISerializedSetupObserver__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ISerializedSetupObserver_ {
  struct List_1_ISerializedSetupObserver___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ISerializedSetupObserver___Fields fields;
};
struct ISerializedSetupObserver {
  struct ISerializedSetupObserver__Class *klass;
  struct MonitorData *monitor;
};
struct ISerializedSetupObserver__Array {
  struct ISerializedSetupObserver__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISerializedSetupObserver * vector[32];
};
struct IEnumerator_1_ISerializedSetupObserver_ {
  struct IEnumerator_1_ISerializedSetupObserver___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_ISerializedSetupObserver___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_ISerializedSetupObserver___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_ISerializedSetupObserver_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_ISerializedSetupObserver_ {
  struct HashSet_1_ISerializedSetupObserver___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_ISerializedSetupObserver___Fields fields;
};}