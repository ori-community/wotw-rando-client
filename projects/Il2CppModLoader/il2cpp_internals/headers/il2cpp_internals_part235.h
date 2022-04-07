namespace app {
struct XmlIgnoreNamespaceReader__StaticFields {
};
struct XmlIgnoreNamespaceReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlIgnoreNamespaceReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlIgnoreNamespaceReader__VTable vtable;
};

struct __declspec(align(8)) XmlDataLoader__Fields {
  struct DataSet * _dataSet;
  struct XmlToDatasetMap * _nodeToSchemaMap;
  struct Hashtable * _nodeToRowMap;
  struct Stack * _childRowsStack;
  struct Hashtable * _htableExcludedNS;
  bool _fIsXdr;
  bool _isDiffgram;
  struct XmlElement * _topMostNode;
  bool _ignoreSchema;
  struct DataTable * _dataTable;
  bool _isTableLevel;
  bool _fromInference;
  struct XmlReader * _dataReader;
  struct Object * _XSD_XMLNS_NS;
  struct Object * _XDR_SCHEMA;
  struct Object * _XDRNS;
  struct Object * _SQL_SYNC;
  struct Object * _UPDGNS;
  struct Object * _XSD_SCHEMA;
  struct Object * _XSDNS;
  struct Object * _DFFNS;
  struct Object * _MSDNS;
  struct Object * _DIFFID;
  struct Object * _HASCHANGES;
  struct Object * _ROWORDER;
};
struct XmlDataLoader {
  struct XmlDataLoader__Class *klass;
  struct MonitorData *monitor;
  struct XmlDataLoader__Fields fields;
};
struct __declspec(align(8)) XmlToDatasetMap__Fields {
  struct XmlToDatasetMap_XmlNodeIdHashtable * _tableSchemaMap;
  struct XmlToDatasetMap_TableSchemaInfo * _lastTableSchemaInfo;
};
struct XmlToDatasetMap {
  struct XmlToDatasetMap__Class *klass;
  struct MonitorData *monitor;
  struct XmlToDatasetMap__Fields fields;
};
struct XmlToDatasetMap_XmlNodeIdHashtable__Fields {
  struct Hashtable__Fields _;
  struct XmlToDatasetMap_XmlNodeIdentety * _id;
};
struct XmlToDatasetMap_XmlNodeIdHashtable {
  struct XmlToDatasetMap_XmlNodeIdHashtable__Class *klass;
  struct MonitorData *monitor;
  struct XmlToDatasetMap_XmlNodeIdHashtable__Fields fields;
};
struct __declspec(align(8)) XmlToDatasetMap_XmlNodeIdentety__Fields {
  struct String * LocalName;
  struct String * NamespaceURI;
};
struct XmlToDatasetMap_XmlNodeIdentety {
  struct XmlToDatasetMap_XmlNodeIdentety__Class *klass;
  struct MonitorData *monitor;
  struct XmlToDatasetMap_XmlNodeIdentety__Fields fields;
};
struct __declspec(align(8)) XmlToDatasetMap_TableSchemaInfo__Fields {
  struct DataTable * TableSchema;
  struct XmlToDatasetMap_XmlNodeIdHashtable * ColumnsSchemaMap;
};
struct XmlToDatasetMap_TableSchemaInfo {
  struct XmlToDatasetMap_TableSchemaInfo__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlToDatasetMap_XmlNodeIdentety__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlToDatasetMap_XmlNodeIdHashtable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlToDatasetMap_TableSchemaInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlToDatasetMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlDataLoader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlDataLoader__VTable vtable;
};

struct __declspec(align(8)) XmlTreeGen__Fields {
  struct ArrayList * _constraintNames;
  struct Hashtable * _namespaces;
  struct Hashtable * _autogenerated;
  struct Hashtable * _prefixes;
  struct DataSet * _ds_1;
  struct ArrayList * _tables;
  struct ArrayList * _relations;
  struct XmlDocument * _dc;
  struct XmlElement * _sRoot;
  int32_t _prefixCount;
  enum SchemaFormat__Enum _schFormat;
  struct String * _filePath;
  struct String * _fileName;
  struct String * _fileExt;
  struct XmlElement * _dsElement;
  struct XmlElement * _constraintSeparator;
  struct Converter_2_Type_String_ * _targetConverter;
};
struct XmlTreeGen {
  struct XmlTreeGen__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlTreeGen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlTreeGen__VTable vtable;
};

struct __declspec(align(8)) NewDiffgramGen__Fields {
  struct XmlDocument * _doc;
  struct DataSet * _ds_1;
  struct DataTable * _dt;
  struct XmlWriter * _xmlw;
  bool _fBefore;
  bool _fErrors;
  struct Hashtable * _rowsOrder;
  struct ArrayList * _tables;
  bool _writeHierarchy;
};
struct NewDiffgramGen {
  struct NewDiffgramGen__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NewDiffgramGen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NewDiffgramGen__VTable vtable;
};

struct __declspec(align(8)) XmlDataTreeWriter__Fields {
  struct XmlWriter * _xmlw;
  struct DataSet * _ds_1;
  struct DataTable * _dt;
  struct ArrayList * _dTables;
  struct DataTable__Array * _topLevelTables;
  bool _fFromTable;
  bool _isDiffgram;
  struct Hashtable * _rowsOrder;
  bool _writeHierarchy;
};
struct XmlDataTreeWriter {
  struct XmlDataTreeWriter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlDataTreeWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlDataTreeWriter__VTable vtable;
};

struct DataTextWriter__Fields {
  struct XmlWriter__Fields _;
  struct XmlWriter * _xmltextWriter;
};
struct DataTextWriter {
  struct DataTextWriter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataTextWriter__VTable vtable;
};

struct __declspec(align(8)) DataTextReader__Fields {
  struct XmlReader * _xmlreader;
};
struct DataTextReader {
  struct DataTextReader__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataTextReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataTextReader__VTable vtable;
};

struct SqlBinary {
  struct Byte__Array * _value;
};
struct SqlBinary__Boxed {
  struct SqlBinary__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlBinary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlBinary__VTable vtable;
};

enum EComparison__Enum : int32_t {
  EComparison__Enum_LT = 0,
  EComparison__Enum_LE = 1,
  EComparison__Enum_EQ = 2,
  EComparison__Enum_GE = 3,
  EComparison__Enum_GT = 4,
  EComparison__Enum_NE = 5,
};
struct EComparison__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EComparison__Enum value;
};

struct SqlBoolean {
  uint8_t m_value;
};
struct SqlBoolean__Boxed {
  struct SqlBoolean__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlBoolean__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlBoolean__VTable vtable;
};

struct SqlGuid {
  struct Byte__Array * m_value;
};
struct SqlGuid__Boxed {
  struct SqlGuid__Class *klass;
  struct MonitorData *monitor;
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
  struct Int32__Array * s_rgiGuidOrder;
  struct SqlGuid Null;
};
struct SqlGuid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlGuid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlGuid__VTable vtable;
};

struct SqlByte {
  bool m_fNotNull;
  uint8_t m_value;
};
struct SqlByte__Boxed {
  struct SqlByte__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlByte__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlByte__VTable vtable;
};

struct SqlInt64 {
  bool m_fNotNull;
  int64_t m_value;
};
struct SqlInt64__Boxed {
  struct SqlInt64__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlInt64__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlInt64__VTable vtable;
};

struct SqlDouble {
  bool m_fNotNull;
  double m_value;
};
struct SqlDouble__Boxed {
  struct SqlDouble__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlDouble__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlDouble__VTable vtable;
};

enum SqlBytesCharsState__Enum : int32_t {
  SqlBytesCharsState__Enum_Null = 0,
  SqlBytesCharsState__Enum_Buffer = 1,
  SqlBytesCharsState__Enum_Stream = 3,
};
struct SqlBytesCharsState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SqlBytesCharsState__Enum value;
};
struct __declspec(align(8)) SqlBytes__Fields {
  struct Byte__Array * _rgbBuf;
  int64_t _lCurLen;
  struct Stream * _stream;
  enum SqlBytesCharsState__Enum _state;
  struct Byte__Array * _rgbWorkBuf;
};
struct SqlBytes {
  struct SqlBytes__Class *klass;
  struct MonitorData *monitor;
  struct SqlBytes__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlBytes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlBytes__VTable vtable;
};

struct __declspec(align(8)) SqlChars__Fields {
  struct Char__Array * _rgchBuf;
  int64_t _lCurLen;
  struct SqlStreamChars * _stream;
  enum SqlBytesCharsState__Enum _state;
  struct Char__Array * _rgchWorkBuf;
};
struct SqlChars {
  struct SqlChars__Class *klass;
  struct MonitorData *monitor;
  struct SqlChars__Fields fields;
};
struct SqlStreamChars {
  struct SqlStreamChars__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlStreamChars__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
struct SqlChars__StaticFields {
};
struct SqlChars__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlChars__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlChars__VTable vtable;
};

enum SqlCompareOptions__Enum : int32_t {
  SqlCompareOptions__Enum_None = 0,
  SqlCompareOptions__Enum_IgnoreCase = 1,
  SqlCompareOptions__Enum_IgnoreNonSpace = 2,
  SqlCompareOptions__Enum_IgnoreKanaType = 8,
  SqlCompareOptions__Enum_IgnoreWidth = 16,
  SqlCompareOptions__Enum_BinarySort = 32768,
  SqlCompareOptions__Enum_BinarySort2 = 16384,
};
struct SqlCompareOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SqlCompareOptions__Enum value;
};
struct SqlString {
  struct String * m_value;
  struct CompareInfo * m_cmpInfo;
  int32_t m_lcid;
  enum SqlCompareOptions__Enum m_flag;
  bool m_fNotNull;
};
struct SqlString__Boxed {
  struct SqlString__Class *klass;
  struct MonitorData *monitor;
  struct SqlString fields;
};
struct SqlString__VTable {
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
struct SqlString__StaticFields {
  struct SqlString Null;
  struct UnicodeEncoding * s_unicodeEncoding;
  int32_t IgnoreCase;
  int32_t IgnoreWidth;
  int32_t IgnoreNonSpace;
  int32_t IgnoreKanaType;
  int32_t BinarySort;
  int32_t BinarySort2;
  enum SqlCompareOptions__Enum s_iDefaultFlag;
  enum CompareOptions__Enum s_iValidCompareOptionMask;
  enum SqlCompareOptions__Enum s_iValidSqlCompareOptionMask;
  int32_t s_lcidUSEnglish;
  int32_t s_lcidBinary;
};
struct SqlString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlString__VTable vtable;
};

struct SqlDateTime {
  bool m_fNotNull;
  int32_t m_day;
  int32_t m_time;
};
struct SqlDateTime__Boxed {
  struct SqlDateTime__Class *klass;
  struct MonitorData *monitor;
  struct SqlDateTime fields;
};
struct SqlDateTime__VTable {
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
struct SqlDateTime__StaticFields {
  double s_SQLTicksPerMillisecond;
  int32_t SQLTicksPerSecond;
  int32_t SQLTicksPerMinute;
  int32_t SQLTicksPerHour;
  int32_t s_SQLTicksPerDay;
  int64_t s_ticksPerSecond;
  struct DateTime s_SQLBaseDate;
  int64_t s_SQLBaseDateTicks;
  int32_t s_minYear;
  int32_t s_maxYear;
  int32_t s_minDay;
  int32_t s_maxDay;
  int32_t s_minTime;
  int32_t s_maxTime;
  int32_t s_dayBase;
  struct Int32__Array * s_daysToMonth365;
  struct Int32__Array * s_daysToMonth366;
  struct DateTime s_minDateTime;
  struct DateTime s_maxDateTime;
  struct TimeSpan s_minTimeSpan;
  struct TimeSpan s_maxTimeSpan;
  struct String * s_ISO8601_DateTimeFormat;
  struct String__Array * s_dateTimeFormats;
  struct SqlDateTime MinValue;
  struct SqlDateTime MaxValue;
  struct SqlDateTime Null;
};
struct SqlDateTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlDateTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlDateTime__VTable vtable;
};

struct SqlDecimal {
  uint8_t _bStatus;
  uint8_t _bLen;
  uint8_t _bPrec;
  uint8_t _bScale;
  uint32_t _data1;
  uint32_t _data2;
  uint32_t _data3;
  uint32_t _data4;
};
struct SqlDecimal__Boxed {
  struct SqlDecimal__Class *klass;
  struct MonitorData *monitor;
  struct SqlDecimal fields;
};
struct SqlDecimal__VTable {
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
struct SqlDecimal__StaticFields {
  uint8_t s_NUMERIC_MAX_PRECISION;
  uint8_t MaxPrecision;
  uint8_t MaxScale;
  uint8_t s_bNullMask;
  uint8_t s_bIsNull;
  uint8_t s_bNotNull;
  uint8_t s_bReverseNullMask;
  uint8_t s_bSignMask;
  uint8_t s_bPositive;
  uint8_t s_bNegative;
  uint8_t s_bReverseSignMask;
  uint32_t s_uiZero;
  int32_t s_cNumeMax;
  int64_t s_lInt32Base;
  uint64_t s_ulInt32Base;
  uint64_t s_ulInt32BaseForMod;
  uint64_t s_llMax;
  uint32_t s_ulBase10;
  double s_DUINT_BASE;
  double s_DUINT_BASE2;
  double s_DUINT_BASE3;
  double s_DMAX_NUME;
  uint32_t s_DBL_DIG;
  uint8_t s_cNumeDivScaleMin;
  struct UInt32__Array * s_rgulShiftBase;
  struct UInt32__Array * s_decimalHelpersLo;
  struct UInt32__Array * s_decimalHelpersMid;
  struct UInt32__Array * s_decimalHelpersHi;
  struct UInt32__Array * s_decimalHelpersHiHi;
  struct Byte__Array * s_rgCLenFromPrec;
  uint32_t s_ulT1;
  uint32_t s_ulT2;
  uint32_t s_ulT3;
  uint32_t s_ulT4;
  uint32_t s_ulT5;
  uint32_t s_ulT6;
  uint32_t s_ulT7;
  uint32_t s_ulT8;
  uint32_t s_ulT9;
  uint64_t s_dwlT10;
  uint64_t s_dwlT11;
  uint64_t s_dwlT12;
  uint64_t s_dwlT13;
  uint64_t s_dwlT14;
  uint64_t s_dwlT15;
  uint64_t s_dwlT16;
  uint64_t s_dwlT17;
  uint64_t s_dwlT18;
  uint64_t s_dwlT19;
  struct SqlDecimal Null;
  struct SqlDecimal MinValue;
  struct SqlDecimal MaxValue;
};
struct SqlDecimal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlDecimal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlDecimal__VTable vtable;
};

struct SqlInt16 {
  bool m_fNotNull;
  int16_t m_value;
};
struct SqlInt16__Boxed {
  struct SqlInt16__Class *klass;
  struct MonitorData *monitor;
  struct SqlInt16 fields;
};
struct SqlInt16__VTable {
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
struct SqlInt16__StaticFields {
  int32_t s_MASKI2;
  struct SqlInt16 Null;
  struct SqlInt16 Zero;
  struct SqlInt16 MinValue;
  struct SqlInt16 MaxValue;
};}