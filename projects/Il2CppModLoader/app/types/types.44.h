namespace app {
struct TimeSpanParse_TTT__Enum__Boxed {
    struct TimeSpanParse_TTT__Enum__Class *klass;
    MonitorData *monitor;
    TimeSpanParse_TTT__Enum value;
    
};

struct TimeSpanParse_TimeSpanToken {
    TimeSpanParse_TTT__Enum ttt;
    
    int32_t num;
    int32_t zeroes;
    struct String *sep;
};

struct TimeSpanParse_TimeSpanToken__Boxed {
    struct TimeSpanParse_TimeSpanToken__Class *klass;
    MonitorData *monitor;
    struct TimeSpanParse_TimeSpanToken fields;
};

struct TimeSpanParse_TTT__Enum__VTable {
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

struct TimeSpanParse_TTT__Enum__StaticFields {
};

struct TimeSpanParse_TTT__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TTT__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TTT__Enum__VTable vtable;
};

struct TimeSpanParse_TimeSpanToken__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeSpanParse_TimeSpanToken__StaticFields {
};

struct TimeSpanParse_TimeSpanToken__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanToken__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanToken__VTable vtable;
};

enum class TimeSpanParse_TimeSpanStandardStyles__Enum : int32_t {
    None = 0x00000000,
    Invariant = 0x00000001,
    Localized = 0x00000002,
    RequireFull = 0x00000004,
    Any = 0x00000003,
};

struct TimeSpanParse_TimeSpanStandardStyles__Enum__Boxed {
    struct TimeSpanParse_TimeSpanStandardStyles__Enum__Class *klass;
    MonitorData *monitor;
    TimeSpanParse_TimeSpanStandardStyles__Enum value;
    
};

enum class TimeSpanParse_TimeSpanThrowStyle__Enum : int32_t {
    None = 0x00000000,
    All = 0x00000001,
};

struct TimeSpanParse_TimeSpanThrowStyle__Enum__Boxed {
    struct TimeSpanParse_TimeSpanThrowStyle__Enum__Class *klass;
    MonitorData *monitor;
    TimeSpanParse_TimeSpanThrowStyle__Enum value;
    
};

enum class TimeSpanParse_ParseFailureKind__Enum : int32_t {
    None = 0x00000000,
    ArgumentNull = 0x00000001,
    Format = 0x00000002,
    FormatWithParameter = 0x00000003,
    Overflow = 0x00000004,
};

struct TimeSpanParse_ParseFailureKind__Enum__Boxed {
    struct TimeSpanParse_ParseFailureKind__Enum__Class *klass;
    MonitorData *monitor;
    TimeSpanParse_ParseFailureKind__Enum value;
    
};

struct TimeSpanParse_TimeSpanResult {
    struct TimeSpan parsedTimeSpan;
    TimeSpanParse_TimeSpanThrowStyle__Enum throwStyle;
    
    TimeSpanParse_ParseFailureKind__Enum m_failure;
    
    struct String *m_failureMessageID;
    struct Object *m_failureMessageFormatArgument;
    struct String *m_failureArgumentName;
};

struct TimeSpanParse_TimeSpanResult__Boxed {
    struct TimeSpanParse_TimeSpanResult__Class *klass;
    MonitorData *monitor;
    struct TimeSpanParse_TimeSpanResult fields;
};

struct TimeSpanParse_TimeSpanStandardStyles__Enum__VTable {
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

struct TimeSpanParse_TimeSpanStandardStyles__Enum__StaticFields {
};

struct TimeSpanParse_TimeSpanStandardStyles__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanStandardStyles__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanStandardStyles__Enum__VTable vtable;
};

struct TimeSpanParse_TimeSpanThrowStyle__Enum__VTable {
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

struct TimeSpanParse_TimeSpanThrowStyle__Enum__StaticFields {
};

struct TimeSpanParse_TimeSpanThrowStyle__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanThrowStyle__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanThrowStyle__Enum__VTable vtable;
};

struct TimeSpanParse_ParseFailureKind__Enum__VTable {
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

struct TimeSpanParse_ParseFailureKind__Enum__StaticFields {
};

struct TimeSpanParse_ParseFailureKind__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_ParseFailureKind__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_ParseFailureKind__Enum__VTable vtable;
};

struct TimeSpanParse_TimeSpanResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeSpanParse_TimeSpanResult__StaticFields {
};

struct TimeSpanParse_TimeSpanResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanResult__VTable vtable;
};

struct TimeSpanParse_TimeSpanResult___VTable {
};

struct TimeSpanParse_TimeSpanResult___StaticFields {
};

struct TimeSpanParse_TimeSpanResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanResult___VTable vtable;
};

struct TimeSpanParse_TimeSpanRawInfo {
    TimeSpanParse_TTT__Enum lastSeenTTT;
    
    int32_t tokenCount;
    int32_t SepCount;
    int32_t NumCount;
    struct String__Array *literals;
    struct TimeSpanParse_TimeSpanToken__Array *numbers;
    struct TimeSpanFormat_FormatLiterals m_posLoc;
    struct TimeSpanFormat_FormatLiterals m_negLoc;
    bool m_posLocInit;
    bool m_negLocInit;
    struct String *m_fullPosPattern;
    struct String *m_fullNegPattern;
};

struct TimeSpanParse_TimeSpanRawInfo__Boxed {
    struct TimeSpanParse_TimeSpanRawInfo__Class *klass;
    MonitorData *monitor;
    struct TimeSpanParse_TimeSpanRawInfo fields;
};

struct TimeSpanParse_TimeSpanToken__Array {
    struct TimeSpanParse_TimeSpanToken__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TimeSpanParse_TimeSpanToken vector[32];
};

struct TimeSpanParse_TimeSpanToken__Array__VTable {
};

struct TimeSpanParse_TimeSpanToken__Array__StaticFields {
};

struct TimeSpanParse_TimeSpanToken__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanToken__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanToken__Array__VTable vtable;
};

struct TimeSpanParse_TimeSpanRawInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeSpanParse_TimeSpanRawInfo__StaticFields {
};

struct TimeSpanParse_TimeSpanRawInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanRawInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanRawInfo__VTable vtable;
};

struct TimeSpanParse_TimeSpanRawInfo___VTable {
};

struct TimeSpanParse_TimeSpanRawInfo___StaticFields {
};

struct TimeSpanParse_TimeSpanRawInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanRawInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanRawInfo___VTable vtable;
};

struct TimeSpanParse_TimeSpanTokenizer {
    int32_t m_pos;
    struct String *m_value;
};

struct TimeSpanParse_TimeSpanTokenizer__Boxed {
    struct TimeSpanParse_TimeSpanTokenizer__Class *klass;
    MonitorData *monitor;
    struct TimeSpanParse_TimeSpanTokenizer fields;
};

struct TimeSpanParse_TimeSpanTokenizer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeSpanParse_TimeSpanTokenizer__StaticFields {
};

struct TimeSpanParse_TimeSpanTokenizer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanTokenizer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanTokenizer__VTable vtable;
};

struct TimeSpanParse_TimeSpanToken___VTable {
};

struct TimeSpanParse_TimeSpanToken___StaticFields {
};

struct TimeSpanParse_TimeSpanToken___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpanParse_TimeSpanToken___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpanParse_TimeSpanToken___VTable vtable;
};

struct InternalEncodingDataItem {
    struct String *webName;
    uint16_t codePage;
};

struct InternalEncodingDataItem__Boxed {
    struct InternalEncodingDataItem__Class *klass;
    MonitorData *monitor;
    struct InternalEncodingDataItem fields;
};

struct InternalEncodingDataItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InternalEncodingDataItem__StaticFields {
};

struct InternalEncodingDataItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalEncodingDataItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalEncodingDataItem__VTable vtable;
};

struct InternalCodePageDataItem {
    uint16_t codePage;
    uint16_t uiFamilyCodePage;
    uint32_t flags;
    struct String *Names;
};

struct InternalCodePageDataItem__Boxed {
    struct InternalCodePageDataItem__Class *klass;
    MonitorData *monitor;
    struct InternalCodePageDataItem fields;
};

struct InternalCodePageDataItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InternalCodePageDataItem__StaticFields {
};

struct InternalCodePageDataItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalCodePageDataItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalCodePageDataItem__VTable vtable;
};

enum class CultureTypes__Enum : int32_t {
    NeutralCultures = 0x00000001,
    SpecificCultures = 0x00000002,
    InstalledWin32Cultures = 0x00000004,
    AllCultures = 0x00000007,
    UserCustomCulture = 0x00000008,
    ReplacementCultures = 0x00000010,
    WindowsOnlyCultures = 0x00000020,
    FrameworkCultures = 0x00000040,
};

struct CultureTypes__Enum__Boxed {
    struct CultureTypes__Enum__Class *klass;
    MonitorData *monitor;
    CultureTypes__Enum value;
    
};

struct CultureTypes__Enum__VTable {
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

struct CultureTypes__Enum__StaticFields {
};

struct CultureTypes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureTypes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureTypes__Enum__VTable vtable;
};

struct CultureInfo_Data {
    int32_t ansi;
    int32_t ebcdic;
    int32_t mac;
    int32_t oem;
    bool right_to_left;
    uint8_t list_sep;
};

struct CultureInfo_Data__Boxed {
    struct CultureInfo_Data__Class *klass;
    MonitorData *monitor;
    struct CultureInfo_Data fields;
};

struct CultureInfo_Data__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CultureInfo_Data__StaticFields {
};

struct CultureInfo_Data__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CultureInfo_Data__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CultureInfo_Data__VTable vtable;
};

struct __declspec(align(8)) IdnMapping__Fields {
    bool allow_unassigned;
    bool use_std3;
    struct Punycode *puny;
};

struct IdnMapping {
    struct IdnMapping__Class *klass;
    MonitorData *monitor;
    struct IdnMapping__Fields fields;
};

struct __declspec(align(8)) Bootstring__Fields {
    uint16_t delimiter;
    int32_t base_num;
    int32_t tmin;
    int32_t tmax;
    int32_t skew;
    int32_t damp;
    int32_t initial_bias;
    int32_t initial_n;
};

struct Bootstring {
    struct Bootstring__Class *klass;
    MonitorData *monitor;
    struct Bootstring__Fields fields;
};

struct Punycode__Fields {
    struct Bootstring__Fields _;
};

struct Punycode {
    struct Punycode__Class *klass;
    MonitorData *monitor;
    struct Punycode__Fields fields;
};

struct Bootstring__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Bootstring__StaticFields {
};

struct Bootstring__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bootstring__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bootstring__VTable vtable;
};

struct Punycode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Punycode__StaticFields {
};

struct Punycode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Punycode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Punycode__VTable vtable;
};

struct IdnMapping__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IdnMapping__StaticFields {
};

struct IdnMapping__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IdnMapping__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IdnMapping__VTable vtable;
};

struct __declspec(align(8)) RegionInfo__Fields {
    int32_t regionId;
    struct String *iso2Name;
    struct String *iso3Name;
    struct String *win3Name;
    struct String *englishName;
    struct String *nativeName;
    struct String *currencySymbol;
    struct String *isoCurrencySymbol;
    struct String *currencyEnglishName;
    struct String *currencyNativeName;
};

struct RegionInfo {
    struct RegionInfo__Class *klass;
    MonitorData *monitor;
    struct RegionInfo__Fields fields;
};

struct RegionInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_CurrencyEnglishName;
    VirtualInvokeData get_CurrencySymbol;
    VirtualInvokeData get_DisplayName;
    VirtualInvokeData get_EnglishName;
    VirtualInvokeData get_GeoId;
    VirtualInvokeData get_IsMetric;
    VirtualInvokeData get_ISOCurrencySymbol;
    VirtualInvokeData get_NativeName;
    VirtualInvokeData get_CurrencyNativeName;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ThreeLetterISORegionName;
    VirtualInvokeData get_ThreeLetterWindowsRegionName;
    VirtualInvokeData get_TwoLetterISORegionName;
};

struct RegionInfo__StaticFields {
    struct RegionInfo *currentRegion;
};

struct RegionInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RegionInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RegionInfo__VTable vtable;
};

struct __declspec(align(8)) AtomicBoolean__Fields {
    int32_t flag;
};

struct AtomicBoolean {
    struct AtomicBoolean__Class *klass;
    MonitorData *monitor;
    struct AtomicBoolean__Fields fields;
};

struct AtomicBoolean__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AtomicBoolean__StaticFields {
};

struct AtomicBoolean__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AtomicBoolean__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AtomicBoolean__VTable vtable;
};

struct CancellationCallbackCoreWorkArguments {
    struct SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ *m_currArrayFragment;
    int32_t m_currArrayIndex;
};

struct CancellationCallbackCoreWorkArguments__Boxed {
    struct CancellationCallbackCoreWorkArguments__Class *klass;
    MonitorData *monitor;
    struct CancellationCallbackCoreWorkArguments fields;
};

struct CancellationCallbackCoreWorkArguments__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CancellationCallbackCoreWorkArguments__StaticFields {
};

struct CancellationCallbackCoreWorkArguments__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationCallbackCoreWorkArguments__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationCallbackCoreWorkArguments__VTable vtable;
};

struct CancellationToken__Array {
    struct CancellationToken__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CancellationToken vector[32];
};

struct CancellationToken__Array__VTable {
};

struct CancellationToken__Array__StaticFields {
};

struct CancellationToken__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancellationToken__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancellationToken__Array__VTable vtable;
};

struct AsyncMethodBuilderCore {
    struct IAsyncStateMachine *m_stateMachine;
    struct Action *m_defaultContextAction;
};

struct AsyncMethodBuilderCore__Boxed {
    struct AsyncMethodBuilderCore__Class *klass;
    MonitorData *monitor;
    struct AsyncMethodBuilderCore fields;
};

struct AsyncTaskMethodBuilder_1_System_Boolean_ {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_System_Boolean_ *m_task;
};

struct AsyncTaskMethodBuilder_1_System_Boolean___Boxed {
    struct AsyncTaskMethodBuilder_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_System_Boolean_ fields;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ {
    struct Task_1_Task_ *m_task;
    bool m_continueOnCapturedContext;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Boxed {
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ fields;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ {
    struct Task_1_System_Boolean_ *m_task;
    bool m_continueOnCapturedContext;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed {
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ fields;
};

struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_Boolean_ __t__builder;
    struct CancellationToken cancellationToken;
    struct SemaphoreSlim_TaskNode *asyncWaiter;
    int32_t millisecondsTimeout;
    struct CancellationTokenSource *_cts_5__1;
    struct SemaphoreSlim *__4__this;
    struct Object *__7__wrap1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ __u__1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ __u__2;
};

struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed {
    struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class *klass;
    MonitorData *monitor;
    struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 fields;
};

struct IAsyncStateMachine {
    struct IAsyncStateMachine__Class *klass;
    MonitorData *monitor;
};

struct IAsyncStateMachine__VTable {
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct IAsyncStateMachine__StaticFields {
};

struct IAsyncStateMachine__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAsyncStateMachine__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAsyncStateMachine__VTable vtable;
};

struct AsyncMethodBuilderCore__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncMethodBuilderCore__StaticFields {
};

struct AsyncMethodBuilderCore__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncMethodBuilderCore__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncMethodBuilderCore__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_System_Boolean___StaticFields {
    struct Task_1_System_Boolean_ *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_System_Boolean___VTable vtable;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___StaticFields {
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___VTable vtable;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___StaticFields {
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___VTable vtable;
};

struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__StaticFields {
};

struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__VTable vtable;
};

struct SpinLock {
    int32_t m_owner;
};

struct SpinLock__Boxed {
    struct SpinLock__Class *klass;
    MonitorData *monitor;
    struct SpinLock fields;
};

struct SpinLock__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpinLock__StaticFields {
    int32_t MAXIMUM_WAITERS;
};

struct SpinLock__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpinLock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpinLock__VTable vtable;
};

}
