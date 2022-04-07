namespace app {
struct XmlSchemaRedefine__Fields {
  struct XmlSchemaExternal__Fields _;
  struct XmlSchemaObjectCollection * items;
  struct XmlSchemaObjectTable * attributeGroups;
  struct XmlSchemaObjectTable * types;
  struct XmlSchemaObjectTable * groups;
};
struct XmlSchemaRedefine {
  struct XmlSchemaRedefine__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaRedefine__Fields fields;
};
struct XmlSchemaExternal__VTable {
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
struct XmlSchemaExternal__StaticFields {
};
struct XmlSchemaExternal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaExternal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaExternal__VTable vtable;
};
struct XmlSchemaRedefine__VTable {
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
struct XmlSchemaRedefine__StaticFields {
};
struct XmlSchemaRedefine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaRedefine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaRedefine__VTable vtable;
};
struct RedefineEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RedefineEntry__StaticFields {
};
struct RedefineEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RedefineEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RedefineEntry__VTable vtable;
};

struct Preprocessor__Fields {
  struct BaseProcessor__Fields _;
  struct String * Xmlns;
  struct String * NsXsi;
  struct String * targetNamespace;
  struct XmlSchema * rootSchema;
  struct XmlSchema * currentSchema;
  enum XmlSchemaForm__Enum elementFormDefault;
  enum XmlSchemaForm__Enum attributeFormDefault;
  enum XmlSchemaDerivationMethod__Enum blockDefault;
  enum XmlSchemaDerivationMethod__Enum finalDefault;
  struct Hashtable * schemaLocations;
  struct Hashtable * chameleonSchemas;
  struct Hashtable * referenceNamespaces;
  struct Hashtable * processedExternals;
  struct SortedList * lockList;
  struct XmlReaderSettings * readerSettings;
  struct XmlSchema * rootSchemaForRedefine;
  struct ArrayList * redefinedList;
  struct XmlResolver * xmlResolver;
};
struct Preprocessor {
  struct Preprocessor__Class *klass;
  struct MonitorData *monitor;
  struct Preprocessor__Fields fields;
};
struct Preprocessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Preprocessor__StaticFields {
  struct XmlSchema * builtInSchemaForXmlNS;
};
struct Preprocessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Preprocessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Preprocessor__VTable vtable;
};

struct XmlSchemaGroup__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * name;
  struct XmlSchemaGroupBase * particle;
  struct XmlSchemaParticle * canonicalParticle;
  struct XmlQualifiedName * qname;
  struct XmlSchemaGroup * redefined;
  int32_t selfReferenceCount;
};
struct XmlSchemaGroup {
  struct XmlSchemaGroup__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaGroup__Fields fields;
};
struct XmlSchemaGroupBase__Fields {
  struct XmlSchemaParticle__Fields _;
};
struct XmlSchemaGroupBase {
  struct XmlSchemaGroupBase__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaGroupBase__Fields fields;
};
struct XmlSchemaAll__Fields {
  struct XmlSchemaGroupBase__Fields _;
  struct XmlSchemaObjectCollection * items;
};
struct XmlSchemaAll {
  struct XmlSchemaAll__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAll__Fields fields;
};
struct XmlSchemaAll__VTable {
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
  VirtualInvokeData get_Items;
  VirtualInvokeData SetItems;
};
struct XmlSchemaAll__StaticFields {
};
struct XmlSchemaAll__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaAll__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaAll__VTable vtable;
};
struct XmlSchemaGroupBase__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct XmlSchemaGroupBase__StaticFields {
};
struct XmlSchemaGroupBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaGroupBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaGroupBase__VTable vtable;
};
struct XmlSchemaGroup__VTable {
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
struct XmlSchemaGroup__StaticFields {
};
struct XmlSchemaGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaGroup__VTable vtable;
};

struct XmlSchemaAttributeGroup__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * name;
  struct XmlSchemaObjectCollection * attributes;
  struct XmlSchemaAnyAttribute * anyAttribute;
  struct XmlQualifiedName * qname;
  struct XmlSchemaAttributeGroup * redefined;
  struct XmlSchemaObjectTable * attributeUses;
  struct XmlSchemaAnyAttribute * attributeWildcard;
  int32_t selfReferenceCount;
};
struct XmlSchemaAttributeGroup {
  struct XmlSchemaAttributeGroup__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaAttributeGroup__Fields fields;
};
struct XmlSchemaAttributeGroup__VTable {
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
struct XmlSchemaAttributeGroup__StaticFields {
};
struct XmlSchemaAttributeGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaAttributeGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaAttributeGroup__VTable vtable;
};

struct XmlSchemaNotation__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct String * name;
  struct String * publicId;
  struct String * systemId;
  struct XmlQualifiedName * qname;
};
struct XmlSchemaNotation {
  struct XmlSchemaNotation__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaNotation__Fields fields;
};
struct XmlSchemaNotation__VTable {
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
struct XmlSchemaNotation__StaticFields {
};
struct XmlSchemaNotation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaNotation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaNotation__VTable vtable;
};

struct SchemaCollectionCompiler__Fields {
  struct BaseProcessor__Fields _;
  bool compileContentModel;
  struct XmlSchemaObjectTable * examplars;
  struct Stack * complexTypeStack;
  struct XmlSchema * schema;
};
struct SchemaCollectionCompiler {
  struct SchemaCollectionCompiler__Class *klass;
  struct MonitorData *monitor;
  struct SchemaCollectionCompiler__Fields fields;
};
struct SchemaCollectionCompiler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SchemaCollectionCompiler__StaticFields {
};
struct SchemaCollectionCompiler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SchemaCollectionCompiler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SchemaCollectionCompiler__VTable vtable;
};

struct XmlSchemaSubstitutionGroup__Fields {
  struct XmlSchemaObject__Fields _;
  struct ArrayList * membersList;
  struct XmlQualifiedName * examplar;
};
struct XmlSchemaSubstitutionGroup {
  struct XmlSchemaSubstitutionGroup__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSubstitutionGroup__Fields fields;
};
struct XmlSchemaSubstitutionGroupV1Compat__Fields {
  struct XmlSchemaSubstitutionGroup__Fields _;
  struct XmlSchemaChoice * choice;
};
struct XmlSchemaSubstitutionGroupV1Compat {
  struct XmlSchemaSubstitutionGroupV1Compat__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSubstitutionGroupV1Compat__Fields fields;
};
struct XmlSchemaChoice__Fields {
  struct XmlSchemaGroupBase__Fields _;
  struct XmlSchemaObjectCollection * items;
};
struct XmlSchemaChoice {
  struct XmlSchemaChoice__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaChoice__Fields fields;
};
struct XmlSchemaSubstitutionGroup__VTable {
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
struct XmlSchemaSubstitutionGroup__StaticFields {
};
struct XmlSchemaSubstitutionGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaSubstitutionGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaSubstitutionGroup__VTable vtable;
};
struct XmlSchemaChoice__VTable {
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
  VirtualInvokeData get_Items;
  VirtualInvokeData SetItems;
};
struct XmlSchemaChoice__StaticFields {
};
struct XmlSchemaChoice__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaChoice__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaChoice__VTable vtable;
};
struct XmlSchemaSubstitutionGroupV1Compat__VTable {
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
struct XmlSchemaSubstitutionGroupV1Compat__StaticFields {
};
struct XmlSchemaSubstitutionGroupV1Compat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaSubstitutionGroupV1Compat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaSubstitutionGroupV1Compat__VTable vtable;
};

struct XmlSchemaSimpleContentRestriction__Fields {
  struct XmlSchemaContent__Fields _;
  struct XmlQualifiedName * baseTypeName;
  struct XmlSchemaSimpleType * baseType;
  struct XmlSchemaObjectCollection * facets;
  struct XmlSchemaObjectCollection * attributes;
  struct XmlSchemaAnyAttribute * anyAttribute;
};
struct XmlSchemaSimpleContentRestriction {
  struct XmlSchemaSimpleContentRestriction__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSimpleContentRestriction__Fields fields;
};
struct XmlSchemaSimpleContentRestriction__VTable {
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
struct XmlSchemaSimpleContentRestriction__StaticFields {
};
struct XmlSchemaSimpleContentRestriction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaSimpleContentRestriction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaSimpleContentRestriction__VTable vtable;
};

struct XmlSchemaComplexContentExtension__Fields {
  struct XmlSchemaContent__Fields _;
  struct XmlSchemaParticle * particle;
  struct XmlSchemaObjectCollection * attributes;
  struct XmlSchemaAnyAttribute * anyAttribute;
  struct XmlQualifiedName * baseTypeName;
};
struct XmlSchemaComplexContentExtension {
  struct XmlSchemaComplexContentExtension__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaComplexContentExtension__Fields fields;
};
struct XmlSchemaComplexContentExtension__VTable {
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
struct XmlSchemaComplexContentExtension__StaticFields {
};
struct XmlSchemaComplexContentExtension__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaComplexContentExtension__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaComplexContentExtension__VTable vtable;
};

struct XmlSchemaComplexContentRestriction__Fields {
  struct XmlSchemaContent__Fields _;
  struct XmlSchemaParticle * particle;
  struct XmlSchemaObjectCollection * attributes;
  struct XmlSchemaAnyAttribute * anyAttribute;
  struct XmlQualifiedName * baseTypeName;
};
struct XmlSchemaComplexContentRestriction {
  struct XmlSchemaComplexContentRestriction__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaComplexContentRestriction__Fields fields;
};
struct XmlSchemaComplexContentRestriction__VTable {
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
struct XmlSchemaComplexContentRestriction__StaticFields {
};
struct XmlSchemaComplexContentRestriction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaComplexContentRestriction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaComplexContentRestriction__VTable vtable;
};

struct XmlSchemaGroupRef__Fields {
  struct XmlSchemaParticle__Fields _;
  struct XmlQualifiedName * refName;
  struct XmlSchemaGroupBase * particle;
  struct XmlSchemaGroup * refined;
};
struct XmlSchemaGroupRef {
  struct XmlSchemaGroupRef__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaGroupRef__Fields fields;
};
struct XmlSchemaGroupRef__VTable {
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
struct XmlSchemaGroupRef__StaticFields {
};
struct XmlSchemaGroupRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaGroupRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaGroupRef__VTable vtable;
};

struct XmlSchemaSequence__Fields {
  struct XmlSchemaGroupBase__Fields _;
  struct XmlSchemaObjectCollection * items;
};
struct XmlSchemaSequence {
  struct XmlSchemaSequence__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSequence__Fields fields;
};
struct XmlSchemaSequence__VTable {
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
  VirtualInvokeData get_Items;
  VirtualInvokeData SetItems;
};
struct XmlSchemaSequence__StaticFields {
};
struct XmlSchemaSequence__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaSequence__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaSequence__VTable vtable;
};

struct XmlSchemaAny__Fields {
  struct XmlSchemaParticle__Fields _;
  struct String * ns;
  enum XmlSchemaContentProcessing__Enum processContents;
  struct NamespaceList * namespaceList;
};
struct XmlSchemaAny {
  struct XmlSchemaAny__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaAny__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaAny__VTable vtable;
};

struct SchemaCollectionPreprocessor__Fields {
  struct BaseProcessor__Fields _;
  struct XmlSchema * schema;
  struct String * targetNamespace;
  bool buildinIncluded;
  enum XmlSchemaForm__Enum elementFormDefault;
  enum XmlSchemaForm__Enum attributeFormDefault;
  enum XmlSchemaDerivationMethod__Enum blockDefault;
  enum XmlSchemaDerivationMethod__Enum finalDefault;
  struct Hashtable * schemaLocations;
  struct Hashtable * referenceNamespaces;
  struct String * Xmlns;
  struct XmlResolver * xmlResolver;
};
struct SchemaCollectionPreprocessor {
  struct SchemaCollectionPreprocessor__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SchemaCollectionPreprocessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SchemaCollectionPreprocessor__VTable vtable;
};

enum SchemaCollectionPreprocessor_Compositor__Enum : int32_t {
  SchemaCollectionPreprocessor_Compositor__Enum_Root = 0,
  SchemaCollectionPreprocessor_Compositor__Enum_Include = 1,
  SchemaCollectionPreprocessor_Compositor__Enum_Import = 2,
};
struct SchemaCollectionPreprocessor_Compositor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaCollectionPreprocessor_Compositor__Enum value;
};

struct IList_1_System_Xml_IDtdDefaultAttributeInfo_ {
  struct IList_1_System_Xml_IDtdDefaultAttributeInfo___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Xml_IDtdDefaultAttributeInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Xml_IDtdDefaultAttributeInfo___VTable vtable;
};

enum AttributeMatchState__Enum : int32_t {
  AttributeMatchState__Enum_AttributeFound = 0,
  AttributeMatchState__Enum_AnyIdAttributeFound = 1,
  AttributeMatchState__Enum_UndeclaredElementAndAttribute = 2,
  AttributeMatchState__Enum_UndeclaredAttribute = 3,
  AttributeMatchState__Enum_AnyAttributeLax = 4,
  AttributeMatchState__Enum_AnyAttributeSkip = 5,
  AttributeMatchState__Enum_ProhibitedAnyAttribute = 6,
  AttributeMatchState__Enum_ProhibitedAttribute = 7,
  AttributeMatchState__Enum_AttributeNameMismatch = 8,
  AttributeMatchState__Enum_ValidateAttributeInvalidCall = 9,
};
struct AttributeMatchState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AttributeMatchState__Enum value;
};

struct SchemaNamespaceManager__Fields {
  struct XmlNamespaceManager__Fields _;
  struct XmlSchemaObject * node;
};
struct SchemaNamespaceManager {
  struct SchemaNamespaceManager__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SchemaNamespaceManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SchemaNamespaceManager__VTable vtable;
};

struct Compiler__Fields {
  struct BaseProcessor__Fields _;
  struct String * restrictionErrorMsg;
  struct XmlSchemaObjectTable * attributes;
  struct XmlSchemaObjectTable * attributeGroups;
  struct XmlSchemaObjectTable * elements;
  struct XmlSchemaObjectTable * schemaTypes;
  struct XmlSchemaObjectTable * groups;
  struct XmlSchemaObjectTable * notations;
  struct XmlSchemaObjectTable * examplars;
  struct XmlSchemaObjectTable * identityConstraints;
  struct Stack * complexTypeStack;
  struct Hashtable * schemasToCompile;
  struct Hashtable * importedSchemas;
  struct XmlSchema * schemaForSchema;
};
struct Compiler {
  struct Compiler__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Compiler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Compiler__VTable vtable;
};

struct XdrValidator__Fields {
  struct BaseValidator__Fields _;
  struct HWStack * validationStack;
  struct Hashtable * attPresence;
  struct XmlQualifiedName * name;
  struct XmlNamespaceManager * nsManager;
  bool isProcessContents;
  struct Hashtable * IDs;
  struct IdRefNode * idRefListHead;
  struct Parser_1 * inlineSchemaParser;
};
struct XdrValidator {
  struct XdrValidator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XdrValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct MonitorData *monitor;
  struct XmlAtomicValue_Union fields;
};
struct __declspec(align(8)) XmlAtomicValue__Fields {
  struct XmlSchemaType * xmlType;
  struct Object * objVal;
  enum TypeCode__Enum clrType;
  struct XmlAtomicValue_Union unionVal;
  struct XmlAtomicValue_NamespacePrefixForQName * nsPrefix;
};
struct XmlAtomicValue {
  struct XmlAtomicValue__Class *klass;
  struct MonitorData *monitor;
  struct XmlAtomicValue__Fields fields;
};
struct __declspec(align(8)) XmlAtomicValue_NamespacePrefixForQName__Fields {
  struct String * prefix;
  struct String * ns;
};
struct XmlAtomicValue_NamespacePrefixForQName {
  struct XmlAtomicValue_NamespacePrefixForQName__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlAtomicValue_Union__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlAtomicValue_NamespacePrefixForQName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlAtomicValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlAtomicValue__VTable vtable;
};}