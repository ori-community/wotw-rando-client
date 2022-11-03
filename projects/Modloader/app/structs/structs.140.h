namespace app {
    struct XmlChildEnumerator__StaticFields {
    };

    struct XmlChildEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlChildEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlChildEnumerator__VTable vtable;
    };

    struct XmlEntity__Fields {
        struct XmlNode__Fields _;
        struct String* publicId;
        struct String* systemId;
        struct String* notationName;
        struct String* name;
        struct String* unparsedReplacementStr;
        struct String* baseURI;
        struct XmlLinkedNode* lastChild;
        bool childrenFoliating;
    };

    struct XmlEntity {
        struct XmlEntity__Class* klass;
        MonitorData* monitor;
        struct XmlEntity__Fields fields;
    };

    struct XmlEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ICloneable_Clone;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NodeType;
        VirtualInvokeData get_ParentNode;
        VirtualInvokeData get_ChildNodes;
        VirtualInvokeData get_PreviousSibling;
        VirtualInvokeData get_NextSibling;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_OwnerDocument;
        VirtualInvokeData get_FirstChild;
        VirtualInvokeData get_LastChild;
        VirtualInvokeData get_IsContainer;
        VirtualInvokeData get_LastNode;
        VirtualInvokeData set_LastNode;
        VirtualInvokeData InsertBefore;
        VirtualInvokeData InsertAfter;
        VirtualInvokeData RemoveChild;
        VirtualInvokeData PrependChild;
        VirtualInvokeData AppendChild;
        VirtualInvokeData AppendChildForLoad;
        VirtualInvokeData IsValidChildType;
        VirtualInvokeData CanInsertBefore;
        VirtualInvokeData CanInsertAfter;
        VirtualInvokeData get_HasChildNodes;
        VirtualInvokeData CloneNode;
        VirtualInvokeData CopyChildren;
        VirtualInvokeData get_NamespaceURI;
        VirtualInvokeData get_Prefix;
        VirtualInvokeData set_Prefix;
        VirtualInvokeData get_LocalName;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_InnerText;
        VirtualInvokeData set_InnerText;
        VirtualInvokeData set_InnerXml;
        VirtualInvokeData get_SchemaInfo;
        VirtualInvokeData get_BaseURI;
        VirtualInvokeData WriteTo;
        VirtualInvokeData WriteContentTo;
        VirtualInvokeData RemoveAll;
        VirtualInvokeData GetPrefixOfNamespace;
        VirtualInvokeData SetParent;
        VirtualInvokeData SetParentForLoad;
        VirtualInvokeData FindChild;
        VirtualInvokeData GetEventArgs;
        VirtualInvokeData BeforeEvent;
        VirtualInvokeData AfterEvent;
        VirtualInvokeData get_XmlSpace;
        VirtualInvokeData get_XmlLang;
        VirtualInvokeData get_IsText;
    };

    struct XmlEntity__StaticFields {
    };

    struct XmlEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlEntity__VTable vtable;
    };

    struct __declspec(align(8)) XmlLoader__Fields {
        struct XmlDocument* doc;
        struct XmlReader* reader;
        bool preserveWhitespace;
    };

    struct XmlLoader {
        struct XmlLoader__Class* klass;
        MonitorData* monitor;
        struct XmlLoader__Fields fields;
    };

    struct XmlLoader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlLoader__StaticFields {
    };

    struct XmlLoader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlLoader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlLoader__VTable vtable;
    };

    struct XmlNameEx__Fields {
        struct XmlName__Fields _;
        uint8_t flags;
        struct XmlSchemaSimpleType* memberType;
        struct XmlSchemaType* schemaType;
        struct Object* decl;
    };

    struct XmlNameEx {
        struct XmlNameEx__Class* klass;
        MonitorData* monitor;
        struct XmlNameEx__Fields fields;
    };

    struct XmlNameEx__VTable {
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
        VirtualInvokeData get_Validity_1;
        VirtualInvokeData get_IsDefault_1;
        VirtualInvokeData get_IsNil_1;
        VirtualInvokeData get_MemberType_1;
        VirtualInvokeData get_SchemaType_1;
        VirtualInvokeData get_SchemaElement_1;
        VirtualInvokeData get_SchemaAttribute_1;
        VirtualInvokeData Equals_1;
    };

    struct XmlNameEx__StaticFields {
    };

    struct XmlNameEx__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNameEx__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNameEx__VTable vtable;
    };

    struct __declspec(align(8)) XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Fields {
        struct Object* loneValue;
        int32_t position;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator {
        struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class* klass;
        MonitorData* monitor;
        struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Fields fields;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData get_Current;
        VirtualInvokeData Reset;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__StaticFields {
    };

    struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator__VTable vtable;
    };

    struct DebuggerDisplayXmlNodeProxy {
        struct XmlNode* node;
    };

    struct DebuggerDisplayXmlNodeProxy__Boxed {
        struct DebuggerDisplayXmlNodeProxy__Class* klass;
        MonitorData* monitor;
        struct DebuggerDisplayXmlNodeProxy fields;
    };

    struct DebuggerDisplayXmlNodeProxy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebuggerDisplayXmlNodeProxy__StaticFields {
    };

    struct DebuggerDisplayXmlNodeProxy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebuggerDisplayXmlNodeProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebuggerDisplayXmlNodeProxy__VTable vtable;
    };

    struct __declspec(align(8)) XmlNodeReaderNavigator__Fields {
        struct XmlNode* curNode;
        struct XmlNode* elemNode;
        struct XmlNode* logNode;
        int32_t attrIndex;
        int32_t logAttrIndex;
        struct XmlNameTable* nameTable;
        struct XmlDocument* doc;
        int32_t nAttrInd;
        int32_t nDeclarationAttrCount;
        int32_t nDocTypeAttrCount;
        int32_t nLogLevel;
        int32_t nLogAttrInd;
        bool bLogOnAttrVal;
        bool bCreatedOnAttribute;
        struct XmlNodeReaderNavigator_VirtualAttribute__Array* decNodeAttributes;
        struct XmlNodeReaderNavigator_VirtualAttribute__Array* docTypeNodeAttributes;
        bool bOnAttrVal;
    };

    struct XmlNodeReaderNavigator {
        struct XmlNodeReaderNavigator__Class* klass;
        MonitorData* monitor;
        struct XmlNodeReaderNavigator__Fields fields;
    };

    struct XmlNodeReaderNavigator_VirtualAttribute {
        struct String* name;
        struct String* value;
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Boxed {
        struct XmlNodeReaderNavigator_VirtualAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlNodeReaderNavigator_VirtualAttribute fields;
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Array {
        struct XmlNodeReaderNavigator_VirtualAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlNodeReaderNavigator_VirtualAttribute vector[32];
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__StaticFields {
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeReaderNavigator_VirtualAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeReaderNavigator_VirtualAttribute__VTable vtable;
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Array__VTable {
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Array__StaticFields {
    };

    struct XmlNodeReaderNavigator_VirtualAttribute__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeReaderNavigator_VirtualAttribute__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeReaderNavigator_VirtualAttribute__Array__VTable vtable;
    };

    struct XmlNodeReaderNavigator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlNodeReaderNavigator__StaticFields {
    };

    struct XmlNodeReaderNavigator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeReaderNavigator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeReaderNavigator__VTable vtable;
    };

    struct XmlNodeType___VTable {
    };

    struct XmlNodeType___StaticFields {
    };

    struct XmlNodeType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeType___VTable vtable;
    };

    struct __declspec(align(8)) XmlNodeReader__Fields {
        struct XmlNodeReaderNavigator* readerNav;
        XmlNodeType__Enum nodeType;

        int32_t curDepth;
        ReadState__Enum_1 readState;

        bool fEOF;
        bool bResolveEntity;
        bool bStartFromDocument;
        bool bInReadBinary;
        struct ReadContentAsBinaryHelper* readBinaryHelper;
    };

    struct XmlNodeReader {
        struct XmlNodeReader__Class* klass;
        MonitorData* monitor;
        struct XmlNodeReader__Fields fields;
    };

    struct XmlNodeReader__VTable {
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

    struct XmlNodeReader__StaticFields {
    };

    struct XmlNodeReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeReader__VTable vtable;
    };

    struct XmlNotation__Fields {
        struct XmlNode__Fields _;
        struct String* publicId;
        struct String* systemId;
        struct String* name;
    };

    struct XmlNotation {
        struct XmlNotation__Class* klass;
        MonitorData* monitor;
        struct XmlNotation__Fields fields;
    };

    struct XmlNotation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ICloneable_Clone;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NodeType;
        VirtualInvokeData get_ParentNode;
        VirtualInvokeData get_ChildNodes;
        VirtualInvokeData get_PreviousSibling;
        VirtualInvokeData get_NextSibling;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_OwnerDocument;
        VirtualInvokeData get_FirstChild;
        VirtualInvokeData get_LastChild;
        VirtualInvokeData get_IsContainer;
        VirtualInvokeData get_LastNode;
        VirtualInvokeData set_LastNode;
        VirtualInvokeData InsertBefore;
        VirtualInvokeData InsertAfter;
        VirtualInvokeData RemoveChild;
        VirtualInvokeData PrependChild;
        VirtualInvokeData AppendChild;
        VirtualInvokeData AppendChildForLoad;
        VirtualInvokeData IsValidChildType;
        VirtualInvokeData CanInsertBefore;
        VirtualInvokeData CanInsertAfter;
        VirtualInvokeData get_HasChildNodes;
        VirtualInvokeData CloneNode;
        VirtualInvokeData CopyChildren;
        VirtualInvokeData get_NamespaceURI;
        VirtualInvokeData get_Prefix;
        VirtualInvokeData set_Prefix;
        VirtualInvokeData get_LocalName;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_InnerText;
        VirtualInvokeData set_InnerText;
        VirtualInvokeData set_InnerXml;
        VirtualInvokeData get_SchemaInfo;
        VirtualInvokeData get_BaseURI;
        VirtualInvokeData WriteTo;
        VirtualInvokeData WriteContentTo;
        VirtualInvokeData RemoveAll;
        VirtualInvokeData GetPrefixOfNamespace;
        VirtualInvokeData SetParent;
        VirtualInvokeData SetParentForLoad;
        VirtualInvokeData FindChild;
        VirtualInvokeData GetEventArgs;
        VirtualInvokeData BeforeEvent;
        VirtualInvokeData AfterEvent;
        VirtualInvokeData get_XmlSpace;
        VirtualInvokeData get_XmlLang;
        VirtualInvokeData get_IsText;
    };

    struct XmlNotation__StaticFields {
    };

    struct XmlNotation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNotation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNotation__VTable vtable;
    };

    struct XmlUnspecifiedAttribute__Fields {
        struct XmlAttribute__Fields _;
        bool fSpecified;
    };

    struct XmlUnspecifiedAttribute {
        struct XmlUnspecifiedAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlUnspecifiedAttribute__Fields fields;
    };

    struct XmlUnspecifiedAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ICloneable_Clone;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Value;
        VirtualInvokeData set_Value;
        VirtualInvokeData get_NodeType;
        VirtualInvokeData get_ParentNode;
        VirtualInvokeData get_ChildNodes;
        VirtualInvokeData get_PreviousSibling;
        VirtualInvokeData get_NextSibling;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_OwnerDocument;
        VirtualInvokeData get_FirstChild;
        VirtualInvokeData get_LastChild;
        VirtualInvokeData get_IsContainer;
        VirtualInvokeData get_LastNode;
        VirtualInvokeData set_LastNode;
        VirtualInvokeData InsertBefore;
        VirtualInvokeData InsertAfter;
        VirtualInvokeData RemoveChild;
        VirtualInvokeData PrependChild;
        VirtualInvokeData AppendChild;
        VirtualInvokeData AppendChildForLoad;
        VirtualInvokeData IsValidChildType;
        VirtualInvokeData CanInsertBefore;
        VirtualInvokeData CanInsertAfter;
        VirtualInvokeData get_HasChildNodes;
        VirtualInvokeData CloneNode;
        VirtualInvokeData CopyChildren;
        VirtualInvokeData get_NamespaceURI;
        VirtualInvokeData get_Prefix;
        VirtualInvokeData set_Prefix;
        VirtualInvokeData get_LocalName;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_InnerText;
        VirtualInvokeData set_InnerText;
        VirtualInvokeData set_InnerXml;
        VirtualInvokeData get_SchemaInfo;
        VirtualInvokeData get_BaseURI;
        VirtualInvokeData WriteTo;
        VirtualInvokeData WriteContentTo;
        VirtualInvokeData RemoveAll;
        VirtualInvokeData GetPrefixOfNamespace;
        VirtualInvokeData SetParent;
        VirtualInvokeData SetParentForLoad;
        VirtualInvokeData FindChild;
        VirtualInvokeData GetEventArgs;
        VirtualInvokeData BeforeEvent;
        VirtualInvokeData AfterEvent;
        VirtualInvokeData get_XmlSpace;
        VirtualInvokeData get_XmlLang;
        VirtualInvokeData get_IsText;
        VirtualInvokeData get_Specified;
        VirtualInvokeData get_OwnerElement;
    };

    struct XmlUnspecifiedAttribute__StaticFields {
    };

    struct XmlUnspecifiedAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlUnspecifiedAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlUnspecifiedAttribute__VTable vtable;
    };

    struct __declspec(align(8)) ReaderPositionInfo__Fields {
        struct IXmlLineInfo* lineInfo;
    };

    struct ReaderPositionInfo {
        struct ReaderPositionInfo__Class* klass;
        MonitorData* monitor;
        struct ReaderPositionInfo__Fields fields;
    };

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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReaderPositionInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReaderPositionInfo__VTable vtable;
    };

    enum class DtdParser_ScanningFunction__Enum : int32_t {
        SubsetContent = 0x00000000,
        Name = 0x00000001,
        QName = 0x00000002,
        Nmtoken = 0x00000003,
        Doctype1 = 0x00000004,
        Doctype2 = 0x00000005,
        Element1 = 0x00000006,
        Element2 = 0x00000007,
        Element3 = 0x00000008,
        Element4 = 0x00000009,
        Element5 = 0x0000000a,
        Element6 = 0x0000000b,
        Element7 = 0x0000000c,
        Attlist1 = 0x0000000d,
        Attlist2 = 0x0000000e,
        Attlist3 = 0x0000000f,
        Attlist4 = 0x00000010,
        Attlist5 = 0x00000011,
        Attlist6 = 0x00000012,
        Attlist7 = 0x00000013,
        Entity1 = 0x00000014,
        Entity2 = 0x00000015,
        Entity3 = 0x00000016,
        Notation1 = 0x00000017,
        CondSection1 = 0x00000018,
        CondSection2 = 0x00000019,
        CondSection3 = 0x0000001a,
        Literal = 0x0000001b,
        SystemId = 0x0000001c,
        PublicId1 = 0x0000001d,
        PublicId2 = 0x0000001e,
        ClosingTag = 0x0000001f,
        ParamEntitySpace = 0x00000020,
        None = 0x00000021,
    };

    struct DtdParser_ScanningFunction__Enum__Boxed {
        struct DtdParser_ScanningFunction__Enum__Class* klass;
        MonitorData* monitor;
        DtdParser_ScanningFunction__Enum value;
    };

    struct __declspec(align(8)) DtdParser__Fields {
        struct IDtdParserAdapter* readerAdapter;
        struct IDtdParserAdapterWithValidation* readerAdapterWithValidation;
        struct XmlNameTable* nameTable;
        struct SchemaInfo* schemaInfo;
        struct XmlCharType xmlCharType;
        struct String* systemId;
        struct String* publicId;
        bool normalize;
        bool validate;
        bool supportNamespaces;
        bool v1Compat;
        struct Char__Array* chars;
        int32_t charsUsed;
        int32_t curPos;
        DtdParser_ScanningFunction__Enum scanningFunction;

        DtdParser_ScanningFunction__Enum nextScaningFunction;

        DtdParser_ScanningFunction__Enum savedScanningFunction;

        bool whitespaceSeen;
        int32_t tokenStartPos;
        int32_t colonPos;
        struct StringBuilder* internalSubsetValueSb;
        int32_t externalEntitiesDepth;
        int32_t currentEntityId;
        bool freeFloatingDtd;
        bool hasFreeFloatingInternalSubset;
        struct StringBuilder* stringBuilder;
        int32_t condSectionDepth;
        struct LineInfo literalLineInfo;
        uint16_t literalQuoteChar;
        struct String* documentBaseUri;
        struct String* externalDtdBaseUri;
        struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_* undeclaredNotations;
        struct Int32__Array* condSectionEntityIds;
    };

    struct DtdParser {
        struct DtdParser__Class* klass;
        MonitorData* monitor;
        struct DtdParser__Fields fields;
    };

    struct IDtdParserAdapter {
        struct IDtdParserAdapter__Class* klass;
        MonitorData* monitor;
    };

    struct IDtdParserAdapterWithValidation {
        struct IDtdParserAdapterWithValidation__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct DtdParser_UndeclaredNotation* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ fields;
    };

    struct __declspec(align(8)) DtdParser_UndeclaredNotation__Fields {
        struct String* name;
        int32_t lineNo;
        int32_t linePos;
        struct DtdParser_UndeclaredNotation* next;
    };

    struct DtdParser_UndeclaredNotation {
        struct DtdParser_UndeclaredNotation__Class* klass;
        MonitorData* monitor;
        struct DtdParser_UndeclaredNotation__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
        struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields {
        struct Dictionary_2_System_String_System_Xml_DtdParser_UndeclaredNotation_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_DtdParser_UndeclaredNotation___Fields fields;
    };

    struct DtdParser_UndeclaredNotation__Array {
        struct DtdParser_UndeclaredNotation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DtdParser_UndeclaredNotation* vector[32];
    };

    struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation_ {
        struct IEnumerator_1_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation_ {
        struct ICollection_1_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        struct String* key;
        struct DtdParser_UndeclaredNotation* value;
    };

    struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Boxed {
        struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ fields;
    };

    struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Array {
        struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation_ {
        struct IEnumerable_1_System_Xml_DtdParser_UndeclaredNotation___Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDtdParserAdapter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDtdParserAdapter__VTable vtable;
    };

    struct IDtdParserAdapterWithValidation__VTable {
        VirtualInvokeData get_DtdValidation;
        VirtualInvokeData get_ValidationEventHandling;
    };

    struct IDtdParserAdapterWithValidation__StaticFields {
    };

    struct IDtdParserAdapterWithValidation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDtdParserAdapterWithValidation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDtdParserAdapterWithValidation__VTable vtable;
    };

    struct DtdParser_ScanningFunction__Enum__VTable {
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

    struct DtdParser_ScanningFunction__Enum__StaticFields {
    };

    struct DtdParser_ScanningFunction__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DtdParser_ScanningFunction__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DtdParser_ScanningFunction__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DtdParser_UndeclaredNotation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_DtdParser_UndeclaredNotation___VTable vtable;
    };

} // namespace app
