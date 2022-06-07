namespace app {
struct MemberAccessException__Fields {
    struct SystemException__Fields _;
};

struct MemberAccessException {
    struct MemberAccessException__Class *klass;
    MonitorData *monitor;
    struct MemberAccessException__Fields fields;
};

struct FieldAccessException__Fields {
    struct MemberAccessException__Fields _;
};

struct FieldAccessException {
    struct FieldAccessException__Class *klass;
    MonitorData *monitor;
    struct FieldAccessException__Fields fields;
};

struct MemberAccessException__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Data;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_Source;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
};

struct MemberAccessException__StaticFields {
};

struct MemberAccessException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MemberAccessException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MemberAccessException__VTable vtable;
};

struct FieldAccessException__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Data;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_Source;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
};

struct FieldAccessException__StaticFields {
};

struct FieldAccessException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldAccessException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldAccessException__VTable vtable;
};

struct FlagsAttribute {
    struct FlagsAttribute__Class *klass;
    MonitorData *monitor;
};

struct FlagsAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct FlagsAttribute__StaticFields {
};

struct FlagsAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FlagsAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FlagsAttribute__VTable vtable;
};

struct FormatException__Fields {
    struct SystemException__Fields _;
};

struct FormatException {
    struct FormatException__Class *klass;
    MonitorData *monitor;
    struct FormatException__Fields fields;
};

struct FormatException__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_Message;
    VirtualInvokeData get_Data;
    VirtualInvokeData get_InnerException;
    VirtualInvokeData get_StackTrace;
    VirtualInvokeData get_Source;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetType;
};

struct FormatException__StaticFields {
};

struct FormatException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FormatException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FormatException__VTable vtable;
};

enum class GCCollectionMode__Enum : int32_t {
    Default = 0x00000000,
    Forced = 0x00000001,
    Optimized = 0x00000002,
};

struct GCCollectionMode__Enum__Boxed {
    struct GCCollectionMode__Enum__Class *klass;
    MonitorData *monitor;
    GCCollectionMode__Enum value;
    
};

struct GCCollectionMode__Enum__VTable {
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

struct GCCollectionMode__Enum__StaticFields {
};

struct GCCollectionMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GCCollectionMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GCCollectionMode__Enum__VTable vtable;
};

struct DateTimeFormatInfo___VTable {
};

struct DateTimeFormatInfo___StaticFields {
};

struct DateTimeFormatInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeFormatInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeFormatInfo___VTable vtable;
};

struct TimeSpan___VTable {
};

struct TimeSpan___StaticFields {
};

struct TimeSpan___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeSpan___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeSpan___VTable vtable;
};

enum class ParseFlags__Enum : int32_t {
    HaveYear = 0x00000001,
    HaveMonth = 0x00000002,
    HaveDay = 0x00000004,
    HaveHour = 0x00000008,
    HaveMinute = 0x00000010,
    HaveSecond = 0x00000020,
    HaveTime = 0x00000040,
    HaveDate = 0x00000080,
    TimeZoneUsed = 0x00000100,
    TimeZoneUtc = 0x00000200,
    ParsedMonthName = 0x00000400,
    CaptureOffset = 0x00000800,
    YearDefault = 0x00001000,
    Rfc1123Pattern = 0x00002000,
    UtcSortPattern = 0x00004000,
};

struct ParseFlags__Enum__Boxed {
    struct ParseFlags__Enum__Class *klass;
    MonitorData *monitor;
    ParseFlags__Enum value;
    
};

enum class ParseFailureKind__Enum : int32_t {
    None = 0x00000000,
    ArgumentNull = 0x00000001,
    Format = 0x00000002,
    FormatWithParameter = 0x00000003,
    FormatBadDateTimeCalendar = 0x00000004,
};

struct ParseFailureKind__Enum__Boxed {
    struct ParseFailureKind__Enum__Class *klass;
    MonitorData *monitor;
    ParseFailureKind__Enum value;
    
};

struct DateTimeResult {
    int32_t Year;
    int32_t Month;
    int32_t Day;
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    double fraction;
    int32_t era;
    ParseFlags__Enum flags;
    
    struct TimeSpan timeZoneOffset;
    struct Calendar *calendar;
    struct DateTime parsedDate;
    ParseFailureKind__Enum failure;
    
    struct String *failureMessageID;
    struct Object *failureMessageFormatArgument;
    struct String *failureArgumentName;
};

struct DateTimeResult__Boxed {
    struct DateTimeResult__Class *klass;
    MonitorData *monitor;
    struct DateTimeResult fields;
};

struct ParseFlags__Enum__VTable {
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

struct ParseFlags__Enum__StaticFields {
};

struct ParseFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParseFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParseFlags__Enum__VTable vtable;
};

struct ParseFailureKind__Enum__VTable {
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

struct ParseFailureKind__Enum__StaticFields {
};

struct ParseFailureKind__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParseFailureKind__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParseFailureKind__Enum__VTable vtable;
};

struct DateTimeResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DateTimeResult__StaticFields {
};

struct DateTimeResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeResult__VTable vtable;
};

struct DateTimeResult___VTable {
};

struct DateTimeResult___StaticFields {
};

struct DateTimeResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeResult___VTable vtable;
};

struct _DTString {
    struct String *Value;
    int32_t Index;
    int32_t len;
    uint16_t m_current;
    struct CompareInfo *m_info;
    bool m_checkDigitToken;
};

struct _DTString__Boxed {
    struct _DTString__Class *klass;
    MonitorData *monitor;
    struct _DTString fields;
};

struct _DTString__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct _DTString__StaticFields {
    struct Char__Array *WhiteSpaceChecks;
};

struct _DTString__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _DTString__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _DTString__VTable vtable;
};

struct _DTString___VTable {
};

struct _DTString___StaticFields {
};

struct _DTString___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct _DTString___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct _DTString___VTable vtable;
};

enum class DateTimeParse_DS__Enum : int32_t {
    BEGIN = 0x00000000,
    N = 0x00000001,
    NN = 0x00000002,
    D_Nd = 0x00000003,
    D_NN = 0x00000004,
    D_NNd = 0x00000005,
    D_M = 0x00000006,
    D_MN = 0x00000007,
    D_NM = 0x00000008,
    D_MNd = 0x00000009,
    D_NDS = 0x0000000a,
    D_Y = 0x0000000b,
    D_YN = 0x0000000c,
    D_YNd = 0x0000000d,
    D_YM = 0x0000000e,
    D_YMd = 0x0000000f,
    D_S = 0x00000010,
    T_S = 0x00000011,
    T_Nt = 0x00000012,
    T_NNt = 0x00000013,
    ERROR = 0x00000014,
    DX_NN = 0x00000015,
    DX_NNN = 0x00000016,
    DX_MN = 0x00000017,
    DX_NM = 0x00000018,
    DX_MNN = 0x00000019,
    DX_DS = 0x0000001a,
    DX_DSN = 0x0000001b,
    DX_NDS = 0x0000001c,
    DX_NNDS = 0x0000001d,
    DX_YNN = 0x0000001e,
    DX_YMN = 0x0000001f,
    DX_YN = 0x00000020,
    DX_YM = 0x00000021,
    TX_N = 0x00000022,
    TX_NN = 0x00000023,
    TX_NNN = 0x00000024,
    TX_TS = 0x00000025,
    DX_NNY = 0x00000026,
};

struct DateTimeParse_DS__Enum__Boxed {
    struct DateTimeParse_DS__Enum__Class *klass;
    MonitorData *monitor;
    DateTimeParse_DS__Enum value;
    
};

enum class DateTimeParse_DTT__Enum : int32_t {
    End = 0x00000000,
    NumEnd = 0x00000001,
    NumAmpm = 0x00000002,
    NumSpace = 0x00000003,
    NumDatesep = 0x00000004,
    NumTimesep = 0x00000005,
    MonthEnd = 0x00000006,
    MonthSpace = 0x00000007,
    MonthDatesep = 0x00000008,
    NumDatesuff = 0x00000009,
    NumTimesuff = 0x0000000a,
    DayOfWeek = 0x0000000b,
    YearSpace = 0x0000000c,
    YearDateSep = 0x0000000d,
    YearEnd = 0x0000000e,
    TimeZone = 0x0000000f,
    Era = 0x00000010,
    NumUTCTimeMark = 0x00000011,
    Unk = 0x00000012,
    NumLocalTimeMark = 0x00000013,
    Max = 0x00000014,
};

struct DateTimeParse_DTT__Enum__Boxed {
    struct DateTimeParse_DTT__Enum__Class *klass;
    MonitorData *monitor;
    DateTimeParse_DTT__Enum value;
    
};

struct DateTimeToken {
    DateTimeParse_DTT__Enum dtt;
    
    TokenType__Enum suffix;
    
    int32_t num;
};

struct DateTimeToken__Boxed {
    struct DateTimeToken__Class *klass;
    MonitorData *monitor;
    struct DateTimeToken fields;
};

enum class DateTimeParse_TM__Enum : int32_t {
    NotSet = -1,
    AM = 0x00000000,
    PM = 0x00000001,
};

struct DateTimeParse_TM__Enum__Boxed {
    struct DateTimeParse_TM__Enum__Class *klass;
    MonitorData *monitor;
    DateTimeParse_TM__Enum value;
    
};

struct DateTimeRawInfo {
    int32_t *num;
    int32_t numCount;
    int32_t month;
    int32_t year;
    int32_t dayOfWeek;
    int32_t era;
    DateTimeParse_TM__Enum timeMark;
    
    double fraction;
    bool hasSameDateAndTimeSeparators;
    bool timeZone;
};

struct DateTimeRawInfo__Boxed {
    struct DateTimeRawInfo__Class *klass;
    MonitorData *monitor;
    struct DateTimeRawInfo fields;
};

struct Int32Ptr {
    struct Int32Ptr__Class *klass;
    MonitorData *monitor;
};

struct DateTimeParse_DS__Enum__VTable {
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

struct DateTimeParse_DS__Enum__StaticFields {
};

struct DateTimeParse_DS__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParse_DS__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParse_DS__Enum__VTable vtable;
};

struct DateTimeParse_DTT__Enum__VTable {
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

struct DateTimeParse_DTT__Enum__StaticFields {
};

struct DateTimeParse_DTT__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParse_DTT__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParse_DTT__Enum__VTable vtable;
};

struct DateTimeToken__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DateTimeToken__StaticFields {
};

struct DateTimeToken__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeToken__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeToken__VTable vtable;
};

struct DateTimeToken___VTable {
};

struct DateTimeToken___StaticFields {
};

struct DateTimeToken___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeToken___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeToken___VTable vtable;
};

struct Int32Ptr__VTable {
};

struct Int32Ptr__StaticFields {
};

struct Int32Ptr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int32Ptr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int32Ptr__VTable vtable;
};

struct DateTimeParse_TM__Enum__VTable {
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

struct DateTimeParse_TM__Enum__StaticFields {
};

struct DateTimeParse_TM__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParse_TM__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParse_TM__Enum__VTable vtable;
};

struct DateTimeRawInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DateTimeRawInfo__StaticFields {
};

struct DateTimeRawInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeRawInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeRawInfo__VTable vtable;
};

struct DateTimeRawInfo___VTable {
};

struct DateTimeRawInfo___StaticFields {
};

struct DateTimeRawInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeRawInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeRawInfo___VTable vtable;
};

struct DateTimeStyles___VTable {
};

struct DateTimeStyles___StaticFields {
};

struct DateTimeStyles___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeStyles___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeStyles___VTable vtable;
};

struct DateTimeParse_TM___VTable {
};

struct DateTimeParse_TM___StaticFields {
};

struct DateTimeParse_TM___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParse_TM___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParse_TM___VTable vtable;
};

struct Calendar___VTable {
};

struct Calendar___StaticFields {
};

struct Calendar___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Calendar___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Calendar___VTable vtable;
};

struct ParsingInfo {
    struct Calendar *calendar;
    int32_t dayOfWeek;
    DateTimeParse_TM__Enum timeMark;
    
    bool fUseHour12;
    bool fUseTwoDigitYear;
    bool fAllowInnerWhite;
    bool fAllowTrailingWhite;
    bool fCustomNumberParser;
    struct DateTimeParse_MatchNumberDelegate *parseNumberDelegate;
};

struct ParsingInfo__Boxed {
    struct ParsingInfo__Class *klass;
    MonitorData *monitor;
    struct ParsingInfo fields;
};

struct DateTimeParse_MatchNumberDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct DateTimeParse_MatchNumberDelegate {
    struct DateTimeParse_MatchNumberDelegate__Class *klass;
    MonitorData *monitor;
    struct DateTimeParse_MatchNumberDelegate__Fields fields;
};

struct DateTimeParse_MatchNumberDelegate__VTable {
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

struct DateTimeParse_MatchNumberDelegate__StaticFields {
};

struct DateTimeParse_MatchNumberDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParse_MatchNumberDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParse_MatchNumberDelegate__VTable vtable;
};

struct ParsingInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ParsingInfo__StaticFields {
};

struct ParsingInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParsingInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParsingInfo__VTable vtable;
};

struct ParsingInfo___VTable {
};

struct ParsingInfo___StaticFields {
};

struct ParsingInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParsingInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParsingInfo___VTable vtable;
};

struct TokenType___VTable {
};

struct TokenType___StaticFields {
};

struct TokenType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokenType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokenType___VTable vtable;
};

enum class DTSubStringType__Enum : int32_t {
    Unknown = 0x00000000,
    Invalid = 0x00000001,
    Number = 0x00000002,
    End = 0x00000003,
    Other = 0x00000004,
};

struct DTSubStringType__Enum__Boxed {
    struct DTSubStringType__Enum__Class *klass;
    MonitorData *monitor;
    DTSubStringType__Enum value;
    
};

struct DTSubString {
    struct String *s;
    int32_t index;
    int32_t length;
    DTSubStringType__Enum type;
    
    int32_t value;
};

struct DTSubString__Boxed {
    struct DTSubString__Class *klass;
    MonitorData *monitor;
    struct DTSubString fields;
};

struct DTSubStringType__Enum__VTable {
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

struct DTSubStringType__Enum__StaticFields {
};

struct DTSubStringType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DTSubStringType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DTSubStringType__Enum__VTable vtable;
};

struct DTSubString__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
