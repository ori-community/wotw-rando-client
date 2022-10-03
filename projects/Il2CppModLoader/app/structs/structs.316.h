namespace app {
    struct XmlIgnoreNamespaceReader__Fields {
        struct XmlNodeReader__Fields _;
        struct List_1_System_String_* _namespacesToIgnore;
    };

    struct XmlIgnoreNamespaceReader {
        struct XmlIgnoreNamespaceReader__Class* klass;
        MonitorData* monitor;
        struct XmlIgnoreNamespaceReader__Fields fields;
    };

    struct XmlIgnoreNamespaceReader__VTable {
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

    struct XmlIgnoreNamespaceReader__StaticFields {
    };

    struct XmlIgnoreNamespaceReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlIgnoreNamespaceReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlIgnoreNamespaceReader__VTable vtable;
    };

    struct __declspec(align(8)) XmlDataLoader__Fields {
        struct DataSet* _dataSet;
        struct XmlToDatasetMap* _nodeToSchemaMap;
        struct Hashtable* _nodeToRowMap;
        struct Stack* _childRowsStack;
        struct Hashtable* _htableExcludedNS;
        bool _fIsXdr;
        bool _isDiffgram;
        struct XmlElement* _topMostNode;
        bool _ignoreSchema;
        struct DataTable* _dataTable;
        bool _isTableLevel;
        bool _fromInference;
        struct XmlReader* _dataReader;
        struct Object* _XSD_XMLNS_NS;
        struct Object* _XDR_SCHEMA;
        struct Object* _XDRNS;
        struct Object* _SQL_SYNC;
        struct Object* _UPDGNS;
        struct Object* _XSD_SCHEMA;
        struct Object* _XSDNS;
        struct Object* _DFFNS;
        struct Object* _MSDNS;
        struct Object* _DIFFID;
        struct Object* _HASCHANGES;
        struct Object* _ROWORDER;
    };

    struct XmlDataLoader {
        struct XmlDataLoader__Class* klass;
        MonitorData* monitor;
        struct XmlDataLoader__Fields fields;
    };

    struct __declspec(align(8)) XmlToDatasetMap__Fields {
        struct XmlToDatasetMap_XmlNodeIdHashtable* _tableSchemaMap;
        struct XmlToDatasetMap_TableSchemaInfo* _lastTableSchemaInfo;
    };

    struct XmlToDatasetMap {
        struct XmlToDatasetMap__Class* klass;
        MonitorData* monitor;
        struct XmlToDatasetMap__Fields fields;
    };

    struct XmlToDatasetMap_XmlNodeIdHashtable__Fields {
        struct Hashtable__Fields _;
        struct XmlToDatasetMap_XmlNodeIdentety* _id;
    };

    struct XmlToDatasetMap_XmlNodeIdHashtable {
        struct XmlToDatasetMap_XmlNodeIdHashtable__Class* klass;
        MonitorData* monitor;
        struct XmlToDatasetMap_XmlNodeIdHashtable__Fields fields;
    };

    struct __declspec(align(8)) XmlToDatasetMap_XmlNodeIdentety__Fields {
        struct String* LocalName;
        struct String* NamespaceURI;
    };

    struct XmlToDatasetMap_XmlNodeIdentety {
        struct XmlToDatasetMap_XmlNodeIdentety__Class* klass;
        MonitorData* monitor;
        struct XmlToDatasetMap_XmlNodeIdentety__Fields fields;
    };

    struct __declspec(align(8)) XmlToDatasetMap_TableSchemaInfo__Fields {
        struct DataTable* TableSchema;
        struct XmlToDatasetMap_XmlNodeIdHashtable* ColumnsSchemaMap;
    };

    struct XmlToDatasetMap_TableSchemaInfo {
        struct XmlToDatasetMap_TableSchemaInfo__Class* klass;
        MonitorData* monitor;
        struct XmlToDatasetMap_TableSchemaInfo__Fields fields;
    };

    struct XmlToDatasetMap_XmlNodeIdentety__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlToDatasetMap_XmlNodeIdentety__StaticFields {
    };

    struct XmlToDatasetMap_XmlNodeIdentety__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlToDatasetMap_XmlNodeIdentety__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlToDatasetMap_XmlNodeIdentety__VTable vtable;
    };

    struct XmlToDatasetMap_XmlNodeIdHashtable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData Contains;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_IsFixedSize;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData Remove;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData Clone;
        VirtualInvokeData Add_1;
        VirtualInvokeData Clear_1;
        VirtualInvokeData Clone_1;
        VirtualInvokeData Contains_1;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData CopyTo_1;
        VirtualInvokeData ToKeyValuePairsArray;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData set_Item_1;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData GetHash;
        VirtualInvokeData get_IsReadOnly_1;
        VirtualInvokeData get_IsFixedSize_1;
        VirtualInvokeData get_IsSynchronized_1;
        VirtualInvokeData KeyEquals;
        VirtualInvokeData get_Keys_1;
        VirtualInvokeData get_Values_1;
        VirtualInvokeData Remove_1;
        VirtualInvokeData get_SyncRoot_1;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct XmlToDatasetMap_XmlNodeIdHashtable__StaticFields {
    };

    struct XmlToDatasetMap_XmlNodeIdHashtable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlToDatasetMap_XmlNodeIdHashtable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlToDatasetMap_XmlNodeIdHashtable__VTable vtable;
    };

    struct XmlToDatasetMap_TableSchemaInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlToDatasetMap_TableSchemaInfo__StaticFields {
    };

    struct XmlToDatasetMap_TableSchemaInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlToDatasetMap_TableSchemaInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlToDatasetMap_TableSchemaInfo__VTable vtable;
    };

    struct XmlToDatasetMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlToDatasetMap__StaticFields {
    };

    struct XmlToDatasetMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlToDatasetMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlToDatasetMap__VTable vtable;
    };

    struct XmlDataLoader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlDataLoader__StaticFields {
    };

    struct XmlDataLoader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlDataLoader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlDataLoader__VTable vtable;
    };

    struct XmlNode___VTable {
    };

    struct XmlNode___StaticFields {
    };

    struct XmlNode___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlNode___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlNode___VTable vtable;
    };

    struct __declspec(align(8)) XmlTreeGen__Fields {
        struct ArrayList* _constraintNames;
        struct Hashtable* _namespaces;
        struct Hashtable* _autogenerated;
        struct Hashtable* _prefixes;
        struct DataSet* _ds_1;
        struct ArrayList* _tables;
        struct ArrayList* _relations;
        struct XmlDocument* _dc;
        struct XmlElement* _sRoot;
        int32_t _prefixCount;
        SchemaFormat__Enum _schFormat;

        struct String* _filePath;
        struct String* _fileName;
        struct String* _fileExt;
        struct XmlElement* _dsElement;
        struct XmlElement* _constraintSeparator;
        struct Converter_2_Type_String_* _targetConverter;
    };

    struct XmlTreeGen {
        struct XmlTreeGen__Class* klass;
        MonitorData* monitor;
        struct XmlTreeGen__Fields fields;
    };

    struct XmlTreeGen__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTreeGen__StaticFields {
    };

    struct XmlTreeGen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTreeGen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTreeGen__VTable vtable;
    };

    struct __declspec(align(8)) NewDiffgramGen__Fields {
        struct XmlDocument* _doc;
        struct DataSet* _ds_1;
        struct DataTable* _dt;
        struct XmlWriter* _xmlw;
        bool _fBefore;
        bool _fErrors;
        struct Hashtable* _rowsOrder;
        struct ArrayList* _tables;
        bool _writeHierarchy;
    };

    struct NewDiffgramGen {
        struct NewDiffgramGen__Class* klass;
        MonitorData* monitor;
        struct NewDiffgramGen__Fields fields;
    };

    struct NewDiffgramGen__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NewDiffgramGen__StaticFields {
    };

    struct NewDiffgramGen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewDiffgramGen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewDiffgramGen__VTable vtable;
    };

    struct __declspec(align(8)) XmlDataTreeWriter__Fields {
        struct XmlWriter* _xmlw;
        struct DataSet* _ds_1;
        struct DataTable* _dt;
        struct ArrayList* _dTables;
        struct DataTable__Array* _topLevelTables;
        bool _fFromTable;
        bool _isDiffgram;
        struct Hashtable* _rowsOrder;
        bool _writeHierarchy;
    };

    struct XmlDataTreeWriter {
        struct XmlDataTreeWriter__Class* klass;
        MonitorData* monitor;
        struct XmlDataTreeWriter__Fields fields;
    };

    struct XmlDataTreeWriter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlDataTreeWriter__StaticFields {
    };

    struct XmlDataTreeWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlDataTreeWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlDataTreeWriter__VTable vtable;
    };

    struct DataTextWriter__Fields {
        struct XmlWriter__Fields _;
        struct XmlWriter* _xmltextWriter;
    };

    struct DataTextWriter {
        struct DataTextWriter__Class* klass;
        MonitorData* monitor;
        struct DataTextWriter__Fields fields;
    };

    struct DataTextWriter__VTable {
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

    struct DataTextWriter__StaticFields {
    };

    struct DataTextWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataTextWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataTextWriter__VTable vtable;
    };

    struct __declspec(align(8)) DataTextReader__Fields {
        struct XmlReader* _xmlreader;
    };

    struct DataTextReader {
        struct DataTextReader__Class* klass;
        MonitorData* monitor;
        struct DataTextReader__Fields fields;
    };

    struct DataTextReader__VTable {
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

    struct DataTextReader__StaticFields {
    };

    struct DataTextReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataTextReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataTextReader__VTable vtable;
    };

    struct SqlBinary {
        struct Byte__Array* _value;
    };

    struct SqlBinary__Boxed {
        struct SqlBinary__Class* klass;
        MonitorData* monitor;
        struct SqlBinary fields;
    };

    struct SqlBinary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlBinary__StaticFields {
        struct SqlBinary Null;
    };

    struct SqlBinary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlBinary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlBinary__VTable vtable;
    };

    enum class EComparison__Enum : int32_t {
        LT = 0x00000000,
        LE = 0x00000001,
        EQ = 0x00000002,
        GE = 0x00000003,
        GT = 0x00000004,
        NE = 0x00000005,
    };

    struct EComparison__Enum__Boxed {
        struct EComparison__Enum__Class* klass;
        MonitorData* monitor;
        EComparison__Enum value;
    };

    struct EComparison__Enum__VTable {
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

    struct EComparison__Enum__StaticFields {
    };

    struct EComparison__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EComparison__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EComparison__Enum__VTable vtable;
    };

    struct SqlBoolean {
        uint8_t m_value;
    };

    struct SqlBoolean__Boxed {
        struct SqlBoolean__Class* klass;
        MonitorData* monitor;
        struct SqlBoolean fields;
    };

    struct SqlBoolean__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlBoolean__StaticFields {
        struct SqlBoolean True;
        struct SqlBoolean False;
        struct SqlBoolean Null;
        struct SqlBoolean Zero;
        struct SqlBoolean One;
    };

    struct SqlBoolean__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlBoolean__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlBoolean__VTable vtable;
    };

    struct SqlGuid {
        struct Byte__Array* m_value;
    };

    struct SqlGuid__Boxed {
        struct SqlGuid__Class* klass;
        MonitorData* monitor;
        struct SqlGuid fields;
    };

    struct SqlGuid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlGuid__StaticFields {
        int32_t s_sizeOfGuid;
        struct Int32__Array* s_rgiGuidOrder;
        struct SqlGuid Null;
    };

    struct SqlGuid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlGuid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlGuid__VTable vtable;
    };

    struct SqlByte {
        bool m_fNotNull;
        uint8_t m_value;
    };

    struct SqlByte__Boxed {
        struct SqlByte__Class* klass;
        MonitorData* monitor;
        struct SqlByte fields;
    };

    struct SqlByte__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlByte__StaticFields {
        int32_t s_iBitNotByteMax;
        struct SqlByte Null;
        struct SqlByte Zero;
        struct SqlByte MinValue;
        struct SqlByte MaxValue;
    };

    struct SqlByte__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlByte__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlByte__VTable vtable;
    };

    struct SqlInt64 {
        bool m_fNotNull;
        int64_t m_value;
    };

    struct SqlInt64__Boxed {
        struct SqlInt64__Class* klass;
        MonitorData* monitor;
        struct SqlInt64 fields;
    };

    struct SqlInt64__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlInt64__StaticFields {
        int64_t s_lLowIntMask;
        int64_t s_lHighIntMask;
        struct SqlInt64 Null;
        struct SqlInt64 Zero;
        struct SqlInt64 MinValue;
        struct SqlInt64 MaxValue;
    };

    struct SqlInt64__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlInt64__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlInt64__VTable vtable;
    };

    struct SqlDouble {
        bool m_fNotNull;
        double m_value;
    };

    struct SqlDouble__Boxed {
        struct SqlDouble__Class* klass;
        MonitorData* monitor;
        struct SqlDouble fields;
    };

    struct SqlDouble__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData CompareTo;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
    };

    struct SqlDouble__StaticFields {
        struct SqlDouble Null;
        struct SqlDouble Zero;
        struct SqlDouble MinValue;
        struct SqlDouble MaxValue;
    };

    struct SqlDouble__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlDouble__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlDouble__VTable vtable;
    };

    enum class SqlBytesCharsState__Enum : int32_t {
        Null = 0x00000000,
        Buffer = 0x00000001,
        Stream = 0x00000003,
    };

    struct SqlBytesCharsState__Enum__Boxed {
        struct SqlBytesCharsState__Enum__Class* klass;
        MonitorData* monitor;
        SqlBytesCharsState__Enum value;
    };

    struct __declspec(align(8)) SqlBytes__Fields {
        struct Byte__Array* _rgbBuf;
        int64_t _lCurLen;
        struct Stream* _stream;
        SqlBytesCharsState__Enum _state;

        struct Byte__Array* _rgbWorkBuf;
    };

    struct SqlBytes {
        struct SqlBytes__Class* klass;
        MonitorData* monitor;
        struct SqlBytes__Fields fields;
    };

    struct SqlBytesCharsState__Enum__VTable {
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

    struct SqlBytesCharsState__Enum__StaticFields {
    };

    struct SqlBytesCharsState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlBytesCharsState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlBytesCharsState__Enum__VTable vtable;
    };

    struct SqlBytes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    };

    struct SqlBytes__StaticFields {
    };

    struct SqlBytes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlBytes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlBytes__VTable vtable;
    };

    struct __declspec(align(8)) SqlChars__Fields {
        struct Char__Array* _rgchBuf;
        int64_t _lCurLen;
        struct SqlStreamChars* _stream;
        SqlBytesCharsState__Enum _state;

        struct Char__Array* _rgchWorkBuf;
    };

    struct SqlChars {
        struct SqlChars__Class* klass;
        MonitorData* monitor;
        struct SqlChars__Fields fields;
    };

    struct SqlStreamChars {
        struct SqlStreamChars__Class* klass;
        MonitorData* monitor;
    };

    struct SqlStreamChars__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData Dispose;
    };

    struct SqlStreamChars__StaticFields {
    };

    struct SqlStreamChars__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SqlStreamChars__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SqlStreamChars__VTable vtable;
    };

    struct SqlChars__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsNull;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    };

} // namespace app
