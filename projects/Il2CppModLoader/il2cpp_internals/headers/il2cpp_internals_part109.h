namespace app {

struct PlusNode__Fields {
  struct InteriorNode__Fields _;
};
struct PlusNode {
  struct PlusNode__Class *klass;
  struct MonitorData *monitor;
  struct PlusNode__Fields fields;
};
struct PlusNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExpandTree;
  VirtualInvokeData ConstructPos;
  VirtualInvokeData get_IsNullable;
  VirtualInvokeData get_IsRangeNode;
};
struct PlusNode__StaticFields {
};
struct PlusNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlusNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlusNode__VTable vtable;
};

struct QmarkNode__Fields {
  struct InteriorNode__Fields _;
};
struct QmarkNode {
  struct QmarkNode__Class *klass;
  struct MonitorData *monitor;
  struct QmarkNode__Fields fields;
};
struct QmarkNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExpandTree;
  VirtualInvokeData ConstructPos;
  VirtualInvokeData get_IsNullable;
  VirtualInvokeData get_IsRangeNode;
};
struct QmarkNode__StaticFields {
};
struct QmarkNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QmarkNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QmarkNode__VTable vtable;
};

struct StarNode__Fields {
  struct InteriorNode__Fields _;
};
struct StarNode {
  struct StarNode__Class *klass;
  struct MonitorData *monitor;
  struct StarNode__Fields fields;
};
struct StarNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExpandTree;
  VirtualInvokeData ConstructPos;
  VirtualInvokeData get_IsNullable;
  VirtualInvokeData get_IsRangeNode;
};
struct StarNode__StaticFields {
};
struct StarNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StarNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StarNode__VTable vtable;
};

struct LeafRangeNode__Fields {
  struct LeafNode__Fields _;
  struct Decimal min;
  struct Decimal max;
  struct BitSet * nextIteration;
};
struct LeafRangeNode {
  struct LeafRangeNode__Class *klass;
  struct MonitorData *monitor;
  struct LeafRangeNode__Fields fields;
};
struct LeafRangeNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ExpandTree;
  VirtualInvokeData ConstructPos;
  VirtualInvokeData get_IsNullable;
  VirtualInvokeData get_IsRangeNode;
};
struct LeafRangeNode__StaticFields {
};
struct LeafRangeNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeafRangeNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeafRangeNode__VTable vtable;
};

struct DfaContentValidator__Fields {
  struct ContentValidator__Fields _;
  struct Int32__Array__Array * transitionTable;
  struct SymbolsDictionary * symbols;
};
struct DfaContentValidator {
  struct DfaContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct DfaContentValidator__Fields fields;
};
struct DfaContentValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsEmptiable;
  VirtualInvokeData InitValidation;
  VirtualInvokeData ValidateElement;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData ExpectedElements;
  VirtualInvokeData ExpectedParticles;
};
struct DfaContentValidator__StaticFields {
};
struct DfaContentValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DfaContentValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DfaContentValidator__VTable vtable;
};

struct NfaContentValidator__Fields {
  struct ContentValidator__Fields _;
  struct BitSet * firstpos;
  struct BitSet__Array * followpos;
  struct SymbolsDictionary * symbols;
  struct Positions * positions;
  int32_t endMarkerPos;
};
struct NfaContentValidator {
  struct NfaContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct NfaContentValidator__Fields fields;
};
struct NfaContentValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsEmptiable;
  VirtualInvokeData InitValidation;
  VirtualInvokeData ValidateElement;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData ExpectedElements;
  VirtualInvokeData ExpectedParticles;
};
struct NfaContentValidator__StaticFields {
};
struct NfaContentValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NfaContentValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NfaContentValidator__VTable vtable;
};

struct RangeContentValidator__Fields {
  struct ContentValidator__Fields _;
  struct BitSet * firstpos;
  struct BitSet__Array * followpos;
  struct BitSet * positionsWithRangeTerminals;
  struct SymbolsDictionary * symbols;
  struct Positions * positions;
  int32_t minMaxNodesCount;
  int32_t endMarkerPos;
};
struct RangeContentValidator {
  struct RangeContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct RangeContentValidator__Fields fields;
};
struct RangeContentValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsEmptiable;
  VirtualInvokeData InitValidation;
  VirtualInvokeData ValidateElement;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData ExpectedElements;
  VirtualInvokeData ExpectedParticles;
};
struct RangeContentValidator__StaticFields {
};
struct RangeContentValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RangeContentValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RangeContentValidator__VTable vtable;
};

struct AllElementsContentValidator__Fields {
  struct ContentValidator__Fields _;
  struct Hashtable * elements;
  struct Object__Array * particles;
  struct BitSet * isRequired;
  int32_t countRequired;
};
struct AllElementsContentValidator {
  struct AllElementsContentValidator__Class *klass;
  struct MonitorData *monitor;
  struct AllElementsContentValidator__Fields fields;
};
struct AllElementsContentValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsEmptiable;
  VirtualInvokeData InitValidation;
  VirtualInvokeData ValidateElement;
  VirtualInvokeData CompleteValidation;
  VirtualInvokeData ExpectedElements;
  VirtualInvokeData ExpectedParticles;
};
struct AllElementsContentValidator__StaticFields {
};
struct AllElementsContentValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllElementsContentValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllElementsContentValidator__VTable vtable;
};

struct __declspec(align(8)) XsdSimpleValue__Fields {
  struct XmlSchemaSimpleType * xmlType;
  struct Object * typedValue;
};
struct XsdSimpleValue {
  struct XsdSimpleValue__Class *klass;
  struct MonitorData *monitor;
  struct XsdSimpleValue__Fields fields;
};
struct XsdSimpleValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XsdSimpleValue__StaticFields {
};
struct XsdSimpleValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XsdSimpleValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XsdSimpleValue__VTable vtable;
};

struct Datatype_union__Fields {
  struct Datatype_anySimpleType__Fields _;
  struct XmlSchemaSimpleType__Array * types;
};
struct Datatype_union {
  struct Datatype_union__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_union__Fields fields;
};
struct Datatype_union__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_union__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_union__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_union__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_union__VTable vtable;
};

struct Datatype_anyAtomicType__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_anyAtomicType {
  struct Datatype_anyAtomicType__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_anyAtomicType__Fields fields;
};
struct Datatype_anyAtomicType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_anyAtomicType__StaticFields {
};
struct Datatype_anyAtomicType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_anyAtomicType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_anyAtomicType__VTable vtable;
};

struct Datatype_untypedAtomicType__Fields {
  struct Datatype_anyAtomicType__Fields _;
};
struct Datatype_untypedAtomicType {
  struct Datatype_untypedAtomicType__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_untypedAtomicType__Fields fields;
};
struct Datatype_untypedAtomicType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_untypedAtomicType__StaticFields {
};
struct Datatype_untypedAtomicType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_untypedAtomicType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_untypedAtomicType__VTable vtable;
};

struct Datatype_string__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_string {
  struct Datatype_string__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_string__Fields fields;
};
struct Datatype_string__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_string__StaticFields {
};
struct Datatype_string__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_string__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_string__VTable vtable;
};

struct Datatype_boolean__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_boolean {
  struct Datatype_boolean__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_boolean__Fields fields;
};
struct Datatype_boolean__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_boolean__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_boolean__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_boolean__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_boolean__VTable vtable;
};

struct Datatype_float__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_float {
  struct Datatype_float__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_float__Fields fields;
};
struct Datatype_float__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_float__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_float__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_float__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_float__VTable vtable;
};

struct Datatype_double__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_double {
  struct Datatype_double__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_double__Fields fields;
};
struct Datatype_double__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_double__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_double__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_double__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_double__VTable vtable;
};

struct Datatype_decimal__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_decimal {
  struct Datatype_decimal__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_decimal__Fields fields;
};
struct Datatype_decimal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_decimal__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
  struct FacetsChecker * numeric10FacetsChecker;
};
struct Datatype_decimal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_decimal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_decimal__VTable vtable;
};

struct Datatype_duration__Fields {
  struct Datatype_anySimpleType__Fields _;
};
struct Datatype_duration {
  struct Datatype_duration__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_duration__Fields fields;
};
struct Datatype_duration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_duration__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_duration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_duration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_duration__VTable vtable;
};

struct Datatype_yearMonthDuration__Fields {
  struct Datatype_duration__Fields _;
};
struct Datatype_yearMonthDuration {
  struct Datatype_yearMonthDuration__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_yearMonthDuration__Fields fields;
};
struct Datatype_yearMonthDuration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_yearMonthDuration__StaticFields {
};
struct Datatype_yearMonthDuration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_yearMonthDuration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_yearMonthDuration__VTable vtable;
};

struct Datatype_dayTimeDuration__Fields {
  struct Datatype_duration__Fields _;
};
struct Datatype_dayTimeDuration {
  struct Datatype_dayTimeDuration__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_dayTimeDuration__Fields fields;
};
struct Datatype_dayTimeDuration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_dayTimeDuration__StaticFields {
};
struct Datatype_dayTimeDuration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_dayTimeDuration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_dayTimeDuration__VTable vtable;
};

enum XsdDateTimeFlags__Enum : int32_t {
  XsdDateTimeFlags__Enum_DateTime = 1,
  XsdDateTimeFlags__Enum_Time = 2,
  XsdDateTimeFlags__Enum_Date = 4,
  XsdDateTimeFlags__Enum_GYearMonth = 8,
  XsdDateTimeFlags__Enum_GYear = 16,
  XsdDateTimeFlags__Enum_GMonthDay = 32,
  XsdDateTimeFlags__Enum_GDay = 64,
  XsdDateTimeFlags__Enum_GMonth = 128,
  XsdDateTimeFlags__Enum_XdrDateTimeNoTz = 256,
  XsdDateTimeFlags__Enum_XdrDateTime = 512,
  XsdDateTimeFlags__Enum_XdrTimeNoTz = 1024,
  XsdDateTimeFlags__Enum_AllXsd = 255,
};
struct XsdDateTimeFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XsdDateTimeFlags__Enum value;
};
struct Datatype_dateTimeBase__Fields {
  struct Datatype_anySimpleType__Fields _;
  enum XsdDateTimeFlags__Enum dateTimeFlags;
};
struct Datatype_dateTimeBase {
  struct Datatype_dateTimeBase__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_dateTimeBase__Fields fields;
};
struct Datatype_dateTimeBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_dateTimeBase__StaticFields {
  struct Type * atomicValueType;
  struct Type * listValueType;
};
struct Datatype_dateTimeBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_dateTimeBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_dateTimeBase__VTable vtable;
};

struct Datatype_dateTimeNoTimeZone__Fields {
  struct Datatype_dateTimeBase__Fields _;
};
struct Datatype_dateTimeNoTimeZone {
  struct Datatype_dateTimeNoTimeZone__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_dateTimeNoTimeZone__Fields fields;
};
struct Datatype_dateTimeNoTimeZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_dateTimeNoTimeZone__StaticFields {
};
struct Datatype_dateTimeNoTimeZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Datatype_dateTimeNoTimeZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Datatype_dateTimeNoTimeZone__VTable vtable;
};

struct Datatype_dateTimeTimeZone__Fields {
  struct Datatype_dateTimeBase__Fields _;
};
struct Datatype_dateTimeTimeZone {
  struct Datatype_dateTimeTimeZone__Class *klass;
  struct MonitorData *monitor;
  struct Datatype_dateTimeTimeZone__Fields fields;
};
struct Datatype_dateTimeTimeZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ValueType;
  VirtualInvokeData get_TokenizedType;
  VirtualInvokeData ParseValue;
  VirtualInvokeData get_Variety;
  VirtualInvokeData get_TypeCode;
  VirtualInvokeData IsDerivedFrom;
  VirtualInvokeData get_HasLexicalFacets;
  VirtualInvokeData get_HasValueFacets;
  VirtualInvokeData get_ValueConverter;
  VirtualInvokeData get_Restriction;
  VirtualInvokeData Compare;
  VirtualInvokeData ParseValue_1;
  VirtualInvokeData TryParseValue;
  VirtualInvokeData TryParseValue_1;
  VirtualInvokeData get_FacetsChecker;
  VirtualInvokeData get_BuiltInWhitespaceFacet;
  VirtualInvokeData DeriveByRestriction;
  VirtualInvokeData DeriveByList;
  VirtualInvokeData VerifySchemaValid;
  VirtualInvokeData IsEqual;
  VirtualInvokeData IsComparable;
  VirtualInvokeData CreateValueConverter;
  VirtualInvokeData get_ListValueType;
  VirtualInvokeData get_ValidRestrictionFlags;
};
struct Datatype_dateTimeTimeZone__StaticFields {
};}