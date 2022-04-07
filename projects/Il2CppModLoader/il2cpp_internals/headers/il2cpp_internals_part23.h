namespace app {
struct TermInfoStrings__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TermInfoStrings__Enum value;
};

struct ParameterizedStrings_FormatParam {
  int32_t _int32_1;
  struct String * _string;
};
struct ParameterizedStrings_FormatParam__Boxed {
  struct ParameterizedStrings_FormatParam__Class *klass;
  struct MonitorData *monitor;
  struct ParameterizedStrings_FormatParam fields;
};
struct ParameterizedStrings_FormatParam__Array {
  struct ParameterizedStrings_FormatParam__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ParameterizedStrings_FormatParam vector[32];
};
struct ParameterizedStrings_FormatParam__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParameterizedStrings_FormatParam__StaticFields {
};
struct ParameterizedStrings_FormatParam__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParameterizedStrings_FormatParam__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParameterizedStrings_FormatParam__VTable vtable;
};

struct __declspec(align(8)) ParameterizedStrings_LowLevelStack__Fields {
  struct ParameterizedStrings_FormatParam__Array * _arr;
  int32_t _count;
};
struct ParameterizedStrings_LowLevelStack {
  struct ParameterizedStrings_LowLevelStack__Class *klass;
  struct MonitorData *monitor;
  struct ParameterizedStrings_LowLevelStack__Fields fields;
};
struct ParameterizedStrings_LowLevelStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParameterizedStrings_LowLevelStack__StaticFields {
};
struct ParameterizedStrings_LowLevelStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParameterizedStrings_LowLevelStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParameterizedStrings_LowLevelStack__VTable vtable;
};

enum TermInfoNumbers__Enum : int32_t {
  TermInfoNumbers__Enum_Columns = 0,
  TermInfoNumbers__Enum_InitTabs = 1,
  TermInfoNumbers__Enum_Lines = 2,
  TermInfoNumbers__Enum_LinesOfMemory = 3,
  TermInfoNumbers__Enum_MagicCookieGlitch = 4,
  TermInfoNumbers__Enum_PaddingBaudRate = 5,
  TermInfoNumbers__Enum_VirtualTerminal = 6,
  TermInfoNumbers__Enum_WidthStatusLine = 7,
  TermInfoNumbers__Enum_NumLabels = 8,
  TermInfoNumbers__Enum_LabelHeight = 9,
  TermInfoNumbers__Enum_LabelWidth = 10,
  TermInfoNumbers__Enum_MaxAttributes = 11,
  TermInfoNumbers__Enum_MaximumWindows = 12,
  TermInfoNumbers__Enum_MaxColors = 13,
  TermInfoNumbers__Enum_MaxPairs = 14,
  TermInfoNumbers__Enum_NoColorVideo = 15,
  TermInfoNumbers__Enum_BufferCapacity = 16,
  TermInfoNumbers__Enum_DotVertSpacing = 17,
  TermInfoNumbers__Enum_DotHorzSpacing = 18,
  TermInfoNumbers__Enum_MaxMicroAddress = 19,
  TermInfoNumbers__Enum_MaxMicroJump = 20,
  TermInfoNumbers__Enum_MicroColSize = 21,
  TermInfoNumbers__Enum_MicroLineSize = 22,
  TermInfoNumbers__Enum_NumberOfPins = 23,
  TermInfoNumbers__Enum_OutputResChar = 24,
  TermInfoNumbers__Enum_OutputResLine = 25,
  TermInfoNumbers__Enum_OutputResHorzInch = 26,
  TermInfoNumbers__Enum_OutputResVertInch = 27,
  TermInfoNumbers__Enum_PrintRate = 28,
  TermInfoNumbers__Enum_WideCharSize = 29,
  TermInfoNumbers__Enum_Buttons = 30,
  TermInfoNumbers__Enum_BitImageEntwining = 31,
  TermInfoNumbers__Enum_BitImageType = 32,
  TermInfoNumbers__Enum_Last = 33,
};
struct TermInfoNumbers__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TermInfoNumbers__Enum value;
};

struct TimeZone {
  struct TimeZone__Class *klass;
  struct MonitorData *monitor;
};
struct TimeZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeZone__StaticFields {
  struct Object * tz_lock;
};
struct TimeZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZone__VTable vtable;
};

struct __declspec(align(8)) CurrentSystemTimeZone__Fields {
  struct TimeZoneInfo * LocalTimeZone;
};
struct CurrentSystemTimeZone {
  struct CurrentSystemTimeZone__Class *klass;
  struct MonitorData *monitor;
  struct CurrentSystemTimeZone__Fields fields;
};
struct CurrentSystemTimeZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CurrentSystemTimeZone__StaticFields {
};
struct CurrentSystemTimeZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CurrentSystemTimeZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CurrentSystemTimeZone__VTable vtable;
};

struct TypeNames_ATypeName {
  struct TypeNames_ATypeName__Class *klass;
  struct MonitorData *monitor;
};
struct TypeName {
  struct TypeName__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TypeIdentifiers_Display__Fields {
  struct String * displayName;
  struct String * internal_name;
};
struct TypeIdentifiers_Display {
  struct TypeIdentifiers_Display__Class *klass;
  struct MonitorData *monitor;
  struct TypeIdentifiers_Display__Fields fields;
};
struct TypeName__VTable {
  VirtualInvokeData get_DisplayName;
};
struct TypeName__StaticFields {
};
struct TypeName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeName__VTable vtable;
};
struct TypeIdentifiers_Display__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_DisplayName;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_DisplayName_1;
  VirtualInvokeData get_InternalName;
};
struct TypeIdentifiers_Display__StaticFields {
};
struct TypeIdentifiers_Display__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeIdentifiers_Display__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeIdentifiers_Display__VTable vtable;
};
struct TypeNames_ATypeName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_DisplayName;
  VirtualInvokeData Equals_1;
  VirtualInvokeData __unknown;
};
struct TypeNames_ATypeName__StaticFields {
};
struct TypeNames_ATypeName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeNames_ATypeName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeNames_ATypeName__VTable vtable;
};

struct TypeIdentifier {
  struct TypeIdentifier__Class *klass;
  struct MonitorData *monitor;
};
struct TypeIdentifier__VTable {
  VirtualInvokeData get_InternalName;
};
struct TypeIdentifier__StaticFields {
};
struct TypeIdentifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeIdentifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeIdentifier__VTable vtable;
};

struct __declspec(align(8)) ArraySpec__Fields {
  int32_t dimensions;
  bool bound;
};
struct ArraySpec {
  struct ArraySpec__Class *klass;
  struct MonitorData *monitor;
  struct ArraySpec__Fields fields;
};
struct ArraySpec__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData Append;
};
struct ArraySpec__StaticFields {
};
struct ArraySpec__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArraySpec__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArraySpec__VTable vtable;
};

struct __declspec(align(8)) PointerSpec__Fields {
  int32_t pointer_level;
};
struct PointerSpec {
  struct PointerSpec__Class *klass;
  struct MonitorData *monitor;
  struct PointerSpec__Fields fields;
};
struct PointerSpec__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData Append;
};
struct PointerSpec__StaticFields {
};
struct PointerSpec__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerSpec__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerSpec__VTable vtable;
};

struct __declspec(align(8)) TypeSpec__Fields {
  struct TypeIdentifier * name;
  struct String * assembly_name;
  struct List_1_System_TypeIdentifier_ * nested;
  struct List_1_System_TypeSpec_ * generic_params;
  struct List_1_System_ModifierSpec_ * modifier_spec;
  bool is_byref;
  struct String * display_fullname;
};
struct TypeSpec {
  struct TypeSpec__Class *klass;
  struct MonitorData *monitor;
  struct TypeSpec__Fields fields;
};
struct __declspec(align(8)) List_1_System_TypeIdentifier___Fields {
  struct TypeIdentifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_TypeIdentifier_ {
  struct List_1_System_TypeIdentifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_TypeIdentifier___Fields fields;
};
struct TypeIdentifier__Array {
  struct TypeIdentifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TypeIdentifier * vector[32];
};
struct IEnumerator_1_System_TypeIdentifier_ {
  struct IEnumerator_1_System_TypeIdentifier___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_TypeSpec___Fields {
  struct TypeSpec__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_TypeSpec_ {
  struct List_1_System_TypeSpec___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_TypeSpec___Fields fields;
};
struct TypeSpec__Array {
  struct TypeSpec__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TypeSpec * vector[32];
};
struct IEnumerator_1_System_TypeSpec_ {
  struct IEnumerator_1_System_TypeSpec___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_ModifierSpec___Fields {
  struct ModifierSpec__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_ModifierSpec_ {
  struct List_1_System_ModifierSpec___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_ModifierSpec___Fields fields;
};
struct ModifierSpec {
  struct ModifierSpec__Class *klass;
  struct MonitorData *monitor;
};
struct ModifierSpec__Array {
  struct ModifierSpec__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ModifierSpec * vector[32];
};
struct IEnumerator_1_System_ModifierSpec_ {
  struct IEnumerator_1_System_ModifierSpec___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_TypeIdentifier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_TypeIdentifier___StaticFields {
};
struct IEnumerator_1_System_TypeIdentifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_TypeIdentifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_TypeIdentifier___VTable vtable;
};
struct List_1_System_TypeIdentifier___VTable {
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
struct List_1_System_TypeIdentifier___StaticFields {
  struct TypeIdentifier__Array * _emptyArray;
};
struct List_1_System_TypeIdentifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_TypeIdentifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_TypeIdentifier___VTable vtable;
};
struct IEnumerator_1_System_TypeSpec___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_TypeSpec___StaticFields {
};
struct IEnumerator_1_System_TypeSpec___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_TypeSpec___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_TypeSpec___VTable vtable;
};
struct List_1_System_TypeSpec___VTable {
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
struct List_1_System_TypeSpec___StaticFields {
  struct TypeSpec__Array * _emptyArray;
};
struct List_1_System_TypeSpec___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_TypeSpec___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_TypeSpec___VTable vtable;
};
struct ModifierSpec__VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData Append;
};
struct ModifierSpec__StaticFields {
};
struct ModifierSpec__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModifierSpec__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModifierSpec__VTable vtable;
};
struct IEnumerator_1_System_ModifierSpec___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_ModifierSpec___StaticFields {
};
struct IEnumerator_1_System_ModifierSpec___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_ModifierSpec___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_ModifierSpec___VTable vtable;
};
struct List_1_System_ModifierSpec___VTable {
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
struct List_1_System_ModifierSpec___StaticFields {
  struct ModifierSpec__Array * _emptyArray;
};
struct List_1_System_ModifierSpec___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_ModifierSpec___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_ModifierSpec___VTable vtable;
};
struct TypeSpec__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeSpec__StaticFields {
};
struct TypeSpec__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeSpec__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeSpec__VTable vtable;
};

enum TypeSpec_DisplayNameFormat__Enum : int32_t {
  TypeSpec_DisplayNameFormat__Enum_Default = 0,
  TypeSpec_DisplayNameFormat__Enum_WANT_ASSEMBLY = 1,
  TypeSpec_DisplayNameFormat__Enum_NO_MODIFIERS = 2,
};
struct TypeSpec_DisplayNameFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeSpec_DisplayNameFormat__Enum value;
};

struct BRECORD {
  void * pvRecord;
  void * pRecInfo;
};
struct BRECORD__Boxed {
  struct BRECORD__Class *klass;
  struct MonitorData *monitor;
  struct BRECORD fields;
};
struct Variant {
  int16_t vt;
  uint16_t wReserved1;
  uint16_t wReserved2;
  uint16_t wReserved3;
  int64_t llVal;
  int32_t lVal;
  uint8_t bVal;
  int16_t iVal;
  float fltVal;
  double dblVal;
  int16_t boolVal;
  void * bstrVal;
  int8_t cVal;
  uint16_t uiVal;
  uint32_t ulVal;
  uint64_t ullVal;
  int32_t intVal;
  uint32_t uintVal;
  void * pdispVal;
  struct BRECORD bRecord;
};
struct Variant__Boxed {
  struct Variant__Class *klass;
  struct MonitorData *monitor;
  struct Variant fields;
};
struct BRECORD__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BRECORD__StaticFields {
};
struct BRECORD__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BRECORD__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BRECORD__VTable vtable;
};
struct Variant__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Variant__StaticFields {
};
struct Variant__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Variant__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Variant__VTable vtable;
};

struct __declspec(align(8)) WindowsConsoleDriver__Fields {
  void * inputHandle;
  void * outputHandle;
  int16_t defaultAttribute;
};
struct WindowsConsoleDriver {
  struct WindowsConsoleDriver__Class *klass;
  struct MonitorData *monitor;
  struct WindowsConsoleDriver__Fields fields;
};
struct WindowsConsoleDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ReadKey;
};
struct WindowsConsoleDriver__StaticFields {
};
struct WindowsConsoleDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindowsConsoleDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindowsConsoleDriver__VTable vtable;
};

enum Handles__Enum : int32_t {
  Handles__Enum_STD_INPUT = -10,
  Handles__Enum_STD_OUTPUT = -11,
  Handles__Enum_STD_ERROR = -12,
};
struct Handles__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Handles__Enum value;
};

struct Coord {
  int16_t X;
  int16_t Y;
};
struct Coord__Boxed {
  struct Coord__Class *klass;
  struct MonitorData *monitor;
  struct Coord fields;
};
struct SmallRect {
  int16_t Left;
  int16_t Top;
  int16_t Right;
  int16_t Bottom;
};
struct SmallRect__Boxed {
  struct SmallRect__Class *klass;
  struct MonitorData *monitor;
  struct SmallRect fields;
};
struct ConsoleScreenBufferInfo {
  struct Coord Size;
  struct Coord CursorPosition;
  int16_t Attribute;
  struct SmallRect Window;
  struct Coord MaxWindowSize;
};
struct ConsoleScreenBufferInfo__Boxed {
  struct ConsoleScreenBufferInfo__Class *klass;
  struct MonitorData *monitor;
  struct ConsoleScreenBufferInfo fields;
};
struct Coord__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Coord__StaticFields {
};
struct Coord__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Coord__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Coord__VTable vtable;
};
struct SmallRect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SmallRect__StaticFields {
};
struct SmallRect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SmallRect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SmallRect__VTable vtable;
};
struct ConsoleScreenBufferInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsoleScreenBufferInfo__StaticFields {
};
struct ConsoleScreenBufferInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsoleScreenBufferInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsoleScreenBufferInfo__VTable vtable;
};

struct InputRecord {
  int16_t EventType;
  bool KeyDown;
  int16_t RepeatCount;
  int16_t VirtualKeyCode;
  int16_t VirtualScanCode;
  uint16_t Character;
  int32_t ControlKeyState;
  int32_t pad1;
  bool pad2;
};
struct InputRecord__Boxed {
  struct InputRecord__Class *klass;
  struct MonitorData *monitor;
  struct InputRecord fields;
};
struct InputRecord__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputRecord__StaticFields {
};
struct InputRecord__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputRecord__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputRecord__VTable vtable;
};

struct _ComObject {
  struct _ComObject__Class *klass;
  struct MonitorData *monitor;
};
struct _ComObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct _ComObject__StaticFields {
};
struct _ComObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _ComObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _ComObject__VTable vtable;
};

struct DecoderExceptionFallback__Fields {
  struct DecoderFallback__Fields _;
};
struct DecoderExceptionFallback {
  struct DecoderExceptionFallback__Class *klass;
  struct MonitorData *monitor;
  struct DecoderExceptionFallback__Fields fields;
};
struct DecoderExceptionFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateFallbackBuffer;
  VirtualInvokeData get_MaxCharCount;
};
struct DecoderExceptionFallback__StaticFields {
};
struct DecoderExceptionFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderExceptionFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderExceptionFallback__VTable vtable;
};

struct DecoderExceptionFallbackBuffer__Fields {
  struct DecoderFallbackBuffer__Fields _;
};
struct DecoderExceptionFallbackBuffer {
  struct DecoderExceptionFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct DecoderExceptionFallbackBuffer__Fields fields;
};
struct DecoderExceptionFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Fallback;
  VirtualInvokeData GetNextChar;
  VirtualInvokeData get_Remaining;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
  VirtualInvokeData InternalFallback_1;
};
struct DecoderExceptionFallbackBuffer__StaticFields {
};
struct DecoderExceptionFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderExceptionFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderExceptionFallbackBuffer__VTable vtable;
};

struct DecoderFallbackException__Fields {
  struct ArgumentException__Fields _;
  struct Byte__Array * bytesUnknown;
  int32_t index;
};
struct DecoderFallbackException {
  struct DecoderFallbackException__Class *klass;
  struct MonitorData *monitor;
  struct DecoderFallbackException__Fields fields;
};
struct DecoderFallbackException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct DecoderFallbackException__StaticFields {
};
struct DecoderFallbackException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderFallbackException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderFallbackException__VTable vtable;
};

struct DecoderReplacementFallback__Fields {
  struct DecoderFallback__Fields _;
  struct String * strDefault;
};
struct DecoderReplacementFallback {
  struct DecoderReplacementFallback__Class *klass;
  struct MonitorData *monitor;
  struct DecoderReplacementFallback__Fields fields;
};
struct DecoderReplacementFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateFallbackBuffer;
  VirtualInvokeData get_MaxCharCount;
};
struct DecoderReplacementFallback__StaticFields {
};
struct DecoderReplacementFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderReplacementFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderReplacementFallback__VTable vtable;
};

struct DecoderReplacementFallbackBuffer__Fields {
  struct DecoderFallbackBuffer__Fields _;
  struct String * strDefault;
  int32_t fallbackCount;
  int32_t fallbackIndex;
};
struct DecoderReplacementFallbackBuffer {
  struct DecoderReplacementFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct DecoderReplacementFallbackBuffer__Fields fields;
};
struct DecoderReplacementFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Fallback;
  VirtualInvokeData GetNextChar;
  VirtualInvokeData get_Remaining;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
  VirtualInvokeData InternalFallback_1;
};
struct DecoderReplacementFallbackBuffer__StaticFields {
};
struct DecoderReplacementFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderReplacementFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderReplacementFallbackBuffer__VTable vtable;
};}