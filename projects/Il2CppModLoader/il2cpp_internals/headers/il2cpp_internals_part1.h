namespace app {
struct CultureData {
  struct CultureData__Class *klass;
  struct MonitorData *monitor;
  struct CultureData__Fields fields;
};
struct __declspec(align(8)) CalendarData__Fields {
  struct String * sNativeName;
  struct String__Array * saShortDates;
  struct String__Array * saYearMonths;
  struct String__Array * saLongDates;
  struct String * sMonthDay;
  struct String__Array * saEraNames;
  struct String__Array * saAbbrevEraNames;
  struct String__Array * saAbbrevEnglishEraNames;
  struct String__Array * saDayNames;
  struct String__Array * saAbbrevDayNames;
  struct String__Array * saSuperShortDayNames;
  struct String__Array * saMonthNames;
  struct String__Array * saAbbrevMonthNames;
  struct String__Array * saMonthGenitiveNames;
  struct String__Array * saAbbrevMonthGenitiveNames;
  struct String__Array * saLeapYearMonthNames;
  int32_t iTwoDigitYearMax;
  int32_t iCurrentEra;
  bool bUseUserOverrides;
};
struct CalendarData {
  struct CalendarData__Class *klass;
  struct MonitorData *monitor;
  struct CalendarData__Fields fields;
};
struct CalendarData__Array {
  struct CalendarData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CalendarData * vector[32];
};
struct __declspec(align(8)) CompareInfo__Fields {
  struct String * m_name;
  struct String * m_sortName;
  int32_t win32LCID;
  int32_t culture;
  struct SortVersion * m_SortVersion;
  struct SimpleCollator * collator;
};
struct CompareInfo {
  struct CompareInfo__Class *klass;
  struct MonitorData *monitor;
  struct CompareInfo__Fields fields;
};
enum CompareOptions__Enum : int32_t {
  CompareOptions__Enum_None = 0,
  CompareOptions__Enum_IgnoreCase = 1,
  CompareOptions__Enum_IgnoreNonSpace = 2,
  CompareOptions__Enum_IgnoreSymbols = 4,
  CompareOptions__Enum_IgnoreKanaType = 8,
  CompareOptions__Enum_IgnoreWidth = 16,
  CompareOptions__Enum_OrdinalIgnoreCase = 268435456,
  CompareOptions__Enum_StringSort = 536870912,
  CompareOptions__Enum_Ordinal = 1073741824,
};
struct CompareOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompareOptions__Enum value;
};
struct Guid {
  int32_t _a;
  int16_t _b;
  int16_t _c;
  uint8_t _d;
  uint8_t _e;
  uint8_t _f;
  uint8_t _g;
  uint8_t _h;
  uint8_t _i;
  uint8_t _j;
  uint8_t _k;
};
struct Guid__Boxed {
  struct Guid__Class *klass;
  struct MonitorData *monitor;
  struct Guid fields;
};
struct __declspec(align(8)) SortVersion__Fields {
  int32_t m_NlsVersion;
  struct Guid m_SortId;
};
struct SortVersion {
  struct SortVersion__Class *klass;
  struct MonitorData *monitor;
  struct SortVersion__Fields fields;
};
struct RandomNumberGenerator {
  struct RandomNumberGenerator__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) RNGCryptoServiceProvider__Fields {
  void * _handle;
};
struct RNGCryptoServiceProvider {
  struct RNGCryptoServiceProvider__Class *klass;
  struct MonitorData *monitor;
  struct RNGCryptoServiceProvider__Fields fields;
};
struct __declspec(align(8)) SimpleCollator__Fields {
  struct TextInfo * textInfo;
  struct CodePointIndexer * cjkIndexer;
  struct Contraction__Array * contractions;
  struct Level2Map__Array * level2Maps;
  struct Byte__Array * unsafeFlags;
  uint8_t * cjkCatTable;
  uint8_t * cjkLv1Table;
  uint8_t * cjkLv2Table;
  struct CodePointIndexer * cjkLv2Indexer;
  int32_t lcid;
  bool frenchSort;
};
struct SimpleCollator {
  struct SimpleCollator__Class *klass;
  struct MonitorData *monitor;
  struct SimpleCollator__Fields fields;
};
struct Nullable_1_Boolean_ {
  bool value;
  bool has_value;
};
struct Nullable_1_Boolean___Boxed {
  struct Nullable_1_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Boolean_ fields;
};
struct __declspec(align(8)) TextInfo__Fields {
  struct String * m_listSeparator;
  bool m_isReadOnly;
  struct String * m_cultureName;
  struct CultureData * m_cultureData;
  struct String * m_textInfoName;
  struct Nullable_1_Boolean_ m_IsAsciiCasingSameAsInvariant;
  struct String * customCultureName;
  int32_t m_nDataItem;
  bool m_useUserOverride;
  int32_t m_win32LangID;
};
struct TextInfo {
  struct TextInfo__Class *klass;
  struct MonitorData *monitor;
  struct TextInfo__Fields fields;
};
struct __declspec(align(8)) CodePointIndexer__Fields {
  struct CodePointIndexer_TableRange__Array * ranges;
  int32_t TotalCount;
  int32_t defaultIndex;
  int32_t defaultCP;
};
struct CodePointIndexer {
  struct CodePointIndexer__Class *klass;
  struct MonitorData *monitor;
  struct CodePointIndexer__Fields fields;
};
struct CodePointIndexer_TableRange {
  int32_t Start;
  int32_t End;
  int32_t Count;
  int32_t IndexStart;
  int32_t IndexEnd;
};
struct CodePointIndexer_TableRange__Boxed {
  struct CodePointIndexer_TableRange__Class *klass;
  struct MonitorData *monitor;
  struct CodePointIndexer_TableRange fields;
};
struct CodePointIndexer_TableRange__Array {
  struct CodePointIndexer_TableRange__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CodePointIndexer_TableRange vector[32];
};
struct __declspec(align(8)) Contraction__Fields {
  int32_t Index;
  struct Char__Array * Source;
  struct String * Replacement;
  struct Byte__Array * SortKey;
};
struct Contraction {
  struct Contraction__Class *klass;
  struct MonitorData *monitor;
  struct Contraction__Fields fields;
};
struct Contraction__Array {
  struct Contraction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Contraction * vector[32];
};
struct Char__Array {
  struct Char__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  uint16_t vector[32];
};
struct __declspec(align(8)) Level2Map__Fields {
  uint8_t Source;
  uint8_t Replace;
};
struct Level2Map {
  struct Level2Map__Class *klass;
  struct MonitorData *monitor;
  struct Level2Map__Fields fields;
};
struct Level2Map__Array {
  struct Level2Map__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Level2Map * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct SimpleCollator * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
  struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
  struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
};
struct SimpleCollator__Array {
  struct SimpleCollator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SimpleCollator * vector[32];
};
struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator_ {
  struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator_ {
  struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  struct String * key;
  struct SimpleCollator * value;
};
struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
  struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
};
struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
  struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator_ {
  struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SortKey__Fields {
  struct String * source;
  struct Byte__Array * key;
  enum CompareOptions__Enum options;
  int32_t lcid;
};
struct SortKey {
  struct SortKey__Class *klass;
  struct MonitorData *monitor;
  struct SortKey__Fields fields;
};
struct __declspec(align(8)) Calendar__Fields {
  int32_t m_currentEraValue;
  bool m_isReadOnly;
  int32_t twoDigitYearMax;
};
struct Calendar {
  struct Calendar__Class *klass;
  struct MonitorData *monitor;
  struct Calendar__Fields fields;
};
enum GregorianCalendarTypes__Enum : int32_t {
  GregorianCalendarTypes__Enum_Localized = 1,
  GregorianCalendarTypes__Enum_USEnglish = 2,
  GregorianCalendarTypes__Enum_MiddleEastFrench = 9,
  GregorianCalendarTypes__Enum_Arabic = 10,
  GregorianCalendarTypes__Enum_TransliteratedEnglish = 11,
  GregorianCalendarTypes__Enum_TransliteratedFrench = 12,
};
struct GregorianCalendarTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GregorianCalendarTypes__Enum value;
};
struct GregorianCalendar__Fields {
  struct Calendar__Fields _;
  enum GregorianCalendarTypes__Enum m_type;
};
struct GregorianCalendar {
  struct GregorianCalendar__Class *klass;
  struct MonitorData *monitor;
  struct GregorianCalendar__Fields fields;
};
enum DayOfWeek__Enum : int32_t {
  DayOfWeek__Enum_Sunday = 0,
  DayOfWeek__Enum_Monday = 1,
  DayOfWeek__Enum_Tuesday = 2,
  DayOfWeek__Enum_Wednesday = 3,
  DayOfWeek__Enum_Thursday = 4,
  DayOfWeek__Enum_Friday = 5,
  DayOfWeek__Enum_Saturday = 6,
};
struct DayOfWeek__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DayOfWeek__Enum value;
};
struct __declspec(align(8)) Hashtable__Fields {
  struct Hashtable_bucket__Array * buckets;
  int32_t count;
  int32_t occupancy;
  int32_t loadsize;
  float loadFactor;
  int32_t version;
  bool isWriterInProgress;
  struct ICollection * keys;
  struct ICollection * values;
  struct IEqualityComparer * _keycomparer;
  struct Object * _syncRoot;
};
struct Hashtable {
  struct Hashtable__Class *klass;
  struct MonitorData *monitor;
  struct Hashtable__Fields fields;
};
struct Hashtable_bucket {
  struct Object * key;
  struct Object * val;
  int32_t hash_coll;
};
struct Hashtable_bucket__Boxed {
  struct Hashtable_bucket__Class *klass;
  struct MonitorData *monitor;
  struct Hashtable_bucket fields;
};
struct Hashtable_bucket__Array {
  struct Hashtable_bucket__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Hashtable_bucket vector[32];
};
struct __declspec(align(8)) KeyValuePairs__Fields {
  struct Object * key;
  struct Object * value;
};
struct KeyValuePairs {
  struct KeyValuePairs__Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePairs__Fields fields;
};
struct KeyValuePairs__Array {
  struct KeyValuePairs__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePairs * vector[32];
};
enum DateTimeStyles__Enum : int32_t {
  DateTimeStyles__Enum_None = 0,
  DateTimeStyles__Enum_AllowLeadingWhite = 1,
  DateTimeStyles__Enum_AllowTrailingWhite = 2,
  DateTimeStyles__Enum_AllowInnerWhite = 4,
  DateTimeStyles__Enum_AllowWhiteSpaces = 7,
  DateTimeStyles__Enum_NoCurrentDateDefault = 8,
  DateTimeStyles__Enum_AdjustToUniversal = 16,
  DateTimeStyles__Enum_AssumeLocal = 32,
  DateTimeStyles__Enum_AssumeUniversal = 64,
  DateTimeStyles__Enum_RoundtripKind = 128,
};
struct DateTimeStyles__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeStyles__Enum value;
};
enum TokenType__Enum : int32_t {
  TokenType__Enum_NumberToken = 1,
  TokenType__Enum_YearNumberToken = 2,
  TokenType__Enum_Am = 3,
  TokenType__Enum_Pm = 4,
  TokenType__Enum_MonthToken = 5,
  TokenType__Enum_EndOfString = 6,
  TokenType__Enum_DayOfWeekToken = 7,
  TokenType__Enum_TimeZoneToken = 8,
  TokenType__Enum_EraToken = 9,
  TokenType__Enum_DateWordToken = 10,
  TokenType__Enum_UnknownToken = 11,
  TokenType__Enum_HebrewNumber = 12,
  TokenType__Enum_JapaneseEraToken = 13,
  TokenType__Enum_TEraToken = 14,
  TokenType__Enum_IgnorableSymbol = 15,
  TokenType__Enum_SEP_Unk = 256,
  TokenType__Enum_SEP_End = 512,
  TokenType__Enum_SEP_Space = 768,
  TokenType__Enum_SEP_Am = 1024,
  TokenType__Enum_SEP_Pm = 1280,
  TokenType__Enum_SEP_Date = 1536,
  TokenType__Enum_SEP_Time = 1792,
  TokenType__Enum_SEP_YearSuff = 2048,
  TokenType__Enum_SEP_MonthSuff = 2304,
  TokenType__Enum_SEP_DaySuff = 2560,
  TokenType__Enum_SEP_HourSuff = 2816,
  TokenType__Enum_SEP_MinuteSuff = 3072,
  TokenType__Enum_SEP_SecondSuff = 3328,
  TokenType__Enum_SEP_LocalTimeMark = 3584,
  TokenType__Enum_SEP_DateOrOffset = 3840,
  TokenType__Enum_RegularTokenMask = 255,
  TokenType__Enum_SeparatorTokenMask = 65280,
};
struct TokenType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TokenType__Enum value;
};
struct __declspec(align(8)) TokenHashValue__Fields {
  struct String * tokenString;
  enum TokenType__Enum tokenType;
  int32_t tokenValue;
};
struct TokenHashValue {
  struct TokenHashValue__Class *klass;
  struct MonitorData *monitor;
  struct TokenHashValue__Fields fields;
};
struct TokenHashValue__Array {
  struct TokenHashValue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TokenHashValue * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ {
  struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct CultureInfo * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ vector[32];
};
struct IEqualityComparer_1_System_Int32_ {
  struct IEqualityComparer_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields {
  struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields {
  struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
};
struct CultureInfo__Array {
  struct CultureInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CultureInfo * vector[32];
};
struct IEnumerator_1_System_Globalization_CultureInfo_ {
  struct IEnumerator_1_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Globalization_CultureInfo_ {
  struct ICollection_1_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
  int32_t key;
  struct CultureInfo * value;
};
struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Boxed {
  struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ fields;
};
struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array {
  struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Globalization_CultureInfo_ {
  struct IEnumerable_1_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Globalization_CultureInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Globalization_CultureInfo_ {
  struct Dictionary_2_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Globalization_CultureInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct CultureInfo * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields {
  struct Dictionary_2_System_String_System_Globalization_CultureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields {
  struct Dictionary_2_System_String_System_Globalization_CultureInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields fields;
};
struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
  struct String * key;
  struct CultureInfo * value;
};
struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Boxed {
  struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ fields;
};
struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array {
  struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
};
struct FieldInfo_1 {
  struct FieldInfo_1__Class *klass;
  struct MonitorData *monitor;
};
struct RuntimeFieldInfo {
  struct RuntimeFieldInfo__Class *klass;
  struct MonitorData *monitor;
};
struct RtFieldInfo {
  struct RtFieldInfo__Class *klass;
  struct MonitorData *monitor;
};
struct RuntimeFieldHandle {
  void * value;
};
struct RuntimeFieldHandle__Boxed {
  struct RuntimeFieldHandle__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeFieldHandle fields;
};
enum FieldAttributes__Enum : int32_t {
  FieldAttributes__Enum_FieldAccessMask = 7,
  FieldAttributes__Enum_PrivateScope = 0,
  FieldAttributes__Enum_Private = 1,
  FieldAttributes__Enum_FamANDAssem = 2,
  FieldAttributes__Enum_Assembly = 3,
  FieldAttributes__Enum_Family = 4,
  FieldAttributes__Enum_FamORAssem = 5,
  FieldAttributes__Enum_Public = 6,
  FieldAttributes__Enum_Static = 16,
  FieldAttributes__Enum_InitOnly = 32,
  FieldAttributes__Enum_Literal = 64,
  FieldAttributes__Enum_NotSerialized = 128,
  FieldAttributes__Enum_SpecialName = 512,
  FieldAttributes__Enum_PinvokeImpl = 8192,
  FieldAttributes__Enum_ReservedMask = 38144,
  FieldAttributes__Enum_RTSpecialName = 1024,
  FieldAttributes__Enum_HasFieldMarshal = 4096,
  FieldAttributes__Enum_HasDefault = 32768,
  FieldAttributes__Enum_HasFieldRVA = 256,
};
struct FieldAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FieldAttributes__Enum value;
};
struct __declspec(align(8)) MonoField__Fields {
  void * klass;
  struct RuntimeFieldHandle fhandle;
  struct String * name;
  struct Type * type;
  enum FieldAttributes__Enum attrs;
};
struct MonoField {
  struct MonoField__Class *klass;
  struct MonitorData *monitor;
  struct MonoField__Fields fields;
};
struct TypedReference {
  struct RuntimeTypeHandle type;
  void * Value;
  void * Type;
};
struct TypedReference__Boxed {
  struct TypedReference__Class *klass;
  struct MonitorData *monitor;
  struct TypedReference fields;
};
struct FieldInfo_1__Array {
  struct FieldInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FieldInfo_1 * vector[32];
};
struct PropertyInfo_1 {
  struct PropertyInfo_1__Class *klass;
  struct MonitorData *monitor;
};
struct RuntimePropertyInfo {
  struct RuntimePropertyInfo__Class *klass;
  struct MonitorData *monitor;
};
enum PropertyAttributes__Enum : int32_t {
  PropertyAttributes__Enum_None = 0,
  PropertyAttributes__Enum_SpecialName = 512,
  PropertyAttributes__Enum_ReservedMask = 62464,
  PropertyAttributes__Enum_RTSpecialName = 1024,
  PropertyAttributes__Enum_HasDefault = 4096,
  PropertyAttributes__Enum_Reserved2 = 8192,
  PropertyAttributes__Enum_Reserved3 = 16384,
  PropertyAttributes__Enum_Reserved4 = 32768,
};
struct PropertyAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PropertyAttributes__Enum value;
};
struct MonoPropertyInfo {
  struct Type * parent;
  struct Type * declaring_type;
  struct String * name;
  struct MethodInfo_1 * get_method;
  struct MethodInfo_1 * set_method;
  enum PropertyAttributes__Enum attrs;
};
struct MonoPropertyInfo__Boxed {
  struct MonoPropertyInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoPropertyInfo fields;
};
enum PInfo__Enum : int32_t {
  PInfo__Enum_Attributes = 1,
  PInfo__Enum_GetMethod = 2,
  PInfo__Enum_SetMethod = 4,
  PInfo__Enum_ReflectedType = 8,
  PInfo__Enum_DeclaringType = 16,
  PInfo__Enum_Name = 32,
};
struct PInfo__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PInfo__Enum value;
};
struct __declspec(align(8)) MonoProperty__Fields {
  void * klass;
  void * prop;
  struct MonoPropertyInfo info;
  enum PInfo__Enum cached;
  struct MonoProperty_GetterAdapter * cached_getter;
};
struct MonoProperty {
  struct MonoProperty__Class *klass;
  struct MonitorData *monitor;
  struct MonoProperty__Fields fields;
};
struct MethodInfo_1__Array {
  struct MethodInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MethodInfo_1 * vector[32];
};
struct MonoProperty_GetterAdapter__Fields {
  struct MulticastDelegate__Fields _;
};
struct MonoProperty_GetterAdapter {
  struct MonoProperty_GetterAdapter__Class *klass;
  struct MonitorData *monitor;
  struct MonoProperty_GetterAdapter__Fields fields;
};
struct Delegate__Array {
  struct Delegate__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Delegate * vector[32];
};
struct IAsyncResult {
  struct IAsyncResult__Class *klass;
  struct MonitorData *monitor;
};
struct AsyncCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct AsyncCallback {
  struct AsyncCallback__Class *klass;
  struct MonitorData *monitor;
  struct AsyncCallback__Fields fields;
};
struct PropertyInfo_1__Array {
  struct PropertyInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PropertyInfo_1 * vector[32];
};
enum CallingConventions__Enum : int32_t {
  CallingConventions__Enum_Standard = 1,
  CallingConventions__Enum_VarArgs = 2,
  CallingConventions__Enum_Any = 3,
  CallingConventions__Enum_HasThis = 32,
  CallingConventions__Enum_ExplicitThis = 64,
};
struct CallingConventions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CallingConventions__Enum value;
};
struct __declspec(align(8)) MethodBody__Fields {
  struct ExceptionHandlingClause__Array * clauses;
  struct LocalVariableInfo__Array * locals;
  struct Byte__Array * il;
  bool init_locals;
  int32_t sig_token;
  int32_t max_stack;
};
struct MethodBody {
  struct MethodBody__Class *klass;
  struct MonitorData *monitor;
  struct MethodBody__Fields fields;
};
enum ExceptionHandlingClauseOptions__Enum : int32_t {
  ExceptionHandlingClauseOptions__Enum_Clause = 0,
  ExceptionHandlingClauseOptions__Enum_Filter = 1,
  ExceptionHandlingClauseOptions__Enum_Finally = 2,
  ExceptionHandlingClauseOptions__Enum_Fault = 4,
};
struct ExceptionHandlingClauseOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExceptionHandlingClauseOptions__Enum value;
};
struct __declspec(align(8)) ExceptionHandlingClause__Fields {
  struct Type * catch_type;
  int32_t filter_offset;
  enum ExceptionHandlingClauseOptions__Enum flags;
  int32_t try_offset;
  int32_t try_length;
  int32_t handler_offset;
  int32_t handler_length;
};
struct ExceptionHandlingClause {
  struct ExceptionHandlingClause__Class *klass;
  struct MonitorData *monitor;
  struct ExceptionHandlingClause__Fields fields;
};
struct ExceptionHandlingClause__Array {
  struct ExceptionHandlingClause__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ExceptionHandlingClause * vector[32];
};
struct __declspec(align(8)) LocalVariableInfo__Fields {
  struct Type * type;
  bool is_pinned;
  uint16_t position;
};
struct LocalVariableInfo {
  struct LocalVariableInfo__Class *klass;
  struct MonitorData *monitor;
  struct LocalVariableInfo__Fields fields;
};
struct LocalVariableInfo__Array {
  struct LocalVariableInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocalVariableInfo * vector[32];
};
struct __declspec(align(8)) DelegateData__Fields {
  struct Type * target_type;
  struct String * method_name;
  bool curried_first_arg;
};
struct DelegateData {
  struct DelegateData__Class *klass;
  struct MonitorData *monitor;
  struct DelegateData__Fields fields;
};
struct __declspec(align(8)) Assembly__Fields {
  void * _mono_assembly;
  struct Assembly_ResolveEventHolder * resolve_event_holder;
  struct Object * _evidence;
  struct Object * _minimum;
  struct Object * _optional;
  struct Object * _refuse;
  struct Object * _granted;
  struct Object * _denied;
  bool fromByteArray;
  struct String * assemblyName;
};
struct Assembly {
  struct Assembly__Class *klass;
  struct MonitorData *monitor;
  struct Assembly__Fields fields;
};
struct Assembly_ResolveEventHolder {
  struct Assembly_ResolveEventHolder__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MarshalByRefObject__Fields {
  struct Object * _identity;
};
struct MarshalByRefObject {
  struct MarshalByRefObject__Class *klass;
  struct MonitorData *monitor;
  struct MarshalByRefObject__Fields fields;
};
struct Stream__Fields {
  struct MarshalByRefObject__Fields _;
  struct Stream_ReadWriteTask * _activeReadWriteTask;
  struct SemaphoreSlim * _asyncActiveSemaphore;
};
struct Stream {
  struct Stream__Class *klass;
  struct MonitorData *monitor;
  struct Stream__Fields fields;
};
struct __declspec(align(8)) ObjRef__Fields {
  struct IChannelInfo * channel_info;
  struct String * uri;
  struct IRemotingTypeInfo * typeInfo;
  struct IEnvoyInfo * envoyInfo;
  int32_t flags;
  struct Type * _serverType;
};
struct ObjRef {
  struct ObjRef__Class *klass;
  struct MonitorData *monitor;
  struct ObjRef__Fields fields;
};
struct IChannelInfo {
  struct IChannelInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IRemotingTypeInfo {
  struct IRemotingTypeInfo__Class *klass;
  struct MonitorData *monitor;
};
struct IEnvoyInfo {
  struct IEnvoyInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Task__Fields {
  int32_t m_taskId;
  struct Object * m_action;
  struct Object * m_stateObject;
  struct TaskScheduler * m_taskScheduler;
  struct Task * m_parent;
  int32_t m_stateFlags;
  struct Object * m_continuationObject;
  struct Task_ContingentProperties * m_contingentProperties;
};
struct Task {
  struct Task__Class *klass;
  struct MonitorData *monitor;
  struct Task__Fields fields;
};
struct Task_1_System_Int32___Fields {
  struct Task__Fields _;
  int32_t m_result;
};}