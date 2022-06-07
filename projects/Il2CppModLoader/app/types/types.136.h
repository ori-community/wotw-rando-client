namespace app {
struct XmlEventCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlEventCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlEventCache__VTable vtable;
};

struct XmlAutoDetectWriter__VTable {
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

struct XmlAutoDetectWriter__StaticFields {
};

struct XmlAutoDetectWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlAutoDetectWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlAutoDetectWriter__VTable vtable;
};

struct XmlEncodedRawTextWriterIndent__Fields {
    struct XmlEncodedRawTextWriter__Fields _;
    int32_t indentLevel;
    bool newLineOnAttributes;
    struct String *indentChars;
    bool mixedContent;
    struct BitStack *mixedContentStack;
    ConformanceLevel__Enum conformanceLevel;
    
};

struct XmlEncodedRawTextWriterIndent {
    struct XmlEncodedRawTextWriterIndent__Class *klass;
    MonitorData *monitor;
    struct XmlEncodedRawTextWriterIndent__Fields fields;
};

struct XmlEncodedRawTextWriterIndent__VTable {
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

struct XmlEncodedRawTextWriterIndent__StaticFields {
};

struct XmlEncodedRawTextWriterIndent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlEncodedRawTextWriterIndent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlEncodedRawTextWriterIndent__VTable vtable;
};

enum class Formatting__Enum : int32_t {
    None = 0x00000000,
    Indented = 0x00000001,
};

struct Formatting__Enum__Boxed {
    struct Formatting__Enum__Class *klass;
    MonitorData *monitor;
    Formatting__Enum value;
    
};

enum class XmlTextWriter_State__Enum : int32_t {
    Start = 0x00000000,
    Prolog = 0x00000001,
    PostDTD = 0x00000002,
    Element = 0x00000003,
    Attribute = 0x00000004,
    Content = 0x00000005,
    AttrOnly = 0x00000006,
    Epilog = 0x00000007,
    Error = 0x00000008,
    Closed = 0x00000009,
};

struct XmlTextWriter_State__Enum__Boxed {
    struct XmlTextWriter_State__Enum__Class *klass;
    MonitorData *monitor;
    XmlTextWriter_State__Enum value;
    
};

enum class XmlTextWriter_Token__Enum : int32_t {
    PI = 0x00000000,
    Doctype = 0x00000001,
    Comment = 0x00000002,
    CData = 0x00000003,
    StartElement = 0x00000004,
    EndElement = 0x00000005,
    LongEndElement = 0x00000006,
    StartAttribute = 0x00000007,
    EndAttribute = 0x00000008,
    Content = 0x00000009,
    Base64 = 0x0000000a,
    RawData = 0x0000000b,
    Whitespace = 0x0000000c,
    Empty = 0x0000000d,
};

struct XmlTextWriter_Token__Enum__Boxed {
    struct XmlTextWriter_Token__Enum__Class *klass;
    MonitorData *monitor;
    XmlTextWriter_Token__Enum value;
    
};

enum class XmlTextWriter_SpecialAttr__Enum : int32_t {
    None = 0x00000000,
    XmlSpace = 0x00000001,
    XmlLang = 0x00000002,
    XmlNs = 0x00000003,
};

struct XmlTextWriter_SpecialAttr__Enum__Boxed {
    struct XmlTextWriter_SpecialAttr__Enum__Class *klass;
    MonitorData *monitor;
    XmlTextWriter_SpecialAttr__Enum value;
    
};

struct XmlTextWriter__Fields {
    struct XmlWriter__Fields _;
    struct TextWriter *textWriter;
    struct XmlTextEncoder *xmlEncoder;
    struct Encoding *encoding;
    Formatting__Enum formatting;
    
    bool indented;
    int32_t indentation;
    uint16_t indentChar;
    struct XmlTextWriter_TagInfo__Array *stack;
    int32_t top;
    struct XmlTextWriter_State__Enum__Array *stateTable;
    XmlTextWriter_State__Enum currentState;
    
    XmlTextWriter_Token__Enum lastToken;
    
    struct XmlTextWriterBase64Encoder *base64Encoder;
    uint16_t quoteChar;
    uint16_t curQuoteChar;
    bool namespaces;
    XmlTextWriter_SpecialAttr__Enum specialAttr;
    
    struct String *prefixForXmlNs;
    bool flush;
    struct XmlTextWriter_Namespace__Array *nsStack;
    int32_t nsTop;
    struct Dictionary_2_System_String_System_Int32_ *nsHashtable;
    bool useNsHashtable;
    struct XmlCharType xmlCharType;
};

struct XmlTextWriter {
    struct XmlTextWriter__Class *klass;
    MonitorData *monitor;
    struct XmlTextWriter__Fields fields;
};

enum class XmlTextWriter_NamespaceState__Enum : int32_t {
    Uninitialized = 0x00000000,
    NotDeclaredButInScope = 0x00000001,
    DeclaredButNotWrittenOut = 0x00000002,
    DeclaredAndWrittenOut = 0x00000003,
};

struct XmlTextWriter_NamespaceState__Enum__Boxed {
    struct XmlTextWriter_NamespaceState__Enum__Class *klass;
    MonitorData *monitor;
    XmlTextWriter_NamespaceState__Enum value;
    
};

struct XmlTextWriter_TagInfo {
    struct String *name;
    struct String *prefix;
    struct String *defaultNs;
    XmlTextWriter_NamespaceState__Enum defaultNsState;
    
    XmlSpace__Enum xmlSpace;
    
    struct String *xmlLang;
    int32_t prevNsTop;
    int32_t prefixCount;
    bool mixed;
};

struct XmlTextWriter_TagInfo__Boxed {
    struct XmlTextWriter_TagInfo__Class *klass;
    MonitorData *monitor;
    struct XmlTextWriter_TagInfo fields;
};

struct XmlTextWriter_TagInfo__Array {
    struct XmlTextWriter_TagInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XmlTextWriter_TagInfo vector[32];
};

struct XmlTextWriter_State__Enum__Array {
    struct XmlTextWriter_State__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    XmlTextWriter_State__Enum vector[32];
};

struct XmlTextWriter_Namespace {
    struct String *prefix;
    struct String *ns;
    bool declared;
    int32_t prevNsIndex;
};

struct XmlTextWriter_Namespace__Boxed {
    struct XmlTextWriter_Namespace__Class *klass;
    MonitorData *monitor;
    struct XmlTextWriter_Namespace fields;
};

struct XmlTextWriter_Namespace__Array {
    struct XmlTextWriter_Namespace__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XmlTextWriter_Namespace vector[32];
};

struct Formatting__Enum__VTable {
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

struct Formatting__Enum__StaticFields {
};

struct Formatting__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Formatting__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Formatting__Enum__VTable vtable;
};

struct XmlTextWriter_NamespaceState__Enum__VTable {
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

struct XmlTextWriter_NamespaceState__Enum__StaticFields {
};

struct XmlTextWriter_NamespaceState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_NamespaceState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_NamespaceState__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_TagInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_TagInfo__VTable vtable;
};

struct XmlTextWriter_TagInfo__Array__VTable {
};

struct XmlTextWriter_TagInfo__Array__StaticFields {
};

struct XmlTextWriter_TagInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_TagInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_TagInfo__Array__VTable vtable;
};

struct XmlTextWriter_State__Enum__VTable {
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

struct XmlTextWriter_State__Enum__StaticFields {
};

struct XmlTextWriter_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_State__Enum__VTable vtable;
};

struct XmlTextWriter_State__Enum__Array__VTable {
};

struct XmlTextWriter_State__Enum__Array__StaticFields {
};

struct XmlTextWriter_State__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_State__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_State__Enum__Array__VTable vtable;
};

struct XmlTextWriter_Token__Enum__VTable {
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

struct XmlTextWriter_Token__Enum__StaticFields {
};

struct XmlTextWriter_Token__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_Token__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_Token__Enum__VTable vtable;
};

struct XmlTextWriter_SpecialAttr__Enum__VTable {
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

struct XmlTextWriter_SpecialAttr__Enum__StaticFields {
};

struct XmlTextWriter_SpecialAttr__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_SpecialAttr__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_SpecialAttr__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_Namespace__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_Namespace__VTable vtable;
};

struct XmlTextWriter_Namespace__Array__VTable {
};

struct XmlTextWriter_Namespace__Array__StaticFields {
};

struct XmlTextWriter_Namespace__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter_Namespace__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter_Namespace__Array__VTable vtable;
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
    struct String__Array *stateName;
    struct String__Array *tokenName;
    struct XmlTextWriter_State__Enum__Array *stateTableDefault;
    struct XmlTextWriter_State__Enum__Array *stateTableDocument;
};

struct XmlTextWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextWriter__VTable vtable;
};

struct XmlReader_XmlReaderDebuggerDisplayProxy {
    struct XmlReader *reader;
};

struct XmlReader_XmlReaderDebuggerDisplayProxy__Boxed {
    struct XmlReader_XmlReaderDebuggerDisplayProxy__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlReader_XmlReaderDebuggerDisplayProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlReader_XmlReaderDebuggerDisplayProxy__VTable vtable;
};

enum class XmlValidatingReaderImpl_ParsingFunction__Enum : int32_t {
    Read = 0x00000000,
    Init = 0x00000001,
    ParseDtdFromContext = 0x00000002,
    ResolveEntityInternally = 0x00000003,
    InReadBinaryContent = 0x00000004,
    ReaderClosed = 0x00000005,
    Error = 0x00000006,
    None = 0x00000007,
};

struct XmlValidatingReaderImpl_ParsingFunction__Enum__Boxed {
    struct XmlValidatingReaderImpl_ParsingFunction__Enum__Class *klass;
    MonitorData *monitor;
    XmlValidatingReaderImpl_ParsingFunction__Enum value;
    
};

struct __declspec(align(8)) XmlValidatingReaderImpl__Fields {
    struct XmlReader *coreReader;
    struct XmlTextReaderImpl *coreReaderImpl;
    struct IXmlNamespaceResolver *coreReaderNSResolver;
    ValidationType__Enum validationType;
    
    struct BaseValidator *validator;
    struct XmlSchemaCollection *schemaCollection;
    bool processIdentityConstraints;
    XmlValidatingReaderImpl_ParsingFunction__Enum parsingFunction;
    
    struct XmlValidatingReaderImpl_ValidationEventHandling *eventHandling;
    struct XmlParserContext *parserContext;
    struct ReadContentAsBinaryHelper *readBinaryHelper;
    struct XmlReader *outerReader;
};

struct XmlValidatingReaderImpl {
    struct XmlValidatingReaderImpl__Class *klass;
    MonitorData *monitor;
    struct XmlValidatingReaderImpl__Fields fields;
};

struct __declspec(align(8)) BaseValidator__Fields {
    struct XmlSchemaCollection *schemaCollection;
    struct IValidationEventHandling *eventHandling;
    struct XmlNameTable *nameTable;
    struct SchemaNames *schemaNames;
    struct PositionInfo *positionInfo;
    struct XmlResolver *xmlResolver;
    struct Uri *baseUri;
    struct SchemaInfo *schemaInfo;
    struct XmlValidatingReaderImpl *reader;
    struct XmlQualifiedName *elementName;
    struct ValidationState *context;
    struct StringBuilder *textValue;
    struct String *textString;
    bool hasSibling;
    bool checkDatatype;
};

struct BaseValidator {
    struct BaseValidator__Class *klass;
    MonitorData *monitor;
    struct BaseValidator__Fields fields;
};

struct __declspec(align(8)) XmlSchemaCollection__Fields {
    struct Hashtable *collection;
    struct XmlNameTable *nameTable;
    struct SchemaNames *schemaNames;
    struct ReaderWriterLock *wLock;
    int32_t timeout;
    bool isThreadSafe;
    struct ValidationEventHandler *validationEventHandler;
    struct XmlResolver *xmlResolver;
};

struct XmlSchemaCollection {
    struct XmlSchemaCollection__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaCollection__Fields fields;
};

struct PositionInfo {
    struct PositionInfo__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) XmlValidatingReaderImpl_ValidationEventHandling__Fields {
    struct XmlValidatingReaderImpl *reader;
    struct ValidationEventHandler *eventHandler;
};

struct XmlValidatingReaderImpl_ValidationEventHandling {
    struct XmlValidatingReaderImpl_ValidationEventHandling__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseValidator__VTable vtable;
};

struct XmlValidatingReaderImpl_ParsingFunction__Enum__VTable {
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

struct XmlValidatingReaderImpl_ParsingFunction__Enum__StaticFields {
};

struct XmlValidatingReaderImpl_ParsingFunction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlValidatingReaderImpl_ParsingFunction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlValidatingReaderImpl_ParsingFunction__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlValidatingReaderImpl_ValidationEventHandling__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct XmlResolver *s_tempResolver;
};

struct XmlValidatingReaderImpl__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlValidatingReaderImpl__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlValidatingReaderImpl__VTable vtable;
};

struct XmlTextReaderImpl_NodeData___VTable {
};

struct XmlTextReaderImpl_NodeData___StaticFields {
};

struct XmlTextReaderImpl_NodeData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlTextReaderImpl_NodeData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlTextReaderImpl_NodeData___VTable vtable;
};

}
