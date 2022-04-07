namespace app {
struct XPathParser__StaticFields {
  struct XPathResultType__Enum__Array * temparray1;
  struct XPathResultType__Enum__Array * temparray2;
  struct XPathResultType__Enum__Array * temparray3;
  struct XPathResultType__Enum__Array * temparray4;
  struct XPathResultType__Enum__Array * temparray5;
  struct XPathResultType__Enum__Array * temparray6;
  struct XPathResultType__Enum__Array * temparray7;
  struct XPathResultType__Enum__Array * temparray8;
  struct XPathResultType__Enum__Array * temparray9;
  struct Hashtable * functionTable;
  struct Hashtable * AxesTable;
};
struct XPathParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathParser__VTable vtable;
};

struct __declspec(align(8)) XPathParser_ParamInfo__Fields {
  enum Function_FunctionType__Enum ftype;
  int32_t minargs;
  int32_t maxargs;
  struct XPathResultType__Enum__Array * argTypes;
};
struct XPathParser_ParamInfo {
  struct XPathParser_ParamInfo__Class *klass;
  struct MonitorData *monitor;
  struct XPathParser_ParamInfo__Fields fields;
};
struct XPathParser_ParamInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathParser_ParamInfo__StaticFields {
};
struct XPathParser_ParamInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathParser_ParamInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathParser_ParamInfo__VTable vtable;
};

struct XPathItem {
  struct XPathItem__Class *klass;
  struct MonitorData *monitor;
};
struct XPathNavigator {
  struct XPathNavigator__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XPathDocumentNavigator__Fields {
  struct XPathNode__Array * pageCurrent;
  struct XPathNode__Array * pageParent;
  int32_t idxCurrent;
  int32_t idxParent;
};
struct XPathDocumentNavigator {
  struct XPathDocumentNavigator__Class *klass;
  struct MonitorData *monitor;
  struct XPathDocumentNavigator__Fields fields;
};
struct XPathNavigatorKeyComparer {
  struct XPathNavigatorKeyComparer__Class *klass;
  struct MonitorData *monitor;
};
enum XPathNamespaceScope__Enum : int32_t {
  XPathNamespaceScope__Enum_All = 0,
  XPathNamespaceScope__Enum_ExcludeXml = 1,
  XPathNamespaceScope__Enum_Local = 2,
};
struct XPathNamespaceScope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XPathNamespaceScope__Enum value;
};
struct XPathNode {
  struct XPathNodeInfoAtom * info;
  uint16_t idxSibling;
  uint16_t idxParent;
  uint16_t idxSimilar;
  uint16_t posOffset;
  uint32_t props;
  struct String * value;
};
struct XPathNode__Boxed {
  struct XPathNode__Class *klass;
  struct MonitorData *monitor;
  struct XPathNode fields;
};
struct XPathNode__Array {
  struct XPathNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XPathNode vector[32];
};
struct __declspec(align(8)) XPathNodeInfoAtom__Fields {
  struct String * localName;
  struct String * namespaceUri;
  struct String * prefix;
  struct String * baseUri;
  struct XPathNode__Array * pageParent;
  struct XPathNode__Array * pageSibling;
  struct XPathNode__Array * pageSimilar;
  struct XPathDocument * doc;
  int32_t lineNumBase;
  int32_t linePosBase;
  int32_t hashCode;
  int32_t localNameHash;
  struct XPathNodePageInfo * pageInfo;
};
struct XPathNodeInfoAtom {
  struct XPathNodeInfoAtom__Class *klass;
  struct MonitorData *monitor;
  struct XPathNodeInfoAtom__Fields fields;
};
struct __declspec(align(8)) XPathDocument__Fields {
  struct XPathNode__Array * pageXmlNmsp;
  int32_t idxXmlNmsp;
  struct XmlNameTable * nameTable;
  bool hasLineInfo;
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ * mapNmsp;
};
struct XPathDocument {
  struct XPathDocument__Class *klass;
  struct MonitorData *monitor;
  struct XPathDocument__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields fields;
};
struct XPathNodeRef {
  struct XPathNode__Array * page;
  int32_t idx;
};
struct XPathNodeRef__Boxed {
  struct XPathNodeRef__Class *klass;
  struct MonitorData *monitor;
  struct XPathNodeRef fields;
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  int32_t hashCode;
  int32_t next;
  struct XPathNodeRef key;
  struct XPathNodeRef value;
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array {
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ vector[32];
};
struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields {
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields fields;
};
struct XPathNodeRef__Array {
  struct XPathNodeRef__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XPathNodeRef vector[32];
};
struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields {
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Fields fields;
};
struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct XPathNodeRef key;
  struct XPathNodeRef value;
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Boxed {
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ fields;
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array {
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef_ {
  struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XPathNodePageInfo__Fields {
  int32_t pageNum;
  int32_t nodeCount;
  struct XPathNode__Array * pageNext;
};
struct XPathNodePageInfo {
  struct XPathNodePageInfo__Class *klass;
  struct MonitorData *monitor;
  struct XPathNodePageInfo__Fields fields;
};
struct XPathItem__VTable {
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
  VirtualInvokeData ValueAs;
  VirtualInvokeData __unknown_9;
};
struct XPathItem__StaticFields {
};
struct XPathItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathItem__VTable vtable;
};
struct XPathNavigatorKeyComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEqualityComparer_Equals;
  VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
};
struct XPathNavigatorKeyComparer__StaticFields {
};
struct XPathNavigatorKeyComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNavigatorKeyComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNavigatorKeyComparer__VTable vtable;
};
struct XPathNavigator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_XmlType;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_TypedValue;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_ValueAsBoolean;
  VirtualInvokeData get_ValueAsDateTime;
  VirtualInvokeData get_ValueAsDouble;
  VirtualInvokeData get_ValueAsInt;
  VirtualInvokeData get_ValueAsLong;
  VirtualInvokeData ValueAs;
  VirtualInvokeData ValueAs_1;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData GetNamespacesInScope;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData LookupNamespace_1;
  VirtualInvokeData LookupPrefix_1;
  VirtualInvokeData GetNamespacesInScope_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData get_UnderlyingObject;
  VirtualInvokeData MoveToNamespace;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
  VirtualInvokeData __unknown_10;
  VirtualInvokeData __unknown_11;
  VirtualInvokeData get_SchemaInfo;
};
struct XPathNavigator__StaticFields {
  struct XPathNavigatorKeyComparer * comparer;
  struct Char__Array * NodeTypeLetter;
  struct Char__Array * UniqueIdTbl;
  struct Int32__Array * ContentKindMasks;
};
struct XPathNavigator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNavigator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNavigator__VTable vtable;
};
struct XPathNodeRef__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathNodeRef__StaticFields {
};
struct XPathNodeRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNodeRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNodeRef__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable {
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
struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields {
};
struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef___VTable vtable;
};
struct XPathDocument__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathDocument__StaticFields {
};
struct XPathDocument__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathDocument__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathDocument__VTable vtable;
};
struct XPathNodePageInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathNodePageInfo__StaticFields {
};
struct XPathNodePageInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNodePageInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNodePageInfo__VTable vtable;
};
struct XPathNodeInfoAtom__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathNodeInfoAtom__StaticFields {
};
struct XPathNodeInfoAtom__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNodeInfoAtom__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNodeInfoAtom__VTable vtable;
};
struct XPathNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XPathNode__StaticFields {
};
struct XPathNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathNode__VTable vtable;
};
struct XPathDocumentNavigator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_XmlType;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_TypedValue;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_ValueAsBoolean;
  VirtualInvokeData get_ValueAsDateTime;
  VirtualInvokeData get_ValueAsDouble;
  VirtualInvokeData get_ValueAsInt;
  VirtualInvokeData get_ValueAsLong;
  VirtualInvokeData ValueAs;
  VirtualInvokeData ValueAs_1;
  VirtualInvokeData System_ICloneable_Clone;
  VirtualInvokeData GetNamespacesInScope;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData get_NameTable;
  VirtualInvokeData LookupNamespace_1;
  VirtualInvokeData LookupPrefix_1;
  VirtualInvokeData GetNamespacesInScope_1;
  VirtualInvokeData Clone;
  VirtualInvokeData get_NodeType;
  VirtualInvokeData get_LocalName;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_NamespaceURI;
  VirtualInvokeData get_Prefix;
  VirtualInvokeData get_UnderlyingObject;
  VirtualInvokeData MoveToNamespace;
  VirtualInvokeData MoveToFirstNamespace;
  VirtualInvokeData MoveToNextNamespace;
  VirtualInvokeData MoveToParent;
  VirtualInvokeData IsSamePosition;
  VirtualInvokeData get_SchemaInfo;
  VirtualInvokeData HasLineInfo;
  VirtualInvokeData get_LineNumber;
  VirtualInvokeData get_LinePosition;
};
struct XPathDocumentNavigator__StaticFields {
};
struct XPathDocumentNavigator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XPathDocumentNavigator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XPathDocumentNavigator__VTable vtable;
};

struct MonoTODOAttribute_1 {
  struct MonoTODOAttribute_1__Class *klass;
  struct MonitorData *monitor;
};
struct MonoTODOAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoTODOAttribute_1__StaticFields {
};
struct MonoTODOAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoTODOAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoTODOAttribute_1__VTable vtable;
};

struct XmlTextWriterBase64Encoder__Fields {
  struct Base64Encoder__Fields _;
  struct XmlTextEncoder * xmlTextEncoder;
};
struct XmlTextWriterBase64Encoder {
  struct XmlTextWriterBase64Encoder__Class *klass;
  struct MonitorData *monitor;
  struct XmlTextWriterBase64Encoder__Fields fields;
};
struct __declspec(align(8)) XmlTextEncoder__Fields {
  struct TextWriter * textWriter;
  bool inAttribute;
  uint16_t quoteChar;
  struct StringBuilder * attrValue;
  bool cacheAttrValue;
  struct XmlCharType xmlCharType;
};
struct XmlTextEncoder {
  struct XmlTextEncoder__Class *klass;
  struct MonitorData *monitor;
  struct XmlTextEncoder__Fields fields;
};
struct XmlTextEncoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlTextEncoder__StaticFields {
};
struct XmlTextEncoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextEncoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextEncoder__VTable vtable;
};
struct XmlTextWriterBase64Encoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData WriteChars;
};
struct XmlTextWriterBase64Encoder__StaticFields {
};
struct XmlTextWriterBase64Encoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextWriterBase64Encoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextWriterBase64Encoder__VTable vtable;
};

struct BinXmlSqlDecimal {
  uint8_t m_bLen;
  uint8_t m_bPrec;
  uint8_t m_bScale;
  uint8_t m_bSign;
  uint32_t m_data1;
  uint32_t m_data2;
  uint32_t m_data3;
  uint32_t m_data4;
};
struct BinXmlSqlDecimal__Boxed {
  struct BinXmlSqlDecimal__Class *klass;
  struct MonitorData *monitor;
  struct BinXmlSqlDecimal fields;
};
struct BinXmlSqlDecimal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BinXmlSqlDecimal__StaticFields {
  uint8_t NUMERIC_MAX_PRECISION;
  uint8_t MaxPrecision;
  uint8_t MaxScale;
  int32_t x_cNumeMax;
  int64_t x_lInt32Base;
  uint64_t x_ulInt32Base;
  uint64_t x_ulInt32BaseForMod;
  uint64_t x_llMax;
  double DUINT_BASE;
  double DUINT_BASE2;
  double DUINT_BASE3;
  struct UInt32__Array * x_rgulShiftBase;
  struct Byte__Array * rgCLenFromPrec;
};
struct BinXmlSqlDecimal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinXmlSqlDecimal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinXmlSqlDecimal__VTable vtable;
};

struct BinXmlSqlMoney {
  int64_t data;
};
struct BinXmlSqlMoney__Boxed {
  struct BinXmlSqlMoney__Class *klass;
  struct MonitorData *monitor;
  struct BinXmlSqlMoney fields;
};
struct BinXmlSqlMoney__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BinXmlSqlMoney__StaticFields {
};
struct BinXmlSqlMoney__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinXmlSqlMoney__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinXmlSqlMoney__VTable vtable;
};

struct __declspec(align(8)) BitStack__Fields {
  struct UInt32__Array * bitStack;
  int32_t stackPos;
  uint32_t curr;
};
struct BitStack {
  struct BitStack__Class *klass;
  struct MonitorData *monitor;
  struct BitStack__Fields fields;
};
struct BitStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BitStack__StaticFields {
};
struct BitStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BitStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BitStack__VTable vtable;
};

enum TriState__Enum : int32_t {
  TriState__Enum_Unknown = -1,
  TriState__Enum_False = 0,
  TriState__Enum_True = 1,
};
struct TriState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TriState__Enum value;
};
enum NamespaceHandling__Enum : int32_t {
  NamespaceHandling__Enum_Default = 0,
  NamespaceHandling__Enum_OmitDuplicates = 1,
};
struct NamespaceHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NamespaceHandling__Enum value;
};
struct __declspec(align(8)) XmlWriterSettings__Fields {
  bool useAsync;
  struct Encoding * encoding;
  bool omitXmlDecl;
  enum NewLineHandling__Enum newLineHandling;
  struct String * newLineChars;
  enum TriState__Enum indent;
  struct String * indentChars;
  bool newLineOnAttributes;
  bool closeOutput;
  enum NamespaceHandling__Enum namespaceHandling;
  enum ConformanceLevel__Enum conformanceLevel;
  bool checkCharacters;
  bool writeEndDocumentOnClose;
  enum XmlOutputMethod__Enum outputMethod;
  struct List_1_System_Xml_XmlQualifiedName_ * cdataSections;
  bool doNotEscapeUriAttributes;
  bool mergeCDataSections;
  struct String * mediaType;
  struct String * docTypeSystem;
  struct String * docTypePublic;
  enum XmlStandalone__Enum standalone;
  bool autoXmlDecl;
  bool isReadOnly;
};
struct XmlWriterSettings {
  struct XmlWriterSettings__Class *klass;
  struct MonitorData *monitor;
  struct XmlWriterSettings__Fields fields;
};
struct __declspec(align(8)) List_1_System_Xml_XmlQualifiedName___Fields {
  struct XmlQualifiedName__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Xml_XmlQualifiedName_ {
  struct List_1_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Xml_XmlQualifiedName___Fields fields;
};
struct List_1_System_Xml_XmlQualifiedName___VTable {
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
struct List_1_System_Xml_XmlQualifiedName___StaticFields {
  struct XmlQualifiedName__Array * _emptyArray;
};
struct List_1_System_Xml_XmlQualifiedName___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Xml_XmlQualifiedName___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Xml_XmlQualifiedName___VTable vtable;
};
struct XmlWriterSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWriterSettings__StaticFields {
};
struct XmlWriterSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWriterSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWriterSettings__VTable vtable;
};}