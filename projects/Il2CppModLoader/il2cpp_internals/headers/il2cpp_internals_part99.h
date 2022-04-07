namespace app {

struct HtmlEncodedRawTextWriterIndent__Fields {
  struct HtmlEncodedRawTextWriter__Fields _;
  int32_t indentLevel;
  int32_t endBlockPos;
  struct String * indentChars;
  bool newLineOnAttributes;
};
struct HtmlEncodedRawTextWriterIndent {
  struct HtmlEncodedRawTextWriterIndent__Class *klass;
  struct MonitorData *monitor;
  struct HtmlEncodedRawTextWriterIndent__Fields fields;
};
struct HtmlEncodedRawTextWriterIndent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct HtmlEncodedRawTextWriterIndent__StaticFields {
};
struct HtmlEncodedRawTextWriterIndent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HtmlEncodedRawTextWriterIndent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HtmlEncodedRawTextWriterIndent__VTable vtable;
};

struct XmlUtf8RawTextWriter__Fields {
  struct XmlRawWriter__Fields _;
  bool useAsync;
  struct Byte__Array * bufBytes;
  struct Stream * stream;
  struct Encoding * encoding;
  struct XmlCharType xmlCharType;
  int32_t bufPos;
  int32_t textPos;
  int32_t contentPos;
  int32_t cdataPos;
  int32_t attrEndPos;
  int32_t bufLen;
  bool writeToNull;
  bool hadDoubleBracket;
  bool inAttributeValue;
  enum NewLineHandling__Enum newLineHandling;
  bool closeOutput;
  bool omitXmlDeclaration;
  struct String * newLineChars;
  bool checkCharacters;
  enum XmlStandalone__Enum standalone;
  enum XmlOutputMethod__Enum outputMethod;
  bool autoXmlDeclaration;
  bool mergeCDataSections;
};
struct XmlUtf8RawTextWriter {
  struct XmlUtf8RawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct XmlUtf8RawTextWriter__Fields fields;
};
struct HtmlUtf8RawTextWriter__Fields {
  struct XmlUtf8RawTextWriter__Fields _;
  struct ByteStack * elementScope;
  enum ElementProperties__Enum currentElementProperties;
  enum AttributeProperties__Enum currentAttributeProperties;
  bool endsWithAmpersand;
  struct Byte__Array * uriEscapingBuffer;
  struct String * mediaType;
  bool doNotEscapeUriAttributes;
};
struct HtmlUtf8RawTextWriter {
  struct HtmlUtf8RawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct HtmlUtf8RawTextWriter__Fields fields;
};
struct XmlUtf8RawTextWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct XmlUtf8RawTextWriter__StaticFields {
};
struct XmlUtf8RawTextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlUtf8RawTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlUtf8RawTextWriter__VTable vtable;
};
struct HtmlUtf8RawTextWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct HtmlUtf8RawTextWriter__StaticFields {
  struct TernaryTreeReadOnly * elementPropertySearch;
  struct TernaryTreeReadOnly * attributePropertySearch;
};
struct HtmlUtf8RawTextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HtmlUtf8RawTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HtmlUtf8RawTextWriter__VTable vtable;
};

struct HtmlUtf8RawTextWriterIndent__Fields {
  struct HtmlUtf8RawTextWriter__Fields _;
  int32_t indentLevel;
  int32_t endBlockPos;
  struct String * indentChars;
  bool newLineOnAttributes;
};
struct HtmlUtf8RawTextWriterIndent {
  struct HtmlUtf8RawTextWriterIndent__Class *klass;
  struct MonitorData *monitor;
  struct HtmlUtf8RawTextWriterIndent__Fields fields;
};
struct HtmlUtf8RawTextWriterIndent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct HtmlUtf8RawTextWriterIndent__StaticFields {
};
struct HtmlUtf8RawTextWriterIndent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HtmlUtf8RawTextWriterIndent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HtmlUtf8RawTextWriterIndent__VTable vtable;
};

struct OnRemoveWriter__Fields {
  struct MulticastDelegate__Fields _;
};
struct OnRemoveWriter {
  struct OnRemoveWriter__Class *klass;
  struct MonitorData *monitor;
  struct OnRemoveWriter__Fields fields;
};
struct OnRemoveWriter__VTable {
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
struct OnRemoveWriter__StaticFields {
};
struct OnRemoveWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnRemoveWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnRemoveWriter__VTable vtable;
};

struct IncrementalReadDummyDecoder {
  struct IncrementalReadDummyDecoder__Class *klass;
  struct MonitorData *monitor;
};
struct IncrementalReadDummyDecoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsFull;
  VirtualInvokeData Decode;
};
struct IncrementalReadDummyDecoder__StaticFields {
};
struct IncrementalReadDummyDecoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IncrementalReadDummyDecoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IncrementalReadDummyDecoder__VTable vtable;
};

struct QueryOutputWriter__Fields {
  struct XmlRawWriter__Fields _;
  struct XmlRawWriter * wrapped;
  bool inCDataSection;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_ * lookupCDataElems;
  struct BitStack * bitsCData;
  struct XmlQualifiedName * qnameCData;
  bool outputDocType;
  bool checkWellFormedDoc;
  bool hasDocElem;
  bool inAttr;
  struct String * systemId;
  struct String * publicId;
  int32_t depth;
};
struct QueryOutputWriter {
  struct QueryOutputWriter__Class *klass;
  struct MonitorData *monitor;
  struct QueryOutputWriter__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___Fields fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32_ {
  struct XmlQualifiedName * key;
  int32_t value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___VTable {
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
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields {
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32___VTable vtable;
};
struct QueryOutputWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
};
struct QueryOutputWriter__StaticFields {
};
struct QueryOutputWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QueryOutputWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QueryOutputWriter__VTable vtable;
};

enum ReadContentAsBinaryHelper_State__Enum : int32_t {
  ReadContentAsBinaryHelper_State__Enum_None = 0,
  ReadContentAsBinaryHelper_State__Enum_InReadContent = 1,
  ReadContentAsBinaryHelper_State__Enum_InReadElementContent = 2,
};
struct ReadContentAsBinaryHelper_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReadContentAsBinaryHelper_State__Enum value;
};
struct __declspec(align(8)) ReadContentAsBinaryHelper__Fields {
  struct XmlReader * reader;
  enum ReadContentAsBinaryHelper_State__Enum state;
  int32_t valueOffset;
  bool isEnd;
};
struct ReadContentAsBinaryHelper {
  struct ReadContentAsBinaryHelper__Class *klass;
  struct MonitorData *monitor;
  struct ReadContentAsBinaryHelper__Fields fields;
};
struct ReadContentAsBinaryHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReadContentAsBinaryHelper__StaticFields {
};
struct ReadContentAsBinaryHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadContentAsBinaryHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadContentAsBinaryHelper__VTable vtable;
};

struct TextEncodedRawTextWriter__Fields {
  struct XmlEncodedRawTextWriter__Fields _;
};
struct TextEncodedRawTextWriter {
  struct TextEncodedRawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct TextEncodedRawTextWriter__Fields fields;
};
struct TextEncodedRawTextWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct TextEncodedRawTextWriter__StaticFields {
};
struct TextEncodedRawTextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextEncodedRawTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextEncodedRawTextWriter__VTable vtable;
};

struct TextUtf8RawTextWriter__Fields {
  struct XmlUtf8RawTextWriter__Fields _;
};
struct TextUtf8RawTextWriter {
  struct TextUtf8RawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct TextUtf8RawTextWriter__Fields fields;
};
struct TextUtf8RawTextWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData WriteStartDocument;
  VirtualInvokeData WriteStartDocument_1;
  VirtualInvokeData WriteEndDocument;
  VirtualInvokeData WriteDocType;
  VirtualInvokeData WriteStartElement;
  VirtualInvokeData WriteEndElement;
  VirtualInvokeData WriteFullEndElement;
  VirtualInvokeData WriteStartAttribute;
  VirtualInvokeData WriteEndAttribute;
  VirtualInvokeData WriteCData;
  VirtualInvokeData WriteComment;
  VirtualInvokeData WriteProcessingInstruction;
  VirtualInvokeData WriteEntityRef;
  VirtualInvokeData WriteCharEntity;
  VirtualInvokeData WriteWhitespace;
  VirtualInvokeData WriteString;
  VirtualInvokeData WriteSurrogateCharEntity;
  VirtualInvokeData WriteChars;
  VirtualInvokeData WriteRaw;
  VirtualInvokeData WriteRaw_1;
  VirtualInvokeData WriteBase64;
  VirtualInvokeData WriteBinHex;
  VirtualInvokeData get_WriteState;
  VirtualInvokeData Close;
  VirtualInvokeData Flush;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData WriteValue;
  VirtualInvokeData WriteAttributes;
  VirtualInvokeData WriteNode;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData set_NamespaceResolver;
  VirtualInvokeData WriteXmlDeclaration;
  VirtualInvokeData WriteXmlDeclaration_1;
  VirtualInvokeData StartElementContent;
  VirtualInvokeData OnRootElement;
  VirtualInvokeData WriteEndElement_1;
  VirtualInvokeData WriteFullEndElement_1;
  VirtualInvokeData WriteNamespaceDeclaration;
  VirtualInvokeData get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData WriteStartNamespaceDeclaration;
  VirtualInvokeData WriteEndNamespaceDeclaration;
  VirtualInvokeData WriteEndBase64;
  VirtualInvokeData Close_1;
  VirtualInvokeData FlushBuffer;
};
struct TextUtf8RawTextWriter__StaticFields {
};
struct TextUtf8RawTextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextUtf8RawTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextUtf8RawTextWriter__VTable vtable;
};

struct __declspec(align(8)) ValidatingReaderNodeData__Fields {
  struct String * localName;
  struct String * namespaceUri;
  struct String * prefix;
  struct String * nameWPrefix;
  struct String * rawValue;
  struct String * originalStringValue;
  int32_t depth;
  struct AttributePSVIInfo * attributePSVIInfo;
  enum XmlNodeType__Enum nodeType;
  int32_t lineNo;
  int32_t linePos;
};
struct ValidatingReaderNodeData {
  struct ValidatingReaderNodeData__Class *klass;
  struct MonitorData *monitor;
  struct ValidatingReaderNodeData__Fields fields;
};
struct __declspec(align(8)) AttributePSVIInfo__Fields {
  struct String * localName;
  struct String * namespaceUri;
  struct Object * typedAttributeValue;
  struct XmlSchemaInfo * attributeSchemaInfo;
};
struct AttributePSVIInfo {
  struct AttributePSVIInfo__Class *klass;
  struct MonitorData *monitor;
  struct AttributePSVIInfo__Fields fields;
};
struct __declspec(align(8)) XmlSchemaInfo__Fields {
  bool isDefault;
  bool isNil;
  struct XmlSchemaElement * schemaElement;
  struct XmlSchemaAttribute * schemaAttribute;
  struct XmlSchemaType * schemaType;
  struct XmlSchemaSimpleType * memberType;
  enum XmlSchemaValidity__Enum validity;
  enum XmlSchemaContentType__Enum contentType;
};
struct XmlSchemaInfo {
  struct XmlSchemaInfo__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaInfo__Fields fields;
};
struct XmlSchemaInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Validity;
  VirtualInvokeData get_IsDefault;
  VirtualInvokeData get_IsNil;
  VirtualInvokeData get_MemberType;
  VirtualInvokeData get_SchemaType;
  VirtualInvokeData get_SchemaElement;
  VirtualInvokeData get_SchemaAttribute;
};
struct XmlSchemaInfo__StaticFields {
};
struct XmlSchemaInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaInfo__VTable vtable;
};
struct AttributePSVIInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttributePSVIInfo__StaticFields {
};
struct AttributePSVIInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributePSVIInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributePSVIInfo__VTable vtable;
};
struct ValidatingReaderNodeData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ValidatingReaderNodeData__StaticFields {
};
struct ValidatingReaderNodeData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValidatingReaderNodeData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValidatingReaderNodeData__VTable vtable;
};

struct IXmlLineInfo {
  struct IXmlLineInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IXmlLineInfo__VTable {
  VirtualInvokeData HasLineInfo;
  VirtualInvokeData get_LineNumber;
  VirtualInvokeData get_LinePosition;
};
struct IXmlLineInfo__StaticFields {
};
struct IXmlLineInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IXmlLineInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IXmlLineInfo__VTable vtable;
};

struct __declspec(align(8)) XmlAsyncCheckReader__Fields {
  struct XmlReader * coreReader;
  struct Task * lastTask;
};
struct XmlAsyncCheckReader {
  struct XmlAsyncCheckReader__Class *klass;
  struct MonitorData *monitor;
  struct XmlAsyncCheckReader__Fields fields;
};}