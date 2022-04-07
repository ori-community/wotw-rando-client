namespace app {
struct IEnumerator_1_System_Xml_Schema_SchemaElementDecl_ {
  struct IEnumerator_1_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Schema_SchemaElementDecl_ {
  struct ICollection_1_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  struct XmlQualifiedName * key;
  struct SchemaElementDecl * value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Schema_SchemaElementDecl_ {
  struct IEnumerable_1_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  struct SchemaEntity * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ vector[32];
};
struct __declspec(align(8)) SchemaEntity__Fields {
  struct XmlQualifiedName * qname;
  struct String * url;
  struct String * pubid;
  struct String * text;
  struct XmlQualifiedName * ndata;
  int32_t lineNumber;
  int32_t linePosition;
  bool isParameter;
  bool isExternal;
  bool parsingInProgress;
  bool isDeclaredInExternal;
  struct String * baseURI;
  struct String * declaredURI;
};
struct SchemaEntity {
  struct SchemaEntity__Class *klass;
  struct MonitorData *monitor;
  struct SchemaEntity__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Fields fields;
};
struct SchemaEntity__Array {
  struct SchemaEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SchemaEntity * vector[32];
};
struct IEnumerator_1_System_Xml_Schema_SchemaEntity_ {
  struct IEnumerator_1_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Schema_SchemaEntity_ {
  struct ICollection_1_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  struct XmlQualifiedName * key;
  struct SchemaEntity * value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Schema_SchemaEntity_ {
  struct IEnumerable_1_System_Xml_Schema_SchemaEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Boolean_ {
  struct Dictionary_2_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Boolean_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Fields {
  struct Dictionary_2_System_String_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Fields {
  struct Dictionary_2_System_String_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Boolean___Fields fields;
};
struct IEnumerator_1_System_Boolean_ {
  struct IEnumerator_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Boolean_ {
  struct ICollection_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Boolean_ {
  struct String * key;
  bool value;
};
struct KeyValuePair_2_System_String_System_Boolean___Boxed {
  struct KeyValuePair_2_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Boolean_ fields;
};
struct KeyValuePair_2_System_String_System_Boolean___Array {
  struct KeyValuePair_2_System_String_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Boolean_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Boolean_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Boolean_ {
  struct IEnumerable_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ {
  struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct SchemaNotation * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_Schema_SchemaNotation_ vector[32];
};
struct __declspec(align(8)) SchemaNotation__Fields {
  struct XmlQualifiedName * name;
  struct String * systemLiteral;
  struct String * pubid;
};
struct SchemaNotation {
  struct SchemaNotation__Class *klass;
  struct MonitorData *monitor;
  struct SchemaNotation__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Fields {
  struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Fields {
  struct Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_Schema_SchemaNotation___Fields fields;
};
struct SchemaNotation__Array {
  struct SchemaNotation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SchemaNotation * vector[32];
};
struct IEnumerator_1_System_Xml_Schema_SchemaNotation_ {
  struct IEnumerator_1_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Schema_SchemaNotation_ {
  struct ICollection_1_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ {
  struct String * key;
  struct SchemaNotation * value;
};
struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Boxed {
  struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ fields;
};
struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Array {
  struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Schema_SchemaNotation_ {
  struct IEnumerable_1_System_Xml_Schema_SchemaNotation___Class *klass;
  struct MonitorData *monitor;
};
struct IDtdAttributeListInfo {
  struct IDtdAttributeListInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IDtdEntityInfo {
  struct IDtdEntityInfo__Class *klass;
  struct MonitorData *monitor;
};
struct XmlSchema__Fields {
  struct XmlSchemaObject__Fields _;
  enum XmlSchemaForm__Enum attributeFormDefault;
  enum XmlSchemaForm__Enum elementFormDefault;
  enum XmlSchemaDerivationMethod__Enum blockDefault;
  enum XmlSchemaDerivationMethod__Enum finalDefault;
  struct String * targetNs;
  struct String * version;
  struct XmlSchemaObjectCollection * includes;
  struct XmlSchemaObjectCollection * items;
  struct String * id;
  struct XmlAttribute__Array * moreAttributes;
  bool isCompiled;
  bool isCompiledBySet;
  bool isPreprocessed;
  bool isRedefined;
  int32_t errorCount;
  struct XmlSchemaObjectTable * attributes;
  struct XmlSchemaObjectTable * attributeGroups;
  struct XmlSchemaObjectTable * elements;
  struct XmlSchemaObjectTable * types;
  struct XmlSchemaObjectTable * groups;
  struct XmlSchemaObjectTable * notations;
  struct XmlSchemaObjectTable * identityConstraints;
  struct ArrayList * importedSchemas;
  struct ArrayList * importedNamespaces;
  int32_t schemaId;
  struct Uri * baseUri;
  bool isChameleon;
  struct Hashtable * ids;
  struct XmlDocument * document;
};
struct XmlSchema {
  struct XmlSchema__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchema__Fields fields;
};
struct __declspec(align(8)) XmlSchemaCompilationSettings__Fields {
  bool enableUpaCheck;
};
struct XmlSchemaCompilationSettings {
  struct XmlSchemaCompilationSettings__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaCompilationSettings__Fields fields;
};
struct XmlSqlBinaryReader_SymbolTables {
  struct String__Array * symtable;
  int32_t symCount;
  struct XmlSqlBinaryReader_QName__Array * qnametable;
  int32_t qnameCount;
};
struct XmlSqlBinaryReader_SymbolTables__Boxed {
  struct XmlSqlBinaryReader_SymbolTables__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_SymbolTables fields;
};
enum XmlSqlBinaryReader_ScanState__Enum : int32_t {
  XmlSqlBinaryReader_ScanState__Enum_Doc = 0,
  XmlSqlBinaryReader_ScanState__Enum_XmlText = 1,
  XmlSqlBinaryReader_ScanState__Enum_Attr = 2,
  XmlSqlBinaryReader_ScanState__Enum_AttrVal = 3,
  XmlSqlBinaryReader_ScanState__Enum_AttrValPseudoValue = 4,
  XmlSqlBinaryReader_ScanState__Enum_Init = 5,
  XmlSqlBinaryReader_ScanState__Enum_Error = 6,
  XmlSqlBinaryReader_ScanState__Enum_EOF = 7,
  XmlSqlBinaryReader_ScanState__Enum_Closed = 8,
};
struct XmlSqlBinaryReader_ScanState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSqlBinaryReader_ScanState__Enum value;
};
enum BinXmlToken__Enum : int32_t {
  BinXmlToken__Enum_Error = 0,
  BinXmlToken__Enum_NotImpl = -2,
  BinXmlToken__Enum_EOF = -1,
  BinXmlToken__Enum_XmlDecl = 254,
  BinXmlToken__Enum_Encoding = 253,
  BinXmlToken__Enum_DocType = 252,
  BinXmlToken__Enum_System = 251,
  BinXmlToken__Enum_Public = 250,
  BinXmlToken__Enum_Subset = 249,
  BinXmlToken__Enum_Element = 248,
  BinXmlToken__Enum_EndElem = 247,
  BinXmlToken__Enum_Attr = 246,
  BinXmlToken__Enum_EndAttrs = 245,
  BinXmlToken__Enum_PI = 244,
  BinXmlToken__Enum_Comment = 243,
  BinXmlToken__Enum_CData = 242,
  BinXmlToken__Enum_EndCData = 241,
  BinXmlToken__Enum_Name = 240,
  BinXmlToken__Enum_QName = 239,
  BinXmlToken__Enum_XmlText = 237,
  BinXmlToken__Enum_Nest = 236,
  BinXmlToken__Enum_EndNest = 235,
  BinXmlToken__Enum_Extn = 234,
  BinXmlToken__Enum_NmFlush = 233,
  BinXmlToken__Enum_SQL_BIT = 6,
  BinXmlToken__Enum_SQL_TINYINT = 7,
  BinXmlToken__Enum_SQL_SMALLINT = 1,
  BinXmlToken__Enum_SQL_INT = 2,
  BinXmlToken__Enum_SQL_BIGINT = 8,
  BinXmlToken__Enum_SQL_REAL = 3,
  BinXmlToken__Enum_SQL_FLOAT = 4,
  BinXmlToken__Enum_SQL_MONEY = 5,
  BinXmlToken__Enum_SQL_SMALLMONEY = 20,
  BinXmlToken__Enum_SQL_DATETIME = 18,
  BinXmlToken__Enum_SQL_SMALLDATETIME = 19,
  BinXmlToken__Enum_SQL_DECIMAL = 10,
  BinXmlToken__Enum_SQL_NUMERIC = 11,
  BinXmlToken__Enum_SQL_UUID = 9,
  BinXmlToken__Enum_SQL_VARBINARY = 15,
  BinXmlToken__Enum_SQL_BINARY = 12,
  BinXmlToken__Enum_SQL_IMAGE = 23,
  BinXmlToken__Enum_SQL_CHAR = 13,
  BinXmlToken__Enum_SQL_VARCHAR = 16,
  BinXmlToken__Enum_SQL_TEXT = 22,
  BinXmlToken__Enum_SQL_NVARCHAR = 17,
  BinXmlToken__Enum_SQL_NCHAR = 14,
  BinXmlToken__Enum_SQL_NTEXT = 24,
  BinXmlToken__Enum_SQL_UDT = 27,
  BinXmlToken__Enum_XSD_KATMAI_DATE = 127,
  BinXmlToken__Enum_XSD_KATMAI_DATETIME = 126,
  BinXmlToken__Enum_XSD_KATMAI_TIME = 125,
  BinXmlToken__Enum_XSD_KATMAI_DATEOFFSET = 124,
  BinXmlToken__Enum_XSD_KATMAI_DATETIMEOFFSET = 123,
  BinXmlToken__Enum_XSD_KATMAI_TIMEOFFSET = 122,
  BinXmlToken__Enum_XSD_BOOLEAN = 134,
  BinXmlToken__Enum_XSD_TIME = 129,
  BinXmlToken__Enum_XSD_DATETIME = 130,
  BinXmlToken__Enum_XSD_DATE = 131,
  BinXmlToken__Enum_XSD_BINHEX = 132,
  BinXmlToken__Enum_XSD_BASE64 = 133,
  BinXmlToken__Enum_XSD_DECIMAL = 135,
  BinXmlToken__Enum_XSD_BYTE = 136,
  BinXmlToken__Enum_XSD_UNSIGNEDSHORT = 137,
  BinXmlToken__Enum_XSD_UNSIGNEDINT = 138,
  BinXmlToken__Enum_XSD_UNSIGNEDLONG = 139,
  BinXmlToken__Enum_XSD_QNAME = 140,
};
struct BinXmlToken__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BinXmlToken__Enum value;
};
struct XmlSqlBinaryReader_QName {
  struct String * prefix;
  struct String * localname;
  struct String * namespaceUri;
};
struct XmlSqlBinaryReader_QName__Boxed {
  struct XmlSqlBinaryReader_QName__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_QName fields;
};
struct __declspec(align(8)) XmlSqlBinaryReader__Fields {
  struct Stream * inStrm;
  struct Byte__Array * data;
  int32_t pos;
  int32_t mark;
  int32_t end;
  int64_t offset;
  bool eof;
  bool sniffed;
  bool isEmpty;
  int32_t docState;
  struct XmlSqlBinaryReader_SymbolTables symbolTables;
  struct XmlNameTable * xnt;
  bool xntFromSettings;
  struct String * xml;
  struct String * xmlns;
  struct String * nsxmlns;
  struct String * baseUri;
  enum XmlSqlBinaryReader_ScanState__Enum state;
  enum XmlNodeType__Enum nodetype;
  enum BinXmlToken__Enum token;
  int32_t attrIndex;
  struct XmlSqlBinaryReader_QName qnameOther;
  struct XmlSqlBinaryReader_QName qnameElement;
  enum XmlNodeType__Enum parentNodeType;
  struct XmlSqlBinaryReader_ElemInfo__Array * elementStack;
  int32_t elemDepth;
  struct XmlSqlBinaryReader_AttrInfo__Array * attributes;
  struct Int32__Array * attrHashTbl;
  int32_t attrCount;
  int32_t posAfterAttrs;
  bool xmlspacePreserve;
  int32_t tokLen;
  int32_t tokDataPos;
  bool hasTypedValue;
  struct Type * valueType;
  struct String * stringValue;
  struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * namespaces;
  struct XmlSqlBinaryReader_NestedBinXml * prevNameInfo;
  struct XmlReader * textXmlReader;
  bool closeInput;
  bool checkCharacters;
  bool ignoreWhitespace;
  bool ignorePIs;
  bool ignoreComments;
  enum DtdProcessing__Enum dtdProcessing;
  struct SecureStringHasher * hasher;
  struct XmlCharType xmlCharType;
  struct Encoding * unicode;
  uint8_t version;
};
struct XmlSqlBinaryReader {
  struct XmlSqlBinaryReader__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader__Fields fields;
};
enum ReadState__Enum_1 : int32_t {
  ReadState__Enum_1_Initial = 0,
  ReadState__Enum_1_Interactive = 1,
  ReadState__Enum_1_Error = 2,
  ReadState__Enum_1_EndOfFile = 3,
  ReadState__Enum_1_Closed = 4,
};
struct ReadState__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReadState__Enum_1 value;
};
struct ReadState__Enum_1__Array {
  struct ReadState__Enum_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum ReadState__Enum_1 vector[32];
};
struct XmlSqlBinaryReader_QName__Array {
  struct XmlSqlBinaryReader_QName__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSqlBinaryReader_QName vector[32];
};
enum XmlSpace__Enum : int32_t {
  XmlSpace__Enum_None = 0,
  XmlSpace__Enum_Default = 1,
  XmlSpace__Enum_Preserve = 2,
};
struct XmlSpace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSpace__Enum value;
};
struct XmlSqlBinaryReader_ElemInfo {
  struct XmlSqlBinaryReader_QName name;
  struct String * xmlLang;
  enum XmlSpace__Enum xmlSpace;
  bool xmlspacePreserve;
  struct XmlSqlBinaryReader_NamespaceDecl * nsdecls;
};
struct XmlSqlBinaryReader_ElemInfo__Boxed {
  struct XmlSqlBinaryReader_ElemInfo__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_ElemInfo fields;
};
struct XmlSqlBinaryReader_ElemInfo__Array {
  struct XmlSqlBinaryReader_ElemInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSqlBinaryReader_ElemInfo vector[32];
};
struct __declspec(align(8)) XmlSqlBinaryReader_NamespaceDecl__Fields {
  struct String * prefix;
  struct String * uri;
  struct XmlSqlBinaryReader_NamespaceDecl * scopeLink;
  struct XmlSqlBinaryReader_NamespaceDecl * prevLink;
  int32_t scope;
  bool implied;
};
struct XmlSqlBinaryReader_NamespaceDecl {
  struct XmlSqlBinaryReader_NamespaceDecl__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_NamespaceDecl__Fields fields;
};
struct XmlSqlBinaryReader_AttrInfo {
  struct XmlSqlBinaryReader_QName name;
  struct String * val;
  int32_t contentPos;
  int32_t hashCode;
  int32_t prevHash;
};
struct XmlSqlBinaryReader_AttrInfo__Boxed {
  struct XmlSqlBinaryReader_AttrInfo__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_AttrInfo fields;
};
struct XmlSqlBinaryReader_AttrInfo__Array {
  struct XmlSqlBinaryReader_AttrInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSqlBinaryReader_AttrInfo vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct XmlSqlBinaryReader_NamespaceDecl * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
  struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields {
  struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Fields fields;
};
struct XmlSqlBinaryReader_NamespaceDecl__Array {
  struct XmlSqlBinaryReader_NamespaceDecl__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSqlBinaryReader_NamespaceDecl * vector[32];
};
struct IEnumerator_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct IEnumerator_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct ICollection_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct String * key;
  struct XmlSqlBinaryReader_NamespaceDecl * value;
};
struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Boxed {
  struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ fields;
};
struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array {
  struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
  struct IEnumerable_1_System_Xml_XmlSqlBinaryReader_NamespaceDecl___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) XmlSqlBinaryReader_NestedBinXml__Fields {
  struct XmlSqlBinaryReader_SymbolTables symbolTables;
  int32_t docState;
  struct XmlSqlBinaryReader_NestedBinXml * next;
};
struct XmlSqlBinaryReader_NestedBinXml {
  struct XmlSqlBinaryReader_NestedBinXml__Class *klass;
  struct MonitorData *monitor;
  struct XmlSqlBinaryReader_NestedBinXml__Fields fields;
};
struct __declspec(align(8)) SecureStringHasher__Fields {
  int32_t hashCodeRandomizer;
};
struct SecureStringHasher {
  struct SecureStringHasher__Class *klass;
  struct MonitorData *monitor;
  struct SecureStringHasher__Fields fields;
};
struct SecureStringHasher_HashCodeOfStringDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct SecureStringHasher_HashCodeOfStringDelegate {
  struct SecureStringHasher_HashCodeOfStringDelegate__Class *klass;
  struct MonitorData *monitor;
  struct SecureStringHasher_HashCodeOfStringDelegate__Fields fields;
};
struct IDtdInfo {
  struct IDtdInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ByteStack__Fields {
  struct Byte__Array * stack;
  int32_t growthRate;
  int32_t top;
  int32_t size;
};
struct ByteStack {
  struct ByteStack__Class *klass;
  struct MonitorData *monitor;
  struct ByteStack__Fields fields;
};
struct __declspec(align(8)) TernaryTreeReadOnly__Fields {
  struct Byte__Array * nodeBuffer;
};
struct TernaryTreeReadOnly {
  struct TernaryTreeReadOnly__Class *klass;
  struct MonitorData *monitor;
  struct TernaryTreeReadOnly__Fields fields;
};
enum XmlNodeChangedAction__Enum : int32_t {
  XmlNodeChangedAction__Enum_Insert = 0,
  XmlNodeChangedAction__Enum_Remove = 1,
  XmlNodeChangedAction__Enum_Change = 2,
};
struct XmlNodeChangedAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlNodeChangedAction__Enum value;
};
struct __declspec(align(8)) XmlNodeChangedEventArgs__Fields {
  enum XmlNodeChangedAction__Enum action;
  struct XmlNode * node;
  struct XmlNode * oldParent;
  struct XmlNode * newParent;
  struct String * oldValue;
  struct String * newValue;
};
struct XmlNodeChangedEventArgs {
  struct XmlNodeChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct XmlNodeChangedEventArgs__Fields fields;
};
struct XmlElement__Fields {
  struct XmlLinkedNode__Fields _;
  struct XmlName * name;
  struct XmlAttributeCollection * attributes;
  struct XmlLinkedNode * lastChild;
};
struct XmlElement {
  struct XmlElement__Class *klass;
  struct MonitorData *monitor;
  struct XmlElement__Fields fields;
};
struct XmlSchemaSimpleTypeContent__Fields {
  struct XmlSchemaAnnotated__Fields _;
};
struct XmlSchemaSimpleTypeContent {
  struct XmlSchemaSimpleTypeContent__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSimpleTypeContent__Fields fields;
};
struct XmlNodeChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XmlNodeChangedEventHandler {
  struct XmlNodeChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct XmlNodeChangedEventHandler__Fields fields;
};
struct EmptyEnumerator {
  struct EmptyEnumerator__Class *klass;
  struct MonitorData *monitor;
};
struct XmlDocumentType__Fields {
  struct XmlLinkedNode__Fields _;
  struct String * name;
  struct String * publicId;
  struct String * systemId;
  struct String * internalSubset;
  bool namespaces;
  struct XmlNamedNodeMap * entities;
  struct XmlNamedNodeMap * notations;
  struct SchemaInfo * schemaInfo;
};
struct XmlDocumentType {
  struct XmlDocumentType__Class *klass;
  struct MonitorData *monitor;
  struct XmlDocumentType__Fields fields;
};
struct XmlDeclaration__Fields {
  struct XmlLinkedNode__Fields _;
  struct String * version;
  struct String * encoding;
  struct String * standalone;
};
struct XmlDeclaration {
  struct XmlDeclaration__Class *klass;
  struct MonitorData *monitor;
  struct XmlDeclaration__Fields fields;
};
struct XmlComment__Fields {
  struct XmlCharacterData__Fields _;
};
struct XmlComment {
  struct XmlComment__Class *klass;
  struct MonitorData *monitor;
  struct XmlComment__Fields fields;
};
struct XmlDocumentFragment__Fields {
  struct XmlNode__Fields _;
  struct XmlLinkedNode * lastChild;
};
struct XmlDocumentFragment {
  struct XmlDocumentFragment__Class *klass;
  struct MonitorData *monitor;
  struct XmlDocumentFragment__Fields fields;
};
struct XmlEntityReference__Fields {
  struct XmlLinkedNode__Fields _;
  struct String * name;
  struct XmlLinkedNode * lastChild;
};
struct XmlEntityReference {
  struct XmlEntityReference__Class *klass;
  struct MonitorData *monitor;
  struct XmlEntityReference__Fields fields;
};
struct XmlProcessingInstruction__Fields {
  struct XmlLinkedNode__Fields _;
  struct String * target;
  struct String * data;
};
struct XmlProcessingInstruction {
  struct XmlProcessingInstruction__Class *klass;
  struct MonitorData *monitor;
  struct XmlProcessingInstruction__Fields fields;
};
struct XmlText__Fields {
  struct XmlCharacterData__Fields _;
};
struct XmlText {
  struct XmlText__Class *klass;
  struct MonitorData *monitor;
  struct XmlText__Fields fields;
};
struct XmlSignificantWhitespace__Fields {
  struct XmlCharacterData__Fields _;
};
struct XmlSignificantWhitespace {
  struct XmlSignificantWhitespace__Class *klass;
  struct MonitorData *monitor;
  struct XmlSignificantWhitespace__Fields fields;
};
struct XmlWhitespace__Fields {
  struct XmlCharacterData__Fields _;
};
struct XmlWhitespace {
  struct XmlWhitespace__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameTable_Entry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameTable_Entry__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlNameTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlImplementation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlImplementation__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSerializerNamespaces__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
};}