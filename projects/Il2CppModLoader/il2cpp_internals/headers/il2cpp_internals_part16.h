namespace app {
struct EntryPointNotFoundException__StaticFields {
};
struct EntryPointNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntryPointNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntryPointNotFoundException__VTable vtable;
};

struct __declspec(align(8)) Enum_ValuesAndNames__Fields {
  struct UInt64__Array * Values;
  struct String__Array * Names;
};
struct Enum_ValuesAndNames {
  struct Enum_ValuesAndNames__Class *klass;
  struct MonitorData *monitor;
  struct Enum_ValuesAndNames__Fields fields;
};
struct UInt64__Array {
  struct UInt64__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  uint64_t vector[32];
};
struct Enum_ValuesAndNames__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Enum_ValuesAndNames__StaticFields {
};
struct Enum_ValuesAndNames__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enum_ValuesAndNames__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enum_ValuesAndNames__VTable vtable;
};

enum Enum_ParseFailureKind__Enum : int32_t {
  Enum_ParseFailureKind__Enum_None = 0,
  Enum_ParseFailureKind__Enum_Argument = 1,
  Enum_ParseFailureKind__Enum_ArgumentNull = 2,
  Enum_ParseFailureKind__Enum_ArgumentWithParameter = 3,
  Enum_ParseFailureKind__Enum_UnhandledException = 4,
};
struct Enum_ParseFailureKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Enum_ParseFailureKind__Enum value;
};
struct Enum_EnumResult {
  struct Object * parsedEnum;
  bool canThrow;
  enum Enum_ParseFailureKind__Enum m_failure;
  struct String * m_failureMessageID;
  struct String * m_failureParameter;
  struct Object * m_failureMessageFormatArgument;
  struct Exception * m_innerException;
};
struct Enum_EnumResult__Boxed {
  struct Enum_EnumResult__Class *klass;
  struct MonitorData *monitor;
  struct Enum_EnumResult fields;
};
struct Enum_EnumResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Enum_EnumResult__StaticFields {
};
struct Enum_EnumResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enum_EnumResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enum_EnumResult__VTable vtable;
};

struct Enum__VTable {
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
struct Enum__StaticFields {
  struct Char__Array * enumSeperatorCharArray;
};
struct Enum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enum__VTable vtable;
};

enum Exception_ExceptionMessageKind__Enum : int32_t {
  Exception_ExceptionMessageKind__Enum_ThreadAbort = 1,
  Exception_ExceptionMessageKind__Enum_ThreadInterrupted = 2,
  Exception_ExceptionMessageKind__Enum_OutOfMemory = 3,
};
struct Exception_ExceptionMessageKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Exception_ExceptionMessageKind__Enum value;
};

struct ExecutionEngineException__Fields {
  struct SystemException__Fields _;
};
struct ExecutionEngineException {
  struct ExecutionEngineException__Class *klass;
  struct MonitorData *monitor;
  struct ExecutionEngineException__Fields fields;
};
struct ExecutionEngineException__VTable {
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
struct ExecutionEngineException__StaticFields {
};
struct ExecutionEngineException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecutionEngineException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecutionEngineException__VTable vtable;
};

struct MemberAccessException__Fields {
  struct SystemException__Fields _;
};
struct MemberAccessException {
  struct MemberAccessException__Class *klass;
  struct MonitorData *monitor;
  struct MemberAccessException__Fields fields;
};
struct FieldAccessException__Fields {
  struct MemberAccessException__Fields _;
};
struct FieldAccessException {
  struct FieldAccessException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemberAccessException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FieldAccessException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FieldAccessException__VTable vtable;
};

struct FlagsAttribute {
  struct FlagsAttribute__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlagsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlagsAttribute__VTable vtable;
};

struct FormatException__Fields {
  struct SystemException__Fields _;
};
struct FormatException {
  struct FormatException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FormatException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FormatException__VTable vtable;
};

enum GCCollectionMode__Enum : int32_t {
  GCCollectionMode__Enum_Default = 0,
  GCCollectionMode__Enum_Forced = 1,
  GCCollectionMode__Enum_Optimized = 2,
};
struct GCCollectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GCCollectionMode__Enum value;
};

enum ParseFlags__Enum : int32_t {
  ParseFlags__Enum_HaveYear = 1,
  ParseFlags__Enum_HaveMonth = 2,
  ParseFlags__Enum_HaveDay = 4,
  ParseFlags__Enum_HaveHour = 8,
  ParseFlags__Enum_HaveMinute = 16,
  ParseFlags__Enum_HaveSecond = 32,
  ParseFlags__Enum_HaveTime = 64,
  ParseFlags__Enum_HaveDate = 128,
  ParseFlags__Enum_TimeZoneUsed = 256,
  ParseFlags__Enum_TimeZoneUtc = 512,
  ParseFlags__Enum_ParsedMonthName = 1024,
  ParseFlags__Enum_CaptureOffset = 2048,
  ParseFlags__Enum_YearDefault = 4096,
  ParseFlags__Enum_Rfc1123Pattern = 8192,
  ParseFlags__Enum_UtcSortPattern = 16384,
};
struct ParseFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParseFlags__Enum value;
};
enum ParseFailureKind__Enum : int32_t {
  ParseFailureKind__Enum_None = 0,
  ParseFailureKind__Enum_ArgumentNull = 1,
  ParseFailureKind__Enum_Format = 2,
  ParseFailureKind__Enum_FormatWithParameter = 3,
  ParseFailureKind__Enum_FormatBadDateTimeCalendar = 4,
};
struct ParseFailureKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParseFailureKind__Enum value;
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
  enum ParseFlags__Enum flags;
  struct TimeSpan timeZoneOffset;
  struct Calendar * calendar;
  struct DateTime parsedDate;
  enum ParseFailureKind__Enum failure;
  struct String * failureMessageID;
  struct Object * failureMessageFormatArgument;
  struct String * failureArgumentName;
};
struct DateTimeResult__Boxed {
  struct DateTimeResult__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeResult fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeResult__VTable vtable;
};

struct _DTString {
  struct String * Value;
  int32_t Index;
  int32_t len;
  uint16_t m_current;
  struct CompareInfo * m_info;
  bool m_checkDigitToken;
};
struct _DTString__Boxed {
  struct _DTString__Class *klass;
  struct MonitorData *monitor;
  struct _DTString fields;
};
struct _DTString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct _DTString__StaticFields {
  struct Char__Array * WhiteSpaceChecks;
};
struct _DTString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _DTString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _DTString__VTable vtable;
};

enum DateTimeParse_DS__Enum : int32_t {
  DateTimeParse_DS__Enum_BEGIN = 0,
  DateTimeParse_DS__Enum_N = 1,
  DateTimeParse_DS__Enum_NN = 2,
  DateTimeParse_DS__Enum_D_Nd = 3,
  DateTimeParse_DS__Enum_D_NN = 4,
  DateTimeParse_DS__Enum_D_NNd = 5,
  DateTimeParse_DS__Enum_D_M = 6,
  DateTimeParse_DS__Enum_D_MN = 7,
  DateTimeParse_DS__Enum_D_NM = 8,
  DateTimeParse_DS__Enum_D_MNd = 9,
  DateTimeParse_DS__Enum_D_NDS = 10,
  DateTimeParse_DS__Enum_D_Y = 11,
  DateTimeParse_DS__Enum_D_YN = 12,
  DateTimeParse_DS__Enum_D_YNd = 13,
  DateTimeParse_DS__Enum_D_YM = 14,
  DateTimeParse_DS__Enum_D_YMd = 15,
  DateTimeParse_DS__Enum_D_S = 16,
  DateTimeParse_DS__Enum_T_S = 17,
  DateTimeParse_DS__Enum_T_Nt = 18,
  DateTimeParse_DS__Enum_T_NNt = 19,
  DateTimeParse_DS__Enum_ERROR = 20,
  DateTimeParse_DS__Enum_DX_NN = 21,
  DateTimeParse_DS__Enum_DX_NNN = 22,
  DateTimeParse_DS__Enum_DX_MN = 23,
  DateTimeParse_DS__Enum_DX_NM = 24,
  DateTimeParse_DS__Enum_DX_MNN = 25,
  DateTimeParse_DS__Enum_DX_DS = 26,
  DateTimeParse_DS__Enum_DX_DSN = 27,
  DateTimeParse_DS__Enum_DX_NDS = 28,
  DateTimeParse_DS__Enum_DX_NNDS = 29,
  DateTimeParse_DS__Enum_DX_YNN = 30,
  DateTimeParse_DS__Enum_DX_YMN = 31,
  DateTimeParse_DS__Enum_DX_YN = 32,
  DateTimeParse_DS__Enum_DX_YM = 33,
  DateTimeParse_DS__Enum_TX_N = 34,
  DateTimeParse_DS__Enum_TX_NN = 35,
  DateTimeParse_DS__Enum_TX_NNN = 36,
  DateTimeParse_DS__Enum_TX_TS = 37,
  DateTimeParse_DS__Enum_DX_NNY = 38,
};
struct DateTimeParse_DS__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeParse_DS__Enum value;
};
enum DateTimeParse_DTT__Enum : int32_t {
  DateTimeParse_DTT__Enum_End = 0,
  DateTimeParse_DTT__Enum_NumEnd = 1,
  DateTimeParse_DTT__Enum_NumAmpm = 2,
  DateTimeParse_DTT__Enum_NumSpace = 3,
  DateTimeParse_DTT__Enum_NumDatesep = 4,
  DateTimeParse_DTT__Enum_NumTimesep = 5,
  DateTimeParse_DTT__Enum_MonthEnd = 6,
  DateTimeParse_DTT__Enum_MonthSpace = 7,
  DateTimeParse_DTT__Enum_MonthDatesep = 8,
  DateTimeParse_DTT__Enum_NumDatesuff = 9,
  DateTimeParse_DTT__Enum_NumTimesuff = 10,
  DateTimeParse_DTT__Enum_DayOfWeek = 11,
  DateTimeParse_DTT__Enum_YearSpace = 12,
  DateTimeParse_DTT__Enum_YearDateSep = 13,
  DateTimeParse_DTT__Enum_YearEnd = 14,
  DateTimeParse_DTT__Enum_TimeZone = 15,
  DateTimeParse_DTT__Enum_Era = 16,
  DateTimeParse_DTT__Enum_NumUTCTimeMark = 17,
  DateTimeParse_DTT__Enum_Unk = 18,
  DateTimeParse_DTT__Enum_NumLocalTimeMark = 19,
  DateTimeParse_DTT__Enum_Max = 20,
};
struct DateTimeParse_DTT__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeParse_DTT__Enum value;
};
struct DateTimeToken {
  enum DateTimeParse_DTT__Enum dtt;
  enum TokenType__Enum suffix;
  int32_t num;
};
struct DateTimeToken__Boxed {
  struct DateTimeToken__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeToken fields;
};
enum DateTimeParse_TM__Enum : int32_t {
  DateTimeParse_TM__Enum_NotSet = -1,
  DateTimeParse_TM__Enum_AM = 0,
  DateTimeParse_TM__Enum_PM = 1,
};
struct DateTimeParse_TM__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeParse_TM__Enum value;
};
struct DateTimeRawInfo {
  int32_t * num;
  int32_t numCount;
  int32_t month;
  int32_t year;
  int32_t dayOfWeek;
  int32_t era;
  enum DateTimeParse_TM__Enum timeMark;
  double fraction;
  bool hasSameDateAndTimeSeparators;
  bool timeZone;
};
struct DateTimeRawInfo__Boxed {
  struct DateTimeRawInfo__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeRawInfo fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeToken__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeToken__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeRawInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeRawInfo__VTable vtable;
};

struct ParsingInfo {
  struct Calendar * calendar;
  int32_t dayOfWeek;
  enum DateTimeParse_TM__Enum timeMark;
  bool fUseHour12;
  bool fUseTwoDigitYear;
  bool fAllowInnerWhite;
  bool fAllowTrailingWhite;
  bool fCustomNumberParser;
  struct DateTimeParse_MatchNumberDelegate * parseNumberDelegate;
};
struct ParsingInfo__Boxed {
  struct ParsingInfo__Class *klass;
  struct MonitorData *monitor;
  struct ParsingInfo fields;
};
struct DateTimeParse_MatchNumberDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct DateTimeParse_MatchNumberDelegate {
  struct DateTimeParse_MatchNumberDelegate__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeParse_MatchNumberDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParsingInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParsingInfo__VTable vtable;
};

enum DTSubStringType__Enum : int32_t {
  DTSubStringType__Enum_Unknown = 0,
  DTSubStringType__Enum_Invalid = 1,
  DTSubStringType__Enum_Number = 2,
  DTSubStringType__Enum_End = 3,
  DTSubStringType__Enum_Other = 4,
};
struct DTSubStringType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DTSubStringType__Enum value;
};
struct DTSubString {
  struct String * s;
  int32_t index;
  int32_t length;
  enum DTSubStringType__Enum type;
  int32_t value;
};
struct DTSubString__Boxed {
  struct DTSubString__Class *klass;
  struct MonitorData *monitor;
  struct DTSubString fields;
};
struct DTSubString__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DTSubString__StaticFields {
};
struct DTSubString__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DTSubString__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DTSubString__VTable vtable;
};

enum Guid_GuidStyles__Enum : int32_t {
  Guid_GuidStyles__Enum_None = 0,
  Guid_GuidStyles__Enum_AllowParenthesis = 1,
  Guid_GuidStyles__Enum_AllowBraces = 2,
  Guid_GuidStyles__Enum_AllowDashes = 4,
  Guid_GuidStyles__Enum_AllowHexPrefix = 8,
  Guid_GuidStyles__Enum_RequireParenthesis = 16,
  Guid_GuidStyles__Enum_RequireBraces = 32,
  Guid_GuidStyles__Enum_RequireDashes = 64,
  Guid_GuidStyles__Enum_RequireHexPrefix = 128,
  Guid_GuidStyles__Enum_HexFormat = 160,
  Guid_GuidStyles__Enum_NumberFormat = 0,
  Guid_GuidStyles__Enum_DigitFormat = 64,
  Guid_GuidStyles__Enum_BraceFormat = 96,
  Guid_GuidStyles__Enum_ParenthesisFormat = 80,
  Guid_GuidStyles__Enum_Any = 15,
};
struct Guid_GuidStyles__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Guid_GuidStyles__Enum value;
};
enum Guid_GuidParseThrowStyle__Enum : int32_t {
  Guid_GuidParseThrowStyle__Enum_None = 0,
  Guid_GuidParseThrowStyle__Enum_All = 1,
  Guid_GuidParseThrowStyle__Enum_AllButOverflow = 2,
};
struct Guid_GuidParseThrowStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Guid_GuidParseThrowStyle__Enum value;
};
enum Guid_ParseFailureKind__Enum : int32_t {
  Guid_ParseFailureKind__Enum_None = 0,
  Guid_ParseFailureKind__Enum_ArgumentNull = 1,
  Guid_ParseFailureKind__Enum_Format = 2,
  Guid_ParseFailureKind__Enum_FormatWithParameter = 3,
  Guid_ParseFailureKind__Enum_NativeException = 4,
  Guid_ParseFailureKind__Enum_FormatWithInnerException = 5,
};
struct Guid_ParseFailureKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Guid_ParseFailureKind__Enum value;
};
struct Guid_GuidResult {
  struct Guid parsedGuid;
  enum Guid_GuidParseThrowStyle__Enum throwStyle;
  enum Guid_ParseFailureKind__Enum m_failure;
  struct String * m_failureMessageID;
  struct Object * m_failureMessageFormatArgument;
  struct String * m_failureArgumentName;
  struct Exception * m_innerException;
};
struct Guid_GuidResult__Boxed {
  struct Guid_GuidResult__Class *klass;
  struct MonitorData *monitor;
  struct Guid_GuidResult fields;
};
struct Guid_GuidResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Guid_GuidResult__StaticFields {
};
struct Guid_GuidResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Guid_GuidResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Guid_GuidResult__VTable vtable;
};

struct IndexOutOfRangeException__Fields {
  struct SystemException__Fields _;
};
struct IndexOutOfRangeException {
  struct IndexOutOfRangeException__Class *klass;
  struct MonitorData *monitor;
  struct IndexOutOfRangeException__Fields fields;
};
struct IndexOutOfRangeException__VTable {
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
struct IndexOutOfRangeException__StaticFields {
};
struct IndexOutOfRangeException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IndexOutOfRangeException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IndexOutOfRangeException__VTable vtable;
};

struct InsufficientExecutionStackException__Fields {
  struct SystemException__Fields _;
};
struct InsufficientExecutionStackException {
  struct InsufficientExecutionStackException__Class *klass;
  struct MonitorData *monitor;
  struct InsufficientExecutionStackException__Fields fields;
};
struct InsufficientExecutionStackException__VTable {
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
struct InsufficientExecutionStackException__StaticFields {
};
struct InsufficientExecutionStackException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InsufficientExecutionStackException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InsufficientExecutionStackException__VTable vtable;
};

struct InvalidCastException__Fields {
  struct SystemException__Fields _;
};
struct InvalidCastException {
  struct InvalidCastException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidCastException__Fields fields;
};
struct InvalidCastException__VTable {
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
struct InvalidCastException__StaticFields {
};
struct InvalidCastException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidCastException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidCastException__VTable vtable;
};

struct InvalidOperationException__Fields {
  struct SystemException__Fields _;
};
struct InvalidOperationException {
  struct InvalidOperationException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidOperationException__Fields fields;
};
struct InvalidOperationException__VTable {
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
struct InvalidOperationException__StaticFields {
};
struct InvalidOperationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidOperationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidOperationException__VTable vtable;
};

struct InvalidProgramException__Fields {
  struct SystemException__Fields _;
};
struct InvalidProgramException {
  struct InvalidProgramException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidProgramException__Fields fields;
};
struct InvalidProgramException__VTable {
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
struct InvalidProgramException__StaticFields {
};
struct InvalidProgramException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidProgramException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidProgramException__VTable vtable;
};

struct InvalidTimeZoneException__Fields {
  struct Exception__Fields _;
};
struct InvalidTimeZoneException {
  struct InvalidTimeZoneException__Class *klass;
  struct MonitorData *monitor;
  struct InvalidTimeZoneException__Fields fields;
};
struct InvalidTimeZoneException__VTable {
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
struct InvalidTimeZoneException__StaticFields {
};
struct InvalidTimeZoneException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidTimeZoneException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidTimeZoneException__VTable vtable;
};

enum MidpointRounding__Enum : int32_t {
  MidpointRounding__Enum_ToEven = 0,
  MidpointRounding__Enum_AwayFromZero = 1,
};
struct MidpointRounding__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MidpointRounding__Enum value;
};

struct MethodAccessException__Fields {
  struct MemberAccessException__Fields _;
};
struct MethodAccessException {
  struct MethodAccessException__Class *klass;
  struct MonitorData *monitor;
  struct MethodAccessException__Fields fields;
};
struct MethodAccessException__VTable {
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
struct MethodAccessException__StaticFields {
};
struct MethodAccessException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodAccessException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MethodAccessException__VTable vtable;
};

struct MissingMemberException__Fields {
  struct MemberAccessException__Fields _;
  struct String * ClassName;
  struct String * MemberName;
  struct Byte__Array * Signature;
};
struct MissingMemberException {
  struct MissingMemberException__Class *klass;
  struct MonitorData *monitor;
  struct MissingMemberException__Fields fields;
};
struct MissingFieldException__Fields {
  struct MissingMemberException__Fields _;
};
struct MissingFieldException {
  struct MissingFieldException__Class *klass;
  struct MonitorData *monitor;
  struct MissingFieldException__Fields fields;
};
struct MissingMemberException__VTable {
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
};}