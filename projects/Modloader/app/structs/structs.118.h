namespace app {
    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
        struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
        struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
    };

    struct XmlSqlBinaryReader_NamespaceDecl__Array {
        struct XmlSqlBinaryReader_NamespaceDecl__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlSqlBinaryReader_NamespaceDecl* vector[32];
    };

    struct IEnumerator_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct IEnumerator_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct ICollection_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct String* key;
        struct XmlSqlBinaryReader_NamespaceDecl* value;
    };

    struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Boxed {
        struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ fields;
    };

    struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array {
        struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
        struct IEnumerable_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) XmlSqlBinaryReader_NestedBinXml__Fields {
        struct XmlSqlBinaryReader_SymbolTables symbolTables;
        int32_t docState;
        struct XmlSqlBinaryReader_NestedBinXml* next;
    };

    struct XmlSqlBinaryReader_NestedBinXml {
        struct XmlSqlBinaryReader_NestedBinXml__Class* klass;
        MonitorData* monitor;
        struct XmlSqlBinaryReader_NestedBinXml__Fields fields;
    };

    struct __declspec(align(8)) SecureStringHasher__Fields {
        int32_t hashCodeRandomizer;
    };

    struct SecureStringHasher {
        struct SecureStringHasher__Class* klass;
        MonitorData* monitor;
        struct SecureStringHasher__Fields fields;
    };

    struct SecureStringHasher_HashCodeOfStringDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SecureStringHasher_HashCodeOfStringDelegate {
        struct SecureStringHasher_HashCodeOfStringDelegate__Class* klass;
        MonitorData* monitor;
        struct SecureStringHasher_HashCodeOfStringDelegate__Fields fields;
    };

    struct IDtdInfo {
        struct IDtdInfo__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ByteStack__Fields {
        struct Byte__Array* stack;
        int32_t growthRate;
        int32_t top;
        int32_t size;
    };

    struct ByteStack {
        struct ByteStack__Class* klass;
        MonitorData* monitor;
        struct ByteStack__Fields fields;
    };

    struct __declspec(align(8)) TernaryTreeReadOnly__Fields {
        struct Byte__Array* nodeBuffer;
    };

    struct TernaryTreeReadOnly {
        struct TernaryTreeReadOnly__Class* klass;
        MonitorData* monitor;
        struct TernaryTreeReadOnly__Fields fields;
    };

    enum class XmlNodeChangedAction__Enum : int32_t {
        Insert = 0x00000000,
        Remove = 0x00000001,
        Change = 0x00000002,
    };

    struct XmlNodeChangedAction__Enum__Boxed {
        struct XmlNodeChangedAction__Enum__Class* klass;
        MonitorData* monitor;
        XmlNodeChangedAction__Enum value;
    };

    struct __declspec(align(8)) XmlNodeChangedEventArgs__Fields {
        XmlNodeChangedAction__Enum action;

        struct XmlNode* node;
        struct XmlNode* oldParent;
        struct XmlNode* newParent;
        struct String* oldValue;
        struct String* newValue;
    };

    struct XmlNodeChangedEventArgs {
        struct XmlNodeChangedEventArgs__Class* klass;
        MonitorData* monitor;
        struct XmlNodeChangedEventArgs__Fields fields;
    };

    struct XmlElement__Fields {
        struct XmlLinkedNode__Fields _;
        struct XmlName* name;
        struct XmlAttributeCollection* attributes;
        struct XmlLinkedNode* lastChild;
    };

    struct XmlElement {
        struct XmlElement__Class* klass;
        MonitorData* monitor;
        struct XmlElement__Fields fields;
    };

    struct XmlAttribute__Array {
        struct XmlAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlAttribute* vector[32];
    };

    struct XmlSchemaSimpleTypeContent__Fields {
        struct XmlSchemaAnnotated__Fields _;
    };

    struct XmlSchemaSimpleTypeContent {
        struct XmlSchemaSimpleTypeContent__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaSimpleTypeContent__Fields fields;
    };

    struct XmlName__Array {
        struct XmlName__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlName* vector[32];
    };

    struct XmlNodeChangedEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct XmlNodeChangedEventHandler {
        struct XmlNodeChangedEventHandler__Class* klass;
        MonitorData* monitor;
        struct XmlNodeChangedEventHandler__Fields fields;
    };

    struct EmptyEnumerator {
        struct EmptyEnumerator__Class* klass;
        MonitorData* monitor;
    };

    struct XmlDocumentType__Fields {
        struct XmlLinkedNode__Fields _;
        struct String* name;
        struct String* publicId;
        struct String* systemId;
        struct String* internalSubset;
        bool namespaces;
        struct XmlNamedNodeMap* entities;
        struct XmlNamedNodeMap* notations;
        struct SchemaInfo* schemaInfo;
    };

    struct XmlDocumentType {
        struct XmlDocumentType__Class* klass;
        MonitorData* monitor;
        struct XmlDocumentType__Fields fields;
    };

    struct XmlDeclaration__Fields {
        struct XmlLinkedNode__Fields _;
        struct String* version;
        struct String* encoding;
        struct String* standalone;
    };

    struct XmlDeclaration {
        struct XmlDeclaration__Class* klass;
        MonitorData* monitor;
        struct XmlDeclaration__Fields fields;
    };

    struct XmlComment__Fields {
        struct XmlCharacterData__Fields _;
    };

    struct XmlComment {
        struct XmlComment__Class* klass;
        MonitorData* monitor;
        struct XmlComment__Fields fields;
    };

    struct XmlDocumentFragment__Fields {
        struct XmlNode__Fields _;
        struct XmlLinkedNode* lastChild;
    };

    struct XmlDocumentFragment {
        struct XmlDocumentFragment__Class* klass;
        MonitorData* monitor;
        struct XmlDocumentFragment__Fields fields;
    };

    struct XmlEntityReference__Fields {
        struct XmlLinkedNode__Fields _;
        struct String* name;
        struct XmlLinkedNode* lastChild;
    };

    struct XmlEntityReference {
        struct XmlEntityReference__Class* klass;
        MonitorData* monitor;
        struct XmlEntityReference__Fields fields;
    };

    struct XmlProcessingInstruction__Fields {
        struct XmlLinkedNode__Fields _;
        struct String* target;
        struct String* data;
    };

    struct XmlProcessingInstruction {
        struct XmlProcessingInstruction__Class* klass;
        MonitorData* monitor;
        struct XmlProcessingInstruction__Fields fields;
    };

    struct XmlText__Fields {
        struct XmlCharacterData__Fields _;
    };

    struct XmlText {
        struct XmlText__Class* klass;
        MonitorData* monitor;
        struct XmlText__Fields fields;
    };

    struct XmlSignificantWhitespace__Fields {
        struct XmlCharacterData__Fields _;
    };

    struct XmlSignificantWhitespace {
        struct XmlSignificantWhitespace__Class* klass;
        MonitorData* monitor;
        struct XmlSignificantWhitespace__Fields fields;
    };

    struct XmlWhitespace__Fields {
        struct XmlCharacterData__Fields _;
    };

    struct XmlWhitespace {
        struct XmlWhitespace__Class* klass;
        MonitorData* monitor;
        struct XmlWhitespace__Fields fields;
    };

    struct NameTable_Entry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NameTable_Entry__StaticFields {
    };

    struct NameTable_Entry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameTable_Entry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameTable_Entry__VTable vtable;
    };

    struct NameTable_Entry__Array__VTable {
    };

    struct NameTable_Entry__Array__StaticFields {
    };

    struct NameTable_Entry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameTable_Entry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameTable_Entry__Array__VTable vtable;
    };

    struct NameTable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Get;
        VirtualInvokeData Add;
        VirtualInvokeData Add_1;
    };

    struct NameTable__StaticFields {
    };

    struct NameTable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameTable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameTable__VTable vtable;
    };

    struct XmlNameTable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct XmlNameTable__StaticFields {
    };

    struct XmlNameTable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNameTable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNameTable__VTable vtable;
    };

    struct XmlImplementation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateDocument;
    };

    struct XmlImplementation__StaticFields {
    };

    struct XmlImplementation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlImplementation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlImplementation__VTable vtable;
    };

    struct XmlSchemaValidity__Enum__VTable {
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

    struct XmlSchemaValidity__Enum__StaticFields {
    };

    struct XmlSchemaValidity__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaValidity__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaValidity__Enum__VTable vtable;
    };

    struct XmlSerializerNamespaces__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializerNamespaces__StaticFields {
    };

    struct XmlSerializerNamespaces__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializerNamespaces__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializerNamespaces__VTable vtable;
    };

    struct XmlSchemaObjectCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData OnSet;
        VirtualInvokeData OnInsert;
        VirtualInvokeData OnClear;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnSetComplete;
        VirtualInvokeData OnInsertComplete;
        VirtualInvokeData OnClearComplete;
        VirtualInvokeData OnRemoveComplete;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
    };

    struct XmlSchemaObjectCollection__StaticFields {
    };

    struct XmlSchemaObjectCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaObjectCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaObjectCollection__VTable vtable;
    };

    struct XmlNodeType__Enum__VTable {
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

    struct XmlNodeType__Enum__StaticFields {
    };

    struct XmlNodeType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeType__Enum__VTable vtable;
    };

    struct XmlChildNodes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData Item;
        VirtualInvokeData get_Count;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData get_ItemOf;
        VirtualInvokeData PrivateDisposeNodeList;
    };

    struct XmlChildNodes__StaticFields {
    };

    struct XmlChildNodes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlChildNodes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlChildNodes__VTable vtable;
    };

    struct XmlNodeList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData get_ItemOf;
        VirtualInvokeData PrivateDisposeNodeList;
    };

    struct XmlNodeList__StaticFields {
    };

    struct XmlNodeList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNodeList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNodeList__VTable vtable;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlNamedNodeMap_SmallXmlNodeList__StaticFields {
    };

    struct XmlNamedNodeMap_SmallXmlNodeList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNamedNodeMap_SmallXmlNodeList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNamedNodeMap_SmallXmlNodeList__VTable vtable;
    };

    struct XmlNamedNodeMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData GetNamedItem;
        VirtualInvokeData SetNamedItem;
        VirtualInvokeData get_Count;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData AddNode;
        VirtualInvokeData AddNodeForLoad;
        VirtualInvokeData RemoveNodeAt;
        VirtualInvokeData InsertNodeAt;
    };

    struct XmlNamedNodeMap__StaticFields {
    };

    struct XmlNamedNodeMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNamedNodeMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNamedNodeMap__VTable vtable;
    };

    struct XmlAttributeCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData GetNamedItem;
        VirtualInvokeData SetNamedItem;
        VirtualInvokeData get_Count;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData AddNode;
        VirtualInvokeData AddNodeForLoad;
        VirtualInvokeData RemoveNodeAt;
        VirtualInvokeData InsertNodeAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData System_Collections_ICollection_get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    };

    struct XmlAttributeCollection__StaticFields {
    };

    struct XmlAttributeCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlAttributeCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlAttributeCollection__VTable vtable;
    };

    struct IXmlSchemaInfo__VTable {
        VirtualInvokeData get_Validity;
        VirtualInvokeData get_IsDefault;
        VirtualInvokeData get_IsNil;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData get_SchemaType;
        VirtualInvokeData get_SchemaElement;
        VirtualInvokeData get_SchemaAttribute;
    };

    struct IXmlSchemaInfo__StaticFields {
    };

    struct IXmlSchemaInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IXmlSchemaInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IXmlSchemaInfo__VTable vtable;
    };

    struct Base64Encoder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct Base64Encoder__StaticFields {
    };

    struct Base64Encoder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Base64Encoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Base64Encoder__VTable vtable;
    };

    struct XmlRawWriterBase64Encoder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData WriteChars;
    };

    struct XmlRawWriterBase64Encoder__StaticFields {
    };

    struct XmlRawWriterBase64Encoder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlRawWriterBase64Encoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlRawWriterBase64Encoder__VTable vtable;
    };

    struct IXmlNamespaceResolver__VTable {
        VirtualInvokeData GetNamespacesInScope;
        VirtualInvokeData LookupNamespace;
        VirtualInvokeData LookupPrefix;
    };

    struct IXmlNamespaceResolver__StaticFields {
    };

    struct IXmlNamespaceResolver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IXmlNamespaceResolver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IXmlNamespaceResolver__VTable vtable;
    };

    struct XmlCharType__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlCharType__StaticFields {
        struct Object* s_Lock;
        struct Byte__Array* s_CharProperties;
    };

    struct XmlCharType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlCharType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlCharType__VTable vtable;
    };

    struct CharEntityEncoderFallbackBuffer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Fallback;
        VirtualInvokeData Fallback_1;
        VirtualInvokeData GetNextChar;
        VirtualInvokeData MovePrevious;
        VirtualInvokeData get_Remaining;
        VirtualInvokeData Reset;
        VirtualInvokeData InternalFallback;
    };

    struct CharEntityEncoderFallbackBuffer__StaticFields {
    };

    struct CharEntityEncoderFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharEntityEncoderFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharEntityEncoderFallbackBuffer__VTable vtable;
    };

    struct CharEntityEncoderFallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateFallbackBuffer;
        VirtualInvokeData get_MaxCharCount;
    };

    struct CharEntityEncoderFallback__StaticFields {
    };

    struct CharEntityEncoderFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharEntityEncoderFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharEntityEncoderFallback__VTable vtable;
    };

    struct NewLineHandling__Enum__VTable {
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

    struct NewLineHandling__Enum__StaticFields {
    };

    struct NewLineHandling__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewLineHandling__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewLineHandling__Enum__VTable vtable;
    };

    struct XmlStandalone__Enum__VTable {
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

    struct XmlStandalone__Enum__StaticFields {
    };

    struct XmlStandalone__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlStandalone__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlStandalone__Enum__VTable vtable;
    };

    struct XmlOutputMethod__Enum__VTable {
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

    struct XmlOutputMethod__Enum__StaticFields {
    };

    struct XmlOutputMethod__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlOutputMethod__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlOutputMethod__Enum__VTable vtable;
    };

    struct WriteState__Enum__VTable {
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

    struct WriteState__Enum__StaticFields {
    };

    struct WriteState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WriteState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WriteState__Enum__VTable vtable;
    };

    struct XmlUrlResolver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEntity;
        VirtualInvokeData ResolveUri;
        VirtualInvokeData SupportsType;
        VirtualInvokeData GetEntityAsync;
    };

    struct XmlUrlResolver__StaticFields {
        struct Object* s_DownloadManager;
    };

} // namespace app
