namespace app {
struct XmlTextWriter_Namespace__Boxed {
  struct XmlTextWriter_Namespace__Class *klass;
  struct MonitorData *monitor;
  struct XmlTextWriter_Namespace fields;
};
struct XmlTextWriter_Namespace__Array {
  struct XmlTextWriter_Namespace__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlTextWriter_Namespace vector[32];
};
struct XmlTextWriter_TagInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlTextWriter_TagInfo__StaticFields {
};
struct XmlTextWriter_TagInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextWriter_TagInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextWriter_TagInfo__VTable vtable;
};
struct XmlTextWriter_Namespace__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlTextWriter_Namespace__StaticFields {
};
struct XmlTextWriter_Namespace__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextWriter_Namespace__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextWriter_Namespace__VTable vtable;
};
struct XmlTextWriter__VTable {
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
};
struct XmlTextWriter__StaticFields {
  struct String__Array * stateName;
  struct String__Array * tokenName;
  struct XmlTextWriter_State__Enum__Array * stateTableDefault;
  struct XmlTextWriter_State__Enum__Array * stateTableDocument;
};
struct XmlTextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextWriter__VTable vtable;
};

struct XmlReader_XmlReaderDebuggerDisplayProxy {
  struct XmlReader * reader;
};
struct XmlReader_XmlReaderDebuggerDisplayProxy__Boxed {
  struct XmlReader_XmlReaderDebuggerDisplayProxy__Class *klass;
  struct MonitorData *monitor;
  struct XmlReader_XmlReaderDebuggerDisplayProxy fields;
};
struct XmlReader_XmlReaderDebuggerDisplayProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlReader_XmlReaderDebuggerDisplayProxy__StaticFields {
};
struct XmlReader_XmlReaderDebuggerDisplayProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlReader_XmlReaderDebuggerDisplayProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlReader_XmlReaderDebuggerDisplayProxy__VTable vtable;
};

enum XmlValidatingReaderImpl_ParsingFunction__Enum : int32_t {
  XmlValidatingReaderImpl_ParsingFunction__Enum_Read = 0,
  XmlValidatingReaderImpl_ParsingFunction__Enum_Init = 1,
  XmlValidatingReaderImpl_ParsingFunction__Enum_ParseDtdFromContext = 2,
  XmlValidatingReaderImpl_ParsingFunction__Enum_ResolveEntityInternally = 3,
  XmlValidatingReaderImpl_ParsingFunction__Enum_InReadBinaryContent = 4,
  XmlValidatingReaderImpl_ParsingFunction__Enum_ReaderClosed = 5,
  XmlValidatingReaderImpl_ParsingFunction__Enum_Error = 6,
  XmlValidatingReaderImpl_ParsingFunction__Enum_None = 7,
};
struct XmlValidatingReaderImpl_ParsingFunction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlValidatingReaderImpl_ParsingFunction__Enum value;
};
struct __declspec(align(8)) XmlValidatingReaderImpl__Fields {
  struct XmlReader * coreReader;
  struct XmlTextReaderImpl * coreReaderImpl;
  struct IXmlNamespaceResolver * coreReaderNSResolver;
  enum ValidationType__Enum validationType;
  struct BaseValidator * validator;
  struct XmlSchemaCollection * schemaCollection;
  bool processIdentityConstraints;
  enum XmlValidatingReaderImpl_ParsingFunction__Enum parsingFunction;
  struct XmlValidatingReaderImpl_ValidationEventHandling * eventHandling;
  struct XmlParserContext * parserContext;
  struct ReadContentAsBinaryHelper * readBinaryHelper;
  struct XmlReader * outerReader;
};
struct XmlValidatingReaderImpl {
  struct XmlValidatingReaderImpl__Class *klass;
  struct MonitorData *monitor;
  struct XmlValidatingReaderImpl__Fields fields;
};
struct __declspec(align(8)) BaseValidator__Fields {
  struct XmlSchemaCollection * schemaCollection;
  struct IValidationEventHandling * eventHandling;
  struct XmlNameTable * nameTable;
  struct SchemaNames * schemaNames;
  struct PositionInfo * positionInfo;
  struct XmlResolver * xmlResolver;
  struct Uri * baseUri;
  struct SchemaInfo * schemaInfo;
  struct XmlValidatingReaderImpl * reader;
  struct XmlQualifiedName * elementName;
  struct ValidationState * context;
  struct StringBuilder * textValue;
  struct String * textString;
  bool hasSibling;
  bool checkDatatype;
};
struct BaseValidator {
  struct BaseValidator__Class *klass;
  struct MonitorData *monitor;
  struct BaseValidator__Fields fields;
};
struct __declspec(align(8)) XmlSchemaCollection__Fields {
  struct Hashtable * collection;
  struct XmlNameTable * nameTable;
  struct SchemaNames * schemaNames;
  struct ReaderWriterLock * wLock;
  int32_t timeout;
  bool isThreadSafe;
  struct ValidationEventHandler * validationEventHandler;
  struct XmlResolver * xmlResolver;
};
struct XmlSchemaCollection {
  struct XmlSchemaCollection__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaCollection__Fields fields;
};
struct PositionInfo {
  struct PositionInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XmlValidatingReaderImpl_ValidationEventHandling__Fields {
  struct XmlValidatingReaderImpl * reader;
  struct ValidationEventHandler * eventHandler;
};
struct XmlValidatingReaderImpl_ValidationEventHandling {
  struct XmlValidatingReaderImpl_ValidationEventHandling__Class *klass;
  struct MonitorData *monitor;
  struct XmlValidatingReaderImpl_ValidationEventHandling__Fields fields;
};
struct XmlSchemaCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData System_Collections_ICollection_get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct XmlSchemaCollection__StaticFields {
};
struct XmlSchemaCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaCollection__VTable vtable;
};
struct PositionInfo__VTable {
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
struct PositionInfo__StaticFields {
};
struct PositionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionInfo__VTable vtable;
};
struct BaseValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_PreserveWhitespace;
  VirtualInvokeData Validate;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData FindId;
};
struct BaseValidator__StaticFields {
};
struct BaseValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseValidator__VTable vtable;
};
struct XmlValidatingReaderImpl_ValidationEventHandling__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Xml_IValidationEventHandling_get_EventHandler;
  VirtualInvokeData System_Xml_IValidationEventHandling_SendEvent;
};
struct XmlValidatingReaderImpl_ValidationEventHandling__StaticFields {
};
struct XmlValidatingReaderImpl_ValidationEventHandling__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlValidatingReaderImpl_ValidationEventHandling__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlValidatingReaderImpl_ValidationEventHandling__VTable vtable;
};
struct XmlValidatingReaderImpl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_NodeType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_LocalName;
  VirtualInvokeData get_NamespaceURI;
  VirtualInvokeData get_Prefix;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Depth;
  VirtualInvokeData get_BaseURI;
  VirtualInvokeData get_IsEmptyElement;
  VirtualInvokeData get_IsDefault;
  VirtualInvokeData get_QuoteChar;
  VirtualInvokeData get_XmlSpace;
  VirtualInvokeData get_XmlLang;
  VirtualInvokeData get_SchemaInfo;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_AttributeCount;
  VirtualInvokeData GetAttribute;
  VirtualInvokeData GetAttribute_1;
  VirtualInvokeData GetAttribute_2;
  VirtualInvokeData MoveToAttribute;
  VirtualInvokeData MoveToAttribute_1;
  VirtualInvokeData MoveToFirstAttribute;
  VirtualInvokeData MoveToNextAttribute;
  VirtualInvokeData MoveToElement;
  VirtualInvokeData ReadAttributeValue;
  VirtualInvokeData Read;
  VirtualInvokeData get_EOF;
  VirtualInvokeData Close;
  VirtualInvokeData get_ReadState;
  VirtualInvokeData Skip;
  VirtualInvokeData get_NameTable;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData get_CanResolveEntity;
  VirtualInvokeData ResolveEntity;
  VirtualInvokeData get_CanReadValueChunk;
  VirtualInvokeData ReadValueChunk;
  VirtualInvokeData ReadString;
  VirtualInvokeData MoveToContent;
  VirtualInvokeData ReadStartElement;
  VirtualInvokeData ReadElementString;
  VirtualInvokeData ReadEndElement;
  VirtualInvokeData IsStartElement;
  VirtualInvokeData ReadInnerXml;
  VirtualInvokeData get_HasAttributes;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_NamespaceManager;
  VirtualInvokeData get_DtdInfo;
  VirtualInvokeData HasLineInfo;
  VirtualInvokeData get_LineNumber;
  VirtualInvokeData get_LinePosition;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
};
struct XmlValidatingReaderImpl__StaticFields {
  struct XmlResolver * s_tempResolver;
};
struct XmlValidatingReaderImpl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlValidatingReaderImpl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlValidatingReaderImpl__VTable vtable;
};

enum XmlTextReaderImpl_EntityType__Enum : int32_t {
  XmlTextReaderImpl_EntityType__Enum_CharacterDec = 0,
  XmlTextReaderImpl_EntityType__Enum_CharacterHex = 1,
  XmlTextReaderImpl_EntityType__Enum_CharacterNamed = 2,
  XmlTextReaderImpl_EntityType__Enum_Expanded = 3,
  XmlTextReaderImpl_EntityType__Enum_Skipped = 4,
  XmlTextReaderImpl_EntityType__Enum_FakeExpanded = 5,
  XmlTextReaderImpl_EntityType__Enum_Unexpanded = 6,
  XmlTextReaderImpl_EntityType__Enum_ExpandedInAttribute = 7,
};
struct XmlTextReaderImpl_EntityType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlTextReaderImpl_EntityType__Enum value;
};
enum XmlTextReaderImpl_EntityExpandType__Enum : int32_t {
  XmlTextReaderImpl_EntityExpandType__Enum_All = 0,
  XmlTextReaderImpl_EntityExpandType__Enum_OnlyGeneral = 1,
  XmlTextReaderImpl_EntityExpandType__Enum_OnlyCharacter = 2,
};
struct XmlTextReaderImpl_EntityExpandType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlTextReaderImpl_EntityExpandType__Enum value;
};

struct XmlTextReaderImpl_NoNamespaceManager__Fields {
  struct XmlNamespaceManager__Fields _;
};
struct XmlTextReaderImpl_NoNamespaceManager {
  struct XmlTextReaderImpl_NoNamespaceManager__Class *klass;
  struct MonitorData *monitor;
  struct XmlTextReaderImpl_NoNamespaceManager__Fields fields;
};
struct XmlTextReaderImpl_NoNamespaceManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetNamespacesInScope;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData LookupPrefix;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_NameTable;
  VirtualInvokeData get_DefaultNamespace;
  VirtualInvokeData PushScope;
  VirtualInvokeData PopScope;
  VirtualInvokeData AddNamespace;
  VirtualInvokeData RemoveNamespace;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData GetNamespacesInScope_1;
  VirtualInvokeData LookupNamespace_1;
  VirtualInvokeData LookupPrefix_1;
};
struct XmlTextReaderImpl_NoNamespaceManager__StaticFields {
};
struct XmlTextReaderImpl_NoNamespaceManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextReaderImpl_NoNamespaceManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextReaderImpl_NoNamespaceManager__VTable vtable;
};

struct __declspec(align(8)) XmlTextReaderImpl_DtdParserProxy__Fields {
  struct XmlTextReaderImpl * reader;
};
struct XmlTextReaderImpl_DtdParserProxy {
  struct XmlTextReaderImpl_DtdParserProxy__Class *klass;
  struct MonitorData *monitor;
  struct XmlTextReaderImpl_DtdParserProxy__Fields fields;
};
struct XmlTextReaderImpl_DtdParserProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode;
  VirtualInvokeData System_Xml_IDtdParserAdapterV1_get_Normalization;
  VirtualInvokeData System_Xml_IDtdParserAdapterV1_get_Namespaces;
  VirtualInvokeData System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation;
  VirtualInvokeData System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_NameTable;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_NamespaceResolver;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_BaseUri;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_ParsingBuffer;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_ParsingBufferLength;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_CurrentPosition;
  VirtualInvokeData System_Xml_IDtdParserAdapter_set_CurrentPosition;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_LineNo;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_LineStartPosition;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_IsEof;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_EntityStackLength;
  VirtualInvokeData System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized;
  VirtualInvokeData System_Xml_IDtdParserAdapter_ReadData;
  VirtualInvokeData System_Xml_IDtdParserAdapter_OnNewLine;
  VirtualInvokeData System_Xml_IDtdParserAdapter_ParseNumericCharRef;
  VirtualInvokeData System_Xml_IDtdParserAdapter_ParseNamedCharRef;
  VirtualInvokeData System_Xml_IDtdParserAdapter_ParsePI;
  VirtualInvokeData System_Xml_IDtdParserAdapter_ParseComment;
  VirtualInvokeData System_Xml_IDtdParserAdapter_PushEntity;
  VirtualInvokeData System_Xml_IDtdParserAdapter_PopEntity;
  VirtualInvokeData System_Xml_IDtdParserAdapter_PushExternalSubset;
  VirtualInvokeData System_Xml_IDtdParserAdapter_PushInternalDtd;
  VirtualInvokeData System_Xml_IDtdParserAdapter_OnSystemId;
  VirtualInvokeData System_Xml_IDtdParserAdapter_OnPublicId;
  VirtualInvokeData System_Xml_IDtdParserAdapter_Throw;
};
struct XmlTextReaderImpl_DtdParserProxy__StaticFields {
};
struct XmlTextReaderImpl_DtdParserProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextReaderImpl_DtdParserProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextReaderImpl_DtdParserProxy__VTable vtable;
};

struct IComparer_1_System_Object_ {
  struct IComparer_1_System_Object___Class *klass;
  struct MonitorData *monitor;
};
struct IComparer_1_System_Object___VTable {
  VirtualInvokeData Compare;
};
struct IComparer_1_System_Object___StaticFields {
};
struct IComparer_1_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComparer_1_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComparer_1_System_Object___VTable vtable;
};

struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer {
  struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class *klass;
  struct MonitorData *monitor;
};
struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__StaticFields {
  struct IComparer_1_System_Object_ * s_instance;
};
struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__VTable vtable;
};

struct XmlUtf8RawTextWriterIndent__Fields {
  struct XmlUtf8RawTextWriter__Fields _;
  int32_t indentLevel;
  bool newLineOnAttributes;
  struct String * indentChars;
  bool mixedContent;
  struct BitStack * mixedContentStack;
  enum ConformanceLevel__Enum conformanceLevel;
};
struct XmlUtf8RawTextWriterIndent {
  struct XmlUtf8RawTextWriterIndent__Class *klass;
  struct MonitorData *monitor;
  struct XmlUtf8RawTextWriterIndent__Fields fields;
};
struct XmlUtf8RawTextWriterIndent__VTable {
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
struct XmlUtf8RawTextWriterIndent__StaticFields {
};
struct XmlUtf8RawTextWriterIndent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlUtf8RawTextWriterIndent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlUtf8RawTextWriterIndent__VTable vtable;
};

struct __declspec(align(8)) XmlValidatingReader__Fields {
  struct XmlValidatingReaderImpl * impl;
};
struct XmlValidatingReader {
  struct XmlValidatingReader__Class *klass;
  struct MonitorData *monitor;
  struct XmlValidatingReader__Fields fields;
};
struct XmlValidatingReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_NodeType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_LocalName;
  VirtualInvokeData get_NamespaceURI;
  VirtualInvokeData get_Prefix;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Depth;
  VirtualInvokeData get_BaseURI;
  VirtualInvokeData get_IsEmptyElement;
  VirtualInvokeData get_IsDefault;
  VirtualInvokeData get_QuoteChar;
  VirtualInvokeData get_XmlSpace;
  VirtualInvokeData get_XmlLang;
  VirtualInvokeData get_SchemaInfo;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_AttributeCount;
  VirtualInvokeData GetAttribute;
  VirtualInvokeData GetAttribute_1;
  VirtualInvokeData GetAttribute_2;
  VirtualInvokeData MoveToAttribute;
  VirtualInvokeData MoveToAttribute_1;
  VirtualInvokeData MoveToFirstAttribute;
  VirtualInvokeData MoveToNextAttribute;
  VirtualInvokeData MoveToElement;
  VirtualInvokeData ReadAttributeValue;
  VirtualInvokeData Read;
  VirtualInvokeData get_EOF;
  VirtualInvokeData Close;
  VirtualInvokeData get_ReadState;
  VirtualInvokeData Skip;
  VirtualInvokeData get_NameTable;
  VirtualInvokeData LookupNamespace;
  VirtualInvokeData get_CanResolveEntity;
  VirtualInvokeData ResolveEntity;
  VirtualInvokeData get_CanReadValueChunk;
  VirtualInvokeData ReadValueChunk;
  VirtualInvokeData ReadString;
  VirtualInvokeData MoveToContent;
  VirtualInvokeData ReadStartElement;
  VirtualInvokeData ReadElementString;
  VirtualInvokeData ReadEndElement;
  VirtualInvokeData IsStartElement;
  VirtualInvokeData ReadInnerXml;
  VirtualInvokeData get_HasAttributes;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_NamespaceManager;
  VirtualInvokeData get_DtdInfo;
  VirtualInvokeData HasLineInfo;
  VirtualInvokeData get_LineNumber;
  VirtualInvokeData get_LinePosition;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
};
struct XmlValidatingReader__StaticFields {
};
struct XmlValidatingReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlValidatingReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlValidatingReader__VTable vtable;
};

enum XmlWellFormedWriter_SpecialAttribute__Enum : int32_t {
  XmlWellFormedWriter_SpecialAttribute__Enum_No = 0,
  XmlWellFormedWriter_SpecialAttribute__Enum_DefaultXmlns = 1,
  XmlWellFormedWriter_SpecialAttribute__Enum_PrefixedXmlns = 2,
  XmlWellFormedWriter_SpecialAttribute__Enum_XmlSpace = 3,
  XmlWellFormedWriter_SpecialAttribute__Enum_XmlLang = 4,
};
struct XmlWellFormedWriter_SpecialAttribute__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWellFormedWriter_SpecialAttribute__Enum value;
};
enum XmlWellFormedWriter_State__Enum : int32_t {
  XmlWellFormedWriter_State__Enum_Start = 0,
  XmlWellFormedWriter_State__Enum_TopLevel = 1,
  XmlWellFormedWriter_State__Enum_Document = 2,
  XmlWellFormedWriter_State__Enum_Element = 3,
  XmlWellFormedWriter_State__Enum_Content = 4,
  XmlWellFormedWriter_State__Enum_B64Content = 5,
  XmlWellFormedWriter_State__Enum_B64Attribute = 6,
  XmlWellFormedWriter_State__Enum_AfterRootEle = 7,
  XmlWellFormedWriter_State__Enum_Attribute = 8,
  XmlWellFormedWriter_State__Enum_SpecialAttr = 9,
  XmlWellFormedWriter_State__Enum_EndDocument = 10,
  XmlWellFormedWriter_State__Enum_RootLevelAttr = 11,
  XmlWellFormedWriter_State__Enum_RootLevelSpecAttr = 12,
  XmlWellFormedWriter_State__Enum_RootLevelB64Attr = 13,
  XmlWellFormedWriter_State__Enum_AfterRootLevelAttr = 14,
  XmlWellFormedWriter_State__Enum_Closed = 15,
  XmlWellFormedWriter_State__Enum_Error = 16,
  XmlWellFormedWriter_State__Enum_StartContent = 101,
  XmlWellFormedWriter_State__Enum_StartContentEle = 102,
  XmlWellFormedWriter_State__Enum_StartContentB64 = 103,
  XmlWellFormedWriter_State__Enum_StartDoc = 104,
  XmlWellFormedWriter_State__Enum_StartDocEle = 106,
  XmlWellFormedWriter_State__Enum_EndAttrSEle = 107,
  XmlWellFormedWriter_State__Enum_EndAttrEEle = 108,
  XmlWellFormedWriter_State__Enum_EndAttrSCont = 109,
  XmlWellFormedWriter_State__Enum_EndAttrSAttr = 111,
  XmlWellFormedWriter_State__Enum_PostB64Cont = 112,
  XmlWellFormedWriter_State__Enum_PostB64Attr = 113,
  XmlWellFormedWriter_State__Enum_PostB64RootAttr = 114,
  XmlWellFormedWriter_State__Enum_StartFragEle = 115,
  XmlWellFormedWriter_State__Enum_StartFragCont = 116,
  XmlWellFormedWriter_State__Enum_StartFragB64 = 117,
  XmlWellFormedWriter_State__Enum_StartRootLevelAttr = 118,
};
struct XmlWellFormedWriter_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWellFormedWriter_State__Enum value;
};
struct XmlWellFormedWriter__Fields {
  struct XmlWriter__Fields _;
  struct XmlWriter * writer;
  struct XmlRawWriter * rawWriter;
  struct IXmlNamespaceResolver * predefinedNamespaces;
  struct XmlWellFormedWriter_Namespace__Array * nsStack;
  int32_t nsTop;
  struct Dictionary_2_System_String_System_Int32_ * nsHashtable;
  bool useNsHashtable;
  struct XmlWellFormedWriter_ElementScope__Array * elemScopeStack;
  int32_t elemTop;
  struct XmlWellFormedWriter_AttrName__Array * attrStack;
  int32_t attrCount;
  struct Dictionary_2_System_String_System_Int32_ * attrHashTable;
  enum XmlWellFormedWriter_SpecialAttribute__Enum specAttr;
  struct XmlWellFormedWriter_AttributeValueCache * attrValueCache;
  struct String * curDeclPrefix;
  struct XmlWellFormedWriter_State__Enum__Array * stateTable;
  enum XmlWellFormedWriter_State__Enum currentState;
  bool checkCharacters;
  bool omitDuplNamespaces;
  bool writeEndDocumentOnClose;
  enum ConformanceLevel__Enum conformanceLevel;
  bool dtdWritten;
  bool xmlDeclFollows;
  struct XmlCharType xmlCharType;
  struct SecureStringHasher * hasher;
};
struct XmlWellFormedWriter {
  struct XmlWellFormedWriter__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter__Fields fields;
};
enum XmlWellFormedWriter_NamespaceKind__Enum : int32_t {
  XmlWellFormedWriter_NamespaceKind__Enum_Written = 0,
  XmlWellFormedWriter_NamespaceKind__Enum_NeedToWrite = 1,
  XmlWellFormedWriter_NamespaceKind__Enum_Implied = 2,
  XmlWellFormedWriter_NamespaceKind__Enum_Special = 3,
};
struct XmlWellFormedWriter_NamespaceKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWellFormedWriter_NamespaceKind__Enum value;
};
struct XmlWellFormedWriter_Namespace {
  struct String * prefix;
  struct String * namespaceUri;
  enum XmlWellFormedWriter_NamespaceKind__Enum kind;
  int32_t prevNsIndex;
};
struct XmlWellFormedWriter_Namespace__Boxed {
  struct XmlWellFormedWriter_Namespace__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_Namespace fields;
};
struct XmlWellFormedWriter_Namespace__Array {
  struct XmlWellFormedWriter_Namespace__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlWellFormedWriter_Namespace vector[32];
};
struct XmlWellFormedWriter_ElementScope {
  int32_t prevNSTop;
  struct String * prefix;
  struct String * localName;
  struct String * namespaceUri;
  enum XmlSpace__Enum xmlSpace;
  struct String * xmlLang;
};
struct XmlWellFormedWriter_ElementScope__Boxed {
  struct XmlWellFormedWriter_ElementScope__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_ElementScope fields;
};
struct XmlWellFormedWriter_ElementScope__Array {
  struct XmlWellFormedWriter_ElementScope__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlWellFormedWriter_ElementScope vector[32];
};
struct XmlWellFormedWriter_AttrName {
  struct String * prefix;
  struct String * namespaceUri;
  struct String * localName;
  int32_t prev;
};
struct XmlWellFormedWriter_AttrName__Boxed {
  struct XmlWellFormedWriter_AttrName__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_AttrName fields;
};
struct XmlWellFormedWriter_AttrName__Array {
  struct XmlWellFormedWriter_AttrName__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlWellFormedWriter_AttrName vector[32];
};
struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache__Fields {
  struct StringBuilder * stringValue;
  struct String * singleStringValue;
  struct XmlWellFormedWriter_AttributeValueCache_Item__Array * items;
  int32_t firstItem;
  int32_t lastItem;
};
struct XmlWellFormedWriter_AttributeValueCache {
  struct XmlWellFormedWriter_AttributeValueCache__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_AttributeValueCache__Fields fields;
};
enum XmlWellFormedWriter_AttributeValueCache_ItemType__Enum : int32_t {
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_EntityRef = 0,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_CharEntity = 1,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_SurrogateCharEntity = 2,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_Whitespace = 3,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_String = 4,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_StringChars = 5,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_Raw = 6,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_RawChars = 7,
  XmlWellFormedWriter_AttributeValueCache_ItemType__Enum_ValueString = 8,
};
struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWellFormedWriter_AttributeValueCache_ItemType__Enum value;
};
struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache_Item__Fields {
  enum XmlWellFormedWriter_AttributeValueCache_ItemType__Enum type;
  struct Object * data;
};
struct XmlWellFormedWriter_AttributeValueCache_Item {
  struct XmlWellFormedWriter_AttributeValueCache_Item__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_AttributeValueCache_Item__Fields fields;
};
struct XmlWellFormedWriter_AttributeValueCache_Item__Array {
  struct XmlWellFormedWriter_AttributeValueCache_Item__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlWellFormedWriter_AttributeValueCache_Item * vector[32];
};
struct XmlWellFormedWriter_State__Enum__Array {
  struct XmlWellFormedWriter_State__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum XmlWellFormedWriter_State__Enum vector[32];
};
struct WriteState__Enum__Array {
  struct WriteState__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum WriteState__Enum vector[32];
};
struct XmlWellFormedWriter_Namespace__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_Namespace__StaticFields {
};
struct XmlWellFormedWriter_Namespace__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_Namespace__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_Namespace__VTable vtable;
};
struct XmlWellFormedWriter_ElementScope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_ElementScope__StaticFields {
};
struct XmlWellFormedWriter_ElementScope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_ElementScope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_ElementScope__VTable vtable;
};
struct XmlWellFormedWriter_AttrName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_AttrName__StaticFields {
};
struct XmlWellFormedWriter_AttrName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_AttrName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_AttrName__VTable vtable;
};
struct XmlWellFormedWriter_AttributeValueCache_Item__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_AttributeValueCache_Item__StaticFields {
};
struct XmlWellFormedWriter_AttributeValueCache_Item__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_AttributeValueCache_Item__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_AttributeValueCache_Item__VTable vtable;
};
struct XmlWellFormedWriter_AttributeValueCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_AttributeValueCache__StaticFields {
};
struct XmlWellFormedWriter_AttributeValueCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_AttributeValueCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_AttributeValueCache__VTable vtable;
};
struct XmlWellFormedWriter__VTable {
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
};}