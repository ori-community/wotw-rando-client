namespace app {
    enum class XmlTextReaderImpl_EntityType__Enum : int32_t {
        CharacterDec = 0x00000000,
        CharacterHex = 0x00000001,
        CharacterNamed = 0x00000002,
        Expanded = 0x00000003,
        Skipped = 0x00000004,
        FakeExpanded = 0x00000005,
        Unexpanded = 0x00000006,
        ExpandedInAttribute = 0x00000007,
    };

    struct XmlTextReaderImpl_EntityType__Enum__Boxed {
        struct XmlTextReaderImpl_EntityType__Enum__Class* klass;
        MonitorData* monitor;
        XmlTextReaderImpl_EntityType__Enum value;
    };

    enum class XmlTextReaderImpl_EntityExpandType__Enum : int32_t {
        All = 0x00000000,
        OnlyGeneral = 0x00000001,
        OnlyCharacter = 0x00000002,
    };

    struct XmlTextReaderImpl_EntityExpandType__Enum__Boxed {
        struct XmlTextReaderImpl_EntityExpandType__Enum__Class* klass;
        MonitorData* monitor;
        XmlTextReaderImpl_EntityExpandType__Enum value;
    };

    struct XmlTextReaderImpl_EntityType__Enum__VTable {
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

    struct XmlTextReaderImpl_EntityType__Enum__StaticFields {
    };

    struct XmlTextReaderImpl_EntityType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_EntityType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_EntityType__Enum__VTable vtable;
    };

    struct XmlTextReaderImpl_EntityExpandType__Enum__VTable {
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

    struct XmlTextReaderImpl_EntityExpandType__Enum__StaticFields {
    };

    struct XmlTextReaderImpl_EntityExpandType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_EntityExpandType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_EntityExpandType__Enum__VTable vtable;
    };

    struct XmlTextReaderImpl_EntityType___VTable {
    };

    struct XmlTextReaderImpl_EntityType___StaticFields {
    };

    struct XmlTextReaderImpl_EntityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_EntityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_EntityType___VTable vtable;
    };

    struct XmlTextReaderImpl_NoNamespaceManager__Fields {
        struct XmlNamespaceManager__Fields _;
    };

    struct XmlTextReaderImpl_NoNamespaceManager {
        struct XmlTextReaderImpl_NoNamespaceManager__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_NoNamespaceManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_NoNamespaceManager__VTable vtable;
    };

    struct __declspec(align(8)) XmlTextReaderImpl_DtdParserProxy__Fields {
        struct XmlTextReaderImpl* reader;
    };

    struct XmlTextReaderImpl_DtdParserProxy {
        struct XmlTextReaderImpl_DtdParserProxy__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_DtdParserProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_DtdParserProxy__VTable vtable;
    };

    struct IComparer_1_System_Object_ {
        struct IComparer_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IComparer_1_System_Object___VTable {
        VirtualInvokeData Compare;
    };

    struct IComparer_1_System_Object___StaticFields {
    };

    struct IComparer_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComparer_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComparer_1_System_Object___VTable vtable;
    };

    struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer {
        struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class* klass;
        MonitorData* monitor;
    };

    struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
    };

    struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__StaticFields {
        struct IComparer_1_System_Object_* s_instance;
    };

    struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__VTable vtable;
    };

    struct XmlUtf8RawTextWriterIndent__Fields {
        struct XmlUtf8RawTextWriter__Fields _;
        int32_t indentLevel;
        bool newLineOnAttributes;
        struct String* indentChars;
        bool mixedContent;
        struct BitStack* mixedContentStack;
        ConformanceLevel__Enum conformanceLevel;
    };

    struct XmlUtf8RawTextWriterIndent {
        struct XmlUtf8RawTextWriterIndent__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlUtf8RawTextWriterIndent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlUtf8RawTextWriterIndent__VTable vtable;
    };

    struct __declspec(align(8)) XmlValidatingReader__Fields {
        struct XmlValidatingReaderImpl* impl;
    };

    struct XmlValidatingReader {
        struct XmlValidatingReader__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlValidatingReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlValidatingReader__VTable vtable;
    };

    enum class XmlWellFormedWriter_SpecialAttribute__Enum : int32_t {
        No = 0x00000000,
        DefaultXmlns = 0x00000001,
        PrefixedXmlns = 0x00000002,
        XmlSpace = 0x00000003,
        XmlLang = 0x00000004,
    };

    struct XmlWellFormedWriter_SpecialAttribute__Enum__Boxed {
        struct XmlWellFormedWriter_SpecialAttribute__Enum__Class* klass;
        MonitorData* monitor;
        XmlWellFormedWriter_SpecialAttribute__Enum value;
    };

    enum class XmlWellFormedWriter_State__Enum : int32_t {
        Start = 0x00000000,
        TopLevel = 0x00000001,
        Document = 0x00000002,
        Element = 0x00000003,
        Content = 0x00000004,
        B64Content = 0x00000005,
        B64Attribute = 0x00000006,
        AfterRootEle = 0x00000007,
        Attribute = 0x00000008,
        SpecialAttr = 0x00000009,
        EndDocument = 0x0000000a,
        RootLevelAttr = 0x0000000b,
        RootLevelSpecAttr = 0x0000000c,
        RootLevelB64Attr = 0x0000000d,
        AfterRootLevelAttr = 0x0000000e,
        Closed = 0x0000000f,
        Error = 0x00000010,
        StartContent = 0x00000065,
        StartContentEle = 0x00000066,
        StartContentB64 = 0x00000067,
        StartDoc = 0x00000068,
        StartDocEle = 0x0000006a,
        EndAttrSEle = 0x0000006b,
        EndAttrEEle = 0x0000006c,
        EndAttrSCont = 0x0000006d,
        EndAttrSAttr = 0x0000006f,
        PostB64Cont = 0x00000070,
        PostB64Attr = 0x00000071,
        PostB64RootAttr = 0x00000072,
        StartFragEle = 0x00000073,
        StartFragCont = 0x00000074,
        StartFragB64 = 0x00000075,
        StartRootLevelAttr = 0x00000076,
    };

    struct XmlWellFormedWriter_State__Enum__Boxed {
        struct XmlWellFormedWriter_State__Enum__Class* klass;
        MonitorData* monitor;
        XmlWellFormedWriter_State__Enum value;
    };

    struct XmlWellFormedWriter__Fields {
        struct XmlWriter__Fields _;
        struct XmlWriter* writer;
        struct XmlRawWriter* rawWriter;
        struct IXmlNamespaceResolver* predefinedNamespaces;
        struct XmlWellFormedWriter_Namespace__Array* nsStack;
        int32_t nsTop;
        struct Dictionary_2_System_String_System_Int32_* nsHashtable;
        bool useNsHashtable;
        struct XmlWellFormedWriter_ElementScope__Array* elemScopeStack;
        int32_t elemTop;
        struct XmlWellFormedWriter_AttrName__Array* attrStack;
        int32_t attrCount;
        struct Dictionary_2_System_String_System_Int32_* attrHashTable;
        XmlWellFormedWriter_SpecialAttribute__Enum specAttr;

        struct XmlWellFormedWriter_AttributeValueCache* attrValueCache;
        struct String* curDeclPrefix;
        struct XmlWellFormedWriter_State__Enum__Array* stateTable;
        XmlWellFormedWriter_State__Enum currentState;

        bool checkCharacters;
        bool omitDuplNamespaces;
        bool writeEndDocumentOnClose;
        ConformanceLevel__Enum conformanceLevel;

        bool dtdWritten;
        bool xmlDeclFollows;
        struct XmlCharType xmlCharType;
        struct SecureStringHasher* hasher;
    };

    struct XmlWellFormedWriter {
        struct XmlWellFormedWriter__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter__Fields fields;
    };

    enum class XmlWellFormedWriter_NamespaceKind__Enum : int32_t {
        Written = 0x00000000,
        NeedToWrite = 0x00000001,
        Implied = 0x00000002,
        Special = 0x00000003,
    };

    struct XmlWellFormedWriter_NamespaceKind__Enum__Boxed {
        struct XmlWellFormedWriter_NamespaceKind__Enum__Class* klass;
        MonitorData* monitor;
        XmlWellFormedWriter_NamespaceKind__Enum value;
    };

    struct XmlWellFormedWriter_Namespace {
        struct String* prefix;
        struct String* namespaceUri;
        XmlWellFormedWriter_NamespaceKind__Enum kind;

        int32_t prevNsIndex;
    };

    struct XmlWellFormedWriter_Namespace__Boxed {
        struct XmlWellFormedWriter_Namespace__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter_Namespace fields;
    };

    struct XmlWellFormedWriter_Namespace__Array {
        struct XmlWellFormedWriter_Namespace__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlWellFormedWriter_Namespace vector[32];
    };

    struct XmlWellFormedWriter_ElementScope {
        int32_t prevNSTop;
        struct String* prefix;
        struct String* localName;
        struct String* namespaceUri;
        XmlSpace__Enum xmlSpace;

        struct String* xmlLang;
    };

    struct XmlWellFormedWriter_ElementScope__Boxed {
        struct XmlWellFormedWriter_ElementScope__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter_ElementScope fields;
    };

    struct XmlWellFormedWriter_ElementScope__Array {
        struct XmlWellFormedWriter_ElementScope__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlWellFormedWriter_ElementScope vector[32];
    };

    struct XmlWellFormedWriter_AttrName {
        struct String* prefix;
        struct String* namespaceUri;
        struct String* localName;
        int32_t prev;
    };

    struct XmlWellFormedWriter_AttrName__Boxed {
        struct XmlWellFormedWriter_AttrName__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter_AttrName fields;
    };

    struct XmlWellFormedWriter_AttrName__Array {
        struct XmlWellFormedWriter_AttrName__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlWellFormedWriter_AttrName vector[32];
    };

    struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache__Fields {
        struct StringBuilder* stringValue;
        struct String* singleStringValue;
        struct XmlWellFormedWriter_AttributeValueCache_Item__Array* items;
        int32_t firstItem;
        int32_t lastItem;
    };

    struct XmlWellFormedWriter_AttributeValueCache {
        struct XmlWellFormedWriter_AttributeValueCache__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter_AttributeValueCache__Fields fields;
    };

    enum class XmlWellFormedWriter_AttributeValueCache_ItemType__Enum : int32_t {
        EntityRef = 0x00000000,
        CharEntity = 0x00000001,
        SurrogateCharEntity = 0x00000002,
        Whitespace = 0x00000003,
        String = 0x00000004,
        StringChars = 0x00000005,
        Raw = 0x00000006,
        RawChars = 0x00000007,
        ValueString = 0x00000008,
    };

    struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Boxed {
        struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class* klass;
        MonitorData* monitor;
        XmlWellFormedWriter_AttributeValueCache_ItemType__Enum value;
    };

    struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache_Item__Fields {
        XmlWellFormedWriter_AttributeValueCache_ItemType__Enum type;

        struct Object* data;
    };

    struct XmlWellFormedWriter_AttributeValueCache_Item {
        struct XmlWellFormedWriter_AttributeValueCache_Item__Class* klass;
        MonitorData* monitor;
        struct XmlWellFormedWriter_AttributeValueCache_Item__Fields fields;
    };

    struct XmlWellFormedWriter_AttributeValueCache_Item__Array {
        struct XmlWellFormedWriter_AttributeValueCache_Item__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlWellFormedWriter_AttributeValueCache_Item* vector[32];
    };

    struct XmlWellFormedWriter_State__Enum__Array {
        struct XmlWellFormedWriter_State__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        XmlWellFormedWriter_State__Enum vector[32];
    };

    struct WriteState__Enum__Array {
        struct WriteState__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        WriteState__Enum vector[32];
    };

    struct XmlWellFormedWriter_NamespaceKind__Enum__VTable {
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

    struct XmlWellFormedWriter_NamespaceKind__Enum__StaticFields {
    };

    struct XmlWellFormedWriter_NamespaceKind__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_NamespaceKind__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_NamespaceKind__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_Namespace__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_Namespace__VTable vtable;
    };

    struct XmlWellFormedWriter_Namespace__Array__VTable {
    };

    struct XmlWellFormedWriter_Namespace__Array__StaticFields {
    };

    struct XmlWellFormedWriter_Namespace__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_Namespace__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_Namespace__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_ElementScope__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_ElementScope__VTable vtable;
    };

    struct XmlWellFormedWriter_ElementScope__Array__VTable {
    };

    struct XmlWellFormedWriter_ElementScope__Array__StaticFields {
    };

    struct XmlWellFormedWriter_ElementScope__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_ElementScope__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_ElementScope__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttrName__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttrName__VTable vtable;
    };

    struct XmlWellFormedWriter_AttrName__Array__VTable {
    };

    struct XmlWellFormedWriter_AttrName__Array__StaticFields {
    };

    struct XmlWellFormedWriter_AttrName__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttrName__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttrName__Array__VTable vtable;
    };

    struct XmlWellFormedWriter_SpecialAttribute__Enum__VTable {
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

    struct XmlWellFormedWriter_SpecialAttribute__Enum__StaticFields {
    };

    struct XmlWellFormedWriter_SpecialAttribute__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_SpecialAttribute__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_SpecialAttribute__Enum__VTable vtable;
    };

    struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__VTable {
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

    struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__StaticFields {
    };

    struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttributeValueCache_Item__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttributeValueCache_Item__VTable vtable;
    };

    struct XmlWellFormedWriter_AttributeValueCache_Item__Array__VTable {
    };

    struct XmlWellFormedWriter_AttributeValueCache_Item__Array__StaticFields {
    };

    struct XmlWellFormedWriter_AttributeValueCache_Item__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttributeValueCache_Item__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttributeValueCache_Item__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_AttributeValueCache__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_AttributeValueCache__VTable vtable;
    };

    struct XmlWellFormedWriter_State__Enum__VTable {
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

    struct XmlWellFormedWriter_State__Enum__StaticFields {
    };

    struct XmlWellFormedWriter_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_State__Enum__VTable vtable;
    };

    struct XmlWellFormedWriter_State__Enum__Array__VTable {
    };

    struct XmlWellFormedWriter_State__Enum__Array__StaticFields {
    };

    struct XmlWellFormedWriter_State__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlWellFormedWriter_State__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlWellFormedWriter_State__Enum__Array__VTable vtable;
    };

} // namespace app
