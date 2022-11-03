namespace app {
    struct NameTable_Entry__Array {
        struct NameTable_Entry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct NameTable_Entry* vector[32];
    };

    struct __declspec(align(8)) DomNameTable__Fields {
        struct XmlName__Array* entries;
        int32_t count;
        int32_t mask;
        struct XmlDocument* ownerDocument;
        struct XmlNameTable* nameTable;
    };

    struct DomNameTable {
        struct DomNameTable__Class* klass;
        MonitorData* monitor;
        struct DomNameTable__Fields fields;
    };

    struct __declspec(align(8)) XmlName__Fields {
        struct String* prefix;
        struct String* localName;
        struct String* ns;
        struct String* name;
        int32_t hashCode;
        struct XmlDocument* ownerDoc;
        struct XmlName* next;
    };

    struct XmlName {
        struct XmlName__Class* klass;
        MonitorData* monitor;
        struct XmlName__Fields fields;
    };

    enum class XmlSchemaValidity__Enum : int32_t {
        NotKnown = 0x00000000,
        Valid = 0x00000001,
        Invalid = 0x00000002,
    };

    struct XmlSchemaValidity__Enum__Boxed {
        struct XmlSchemaValidity__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaValidity__Enum value;
    };

    struct __declspec(align(8)) XmlSchemaObject__Fields {
        int32_t lineNum;
        int32_t linePos;
        struct String* sourceUri;
        struct XmlSerializerNamespaces* namespaces;
        struct XmlSchemaObject* parent;
        bool isProcessing;
    };

    struct XmlSchemaObject {
        struct XmlSchemaObject__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaObject__Fields fields;
    };

    struct XmlSchemaAnnotated__Fields {
        struct XmlSchemaObject__Fields _;
        struct String* id;
        struct XmlSchemaAnnotation* annotation;
        struct XmlAttribute__Array* moreAttributes;
    };

    struct XmlSchemaAnnotated {
        struct XmlSchemaAnnotated__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaAnnotated__Fields fields;
    };

    enum class XmlSchemaDerivationMethod__Enum : int32_t {
        Empty = 0x00000000,
        Substitution = 0x00000001,
        Extension = 0x00000002,
        Restriction = 0x00000004,
        List = 0x00000008,
        Union = 0x00000010,
        All = 0x000000ff,
        None = 0x00000100,
    };

    struct XmlSchemaDerivationMethod__Enum__Boxed {
        struct XmlSchemaDerivationMethod__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaDerivationMethod__Enum value;
    };

    enum class XmlSchemaContentType__Enum : int32_t {
        TextOnly = 0x00000000,
        Empty = 0x00000001,
        ElementOnly = 0x00000002,
        Mixed = 0x00000003,
    };

    struct XmlSchemaContentType__Enum__Boxed {
        struct XmlSchemaContentType__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaContentType__Enum value;
    };

    struct XmlSchemaType__Fields {
        struct XmlSchemaAnnotated__Fields _;
        struct String* name;
        XmlSchemaDerivationMethod__Enum final_1;

        XmlSchemaDerivationMethod__Enum derivedBy;

        struct XmlSchemaType* baseSchemaType;
        struct XmlSchemaDatatype* datatype;
        XmlSchemaDerivationMethod__Enum finalResolved;

        struct SchemaElementDecl* elementDecl;
        struct XmlQualifiedName* qname;
        struct XmlSchemaType* redefined;
        XmlSchemaContentType__Enum contentType;
    };

    struct XmlSchemaType {
        struct XmlSchemaType__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaType__Fields fields;
    };

    struct XmlSchemaSimpleType__Fields {
        struct XmlSchemaType__Fields _;
        struct XmlSchemaSimpleTypeContent* content;
    };

    struct XmlSchemaSimpleType {
        struct XmlSchemaSimpleType__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaSimpleType__Fields fields;
    };

    struct __declspec(align(8)) XmlSerializerNamespaces__Fields {
        struct Hashtable* namespaces;
    };

    struct XmlSerializerNamespaces {
        struct XmlSerializerNamespaces__Class* klass;
        MonitorData* monitor;
        struct XmlSerializerNamespaces__Fields fields;
    };

    struct XmlSchemaObjectCollection__Fields {
        struct CollectionBase__Fields _;
        struct XmlSchemaObject* parent;
    };

    struct XmlSchemaObjectCollection {
        struct XmlSchemaObjectCollection__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaObjectCollection__Fields fields;
    };

    struct XmlAttribute__Fields {
        struct XmlNode__Fields _;
        struct XmlName* name;
        struct XmlLinkedNode* lastChild;
    };

    struct XmlAttribute {
        struct XmlAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlAttribute__Fields fields;
    };

    struct XmlLinkedNode__Fields {
        struct XmlNode__Fields _;
        struct XmlLinkedNode* next;
    };

    struct XmlLinkedNode {
        struct XmlLinkedNode__Class* klass;
        MonitorData* monitor;
        struct XmlLinkedNode__Fields fields;
    };

    struct XmlCharacterData__Fields {
        struct XmlLinkedNode__Fields _;
        struct String* data;
    };

    struct XmlCharacterData {
        struct XmlCharacterData__Class* klass;
        MonitorData* monitor;
        struct XmlCharacterData__Fields fields;
    };

    struct XmlCDataSection__Fields {
        struct XmlCharacterData__Fields _;
    };

    struct XmlCDataSection {
        struct XmlCDataSection__Class* klass;
        MonitorData* monitor;
        struct XmlCDataSection__Fields fields;
    };

    enum class XmlNodeType__Enum : int32_t {
        None = 0x00000000,
        Element = 0x00000001,
        Attribute = 0x00000002,
        Text = 0x00000003,
        CDATA = 0x00000004,
        EntityReference = 0x00000005,
        Entity = 0x00000006,
        ProcessingInstruction = 0x00000007,
        Comment = 0x00000008,
        Document = 0x00000009,
        DocumentType = 0x0000000a,
        DocumentFragment = 0x0000000b,
        Notation = 0x0000000c,
        Whitespace = 0x0000000d,
        SignificantWhitespace = 0x0000000e,
        EndElement = 0x0000000f,
        EndEntity = 0x00000010,
        XmlDeclaration = 0x00000011,
    };

    struct XmlNodeType__Enum__Boxed {
        struct XmlNodeType__Enum__Class* klass;
        MonitorData* monitor;
        XmlNodeType__Enum value;
    };

    struct XmlNodeList {
        struct XmlNodeList__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) XmlChildNodes__Fields {
        struct XmlNode* container;
    };

    struct XmlChildNodes {
        struct XmlChildNodes__Class* klass;
        MonitorData* monitor;
        struct XmlChildNodes__Fields fields;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList {
        struct Object* field;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList__Boxed {
        struct XmlNamedNodeMap_SmallXmlNodeList__Class* klass;
        MonitorData* monitor;
        struct XmlNamedNodeMap_SmallXmlNodeList fields;
    };

    struct __declspec(align(8)) XmlNamedNodeMap__Fields {
        struct XmlNode* parent;
        struct XmlNamedNodeMap_SmallXmlNodeList nodes;
    };

    struct XmlNamedNodeMap {
        struct XmlNamedNodeMap__Class* klass;
        MonitorData* monitor;
        struct XmlNamedNodeMap__Fields fields;
    };

    struct XmlAttributeCollection__Fields {
        struct XmlNamedNodeMap__Fields _;
    };

    struct XmlAttributeCollection {
        struct XmlAttributeCollection__Class* klass;
        MonitorData* monitor;
        struct XmlAttributeCollection__Fields fields;
    };

    struct IXmlSchemaInfo {
        struct IXmlSchemaInfo__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) XmlWriter__Fields {
        struct Char__Array* writeNodeBuffer;
    };

    struct XmlWriter {
        struct XmlWriter__Class* klass;
        MonitorData* monitor;
        struct XmlWriter__Fields fields;
    };

    struct XmlRawWriter__Fields {
        struct XmlWriter__Fields _;
        struct XmlRawWriterBase64Encoder* base64Encoder;
        struct IXmlNamespaceResolver* resolver;
    };

    struct XmlRawWriter {
        struct XmlRawWriter__Class* klass;
        MonitorData* monitor;
        struct XmlRawWriter__Fields fields;
    };

    struct __declspec(align(8)) Base64Encoder__Fields {
        struct Byte__Array* leftOverBytes;
        int32_t leftOverBytesCount;
        struct Char__Array* charsLine;
    };

    struct Base64Encoder {
        struct Base64Encoder__Class* klass;
        MonitorData* monitor;
        struct Base64Encoder__Fields fields;
    };

    struct XmlRawWriterBase64Encoder__Fields {
        struct Base64Encoder__Fields _;
        struct XmlRawWriter* rawWriter;
    };

    struct XmlRawWriterBase64Encoder {
        struct XmlRawWriterBase64Encoder__Class* klass;
        MonitorData* monitor;
        struct XmlRawWriterBase64Encoder__Fields fields;
    };

    struct IXmlNamespaceResolver {
        struct IXmlNamespaceResolver__Class* klass;
        MonitorData* monitor;
    };

    struct XmlCharType {
        struct Byte__Array* charProperties;
    };

    struct XmlCharType__Boxed {
        struct XmlCharType__Class* klass;
        MonitorData* monitor;
        struct XmlCharType fields;
    };

    enum class NewLineHandling__Enum : int32_t {
        Replace = 0x00000000,
        Entitize = 0x00000001,
        None = 0x00000002,
    };

    struct NewLineHandling__Enum__Boxed {
        struct NewLineHandling__Enum__Class* klass;
        MonitorData* monitor;
        NewLineHandling__Enum value;
    };

    enum class XmlStandalone__Enum : int32_t {
        Omit = 0x00000000,
        Yes = 0x00000001,
        No = 0x00000002,
    };

    struct XmlStandalone__Enum__Boxed {
        struct XmlStandalone__Enum__Class* klass;
        MonitorData* monitor;
        XmlStandalone__Enum value;
    };

    enum class XmlOutputMethod__Enum : int32_t {
        Xml = 0x00000000,
        Html = 0x00000001,
        Text = 0x00000002,
        AutoDetect = 0x00000003,
    };

    struct XmlOutputMethod__Enum__Boxed {
        struct XmlOutputMethod__Enum__Class* klass;
        MonitorData* monitor;
        XmlOutputMethod__Enum value;
    };

    struct XmlEncodedRawTextWriter__Fields {
        struct XmlRawWriter__Fields _;
        bool useAsync;
        struct Byte__Array* bufBytes;
        struct Stream* stream;
        struct Encoding* encoding;
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
        struct Char__Array* bufChars;
        struct Encoder* encoder;
        struct TextWriter* writer;
        bool trackTextContent;
        bool inTextContent;
        int32_t lastMarkPos;
        struct Int32__Array* textContentMarks;
        struct CharEntityEncoderFallback* charEntityFallback;
        NewLineHandling__Enum newLineHandling;

        bool closeOutput;
        bool omitXmlDeclaration;
        struct String* newLineChars;
        bool checkCharacters;
        XmlStandalone__Enum standalone;

        XmlOutputMethod__Enum outputMethod;

        bool autoXmlDeclaration;
        bool mergeCDataSections;
    };

    struct XmlEncodedRawTextWriter {
        struct XmlEncodedRawTextWriter__Class* klass;
        MonitorData* monitor;
        struct XmlEncodedRawTextWriter__Fields fields;
    };

    enum class ElementProperties__Enum : uint32_t {
        DEFAULT = 0x00000000,
        URI_PARENT = 0x00000001,
        BOOL_PARENT = 0x00000002,
        NAME_PARENT = 0x00000004,
        EMPTY = 0x00000008,
        NO_ENTITIES = 0x00000010,
        HEAD = 0x00000020,
        BLOCK_WS = 0x00000040,
        HAS_NS = 0x00000080,
    };

    struct ElementProperties__Enum__Boxed {
        struct ElementProperties__Enum__Class* klass;
        MonitorData* monitor;
        ElementProperties__Enum value;
    };

    enum class AttributeProperties__Enum : uint32_t {
        DEFAULT = 0x00000000,
        URI = 0x00000001,
        BOOLEAN = 0x00000002,
        NAME = 0x00000004,
    };

    struct AttributeProperties__Enum__Boxed {
        struct AttributeProperties__Enum__Class* klass;
        MonitorData* monitor;
        AttributeProperties__Enum value;
    };

    struct HtmlEncodedRawTextWriter__Fields {
        struct XmlEncodedRawTextWriter__Fields _;
        struct ByteStack* elementScope;
        ElementProperties__Enum currentElementProperties;

        AttributeProperties__Enum currentAttributeProperties;

        bool endsWithAmpersand;
        struct Byte__Array* uriEscapingBuffer;
        struct String* mediaType;
        bool doNotEscapeUriAttributes;
    };

    struct HtmlEncodedRawTextWriter {
        struct HtmlEncodedRawTextWriter__Class* klass;
        MonitorData* monitor;
        struct HtmlEncodedRawTextWriter__Fields fields;
    };

    struct CharEntityEncoderFallback__Fields {
        struct EncoderFallback__Fields _;
        struct CharEntityEncoderFallbackBuffer* fallbackBuffer;
        struct Int32__Array* textContentMarks;
        int32_t endMarkPos;
        int32_t curMarkPos;
        int32_t startOffset;
    };

    struct CharEntityEncoderFallback {
        struct CharEntityEncoderFallback__Class* klass;
        MonitorData* monitor;
        struct CharEntityEncoderFallback__Fields fields;
    };

    struct CharEntityEncoderFallbackBuffer__Fields {
        struct EncoderFallbackBuffer__Fields _;
        struct CharEntityEncoderFallback* parent;
        struct String* charEntity;
        int32_t charEntityIndex;
    };

    struct CharEntityEncoderFallbackBuffer {
        struct CharEntityEncoderFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct CharEntityEncoderFallbackBuffer__Fields fields;
    };

    enum class WriteState__Enum : int32_t {
        Start = 0x00000000,
        Prolog = 0x00000001,
        Element = 0x00000002,
        Attribute = 0x00000003,
        Content = 0x00000004,
        Closed = 0x00000005,
        Error = 0x00000006,
    };

    struct WriteState__Enum__Boxed {
        struct WriteState__Enum__Class* klass;
        MonitorData* monitor;
        WriteState__Enum value;
    };

    struct XmlReader {
        struct XmlReader__Class* klass;
        MonitorData* monitor;
    };

    enum class ConformanceLevel__Enum : int32_t {
        Auto = 0x00000000,
        Fragment = 0x00000001,
        Document = 0x00000002,
    };

    struct ConformanceLevel__Enum__Boxed {
        struct ConformanceLevel__Enum__Class* klass;
        MonitorData* monitor;
        ConformanceLevel__Enum value;
    };

    enum class DtdProcessing__Enum : int32_t {
        Prohibit = 0x00000000,
        Ignore = 0x00000001,
        Parse = 0x00000002,
    };

    struct DtdProcessing__Enum__Boxed {
        struct DtdProcessing__Enum__Class* klass;
        MonitorData* monitor;
        DtdProcessing__Enum value;
    };

    enum class ValidationType__Enum : int32_t {
        None = 0x00000000,
        Auto = 0x00000001,
        DTD = 0x00000002,
        XDR = 0x00000003,
        Schema = 0x00000004,
    };

    struct ValidationType__Enum__Boxed {
        struct ValidationType__Enum__Class* klass;
        MonitorData* monitor;
        ValidationType__Enum value;
    };

    enum class XmlSchemaValidationFlags__Enum : int32_t {
        None = 0x00000000,
        ProcessInlineSchema = 0x00000001,
        ProcessSchemaLocation = 0x00000002,
        ReportValidationWarnings = 0x00000004,
        ProcessIdentityConstraints = 0x00000008,
        AllowXmlAttributes = 0x00000010,
    };

    struct XmlSchemaValidationFlags__Enum__Boxed {
        struct XmlSchemaValidationFlags__Enum__Class* klass;
        MonitorData* monitor;
        XmlSchemaValidationFlags__Enum value;
    };

    struct __declspec(align(8)) XmlReaderSettings__Fields {
        bool useAsync;
        struct XmlNameTable* nameTable;
        struct XmlResolver* xmlResolver;
        int32_t lineNumberOffset;
        int32_t linePositionOffset;
        ConformanceLevel__Enum conformanceLevel;

        bool checkCharacters;
        int64_t maxCharactersInDocument;
        int64_t maxCharactersFromEntities;
        bool ignoreWhitespace;
        bool ignorePIs;
        bool ignoreComments;
        DtdProcessing__Enum dtdProcessing;

        ValidationType__Enum validationType;

        XmlSchemaValidationFlags__Enum validationFlags;

        struct XmlSchemaSet* schemas;
        struct ValidationEventHandler* valEventHandler;
        bool closeInput;
        bool isReadOnly;
        bool _IsXmlResolverSet_k__BackingField;
    };

    struct XmlReaderSettings {
        struct XmlReaderSettings__Class* klass;
        MonitorData* monitor;
        struct XmlReaderSettings__Fields fields;
    };

    struct XmlResolver {
        struct XmlResolver__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) XmlUrlResolver__Fields {
        struct ICredentials* _credentials;
        struct IWebProxy* _proxy;
        struct RequestCachePolicy* _cachePolicy;
    };

    struct XmlUrlResolver {
        struct XmlUrlResolver__Class* klass;
        MonitorData* monitor;
        struct XmlUrlResolver__Fields fields;
    };

    struct __declspec(align(8)) XmlSchemaSet__Fields {
        struct XmlNameTable* nameTable;
        struct SchemaNames* schemaNames;
        struct SortedList* schemas;
        struct ValidationEventHandler* internalEventHandler;
        struct ValidationEventHandler* eventHandler;
        bool isCompiled;
        struct Hashtable* schemaLocations;
        struct Hashtable* chameleonSchemas;
        struct Hashtable* targetNamespaces;
        bool compileAll;
        struct SchemaInfo* cachedCompiledInfo;
        struct XmlReaderSettings* readerSettings;
        struct XmlSchema* schemaForSchema;
        struct XmlSchemaCompilationSettings* compilationSettings;
        struct XmlSchemaObjectTable* elements;
        struct XmlSchemaObjectTable* attributes;
        struct XmlSchemaObjectTable* schemaTypes;
        struct XmlSchemaObjectTable* substitutionGroups;
        struct XmlSchemaObjectTable* typeExtensions;
        struct Object* internalSyncObject;
    };

    struct XmlSchemaSet {
        struct XmlSchemaSet__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaSet__Fields fields;
    };

    struct __declspec(align(8)) SchemaNames__Fields {
        struct XmlNameTable* nameTable;
        struct String* NsDataType;
        struct String* NsDataTypeAlias;
        struct String* NsDataTypeOld;
        struct String* NsXml;
        struct String* NsXmlNs;
        struct String* NsXdr;
        struct String* NsXdrAlias;
        struct String* NsXs;
        struct String* NsXsi;
        struct String* XsiType;
        struct String* XsiNil;
        struct String* XsiSchemaLocation;
        struct String* XsiNoNamespaceSchemaLocation;
        struct String* XsdSchema;
        struct String* XdrSchema;
        struct XmlQualifiedName* QnPCData;
        struct XmlQualifiedName* QnXml;
        struct XmlQualifiedName* QnXmlNs;
        struct XmlQualifiedName* QnDtDt;
        struct XmlQualifiedName* QnXmlLang;
        struct XmlQualifiedName* QnName;
        struct XmlQualifiedName* QnType;
        struct XmlQualifiedName* QnMaxOccurs;
        struct XmlQualifiedName* QnMinOccurs;
        struct XmlQualifiedName* QnInfinite;
        struct XmlQualifiedName* QnModel;
        struct XmlQualifiedName* QnOpen;
        struct XmlQualifiedName* QnClosed;
        struct XmlQualifiedName* QnContent;
        struct XmlQualifiedName* QnMixed;
        struct XmlQualifiedName* QnEmpty;
        struct XmlQualifiedName* QnEltOnly;
        struct XmlQualifiedName* QnTextOnly;
        struct XmlQualifiedName* QnOrder;
        struct XmlQualifiedName* QnSeq;
        struct XmlQualifiedName* QnOne;
        struct XmlQualifiedName* QnMany;
        struct XmlQualifiedName* QnRequired;
        struct XmlQualifiedName* QnYes;
        struct XmlQualifiedName* QnNo;
        struct XmlQualifiedName* QnString;
        struct XmlQualifiedName* QnID;
        struct XmlQualifiedName* QnIDRef;
        struct XmlQualifiedName* QnIDRefs;
        struct XmlQualifiedName* QnEntity;
        struct XmlQualifiedName* QnEntities;
        struct XmlQualifiedName* QnNmToken;
        struct XmlQualifiedName* QnNmTokens;
        struct XmlQualifiedName* QnEnumeration;
        struct XmlQualifiedName* QnDefault;
        struct XmlQualifiedName* QnXdrSchema;
        struct XmlQualifiedName* QnXdrElementType;
        struct XmlQualifiedName* QnXdrElement;
        struct XmlQualifiedName* QnXdrGroup;
        struct XmlQualifiedName* QnXdrAttributeType;
        struct XmlQualifiedName* QnXdrAttribute;
        struct XmlQualifiedName* QnXdrDataType;
        struct XmlQualifiedName* QnXdrDescription;
        struct XmlQualifiedName* QnXdrExtends;
        struct XmlQualifiedName* QnXdrAliasSchema;
        struct XmlQualifiedName* QnDtType;
        struct XmlQualifiedName* QnDtValues;
        struct XmlQualifiedName* QnDtMaxLength;
        struct XmlQualifiedName* QnDtMinLength;
        struct XmlQualifiedName* QnDtMax;
        struct XmlQualifiedName* QnDtMin;
        struct XmlQualifiedName* QnDtMinExclusive;
        struct XmlQualifiedName* QnDtMaxExclusive;
        struct XmlQualifiedName* QnTargetNamespace;
        struct XmlQualifiedName* QnVersion;
        struct XmlQualifiedName* QnFinalDefault;
        struct XmlQualifiedName* QnBlockDefault;
        struct XmlQualifiedName* QnFixed;
        struct XmlQualifiedName* QnAbstract;
        struct XmlQualifiedName* QnBlock;
        struct XmlQualifiedName* QnSubstitutionGroup;
        struct XmlQualifiedName* QnFinal;
        struct XmlQualifiedName* QnNillable;
        struct XmlQualifiedName* QnRef;
        struct XmlQualifiedName* QnBase;
        struct XmlQualifiedName* QnDerivedBy;
        struct XmlQualifiedName* QnNamespace;
        struct XmlQualifiedName* QnProcessContents;
        struct XmlQualifiedName* QnRefer;
        struct XmlQualifiedName* QnPublic;
        struct XmlQualifiedName* QnSystem;
        struct XmlQualifiedName* QnSchemaLocation;
        struct XmlQualifiedName* QnValue;
        struct XmlQualifiedName* QnUse;
        struct XmlQualifiedName* QnForm;
        struct XmlQualifiedName* QnElementFormDefault;
        struct XmlQualifiedName* QnAttributeFormDefault;
        struct XmlQualifiedName* QnItemType;
        struct XmlQualifiedName* QnMemberTypes;
        struct XmlQualifiedName* QnXPath;
        struct XmlQualifiedName* QnXsdSchema;
        struct XmlQualifiedName* QnXsdAnnotation;
        struct XmlQualifiedName* QnXsdInclude;
        struct XmlQualifiedName* QnXsdImport;
        struct XmlQualifiedName* QnXsdElement;
        struct XmlQualifiedName* QnXsdAttribute;
        struct XmlQualifiedName* QnXsdAttributeGroup;
        struct XmlQualifiedName* QnXsdAnyAttribute;
        struct XmlQualifiedName* QnXsdGroup;
        struct XmlQualifiedName* QnXsdAll;
        struct XmlQualifiedName* QnXsdChoice;
        struct XmlQualifiedName* QnXsdSequence;
        struct XmlQualifiedName* QnXsdAny;
        struct XmlQualifiedName* QnXsdNotation;
        struct XmlQualifiedName* QnXsdSimpleType;
        struct XmlQualifiedName* QnXsdComplexType;
        struct XmlQualifiedName* QnXsdUnique;
        struct XmlQualifiedName* QnXsdKey;
        struct XmlQualifiedName* QnXsdKeyRef;
        struct XmlQualifiedName* QnXsdSelector;
        struct XmlQualifiedName* QnXsdField;
        struct XmlQualifiedName* QnXsdMinExclusive;
        struct XmlQualifiedName* QnXsdMinInclusive;
        struct XmlQualifiedName* QnXsdMaxInclusive;
        struct XmlQualifiedName* QnXsdMaxExclusive;
        struct XmlQualifiedName* QnXsdTotalDigits;
        struct XmlQualifiedName* QnXsdFractionDigits;
        struct XmlQualifiedName* QnXsdLength;
        struct XmlQualifiedName* QnXsdMinLength;
        struct XmlQualifiedName* QnXsdMaxLength;
        struct XmlQualifiedName* QnXsdEnumeration;
        struct XmlQualifiedName* QnXsdPattern;
        struct XmlQualifiedName* QnXsdDocumentation;
        struct XmlQualifiedName* QnXsdAppinfo;
        struct XmlQualifiedName* QnSource;
        struct XmlQualifiedName* QnXsdComplexContent;
        struct XmlQualifiedName* QnXsdSimpleContent;
        struct XmlQualifiedName* QnXsdRestriction;
        struct XmlQualifiedName* QnXsdExtension;
        struct XmlQualifiedName* QnXsdUnion;
        struct XmlQualifiedName* QnXsdList;
        struct XmlQualifiedName* QnXsdWhiteSpace;
        struct XmlQualifiedName* QnXsdRedefine;
        struct XmlQualifiedName* QnXsdAnyType;
        struct XmlQualifiedName__Array* TokenToQName;
    };

    struct SchemaNames {
        struct SchemaNames__Class* klass;
        MonitorData* monitor;
        struct SchemaNames__Fields fields;
    };

    struct __declspec(align(8)) XmlQualifiedName__Fields {
        struct String* name;
        struct String* ns;
        int32_t hash;
    };

    struct XmlQualifiedName {
        struct XmlQualifiedName__Class* klass;
        MonitorData* monitor;
        struct XmlQualifiedName__Fields fields;
    };

    struct XmlQualifiedName_HashCodeOfStringDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct XmlQualifiedName_HashCodeOfStringDelegate {
        struct XmlQualifiedName_HashCodeOfStringDelegate__Class* klass;
        MonitorData* monitor;
        struct XmlQualifiedName_HashCodeOfStringDelegate__Fields fields;
    };

    struct XmlQualifiedName__Array {
        struct XmlQualifiedName__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlQualifiedName* vector[32];
    };

    struct ValidationEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct ValidationEventHandler {
        struct ValidationEventHandler__Class* klass;
        MonitorData* monitor;
        struct ValidationEventHandler__Fields fields;
    };

    enum class XmlSeverityType__Enum : int32_t {
        Error = 0x00000000,
        Warning = 0x00000001,
    };

    struct XmlSeverityType__Enum__Boxed {
        struct XmlSeverityType__Enum__Class* klass;
        MonitorData* monitor;
        XmlSeverityType__Enum value;
    };

    struct __declspec(align(8)) ValidationEventArgs__Fields {
        struct XmlSchemaException* ex;
        XmlSeverityType__Enum severity;
    };

    struct ValidationEventArgs {
        struct ValidationEventArgs__Class* klass;
        MonitorData* monitor;
        struct ValidationEventArgs__Fields fields;
    };

    struct XmlSchemaException__Fields {
        struct SystemException__Fields _;
        struct String* res;
        struct String__Array* args;
        struct String* sourceUri;
        int32_t lineNumber;
        int32_t linePosition;
        struct XmlSchemaObject* sourceSchemaObject;
        struct String* message;
    };

    struct XmlSchemaException {
        struct XmlSchemaException__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaException__Fields fields;
    };

    enum class SchemaType__Enum : int32_t {
        None = 0x00000000,
        DTD = 0x00000001,
        XDR = 0x00000002,
        XSD = 0x00000003,
    };

    struct SchemaType__Enum__Boxed {
        struct SchemaType__Enum__Class* klass;
        MonitorData* monitor;
        SchemaType__Enum value;
    };

    struct __declspec(align(8)) SchemaInfo__Fields {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* elementDecls;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* undeclaredElementDecls;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* generalEntities;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_* parameterEntities;
        struct XmlQualifiedName* docTypeName;
        struct String* internalDtdSubset;
        bool hasNonCDataAttributes;
        bool hasDefaultAttributes;
        struct Dictionary_2_System_String_System_Boolean_* targetNamespaces;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_* attributeDecls;
        int32_t errorCount;
        SchemaType__Enum schemaType;

        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* elementDeclsByType;
        struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_* notations;
    };

    struct SchemaInfo {
        struct SchemaInfo__Class* klass;
        MonitorData* monitor;
        struct SchemaInfo__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Xml_XmlQualifiedName_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
        int32_t hashCode;
        int32_t next;
        struct XmlQualifiedName* key;
        struct SchemaElementDecl* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ fields;
    };

    enum class SchemaDeclBase_Use__Enum : int32_t {
        Default = 0x00000000,
        Required = 0x00000001,
        Implied = 0x00000002,
        Fixed = 0x00000003,
        RequiredFixed = 0x00000004,
    };

    struct SchemaDeclBase_Use__Enum__Boxed {
        struct SchemaDeclBase_Use__Enum__Class* klass;
        MonitorData* monitor;
        SchemaDeclBase_Use__Enum value;
    };

    struct __declspec(align(8)) SchemaDeclBase__Fields {
        struct XmlQualifiedName* name;
        struct String* prefix;
        bool isDeclaredInExternal;
        SchemaDeclBase_Use__Enum presence;

        struct XmlSchemaType* schemaType;
        struct XmlSchemaDatatype* datatype;
        struct String* defaultValueRaw;
        struct Object* defaultValueTyped;
        int64_t maxLength;
        int64_t minLength;
        struct List_1_System_String_* values;
    };

} // namespace app
