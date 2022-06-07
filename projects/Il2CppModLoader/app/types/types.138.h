namespace app {
struct WriteState__Enum__Array__VTable {
};

struct WriteState__Enum__Array__StaticFields {
};

struct WriteState__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteState__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteState__Enum__Array__VTable vtable;
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
};

struct XmlWellFormedWriter__StaticFields {
    struct String__Array *stateName;
    struct String__Array *tokenName;
    struct WriteState__Enum__Array *state2WriteState;
    struct XmlWellFormedWriter_State__Enum__Array *StateTableDocument;
    struct XmlWellFormedWriter_State__Enum__Array *StateTableAuto;
};

struct XmlWellFormedWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlWellFormedWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlWellFormedWriter__VTable vtable;
};

struct XmlException__Fields {
    struct SystemException__Fields _;
    struct String *res;
    struct String__Array *args;
    int32_t lineNumber;
    int32_t linePosition;
    struct String *sourceUri;
    struct String *message;
};

struct XmlException {
    struct XmlException__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlException__VTable vtable;
};

enum class XmlWellFormedWriter_Token__Enum : int32_t {
    StartDocument = 0x00000000,
    EndDocument = 0x00000001,
    PI = 0x00000002,
    Comment = 0x00000003,
    Dtd = 0x00000004,
    StartElement = 0x00000005,
    EndElement = 0x00000006,
    StartAttribute = 0x00000007,
    EndAttribute = 0x00000008,
    Text = 0x00000009,
    CData = 0x0000000a,
    AtomicValue = 0x0000000b,
    Base64 = 0x0000000c,
    RawData = 0x0000000d,
    Whitespace = 0x0000000e,
};

struct XmlWellFormedWriter_Token__Enum__Boxed {
    struct XmlWellFormedWriter_Token__Enum__Class *klass;
    MonitorData *monitor;
    XmlWellFormedWriter_Token__Enum value;
    
};

struct XmlWellFormedWriter_Token__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct XmlWellFormedWriter_Token__Enum__StaticFields {
};

struct XmlWellFormedWriter_Token__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlWellFormedWriter_Token__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlWellFormedWriter_Token__Enum__VTable vtable;
};

struct __declspec(align(8)) XmlWellFormedWriter_NamespaceResolverProxy__Fields {
    struct XmlWellFormedWriter *wfWriter;
};

struct XmlWellFormedWriter_NamespaceResolverProxy {
    struct XmlWellFormedWriter_NamespaceResolverProxy__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlWellFormedWriter_NamespaceResolverProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlWellFormedWriter_NamespaceResolverProxy__VTable vtable;
};

struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache_BufferChunk__Fields {
    struct Char__Array *buffer;
    int32_t index;
    int32_t count;
};

struct XmlWellFormedWriter_AttributeValueCache_BufferChunk {
    struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlWellFormedWriter_AttributeValueCache_BufferChunk__VTable vtable;
};

enum class XsdCachingReader_CachingReaderState__Enum : int32_t {
    None = 0x00000000,
    Init = 0x00000001,
    Record = 0x00000002,
    Replay = 0x00000003,
    ReaderClosed = 0x00000004,
    Error = 0x00000005,
};

struct XsdCachingReader_CachingReaderState__Enum__Boxed {
    struct XsdCachingReader_CachingReaderState__Enum__Class *klass;
    MonitorData *monitor;
    XsdCachingReader_CachingReaderState__Enum value;
    
};

struct __declspec(align(8)) XsdCachingReader__Fields {
    struct XmlReader *coreReader;
    struct XmlNameTable *coreReaderNameTable;
    struct ValidatingReaderNodeData__Array *contentEvents;
    struct ValidatingReaderNodeData__Array *attributeEvents;
    struct ValidatingReaderNodeData *cachedNode;
    XsdCachingReader_CachingReaderState__Enum cacheState;
    
    int32_t contentIndex;
    int32_t attributeCount;
    bool returnOriginalStringValues;
    struct CachingEventHandler *cacheHandler;
    int32_t currentAttrIndex;
    int32_t currentContentIndex;
    bool readAhead;
    struct IXmlLineInfo *lineInfo;
    struct ValidatingReaderNodeData *textNode;
};

struct XsdCachingReader {
    struct XsdCachingReader__Class *klass;
    MonitorData *monitor;
    struct XsdCachingReader__Fields fields;
};

struct ValidatingReaderNodeData__Array {
    struct ValidatingReaderNodeData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ValidatingReaderNodeData *vector[32];
};

struct CachingEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct CachingEventHandler {
    struct CachingEventHandler__Class *klass;
    MonitorData *monitor;
    struct CachingEventHandler__Fields fields;
};

struct ValidatingReaderNodeData__Array__VTable {
};

struct ValidatingReaderNodeData__Array__StaticFields {
};

struct ValidatingReaderNodeData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ValidatingReaderNodeData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ValidatingReaderNodeData__Array__VTable vtable;
};

struct XsdCachingReader_CachingReaderState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct XsdCachingReader_CachingReaderState__Enum__StaticFields {
};

struct XsdCachingReader_CachingReaderState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdCachingReader_CachingReaderState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdCachingReader_CachingReaderState__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CachingEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdCachingReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdCachingReader__VTable vtable;
};

enum class XsdValidatingReader_ValidatingReaderState__Enum : int32_t {
    None = 0x00000000,
    Init = 0x00000001,
    Read = 0x00000002,
    OnDefaultAttribute = -1,
    OnReadAttributeValue = -2,
    OnAttribute = 0x00000003,
    ClearAttributes = 0x00000004,
    ParseInlineSchema = 0x00000005,
    ReadAhead = 0x00000006,
    OnReadBinaryContent = 0x00000007,
    ReaderClosed = 0x00000008,
    EOF = 0x00000009,
    Error = 0x0000000a,
};

struct XsdValidatingReader_ValidatingReaderState__Enum__Boxed {
    struct XsdValidatingReader_ValidatingReaderState__Enum__Class *klass;
    MonitorData *monitor;
    XsdValidatingReader_ValidatingReaderState__Enum value;
    
};

struct __declspec(align(8)) XsdValidatingReader__Fields {
    struct XmlReader *coreReader;
    struct IXmlNamespaceResolver *coreReaderNSResolver;
    struct IXmlNamespaceResolver *thisNSResolver;
    struct XmlSchemaValidator *validator;
    struct XmlResolver *xmlResolver;
    struct ValidationEventHandler *validationEvent;
    XsdValidatingReader_ValidatingReaderState__Enum validationState;
    
    struct XmlValueGetter *valueGetter;
    struct XmlNamespaceManager *nsManager;
    bool manageNamespaces;
    bool processInlineSchema;
    bool replayCache;
    struct ValidatingReaderNodeData *cachedNode;
    struct AttributePSVIInfo *attributePSVI;
    int32_t attributeCount;
    int32_t coreReaderAttributeCount;
    int32_t currentAttrIndex;
    struct AttributePSVIInfo__Array *attributePSVINodes;
    struct ArrayList *defaultAttributes;
    struct Parser_1 *inlineSchemaParser;
    struct Object *atomicValue;
    struct XmlSchemaInfo *xmlSchemaInfo;
    struct String *originalAtomicValueString;
    struct XmlNameTable *coreReaderNameTable;
    struct XsdCachingReader *cachingReader;
    struct ValidatingReaderNodeData *textNode;
    struct String *NsXmlNs;
    struct String *NsXs;
    struct String *NsXsi;
    struct String *XsiType;
    struct String *XsiNil;
    struct String *XsdSchema;
    struct String *XsiSchemaLocation;
    struct String *XsiNoNamespaceSchemaLocation;
    struct XmlCharType xmlCharType;
    struct IXmlLineInfo *lineInfo;
    struct ReadContentAsBinaryHelper *readBinaryHelper;
    XsdValidatingReader_ValidatingReaderState__Enum savedState;
    
};

struct XsdValidatingReader {
    struct XsdValidatingReader__Class *klass;
    MonitorData *monitor;
    struct XsdValidatingReader__Fields fields;
};

enum class ValidatorState__Enum : int32_t {
    None = 0x00000000,
    Start = 0x00000001,
    TopLevelAttribute = 0x00000002,
    TopLevelTextOrWS = 0x00000003,
    Element = 0x00000004,
    Attribute = 0x00000005,
    EndOfAttributes = 0x00000006,
    Text = 0x00000007,
    Whitespace = 0x00000008,
    EndElement = 0x00000009,
    SkipToEndElement = 0x0000000a,
    Finish = 0x0000000b,
};

struct ValidatorState__Enum__Boxed {
    struct ValidatorState__Enum__Class *klass;
    MonitorData *monitor;
    ValidatorState__Enum value;
    
};

struct __declspec(align(8)) XmlSchemaValidator__Fields {
    struct XmlSchemaSet *schemaSet;
    XmlSchemaValidationFlags__Enum validationFlags;
    
    int32_t startIDConstraint;
    bool isRoot;
    bool rootHasSchema;
    bool attrValid;
    bool checkEntity;
    struct SchemaInfo *compiledSchemaInfo;
    struct IDtdInfo *dtdSchemaInfo;
    struct Hashtable *validatedNamespaces;
    struct HWStack *validationStack;
    struct ValidationState *context;
    ValidatorState__Enum currentState;
    
    struct Hashtable *attPresence;
    struct SchemaAttDef *wildID;
    struct Hashtable *IDs;
    struct IdRefNode *idRefListHead;
    struct XmlQualifiedName *contextQName;
    struct String *NsXs;
    struct String *NsXsi;
    struct String *NsXmlNs;
    struct String *NsXml;
    struct XmlSchemaObject *partialValidationType;
    struct StringBuilder *textValue;
    struct ValidationEventHandler *eventHandler;
    struct Object *validationEventSender;
    struct XmlNameTable *nameTable;
    struct IXmlLineInfo *positionInfo;
    struct IXmlLineInfo *dummyPositionInfo;
    struct XmlResolver *xmlResolver;
    struct Uri *sourceUri;
    struct String *sourceUriString;
    struct IXmlNamespaceResolver *nsResolver;
    XmlSchemaContentProcessing__Enum processContents;
    
    struct String *xsiTypeString;
    struct String *xsiNilString;
    struct String *xsiSchemaLocationString;
    struct String *xsiNoNamespaceSchemaLocationString;
    struct XmlCharType xmlCharType;
};

struct XmlSchemaValidator {
    struct XmlSchemaValidator__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaValidator__Fields fields;
};

struct __declspec(align(8)) HWStack__Fields {
    struct Object__Array *stack;
    int32_t growthRate;
    int32_t used;
    int32_t size;
    int32_t limit;
};

struct HWStack {
    struct HWStack__Class *klass;
    MonitorData *monitor;
    struct HWStack__Fields fields;
};

struct __declspec(align(8)) IdRefNode__Fields {
    struct String *Id;
    int32_t LineNo;
    int32_t LinePos;
    struct IdRefNode *Next;
};

struct IdRefNode {
    struct IdRefNode__Class *klass;
    MonitorData *monitor;
    struct IdRefNode__Fields fields;
};

struct XmlSchemaParticle__Array {
    struct XmlSchemaParticle__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XmlSchemaParticle *vector[32];
};

struct XmlSchemaAttribute__Array {
    struct XmlSchemaAttribute__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XmlSchemaAttribute *vector[32];
};

struct Boolean__Array_1 {
    struct Boolean__Array_1__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    bool vector[32];
};

struct XmlValueGetter__Fields {
    struct MulticastDelegate__Fields _;
};

struct XmlValueGetter {
    struct XmlValueGetter__Class *klass;
    MonitorData *monitor;
    struct XmlValueGetter__Fields fields;
};

struct AttributePSVIInfo__Array {
    struct AttributePSVIInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AttributePSVIInfo *vector[32];
};

struct __declspec(align(8)) Parser_1__Fields {
    SchemaType__Enum schemaType;
    
    struct XmlNameTable *nameTable;
    struct SchemaNames *schemaNames;
    struct ValidationEventHandler *eventHandler;
    struct XmlNamespaceManager *namespaceManager;
    struct XmlReader *reader;
    struct PositionInfo *positionInfo;
    bool isProcessNamespaces;
    int32_t schemaXmlDepth;
    int32_t markupDepth;
    struct SchemaBuilder *builder;
    struct XmlSchema *schema;
    struct SchemaInfo *xdrSchema;
    struct XmlResolver *xmlResolver;
    struct XmlDocument *dummyDocument;
    bool processMarkup;
    struct XmlNode *parentNode;
    struct XmlNamespaceManager *annotationNSManager;
    struct String *xmlns;
    struct XmlCharType xmlCharType;
};

struct Parser_1 {
    struct Parser_1__Class *klass;
    MonitorData *monitor;
    struct Parser_1__Fields fields;
};

struct SchemaBuilder {
    struct SchemaBuilder__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) XdrBuilder__Fields {
    struct SchemaInfo *_SchemaInfo;
    struct String *_TargetNamespace;
    struct XmlReader *_reader;
    struct PositionInfo *positionInfo;
    struct ParticleContentValidator *_contentValidator;
    struct XdrBuilder_XdrEntry *_CurState;
    struct XdrBuilder_XdrEntry *_NextState;
    struct HWStack *_StateHistory;
    struct HWStack *_GroupStack;
    struct String *_XdrName;
    struct String *_XdrPrefix;
    struct XdrBuilder_ElementContent *_ElementDef;
    struct XdrBuilder_GroupContent *_GroupDef;
    struct XdrBuilder_AttributeContent *_AttributeDef;
    struct XdrBuilder_DeclBaseInfo *_UndefinedAttributeTypes;
    struct XdrBuilder_DeclBaseInfo *_BaseDecl;
    struct XmlNameTable *_NameTable;
    struct SchemaNames *_SchemaNames;
    struct XmlNamespaceManager *_CurNsMgr;
    struct String *_Text;
    struct ValidationEventHandler *validationEventHandler;
    struct Hashtable *_UndeclaredElements;
    struct XmlResolver *xmlResolver;
};

struct XdrBuilder {
    struct XdrBuilder__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder__Fields fields;
};

enum class SchemaNames_Token__Enum : int32_t {
    Empty = 0x00000000,
    SchemaName = 0x00000001,
    SchemaType = 0x00000002,
    SchemaMaxOccurs = 0x00000003,
    SchemaMinOccurs = 0x00000004,
    SchemaInfinite = 0x00000005,
    SchemaModel = 0x00000006,
    SchemaOpen = 0x00000007,
    SchemaClosed = 0x00000008,
    SchemaContent = 0x00000009,
    SchemaMixed = 0x0000000a,
    SchemaEmpty = 0x0000000b,
    SchemaElementOnly = 0x0000000c,
    SchemaTextOnly = 0x0000000d,
    SchemaOrder = 0x0000000e,
    SchemaSeq = 0x0000000f,
    SchemaOne = 0x00000010,
    SchemaMany = 0x00000011,
    SchemaRequired = 0x00000012,
    SchemaYes = 0x00000013,
    SchemaNo = 0x00000014,
    SchemaString = 0x00000015,
    SchemaId = 0x00000016,
    SchemaIdref = 0x00000017,
    SchemaIdrefs = 0x00000018,
    SchemaEntity = 0x00000019,
    SchemaEntities = 0x0000001a,
    SchemaNmtoken = 0x0000001b,
    SchemaNmtokens = 0x0000001c,
    SchemaEnumeration = 0x0000001d,
    SchemaDefault = 0x0000001e,
    XdrRoot = 0x0000001f,
    XdrElementType = 0x00000020,
    XdrElement = 0x00000021,
    XdrGroup = 0x00000022,
    XdrAttributeType = 0x00000023,
    XdrAttribute = 0x00000024,
    XdrDatatype = 0x00000025,
    XdrDescription = 0x00000026,
    XdrExtends = 0x00000027,
    SchemaXdrRootAlias = 0x00000028,
    SchemaDtType = 0x00000029,
    SchemaDtValues = 0x0000002a,
    SchemaDtMaxLength = 0x0000002b,
    SchemaDtMinLength = 0x0000002c,
    SchemaDtMax = 0x0000002d,
    SchemaDtMin = 0x0000002e,
    SchemaDtMinExclusive = 0x0000002f,
    SchemaDtMaxExclusive = 0x00000030,
    SchemaTargetNamespace = 0x00000031,
    SchemaVersion = 0x00000032,
    SchemaFinalDefault = 0x00000033,
    SchemaBlockDefault = 0x00000034,
    SchemaFixed = 0x00000035,
    SchemaAbstract = 0x00000036,
    SchemaBlock = 0x00000037,
    SchemaSubstitutionGroup = 0x00000038,
    SchemaFinal = 0x00000039,
    SchemaNillable = 0x0000003a,
    SchemaRef = 0x0000003b,
    SchemaBase = 0x0000003c,
    SchemaDerivedBy = 0x0000003d,
    SchemaNamespace = 0x0000003e,
    SchemaProcessContents = 0x0000003f,
    SchemaRefer = 0x00000040,
    SchemaPublic = 0x00000041,
    SchemaSystem = 0x00000042,
    SchemaSchemaLocation = 0x00000043,
    SchemaValue = 0x00000044,
    SchemaSource = 0x00000045,
    SchemaAttributeFormDefault = 0x00000046,
    SchemaElementFormDefault = 0x00000047,
    SchemaUse = 0x00000048,
    SchemaForm = 0x00000049,
    XsdSchema = 0x0000004a,
    XsdAnnotation = 0x0000004b,
    XsdInclude = 0x0000004c,
    XsdImport = 0x0000004d,
    XsdElement = 0x0000004e,
    XsdAttribute = 0x0000004f,
    xsdAttributeGroup = 0x00000050,
    XsdAnyAttribute = 0x00000051,
    XsdGroup = 0x00000052,
    XsdAll = 0x00000053,
    XsdChoice = 0x00000054,
    XsdSequence = 0x00000055,
    XsdAny = 0x00000056,
    XsdNotation = 0x00000057,
    XsdSimpleType = 0x00000058,
    XsdComplexType = 0x00000059,
    XsdUnique = 0x0000005a,
    XsdKey = 0x0000005b,
    XsdKeyref = 0x0000005c,
    XsdSelector = 0x0000005d,
    XsdField = 0x0000005e,
    XsdMinExclusive = 0x0000005f,
    XsdMinInclusive = 0x00000060,
    XsdMaxExclusive = 0x00000061,
    XsdMaxInclusive = 0x00000062,
    XsdTotalDigits = 0x00000063,
    XsdFractionDigits = 0x00000064,
    XsdLength = 0x00000065,
    XsdMinLength = 0x00000066,
    XsdMaxLength = 0x00000067,
    XsdEnumeration = 0x00000068,
    XsdPattern = 0x00000069,
    XsdDocumentation = 0x0000006a,
    XsdAppInfo = 0x0000006b,
    XsdComplexContent = 0x0000006c,
    XsdComplexContentExtension = 0x0000006d,
    XsdComplexContentRestriction = 0x0000006e,
    XsdSimpleContent = 0x0000006f,
    XsdSimpleContentExtension = 0x00000070,
    XsdSimpleContentRestriction = 0x00000071,
    XsdSimpleTypeList = 0x00000072,
    XsdSimpleTypeRestriction = 0x00000073,
    XsdSimpleTypeUnion = 0x00000074,
    XsdWhitespace = 0x00000075,
    XsdRedefine = 0x00000076,
    SchemaItemType = 0x00000077,
    SchemaMemberTypes = 0x00000078,
    SchemaXPath = 0x00000079,
    XmlLang = 0x0000007a,
};

struct SchemaNames_Token__Enum__Boxed {
    struct SchemaNames_Token__Enum__Class *klass;
    MonitorData *monitor;
    SchemaNames_Token__Enum value;
    
};

struct __declspec(align(8)) XdrBuilder_XdrAttributeEntry__Fields {
    SchemaNames_Token__Enum _Attribute;
    
    int32_t _SchemaFlags;
    struct XmlSchemaDatatype *_Datatype;
    struct XdrBuilder_XdrBuildFunction *_BuildFunc;
};

struct XdrBuilder_XdrAttributeEntry {
    struct XdrBuilder_XdrAttributeEntry__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrAttributeEntry__Fields fields;
};

struct XdrBuilder_XdrBuildFunction__Fields {
    struct MulticastDelegate__Fields _;
};

struct XdrBuilder_XdrBuildFunction {
    struct XdrBuilder_XdrBuildFunction__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrBuildFunction__Fields fields;
};

struct XdrBuilder_XdrAttributeEntry__Array {
    struct XdrBuilder_XdrAttributeEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XdrBuilder_XdrAttributeEntry *vector[32];
};

struct __declspec(align(8)) XdrBuilder_XdrEntry__Fields {
    SchemaNames_Token__Enum _Name;
    
    struct Int32__Array *_NextStates;
    struct XdrBuilder_XdrAttributeEntry__Array *_Attributes;
    struct XdrBuilder_XdrInitFunction *_InitFunc;
    struct XdrBuilder_XdrBeginChildFunction *_BeginChildFunc;
    struct XdrBuilder_XdrEndChildFunction *_EndChildFunc;
    bool _AllowText;
};

struct XdrBuilder_XdrEntry {
    struct XdrBuilder_XdrEntry__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrEntry__Fields fields;
};

struct XdrBuilder_XdrInitFunction__Fields {
    struct MulticastDelegate__Fields _;
};

struct XdrBuilder_XdrInitFunction {
    struct XdrBuilder_XdrInitFunction__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrInitFunction__Fields fields;
};

struct XdrBuilder_XdrBeginChildFunction__Fields {
    struct MulticastDelegate__Fields _;
};

struct XdrBuilder_XdrBeginChildFunction {
    struct XdrBuilder_XdrBeginChildFunction__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrBeginChildFunction__Fields fields;
};

struct XdrBuilder_XdrEndChildFunction__Fields {
    struct MulticastDelegate__Fields _;
};

struct XdrBuilder_XdrEndChildFunction {
    struct XdrBuilder_XdrEndChildFunction__Class *klass;
    MonitorData *monitor;
    struct XdrBuilder_XdrEndChildFunction__Fields fields;
};

struct XdrBuilder_XdrEntry__Array {
    struct XdrBuilder_XdrEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XdrBuilder_XdrEntry *vector[32];
};

struct ParticleContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct SymbolsDictionary *symbols;
    struct Positions *positions;
    struct Stack *stack;
    struct SyntaxTreeNode *contentNode;
    bool isPartial;
    int32_t minMaxNodesCount;
    bool enableUpaCheck;
};

struct ParticleContentValidator {
    struct ParticleContentValidator__Class *klass;
    MonitorData *monitor;
    struct ParticleContentValidator__Fields fields;
};

struct __declspec(align(8)) SymbolsDictionary__Fields {
    int32_t last;
    struct Hashtable *names;
    struct Hashtable *wildcards;
    struct ArrayList *particles;
    struct Object *particleLast;
    bool isUpaEnforced;
};

struct SymbolsDictionary {
    struct SymbolsDictionary__Class *klass;
    MonitorData *monitor;
    struct SymbolsDictionary__Fields fields;
};

struct __declspec(align(8)) Positions__Fields {
    struct ArrayList *positions;
};

struct Positions {
    struct Positions__Class *klass;
    MonitorData *monitor;
    struct Positions__Fields fields;
};

struct SyntaxTreeNode {
    struct SyntaxTreeNode__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) LeafNode__Fields {
    int32_t pos;
};

}
