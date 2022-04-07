namespace app {

struct XmlSchemaAppInfo__Fields {
  struct XmlSchemaObject__Fields _;
  struct String * source;
  struct XmlNode__Array * markup;
};
struct XmlSchemaAppInfo {
  struct XmlSchemaAppInfo__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaAppInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaAppInfo__VTable vtable;
};

struct XmlSchemaAttributeGroupRef__Fields {
  struct XmlSchemaAnnotated__Fields _;
  struct XmlQualifiedName * refName;
};
struct XmlSchemaAttributeGroupRef {
  struct XmlSchemaAttributeGroupRef__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaAttributeGroupRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaAttributeGroupRef__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaCollectionEnumerator__Fields {
  struct IDictionaryEnumerator * enumerator;
};
struct XmlSchemaCollectionEnumerator {
  struct XmlSchemaCollectionEnumerator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaCollectionEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaCollectionEnumerator__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaCollectionNode__Fields {
  struct String * namespaceUri;
  struct SchemaInfo * schemaInfo;
  struct XmlSchema * schema;
};
struct XmlSchemaCollectionNode {
  struct XmlSchemaCollectionNode__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaCollectionNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaCollectionNode__VTable vtable;
};

struct XmlSchemaDocumentation__Fields {
  struct XmlSchemaObject__Fields _;
  struct String * source;
  struct String * language;
  struct XmlNode__Array * markup;
};
struct XmlSchemaDocumentation {
  struct XmlSchemaDocumentation__Class *klass;
  struct MonitorData *monitor;
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
  struct XmlSchemaSimpleType * languageType;
};
struct XmlSchemaDocumentation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaDocumentation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaDocumentation__VTable vtable;
};

struct XmlSchemaNumericFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaNumericFacet {
  struct XmlSchemaNumericFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaNumericFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaNumericFacet__VTable vtable;
};

struct XmlSchemaLengthFacet__Fields {
  struct XmlSchemaNumericFacet__Fields _;
};
struct XmlSchemaLengthFacet {
  struct XmlSchemaLengthFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaLengthFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaLengthFacet__VTable vtable;
};

struct XmlSchemaMinLengthFacet__Fields {
  struct XmlSchemaNumericFacet__Fields _;
};
struct XmlSchemaMinLengthFacet {
  struct XmlSchemaMinLengthFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMinLengthFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMinLengthFacet__VTable vtable;
};

struct XmlSchemaMaxLengthFacet__Fields {
  struct XmlSchemaNumericFacet__Fields _;
};
struct XmlSchemaMaxLengthFacet {
  struct XmlSchemaMaxLengthFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMaxLengthFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMaxLengthFacet__VTable vtable;
};

struct XmlSchemaEnumerationFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaEnumerationFacet {
  struct XmlSchemaEnumerationFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaEnumerationFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaEnumerationFacet__VTable vtable;
};

struct XmlSchemaMinExclusiveFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaMinExclusiveFacet {
  struct XmlSchemaMinExclusiveFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMinExclusiveFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMinExclusiveFacet__VTable vtable;
};

struct XmlSchemaMinInclusiveFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaMinInclusiveFacet {
  struct XmlSchemaMinInclusiveFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMinInclusiveFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMinInclusiveFacet__VTable vtable;
};

struct XmlSchemaMaxExclusiveFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaMaxExclusiveFacet {
  struct XmlSchemaMaxExclusiveFacet__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMaxExclusiveFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMaxExclusiveFacet__VTable vtable;
};

struct XmlSchemaMaxInclusiveFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaMaxInclusiveFacet {
  struct XmlSchemaMaxInclusiveFacet__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaMaxInclusiveFacet__Fields fields;
};
struct XmlSchemaMaxInclusiveFacet__VTable {
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
struct XmlSchemaMaxInclusiveFacet__StaticFields {
};
struct XmlSchemaMaxInclusiveFacet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaMaxInclusiveFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaMaxInclusiveFacet__VTable vtable;
};

struct XmlSchemaTotalDigitsFacet__Fields {
  struct XmlSchemaNumericFacet__Fields _;
};
struct XmlSchemaTotalDigitsFacet {
  struct XmlSchemaTotalDigitsFacet__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaTotalDigitsFacet__Fields fields;
};
struct XmlSchemaTotalDigitsFacet__VTable {
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
struct XmlSchemaTotalDigitsFacet__StaticFields {
};
struct XmlSchemaTotalDigitsFacet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaTotalDigitsFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaTotalDigitsFacet__VTable vtable;
};

struct XmlSchemaFractionDigitsFacet__Fields {
  struct XmlSchemaNumericFacet__Fields _;
};
struct XmlSchemaFractionDigitsFacet {
  struct XmlSchemaFractionDigitsFacet__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaFractionDigitsFacet__Fields fields;
};
struct XmlSchemaFractionDigitsFacet__VTable {
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
struct XmlSchemaFractionDigitsFacet__StaticFields {
};
struct XmlSchemaFractionDigitsFacet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaFractionDigitsFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaFractionDigitsFacet__VTable vtable;
};

struct XmlSchemaWhiteSpaceFacet__Fields {
  struct XmlSchemaFacet__Fields _;
};
struct XmlSchemaWhiteSpaceFacet {
  struct XmlSchemaWhiteSpaceFacet__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaWhiteSpaceFacet__Fields fields;
};
struct XmlSchemaWhiteSpaceFacet__VTable {
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
struct XmlSchemaWhiteSpaceFacet__StaticFields {
};
struct XmlSchemaWhiteSpaceFacet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaWhiteSpaceFacet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaWhiteSpaceFacet__VTable vtable;
};

struct XmlSchemaUnique__Fields {
  struct XmlSchemaIdentityConstraint__Fields _;
};
struct XmlSchemaUnique {
  struct XmlSchemaUnique__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaUnique__Fields fields;
};
struct XmlSchemaUnique__VTable {
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
struct XmlSchemaUnique__StaticFields {
};
struct XmlSchemaUnique__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaUnique__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaUnique__VTable vtable;
};

struct XmlSchemaKey__Fields {
  struct XmlSchemaIdentityConstraint__Fields _;
};
struct XmlSchemaKey {
  struct XmlSchemaKey__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaKey__Fields fields;
};
struct XmlSchemaKey__VTable {
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
struct XmlSchemaKey__StaticFields {
};
struct XmlSchemaKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaKey__VTable vtable;
};

struct XmlSchemaKeyref__Fields {
  struct XmlSchemaIdentityConstraint__Fields _;
  struct XmlQualifiedName * refer;
};
struct XmlSchemaKeyref {
  struct XmlSchemaKeyref__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaKeyref__Fields fields;
};
struct XmlSchemaKeyref__VTable {
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
struct XmlSchemaKeyref__StaticFields {
};
struct XmlSchemaKeyref__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaKeyref__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaKeyref__VTable vtable;
};

struct XmlSchemaImport__Fields {
  struct XmlSchemaExternal__Fields _;
  struct String * ns;
  struct XmlSchemaAnnotation * annotation;
};
struct XmlSchemaImport {
  struct XmlSchemaImport__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaImport__Fields fields;
};
struct XmlSchemaImport__VTable {
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
struct XmlSchemaImport__StaticFields {
};
struct XmlSchemaImport__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaImport__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaImport__VTable vtable;
};

struct XmlSchemaInclude__Fields {
  struct XmlSchemaExternal__Fields _;
  struct XmlSchemaAnnotation * annotation;
};
struct XmlSchemaInclude {
  struct XmlSchemaInclude__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaInclude__Fields fields;
};
struct XmlSchemaInclude__VTable {
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
struct XmlSchemaInclude__StaticFields {
};
struct XmlSchemaInclude__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaInclude__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaInclude__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaObjectEnumerator__Fields {
  struct IEnumerator * enumerator;
};
struct XmlSchemaObjectEnumerator {
  struct XmlSchemaObjectEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectEnumerator__Fields fields;
};
struct XmlSchemaObjectEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IEnumerator_MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct XmlSchemaObjectEnumerator__StaticFields {
};
struct XmlSchemaObjectEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaObjectEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaObjectEnumerator__VTable vtable;
};

struct __declspec(align(8)) XmlSchemaObjectTable_ValuesCollection__Fields {
  struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ * entries;
  int32_t size;
};
struct XmlSchemaObjectTable_ValuesCollection {
  struct XmlSchemaObjectTable_ValuesCollection__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectTable_ValuesCollection__Fields fields;
};
struct XmlSchemaObjectTable_ValuesCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
};
struct XmlSchemaObjectTable_ValuesCollection__StaticFields {
};
struct XmlSchemaObjectTable_ValuesCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaObjectTable_ValuesCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaObjectTable_ValuesCollection__VTable vtable;
};

enum XmlSchemaObjectTable_EnumeratorType__Enum : int32_t {
  XmlSchemaObjectTable_EnumeratorType__Enum_Keys = 0,
  XmlSchemaObjectTable_EnumeratorType__Enum_Values = 1,
  XmlSchemaObjectTable_EnumeratorType__Enum_DictionaryEntry = 2,
};
struct XmlSchemaObjectTable_EnumeratorType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlSchemaObjectTable_EnumeratorType__Enum value;
};
struct __declspec(align(8)) XmlSchemaObjectTable_XSOEnumerator__Fields {
  struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ * entries;
  enum XmlSchemaObjectTable_EnumeratorType__Enum enumType;
  int32_t currentIndex;
  int32_t size;
  struct XmlQualifiedName * currentKey;
  struct XmlSchemaObject * currentValue;
};
struct XmlSchemaObjectTable_XSOEnumerator {
  struct XmlSchemaObjectTable_XSOEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectTable_XSOEnumerator__Fields fields;
};
struct XmlSchemaObjectTable_XSOEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct XmlSchemaObjectTable_XSOEnumerator__StaticFields {
};
struct XmlSchemaObjectTable_XSOEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaObjectTable_XSOEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaObjectTable_XSOEnumerator__VTable vtable;
};

struct XmlSchemaObjectTable_XSODictionaryEnumerator__Fields {
  struct XmlSchemaObjectTable_XSOEnumerator__Fields _;
};
struct XmlSchemaObjectTable_XSODictionaryEnumerator {
  struct XmlSchemaObjectTable_XSODictionaryEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaObjectTable_XSODictionaryEnumerator__Fields fields;
};
struct XmlSchemaObjectTable_XSODictionaryEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData get_Key;
  VirtualInvokeData get_Value;
  VirtualInvokeData get_Entry;
};
struct XmlSchemaObjectTable_XSODictionaryEnumerator__StaticFields {
};
struct XmlSchemaObjectTable_XSODictionaryEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaObjectTable_XSODictionaryEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaObjectTable_XSODictionaryEnumerator__VTable vtable;
};

struct XmlSchemaParticle_EmptyParticle__Fields {
  struct XmlSchemaParticle__Fields _;
};
struct XmlSchemaParticle_EmptyParticle {
  struct XmlSchemaParticle_EmptyParticle__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaParticle_EmptyParticle__Fields fields;
};
struct XmlSchemaParticle_EmptyParticle__VTable {
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
struct XmlSchemaParticle_EmptyParticle__StaticFields {
};
struct XmlSchemaParticle_EmptyParticle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XmlSchemaParticle_EmptyParticle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XmlSchemaParticle_EmptyParticle__VTable vtable;
};

struct XmlSchema__Array {
  struct XmlSchema__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSchema * vector[32];
};

struct DictionaryEntry__Array {
  struct DictionaryEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DictionaryEntry vector[32];
};

struct XmlSchemaSimpleContent__Fields {
  struct XmlSchemaContentModel__Fields _;
  struct XmlSchemaContent * content;
};
struct XmlSchemaSimpleContent {
  struct XmlSchemaSimpleContent__Class *klass;
  struct MonitorData *monitor;
  struct XmlSchemaSimpleContent__Fields fields;
};
struct XmlSchemaSimpleContent__VTable {
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
  VirtualInvokeData get_Content;
  VirtualInvokeData set_Content;
};}