namespace app {
struct XmlUnionConverter__StaticFields {
};
struct XmlUnionConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlUnionConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlUnionConverter__VTable vtable;
};

struct __declspec(align(8)) XsdBuilder__Fields {
  struct XmlReader * reader;
  struct PositionInfo * positionInfo;
  struct XsdBuilder_XsdEntry * currentEntry;
  struct XsdBuilder_XsdEntry * nextEntry;
  bool hasChild;
  struct HWStack * stateHistory;
  struct Stack * containerStack;
  struct XmlNameTable * nameTable;
  struct SchemaNames * schemaNames;
  struct XmlNamespaceManager * namespaceManager;
  bool canIncludeImport;
  struct XmlSchema * schema;
  struct XmlSchemaObject * xso;
  struct XmlSchemaElement * element;
  struct XmlSchemaAny * anyElement;
  struct XmlSchemaAttribute * attribute;
  struct XmlSchemaAnyAttribute * anyAttribute;
  struct XmlSchemaComplexType * complexType;
  struct XmlSchemaSimpleType * simpleType;
  struct XmlSchemaComplexContent * complexContent;
  struct XmlSchemaComplexContentExtension * complexContentExtension;
  struct XmlSchemaComplexContentRestriction * complexContentRestriction;
  struct XmlSchemaSimpleContent * simpleContent;
  struct XmlSchemaSimpleContentExtension * simpleContentExtension;
  struct XmlSchemaSimpleContentRestriction * simpleContentRestriction;
  struct XmlSchemaSimpleTypeUnion * simpleTypeUnion;
  struct XmlSchemaSimpleTypeList * simpleTypeList;
  struct XmlSchemaSimpleTypeRestriction * simpleTypeRestriction;
  struct XmlSchemaGroup * group;
  struct XmlSchemaGroupRef * groupRef;
  struct XmlSchemaAll * all;
  struct XmlSchemaChoice * choice;
  struct XmlSchemaSequence * sequence;
  struct XmlSchemaParticle * particle;
  struct XmlSchemaAttributeGroup * attributeGroup;
  struct XmlSchemaAttributeGroupRef * attributeGroupRef;
  struct XmlSchemaNotation * notation;
  struct XmlSchemaIdentityConstraint * identityConstraint;
  struct XmlSchemaXPath * xpath;
  struct XmlSchemaInclude * include;
  struct XmlSchemaImport * import;
  struct XmlSchemaAnnotation * annotation;
  struct XmlSchemaAppInfo * appInfo;
  struct XmlSchemaDocumentation * documentation;
  struct XmlSchemaFacet * facet;
  struct XmlNode__Array * markup;
  struct XmlSchemaRedefine * redefine;
  struct ValidationEventHandler * validationEventHandler;
  struct ArrayList * unhandledAttributes;
  struct Hashtable * namespaces;
};
struct XsdBuilder {
  struct XsdBuilder__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder__Fields fields;
};
enum XsdBuilder_State__Enum : int32_t {
  XsdBuilder_State__Enum_Root = 0,
  XsdBuilder_State__Enum_Schema = 1,
  XsdBuilder_State__Enum_Annotation = 2,
  XsdBuilder_State__Enum_Include = 3,
  XsdBuilder_State__Enum_Import = 4,
  XsdBuilder_State__Enum_Element = 5,
  XsdBuilder_State__Enum_Attribute = 6,
  XsdBuilder_State__Enum_AttributeGroup = 7,
  XsdBuilder_State__Enum_AttributeGroupRef = 8,
  XsdBuilder_State__Enum_AnyAttribute = 9,
  XsdBuilder_State__Enum_Group = 10,
  XsdBuilder_State__Enum_GroupRef = 11,
  XsdBuilder_State__Enum_All = 12,
  XsdBuilder_State__Enum_Choice = 13,
  XsdBuilder_State__Enum_Sequence = 14,
  XsdBuilder_State__Enum_Any = 15,
  XsdBuilder_State__Enum_Notation = 16,
  XsdBuilder_State__Enum_SimpleType = 17,
  XsdBuilder_State__Enum_ComplexType = 18,
  XsdBuilder_State__Enum_ComplexContent = 19,
  XsdBuilder_State__Enum_ComplexContentRestriction = 20,
  XsdBuilder_State__Enum_ComplexContentExtension = 21,
  XsdBuilder_State__Enum_SimpleContent = 22,
  XsdBuilder_State__Enum_SimpleContentExtension = 23,
  XsdBuilder_State__Enum_SimpleContentRestriction = 24,
  XsdBuilder_State__Enum_SimpleTypeUnion = 25,
  XsdBuilder_State__Enum_SimpleTypeList = 26,
  XsdBuilder_State__Enum_SimpleTypeRestriction = 27,
  XsdBuilder_State__Enum_Unique = 28,
  XsdBuilder_State__Enum_Key = 29,
  XsdBuilder_State__Enum_KeyRef = 30,
  XsdBuilder_State__Enum_Selector = 31,
  XsdBuilder_State__Enum_Field = 32,
  XsdBuilder_State__Enum_MinExclusive = 33,
  XsdBuilder_State__Enum_MinInclusive = 34,
  XsdBuilder_State__Enum_MaxExclusive = 35,
  XsdBuilder_State__Enum_MaxInclusive = 36,
  XsdBuilder_State__Enum_TotalDigits = 37,
  XsdBuilder_State__Enum_FractionDigits = 38,
  XsdBuilder_State__Enum_Length = 39,
  XsdBuilder_State__Enum_MinLength = 40,
  XsdBuilder_State__Enum_MaxLength = 41,
  XsdBuilder_State__Enum_Enumeration = 42,
  XsdBuilder_State__Enum_Pattern = 43,
  XsdBuilder_State__Enum_WhiteSpace = 44,
  XsdBuilder_State__Enum_AppInfo = 45,
  XsdBuilder_State__Enum_Documentation = 46,
  XsdBuilder_State__Enum_Redefine = 47,
};
struct XsdBuilder_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdBuilder_State__Enum value;
};
struct XsdBuilder_State__Enum__Array {
  struct XsdBuilder_State__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum XsdBuilder_State__Enum vector[32];
};
struct __declspec(align(8)) XsdBuilder_XsdAttributeEntry__Fields {
  enum SchemaNames_Token__Enum Attribute;
  struct XsdBuilder_XsdBuildFunction * BuildFunc;
};
struct XsdBuilder_XsdAttributeEntry {
  struct XsdBuilder_XsdAttributeEntry__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_XsdAttributeEntry__Fields fields;
};
struct XsdBuilder_XsdAttributeEntry__Array {
  struct XsdBuilder_XsdAttributeEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XsdBuilder_XsdAttributeEntry * vector[32];
};
struct XsdBuilder_XsdBuildFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XsdBuilder_XsdBuildFunction {
  struct XsdBuilder_XsdBuildFunction__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_XsdBuildFunction__Fields fields;
};
struct __declspec(align(8)) XsdBuilder_XsdEntry__Fields {
  enum SchemaNames_Token__Enum Name;
  enum XsdBuilder_State__Enum CurrentState;
  struct XsdBuilder_State__Enum__Array * NextStates;
  struct XsdBuilder_XsdAttributeEntry__Array * Attributes;
  struct XsdBuilder_XsdInitFunction * InitFunc;
  struct XsdBuilder_XsdEndChildFunction * EndChildFunc;
  bool ParseContent;
};
struct XsdBuilder_XsdEntry {
  struct XsdBuilder_XsdEntry__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_XsdEntry__Fields fields;
};
struct XsdBuilder_XsdEntry__Array {
  struct XsdBuilder_XsdEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XsdBuilder_XsdEntry * vector[32];
};
struct XsdBuilder_XsdInitFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XsdBuilder_XsdInitFunction {
  struct XsdBuilder_XsdInitFunction__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_XsdInitFunction__Fields fields;
};
struct XsdBuilder_XsdEndChildFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct XsdBuilder_XsdEndChildFunction {
  struct XsdBuilder_XsdEndChildFunction__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_XsdEndChildFunction__Fields fields;
};
struct XsdBuilder_XsdBuildFunction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct XsdBuilder_XsdBuildFunction__StaticFields {
};
struct XsdBuilder_XsdBuildFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_XsdBuildFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_XsdBuildFunction__VTable vtable;
};
struct XsdBuilder_XsdAttributeEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdBuilder_XsdAttributeEntry__StaticFields {
};
struct XsdBuilder_XsdAttributeEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_XsdAttributeEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_XsdAttributeEntry__VTable vtable;
};
struct XsdBuilder_XsdInitFunction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct XsdBuilder_XsdInitFunction__StaticFields {
};
struct XsdBuilder_XsdInitFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_XsdInitFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_XsdInitFunction__VTable vtable;
};
struct XsdBuilder_XsdEndChildFunction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct XsdBuilder_XsdEndChildFunction__StaticFields {
};
struct XsdBuilder_XsdEndChildFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_XsdEndChildFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_XsdEndChildFunction__VTable vtable;
};
struct XsdBuilder_XsdEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdBuilder_XsdEntry__StaticFields {
};
struct XsdBuilder_XsdEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_XsdEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_XsdEntry__VTable vtable;
};
struct XsdBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ProcessElement;
  VirtualInvokeData ProcessAttribute;
  VirtualInvokeData IsContentParsed;
  VirtualInvokeData ProcessMarkup;
  VirtualInvokeData ProcessCData;
  VirtualInvokeData StartChildren;
  VirtualInvokeData EndChildren;
};
struct XsdBuilder__StaticFields {
  struct XsdBuilder_State__Enum__Array * SchemaElement;
  struct XsdBuilder_State__Enum__Array * SchemaSubelements;
  struct XsdBuilder_State__Enum__Array * AttributeSubelements;
  struct XsdBuilder_State__Enum__Array * ElementSubelements;
  struct XsdBuilder_State__Enum__Array * ComplexTypeSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleContentSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleContentExtensionSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleContentRestrictionSubelements;
  struct XsdBuilder_State__Enum__Array * ComplexContentSubelements;
  struct XsdBuilder_State__Enum__Array * ComplexContentExtensionSubelements;
  struct XsdBuilder_State__Enum__Array * ComplexContentRestrictionSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleTypeSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleTypeRestrictionSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleTypeListSubelements;
  struct XsdBuilder_State__Enum__Array * SimpleTypeUnionSubelements;
  struct XsdBuilder_State__Enum__Array * RedefineSubelements;
  struct XsdBuilder_State__Enum__Array * AttributeGroupSubelements;
  struct XsdBuilder_State__Enum__Array * GroupSubelements;
  struct XsdBuilder_State__Enum__Array * AllSubelements;
  struct XsdBuilder_State__Enum__Array * ChoiceSequenceSubelements;
  struct XsdBuilder_State__Enum__Array * IdentityConstraintSubelements;
  struct XsdBuilder_State__Enum__Array * AnnotationSubelements;
  struct XsdBuilder_State__Enum__Array * AnnotatedSubelements;
  struct XsdBuilder_XsdAttributeEntry__Array * SchemaAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AttributeAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ElementAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ComplexTypeAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleContentAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleContentExtensionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleContentRestrictionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ComplexContentAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ComplexContentExtensionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ComplexContentRestrictionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleTypeAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleTypeRestrictionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleTypeUnionAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SimpleTypeListAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AttributeGroupAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AttributeGroupRefAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * GroupAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * GroupRefAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ParticleAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AnyAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * IdentityConstraintAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * SelectorAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * FieldAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * NotationAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * IncludeAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * ImportAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * FacetAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AnyAttributeAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * DocumentationAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AppinfoAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * RedefineAttributes;
  struct XsdBuilder_XsdAttributeEntry__Array * AnnotationAttributes;
  struct XsdBuilder_XsdEntry__Array * SchemaEntries;
  struct Int32__Array * DerivationMethodValues;
  struct String__Array * DerivationMethodStrings;
  struct String__Array * FormStringValues;
  struct String__Array * UseStringValues;
  struct String__Array * ProcessContentsStringValues;
};
struct XsdBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder__VTable vtable;
};

struct XsdBuilder_BuilderNamespaceManager__Fields {
  struct XmlNamespaceManager__Fields _;
  struct XmlNamespaceManager * nsMgr;
  struct XmlReader * reader;
};
struct XsdBuilder_BuilderNamespaceManager {
  struct XsdBuilder_BuilderNamespaceManager__Class *klass;
  struct MonitorData *monitor;
  struct XsdBuilder_BuilderNamespaceManager__Fields fields;
};
struct XsdBuilder_BuilderNamespaceManager__VTable {
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
struct XsdBuilder_BuilderNamespaceManager__StaticFields {
};
struct XsdBuilder_BuilderNamespaceManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdBuilder_BuilderNamespaceManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdBuilder_BuilderNamespaceManager__VTable vtable;
};

struct XsdDateTime {
  struct DateTime dt;
  uint32_t extra;
};
struct XsdDateTime__Boxed {
  struct XsdDateTime__Class *klass;
  struct MonitorData *monitor;
  struct XsdDateTime fields;
};
struct XmlTypeCode__Enum__Array {
  struct XmlTypeCode__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum XmlTypeCode__Enum vector[32];
};
struct XsdDateTime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdDateTime__StaticFields {
  int32_t Lzyyyy;
  int32_t Lzyyyy_;
  int32_t Lzyyyy_MM;
  int32_t Lzyyyy_MM_;
  int32_t Lzyyyy_MM_dd;
  int32_t Lzyyyy_MM_ddT;
  int32_t LzHH;
  int32_t LzHH_;
  int32_t LzHH_mm;
  int32_t LzHH_mm_;
  int32_t LzHH_mm_ss;
  int32_t Lz_;
  int32_t Lz_zz;
  int32_t Lz_zz_;
  int32_t Lz_zz_zz;
  int32_t Lz__;
  int32_t Lz__mm;
  int32_t Lz__mm_;
  int32_t Lz__mm__;
  int32_t Lz__mm_dd;
  int32_t Lz___;
  int32_t Lz___dd;
  struct XmlTypeCode__Enum__Array * typeCodes;
};
struct XsdDateTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdDateTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdDateTime__VTable vtable;
};

enum XsdDateTime_DateTimeTypeCode__Enum : int32_t {
  XsdDateTime_DateTimeTypeCode__Enum_DateTime = 0,
  XsdDateTime_DateTimeTypeCode__Enum_Time = 1,
  XsdDateTime_DateTimeTypeCode__Enum_Date = 2,
  XsdDateTime_DateTimeTypeCode__Enum_GYearMonth = 3,
  XsdDateTime_DateTimeTypeCode__Enum_GYear = 4,
  XsdDateTime_DateTimeTypeCode__Enum_GMonthDay = 5,
  XsdDateTime_DateTimeTypeCode__Enum_GDay = 6,
  XsdDateTime_DateTimeTypeCode__Enum_GMonth = 7,
  XsdDateTime_DateTimeTypeCode__Enum_XdrDateTime = 8,
};
struct XsdDateTime_DateTimeTypeCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdDateTime_DateTimeTypeCode__Enum value;
};
enum XsdDateTime_XsdDateTimeKind__Enum : int32_t {
  XsdDateTime_XsdDateTimeKind__Enum_Unspecified = 0,
  XsdDateTime_XsdDateTimeKind__Enum_Zulu = 1,
  XsdDateTime_XsdDateTimeKind__Enum_LocalWestOfZulu = 2,
  XsdDateTime_XsdDateTimeKind__Enum_LocalEastOfZulu = 3,
};
struct XsdDateTime_XsdDateTimeKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdDateTime_XsdDateTimeKind__Enum value;
};
struct XsdDateTime_Parser {
  enum XsdDateTime_DateTimeTypeCode__Enum typeCode;
  int32_t year;
  int32_t month;
  int32_t day;
  int32_t hour;
  int32_t minute;
  int32_t second;
  int32_t fraction;
  enum XsdDateTime_XsdDateTimeKind__Enum kind;
  int32_t zoneHour;
  int32_t zoneMinute;
  struct String * text;
  int32_t length;
};
struct XsdDateTime_Parser__Boxed {
  struct XsdDateTime_Parser__Class *klass;
  struct MonitorData *monitor;
  struct XsdDateTime_Parser fields;
};
struct XsdDateTime_Parser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdDateTime_Parser__StaticFields {
  struct Int32__Array * Power10;
};
struct XsdDateTime_Parser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdDateTime_Parser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdDateTime_Parser__VTable vtable;
};

struct XsdDuration {
  int32_t years;
  int32_t months;
  int32_t days;
  int32_t hours;
  int32_t minutes;
  int32_t seconds;
  uint32_t nanoseconds;
};
struct XsdDuration__Boxed {
  struct XsdDuration__Class *klass;
  struct MonitorData *monitor;
  struct XsdDuration fields;
};
struct XsdDuration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdDuration__StaticFields {
};
struct XsdDuration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdDuration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdDuration__VTable vtable;
};

enum XsdDuration_DurationType__Enum : int32_t {
  XsdDuration_DurationType__Enum_Duration = 0,
  XsdDuration_DurationType__Enum_YearMonthDuration = 1,
  XsdDuration_DurationType__Enum_DayTimeDuration = 2,
};
struct XsdDuration_DurationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdDuration_DurationType__Enum value;
};

struct XsdValidator__Fields {
  struct BaseValidator__Fields _;
  int32_t startIDConstraint;
  struct HWStack * validationStack;
  struct Hashtable * attPresence;
  struct XmlNamespaceManager * nsManager;
  bool bManageNamespaces;
  struct Hashtable * IDs;
  struct IdRefNode * idRefListHead;
  struct Parser_1 * inlineSchemaParser;
  enum XmlSchemaContentProcessing__Enum processContents;
  struct String * NsXmlNs;
  struct String * NsXs;
  struct String * NsXsi;
  struct String * XsiType;
  struct String * XsiNil;
  struct String * XsiSchemaLocation;
  struct String * XsiNoNamespaceSchemaLocation;
  struct String * XsdSchema;
};
struct XsdValidator {
  struct XsdValidator__Class *klass;
  struct MonitorData *monitor;
  struct XsdValidator__Fields fields;
};
struct XsdValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_PreserveWhitespace;
  VirtualInvokeData Validate;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData FindId;
};
struct XsdValidator__StaticFields {
  struct XmlSchemaDatatype * dtCDATA;
  struct XmlSchemaDatatype * dtQName;
  struct XmlSchemaDatatype * dtStringArray;
};
struct XsdValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdValidator__VTable vtable;
};

struct __declspec(align(8)) PKCS7_ContentInfo_1__Fields {
  struct String * contentType;
  struct ASN1_1 * content;
};
struct PKCS7_ContentInfo_1 {
  struct PKCS7_ContentInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS7_ContentInfo_1__Fields fields;
};
struct PKCS7_ContentInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS7_ContentInfo_1__StaticFields {
};
struct PKCS7_ContentInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS7_ContentInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS7_ContentInfo_1__VTable vtable;
};

struct __declspec(align(8)) PKCS7_EncryptedData_1__Fields {
  uint8_t _version;
  struct PKCS7_ContentInfo_1 * _content;
  struct PKCS7_ContentInfo_1 * _encryptionAlgorithm;
  struct Byte__Array * _encrypted;
};
struct PKCS7_EncryptedData_1 {
  struct PKCS7_EncryptedData_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS7_EncryptedData_1__Fields fields;
};
struct PKCS7_EncryptedData_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS7_EncryptedData_1__StaticFields {
};
struct PKCS7_EncryptedData_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS7_EncryptedData_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS7_EncryptedData_1__VTable vtable;
};

struct PKCS5 {
  struct PKCS5__Class *klass;
  struct MonitorData *monitor;
};
struct PKCS5__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS5__StaticFields {
};
struct PKCS5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS5__VTable vtable;
};

struct PKCS9 {
  struct PKCS9__Class *klass;
  struct MonitorData *monitor;
};
struct PKCS9__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS9__StaticFields {
};
struct PKCS9__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS9__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS9__VTable vtable;
};

struct __declspec(align(8)) SafeBag_1__Fields {
  struct String * _bagOID;
  struct ASN1_1 * _asn1;
};
struct SafeBag_1 {
  struct SafeBag_1__Class *klass;
  struct MonitorData *monitor;
  struct SafeBag_1__Fields fields;
};
struct SafeBag_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SafeBag_1__StaticFields {
};
struct SafeBag_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SafeBag_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SafeBag_1__VTable vtable;
};

struct __declspec(align(8)) PKCS12_1__Fields {
  struct Byte__Array * _password;
  struct ArrayList * _keyBags;
  struct ArrayList * _secretBags;
  struct X509CertificateCollection_2 * _certs;
  bool _keyBagsChanged;
  bool _secretBagsChanged;
  bool _certsChanged;
  int32_t _iterations;
  struct ArrayList * _safeBags;
  struct RandomNumberGenerator * _rng;
};
struct PKCS12_1 {
  struct PKCS12_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS12_1__Fields fields;
};
struct PKCS12_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct PKCS12_1__StaticFields {
  int32_t password_max_length;
};
struct PKCS12_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS12_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS12_1__VTable vtable;
};

struct __declspec(align(8)) PKCS8_PrivateKeyInfo_1__Fields {
  int32_t _version;
  struct String * _algorithm;
  struct Byte__Array * _key;
  struct ArrayList * _list;
};
struct PKCS8_PrivateKeyInfo_1 {
  struct PKCS8_PrivateKeyInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS8_PrivateKeyInfo_1__Fields fields;
};
struct PKCS8_PrivateKeyInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS8_PrivateKeyInfo_1__StaticFields {
};
struct PKCS8_PrivateKeyInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS8_PrivateKeyInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS8_PrivateKeyInfo_1__VTable vtable;
};

struct __declspec(align(8)) PKCS12_DeriveBytes_1__Fields {
  struct String * _hashName;
  int32_t _iterations;
  struct Byte__Array * _password;
  struct Byte__Array * _salt;
};
struct PKCS12_DeriveBytes_1 {
  struct PKCS12_DeriveBytes_1__Class *klass;
  struct MonitorData *monitor;
  struct PKCS12_DeriveBytes_1__Fields fields;
};
struct PKCS12_DeriveBytes_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PKCS12_DeriveBytes_1__StaticFields {
  struct Byte__Array * keyDiversifier;
  struct Byte__Array * ivDiversifier;
  struct Byte__Array * macDiversifier;
};
struct PKCS12_DeriveBytes_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PKCS12_DeriveBytes_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PKCS12_DeriveBytes_1__VTable vtable;
};

struct X501 {
  struct X501__Class *klass;
  struct MonitorData *monitor;
};
struct X501__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X501__StaticFields {
  struct Byte__Array * countryName;
  struct Byte__Array * organizationName;
  struct Byte__Array * organizationalUnitName;
  struct Byte__Array * commonName;
  struct Byte__Array * localityName;
  struct Byte__Array * stateOrProvinceName;
  struct Byte__Array * streetAddress;
  struct Byte__Array * domainComponent;
  struct Byte__Array * userid;
  struct Byte__Array * email;
  struct Byte__Array * dnQualifier;
  struct Byte__Array * title;
  struct Byte__Array * surname;
  struct Byte__Array * givenName;
  struct Byte__Array * initial;
};
struct X501__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X501__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X501__VTable vtable;
};

struct __declspec(align(8)) X520_AttributeTypeAndValue__Fields {
  struct String * oid;
  struct String * attrValue;
  int32_t upperBound;
  uint8_t encoding;
};
struct X520_AttributeTypeAndValue {
  struct X520_AttributeTypeAndValue__Class *klass;
  struct MonitorData *monitor;
  struct X520_AttributeTypeAndValue__Fields fields;
};
struct X520_AttributeTypeAndValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct X520_AttributeTypeAndValue__StaticFields {
};
struct X520_AttributeTypeAndValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X520_AttributeTypeAndValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X520_AttributeTypeAndValue__VTable vtable;
};

struct __declspec(align(8)) X509Builder__Fields {
  struct String * hashName;
};
struct X509Builder {
  struct X509Builder__Class *klass;
  struct MonitorData *monitor;
  struct X509Builder__Fields fields;
};
struct X509CertificateBuilder__Fields {
  struct X509Builder__Fields _;
  uint8_t version;
  struct Byte__Array * sn;
  struct String * issuer;
  struct DateTime notBefore;
  struct DateTime notAfter;
  struct String * subject;
  struct AsymmetricAlgorithm * aa;
  struct Byte__Array * issuerUniqueID;
  struct Byte__Array * subjectUniqueID;
  struct X509ExtensionCollection_1 * extensions;
};
struct X509CertificateBuilder {
  struct X509CertificateBuilder__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateBuilder__Fields fields;
};
struct X509CertificateBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToBeSigned;
  VirtualInvokeData Sign;
  VirtualInvokeData Sign_1;
  VirtualInvokeData Sign_2;
};
struct X509CertificateBuilder__StaticFields {
};
struct X509CertificateBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateBuilder__VTable vtable;
};
struct X509Builder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData Sign;
  VirtualInvokeData Sign_1;
  VirtualInvokeData Sign_2;
};
struct X509Builder__StaticFields {
};
struct X509Builder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Builder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Builder__VTable vtable;
};

struct X509Certificate_2__Array {
  struct X509Certificate_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct X509Certificate_2 * vector[32];
};

struct __declspec(align(8)) X509CertificateCollection_X509CertificateEnumerator_2__Fields {
  struct IEnumerator * enumerator;
};}