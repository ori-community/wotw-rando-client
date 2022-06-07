namespace app {
struct XmlSchemaSequence__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaSequence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaSequence__VTable vtable;
};

struct XmlSchemaAny__Fields {
    struct XmlSchemaParticle__Fields _;
    struct String *ns;
    XmlSchemaContentProcessing__Enum processContents;
    
    struct NamespaceList *namespaceList;
};

struct XmlSchemaAny {
    struct XmlSchemaAny__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaAny__Fields fields;
};

struct XmlSchemaAny__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsEmpty;
    VirtualInvokeData get_NameString;
};

struct XmlSchemaAny__StaticFields {
};

struct XmlSchemaAny__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaAny__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaAny__VTable vtable;
};

struct SchemaCollectionPreprocessor__Fields {
    struct BaseProcessor__Fields _;
    struct XmlSchema *schema;
    struct String *targetNamespace;
    bool buildinIncluded;
    XmlSchemaForm__Enum elementFormDefault;
    
    XmlSchemaForm__Enum attributeFormDefault;
    
    XmlSchemaDerivationMethod__Enum blockDefault;
    
    XmlSchemaDerivationMethod__Enum finalDefault;
    
    struct Hashtable *schemaLocations;
    struct Hashtable *referenceNamespaces;
    struct String *Xmlns;
    struct XmlResolver *xmlResolver;
};

struct SchemaCollectionPreprocessor {
    struct SchemaCollectionPreprocessor__Class *klass;
    MonitorData *monitor;
    struct SchemaCollectionPreprocessor__Fields fields;
};

struct SchemaCollectionPreprocessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SchemaCollectionPreprocessor__StaticFields {
};

struct SchemaCollectionPreprocessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemaCollectionPreprocessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemaCollectionPreprocessor__VTable vtable;
};

enum class SchemaCollectionPreprocessor_Compositor__Enum : int32_t {
    Root = 0x00000000,
    Include = 0x00000001,
    Import = 0x00000002,
};

struct SchemaCollectionPreprocessor_Compositor__Enum__Boxed {
    struct SchemaCollectionPreprocessor_Compositor__Enum__Class *klass;
    MonitorData *monitor;
    SchemaCollectionPreprocessor_Compositor__Enum value;
    
};

struct SchemaCollectionPreprocessor_Compositor__Enum__VTable {
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

struct SchemaCollectionPreprocessor_Compositor__Enum__StaticFields {
};

struct SchemaCollectionPreprocessor_Compositor__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemaCollectionPreprocessor_Compositor__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemaCollectionPreprocessor_Compositor__Enum__VTable vtable;
};

struct IList_1_System_Xml_IDtdDefaultAttributeInfo_ {
    struct IList_1_System_Xml_IDtdDefaultAttributeInfo___Class *klass;
    MonitorData *monitor;
};

struct IList_1_System_Xml_IDtdDefaultAttributeInfo___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Xml_IDtdDefaultAttributeInfo___StaticFields {
};

struct IList_1_System_Xml_IDtdDefaultAttributeInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Xml_IDtdDefaultAttributeInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Xml_IDtdDefaultAttributeInfo___VTable vtable;
};

enum class AttributeMatchState__Enum : int32_t {
    AttributeFound = 0x00000000,
    AnyIdAttributeFound = 0x00000001,
    UndeclaredElementAndAttribute = 0x00000002,
    UndeclaredAttribute = 0x00000003,
    AnyAttributeLax = 0x00000004,
    AnyAttributeSkip = 0x00000005,
    ProhibitedAnyAttribute = 0x00000006,
    ProhibitedAttribute = 0x00000007,
    AttributeNameMismatch = 0x00000008,
    ValidateAttributeInvalidCall = 0x00000009,
};

struct AttributeMatchState__Enum__Boxed {
    struct AttributeMatchState__Enum__Class *klass;
    MonitorData *monitor;
    AttributeMatchState__Enum value;
    
};

struct AttributeMatchState__Enum__VTable {
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

struct AttributeMatchState__Enum__StaticFields {
};

struct AttributeMatchState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributeMatchState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributeMatchState__Enum__VTable vtable;
};

struct AttributeMatchState___VTable {
};

struct AttributeMatchState___StaticFields {
};

struct AttributeMatchState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttributeMatchState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttributeMatchState___VTable vtable;
};

struct SchemaNamespaceManager__Fields {
    struct XmlNamespaceManager__Fields _;
    struct XmlSchemaObject *node;
};

struct SchemaNamespaceManager {
    struct SchemaNamespaceManager__Class *klass;
    MonitorData *monitor;
    struct SchemaNamespaceManager__Fields fields;
};

struct SchemaNamespaceManager__VTable {
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

struct SchemaNamespaceManager__StaticFields {
};

struct SchemaNamespaceManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SchemaNamespaceManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SchemaNamespaceManager__VTable vtable;
};

struct Compiler__Fields {
    struct BaseProcessor__Fields _;
    struct String *restrictionErrorMsg;
    struct XmlSchemaObjectTable *attributes;
    struct XmlSchemaObjectTable *attributeGroups;
    struct XmlSchemaObjectTable *elements;
    struct XmlSchemaObjectTable *schemaTypes;
    struct XmlSchemaObjectTable *groups;
    struct XmlSchemaObjectTable *notations;
    struct XmlSchemaObjectTable *examplars;
    struct XmlSchemaObjectTable *identityConstraints;
    struct Stack *complexTypeStack;
    struct Hashtable *schemasToCompile;
    struct Hashtable *importedSchemas;
    struct XmlSchema *schemaForSchema;
};

struct Compiler {
    struct Compiler__Class *klass;
    MonitorData *monitor;
    struct Compiler__Fields fields;
};

struct Compiler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Compiler__StaticFields {
};

struct Compiler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Compiler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Compiler__VTable vtable;
};

struct XdrValidator__Fields {
    struct BaseValidator__Fields _;
    struct HWStack *validationStack;
    struct Hashtable *attPresence;
    struct XmlQualifiedName *name;
    struct XmlNamespaceManager *nsManager;
    bool isProcessContents;
    struct Hashtable *IDs;
    struct IdRefNode *idRefListHead;
    struct Parser_1 *inlineSchemaParser;
};

struct XdrValidator {
    struct XdrValidator__Class *klass;
    MonitorData *monitor;
    struct XdrValidator__Fields fields;
};

struct XdrValidator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_PreserveWhitespace;
    VirtualInvokeData Validate;
    VirtualInvokeData CompleteValidation;
    VirtualInvokeData FindId;
};

struct XdrValidator__StaticFields {
};

struct XdrValidator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XdrValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XdrValidator__VTable vtable;
};

struct XmlAtomicValue_Union {
    bool boolVal;
    double dblVal;
    int64_t i64Val;
    int32_t i32Val;
    struct DateTime dtVal;
};

struct XmlAtomicValue_Union__Boxed {
    struct XmlAtomicValue_Union__Class *klass;
    MonitorData *monitor;
    struct XmlAtomicValue_Union fields;
};

struct __declspec(align(8)) XmlAtomicValue__Fields {
    struct XmlSchemaType *xmlType;
    struct Object *objVal;
    TypeCode__Enum clrType;
    
    struct XmlAtomicValue_Union unionVal;
    struct XmlAtomicValue_NamespacePrefixForQName *nsPrefix;
};

struct XmlAtomicValue {
    struct XmlAtomicValue__Class *klass;
    MonitorData *monitor;
    struct XmlAtomicValue__Fields fields;
};

struct __declspec(align(8)) XmlAtomicValue_NamespacePrefixForQName__Fields {
    struct String *prefix;
    struct String *ns;
};

struct XmlAtomicValue_NamespacePrefixForQName {
    struct XmlAtomicValue_NamespacePrefixForQName__Class *klass;
    MonitorData *monitor;
    struct XmlAtomicValue_NamespacePrefixForQName__Fields fields;
};

struct XmlAtomicValue_Union__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XmlAtomicValue_Union__StaticFields {
};

struct XmlAtomicValue_Union__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlAtomicValue_Union__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlAtomicValue_Union__VTable vtable;
};

struct XmlAtomicValue_NamespacePrefixForQName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetNamespacesInScope;
    VirtualInvokeData LookupNamespace;
    VirtualInvokeData LookupPrefix;
};

struct XmlAtomicValue_NamespacePrefixForQName__StaticFields {
};

struct XmlAtomicValue_NamespacePrefixForQName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlAtomicValue_NamespacePrefixForQName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlAtomicValue_NamespacePrefixForQName__VTable vtable;
};

struct XmlAtomicValue__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_XmlType;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_TypedValue;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_ValueAsBoolean;
    VirtualInvokeData get_ValueAsDateTime;
    VirtualInvokeData get_ValueAsDouble;
    VirtualInvokeData get_ValueAsInt;
    VirtualInvokeData get_ValueAsLong;
    VirtualInvokeData ValueAs;
    VirtualInvokeData ValueAs_1;
    VirtualInvokeData System_ICloneable_Clone;
};

struct XmlAtomicValue__StaticFields {
};

struct XmlAtomicValue__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlAtomicValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlAtomicValue__VTable vtable;
};

struct XmlSchemaAppInfo__Fields {
    struct XmlSchemaObject__Fields _;
    struct String *source;
    struct XmlNode__Array *markup;
};

struct XmlSchemaAppInfo {
    struct XmlSchemaAppInfo__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaAppInfo__Fields fields;
};

struct XmlSchemaAppInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
};

struct XmlSchemaAppInfo__StaticFields {
};

struct XmlSchemaAppInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaAppInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaAppInfo__VTable vtable;
};

struct XmlSchemaAttributeGroupRef__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct XmlQualifiedName *refName;
};

struct XmlSchemaAttributeGroupRef {
    struct XmlSchemaAttributeGroupRef__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaAttributeGroupRef__Fields fields;
};

struct XmlSchemaAttributeGroupRef__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
};

struct XmlSchemaAttributeGroupRef__StaticFields {
};

struct XmlSchemaAttributeGroupRef__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaAttributeGroupRef__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaAttributeGroupRef__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaCollectionEnumerator__Fields {
    struct IDictionaryEnumerator *enumerator;
};

struct XmlSchemaCollectionEnumerator {
    struct XmlSchemaCollectionEnumerator__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaCollectionEnumerator__Fields fields;
};

struct XmlSchemaCollectionEnumerator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IEnumerator_MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct XmlSchemaCollectionEnumerator__StaticFields {
};

struct XmlSchemaCollectionEnumerator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaCollectionEnumerator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaCollectionEnumerator__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaCollectionNode__Fields {
    struct String *namespaceUri;
    struct SchemaInfo *schemaInfo;
    struct XmlSchema *schema;
};

struct XmlSchemaCollectionNode {
    struct XmlSchemaCollectionNode__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaCollectionNode__Fields fields;
};

struct XmlSchemaCollectionNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XmlSchemaCollectionNode__StaticFields {
};

struct XmlSchemaCollectionNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaCollectionNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaCollectionNode__VTable vtable;
};

struct XmlSchemaDocumentation__Fields {
    struct XmlSchemaObject__Fields _;
    struct String *source;
    struct String *language;
    struct XmlNode__Array *markup;
};

struct XmlSchemaDocumentation {
    struct XmlSchemaDocumentation__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaDocumentation__Fields fields;
};

struct XmlSchemaDocumentation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
};

struct XmlSchemaDocumentation__StaticFields {
    struct XmlSchemaSimpleType *languageType;
};

struct XmlSchemaDocumentation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaDocumentation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaDocumentation__VTable vtable;
};

struct XmlSchemaNumericFacet__Fields {
    struct XmlSchemaFacet__Fields _;
};

struct XmlSchemaNumericFacet {
    struct XmlSchemaNumericFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaNumericFacet__Fields fields;
};

struct XmlSchemaNumericFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaNumericFacet__StaticFields {
};

struct XmlSchemaNumericFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaNumericFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaNumericFacet__VTable vtable;
};

struct XmlSchemaLengthFacet__Fields {
    struct XmlSchemaNumericFacet__Fields _;
};

struct XmlSchemaLengthFacet {
    struct XmlSchemaLengthFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaLengthFacet__Fields fields;
};

struct XmlSchemaLengthFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaLengthFacet__StaticFields {
};

struct XmlSchemaLengthFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaLengthFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaLengthFacet__VTable vtable;
};

struct XmlSchemaMinLengthFacet__Fields {
    struct XmlSchemaNumericFacet__Fields _;
};

struct XmlSchemaMinLengthFacet {
    struct XmlSchemaMinLengthFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaMinLengthFacet__Fields fields;
};

struct XmlSchemaMinLengthFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaMinLengthFacet__StaticFields {
};

struct XmlSchemaMinLengthFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaMinLengthFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaMinLengthFacet__VTable vtable;
};

struct XmlSchemaMaxLengthFacet__Fields {
    struct XmlSchemaNumericFacet__Fields _;
};

struct XmlSchemaMaxLengthFacet {
    struct XmlSchemaMaxLengthFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaMaxLengthFacet__Fields fields;
};

struct XmlSchemaMaxLengthFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaMaxLengthFacet__StaticFields {
};

struct XmlSchemaMaxLengthFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaMaxLengthFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaMaxLengthFacet__VTable vtable;
};

struct XmlSchemaEnumerationFacet__Fields {
    struct XmlSchemaFacet__Fields _;
};

struct XmlSchemaEnumerationFacet {
    struct XmlSchemaEnumerationFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaEnumerationFacet__Fields fields;
};

struct XmlSchemaEnumerationFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaEnumerationFacet__StaticFields {
};

struct XmlSchemaEnumerationFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaEnumerationFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaEnumerationFacet__VTable vtable;
};

struct XmlSchemaMinExclusiveFacet__Fields {
    struct XmlSchemaFacet__Fields _;
};

struct XmlSchemaMinExclusiveFacet {
    struct XmlSchemaMinExclusiveFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaMinExclusiveFacet__Fields fields;
};

struct XmlSchemaMinExclusiveFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaMinExclusiveFacet__StaticFields {
};

struct XmlSchemaMinExclusiveFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaMinExclusiveFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaMinExclusiveFacet__VTable vtable;
};

struct XmlSchemaMinInclusiveFacet__Fields {
    struct XmlSchemaFacet__Fields _;
};

struct XmlSchemaMinInclusiveFacet {
    struct XmlSchemaMinInclusiveFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaMinInclusiveFacet__Fields fields;
};

struct XmlSchemaMinInclusiveFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaMinInclusiveFacet__StaticFields {
};

struct XmlSchemaMinInclusiveFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaMinInclusiveFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaMinInclusiveFacet__VTable vtable;
};

struct XmlSchemaMaxExclusiveFacet__Fields {
    struct XmlSchemaFacet__Fields _;
};

struct XmlSchemaMaxExclusiveFacet {
    struct XmlSchemaMaxExclusiveFacet__Class *klass;
    MonitorData *monitor;
    struct XmlSchemaMaxExclusiveFacet__Fields fields;
};

struct XmlSchemaMaxExclusiveFacet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnAdd;
    VirtualInvokeData OnRemove;
    VirtualInvokeData OnClear;
    VirtualInvokeData get_IdAttribute;
    VirtualInvokeData set_IdAttribute;
    VirtualInvokeData SetUnhandledAttributes;
    VirtualInvokeData AddAnnotation;
    VirtualInvokeData get_NameAttribute;
    VirtualInvokeData set_NameAttribute;
    VirtualInvokeData Clone;
    VirtualInvokeData get_IsFixed;
    VirtualInvokeData set_IsFixed;
};

struct XmlSchemaMaxExclusiveFacet__StaticFields {
};

struct XmlSchemaMaxExclusiveFacet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XmlSchemaMaxExclusiveFacet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XmlSchemaMaxExclusiveFacet__VTable vtable;
};

}
