namespace app {
struct SchemaElementDecl {
  struct SchemaElementDecl__Class *klass;
  struct MonitorData *monitor;
  struct SchemaElementDecl__Fields fields;
};
struct XmlSchemaDatatype {
  struct XmlSchemaDatatype__Class *klass;
  struct MonitorData *monitor;
};
enum XmlSchemaDatatypeVariety__Enum : int32_t {
  XmlSchemaDatatypeVariety__Enum_Atomic = 0,
  XmlSchemaDatatypeVariety__Enum_List = 1,
  XmlSchemaDatatypeVariety__Enum_Union = 2,
};
struct XmlSchemaDatatypeVariety__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaDatatypeVariety__Enum value;
};
struct __declspec(align(8)) DatatypeImplementation__Fields {
  enum XmlSchemaDatatypeVariety__Enum variety;
  struct RestrictionFacets * restriction;
  struct DatatypeImplementation * baseType;
  struct XmlValueConverter * valueConverter;
  struct XmlSchemaType * parentSchemaType;
};
struct DatatypeImplementation {
  struct DatatypeImplementation__Class *klass;
  struct MonitorData *monitor;
  struct DatatypeImplementation__Fields fields;
};
struct Datatype_anySimpleType__Fields {
  struct DatatypeImplementation__Fields _;
};
struct Datatype_anySimpleType {
  struct Datatype_anySimpleType__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_anySimpleType__Fields fields;
};
struct Datatype_List__Fields {
  struct Datatype_anySimpleType__Fields _;
  struct DatatypeImplementation * itemType;
  int32_t minListSize;
};
struct Datatype_List {
  struct Datatype_List__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_List__Fields fields;
};
enum XmlSchemaWhiteSpace__Enum : int32_t {
  XmlSchemaWhiteSpace__Enum_Preserve = 0,
  XmlSchemaWhiteSpace__Enum_Replace = 1,
  XmlSchemaWhiteSpace__Enum_Collapse = 2,
};
struct XmlSchemaWhiteSpace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaWhiteSpace__Enum value;
};
enum RestrictionFlags__Enum : int32_t {
  RestrictionFlags__Enum_Length = 1,
  RestrictionFlags__Enum_MinLength = 2,
  RestrictionFlags__Enum_MaxLength = 4,
  RestrictionFlags__Enum_Pattern = 8,
  RestrictionFlags__Enum_Enumeration = 16,
  RestrictionFlags__Enum_WhiteSpace = 32,
  RestrictionFlags__Enum_MaxInclusive = 64,
  RestrictionFlags__Enum_MaxExclusive = 128,
  RestrictionFlags__Enum_MinInclusive = 256,
  RestrictionFlags__Enum_MinExclusive = 512,
  RestrictionFlags__Enum_TotalDigits = 1024,
  RestrictionFlags__Enum_FractionDigits = 2048,
};
struct RestrictionFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RestrictionFlags__Enum value;
};
struct __declspec(align(8)) RestrictionFacets__Fields {
  int32_t Length;
  int32_t MinLength;
  int32_t MaxLength;
  struct ArrayList * Patterns;
  struct ArrayList * Enumeration;
  enum XmlSchemaWhiteSpace__Enum WhiteSpace;
  struct Object * MaxInclusive;
  struct Object * MaxExclusive;
  struct Object * MinInclusive;
  struct Object * MinExclusive;
  int32_t TotalDigits;
  int32_t FractionDigits;
  enum RestrictionFlags__Enum Flags;
  enum RestrictionFlags__Enum FixedFlags;
};
struct RestrictionFacets {
  struct RestrictionFacets__Class *klass;
  struct MonitorData *monitor;
  struct RestrictionFacets__Fields fields;
};
struct XmlValueConverter {
  struct XmlValueConverter__Class *klass;
  struct MonitorData *monitor;
};
enum XmlTypeCode__Enum : int32_t {
  XmlTypeCode__Enum_None = 0,
  XmlTypeCode__Enum_Item = 1,
  XmlTypeCode__Enum_Node = 2,
  XmlTypeCode__Enum_Document = 3,
  XmlTypeCode__Enum_Element = 4,
  XmlTypeCode__Enum_Attribute = 5,
  XmlTypeCode__Enum_Namespace = 6,
  XmlTypeCode__Enum_ProcessingInstruction = 7,
  XmlTypeCode__Enum_Comment = 8,
  XmlTypeCode__Enum_Text = 9,
  XmlTypeCode__Enum_AnyAtomicType = 10,
  XmlTypeCode__Enum_UntypedAtomic = 11,
  XmlTypeCode__Enum_String = 12,
  XmlTypeCode__Enum_Boolean = 13,
  XmlTypeCode__Enum_Decimal = 14,
  XmlTypeCode__Enum_Float = 15,
  XmlTypeCode__Enum_Double = 16,
  XmlTypeCode__Enum_Duration = 17,
  XmlTypeCode__Enum_DateTime = 18,
  XmlTypeCode__Enum_Time = 19,
  XmlTypeCode__Enum_Date = 20,
  XmlTypeCode__Enum_GYearMonth = 21,
  XmlTypeCode__Enum_GYear = 22,
  XmlTypeCode__Enum_GMonthDay = 23,
  XmlTypeCode__Enum_GDay = 24,
  XmlTypeCode__Enum_GMonth = 25,
  XmlTypeCode__Enum_HexBinary = 26,
  XmlTypeCode__Enum_Base64Binary = 27,
  XmlTypeCode__Enum_AnyUri = 28,
  XmlTypeCode__Enum_QName = 29,
  XmlTypeCode__Enum_Notation = 30,
  XmlTypeCode__Enum_NormalizedString = 31,
  XmlTypeCode__Enum_Token = 32,
  XmlTypeCode__Enum_Language = 33,
  XmlTypeCode__Enum_NmToken = 34,
  XmlTypeCode__Enum_Name = 35,
  XmlTypeCode__Enum_NCName = 36,
  XmlTypeCode__Enum_Id = 37,
  XmlTypeCode__Enum_Idref = 38,
  XmlTypeCode__Enum_Entity = 39,
  XmlTypeCode__Enum_Integer = 40,
  XmlTypeCode__Enum_NonPositiveInteger = 41,
  XmlTypeCode__Enum_NegativeInteger = 42,
  XmlTypeCode__Enum_Long = 43,
  XmlTypeCode__Enum_Int = 44,
  XmlTypeCode__Enum_Short = 45,
  XmlTypeCode__Enum_Byte = 46,
  XmlTypeCode__Enum_NonNegativeInteger = 47,
  XmlTypeCode__Enum_UnsignedLong = 48,
  XmlTypeCode__Enum_UnsignedInt = 49,
  XmlTypeCode__Enum_UnsignedShort = 50,
  XmlTypeCode__Enum_UnsignedByte = 51,
  XmlTypeCode__Enum_PositiveInteger = 52,
  XmlTypeCode__Enum_YearMonthDuration = 53,
  XmlTypeCode__Enum_DayTimeDuration = 54,
};
struct XmlTypeCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlTypeCode__Enum value;
};
struct __declspec(align(8)) XmlBaseConverter__Fields {
  struct XmlSchemaType * schemaType;
  enum XmlTypeCode__Enum typeCode;
  struct Type * clrTypeDefault;
};
struct XmlBaseConverter {
  struct XmlBaseConverter__Class *klass;
  struct MonitorData *monitor;
  struct XmlBaseConverter__Fields fields;
};
struct XmlNumeric10Converter__Fields {
  struct XmlBaseConverter__Fields _;
};
struct XmlNumeric10Converter {
  struct XmlNumeric10Converter__Class *klass;
  struct MonitorData *monitor;
  struct XmlNumeric10Converter__Fields fields;
};
struct XmlSchemaSimpleType__Array {
  struct XmlSchemaSimpleType__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchemaSimpleType * vector[32];
};
struct FacetsChecker {
  struct FacetsChecker__Class *klass;
  struct MonitorData *monitor;
};
struct DatatypeImplementation__Array {
  struct DatatypeImplementation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DatatypeImplementation * vector[32];
};
struct __declspec(align(8)) DatatypeImplementation_SchemaDatatypeMap__Fields {
  struct String * name;
  struct DatatypeImplementation * type;
  int32_t parentIndex;
};
struct DatatypeImplementation_SchemaDatatypeMap {
  struct DatatypeImplementation_SchemaDatatypeMap__Class *klass;
  struct MonitorData *monitor;
  struct DatatypeImplementation_SchemaDatatypeMap__Fields fields;
};
struct DatatypeImplementation_SchemaDatatypeMap__Array {
  struct DatatypeImplementation_SchemaDatatypeMap__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DatatypeImplementation_SchemaDatatypeMap * vector[32];
};
enum XmlTokenizedType__Enum : int32_t {
  XmlTokenizedType__Enum_CDATA = 0,
  XmlTokenizedType__Enum_ID = 1,
  XmlTokenizedType__Enum_IDREF = 2,
  XmlTokenizedType__Enum_IDREFS = 3,
  XmlTokenizedType__Enum_ENTITY = 4,
  XmlTokenizedType__Enum_ENTITIES = 5,
  XmlTokenizedType__Enum_NMTOKEN = 6,
  XmlTokenizedType__Enum_NMTOKENS = 7,
  XmlTokenizedType__Enum_NOTATION = 8,
  XmlTokenizedType__Enum_ENUMERATION = 9,
  XmlTokenizedType__Enum_QName = 10,
  XmlTokenizedType__Enum_NCName = 11,
  XmlTokenizedType__Enum_None = 12,
};
struct XmlTokenizedType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlTokenizedType__Enum value;
};
struct __declspec(align(8)) XmlSchemaObjectTable__Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ * table;
  struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ * entries;
};
struct XmlSchemaObjectTable {
  struct XmlSchemaObjectTable__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectTable__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  struct XmlSchemaObject * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ vector[32];
};
struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ {
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
};
struct IEnumerator_1_System_Xml_XmlQualifiedName_ {
  struct IEnumerator_1_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Fields fields;
};
struct XmlSchemaObject__Array {
  struct XmlSchemaObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchemaObject * vector[32];
};
struct IEnumerator_1_System_Xml_Schema_XmlSchemaObject_ {
  struct IEnumerator_1_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_XmlQualifiedName_ {
  struct ICollection_1_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Schema_XmlSchemaObject_ {
  struct ICollection_1_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  struct XmlQualifiedName * key;
  struct XmlSchemaObject * value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_XmlQualifiedName_ {
  struct IEnumerable_1_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Schema_XmlSchemaObject_ {
  struct IEnumerable_1_System_Xml_Schema_XmlSchemaObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Fields {
  struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ {
  struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Fields fields;
};
struct XmlSchemaObjectTable_XmlSchemaObjectEntry {
  struct XmlQualifiedName * qname;
  struct XmlSchemaObject * xso;
};
struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Boxed {
  struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectTable_XmlSchemaObjectEntry fields;
};
struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array {
  struct XmlSchemaObjectTable_XmlSchemaObjectEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchemaObjectTable_XmlSchemaObjectEntry vector[32];
};
struct IEnumerator_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ {
  struct IEnumerator_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  struct SchemaAttDef * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ vector[32];
};
enum SchemaAttDef_Reserve__Enum : int32_t {
  SchemaAttDef_Reserve__Enum_None = 0,
  SchemaAttDef_Reserve__Enum_XmlSpace = 1,
  SchemaAttDef_Reserve__Enum_XmlLang = 2,
};
struct SchemaAttDef_Reserve__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaAttDef_Reserve__Enum value;
};
struct SchemaAttDef__Fields {
  struct SchemaDeclBase__Fields _;
  struct String * defExpanded;
  int32_t lineNum;
  int32_t linePos;
  int32_t valueLineNum;
  int32_t valueLinePos;
  enum SchemaAttDef_Reserve__Enum reserved;
  bool defaultValueChecked;
  struct XmlSchemaAttribute * schemaAttribute;
};
struct SchemaAttDef {
  struct SchemaAttDef__Class *klass;
  struct MonitorData *monitor;
  struct SchemaAttDef__Fields fields;
};
enum XmlSchemaForm__Enum : int32_t {
  XmlSchemaForm__Enum_None = 0,
  XmlSchemaForm__Enum_Qualified = 1,
  XmlSchemaForm__Enum_Unqualified = 2,
};
struct XmlSchemaForm__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaForm__Enum value;
};
enum XmlSchemaUse__Enum : int32_t {
  XmlSchemaUse__Enum_None = 0,
  XmlSchemaUse__Enum_Optional = 1,
  XmlSchemaUse__Enum_Prohibited = 2,
  XmlSchemaUse__Enum_Required = 3,
};
struct XmlSchemaUse__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaUse__Enum value;
};
struct XmlSchemaAttribute__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * defaultValue;
  struct String * fixedValue;
  struct String * name;
  enum XmlSchemaForm__Enum form;
  enum XmlSchemaUse__Enum use;
  struct XmlQualifiedName * refName;
  struct XmlQualifiedName * typeName;
  struct XmlQualifiedName * qualifiedName;
  struct XmlSchemaSimpleType * type;
  struct XmlSchemaSimpleType * attributeType;
  struct SchemaAttDef * attDef;
};
struct XmlSchemaAttribute {
  struct XmlSchemaAttribute__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAttribute__Fields fields;
};
struct XmlSchemaAnnotation__Fields {
  struct XmlSchemaObject__Fields _;
  struct String * id;
  struct XmlSchemaObjectCollection * items;
  struct XmlAttribute__Array * moreAttributes;
};
struct XmlSchemaAnnotation {
  struct XmlSchemaAnnotation__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAnnotation__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Fields fields;
};
struct SchemaAttDef__Array {
  struct SchemaAttDef__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SchemaAttDef * vector[32];
};
struct IEnumerator_1_System_Xml_Schema_SchemaAttDef_ {
  struct IEnumerator_1_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Schema_SchemaAttDef_ {
  struct ICollection_1_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  struct XmlQualifiedName * key;
  struct SchemaAttDef * value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Schema_SchemaAttDef_ {
  struct IEnumerable_1_System_Xml_Schema_SchemaAttDef___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Xml_IDtdDefaultAttributeInfo___Fields {
  struct IDtdDefaultAttributeInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Xml_IDtdDefaultAttributeInfo_ {
  struct List_1_System_Xml_IDtdDefaultAttributeInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Xml_IDtdDefaultAttributeInfo___Fields fields;
};
struct IDtdDefaultAttributeInfo {
  struct IDtdDefaultAttributeInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IDtdDefaultAttributeInfo__Array {
  struct IDtdDefaultAttributeInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDtdDefaultAttributeInfo * vector[32];
};
struct IEnumerator_1_System_Xml_IDtdDefaultAttributeInfo_ {
  struct IEnumerator_1_System_Xml_IDtdDefaultAttributeInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Xml_XmlQualifiedName_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  int32_t hashCode;
  int32_t next;
  struct XmlQualifiedName * key;
  struct XmlQualifiedName * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Fields fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  struct XmlQualifiedName * key;
  struct XmlQualifiedName * value;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Boxed {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ fields;
};
struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array {
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
  struct IEnumerator_1_KeyValuePair_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ContentValidator__Fields {
  enum XmlSchemaContentType__Enum contentType;
  bool isOpen;
  bool isEmptiable;
};
struct ContentValidator {
  struct ContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct ContentValidator__Fields fields;
};
enum XmlSchemaContentProcessing__Enum : int32_t {
  XmlSchemaContentProcessing__Enum_None = 0,
  XmlSchemaContentProcessing__Enum_Skip = 1,
  XmlSchemaContentProcessing__Enum_Lax = 2,
  XmlSchemaContentProcessing__Enum_Strict = 3,
};
struct XmlSchemaContentProcessing__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaContentProcessing__Enum value;
};
struct StateUnion {
  int32_t State;
  int32_t AllElementsRequired;
  int32_t CurPosIndex;
  int32_t NumberOfRunningPos;
};
struct StateUnion__Boxed {
  struct StateUnion__Class *klass;
  struct MonitorData *monitor;
  struct StateUnion fields;
};
struct __declspec(align(8)) ValidationState__Fields {
  bool IsNill;
  bool IsDefault;
  bool NeedValidateChildren;
  bool CheckRequiredAttribute;
  bool ValidationSkipped;
  enum XmlSchemaContentProcessing__Enum ProcessContents;
  enum XmlSchemaValidity__Enum Validity;
  struct SchemaElementDecl * ElementDecl;
  struct SchemaElementDecl * ElementDeclBeforeXsi;
  struct String * LocalName;
  struct String * Namespace;
  struct ConstraintStruct__Array * Constr;
  struct StateUnion CurrentState;
  bool HasMatched;
  struct BitSet__Array * CurPos;
  struct BitSet * AllElementsSet;
  struct List_1_System_Xml_Schema_RangePositionInfo_ * RunningPositions;
  bool TooComplex;
};
struct ValidationState {
  struct ValidationState__Class *klass;
  struct MonitorData *monitor;
  struct ValidationState__Fields fields;
};
struct __declspec(align(8)) ConstraintStruct__Fields {
  struct CompiledIdentityConstraint * constraint;
  struct SelectorActiveAxis * axisSelector;
  struct ArrayList * axisFields;
  struct Hashtable * qualifiedTable;
  struct Hashtable * keyrefTable;
  int32_t tableDim;
};
struct ConstraintStruct {
  struct ConstraintStruct__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintStruct__Fields fields;
};
struct ConstraintStruct__Array {
  struct ConstraintStruct__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConstraintStruct * vector[32];
};
enum CompiledIdentityConstraint_ConstraintRole__Enum : int32_t {
  CompiledIdentityConstraint_ConstraintRole__Enum_Unique = 0,
  CompiledIdentityConstraint_ConstraintRole__Enum_Key = 1,
  CompiledIdentityConstraint_ConstraintRole__Enum_Keyref = 2,
};
struct CompiledIdentityConstraint_ConstraintRole__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompiledIdentityConstraint_ConstraintRole__Enum value;
};
struct __declspec(align(8)) CompiledIdentityConstraint__Fields {
  struct XmlQualifiedName * name;
  enum CompiledIdentityConstraint_ConstraintRole__Enum role;
  struct Asttree * selector;
  struct Asttree__Array * fields;
  struct XmlQualifiedName * refer;
};
struct CompiledIdentityConstraint {
  struct CompiledIdentityConstraint__Class *klass;
  struct MonitorData *monitor;
  struct CompiledIdentityConstraint__Fields fields;
};
struct __declspec(align(8)) Asttree__Fields {
  struct ArrayList * fAxisArray;
  struct String * xpathexpr;
  bool isField;
  struct XmlNamespaceManager * nsmgr;
};
struct Asttree {
  struct Asttree__Class *klass;
  struct MonitorData *monitor;
  struct Asttree__Fields fields;
};
struct __declspec(align(8)) XmlNamespaceManager__Fields {
  struct XmlNamespaceManager_NamespaceDeclaration__Array * nsdecls;
  int32_t lastDecl;
  struct XmlNameTable * nameTable;
  int32_t scopeId;
  struct Dictionary_2_System_String_System_Int32_ * hashTable;
  bool useHashtable;
  struct String * xml;
  struct String * xmlNs;
};
struct XmlNamespaceManager {
  struct XmlNamespaceManager__Class *klass;
  struct MonitorData *monitor;
  struct XmlNamespaceManager__Fields fields;
};
struct XmlNamespaceManager_NamespaceDeclaration {
  struct String * prefix;
  struct String * uri;
  int32_t scopeId;
  int32_t previousNsIndex;
};
struct XmlNamespaceManager_NamespaceDeclaration__Boxed {
  struct XmlNamespaceManager_NamespaceDeclaration__Class *klass;
  struct MonitorData *monitor;
  struct XmlNamespaceManager_NamespaceDeclaration fields;
};
struct XmlNamespaceManager_NamespaceDeclaration__Array {
  struct XmlNamespaceManager_NamespaceDeclaration__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlNamespaceManager_NamespaceDeclaration vector[32];
};
enum XmlNamespaceScope__Enum : int32_t {
  XmlNamespaceScope__Enum_All = 0,
  XmlNamespaceScope__Enum_ExcludeXml = 1,
  XmlNamespaceScope__Enum_Local = 2,
};
struct XmlNamespaceScope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlNamespaceScope__Enum value;
};
struct Asttree__Array {
  struct Asttree__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Asttree * vector[32];
};
struct __declspec(align(8)) ActiveAxis__Fields {
  int32_t currentDepth;
  bool isActive;
  struct Asttree * axisTree;
  struct ArrayList * axisStack;
};
struct ActiveAxis {
  struct ActiveAxis__Class *klass;
  struct MonitorData *monitor;
  struct ActiveAxis__Fields fields;
};
struct SelectorActiveAxis__Fields {
  struct ActiveAxis__Fields _;
  struct ConstraintStruct * cs;
  struct ArrayList * KSs;
  int32_t KSpointer;
};
struct SelectorActiveAxis {
  struct SelectorActiveAxis__Class *klass;
  struct MonitorData *monitor;
  struct SelectorActiveAxis__Fields fields;
};
struct __declspec(align(8)) BitSet__Fields {
  int32_t count;
  struct UInt32__Array * bits;
};
struct BitSet {
  struct BitSet__Class *klass;
  struct MonitorData *monitor;
  struct BitSet__Fields fields;
};
struct BitSet__Array {
  struct BitSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BitSet * vector[32];
};
struct __declspec(align(8)) List_1_System_Xml_Schema_RangePositionInfo___Fields {
  struct RangePositionInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Xml_Schema_RangePositionInfo_ {
  struct List_1_System_Xml_Schema_RangePositionInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Xml_Schema_RangePositionInfo___Fields fields;
};
struct RangePositionInfo {
  struct BitSet * curpos;
  struct Decimal__Array * rangeCounters;
};
struct RangePositionInfo__Boxed {
  struct RangePositionInfo__Class *klass;
  struct MonitorData *monitor;
  struct RangePositionInfo fields;
};
struct RangePositionInfo__Array {
  struct RangePositionInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RangePositionInfo vector[32];
};
struct Decimal__Array {
  struct Decimal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Decimal vector[32];
};
struct IEnumerator_1_System_Xml_Schema_RangePositionInfo_ {
  struct IEnumerator_1_System_Xml_Schema_RangePositionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct XmlSchemaAnyAttribute__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * ns;
  enum XmlSchemaContentProcessing__Enum processContents;
  struct NamespaceList * namespaceList;
};
struct XmlSchemaAnyAttribute {
  struct XmlSchemaAnyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAnyAttribute__Fields fields;
};
enum NamespaceList_ListType__Enum : int32_t {
  NamespaceList_ListType__Enum_Any = 0,
  NamespaceList_ListType__Enum_Other = 1,
  NamespaceList_ListType__Enum_Set = 2,
};
struct NamespaceList_ListType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NamespaceList_ListType__Enum value;
};
struct __declspec(align(8)) NamespaceList__Fields {
  enum NamespaceList_ListType__Enum type;
  struct Hashtable * set;
  struct String * targetNamespace;
};
struct NamespaceList {
  struct NamespaceList__Class *klass;
  struct MonitorData *monitor;
  struct NamespaceList__Fields fields;
};
struct CompiledIdentityConstraint__Array {
  struct CompiledIdentityConstraint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CompiledIdentityConstraint * vector[32];
};
enum XmlSchemaParticle_Occurs__Enum : int32_t {
  XmlSchemaParticle_Occurs__Enum_None = 0,
  XmlSchemaParticle_Occurs__Enum_Min = 1,
  XmlSchemaParticle_Occurs__Enum_Max = 2,
};
struct XmlSchemaParticle_Occurs__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaParticle_Occurs__Enum value;
};
struct XmlSchemaParticle__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct Decimal minOccurs;
  struct Decimal maxOccurs;
  enum XmlSchemaParticle_Occurs__Enum flags;
};
struct XmlSchemaParticle {
  struct XmlSchemaParticle__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaParticle__Fields fields;
};
struct XmlSchemaElement__Fields {
  struct XmlSchemaParticle__Fields _;
  bool isAbstract;
  bool hasAbstractAttribute;
  bool isNillable;
  bool hasNillableAttribute;
  bool isLocalTypeDerivationChecked;
  enum XmlSchemaDerivationMethod__Enum block;
  enum XmlSchemaDerivationMethod__Enum final_1;
  enum XmlSchemaForm__Enum form;
  struct String * defaultValue;
  struct String * fixedValue;
  struct String * name;
  struct XmlQualifiedName * refName;
  struct XmlQualifiedName * substitutionGroup;
  struct XmlQualifiedName * typeName;
  struct XmlSchemaType * type;
  struct XmlQualifiedName * qualifiedName;
  struct XmlSchemaType * elementType;
  enum XmlSchemaDerivationMethod__Enum blockResolved;
  enum XmlSchemaDerivationMethod__Enum finalResolved;
  struct XmlSchemaObjectCollection * constraints;
  struct SchemaElementDecl * elementDecl;
};
struct XmlSchemaElement {
  struct XmlSchemaElement__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaElement__Fields fields;
};
struct IDtdAttributeInfo {
  struct IDtdAttributeInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo_ {
  struct IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields {
  struct Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl___Fields fields;
};
struct SchemaElementDecl__Array {
  struct SchemaElementDecl__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SchemaElementDecl * vector[32];
};}