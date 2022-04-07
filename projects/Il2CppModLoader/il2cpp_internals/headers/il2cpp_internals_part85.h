namespace app {
struct ConfigurationException__VTable {
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
  VirtualInvokeData get_BareMessage;
  VirtualInvokeData get_Filename;
  VirtualInvokeData get_Line;
};
struct ConfigurationException__StaticFields {
};
struct ConfigurationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfigurationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfigurationException__VTable vtable;
};

struct __declspec(align(8)) XmlNode__Fields {
  struct XmlNode * parentNode;
};
struct XmlNode {
  struct XmlNode__Class *klass;
  struct MonitorData *monitor;
  struct XmlNode__Fields fields;
};
struct XmlDocument__Fields {
  struct XmlNode__Fields _;
  struct XmlImplementation * implementation;
  struct DomNameTable * domNameTable;
  struct XmlLinkedNode * lastChild;
  struct XmlNamedNodeMap * entities;
  struct Hashtable * htElementIdMap;
  struct Hashtable * htElementIDAttrDecl;
  struct SchemaInfo * schemaInfo;
  struct XmlSchemaSet * schemas;
  bool reportValidity;
  bool actualLoadingStatus;
  struct XmlNodeChangedEventHandler * onNodeInsertingDelegate;
  struct XmlNodeChangedEventHandler * onNodeInsertedDelegate;
  struct XmlNodeChangedEventHandler * onNodeRemovingDelegate;
  struct XmlNodeChangedEventHandler * onNodeRemovedDelegate;
  struct XmlNodeChangedEventHandler * onNodeChangingDelegate;
  struct XmlNodeChangedEventHandler * onNodeChangedDelegate;
  bool fEntRefNodesPresent;
  bool fCDataNodesPresent;
  bool preserveWhitespace;
  bool isLoading;
  struct String * strDocumentName;
  struct String * strDocumentFragmentName;
  struct String * strCommentName;
  struct String * strTextName;
  struct String * strCDataSectionName;
  struct String * strEntityName;
  struct String * strID;
  struct String * strXmlns;
  struct String * strXml;
  struct String * strSpace;
  struct String * strLang;
  struct String * strEmpty;
  struct String * strNonSignificantWhitespaceName;
  struct String * strSignificantWhitespaceName;
  struct String * strReservedXmlns;
  struct String * strReservedXml;
  struct String * baseURI;
  struct XmlResolver * resolver;
  bool bSetResolver;
  struct Object * objLock;
};
struct XmlDocument {
  struct XmlDocument__Class *klass;
  struct MonitorData *monitor;
  struct XmlDocument__Fields fields;
};
struct __declspec(align(8)) XmlImplementation__Fields {
  struct XmlNameTable * nameTable;
};
struct XmlImplementation {
  struct XmlImplementation__Class *klass;
  struct MonitorData *monitor;
  struct XmlImplementation__Fields fields;
};
struct XmlNameTable {
  struct XmlNameTable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) NameTable__Fields {
  struct NameTable_Entry__Array * entries;
  int32_t count;
  int32_t mask;
  int32_t hashCodeRandomizer;
};
struct NameTable {
  struct NameTable__Class *klass;
  struct MonitorData *monitor;
  struct NameTable__Fields fields;
};
struct __declspec(align(8)) NameTable_Entry__Fields {
  struct String * str;
  int32_t hashCode;
  struct NameTable_Entry * next;
};
struct NameTable_Entry {
  struct NameTable_Entry__Class *klass;
  struct MonitorData *monitor;
  struct NameTable_Entry__Fields fields;
};
struct NameTable_Entry__Array {
  struct NameTable_Entry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NameTable_Entry * vector[32];
};
struct __declspec(align(8)) DomNameTable__Fields {
  struct XmlName__Array * entries;
  int32_t count;
  int32_t mask;
  struct XmlDocument * ownerDocument;
  struct XmlNameTable * nameTable;
};
struct DomNameTable {
  struct DomNameTable__Class *klass;
  struct MonitorData *monitor;
  struct DomNameTable__Fields fields;
};
struct __declspec(align(8)) XmlName__Fields {
  struct String * prefix;
  struct String * localName;
  struct String * ns;
  struct String * name;
  int32_t hashCode;
  struct XmlDocument * ownerDoc;
  struct XmlName * next;
};
struct XmlName {
  struct XmlName__Class *klass;
  struct MonitorData *monitor;
  struct XmlName__Fields fields;
};
struct XmlName__Array {
  struct XmlName__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlName * vector[32];
};
enum XmlSchemaValidity__Enum : int32_t {
  XmlSchemaValidity__Enum_NotKnown = 0,
  XmlSchemaValidity__Enum_Valid = 1,
  XmlSchemaValidity__Enum_Invalid = 2,
};
struct XmlSchemaValidity__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaValidity__Enum value;
};
struct __declspec(align(8)) XmlSchemaObject__Fields {
  int32_t lineNum;
  int32_t linePos;
  struct String * sourceUri;
  struct XmlSerializerNamespaces * namespaces;
  struct XmlSchemaObject * parent;
  bool isProcessing;
};
struct XmlSchemaObject {
  struct XmlSchemaObject__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObject__Fields fields;
};
struct XmlSchemaAnnotated__Fields {
  struct XmlSchemaObject__Fields _;
  struct String * id;
  struct XmlSchemaAnnotation * annotation;
  struct XmlAttribute__Array * moreAttributes;
};
struct XmlSchemaAnnotated {
  struct XmlSchemaAnnotated__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAnnotated__Fields fields;
};
enum XmlSchemaDerivationMethod__Enum : int32_t {
  XmlSchemaDerivationMethod__Enum_Empty = 0,
  XmlSchemaDerivationMethod__Enum_Substitution = 1,
  XmlSchemaDerivationMethod__Enum_Extension = 2,
  XmlSchemaDerivationMethod__Enum_Restriction = 4,
  XmlSchemaDerivationMethod__Enum_List = 8,
  XmlSchemaDerivationMethod__Enum_Union = 16,
  XmlSchemaDerivationMethod__Enum_All = 255,
  XmlSchemaDerivationMethod__Enum_None = 256,
};
struct XmlSchemaDerivationMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaDerivationMethod__Enum value;
};
enum XmlSchemaContentType__Enum : int32_t {
  XmlSchemaContentType__Enum_TextOnly = 0,
  XmlSchemaContentType__Enum_Empty = 1,
  XmlSchemaContentType__Enum_ElementOnly = 2,
  XmlSchemaContentType__Enum_Mixed = 3,
};
struct XmlSchemaContentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaContentType__Enum value;
};
struct XmlSchemaType__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * name;
  enum XmlSchemaDerivationMethod__Enum final_1;
  enum XmlSchemaDerivationMethod__Enum derivedBy;
  struct XmlSchemaType * baseSchemaType;
  struct XmlSchemaDatatype * datatype;
  enum XmlSchemaDerivationMethod__Enum finalResolved;
  struct SchemaElementDecl * elementDecl;
  struct XmlQualifiedName * qname;
  struct XmlSchemaType * redefined;
  enum XmlSchemaContentType__Enum contentType;
};
struct XmlSchemaType {
  struct XmlSchemaType__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaType__Fields fields;
};
struct XmlSchemaSimpleType__Fields {
  struct XmlSchemaType__Fields _;
  struct XmlSchemaSimpleTypeContent * content;
};
struct XmlSchemaSimpleType {
  struct XmlSchemaSimpleType__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSimpleType__Fields fields;
};
struct __declspec(align(8)) XmlSerializerNamespaces__Fields {
  struct Hashtable * namespaces;
};
struct XmlSerializerNamespaces {
  struct XmlSerializerNamespaces__Class *klass;
  struct MonitorData *monitor;
  struct XmlSerializerNamespaces__Fields fields;
};
struct XmlSchemaObjectCollection__Fields {
  struct CollectionBase__Fields _;
  struct XmlSchemaObject * parent;
};
struct XmlSchemaObjectCollection {
  struct XmlSchemaObjectCollection__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectCollection__Fields fields;
};
struct XmlAttribute__Fields {
  struct XmlNode__Fields _;
  struct XmlName * name;
  struct XmlLinkedNode * lastChild;
};
struct XmlAttribute {
  struct XmlAttribute__Class *klass;
  struct MonitorData *monitor;
  struct XmlAttribute__Fields fields;
};
struct XmlAttribute__Array {
  struct XmlAttribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlAttribute * vector[32];
};
struct XmlLinkedNode__Fields {
  struct XmlNode__Fields _;
  struct XmlLinkedNode * next;
};
struct XmlLinkedNode {
  struct XmlLinkedNode__Class *klass;
  struct MonitorData *monitor;
  struct XmlLinkedNode__Fields fields;
};
struct XmlCharacterData__Fields {
  struct XmlLinkedNode__Fields _;
  struct String * data;
};
struct XmlCharacterData {
  struct XmlCharacterData__Class *klass;
  struct MonitorData *monitor;
  struct XmlCharacterData__Fields fields;
};
struct XmlCDataSection__Fields {
  struct XmlCharacterData__Fields _;
};
struct XmlCDataSection {
  struct XmlCDataSection__Class *klass;
  struct MonitorData *monitor;
  struct XmlCDataSection__Fields fields;
};
enum XmlNodeType__Enum : int32_t {
  XmlNodeType__Enum_None = 0,
  XmlNodeType__Enum_Element = 1,
  XmlNodeType__Enum_Attribute = 2,
  XmlNodeType__Enum_Text = 3,
  XmlNodeType__Enum_CDATA = 4,
  XmlNodeType__Enum_EntityReference = 5,
  XmlNodeType__Enum_Entity = 6,
  XmlNodeType__Enum_ProcessingInstruction = 7,
  XmlNodeType__Enum_Comment = 8,
  XmlNodeType__Enum_Document = 9,
  XmlNodeType__Enum_DocumentType = 10,
  XmlNodeType__Enum_DocumentFragment = 11,
  XmlNodeType__Enum_Notation = 12,
  XmlNodeType__Enum_Whitespace = 13,
  XmlNodeType__Enum_SignificantWhitespace = 14,
  XmlNodeType__Enum_EndElement = 15,
  XmlNodeType__Enum_EndEntity = 16,
  XmlNodeType__Enum_XmlDeclaration = 17,
};
struct XmlNodeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlNodeType__Enum value;
};
struct XmlNodeList {
  struct XmlNodeList__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XmlChildNodes__Fields {
  struct XmlNode * container;
};
struct XmlChildNodes {
  struct XmlChildNodes__Class *klass;
  struct MonitorData *monitor;
  struct XmlChildNodes__Fields fields;
};
struct XmlNamedNodeMap_SmallXmlNodeList {
  struct Object * field;
};
struct XmlNamedNodeMap_SmallXmlNodeList__Boxed {
  struct XmlNamedNodeMap_SmallXmlNodeList__Class *klass;
  struct MonitorData *monitor;
  struct XmlNamedNodeMap_SmallXmlNodeList fields;
};
struct __declspec(align(8)) XmlNamedNodeMap__Fields {
  struct XmlNode * parent;
  struct XmlNamedNodeMap_SmallXmlNodeList nodes;
};
struct XmlNamedNodeMap {
  struct XmlNamedNodeMap__Class *klass;
  struct MonitorData *monitor;
  struct XmlNamedNodeMap__Fields fields;
};
struct XmlAttributeCollection__Fields {
  struct XmlNamedNodeMap__Fields _;
};
struct XmlAttributeCollection {
  struct XmlAttributeCollection__Class *klass;
  struct MonitorData *monitor;
  struct XmlAttributeCollection__Fields fields;
};
struct IXmlSchemaInfo {
  struct IXmlSchemaInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XmlWriter__Fields {
  struct Char__Array * writeNodeBuffer;
};
struct XmlWriter {
  struct XmlWriter__Class *klass;
  struct MonitorData *monitor;
  struct XmlWriter__Fields fields;
};
struct XmlRawWriter__Fields {
  struct XmlWriter__Fields _;
  struct XmlRawWriterBase64Encoder * base64Encoder;
  struct IXmlNamespaceResolver * resolver;
};
struct XmlRawWriter {
  struct XmlRawWriter__Class *klass;
  struct MonitorData *monitor;
  struct XmlRawWriter__Fields fields;
};
struct __declspec(align(8)) Base64Encoder__Fields {
  struct Byte__Array * leftOverBytes;
  int32_t leftOverBytesCount;
  struct Char__Array * charsLine;
};
struct Base64Encoder {
  struct Base64Encoder__Class *klass;
  struct MonitorData *monitor;
  struct Base64Encoder__Fields fields;
};
struct XmlRawWriterBase64Encoder__Fields {
  struct Base64Encoder__Fields _;
  struct XmlRawWriter * rawWriter;
};
struct XmlRawWriterBase64Encoder {
  struct XmlRawWriterBase64Encoder__Class *klass;
  struct MonitorData *monitor;
  struct XmlRawWriterBase64Encoder__Fields fields;
};
struct IXmlNamespaceResolver {
  struct IXmlNamespaceResolver__Class *klass;
  struct MonitorData *monitor;
};
struct XmlCharType {
  struct Byte__Array * charProperties;
};
struct XmlCharType__Boxed {
  struct XmlCharType__Class *klass;
  struct MonitorData *monitor;
  struct XmlCharType fields;
};
enum NewLineHandling__Enum : int32_t {
  NewLineHandling__Enum_Replace = 0,
  NewLineHandling__Enum_Entitize = 1,
  NewLineHandling__Enum_None = 2,
};
struct NewLineHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NewLineHandling__Enum value;
};
enum XmlStandalone__Enum : int32_t {
  XmlStandalone__Enum_Omit = 0,
  XmlStandalone__Enum_Yes = 1,
  XmlStandalone__Enum_No = 2,
};
struct XmlStandalone__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlStandalone__Enum value;
};
enum XmlOutputMethod__Enum : int32_t {
  XmlOutputMethod__Enum_Xml = 0,
  XmlOutputMethod__Enum_Html = 1,
  XmlOutputMethod__Enum_Text = 2,
  XmlOutputMethod__Enum_AutoDetect = 3,
};
struct XmlOutputMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlOutputMethod__Enum value;
};
struct XmlEncodedRawTextWriter__Fields {
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
  int32_t bufBytesUsed;
  struct Char__Array * bufChars;
  struct Encoder * encoder;
  struct TextWriter * writer;
  bool trackTextContent;
  bool inTextContent;
  int32_t lastMarkPos;
  struct Int32__Array * textContentMarks;
  struct CharEntityEncoderFallback * charEntityFallback;
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
struct XmlEncodedRawTextWriter {
  struct XmlEncodedRawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct XmlEncodedRawTextWriter__Fields fields;
};
enum ElementProperties__Enum : uint32_t {
  ElementProperties__Enum_DEFAULT = 0,
  ElementProperties__Enum_URI_PARENT = 1,
  ElementProperties__Enum_BOOL_PARENT = 2,
  ElementProperties__Enum_NAME_PARENT = 4,
  ElementProperties__Enum_EMPTY = 8,
  ElementProperties__Enum_NO_ENTITIES = 16,
  ElementProperties__Enum_HEAD = 32,
  ElementProperties__Enum_BLOCK_WS = 64,
  ElementProperties__Enum_HAS_NS = 128,
};
struct ElementProperties__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ElementProperties__Enum value;
};
enum AttributeProperties__Enum : uint32_t {
  AttributeProperties__Enum_DEFAULT = 0,
  AttributeProperties__Enum_URI = 1,
  AttributeProperties__Enum_BOOLEAN = 2,
  AttributeProperties__Enum_NAME = 4,
};
struct AttributeProperties__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AttributeProperties__Enum value;
};
struct HtmlEncodedRawTextWriter__Fields {
  struct XmlEncodedRawTextWriter__Fields _;
  struct ByteStack * elementScope;
  enum ElementProperties__Enum currentElementProperties;
  enum AttributeProperties__Enum currentAttributeProperties;
  bool endsWithAmpersand;
  struct Byte__Array * uriEscapingBuffer;
  struct String * mediaType;
  bool doNotEscapeUriAttributes;
};
struct HtmlEncodedRawTextWriter {
  struct HtmlEncodedRawTextWriter__Class *klass;
  struct MonitorData *monitor;
  struct HtmlEncodedRawTextWriter__Fields fields;
};
struct CharEntityEncoderFallback__Fields {
  struct EncoderFallback__Fields _;
  struct CharEntityEncoderFallbackBuffer * fallbackBuffer;
  struct Int32__Array * textContentMarks;
  int32_t endMarkPos;
  int32_t curMarkPos;
  int32_t startOffset;
};
struct CharEntityEncoderFallback {
  struct CharEntityEncoderFallback__Class *klass;
  struct MonitorData *monitor;
  struct CharEntityEncoderFallback__Fields fields;
};
struct CharEntityEncoderFallbackBuffer__Fields {
  struct EncoderFallbackBuffer__Fields _;
  struct CharEntityEncoderFallback * parent;
  struct String * charEntity;
  int32_t charEntityIndex;
};
struct CharEntityEncoderFallbackBuffer {
  struct CharEntityEncoderFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct CharEntityEncoderFallbackBuffer__Fields fields;
};
enum WriteState__Enum : int32_t {
  WriteState__Enum_Start = 0,
  WriteState__Enum_Prolog = 1,
  WriteState__Enum_Element = 2,
  WriteState__Enum_Attribute = 3,
  WriteState__Enum_Content = 4,
  WriteState__Enum_Closed = 5,
  WriteState__Enum_Error = 6,
};
struct WriteState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WriteState__Enum value;
};
struct XmlReader {
  struct XmlReader__Class *klass;
  struct MonitorData *monitor;
};
enum ConformanceLevel__Enum : int32_t {
  ConformanceLevel__Enum_Auto = 0,
  ConformanceLevel__Enum_Fragment = 1,
  ConformanceLevel__Enum_Document = 2,
};
struct ConformanceLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConformanceLevel__Enum value;
};
enum DtdProcessing__Enum : int32_t {
  DtdProcessing__Enum_Prohibit = 0,
  DtdProcessing__Enum_Ignore = 1,
  DtdProcessing__Enum_Parse = 2,
};
struct DtdProcessing__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DtdProcessing__Enum value;
};
enum ValidationType__Enum : int32_t {
  ValidationType__Enum_None = 0,
  ValidationType__Enum_Auto = 1,
  ValidationType__Enum_DTD = 2,
  ValidationType__Enum_XDR = 3,
  ValidationType__Enum_Schema = 4,
};
struct ValidationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ValidationType__Enum value;
};
enum XmlSchemaValidationFlags__Enum : int32_t {
  XmlSchemaValidationFlags__Enum_None = 0,
  XmlSchemaValidationFlags__Enum_ProcessInlineSchema = 1,
  XmlSchemaValidationFlags__Enum_ProcessSchemaLocation = 2,
  XmlSchemaValidationFlags__Enum_ReportValidationWarnings = 4,
  XmlSchemaValidationFlags__Enum_ProcessIdentityConstraints = 8,
  XmlSchemaValidationFlags__Enum_AllowXmlAttributes = 16,
};
struct XmlSchemaValidationFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaValidationFlags__Enum value;
};
struct __declspec(align(8)) XmlReaderSettings__Fields {
  bool useAsync;
  struct XmlNameTable * nameTable;
  struct XmlResolver * xmlResolver;
  int32_t lineNumberOffset;
  int32_t linePositionOffset;
  enum ConformanceLevel__Enum conformanceLevel;
  bool checkCharacters;
  int64_t maxCharactersInDocument;
  int64_t maxCharactersFromEntities;
  bool ignoreWhitespace;
  bool ignorePIs;
  bool ignoreComments;
  enum DtdProcessing__Enum dtdProcessing;
  enum ValidationType__Enum validationType;
  enum XmlSchemaValidationFlags__Enum validationFlags;
  struct XmlSchemaSet * schemas;
  struct ValidationEventHandler * valEventHandler;
  bool closeInput;
  bool isReadOnly;
  bool _IsXmlResolverSet_k__BackingField;
};
struct XmlReaderSettings {
  struct XmlReaderSettings__Class *klass;
  struct MonitorData *monitor;
  struct XmlReaderSettings__Fields fields;
};
struct XmlResolver {
  struct XmlResolver__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XmlUrlResolver__Fields {
  struct ICredentials * _credentials;
  struct IWebProxy * _proxy;
  struct RequestCachePolicy * _cachePolicy;
};
struct XmlUrlResolver {
  struct XmlUrlResolver__Class *klass;
  struct MonitorData *monitor;
  struct XmlUrlResolver__Fields fields;
};
struct __declspec(align(8)) XmlSchemaSet__Fields {
  struct XmlNameTable * nameTable;
  struct SchemaNames * schemaNames;
  struct SortedList * schemas;
  struct ValidationEventHandler * internalEventHandler;
  struct ValidationEventHandler * eventHandler;
  bool isCompiled;
  struct Hashtable * schemaLocations;
  struct Hashtable * chameleonSchemas;
  struct Hashtable * targetNamespaces;
  bool compileAll;
  struct SchemaInfo * cachedCompiledInfo;
  struct XmlReaderSettings * readerSettings;
  struct XmlSchema * schemaForSchema;
  struct XmlSchemaCompilationSettings * compilationSettings;
  struct XmlSchemaObjectTable * elements;
  struct XmlSchemaObjectTable * attributes;
  struct XmlSchemaObjectTable * schemaTypes;
  struct XmlSchemaObjectTable * substitutionGroups;
  struct XmlSchemaObjectTable * typeExtensions;
  struct Object * internalSyncObject;
};
struct XmlSchemaSet {
  struct XmlSchemaSet__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSet__Fields fields;
};
struct __declspec(align(8)) SchemaNames__Fields {
  struct XmlNameTable * nameTable;
  struct String * NsDataType;
  struct String * NsDataTypeAlias;
  struct String * NsDataTypeOld;
  struct String * NsXml;
  struct String * NsXmlNs;
  struct String * NsXdr;
  struct String * NsXdrAlias;
  struct String * NsXs;
  struct String * NsXsi;
  struct String * XsiType;
  struct String * XsiNil;
  struct String * XsiSchemaLocation;
  struct String * XsiNoNamespaceSchemaLocation;
  struct String * XsdSchema;
  struct String * XdrSchema;
  struct XmlQualifiedName * QnPCData;
  struct XmlQualifiedName * QnXml;
  struct XmlQualifiedName * QnXmlNs;
  struct XmlQualifiedName * QnDtDt;
  struct XmlQualifiedName * QnXmlLang;
  struct XmlQualifiedName * QnName;
  struct XmlQualifiedName * QnType;
  struct XmlQualifiedName * QnMaxOccurs;
  struct XmlQualifiedName * QnMinOccurs;
  struct XmlQualifiedName * QnInfinite;
  struct XmlQualifiedName * QnModel;
  struct XmlQualifiedName * QnOpen;
  struct XmlQualifiedName * QnClosed;
  struct XmlQualifiedName * QnContent;
  struct XmlQualifiedName * QnMixed;
  struct XmlQualifiedName * QnEmpty;
  struct XmlQualifiedName * QnEltOnly;
  struct XmlQualifiedName * QnTextOnly;
  struct XmlQualifiedName * QnOrder;
  struct XmlQualifiedName * QnSeq;
  struct XmlQualifiedName * QnOne;
  struct XmlQualifiedName * QnMany;
  struct XmlQualifiedName * QnRequired;
  struct XmlQualifiedName * QnYes;
  struct XmlQualifiedName * QnNo;
  struct XmlQualifiedName * QnString;
  struct XmlQualifiedName * QnID;
  struct XmlQualifiedName * QnIDRef;
  struct XmlQualifiedName * QnIDRefs;
  struct XmlQualifiedName * QnEntity;
  struct XmlQualifiedName * QnEntities;
  struct XmlQualifiedName * QnNmToken;
  struct XmlQualifiedName * QnNmTokens;
  struct XmlQualifiedName * QnEnumeration;
  struct XmlQualifiedName * QnDefault;
  struct XmlQualifiedName * QnXdrSchema;
  struct XmlQualifiedName * QnXdrElementType;
  struct XmlQualifiedName * QnXdrElement;
  struct XmlQualifiedName * QnXdrGroup;
  struct XmlQualifiedName * QnXdrAttributeType;
  struct XmlQualifiedName * QnXdrAttribute;
  struct XmlQualifiedName * QnXdrDataType;
  struct XmlQualifiedName * QnXdrDescription;
  struct XmlQualifiedName * QnXdrExtends;
  struct XmlQualifiedName * QnXdrAliasSchema;
  struct XmlQualifiedName * QnDtType;
  struct XmlQualifiedName * QnDtValues;
  struct XmlQualifiedName * QnDtMaxLength;
  struct XmlQualifiedName * QnDtMinLength;
  struct XmlQualifiedName * QnDtMax;
  struct XmlQualifiedName * QnDtMin;
  struct XmlQualifiedName * QnDtMinExclusive;
  struct XmlQualifiedName * QnDtMaxExclusive;
  struct XmlQualifiedName * QnTargetNamespace;
  struct XmlQualifiedName * QnVersion;
  struct XmlQualifiedName * QnFinalDefault;
  struct XmlQualifiedName * QnBlockDefault;
  struct XmlQualifiedName * QnFixed;
  struct XmlQualifiedName * QnAbstract;
  struct XmlQualifiedName * QnBlock;
  struct XmlQualifiedName * QnSubstitutionGroup;
  struct XmlQualifiedName * QnFinal;
  struct XmlQualifiedName * QnNillable;
  struct XmlQualifiedName * QnRef;
  struct XmlQualifiedName * QnBase;
  struct XmlQualifiedName * QnDerivedBy;
  struct XmlQualifiedName * QnNamespace;
  struct XmlQualifiedName * QnProcessContents;
  struct XmlQualifiedName * QnRefer;
  struct XmlQualifiedName * QnPublic;
  struct XmlQualifiedName * QnSystem;
  struct XmlQualifiedName * QnSchemaLocation;
  struct XmlQualifiedName * QnValue;
  struct XmlQualifiedName * QnUse;
  struct XmlQualifiedName * QnForm;
  struct XmlQualifiedName * QnElementFormDefault;
  struct XmlQualifiedName * QnAttributeFormDefault;
  struct XmlQualifiedName * QnItemType;
  struct XmlQualifiedName * QnMemberTypes;
  struct XmlQualifiedName * QnXPath;
  struct XmlQualifiedName * QnXsdSchema;
  struct XmlQualifiedName * QnXsdAnnotation;
  struct XmlQualifiedName * QnXsdInclude;
  struct XmlQualifiedName * QnXsdImport;
  struct XmlQualifiedName * QnXsdElement;
  struct XmlQualifiedName * QnXsdAttribute;
  struct XmlQualifiedName * QnXsdAttributeGroup;
  struct XmlQualifiedName * QnXsdAnyAttribute;
  struct XmlQualifiedName * QnXsdGroup;
  struct XmlQualifiedName * QnXsdAll;
  struct XmlQualifiedName * QnXsdChoice;
  struct XmlQualifiedName * QnXsdSequence;
  struct XmlQualifiedName * QnXsdAny;
  struct XmlQualifiedName * QnXsdNotation;
  struct XmlQualifiedName * QnXsdSimpleType;
  struct XmlQualifiedName * QnXsdComplexType;
  struct XmlQualifiedName * QnXsdUnique;
  struct XmlQualifiedName * QnXsdKey;
  struct XmlQualifiedName * QnXsdKeyRef;
  struct XmlQualifiedName * QnXsdSelector;
  struct XmlQualifiedName * QnXsdField;
  struct XmlQualifiedName * QnXsdMinExclusive;
  struct XmlQualifiedName * QnXsdMinInclusive;
  struct XmlQualifiedName * QnXsdMaxInclusive;
  struct XmlQualifiedName * QnXsdMaxExclusive;
  struct XmlQualifiedName * QnXsdTotalDigits;
  struct XmlQualifiedName * QnXsdFractionDigits;
  struct XmlQualifiedName * QnXsdLength;
  struct XmlQualifiedName * QnXsdMinLength;
  struct XmlQualifiedName * QnXsdMaxLength;
  struct XmlQualifiedName * QnXsdEnumeration;
  struct XmlQualifiedName * QnXsdPattern;
  struct XmlQualifiedName * QnXsdDocumentation;
  struct XmlQualifiedName * QnXsdAppinfo;
  struct XmlQualifiedName * QnSource;
  struct XmlQualifiedName * QnXsdComplexContent;
  struct XmlQualifiedName * QnXsdSimpleContent;
  struct XmlQualifiedName * QnXsdRestriction;
  struct XmlQualifiedName * QnXsdExtension;
  struct XmlQualifiedName * QnXsdUnion;
  struct XmlQualifiedName * QnXsdList;
  struct XmlQualifiedName * QnXsdWhiteSpace;
  struct XmlQualifiedName * QnXsdRedefine;
  struct XmlQualifiedName * QnXsdAnyType;
  struct XmlQualifiedName__Array * TokenToQName;
};
struct SchemaNames {
  struct SchemaNames__Class *klass;
  struct MonitorData *monitor;
  struct SchemaNames__Fields fields;
};
struct __declspec(align(8)) XmlQualifiedName__Fields {
  struct String * name;
  struct String * ns;
  int32_t hash;
};
struct XmlQualifiedName {
  struct XmlQualifiedName__Class *klass;
  struct MonitorData *monitor;
  struct XmlQualifiedName__Fields fields;
};
struct XmlQualifiedName_HashCodeOfStringDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct XmlQualifiedName_HashCodeOfStringDelegate {
  struct XmlQualifiedName_HashCodeOfStringDelegate__Class *klass;
  struct MonitorData *monitor;
  struct XmlQualifiedName_HashCodeOfStringDelegate__Fields fields;
};
struct XmlQualifiedName__Array {
  struct XmlQualifiedName__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlQualifiedName * vector[32];
};
struct ValidationEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct ValidationEventHandler {
  struct ValidationEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct ValidationEventHandler__Fields fields;
};
enum XmlSeverityType__Enum : int32_t {
  XmlSeverityType__Enum_Error = 0,
  XmlSeverityType__Enum_Warning = 1,
};
struct XmlSeverityType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSeverityType__Enum value;
};
struct __declspec(align(8)) ValidationEventArgs__Fields {
  struct XmlSchemaException * ex;
  enum XmlSeverityType__Enum severity;
};
struct ValidationEventArgs {
  struct ValidationEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ValidationEventArgs__Fields fields;
};
struct XmlSchemaException__Fields {
  struct SystemException__Fields _;
  struct String * res;
  struct String__Array * args;
  struct String * sourceUri;
  int32_t lineNumber;
  int32_t linePosition;
  struct XmlSchemaObject * sourceSchemaObject;
  struct String * message;
};
struct XmlSchemaException {
  struct XmlSchemaException__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaException__Fields fields;
};
enum SchemaType__Enum : int32_t {
  SchemaType__Enum_None = 0,
  SchemaType__Enum_DTD = 1,
  SchemaType__Enum_XDR = 2,
  SchemaType__Enum_XSD = 3,
};
struct SchemaType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaType__Enum value;
};
struct __declspec(align(8)) SchemaInfo__Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * elementDecls;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * undeclaredElementDecls;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * generalEntities;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * parameterEntities;
  struct XmlQualifiedName * docTypeName;
  struct String * internalDtdSubset;
  bool hasNonCDataAttributes;
  bool hasDefaultAttributes;
  struct Dictionary_2_System_String_System_Boolean_ * targetNamespaces;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * attributeDecls;
  int32_t errorCount;
  enum SchemaType__Enum schemaType;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * elementDeclsByType;
  struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ * notations;
};
struct SchemaInfo {
  struct SchemaInfo__Class *klass;
  struct MonitorData *monitor;
  struct SchemaInfo__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  struct SchemaElementDecl * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ vector[32];
};
enum SchemaDeclBase_Use__Enum : int32_t {
  SchemaDeclBase_Use__Enum_Default = 0,
  SchemaDeclBase_Use__Enum_Required = 1,
  SchemaDeclBase_Use__Enum_Implied = 2,
  SchemaDeclBase_Use__Enum_Fixed = 3,
  SchemaDeclBase_Use__Enum_RequiredFixed = 4,
};
struct SchemaDeclBase_Use__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaDeclBase_Use__Enum value;
};
struct __declspec(align(8)) SchemaDeclBase__Fields {
  struct XmlQualifiedName * name;
  struct String * prefix;
  bool isDeclaredInExternal;
  enum SchemaDeclBase_Use__Enum presence;
  struct XmlSchemaType * schemaType;
  struct XmlSchemaDatatype * datatype;
  struct String * defaultValueRaw;
  struct Object * defaultValueTyped;
  int64_t maxLength;
  int64_t minLength;
  struct List_1_System_String_ * values;
};
struct SchemaDeclBase {
  struct SchemaDeclBase__Class *klass;
  struct MonitorData *monitor;
  struct SchemaDeclBase__Fields fields;
};
struct SchemaElementDecl__Fields {
  struct SchemaDeclBase__Fields _;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * attdefs;
  struct List_1_System_Xml_IDtdDefaultAttributeInfo_ * defaultAttdefs;
  bool isIdDeclared;
  bool hasNonCDataAttribute;
  bool isAbstract;
  bool isNillable;
  bool hasRequiredAttribute;
  bool isNotationDeclared;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ * prohibitedAttributes;
  struct ContentValidator * contentValidator;
  struct XmlSchemaAnyAttribute * anyAttribute;
  enum XmlSchemaDerivationMethod__Enum block;
  struct CompiledIdentityConstraint__Array * constraints;
  struct XmlSchemaElement * schemaElement;
};}