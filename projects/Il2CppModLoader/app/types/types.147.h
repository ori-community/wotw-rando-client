namespace app {
struct RangeContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct BitSet *firstpos;
    struct BitSet__Array *followpos;
    struct BitSet *positionsWithRangeTerminals;
    struct SymbolsDictionary *symbols;
    struct Positions *positions;
    int32_t minMaxNodesCount;
    int32_t endMarkerPos;
};

struct RangeContentValidator {
    struct RangeContentValidator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RangeContentValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RangeContentValidator__VTable vtable;
};

struct AllElementsContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct Hashtable *elements;
    struct Object__Array *particles;
    struct BitSet *isRequired;
    int32_t countRequired;
};

struct AllElementsContentValidator {
    struct AllElementsContentValidator__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllElementsContentValidator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllElementsContentValidator__VTable vtable;
};

struct __declspec(align(8)) XsdSimpleValue__Fields {
    struct XmlSchemaSimpleType *xmlType;
    struct Object *typedValue;
};

struct XsdSimpleValue {
    struct XsdSimpleValue__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdSimpleValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdSimpleValue__VTable vtable;
};

struct Datatype_union__Fields {
    struct Datatype_anySimpleType__Fields _;
    struct XmlSchemaSimpleType__Array *types;
};

struct Datatype_union {
    struct Datatype_union__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_union__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_union__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_union__VTable vtable;
};

struct Datatype_anyAtomicType__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_anyAtomicType {
    struct Datatype_anyAtomicType__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_anyAtomicType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_anyAtomicType__VTable vtable;
};

struct Datatype_untypedAtomicType__Fields {
    struct Datatype_anyAtomicType__Fields _;
};

struct Datatype_untypedAtomicType {
    struct Datatype_untypedAtomicType__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_untypedAtomicType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_untypedAtomicType__VTable vtable;
};

struct Datatype_string__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_string {
    struct Datatype_string__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_string__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_string__VTable vtable;
};

struct Datatype_boolean__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_boolean {
    struct Datatype_boolean__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_boolean__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_boolean__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_boolean__VTable vtable;
};

struct Datatype_float__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_float {
    struct Datatype_float__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_float__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_float__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_float__VTable vtable;
};

struct Datatype_double__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_double {
    struct Datatype_double__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_double__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_double__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_double__VTable vtable;
};

struct Datatype_decimal__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_decimal {
    struct Datatype_decimal__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
    struct FacetsChecker *numeric10FacetsChecker;
};

struct Datatype_decimal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_decimal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_decimal__VTable vtable;
};

struct Datatype_duration__Fields {
    struct Datatype_anySimpleType__Fields _;
};

struct Datatype_duration {
    struct Datatype_duration__Class *klass;
    MonitorData *monitor;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_duration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_duration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_duration__VTable vtable;
};

struct Datatype_yearMonthDuration__Fields {
    struct Datatype_duration__Fields _;
};

struct Datatype_yearMonthDuration {
    struct Datatype_yearMonthDuration__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_yearMonthDuration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_yearMonthDuration__VTable vtable;
};

struct Datatype_dayTimeDuration__Fields {
    struct Datatype_duration__Fields _;
};

struct Datatype_dayTimeDuration {
    struct Datatype_dayTimeDuration__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_dayTimeDuration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_dayTimeDuration__VTable vtable;
};

enum class XsdDateTimeFlags__Enum : int32_t {
    DateTime = 0x00000001,
    Time = 0x00000002,
    Date = 0x00000004,
    GYearMonth = 0x00000008,
    GYear = 0x00000010,
    GMonthDay = 0x00000020,
    GDay = 0x00000040,
    GMonth = 0x00000080,
    XdrDateTimeNoTz = 0x00000100,
    XdrDateTime = 0x00000200,
    XdrTimeNoTz = 0x00000400,
    AllXsd = 0x000000ff,
};

struct XsdDateTimeFlags__Enum__Boxed {
    struct XsdDateTimeFlags__Enum__Class *klass;
    MonitorData *monitor;
    XsdDateTimeFlags__Enum value;
    
};

struct Datatype_dateTimeBase__Fields {
    struct Datatype_anySimpleType__Fields _;
    XsdDateTimeFlags__Enum dateTimeFlags;
    
};

struct Datatype_dateTimeBase {
    struct Datatype_dateTimeBase__Class *klass;
    MonitorData *monitor;
    struct Datatype_dateTimeBase__Fields fields;
};

struct XsdDateTimeFlags__Enum__VTable {
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

struct XsdDateTimeFlags__Enum__StaticFields {
};

struct XsdDateTimeFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XsdDateTimeFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XsdDateTimeFlags__Enum__VTable vtable;
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
    struct Type *atomicValueType;
    struct Type *listValueType;
};

struct Datatype_dateTimeBase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_dateTimeBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_dateTimeBase__VTable vtable;
};

struct Datatype_dateTimeNoTimeZone__Fields {
    struct Datatype_dateTimeBase__Fields _;
};

struct Datatype_dateTimeNoTimeZone {
    struct Datatype_dateTimeNoTimeZone__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_dateTimeNoTimeZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_dateTimeNoTimeZone__VTable vtable;
};

struct Datatype_dateTimeTimeZone__Fields {
    struct Datatype_dateTimeBase__Fields _;
};

struct Datatype_dateTimeTimeZone {
    struct Datatype_dateTimeTimeZone__Class *klass;
    MonitorData *monitor;
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
};

struct Datatype_dateTimeTimeZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_dateTimeTimeZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_dateTimeTimeZone__VTable vtable;
};

struct Datatype_dateTime__Fields {
    struct Datatype_dateTimeBase__Fields _;
};

struct Datatype_dateTime {
    struct Datatype_dateTime__Class *klass;
    MonitorData *monitor;
    struct Datatype_dateTime__Fields fields;
};

struct Datatype_dateTime__VTable {
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

struct Datatype_dateTime__StaticFields {
};

struct Datatype_dateTime__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Datatype_dateTime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Datatype_dateTime__VTable vtable;
};

struct Datatype_timeNoTimeZone__Fields {
    struct Datatype_dateTimeBase__Fields _;
};

struct Datatype_timeNoTimeZone {
    struct Datatype_timeNoTimeZone__Class *klass;
    MonitorData *monitor;
    struct Datatype_timeNoTimeZone__Fields fields;
};

struct Datatype_timeNoTimeZone__VTable {
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

}
