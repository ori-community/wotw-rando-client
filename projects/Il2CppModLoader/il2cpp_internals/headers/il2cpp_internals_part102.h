namespace app {
struct XmlWellFormedWriter__StaticFields {
  struct String__Array * stateName;
  struct String__Array * tokenName;
  struct WriteState__Enum__Array * state2WriteState;
  struct XmlWellFormedWriter_State__Enum__Array * StateTableDocument;
  struct XmlWellFormedWriter_State__Enum__Array * StateTableAuto;
};
struct XmlWellFormedWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter__VTable vtable;
};

struct XmlException__Fields {
  struct SystemException__Fields _;
  struct String * res;
  struct String__Array * args;
  int32_t lineNumber;
  int32_t linePosition;
  struct String * sourceUri;
  struct String * message;
};
struct XmlException {
  struct XmlException__Class *klass;
  struct MonitorData *monitor;
  struct XmlException__Fields fields;
};
struct XmlException__VTable {
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
struct XmlException__StaticFields {
};
struct XmlException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlException__VTable vtable;
};

enum XmlWellFormedWriter_Token__Enum : int32_t {
  XmlWellFormedWriter_Token__Enum_StartDocument = 0,
  XmlWellFormedWriter_Token__Enum_EndDocument = 1,
  XmlWellFormedWriter_Token__Enum_PI = 2,
  XmlWellFormedWriter_Token__Enum_Comment = 3,
  XmlWellFormedWriter_Token__Enum_Dtd = 4,
  XmlWellFormedWriter_Token__Enum_StartElement = 5,
  XmlWellFormedWriter_Token__Enum_EndElement = 6,
  XmlWellFormedWriter_Token__Enum_StartAttribute = 7,
  XmlWellFormedWriter_Token__Enum_EndAttribute = 8,
  XmlWellFormedWriter_Token__Enum_Text = 9,
  XmlWellFormedWriter_Token__Enum_CData = 10,
  XmlWellFormedWriter_Token__Enum_AtomicValue = 11,
  XmlWellFormedWriter_Token__Enum_Base64 = 12,
  XmlWellFormedWriter_Token__Enum_RawData = 13,
  XmlWellFormedWriter_Token__Enum_Whitespace = 14,
};
struct XmlWellFormedWriter_Token__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWellFormedWriter_Token__Enum value;
};

struct __declspec(align(8)) XmlWellFormedWriter_NamespaceResolverProxy__Fields {
  struct XmlWellFormedWriter * wfWriter;
};
struct XmlWellFormedWriter_NamespaceResolverProxy {
  struct XmlWellFormedWriter_NamespaceResolverProxy__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_NamespaceResolverProxy__Fields fields;
};
struct XmlWellFormedWriter_NamespaceResolverProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
  VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
};
struct XmlWellFormedWriter_NamespaceResolverProxy__StaticFields {
};
struct XmlWellFormedWriter_NamespaceResolverProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_NamespaceResolverProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_NamespaceResolverProxy__VTable vtable;
};

struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache_BufferChunk__Fields {
  struct Char__Array * buffer;
  int32_t index;
  int32_t count;
};
struct XmlWellFormedWriter_AttributeValueCache_BufferChunk {
  struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class *klass;
  struct MonitorData *monitor;
  struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__Fields fields;
};
struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__StaticFields {
};
struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__VTable vtable;
};

enum XsdCachingReader_CachingReaderState__Enum : int32_t {
  XsdCachingReader_CachingReaderState__Enum_None = 0,
  XsdCachingReader_CachingReaderState__Enum_Init = 1,
  XsdCachingReader_CachingReaderState__Enum_Record = 2,
  XsdCachingReader_CachingReaderState__Enum_Replay = 3,
  XsdCachingReader_CachingReaderState__Enum_ReaderClosed = 4,
  XsdCachingReader_CachingReaderState__Enum_Error = 5,
};
struct XsdCachingReader_CachingReaderState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdCachingReader_CachingReaderState__Enum value;
};
struct __declspec(align(8)) XsdCachingReader__Fields {
  struct XmlReader * coreReader;
  struct XmlNameTable * coreReaderNameTable;
  struct ValidatingReaderNodeData__Array * contentEvents;
  struct ValidatingReaderNodeData__Array * attributeEvents;
  struct ValidatingReaderNodeData * cachedNode;
  enum XsdCachingReader_CachingReaderState__Enum cacheState;
  int32_t contentIndex;
  int32_t attributeCount;
  bool returnOriginalStringValues;
  struct CachingEventHandler * cacheHandler;
  int32_t currentAttrIndex;
  int32_t currentContentIndex;
  bool readAhead;
  struct IXmlLineInfo * lineInfo;
  struct ValidatingReaderNodeData * textNode;
};
struct XsdCachingReader {
  struct XsdCachingReader__Class *klass;
  struct MonitorData *monitor;
  struct XsdCachingReader__Fields fields;
};
struct ValidatingReaderNodeData__Array {
  struct ValidatingReaderNodeData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValidatingReaderNodeData * vector[32];
};
struct CachingEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct CachingEventHandler {
  struct CachingEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct CachingEventHandler__Fields fields;
};
struct CachingEventHandler__VTable {
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
struct CachingEventHandler__StaticFields {
};
struct CachingEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CachingEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CachingEventHandler__VTable vtable;
};
struct XsdCachingReader__VTable {
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
  VirtualInvokeData System_Xml_IXmlLineInfo_HasLineInfo;
  VirtualInvokeData System_Xml_IXmlLineInfo_get_LineNumber;
  VirtualInvokeData System_Xml_IXmlLineInfo_get_LinePosition;
};
struct XsdCachingReader__StaticFields {
};
struct XsdCachingReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdCachingReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdCachingReader__VTable vtable;
};

enum XsdValidatingReader_ValidatingReaderState__Enum : int32_t {
  XsdValidatingReader_ValidatingReaderState__Enum_None = 0,
  XsdValidatingReader_ValidatingReaderState__Enum_Init = 1,
  XsdValidatingReader_ValidatingReaderState__Enum_Read = 2,
  XsdValidatingReader_ValidatingReaderState__Enum_OnDefaultAttribute = -1,
  XsdValidatingReader_ValidatingReaderState__Enum_OnReadAttributeValue = -2,
  XsdValidatingReader_ValidatingReaderState__Enum_OnAttribute = 3,
  XsdValidatingReader_ValidatingReaderState__Enum_ClearAttributes = 4,
  XsdValidatingReader_ValidatingReaderState__Enum_ParseInlineSchema = 5,
  XsdValidatingReader_ValidatingReaderState__Enum_ReadAhead = 6,
  XsdValidatingReader_ValidatingReaderState__Enum_OnReadBinaryContent = 7,
  XsdValidatingReader_ValidatingReaderState__Enum_ReaderClosed = 8,
  XsdValidatingReader_ValidatingReaderState__Enum_EOF = 9,
  XsdValidatingReader_ValidatingReaderState__Enum_Error = 10,
};
struct XsdValidatingReader_ValidatingReaderState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdValidatingReader_ValidatingReaderState__Enum value;
};
struct __declspec(align(8)) XsdValidatingReader__Fields {
  struct XmlReader * coreReader;
  struct IXmlNamespaceResolver * coreReaderNSResolver;
  struct IXmlNamespaceResolver * thisNSResolver;
  struct XmlSchemaValidator * validator;
  struct XmlResolver * xmlResolver;
  struct ValidationEventHandler * validationEvent;
  enum XsdValidatingReader_ValidatingReaderState__Enum validationState;
  struct XmlValueGetter * valueGetter;
  struct XmlNamespaceManager * nsManager;
  bool manageNamespaces;
  bool processInlineSchema;
  bool replayCache;
  struct ValidatingReaderNodeData * cachedNode;
  struct AttributePSVIInfo * attributePSVI;
  int32_t attributeCount;
  int32_t coreReaderAttributeCount;
  int32_t currentAttrIndex;
  struct AttributePSVIInfo__Array * attributePSVINodes;
  struct ArrayList * defaultAttributes;
  struct Parser_1 * inlineSchemaParser;
  struct Object * atomicValue;
  struct XmlSchemaInfo * xmlSchemaInfo;
  struct String * originalAtomicValueString;
  struct XmlNameTable * coreReaderNameTable;
  struct XsdCachingReader * cachingReader;
  struct ValidatingReaderNodeData * textNode;
  struct String * NsXmlNs;
  struct String * NsXs;
  struct String * NsXsi;
  struct String * XsiType;
  struct String * XsiNil;
  struct String * XsdSchema;
  struct String * XsiSchemaLocation;
  struct String * XsiNoNamespaceSchemaLocation;
  struct XmlCharType xmlCharType;
  struct IXmlLineInfo * lineInfo;
  struct ReadContentAsBinaryHelper * readBinaryHelper;
  enum XsdValidatingReader_ValidatingReaderState__Enum savedState;
};
struct XsdValidatingReader {
  struct XsdValidatingReader__Class *klass;
  struct MonitorData *monitor;
  struct XsdValidatingReader__Fields fields;
};
enum ValidatorState__Enum : int32_t {
  ValidatorState__Enum_None = 0,
  ValidatorState__Enum_Start = 1,
  ValidatorState__Enum_TopLevelAttribute = 2,
  ValidatorState__Enum_TopLevelTextOrWS = 3,
  ValidatorState__Enum_Element = 4,
  ValidatorState__Enum_Attribute = 5,
  ValidatorState__Enum_EndOfAttributes = 6,
  ValidatorState__Enum_Text = 7,
  ValidatorState__Enum_Whitespace = 8,
  ValidatorState__Enum_EndElement = 9,
  ValidatorState__Enum_SkipToEndElement = 10,
  ValidatorState__Enum_Finish = 11,
};
struct ValidatorState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ValidatorState__Enum value;
};
struct __declspec(align(8)) XmlSchemaValidator__Fields {
  struct XmlSchemaSet * schemaSet;
  enum XmlSchemaValidationFlags__Enum validationFlags;
  int32_t startIDConstraint;
  bool isRoot;
  bool rootHasSchema;
  bool attrValid;
  bool checkEntity;
  struct SchemaInfo * compiledSchemaInfo;
  struct IDtdInfo * dtdSchemaInfo;
  struct Hashtable * validatedNamespaces;
  struct HWStack * validationStack;
  struct ValidationState * context;
  enum ValidatorState__Enum currentState;
  struct Hashtable * attPresence;
  struct SchemaAttDef * wildID;
  struct Hashtable * IDs;
  struct IdRefNode * idRefListHead;
  struct XmlQualifiedName * contextQName;
  struct String * NsXs;
  struct String * NsXsi;
  struct String * NsXmlNs;
  struct String * NsXml;
  struct XmlSchemaObject * partialValidationType;
  struct StringBuilder * textValue;
  struct ValidationEventHandler * eventHandler;
  struct Object * validationEventSender;
  struct XmlNameTable * nameTable;
  struct IXmlLineInfo * positionInfo;
  struct IXmlLineInfo * dummyPositionInfo;
  struct XmlResolver * xmlResolver;
  struct Uri * sourceUri;
  struct String * sourceUriString;
  struct IXmlNamespaceResolver * nsResolver;
  enum XmlSchemaContentProcessing__Enum processContents;
  struct String * xsiTypeString;
  struct String * xsiNilString;
  struct String * xsiSchemaLocationString;
  struct String * xsiNoNamespaceSchemaLocationString;
  struct XmlCharType xmlCharType;
};
struct XmlSchemaValidator {
  struct XmlSchemaValidator__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaValidator__Fields fields;
};
struct __declspec(align(8)) HWStack__Fields {
  struct Object__Array * stack;
  int32_t growthRate;
  int32_t used;
  int32_t size;
  int32_t limit;
};
struct HWStack {
  struct HWStack__Class *klass;
  struct MonitorData *monitor;
  struct HWStack__Fields fields;
};
struct __declspec(align(8)) IdRefNode__Fields {
  struct String * Id;
  int32_t LineNo;
  int32_t LinePos;
  struct IdRefNode * Next;
};
struct IdRefNode {
  struct IdRefNode__Class *klass;
  struct MonitorData *monitor;
  struct IdRefNode__Fields fields;
};
struct XmlSchemaParticle__Array {
  struct XmlSchemaParticle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchemaParticle * vector[32];
};
struct XmlSchemaAttribute__Array {
  struct XmlSchemaAttribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchemaAttribute * vector[32];
};
struct Boolean__Array_1 {
  struct Boolean__Array_1__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  bool vector[32];
};
struct XmlValueGetter__Fields {
  struct MulticastDelegate__Fields _;
};
struct XmlValueGetter {
  struct XmlValueGetter__Class *klass;
  struct MonitorData *monitor;
  struct XmlValueGetter__Fields fields;
};
struct AttributePSVIInfo__Array {
  struct AttributePSVIInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AttributePSVIInfo * vector[32];
};
struct __declspec(align(8)) Parser_1__Fields {
  enum SchemaType__Enum schemaType;
  struct XmlNameTable * nameTable;
  struct SchemaNames * schemaNames;
  struct ValidationEventHandler * eventHandler;
  struct XmlNamespaceManager * namespaceManager;
  struct XmlReader * reader;
  struct PositionInfo * positionInfo;
  bool isProcessNamespaces;
  int32_t schemaXmlDepth;
  int32_t markupDepth;
  struct SchemaBuilder * builder;
  struct XmlSchema * schema;
  struct SchemaInfo * xdrSchema;
  struct XmlResolver * xmlResolver;
  struct XmlDocument * dummyDocument;
  bool processMarkup;
  struct XmlNode * parentNode;
  struct XmlNamespaceManager * annotationNSManager;
  struct String * xmlns;
  struct XmlCharType xmlCharType;
};
struct Parser_1 {
  struct Parser_1__Class *klass;
  struct MonitorData *monitor;
  struct Parser_1__Fields fields;
};
struct SchemaBuilder {
  struct SchemaBuilder__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XdrBuilder__Fields {
  struct SchemaInfo * _SchemaInfo;
  struct String * _TargetNamespace;
  struct XmlReader * _reader;
  struct PositionInfo * positionInfo;
  struct ParticleContentValidator * _contentValidator;
  struct XdrBuilder_XdrEntry * _CurState;
  struct XdrBuilder_XdrEntry * _NextState;
  struct HWStack * _StateHistory;
  struct HWStack * _GroupStack;
  struct String * _XdrName;
  struct String * _XdrPrefix;
  struct XdrBuilder_ElementContent * _ElementDef;
  struct XdrBuilder_GroupContent * _GroupDef;
  struct XdrBuilder_AttributeContent * _AttributeDef;
  struct XdrBuilder_DeclBaseInfo * _UndefinedAttributeTypes;
  struct XdrBuilder_DeclBaseInfo * _BaseDecl;
  struct XmlNameTable * _NameTable;
  struct SchemaNames * _SchemaNames;
  struct XmlNamespaceManager * _CurNsMgr;
  struct String * _Text;
  struct ValidationEventHandler * validationEventHandler;
  struct Hashtable * _UndeclaredElements;
  struct XmlResolver * xmlResolver;
};
struct XdrBuilder {
  struct XdrBuilder__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder__Fields fields;
};
enum SchemaNames_Token__Enum : int32_t {
  SchemaNames_Token__Enum_Empty = 0,
  SchemaNames_Token__Enum_SchemaName = 1,
  SchemaNames_Token__Enum_SchemaType = 2,
  SchemaNames_Token__Enum_SchemaMaxOccurs = 3,
  SchemaNames_Token__Enum_SchemaMinOccurs = 4,
  SchemaNames_Token__Enum_SchemaInfinite = 5,
  SchemaNames_Token__Enum_SchemaModel = 6,
  SchemaNames_Token__Enum_SchemaOpen = 7,
  SchemaNames_Token__Enum_SchemaClosed = 8,
  SchemaNames_Token__Enum_SchemaContent = 9,
  SchemaNames_Token__Enum_SchemaMixed = 10,
  SchemaNames_Token__Enum_SchemaEmpty = 11,
  SchemaNames_Token__Enum_SchemaElementOnly = 12,
  SchemaNames_Token__Enum_SchemaTextOnly = 13,
  SchemaNames_Token__Enum_SchemaOrder = 14,
  SchemaNames_Token__Enum_SchemaSeq = 15,
  SchemaNames_Token__Enum_SchemaOne = 16,
  SchemaNames_Token__Enum_SchemaMany = 17,
  SchemaNames_Token__Enum_SchemaRequired = 18,
  SchemaNames_Token__Enum_SchemaYes = 19,
  SchemaNames_Token__Enum_SchemaNo = 20,
  SchemaNames_Token__Enum_SchemaString = 21,
  SchemaNames_Token__Enum_SchemaId = 22,
  SchemaNames_Token__Enum_SchemaIdref = 23,
  SchemaNames_Token__Enum_SchemaIdrefs = 24,
  SchemaNames_Token__Enum_SchemaEntity = 25,
  SchemaNames_Token__Enum_SchemaEntities = 26,
  SchemaNames_Token__Enum_SchemaNmtoken = 27,
  SchemaNames_Token__Enum_SchemaNmtokens = 28,
  SchemaNames_Token__Enum_SchemaEnumeration = 29,
  SchemaNames_Token__Enum_SchemaDefault = 30,
  SchemaNames_Token__Enum_XdrRoot = 31,
  SchemaNames_Token__Enum_XdrElementType = 32,
  SchemaNames_Token__Enum_XdrElement = 33,
  SchemaNames_Token__Enum_XdrGroup = 34,
  SchemaNames_Token__Enum_XdrAttributeType = 35,
  SchemaNames_Token__Enum_XdrAttribute = 36,
  SchemaNames_Token__Enum_XdrDatatype = 37,
  SchemaNames_Token__Enum_XdrDescription = 38,
  SchemaNames_Token__Enum_XdrExtends = 39,
  SchemaNames_Token__Enum_SchemaXdrRootAlias = 40,
  SchemaNames_Token__Enum_SchemaDtType = 41,
  SchemaNames_Token__Enum_SchemaDtValues = 42,
  SchemaNames_Token__Enum_SchemaDtMaxLength = 43,
  SchemaNames_Token__Enum_SchemaDtMinLength = 44,
  SchemaNames_Token__Enum_SchemaDtMax = 45,
  SchemaNames_Token__Enum_SchemaDtMin = 46,
  SchemaNames_Token__Enum_SchemaDtMinExclusive = 47,
  SchemaNames_Token__Enum_SchemaDtMaxExclusive = 48,
  SchemaNames_Token__Enum_SchemaTargetNamespace = 49,
  SchemaNames_Token__Enum_SchemaVersion = 50,
  SchemaNames_Token__Enum_SchemaFinalDefault = 51,
  SchemaNames_Token__Enum_SchemaBlockDefault = 52,
  SchemaNames_Token__Enum_SchemaFixed = 53,
  SchemaNames_Token__Enum_SchemaAbstract = 54,
  SchemaNames_Token__Enum_SchemaBlock = 55,
  SchemaNames_Token__Enum_SchemaSubstitutionGroup = 56,
  SchemaNames_Token__Enum_SchemaFinal = 57,
  SchemaNames_Token__Enum_SchemaNillable = 58,
  SchemaNames_Token__Enum_SchemaRef = 59,
  SchemaNames_Token__Enum_SchemaBase = 60,
  SchemaNames_Token__Enum_SchemaDerivedBy = 61,
  SchemaNames_Token__Enum_SchemaNamespace = 62,
  SchemaNames_Token__Enum_SchemaProcessContents = 63,
  SchemaNames_Token__Enum_SchemaRefer = 64,
  SchemaNames_Token__Enum_SchemaPublic = 65,
  SchemaNames_Token__Enum_SchemaSystem = 66,
  SchemaNames_Token__Enum_SchemaSchemaLocation = 67,
  SchemaNames_Token__Enum_SchemaValue = 68,
  SchemaNames_Token__Enum_SchemaSource = 69,
  SchemaNames_Token__Enum_SchemaAttributeFormDefault = 70,
  SchemaNames_Token__Enum_SchemaElementFormDefault = 71,
  SchemaNames_Token__Enum_SchemaUse = 72,
  SchemaNames_Token__Enum_SchemaForm = 73,
  SchemaNames_Token__Enum_XsdSchema = 74,
  SchemaNames_Token__Enum_XsdAnnotation = 75,
  SchemaNames_Token__Enum_XsdInclude = 76,
  SchemaNames_Token__Enum_XsdImport = 77,
  SchemaNames_Token__Enum_XsdElement = 78,
  SchemaNames_Token__Enum_XsdAttribute = 79,
  SchemaNames_Token__Enum_xsdAttributeGroup = 80,
  SchemaNames_Token__Enum_XsdAnyAttribute = 81,
  SchemaNames_Token__Enum_XsdGroup = 82,
  SchemaNames_Token__Enum_XsdAll = 83,
  SchemaNames_Token__Enum_XsdChoice = 84,
  SchemaNames_Token__Enum_XsdSequence = 85,
  SchemaNames_Token__Enum_XsdAny = 86,
  SchemaNames_Token__Enum_XsdNotation = 87,
  SchemaNames_Token__Enum_XsdSimpleType = 88,
  SchemaNames_Token__Enum_XsdComplexType = 89,
  SchemaNames_Token__Enum_XsdUnique = 90,
  SchemaNames_Token__Enum_XsdKey = 91,
  SchemaNames_Token__Enum_XsdKeyref = 92,
  SchemaNames_Token__Enum_XsdSelector = 93,
  SchemaNames_Token__Enum_XsdField = 94,
  SchemaNames_Token__Enum_XsdMinExclusive = 95,
  SchemaNames_Token__Enum_XsdMinInclusive = 96,
  SchemaNames_Token__Enum_XsdMaxExclusive = 97,
  SchemaNames_Token__Enum_XsdMaxInclusive = 98,
  SchemaNames_Token__Enum_XsdTotalDigits = 99,
  SchemaNames_Token__Enum_XsdFractionDigits = 100,
  SchemaNames_Token__Enum_XsdLength = 101,
  SchemaNames_Token__Enum_XsdMinLength = 102,
  SchemaNames_Token__Enum_XsdMaxLength = 103,
  SchemaNames_Token__Enum_XsdEnumeration = 104,
  SchemaNames_Token__Enum_XsdPattern = 105,
  SchemaNames_Token__Enum_XsdDocumentation = 106,
  SchemaNames_Token__Enum_XsdAppInfo = 107,
  SchemaNames_Token__Enum_XsdComplexContent = 108,
  SchemaNames_Token__Enum_XsdComplexContentExtension = 109,
  SchemaNames_Token__Enum_XsdComplexContentRestriction = 110,
  SchemaNames_Token__Enum_XsdSimpleContent = 111,
  SchemaNames_Token__Enum_XsdSimpleContentExtension = 112,
  SchemaNames_Token__Enum_XsdSimpleContentRestriction = 113,
  SchemaNames_Token__Enum_XsdSimpleTypeList = 114,
  SchemaNames_Token__Enum_XsdSimpleTypeRestriction = 115,
  SchemaNames_Token__Enum_XsdSimpleTypeUnion = 116,
  SchemaNames_Token__Enum_XsdWhitespace = 117,
  SchemaNames_Token__Enum_XsdRedefine = 118,
  SchemaNames_Token__Enum_SchemaItemType = 119,
  SchemaNames_Token__Enum_SchemaMemberTypes = 120,
  SchemaNames_Token__Enum_SchemaXPath = 121,
  SchemaNames_Token__Enum_XmlLang = 122,
};
struct SchemaNames_Token__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaNames_Token__Enum value;
};
struct __declspec(align(8)) XdrBuilder_XdrAttributeEntry__Fields {
  enum SchemaNames_Token__Enum _Attribute;
  int32_t _SchemaFlags;
  struct XmlSchemaDatatype * _Datatype;
  struct XdrBuilder_XdrBuildFunction * _BuildFunc;
};
struct XdrBuilder_XdrAttributeEntry {
  struct XdrBuilder_XdrAttributeEntry__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrAttributeEntry__Fields fields;
};
struct XdrBuilder_XdrAttributeEntry__Array {
  struct XdrBuilder_XdrAttributeEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XdrBuilder_XdrAttributeEntry * vector[32];
};
struct XdrBuilder_XdrBuildFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XdrBuilder_XdrBuildFunction {
  struct XdrBuilder_XdrBuildFunction__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrBuildFunction__Fields fields;
};
struct __declspec(align(8)) XdrBuilder_XdrEntry__Fields {
  enum SchemaNames_Token__Enum _Name;
  struct Int32__Array * _NextStates;
  struct XdrBuilder_XdrAttributeEntry__Array * _Attributes;
  struct XdrBuilder_XdrInitFunction * _InitFunc;
  struct XdrBuilder_XdrBeginChildFunction * _BeginChildFunc;
  struct XdrBuilder_XdrEndChildFunction * _EndChildFunc;
  bool _AllowText;
};
struct XdrBuilder_XdrEntry {
  struct XdrBuilder_XdrEntry__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrEntry__Fields fields;
};
struct XdrBuilder_XdrEntry__Array {
  struct XdrBuilder_XdrEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XdrBuilder_XdrEntry * vector[32];
};
struct XdrBuilder_XdrInitFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XdrBuilder_XdrInitFunction {
  struct XdrBuilder_XdrInitFunction__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrInitFunction__Fields fields;
};
struct XdrBuilder_XdrBeginChildFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XdrBuilder_XdrBeginChildFunction {
  struct XdrBuilder_XdrBeginChildFunction__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrBeginChildFunction__Fields fields;
};
struct XdrBuilder_XdrEndChildFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XdrBuilder_XdrEndChildFunction {
  struct XdrBuilder_XdrEndChildFunction__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_XdrEndChildFunction__Fields fields;
};
struct ParticleContentValidator__Fields {
  struct ContentValidator__Fields _;
  struct SymbolsDictionary * symbols;
  struct Positions * positions;
  struct Stack * stack;
  struct SyntaxTreeNode * contentNode;
  bool isPartial;
  int32_t minMaxNodesCount;
  bool enableUpaCheck;
};
struct ParticleContentValidator {
  struct ParticleContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct ParticleContentValidator__Fields fields;
};
struct __declspec(align(8)) SymbolsDictionary__Fields {
  int32_t last;
  struct Hashtable * names;
  struct Hashtable * wildcards;
  struct ArrayList * particles;
  struct Object * particleLast;
  bool isUpaEnforced;
};
struct SymbolsDictionary {
  struct SymbolsDictionary__Class *klass;
  struct MonitorData *monitor;
  struct SymbolsDictionary__Fields fields;
};
struct __declspec(align(8)) Positions__Fields {
  struct ArrayList * positions;
};
struct Positions {
  struct Positions__Class *klass;
  struct MonitorData *monitor;
  struct Positions__Fields fields;
};
struct SyntaxTreeNode {
  struct SyntaxTreeNode__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) LeafNode__Fields {
  int32_t pos;
};
struct LeafNode {
  struct LeafNode__Class *klass;
  struct MonitorData *monitor;
  struct LeafNode__Fields fields;
};
struct __declspec(align(8)) InteriorNode__Fields {
  struct SyntaxTreeNode * leftChild;
  struct SyntaxTreeNode * rightChild;
};
struct InteriorNode {
  struct InteriorNode__Class *klass;
  struct MonitorData *monitor;
  struct InteriorNode__Fields fields;
};
struct SequenceNode__Fields {
  struct InteriorNode__Fields _;
};
struct SequenceNode {
  struct SequenceNode__Class *klass;
  struct MonitorData *monitor;
  struct SequenceNode__Fields fields;
};
struct __declspec(align(8)) XdrBuilder_ElementContent__Fields {
  struct SchemaElementDecl * _ElementDecl;
  int32_t _ContentAttr;
  int32_t _OrderAttr;
  bool _MasterGroupRequired;
  bool _ExistTerminal;
  bool _AllowDataType;
  bool _HasDataType;
  bool _HasType;
  bool _EnumerationRequired;
  uint32_t _MinVal;
  uint32_t _MaxVal;
  uint32_t _MaxLength;
  uint32_t _MinLength;
  struct Hashtable * _AttDefList;
};
struct XdrBuilder_ElementContent {
  struct XdrBuilder_ElementContent__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_ElementContent__Fields fields;
};
struct __declspec(align(8)) XdrBuilder_GroupContent__Fields {
  uint32_t _MinVal;
  uint32_t _MaxVal;
  bool _HasMaxAttr;
  bool _HasMinAttr;
  int32_t _Order;
};
struct XdrBuilder_GroupContent {
  struct XdrBuilder_GroupContent__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_GroupContent__Fields fields;
};
struct __declspec(align(8)) XdrBuilder_AttributeContent__Fields {
  struct SchemaAttDef * _AttDef;
  struct XmlQualifiedName * _Name;
  struct String * _Prefix;
  bool _Required;
  uint32_t _MinVal;
  uint32_t _MaxVal;
  uint32_t _MaxLength;
  uint32_t _MinLength;
  bool _EnumerationRequired;
  bool _HasDataType;
  bool _Global;
  struct Object * _Default;
};
struct XdrBuilder_AttributeContent {
  struct XdrBuilder_AttributeContent__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_AttributeContent__Fields fields;
};
struct __declspec(align(8)) XdrBuilder_DeclBaseInfo__Fields {
  struct XmlQualifiedName * _Name;
  struct String * _Prefix;
  struct XmlQualifiedName * _TypeName;
  struct String * _TypePrefix;
  struct Object * _Default;
  struct Object * _Revises;
  uint32_t _MaxOccurs;
  uint32_t _MinOccurs;
  bool _Checking;
  struct SchemaElementDecl * _ElementDecl;
  struct SchemaAttDef * _Attdef;
  struct XdrBuilder_DeclBaseInfo * _Next;
};
struct XdrBuilder_DeclBaseInfo {
  struct XdrBuilder_DeclBaseInfo__Class *klass;
  struct MonitorData *monitor;
  struct XdrBuilder_DeclBaseInfo__Fields fields;
};
struct XmlNode__Array {
  struct XmlNode__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlNode * vector[32];
};
struct HWStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct HWStack__StaticFields {
};
struct HWStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HWStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HWStack__VTable vtable;
};
struct IdRefNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IdRefNode__StaticFields {
};
struct IdRefNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IdRefNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IdRefNode__VTable vtable;
};
struct XmlSchemaValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XmlSchemaValidator__StaticFields {
  struct XmlSchemaDatatype * dtQName;
  struct XmlSchemaDatatype * dtCDATA;
  struct XmlSchemaDatatype * dtStringArray;
  struct XmlSchemaParticle__Array * EmptyParticleArray;
  struct XmlSchemaAttribute__Array * EmptyAttributeArray;
  struct Boolean__Array_1 * ValidStates;
  struct String__Array * MethodNames;
};
struct XmlSchemaValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaValidator__VTable vtable;
};
struct XmlValueGetter__VTable {
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
struct XmlValueGetter__StaticFields {
};
struct XmlValueGetter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlValueGetter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlValueGetter__VTable vtable;
};
struct XdrBuilder_XdrBuildFunction__VTable {
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
struct XdrBuilder_XdrBuildFunction__StaticFields {
};
struct XdrBuilder_XdrBuildFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XdrBuilder_XdrBuildFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XdrBuilder_XdrBuildFunction__VTable vtable;
};
struct XdrBuilder_XdrAttributeEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XdrBuilder_XdrAttributeEntry__StaticFields {
};
struct XdrBuilder_XdrAttributeEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XdrBuilder_XdrAttributeEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XdrBuilder_XdrAttributeEntry__VTable vtable;
};
struct XdrBuilder_XdrInitFunction__VTable {
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