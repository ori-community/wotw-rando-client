namespace app {
    struct TextUtf8RawTextWriter__StaticFields {
    };

    struct TextUtf8RawTextWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextUtf8RawTextWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextUtf8RawTextWriter__VTable vtable;
    };

    struct __declspec(align(8)) ValidatingReaderNodeData__Fields {
        struct String* localName;
        struct String* namespaceUri;
        struct String* prefix;
        struct String* nameWPrefix;
        struct String* rawValue;
        struct String* originalStringValue;
        int32_t depth;
        struct AttributePSVIInfo* attributePSVIInfo;
        XmlNodeType__Enum nodeType;

        int32_t lineNo;
        int32_t linePos;
    };

    struct ValidatingReaderNodeData {
        struct ValidatingReaderNodeData__Class* klass;
        MonitorData* monitor;
        struct ValidatingReaderNodeData__Fields fields;
    };

    struct __declspec(align(8)) AttributePSVIInfo__Fields {
        struct String* localName;
        struct String* namespaceUri;
        struct Object* typedAttributeValue;
        struct XmlSchemaInfo* attributeSchemaInfo;
    };

    struct AttributePSVIInfo {
        struct AttributePSVIInfo__Class* klass;
        MonitorData* monitor;
        struct AttributePSVIInfo__Fields fields;
    };

    struct __declspec(align(8)) XmlSchemaInfo__Fields {
        bool isDefault;
        bool isNil;
        struct XmlSchemaElement* schemaElement;
        struct XmlSchemaAttribute* schemaAttribute;
        struct XmlSchemaType* schemaType;
        struct XmlSchemaSimpleType* memberType;
        XmlSchemaValidity__Enum validity;

        XmlSchemaContentType__Enum contentType;
    };

    struct XmlSchemaInfo {
        struct XmlSchemaInfo__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttributePSVIInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ValidatingReaderNodeData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ValidatingReaderNodeData__VTable vtable;
    };

    struct IXmlLineInfo {
        struct IXmlLineInfo__Class* klass;
        MonitorData* monitor;
    };

    struct IXmlLineInfo__VTable {
        VirtualInvokeData HasLineInfo;
        VirtualInvokeData get_LineNumber;
        VirtualInvokeData get_LinePosition;
    };

    struct IXmlLineInfo__StaticFields {
    };

    struct IXmlLineInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IXmlLineInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IXmlLineInfo__VTable vtable;
    };

    struct __declspec(align(8)) XmlAsyncCheckReader__Fields {
        struct XmlReader* coreReader;
        struct Task* lastTask;
    };

    struct XmlAsyncCheckReader {
        struct XmlAsyncCheckReader__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckReader__Fields fields;
    };

    struct XmlAsyncCheckReader__VTable {
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
    };

    struct XmlAsyncCheckReader__StaticFields {
    };

    struct XmlAsyncCheckReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckReader__VTable vtable;
    };

    struct XmlAsyncCheckReaderWithNS__Fields {
        struct XmlAsyncCheckReader__Fields _;
        struct IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;
    };

    struct XmlAsyncCheckReaderWithNS {
        struct XmlAsyncCheckReaderWithNS__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckReaderWithNS__Fields fields;
    };

    struct XmlAsyncCheckReaderWithNS__VTable {
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
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
    };

    struct XmlAsyncCheckReaderWithNS__StaticFields {
    };

    struct XmlAsyncCheckReaderWithNS__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckReaderWithNS__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckReaderWithNS__VTable vtable;
    };

    struct XmlAsyncCheckReaderWithLineInfo__Fields {
        struct XmlAsyncCheckReader__Fields _;
        struct IXmlLineInfo* readerAsIXmlLineInfo;
    };

    struct XmlAsyncCheckReaderWithLineInfo {
        struct XmlAsyncCheckReaderWithLineInfo__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckReaderWithLineInfo__Fields fields;
    };

    struct XmlAsyncCheckReaderWithLineInfo__VTable {
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
        VirtualInvokeData HasLineInfo_1;
        VirtualInvokeData get_LineNumber_1;
        VirtualInvokeData get_LinePosition_1;
    };

    struct XmlAsyncCheckReaderWithLineInfo__StaticFields {
    };

    struct XmlAsyncCheckReaderWithLineInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckReaderWithLineInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckReaderWithLineInfo__VTable vtable;
    };

    struct XmlAsyncCheckReaderWithLineInfoNS__Fields {
        struct XmlAsyncCheckReaderWithLineInfo__Fields _;
        struct IXmlNamespaceResolver* readerAsIXmlNamespaceResolver;
    };

    struct XmlAsyncCheckReaderWithLineInfoNS {
        struct XmlAsyncCheckReaderWithLineInfoNS__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckReaderWithLineInfoNS__Fields fields;
    };

    struct XmlAsyncCheckReaderWithLineInfoNS__VTable {
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
        VirtualInvokeData HasLineInfo_1;
        VirtualInvokeData get_LineNumber_1;
        VirtualInvokeData get_LinePosition_1;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
    };

    struct XmlAsyncCheckReaderWithLineInfoNS__StaticFields {
    };

    struct XmlAsyncCheckReaderWithLineInfoNS__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckReaderWithLineInfoNS__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckReaderWithLineInfoNS__VTable vtable;
    };

    struct XmlAsyncCheckReaderWithLineInfoNSSchema__Fields {
        struct XmlAsyncCheckReaderWithLineInfoNS__Fields _;
        struct IXmlSchemaInfo* readerAsIXmlSchemaInfo;
    };

    struct XmlAsyncCheckReaderWithLineInfoNSSchema {
        struct XmlAsyncCheckReaderWithLineInfoNSSchema__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckReaderWithLineInfoNSSchema__Fields fields;
    };

    struct XmlAsyncCheckReaderWithLineInfoNSSchema__VTable {
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
        VirtualInvokeData HasLineInfo_1;
        VirtualInvokeData get_LineNumber_1;
        VirtualInvokeData get_LinePosition_1;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupNamespace;
        VirtualInvokeData System_Xml_IXmlNamespaceResolver_LookupPrefix;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_Validity;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_IsDefault;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_IsNil;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_MemberType;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaType;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement;
        VirtualInvokeData System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute;
    };

    struct XmlAsyncCheckReaderWithLineInfoNSSchema__StaticFields {
    };

    struct XmlAsyncCheckReaderWithLineInfoNSSchema__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckReaderWithLineInfoNSSchema__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckReaderWithLineInfoNSSchema__VTable vtable;
    };

    struct XmlAsyncCheckWriter__Fields {
        struct XmlWriter__Fields _;
        struct XmlWriter* coreWriter;
        struct Task* lastTask;
    };

    struct XmlAsyncCheckWriter {
        struct XmlAsyncCheckWriter__Class* klass;
        MonitorData* monitor;
        struct XmlAsyncCheckWriter__Fields fields;
    };

    struct XmlAsyncCheckWriter__VTable {
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

    struct XmlAsyncCheckWriter__StaticFields {
    };

    struct XmlAsyncCheckWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAsyncCheckWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAsyncCheckWriter__VTable vtable;
    };

    struct XmlAutoDetectWriter__Fields {
        struct XmlRawWriter__Fields _;
        struct XmlRawWriter* wrapped;
        struct OnRemoveWriter* onRemove;
        struct XmlWriterSettings* writerSettings;
        struct XmlEventCache* eventCache;
        struct TextWriter* textWriter;
        struct Stream* strm;
    };

    struct XmlAutoDetectWriter {
        struct XmlAutoDetectWriter__Class* klass;
        MonitorData* monitor;
        struct XmlAutoDetectWriter__Fields fields;
    };

    struct StringConcat {
        struct String* s1;
        struct String* s2;
        struct String* s3;
        struct String* s4;
        struct String* delimiter;
        struct List_1_System_String_* strList;
        int32_t idxStr;
    };

    struct StringConcat__Boxed {
        struct StringConcat__Class* klass;
        MonitorData* monitor;
        struct StringConcat fields;
    };

    struct XmlEventCache__Fields {
        struct XmlRawWriter__Fields _;
        struct List_1_System_Xml_XmlEventCache_XmlEvent_* pages;
        struct XmlEventCache_XmlEvent__Array* pageCurr;
        int32_t pageSize;
        bool hasRootNode;
        struct StringConcat singleText;
        struct String* baseUri;
    };

    struct XmlEventCache {
        struct XmlEventCache__Class* klass;
        MonitorData* monitor;
        struct XmlEventCache__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Xml_XmlEventCache_XmlEvent___Fields {
        struct XmlEventCache_XmlEvent__Array__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Xml_XmlEventCache_XmlEvent_ {
        struct List_1_System_Xml_XmlEventCache_XmlEvent___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Xml_XmlEventCache_XmlEvent___Fields fields;
    };

    enum class XmlEventCache_XmlEventType__Enum : int32_t {
        Unknown = 0x00000000,
        DocType = 0x00000001,
        StartElem = 0x00000002,
        StartAttr = 0x00000003,
        EndAttr = 0x00000004,
        CData = 0x00000005,
        Comment = 0x00000006,
        PI = 0x00000007,
        Whitespace = 0x00000008,
        String = 0x00000009,
        Raw = 0x0000000a,
        EntRef = 0x0000000b,
        CharEnt = 0x0000000c,
        SurrCharEnt = 0x0000000d,
        Base64 = 0x0000000e,
        BinHex = 0x0000000f,
        XmlDecl1 = 0x00000010,
        XmlDecl2 = 0x00000011,
        StartContent = 0x00000012,
        EndElem = 0x00000013,
        FullEndElem = 0x00000014,
        Nmsp = 0x00000015,
        EndBase64 = 0x00000016,
        Close = 0x00000017,
        Flush = 0x00000018,
        Dispose = 0x00000019,
    };

    struct XmlEventCache_XmlEventType__Enum__Boxed {
        struct XmlEventCache_XmlEventType__Enum__Class* klass;
        MonitorData* monitor;
        XmlEventCache_XmlEventType__Enum value;
    };

    struct XmlEventCache_XmlEvent {
        XmlEventCache_XmlEventType__Enum eventType;

        struct String* s1;
        struct String* s2;
        struct String* s3;
        struct Object* o;
    };

    struct XmlEventCache_XmlEvent__Boxed {
        struct XmlEventCache_XmlEvent__Class* klass;
        MonitorData* monitor;
        struct XmlEventCache_XmlEvent fields;
    };

    struct XmlEventCache_XmlEvent__Array {
        struct XmlEventCache_XmlEvent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlEventCache_XmlEvent vector[32];
    };

    struct XmlEventCache_XmlEvent__Array__Array {
        struct XmlEventCache_XmlEvent__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlEventCache_XmlEvent__Array* vector[32];
    };

    struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent_ {
        struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___Class* klass;
        MonitorData* monitor;
    };

    struct XmlEventCache_XmlEventType__Enum__VTable {
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

    struct XmlEventCache_XmlEventType__Enum__StaticFields {
    };

    struct XmlEventCache_XmlEventType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEventCache_XmlEventType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEventCache_XmlEventType__Enum__VTable vtable;
    };

    struct XmlEventCache_XmlEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlEventCache_XmlEvent__StaticFields {
    };

    struct XmlEventCache_XmlEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEventCache_XmlEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEventCache_XmlEvent__VTable vtable;
    };

    struct XmlEventCache_XmlEvent__Array__VTable {
    };

    struct XmlEventCache_XmlEvent__Array__StaticFields {
    };

    struct XmlEventCache_XmlEvent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEventCache_XmlEvent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEventCache_XmlEvent__Array__VTable vtable;
    };

    struct XmlEventCache_XmlEvent__Array__Array__VTable {
    };

    struct XmlEventCache_XmlEvent__Array__Array__StaticFields {
    };

    struct XmlEventCache_XmlEvent__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEventCache_XmlEvent__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEventCache_XmlEvent__Array__Array__VTable vtable;
    };

    struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___StaticFields {
    };

    struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Xml_XmlEventCache_XmlEvent___VTable vtable;
    };

    struct List_1_System_Xml_XmlEventCache_XmlEvent___VTable {
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

    struct List_1_System_Xml_XmlEventCache_XmlEvent___StaticFields {
        struct XmlEventCache_XmlEvent__Array__Array* _emptyArray;
    };

    struct List_1_System_Xml_XmlEventCache_XmlEvent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Xml_XmlEventCache_XmlEvent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Xml_XmlEventCache_XmlEvent___VTable vtable;
    };

    struct StringConcat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StringConcat__StaticFields {
    };

    struct StringConcat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringConcat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringConcat__VTable vtable;
    };

    struct XmlEventCache__VTable {
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

    struct XmlEventCache__StaticFields {
    };

} // namespace app
