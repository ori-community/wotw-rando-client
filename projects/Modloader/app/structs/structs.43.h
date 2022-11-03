namespace app {
    struct MonthNameStyles__Enum__StaticFields {
    };

    struct MonthNameStyles__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonthNameStyles__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonthNameStyles__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_String_ {
        struct Dictionary_2_System_String_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___Fields {
        struct Dictionary_2_System_String_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___Fields {
        struct Dictionary_2_System_String_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___Fields fields;
    };

    struct KeyValuePair_2_System_String_System_String_ {
        struct String* key;
        struct String* value;
    };

    struct KeyValuePair_2_System_String_System_String___Boxed {
        struct KeyValuePair_2_System_String_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_String_ fields;
    };

    struct KeyValuePair_2_System_String_System_String___Array {
        struct KeyValuePair_2_System_String_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_String___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_System_String___StaticFields {
    };

    struct KeyValuePair_2_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_String___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_String___Array__VTable {
    };

    struct KeyValuePair_2_System_String_System_String___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_String___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_String___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_String___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_String___VTable vtable;
    };

    struct Dictionary_2_System_String_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_System_String_System_String___StaticFields {
    };

    struct Dictionary_2_System_String_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_System_String___VTable vtable;
    };

    enum class DateTimeFormatInfoScanner_FoundDatePattern__Enum : int32_t {
        None = 0x00000000,
        FoundYearPatternFlag = 0x00000001,
        FoundMonthPatternFlag = 0x00000002,
        FoundDayPatternFlag = 0x00000004,
        FoundYMDPatternFlag = 0x00000007,
    };

    struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__Boxed {
        struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class* klass;
        MonitorData* monitor;
        DateTimeFormatInfoScanner_FoundDatePattern__Enum value;
    };

    struct __declspec(align(8)) DateTimeFormatInfoScanner__Fields {
        struct List_1_System_String_* m_dateWords;
        DateTimeFormatInfoScanner_FoundDatePattern__Enum m_ymdFlags;
    };

    struct DateTimeFormatInfoScanner {
        struct DateTimeFormatInfoScanner__Class* klass;
        MonitorData* monitor;
        struct DateTimeFormatInfoScanner__Fields fields;
    };

    struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__VTable {
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

    struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__StaticFields {
    };

    struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeFormatInfoScanner_FoundDatePattern__Enum__VTable vtable;
    };

    struct DateTimeFormatInfoScanner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DateTimeFormatInfoScanner__StaticFields {
        struct Dictionary_2_System_String_System_String_* s_knownWords;
    };

    struct DateTimeFormatInfoScanner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeFormatInfoScanner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeFormatInfoScanner__VTable vtable;
    };

    enum class FORMATFLAGS__Enum : int32_t {
        None = 0x00000000,
        UseGenitiveMonth = 0x00000001,
        UseLeapYearMonth = 0x00000002,
        UseSpacesInMonthNames = 0x00000004,
        UseHebrewParsing = 0x00000008,
        UseSpacesInDayNames = 0x00000010,
        UseDigitPrefixInTokens = 0x00000020,
    };

    struct FORMATFLAGS__Enum__Boxed {
        struct FORMATFLAGS__Enum__Class* klass;
        MonitorData* monitor;
        FORMATFLAGS__Enum value;
    };

    struct FORMATFLAGS__Enum__VTable {
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

    struct FORMATFLAGS__Enum__StaticFields {
    };

    struct FORMATFLAGS__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FORMATFLAGS__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FORMATFLAGS__Enum__VTable vtable;
    };

    struct __declspec(align(8)) EraInfo__Fields {
        int32_t era;
        int64_t ticks;
        int32_t yearOffset;
        int32_t minEraYear;
        int32_t maxEraYear;
        struct String* eraName;
        struct String* abbrevEraName;
        struct String* englishEraName;
    };

    struct EraInfo {
        struct EraInfo__Class* klass;
        MonitorData* monitor;
        struct EraInfo__Fields fields;
    };

    struct EraInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EraInfo__StaticFields {
    };

    struct EraInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EraInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EraInfo__VTable vtable;
    };

    struct __declspec(align(8)) GregorianCalendarHelper__Fields {
        int32_t m_maxYear;
        int32_t m_minYear;
        struct Calendar* m_Cal;
        struct EraInfo__Array* m_EraInfo;
        struct Int32__Array* m_eras;
        struct DateTime m_minDate;
    };

    struct GregorianCalendarHelper {
        struct GregorianCalendarHelper__Class* klass;
        MonitorData* monitor;
        struct GregorianCalendarHelper__Fields fields;
    };

    struct EraInfo__Array {
        struct EraInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EraInfo* vector[32];
    };

    struct EraInfo__Array__VTable {
    };

    struct EraInfo__Array__StaticFields {
    };

    struct EraInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EraInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EraInfo__Array__VTable vtable;
    };

    struct GregorianCalendarHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetDatePart;
    };

    struct GregorianCalendarHelper__StaticFields {
        struct Int32__Array* DaysToMonth365;
        struct Int32__Array* DaysToMonth366;
    };

    struct GregorianCalendarHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GregorianCalendarHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GregorianCalendarHelper__VTable vtable;
    };

    enum class HebrewNumber_HS__Enum : int32_t {
        _err = -1,
        Start = 0x00000000,
        S400 = 0x00000001,
        S400_400 = 0x00000002,
        S400_X00 = 0x00000003,
        S400_X0 = 0x00000004,
        X00_DQ = 0x00000005,
        S400_X00_X0 = 0x00000006,
        X0_DQ = 0x00000007,
        X = 0x00000008,
        X0 = 0x00000009,
        X00 = 0x0000000a,
        S400_DQ = 0x0000000b,
        S400_400_DQ = 0x0000000c,
        S400_400_100 = 0x0000000d,
        S9 = 0x0000000e,
        X00_S9 = 0x0000000f,
        S9_DQ = 0x00000010,
        END = 0x00000064,
    };

    struct HebrewNumber_HS__Enum__Boxed {
        struct HebrewNumber_HS__Enum__Class* klass;
        MonitorData* monitor;
        HebrewNumber_HS__Enum value;
    };

    struct HebrewNumberParsingContext {
        HebrewNumber_HS__Enum state;

        int32_t result;
    };

    struct HebrewNumberParsingContext__Boxed {
        struct HebrewNumberParsingContext__Class* klass;
        MonitorData* monitor;
        struct HebrewNumberParsingContext fields;
    };

    struct HebrewNumber_HS__Enum__VTable {
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

    struct HebrewNumber_HS__Enum__StaticFields {
    };

    struct HebrewNumber_HS__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumber_HS__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumber_HS__Enum__VTable vtable;
    };

    struct HebrewNumberParsingContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HebrewNumberParsingContext__StaticFields {
    };

    struct HebrewNumberParsingContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumberParsingContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumberParsingContext__VTable vtable;
    };

    enum class HebrewNumberParsingState__Enum : int32_t {
        InvalidHebrewNumber = 0x00000000,
        NotHebrewDigit = 0x00000001,
        FoundEndOfHebrewNumber = 0x00000002,
        ContinueParsing = 0x00000003,
    };

    struct HebrewNumberParsingState__Enum__Boxed {
        struct HebrewNumberParsingState__Enum__Class* klass;
        MonitorData* monitor;
        HebrewNumberParsingState__Enum value;
    };

    struct HebrewNumberParsingState__Enum__VTable {
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

    struct HebrewNumberParsingState__Enum__StaticFields {
    };

    struct HebrewNumberParsingState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumberParsingState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumberParsingState__Enum__VTable vtable;
    };

    struct HebrewNumberParsingContext___VTable {
    };

    struct HebrewNumberParsingContext___StaticFields {
    };

    struct HebrewNumberParsingContext___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumberParsingContext___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumberParsingContext___VTable vtable;
    };

    enum class HebrewNumber_HebrewToken__Enum : int32_t {
        Invalid = -1,
        Digit400 = 0x00000000,
        Digit200_300 = 0x00000001,
        Digit100 = 0x00000002,
        Digit10 = 0x00000003,
        Digit1 = 0x00000004,
        Digit6_7 = 0x00000005,
        Digit7 = 0x00000006,
        Digit9 = 0x00000007,
        SingleQuote = 0x00000008,
        DoubleQuote = 0x00000009,
    };

    struct HebrewNumber_HebrewToken__Enum__Boxed {
        struct HebrewNumber_HebrewToken__Enum__Class* klass;
        MonitorData* monitor;
        HebrewNumber_HebrewToken__Enum value;
    };

    struct __declspec(align(8)) HebrewNumber_HebrewValue__Fields {
        HebrewNumber_HebrewToken__Enum token;

        int32_t value;
    };

    struct HebrewNumber_HebrewValue {
        struct HebrewNumber_HebrewValue__Class* klass;
        MonitorData* monitor;
        struct HebrewNumber_HebrewValue__Fields fields;
    };

    struct HebrewNumber_HebrewToken__Enum__VTable {
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

    struct HebrewNumber_HebrewToken__Enum__StaticFields {
    };

    struct HebrewNumber_HebrewToken__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumber_HebrewToken__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumber_HebrewToken__Enum__VTable vtable;
    };

    struct HebrewNumber_HebrewValue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HebrewNumber_HebrewValue__StaticFields {
    };

    struct HebrewNumber_HebrewValue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HebrewNumber_HebrewValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HebrewNumber_HebrewValue__VTable vtable;
    };

    struct JapaneseCalendar__Fields {
        struct Calendar__Fields _;
        struct GregorianCalendarHelper* helper;
    };

    struct JapaneseCalendar {
        struct JapaneseCalendar__Class* klass;
        MonitorData* monitor;
        struct JapaneseCalendar__Fields fields;
    };

    struct JapaneseCalendar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData get_MinSupportedDateTime;
        VirtualInvokeData get_MaxSupportedDateTime;
        VirtualInvokeData get_ID;
        VirtualInvokeData get_BaseCalendarID;
        VirtualInvokeData Clone_1;
        VirtualInvokeData get_CurrentEraValue;
        VirtualInvokeData GetDayOfMonth;
        VirtualInvokeData GetDayOfWeek;
        VirtualInvokeData GetDaysInMonth;
        VirtualInvokeData GetEra;
        VirtualInvokeData get_Eras;
        VirtualInvokeData GetMonth;
        VirtualInvokeData GetMonthsInYear;
        VirtualInvokeData GetYear;
        VirtualInvokeData IsLeapYear;
        VirtualInvokeData IsLeapYear_1;
        VirtualInvokeData ToDateTime;
        VirtualInvokeData ToDateTime_1;
        VirtualInvokeData TryToDateTime;
        VirtualInvokeData IsValidYear;
        VirtualInvokeData IsValidMonth;
        VirtualInvokeData IsValidDay;
        VirtualInvokeData get_TwoDigitYearMax;
        VirtualInvokeData ToFourDigitYear;
    };

    struct JapaneseCalendar__StaticFields {
        struct DateTime calendarMinValue;
        struct EraInfo__Array* japaneseEraInfo;
        struct Calendar* s_defaultInstance;
    };

    struct JapaneseCalendar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JapaneseCalendar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JapaneseCalendar__VTable vtable;
    };

    struct TaiwanCalendar__Fields {
        struct Calendar__Fields _;
        struct GregorianCalendarHelper* helper;
    };

    struct TaiwanCalendar {
        struct TaiwanCalendar__Class* klass;
        MonitorData* monitor;
        struct TaiwanCalendar__Fields fields;
    };

    struct TaiwanCalendar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData get_MinSupportedDateTime;
        VirtualInvokeData get_MaxSupportedDateTime;
        VirtualInvokeData get_ID;
        VirtualInvokeData get_BaseCalendarID;
        VirtualInvokeData Clone_1;
        VirtualInvokeData get_CurrentEraValue;
        VirtualInvokeData GetDayOfMonth;
        VirtualInvokeData GetDayOfWeek;
        VirtualInvokeData GetDaysInMonth;
        VirtualInvokeData GetEra;
        VirtualInvokeData get_Eras;
        VirtualInvokeData GetMonth;
        VirtualInvokeData GetMonthsInYear;
        VirtualInvokeData GetYear;
        VirtualInvokeData IsLeapYear;
        VirtualInvokeData IsLeapYear_1;
        VirtualInvokeData ToDateTime;
        VirtualInvokeData ToDateTime_1;
        VirtualInvokeData TryToDateTime;
        VirtualInvokeData IsValidYear;
        VirtualInvokeData IsValidMonth;
        VirtualInvokeData IsValidDay;
        VirtualInvokeData get_TwoDigitYearMax;
        VirtualInvokeData ToFourDigitYear;
    };

    struct TaiwanCalendar__StaticFields {
        struct EraInfo__Array* taiwanEraInfo;
        struct Calendar* s_defaultInstance;
        struct DateTime calendarMinValue;
    };

    struct TaiwanCalendar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaiwanCalendar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaiwanCalendar__VTable vtable;
    };

    enum class TimeSpanFormat_Pattern__Enum : int32_t {
        None = 0x00000000,
        Minimum = 0x00000001,
        Full = 0x00000002,
    };

    struct TimeSpanFormat_Pattern__Enum__Boxed {
        struct TimeSpanFormat_Pattern__Enum__Class* klass;
        MonitorData* monitor;
        TimeSpanFormat_Pattern__Enum value;
    };

    struct TimeSpanFormat_Pattern__Enum__VTable {
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

    struct TimeSpanFormat_Pattern__Enum__StaticFields {
    };

    struct TimeSpanFormat_Pattern__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeSpanFormat_Pattern__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeSpanFormat_Pattern__Enum__VTable vtable;
    };

    struct TimeSpanFormat_FormatLiterals {
        struct String* AppCompatLiteral;
        int32_t dd;
        int32_t hh;
        int32_t mm;
        int32_t ss;
        int32_t ff;
        struct String__Array* literals;
    };

    struct TimeSpanFormat_FormatLiterals__Boxed {
        struct TimeSpanFormat_FormatLiterals__Class* klass;
        MonitorData* monitor;
        struct TimeSpanFormat_FormatLiterals fields;
    };

    struct TimeSpanFormat_FormatLiterals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeSpanFormat_FormatLiterals__StaticFields {
    };

    struct TimeSpanFormat_FormatLiterals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeSpanFormat_FormatLiterals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeSpanFormat_FormatLiterals__VTable vtable;
    };

    enum class TimeSpanParse_TTT__Enum : int32_t {
        None = 0x00000000,
        End = 0x00000001,
        Num = 0x00000002,
        Sep = 0x00000003,
        NumOverflow = 0x00000004,
    };

} // namespace app
