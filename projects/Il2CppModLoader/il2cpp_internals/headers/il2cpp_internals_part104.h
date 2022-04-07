namespace app {
struct ReaderPositionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData HasLineInfo;
  VirtualInvokeData get_LineNumber;
  VirtualInvokeData get_LinePosition;
  VirtualInvokeData HasLineInfo_1;
  VirtualInvokeData get_LineNumber_1;
  VirtualInvokeData get_LinePosition_1;
};
struct ReaderPositionInfo__StaticFields {
};
struct ReaderPositionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReaderPositionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReaderPositionInfo__VTable vtable;
};

enum DtdParser_ScanningFunction__Enum : int32_t {
  DtdParser_ScanningFunction__Enum_SubsetContent = 0,
  DtdParser_ScanningFunction__Enum_Name = 1,
  DtdParser_ScanningFunction__Enum_QName = 2,
  DtdParser_ScanningFunction__Enum_Nmtoken = 3,
  DtdParser_ScanningFunction__Enum_Doctype1 = 4,
  DtdParser_ScanningFunction__Enum_Doctype2 = 5,
  DtdParser_ScanningFunction__Enum_Element1 = 6,
  DtdParser_ScanningFunction__Enum_Element2 = 7,
  DtdParser_ScanningFunction__Enum_Element3 = 8,
  DtdParser_ScanningFunction__Enum_Element4 = 9,
  DtdParser_ScanningFunction__Enum_Element5 = 10,
  DtdParser_ScanningFunction__Enum_Element6 = 11,
  DtdParser_ScanningFunction__Enum_Element7 = 12,
  DtdParser_ScanningFunction__Enum_Attlist1 = 13,
  DtdParser_ScanningFunction__Enum_Attlist2 = 14,
  DtdParser_ScanningFunction__Enum_Attlist3 = 15,
  DtdParser_ScanningFunction__Enum_Attlist4 = 16,
  DtdParser_ScanningFunction__Enum_Attlist5 = 17,
  DtdParser_ScanningFunction__Enum_Attlist6 = 18,
  DtdParser_ScanningFunction__Enum_Attlist7 = 19,
  DtdParser_ScanningFunction__Enum_Entity1 = 20,
  DtdParser_ScanningFunction__Enum_Entity2 = 21,
  DtdParser_ScanningFunction__Enum_Entity3 = 22,
  DtdParser_ScanningFunction__Enum_Notation1 = 23,
  DtdParser_ScanningFunction__Enum_CondSection1 = 24,
  DtdParser_ScanningFunction__Enum_CondSection2 = 25,
  DtdParser_ScanningFunction__Enum_CondSection3 = 26,
  DtdParser_ScanningFunction__Enum_Literal = 27,
  DtdParser_ScanningFunction__Enum_SystemId = 28,
  DtdParser_ScanningFunction__Enum_PublicId1 = 29,
  DtdParser_ScanningFunction__Enum_PublicId2 = 30,
  DtdParser_ScanningFunction__Enum_ClosingTag = 31,
  DtdParser_ScanningFunction__Enum_ParamEntitySpace = 32,
  DtdParser_ScanningFunction__Enum_None = 33,
};
struct DtdParser_ScanningFunction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DtdParser_ScanningFunction__Enum value;
};
struct __declspec(align(8)) DtdParser__Fields {
  struct IDtdParserAdapter * readerAdapter;
  struct IDtdParserAdapterWithValidation * readerAdapterWithValidation;
  struct XmlNameTable * nameTable;
  struct SchemaInfo * schemaInfo;
  struct XmlCharType xmlCharType;
  struct String * systemId;
  struct String * publicId;
  bool normalize;
  bool validate;
  bool supportNamespaces;
  bool v1Compat;
  struct Char__Array * chars;
  int32_t charsUsed;
  int32_t curPos;
  enum DtdParser_ScanningFunction__Enum scanningFunction;
  enum DtdParser_ScanningFunction__Enum nextScaningFunction;
  enum DtdParser_ScanningFunction__Enum savedScanningFunction;
  bool whitespaceSeen;
  int32_t tokenStartPos;
  int32_t colonPos;
  struct StringBuilder * internalSubsetValueSb;
  int32_t externalEntitiesDepth;
  int32_t currentEntityId;
  bool freeFloatingDtd;
  bool hasFreeFloatingInternalSubset;
  struct StringBuilder * stringBuilder;
  int32_t condSectionDepth;
  struct LineInfo literalLineInfo;
  uint16_t literalQuoteChar;
  struct String * documentBaseUri;
  struct String * externalDtdBaseUri;
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ * undeclaredNotations;
  struct Int32__Array * condSectionEntityIds;
};
struct DtdParser {
  struct DtdParser__Class *klass;
  struct MonitorData *monitor;
  struct DtdParser__Fields fields;
};
struct IDtdParserAdapter {
  struct IDtdParserAdapter__Class *klass;
  struct MonitorData *monitor;
};
struct IDtdParserAdapterWithValidation {
  struct IDtdParserAdapterWithValidation__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct DtdParser_UndeclaredNotation * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ vector[32];
};
struct __declspec(align(8)) DtdParser_UndeclaredNotation__Fields {
  struct String * name;
  int32_t lineNo;
  int32_t linePos;
  struct DtdParser_UndeclaredNotation * next;
};
struct DtdParser_UndeclaredNotation {
  struct DtdParser_UndeclaredNotation__Class *klass;
  struct MonitorData *monitor;
  struct DtdParser_UndeclaredNotation__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
};
struct DtdParser_UndeclaredNotation__Array {
  struct DtdParser_UndeclaredNotation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DtdParser_UndeclaredNotation * vector[32];
};
struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation_ {
  struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation_ {
  struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  struct String * key;
  struct DtdParser_UndeclaredNotation * value;
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Boxed {
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ fields;
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Array {
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation_ {
  struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___Class *klass;
  struct MonitorData *monitor;
};
struct IDtdParserAdapter__VTable {
  VirtualInvokeData get_NameTable;
  VirtualInvokeData get_NamespaceResolver;
  VirtualInvokeData get_BaseUri;
  VirtualInvokeData get_ParsingBuffer;
  VirtualInvokeData get_ParsingBufferLength;
  VirtualInvokeData get_CurrentPosition;
  VirtualInvokeData set_CurrentPosition;
  VirtualInvokeData get_LineNo;
  VirtualInvokeData get_LineStartPosition;
  VirtualInvokeData get_IsEof;
  VirtualInvokeData get_EntityStackLength;
  VirtualInvokeData get_IsEntityEolNormalized;
  VirtualInvokeData ReadData;
  VirtualInvokeData OnNewLine;
  VirtualInvokeData ParseNumericCharRef;
  VirtualInvokeData ParseNamedCharRef;
  VirtualInvokeData ParsePI;
  VirtualInvokeData ParseComment;
  VirtualInvokeData PushEntity;
  VirtualInvokeData PopEntity;
  VirtualInvokeData PushExternalSubset;
  VirtualInvokeData PushInternalDtd;
  VirtualInvokeData OnSystemId;
  VirtualInvokeData OnPublicId;
  VirtualInvokeData Throw;
};
struct IDtdParserAdapter__StaticFields {
};
struct IDtdParserAdapter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDtdParserAdapter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDtdParserAdapter__VTable vtable;
};
struct IDtdParserAdapterWithValidation__VTable {
  VirtualInvokeData get_DtdValidation;
  VirtualInvokeData get_ValidationEventHandling;
};
struct IDtdParserAdapterWithValidation__StaticFields {
};
struct IDtdParserAdapterWithValidation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDtdParserAdapterWithValidation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDtdParserAdapterWithValidation__VTable vtable;
};
struct DtdParser_UndeclaredNotation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DtdParser_UndeclaredNotation__StaticFields {
};
struct DtdParser_UndeclaredNotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DtdParser_UndeclaredNotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DtdParser_UndeclaredNotation__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable {
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
struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields {
};
struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
};
struct DtdParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Xml_IDtdParser_ParseInternalDtd;
  VirtualInvokeData System_Xml_IDtdParser_ParseFreeFloatingDtd;
};
struct DtdParser__StaticFields {
};
struct DtdParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DtdParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DtdParser__VTable vtable;
};

struct IDtdParser {
  struct IDtdParser__Class *klass;
  struct MonitorData *monitor;
};
struct IDtdParser__VTable {
  VirtualInvokeData ParseInternalDtd;
  VirtualInvokeData ParseFreeFloatingDtd;
};
struct IDtdParser__StaticFields {
};
struct IDtdParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDtdParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDtdParser__VTable vtable;
};

enum DtdParser_Token__Enum : int32_t {
  DtdParser_Token__Enum_CDATA = 0,
  DtdParser_Token__Enum_ID = 1,
  DtdParser_Token__Enum_IDREF = 2,
  DtdParser_Token__Enum_IDREFS = 3,
  DtdParser_Token__Enum_ENTITY = 4,
  DtdParser_Token__Enum_ENTITIES = 5,
  DtdParser_Token__Enum_NMTOKEN = 6,
  DtdParser_Token__Enum_NMTOKENS = 7,
  DtdParser_Token__Enum_NOTATION = 8,
  DtdParser_Token__Enum_None = 9,
  DtdParser_Token__Enum_PERef = 10,
  DtdParser_Token__Enum_AttlistDecl = 11,
  DtdParser_Token__Enum_ElementDecl = 12,
  DtdParser_Token__Enum_EntityDecl = 13,
  DtdParser_Token__Enum_NotationDecl = 14,
  DtdParser_Token__Enum_Comment = 15,
  DtdParser_Token__Enum_PI = 16,
  DtdParser_Token__Enum_CondSectionStart = 17,
  DtdParser_Token__Enum_CondSectionEnd = 18,
  DtdParser_Token__Enum_Eof = 19,
  DtdParser_Token__Enum_REQUIRED = 20,
  DtdParser_Token__Enum_IMPLIED = 21,
  DtdParser_Token__Enum_FIXED = 22,
  DtdParser_Token__Enum_QName = 23,
  DtdParser_Token__Enum_Name = 24,
  DtdParser_Token__Enum_Nmtoken = 25,
  DtdParser_Token__Enum_Quote = 26,
  DtdParser_Token__Enum_LeftParen = 27,
  DtdParser_Token__Enum_RightParen = 28,
  DtdParser_Token__Enum_GreaterThan = 29,
  DtdParser_Token__Enum_Or = 30,
  DtdParser_Token__Enum_LeftBracket = 31,
  DtdParser_Token__Enum_RightBracket = 32,
  DtdParser_Token__Enum_PUBLIC = 33,
  DtdParser_Token__Enum_SYSTEM = 34,
  DtdParser_Token__Enum_Literal = 35,
  DtdParser_Token__Enum_DOCTYPE = 36,
  DtdParser_Token__Enum_NData = 37,
  DtdParser_Token__Enum_Percent = 38,
  DtdParser_Token__Enum_Star = 39,
  DtdParser_Token__Enum_QMark = 40,
  DtdParser_Token__Enum_Plus = 41,
  DtdParser_Token__Enum_PCDATA = 42,
  DtdParser_Token__Enum_Comma = 43,
  DtdParser_Token__Enum_ANY = 44,
  DtdParser_Token__Enum_EMPTY = 45,
  DtdParser_Token__Enum_IGNORE = 46,
  DtdParser_Token__Enum_INCLUDE = 47,
};
struct DtdParser_Token__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DtdParser_Token__Enum value;
};

enum DtdParser_LiteralType__Enum : int32_t {
  DtdParser_LiteralType__Enum_AttributeValue = 0,
  DtdParser_LiteralType__Enum_EntityReplText = 1,
  DtdParser_LiteralType__Enum_SystemOrPublicID = 2,
};
struct DtdParser_LiteralType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DtdParser_LiteralType__Enum value;
};

struct __declspec(align(8)) DtdParser_ParseElementOnlyContent_LocalFrame__Fields {
  int32_t startParenEntityId;
  enum DtdParser_Token__Enum parsingSchema;
};
struct DtdParser_ParseElementOnlyContent_LocalFrame {
  struct DtdParser_ParseElementOnlyContent_LocalFrame__Class *klass;
  struct MonitorData *monitor;
  struct DtdParser_ParseElementOnlyContent_LocalFrame__Fields fields;
};
struct DtdParser_ParseElementOnlyContent_LocalFrame__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DtdParser_ParseElementOnlyContent_LocalFrame__StaticFields {
};
struct DtdParser_ParseElementOnlyContent_LocalFrame__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DtdParser_ParseElementOnlyContent_LocalFrame__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DtdParser_ParseElementOnlyContent_LocalFrame__VTable vtable;
};

enum ExceptionType__Enum : int32_t {
  ExceptionType__Enum_ArgumentException = 0,
  ExceptionType__Enum_XmlException = 1,
};
struct ExceptionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExceptionType__Enum value;
};

enum XmlDateTimeSerializationMode__Enum : int32_t {
  XmlDateTimeSerializationMode__Enum_Local = 0,
  XmlDateTimeSerializationMode__Enum_Utc = 1,
  XmlDateTimeSerializationMode__Enum_Unspecified = 2,
  XmlDateTimeSerializationMode__Enum_RoundtripKind = 3,
};
struct XmlDateTimeSerializationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlDateTimeSerializationMode__Enum value;
};

struct __declspec(align(8)) XmlDownloadManager__Fields {
  struct Hashtable * connections;
};
struct XmlDownloadManager {
  struct XmlDownloadManager__Class *klass;
  struct MonitorData *monitor;
  struct XmlDownloadManager__Fields fields;
};
struct XmlDownloadManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlDownloadManager__StaticFields {
};
struct XmlDownloadManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlDownloadManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlDownloadManager__VTable vtable;
};

struct __declspec(align(8)) XmlDownloadManager_c_DisplayClass4_0__Fields {
  struct Uri * uri;
};
struct XmlDownloadManager_c_DisplayClass4_0 {
  struct XmlDownloadManager_c_DisplayClass4_0__Class *klass;
  struct MonitorData *monitor;
  struct XmlDownloadManager_c_DisplayClass4_0__Fields fields;
};
struct XmlDownloadManager_c_DisplayClass4_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlDownloadManager_c_DisplayClass4_0__StaticFields {
};
struct XmlDownloadManager_c_DisplayClass4_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlDownloadManager_c_DisplayClass4_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlDownloadManager_c_DisplayClass4_0__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_IO_Stream_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_System_IO_Stream_ * m_task;
};
struct AsyncTaskMethodBuilder_1_System_IO_Stream___Boxed {
  struct AsyncTaskMethodBuilder_1_System_IO_Stream___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_System_IO_Stream_ fields;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_ {
  struct Task_1_System_Net_WebResponse_ * m_task;
  bool m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___Boxed {
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___Class *klass;
  struct MonitorData *monitor;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_ fields;
};
struct XmlDownloadManager_GetNonFileStreamAsync_d_5 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_System_IO_Stream_ __t__builder;
  struct Uri * uri;
  struct ICredentials * credentials;
  struct IWebProxy * proxy;
  struct RequestCachePolicy * cachePolicy;
  struct WebRequest * _req_5__1;
  struct XmlDownloadManager * __4__this;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_ __u__1;
};
struct XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed {
  struct XmlDownloadManager_GetNonFileStreamAsync_d_5__Class *klass;
  struct MonitorData *monitor;
  struct XmlDownloadManager_GetNonFileStreamAsync_d_5 fields;
};
struct AsyncTaskMethodBuilder_1_System_IO_Stream___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_System_IO_Stream___StaticFields {
  struct Task_1_System_IO_Stream_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_System_IO_Stream___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_System_IO_Stream___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_System_IO_Stream___VTable vtable;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___StaticFields {
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse___VTable vtable;
};
struct XmlDownloadManager_GetNonFileStreamAsync_d_5__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct XmlDownloadManager_GetNonFileStreamAsync_d_5__StaticFields {
};
struct XmlDownloadManager_GetNonFileStreamAsync_d_5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlDownloadManager_GetNonFileStreamAsync_d_5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlDownloadManager_GetNonFileStreamAsync_d_5__VTable vtable;
};

struct __declspec(align(8)) OpenedHost__Fields {
  int32_t nonCachedConnectionsCount;
};
struct OpenedHost {
  struct OpenedHost__Class *klass;
  struct MonitorData *monitor;
  struct OpenedHost__Fields fields;
};
struct OpenedHost__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenedHost__StaticFields {
};
struct OpenedHost__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenedHost__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenedHost__VTable vtable;
};

struct XmlRegisteredNonCachedStream__Fields {
  struct Stream__Fields _;
  struct Stream * stream;
  struct XmlDownloadManager * downloadManager;
  struct String * host;
};
struct XmlRegisteredNonCachedStream {
  struct XmlRegisteredNonCachedStream__Class *klass;
  struct MonitorData *monitor;
  struct XmlRegisteredNonCachedStream__Fields fields;
};
struct XmlRegisteredNonCachedStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
};
struct XmlRegisteredNonCachedStream__StaticFields {
};
struct XmlRegisteredNonCachedStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlRegisteredNonCachedStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlRegisteredNonCachedStream__VTable vtable;
};

struct XmlCachedStream__Fields {
  struct MemoryStream__Fields _;
  struct Uri * uri;
};
struct XmlCachedStream {
  struct XmlCachedStream__Class *klass;
  struct MonitorData *monitor;
  struct XmlCachedStream__Fields fields;
};
struct XmlCachedStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRead;
  VirtualInvokeData get_CanSeek;
  VirtualInvokeData get_CanTimeout;
  VirtualInvokeData get_CanWrite;
  VirtualInvokeData get_Length;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_ReadTimeout;
  VirtualInvokeData set_ReadTimeout;
  VirtualInvokeData get_WriteTimeout;
  VirtualInvokeData set_WriteTimeout;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData FlushAsync;
  VirtualInvokeData BeginRead;
  VirtualInvokeData EndRead;
  VirtualInvokeData ReadAsync;
  VirtualInvokeData BeginWrite;
  VirtualInvokeData EndWrite;
  VirtualInvokeData WriteAsync;
  VirtualInvokeData Seek;
  VirtualInvokeData SetLength;
  VirtualInvokeData Read;
  VirtualInvokeData ReadByte;
  VirtualInvokeData Write;
  VirtualInvokeData WriteByte;
  VirtualInvokeData GetBuffer;
  VirtualInvokeData get_Capacity;
  VirtualInvokeData set_Capacity;
  VirtualInvokeData ToArray;
  VirtualInvokeData WriteTo;
};
struct XmlCachedStream__StaticFields {
};
struct XmlCachedStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlCachedStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlCachedStream__VTable vtable;
};

struct UTF16Decoder__Fields {
  struct Decoder__Fields _;
  bool bigEndian;
  int32_t lastByte;
};
struct UTF16Decoder {
  struct UTF16Decoder__Class *klass;
  struct MonitorData *monitor;
  struct UTF16Decoder__Fields fields;
};
struct UTF16Decoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData GetCharCount_2;
  VirtualInvokeData GetChars;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData GetChars_2;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
};
struct UTF16Decoder__StaticFields {
};
struct UTF16Decoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UTF16Decoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UTF16Decoder__VTable vtable;
};

struct SafeAsciiDecoder__Fields {
  struct Decoder__Fields _;
};
struct SafeAsciiDecoder {
  struct SafeAsciiDecoder__Class *klass;
  struct MonitorData *monitor;
  struct SafeAsciiDecoder__Fields fields;
};
struct SafeAsciiDecoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData GetCharCount_2;
  VirtualInvokeData GetChars;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData GetChars_2;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
};
struct SafeAsciiDecoder__StaticFields {
};
struct SafeAsciiDecoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SafeAsciiDecoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SafeAsciiDecoder__VTable vtable;
};

struct Ucs4Encoding__Fields {
  struct Encoding__Fields _;
  struct Ucs4Decoder * ucs4Decoder;
};
struct Ucs4Encoding {
  struct Ucs4Encoding__Class *klass;
  struct MonitorData *monitor;
  struct Ucs4Encoding__Fields fields;
};}