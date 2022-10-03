namespace app {
    struct NumberFormatInfo {
        struct NumberFormatInfo__Class* klass;
        MonitorData* monitor;
        struct NumberFormatInfo__Fields fields;
    };

    enum class NumberStyles__Enum : int32_t {
        None = 0x00000000,
        AllowLeadingWhite = 0x00000001,
        AllowTrailingWhite = 0x00000002,
        AllowLeadingSign = 0x00000004,
        AllowTrailingSign = 0x00000008,
        AllowParentheses = 0x00000010,
        AllowDecimalPoint = 0x00000020,
        AllowThousands = 0x00000040,
        AllowExponent = 0x00000080,
        AllowCurrencySymbol = 0x00000100,
        AllowHexSpecifier = 0x00000200,
        Integer = 0x00000007,
        HexNumber = 0x00000203,
        Number = 0x0000006f,
        Float = 0x000000a7,
        Currency = 0x0000017f,
        Any = 0x000001ff,
    };

    struct NumberStyles__Enum__Boxed {
        struct NumberStyles__Enum__Class* klass;
        MonitorData* monitor;
        NumberStyles__Enum value;
    };

    enum class DateTimeFormatFlags__Enum : int32_t {
        None = 0x00000000,
        UseGenitiveMonth = 0x00000001,
        UseLeapYearMonth = 0x00000002,
        UseSpacesInMonthNames = 0x00000004,
        UseHebrewRule = 0x00000008,
        UseSpacesInDayNames = 0x00000010,
        UseDigitPrefixInTokens = 0x00000020,
        NotInitialized = -1,
    };

    struct DateTimeFormatFlags__Enum__Boxed {
        struct DateTimeFormatFlags__Enum__Class* klass;
        MonitorData* monitor;
        DateTimeFormatFlags__Enum value;
    };

    struct __declspec(align(8)) DateTimeFormatInfo__Fields {
        struct CultureData* m_cultureData;
        struct String* m_name;
        struct String* m_langName;
        struct CompareInfo* m_compareInfo;
        struct CultureInfo* m_cultureInfo;
        struct String* amDesignator;
        struct String* pmDesignator;
        struct String* dateSeparator;
        struct String* generalShortTimePattern;
        struct String* generalLongTimePattern;
        struct String* timeSeparator;
        struct String* monthDayPattern;
        struct String* dateTimeOffsetPattern;
        struct Calendar* calendar;
        int32_t firstDayOfWeek;
        int32_t calendarWeekRule;
        struct String* fullDateTimePattern;
        struct String__Array* abbreviatedDayNames;
        struct String__Array* m_superShortDayNames;
        struct String__Array* dayNames;
        struct String__Array* abbreviatedMonthNames;
        struct String__Array* monthNames;
        struct String__Array* genitiveMonthNames;
        struct String__Array* m_genitiveAbbreviatedMonthNames;
        struct String__Array* leapYearMonthNames;
        struct String* longDatePattern;
        struct String* shortDatePattern;
        struct String* yearMonthPattern;
        struct String* longTimePattern;
        struct String* shortTimePattern;
        struct String__Array* allYearMonthPatterns;
        struct String__Array* allShortDatePatterns;
        struct String__Array* allLongDatePatterns;
        struct String__Array* allShortTimePatterns;
        struct String__Array* allLongTimePatterns;
        struct String__Array* m_eraNames;
        struct String__Array* m_abbrevEraNames;
        struct String__Array* m_abbrevEnglishEraNames;
        struct Int32__Array* optionalCalendars;
        bool m_isReadOnly;
        DateTimeFormatFlags__Enum formatFlags;

        int32_t CultureID;
        bool m_useUserOverride;
        bool bUseCalendarInfo;
        int32_t nDataItem;
        bool m_isDefaultCalendar;
        struct String__Array* m_dateWords;
        struct String* m_fullTimeSpanPositivePattern;
        struct String* m_fullTimeSpanNegativePattern;
        struct TokenHashValue__Array* m_dtfiTokenHash;
    };

    struct DateTimeFormatInfo {
        struct DateTimeFormatInfo__Class* klass;
        MonitorData* monitor;
        struct DateTimeFormatInfo__Fields fields;
    };

    struct __declspec(align(8)) CultureData__Fields {
        struct String* sAM1159;
        struct String* sPM2359;
        struct String* sTimeSeparator;
        struct String__Array* saLongTimes;
        struct String__Array* saShortTimes;
        int32_t iFirstDayOfWeek;
        int32_t iFirstWeekOfYear;
        struct Int32__Array* waCalendars;
        struct CalendarData__Array* calendars;
        struct String* sISO639Language;
        struct String* sRealName;
        bool bUseOverrides;
        int32_t calendarId;
        int32_t numberIndex;
        int32_t iDefaultAnsiCodePage;
        int32_t iDefaultOemCodePage;
        int32_t iDefaultMacCodePage;
        int32_t iDefaultEbcdicCodePage;
        bool isRightToLeft;
        struct String* sListSeparator;
    };

    struct CultureData {
        struct CultureData__Class* klass;
        MonitorData* monitor;
        struct CultureData__Fields fields;
    };

    struct __declspec(align(8)) CalendarData__Fields {
        struct String* sNativeName;
        struct String__Array* saShortDates;
        struct String__Array* saYearMonths;
        struct String__Array* saLongDates;
        struct String* sMonthDay;
        struct String__Array* saEraNames;
        struct String__Array* saAbbrevEraNames;
        struct String__Array* saAbbrevEnglishEraNames;
        struct String__Array* saDayNames;
        struct String__Array* saAbbrevDayNames;
        struct String__Array* saSuperShortDayNames;
        struct String__Array* saMonthNames;
        struct String__Array* saAbbrevMonthNames;
        struct String__Array* saMonthGenitiveNames;
        struct String__Array* saAbbrevMonthGenitiveNames;
        struct String__Array* saLeapYearMonthNames;
        int32_t iTwoDigitYearMax;
        int32_t iCurrentEra;
        bool bUseUserOverrides;
    };

    struct CalendarData {
        struct CalendarData__Class* klass;
        MonitorData* monitor;
        struct CalendarData__Fields fields;
    };

    struct CalendarData__Array {
        struct CalendarData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CalendarData* vector[32];
    };

    struct __declspec(align(8)) CompareInfo__Fields {
        struct String* m_name;
        struct String* m_sortName;
        int32_t win32LCID;
        int32_t culture;
        struct SortVersion* m_SortVersion;
        struct SimpleCollator* collator;
    };

    struct CompareInfo {
        struct CompareInfo__Class* klass;
        MonitorData* monitor;
        struct CompareInfo__Fields fields;
    };

    enum class CompareOptions__Enum : int32_t {
        None = 0x00000000,
        IgnoreCase = 0x00000001,
        IgnoreNonSpace = 0x00000002,
        IgnoreSymbols = 0x00000004,
        IgnoreKanaType = 0x00000008,
        IgnoreWidth = 0x00000010,
        OrdinalIgnoreCase = 0x10000000,
        StringSort = 0x20000000,
        Ordinal = 0x40000000,
    };

    struct CompareOptions__Enum__Boxed {
        struct CompareOptions__Enum__Class* klass;
        MonitorData* monitor;
        CompareOptions__Enum value;
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
        struct Guid__Class* klass;
        MonitorData* monitor;
        struct Guid fields;
    };

    struct __declspec(align(8)) SortVersion__Fields {
        int32_t m_NlsVersion;
        struct Guid m_SortId;
    };

    struct SortVersion {
        struct SortVersion__Class* klass;
        MonitorData* monitor;
        struct SortVersion__Fields fields;
    };

    struct RandomNumberGenerator {
        struct RandomNumberGenerator__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) RNGCryptoServiceProvider__Fields {
        void* _handle;
    };

    struct RNGCryptoServiceProvider {
        struct RNGCryptoServiceProvider__Class* klass;
        MonitorData* monitor;
        struct RNGCryptoServiceProvider__Fields fields;
    };

    struct __declspec(align(8)) SimpleCollator__Fields {
        struct TextInfo* textInfo;
        struct CodePointIndexer* cjkIndexer;
        struct Contraction__Array* contractions;
        struct Level2Map__Array* level2Maps;
        struct Byte__Array* unsafeFlags;
        uint8_t* cjkCatTable;
        uint8_t* cjkLv1Table;
        uint8_t* cjkLv2Table;
        struct CodePointIndexer* cjkLv2Indexer;
        int32_t lcid;
        bool frenchSort;
    };

    struct SimpleCollator {
        struct SimpleCollator__Class* klass;
        MonitorData* monitor;
        struct SimpleCollator__Fields fields;
    };

    struct Nullable_1_Boolean_ {
        bool value;
        bool has_value;
    };

    struct Nullable_1_Boolean___Boxed {
        struct Nullable_1_Boolean___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_Boolean_ fields;
    };

    struct __declspec(align(8)) TextInfo__Fields {
        struct String* m_listSeparator;
        bool m_isReadOnly;
        struct String* m_cultureName;
        struct CultureData* m_cultureData;
        struct String* m_textInfoName;
        struct Nullable_1_Boolean_ m_IsAsciiCasingSameAsInvariant;
        struct String* customCultureName;
        int32_t m_nDataItem;
        bool m_useUserOverride;
        int32_t m_win32LangID;
    };

    struct TextInfo {
        struct TextInfo__Class* klass;
        MonitorData* monitor;
        struct TextInfo__Fields fields;
    };

    struct __declspec(align(8)) CodePointIndexer__Fields {
        struct CodePointIndexer_TableRange__Array* ranges;
        int32_t TotalCount;
        int32_t defaultIndex;
        int32_t defaultCP;
    };

    struct CodePointIndexer {
        struct CodePointIndexer__Class* klass;
        MonitorData* monitor;
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
        struct CodePointIndexer_TableRange__Class* klass;
        MonitorData* monitor;
        struct CodePointIndexer_TableRange fields;
    };

    struct CodePointIndexer_TableRange__Array {
        struct CodePointIndexer_TableRange__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CodePointIndexer_TableRange vector[32];
    };

    struct __declspec(align(8)) Contraction__Fields {
        int32_t Index;
        struct Char__Array* Source;
        struct String* Replacement;
        struct Byte__Array* SortKey;
    };

    struct Contraction {
        struct Contraction__Class* klass;
        MonitorData* monitor;
        struct Contraction__Fields fields;
    };

    struct Contraction__Array {
        struct Contraction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Contraction* vector[32];
    };

    struct __declspec(align(8)) Level2Map__Fields {
        uint8_t Source;
        uint8_t Replace;
    };

    struct Level2Map {
        struct Level2Map__Class* klass;
        MonitorData* monitor;
        struct Level2Map__Fields fields;
    };

    struct Level2Map__Array {
        struct Level2Map__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Level2Map* vector[32];
    };

    struct BytePtr {
        struct BytePtr__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct SimpleCollator* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
        struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields {
        struct Dictionary_2_System_String_Mono_Globalization_Unicode_SimpleCollator_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Mono_Globalization_Unicode_SimpleCollator___Fields fields;
    };

    struct SimpleCollator__Array {
        struct SimpleCollator__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SimpleCollator* vector[32];
    };

    struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator_ {
        struct IEnumerator_1_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator_ {
        struct ICollection_1_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        struct String* key;
        struct SimpleCollator* value;
    };

    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Boxed {
        struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ fields;
    };

    struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array {
        struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator_ {
        struct IEnumerable_1_Mono_Globalization_Unicode_SimpleCollator___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SortKey__Fields {
        struct String* source;
        struct Byte__Array* key;
        CompareOptions__Enum options;

        int32_t lcid;
    };

    struct SortKey {
        struct SortKey__Class* klass;
        MonitorData* monitor;
        struct SortKey__Fields fields;
    };

    struct __declspec(align(8)) Calendar__Fields {
        int32_t m_currentEraValue;
        bool m_isReadOnly;
        int32_t twoDigitYearMax;
    };

    struct Calendar {
        struct Calendar__Class* klass;
        MonitorData* monitor;
        struct Calendar__Fields fields;
    };

    enum class GregorianCalendarTypes__Enum : int32_t {
        Localized = 0x00000001,
        USEnglish = 0x00000002,
        MiddleEastFrench = 0x00000009,
        Arabic = 0x0000000a,
        TransliteratedEnglish = 0x0000000b,
        TransliteratedFrench = 0x0000000c,
    };

    struct GregorianCalendarTypes__Enum__Boxed {
        struct GregorianCalendarTypes__Enum__Class* klass;
        MonitorData* monitor;
        GregorianCalendarTypes__Enum value;
    };

    struct GregorianCalendar__Fields {
        struct Calendar__Fields _;
        GregorianCalendarTypes__Enum m_type;
    };

    struct GregorianCalendar {
        struct GregorianCalendar__Class* klass;
        MonitorData* monitor;
        struct GregorianCalendar__Fields fields;
    };

    enum class DayOfWeek__Enum : int32_t {
        Sunday = 0x00000000,
        Monday = 0x00000001,
        Tuesday = 0x00000002,
        Wednesday = 0x00000003,
        Thursday = 0x00000004,
        Friday = 0x00000005,
        Saturday = 0x00000006,
    };

    struct DayOfWeek__Enum__Boxed {
        struct DayOfWeek__Enum__Class* klass;
        MonitorData* monitor;
        DayOfWeek__Enum value;
    };

    struct __declspec(align(8)) Hashtable__Fields {
        struct Hashtable_bucket__Array* buckets;
        int32_t count;
        int32_t occupancy;
        int32_t loadsize;
        float loadFactor;
        int32_t version;
        bool isWriterInProgress;
        struct ICollection* keys;
        struct ICollection* values;
        struct IEqualityComparer* _keycomparer;
        struct Object* _syncRoot;
    };

    struct Hashtable {
        struct Hashtable__Class* klass;
        MonitorData* monitor;
        struct Hashtable__Fields fields;
    };

    struct Hashtable_bucket {
        struct Object* key;
        struct Object* val;
        int32_t hash_coll;
    };

    struct Hashtable_bucket__Boxed {
        struct Hashtable_bucket__Class* klass;
        MonitorData* monitor;
        struct Hashtable_bucket fields;
    };

    struct Hashtable_bucket__Array {
        struct Hashtable_bucket__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Hashtable_bucket vector[32];
    };

    struct __declspec(align(8)) KeyValuePairs__Fields {
        struct Object* key;
        struct Object* value;
    };

    struct KeyValuePairs {
        struct KeyValuePairs__Class* klass;
        MonitorData* monitor;
        struct KeyValuePairs__Fields fields;
    };

    struct KeyValuePairs__Array {
        struct KeyValuePairs__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePairs* vector[32];
    };

    enum class DateTimeStyles__Enum : int32_t {
        None = 0x00000000,
        AllowLeadingWhite = 0x00000001,
        AllowTrailingWhite = 0x00000002,
        AllowInnerWhite = 0x00000004,
        AllowWhiteSpaces = 0x00000007,
        NoCurrentDateDefault = 0x00000008,
        AdjustToUniversal = 0x00000010,
        AssumeLocal = 0x00000020,
        AssumeUniversal = 0x00000040,
        RoundtripKind = 0x00000080,
    };

    struct DateTimeStyles__Enum__Boxed {
        struct DateTimeStyles__Enum__Class* klass;
        MonitorData* monitor;
        DateTimeStyles__Enum value;
    };

    enum class TokenType__Enum : int32_t {
        NumberToken = 0x00000001,
        YearNumberToken = 0x00000002,
        Am = 0x00000003,
        Pm = 0x00000004,
        MonthToken = 0x00000005,
        EndOfString = 0x00000006,
        DayOfWeekToken = 0x00000007,
        TimeZoneToken = 0x00000008,
        EraToken = 0x00000009,
        DateWordToken = 0x0000000a,
        UnknownToken = 0x0000000b,
        HebrewNumber = 0x0000000c,
        JapaneseEraToken = 0x0000000d,
        TEraToken = 0x0000000e,
        IgnorableSymbol = 0x0000000f,
        SEP_Unk = 0x00000100,
        SEP_End = 0x00000200,
        SEP_Space = 0x00000300,
        SEP_Am = 0x00000400,
        SEP_Pm = 0x00000500,
        SEP_Date = 0x00000600,
        SEP_Time = 0x00000700,
        SEP_YearSuff = 0x00000800,
        SEP_MonthSuff = 0x00000900,
        SEP_DaySuff = 0x00000a00,
        SEP_HourSuff = 0x00000b00,
        SEP_MinuteSuff = 0x00000c00,
        SEP_SecondSuff = 0x00000d00,
        SEP_LocalTimeMark = 0x00000e00,
        SEP_DateOrOffset = 0x00000f00,
        RegularTokenMask = 0x000000ff,
        SeparatorTokenMask = 0x0000ff00,
    };

    struct TokenType__Enum__Boxed {
        struct TokenType__Enum__Class* klass;
        MonitorData* monitor;
        TokenType__Enum value;
    };

    struct __declspec(align(8)) TokenHashValue__Fields {
        struct String* tokenString;
        TokenType__Enum tokenType;

        int32_t tokenValue;
    };

    struct TokenHashValue {
        struct TokenHashValue__Class* klass;
        MonitorData* monitor;
        struct TokenHashValue__Fields fields;
    };

    struct TokenHashValue__Array {
        struct TokenHashValue__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TokenHashValue* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_ {
        struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_System_Globalization_CultureInfo___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct CultureInfo* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Globalization_CultureInfo_ vector[32];
    };

    struct IEqualityComparer_1_System_Int32_ {
        struct IEqualityComparer_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields {
        struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields {
        struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Globalization_CultureInfo___Fields fields;
    };

    struct CultureInfo__Array {
        struct CultureInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CultureInfo* vector[32];
    };

    struct IEnumerator_1_System_Globalization_CultureInfo_ {
        struct IEnumerator_1_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Globalization_CultureInfo_ {
        struct ICollection_1_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
        int32_t key;
        struct CultureInfo* value;
    };

    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Boxed {
        struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ fields;
    };

    struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array {
        struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Globalization_CultureInfo_ {
        struct IEnumerable_1_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Globalization_CultureInfo___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Globalization_CultureInfo_ {
        struct Dictionary_2_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Globalization_CultureInfo___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct CultureInfo* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Globalization_CultureInfo_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields {
        struct Dictionary_2_System_String_System_Globalization_CultureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Globalization_CultureInfo___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields {
        struct Dictionary_2_System_String_System_Globalization_CultureInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Globalization_CultureInfo___Fields fields;
    };

    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
        struct String* key;
        struct CultureInfo* value;
    };

    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Boxed {
        struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ fields;
    };

    struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array {
        struct KeyValuePair_2_System_String_System_Globalization_CultureInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Globalization_CultureInfo_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Globalization_CultureInfo___Class* klass;
        MonitorData* monitor;
    };

    struct FieldInfo_1 {
        struct FieldInfo_1__Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeFieldInfo {
        struct RuntimeFieldInfo__Class* klass;
        MonitorData* monitor;
    };

    struct RtFieldInfo {
        struct RtFieldInfo__Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeFieldHandle {
        void* value;
    };

    struct RuntimeFieldHandle__Boxed {
        struct RuntimeFieldHandle__Class* klass;
        MonitorData* monitor;
        struct RuntimeFieldHandle fields;
    };

    enum class FieldAttributes__Enum : int32_t {
        FieldAccessMask = 0x00000007,
        PrivateScope = 0x00000000,
        Private = 0x00000001,
        FamANDAssem = 0x00000002,
        Assembly = 0x00000003,
        Family = 0x00000004,
        FamORAssem = 0x00000005,
        Public = 0x00000006,
        Static = 0x00000010,
        InitOnly = 0x00000020,
        Literal = 0x00000040,
        NotSerialized = 0x00000080,
        SpecialName = 0x00000200,
        PinvokeImpl = 0x00002000,
        ReservedMask = 0x00009500,
        RTSpecialName = 0x00000400,
        HasFieldMarshal = 0x00001000,
        HasDefault = 0x00008000,
        HasFieldRVA = 0x00000100,
    };

    struct FieldAttributes__Enum__Boxed {
        struct FieldAttributes__Enum__Class* klass;
        MonitorData* monitor;
        FieldAttributes__Enum value;
    };

    struct __declspec(align(8)) MonoField__Fields {
        void* klass;
        struct RuntimeFieldHandle fhandle;
        struct String* name;
        struct Type* type;
        FieldAttributes__Enum attrs;
    };

    struct MonoField {
        struct MonoField__Class* klass;
        MonitorData* monitor;
        struct MonoField__Fields fields;
    };

    struct TypedReference {
        struct RuntimeTypeHandle type;
        void* Value;
        void* Type;
    };

    struct TypedReference__Boxed {
        struct TypedReference__Class* klass;
        MonitorData* monitor;
        struct TypedReference fields;
    };

    struct FieldInfo_1__Array {
        struct FieldInfo_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FieldInfo_1* vector[32];
    };

    struct PropertyInfo_1 {
        struct PropertyInfo_1__Class* klass;
        MonitorData* monitor;
    };

    struct RuntimePropertyInfo {
        struct RuntimePropertyInfo__Class* klass;
        MonitorData* monitor;
    };

} // namespace app
