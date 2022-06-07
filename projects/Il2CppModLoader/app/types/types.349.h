namespace app {
struct JsonTextWriter__Fields {
    struct JsonWriter__Fields _;
    bool _safeAsync;
    struct TextWriter *_writer;
    struct Base64Encoder_1 *_base64Encoder;
    uint16_t _indentChar;
    int32_t _indentation;
    uint16_t _quoteChar;
    bool _quoteName;
    struct Boolean__Array *_charEscapeFlags;
    struct Char__Array *_writeBuffer;
    struct IArrayPool_1_System_Char_ *_arrayPool;
    struct Char__Array *_indentChars;
};

struct JsonTextWriter {
    struct JsonTextWriter__Class *klass;
    MonitorData *monitor;
    struct JsonTextWriter__Fields fields;
};

struct __declspec(align(8)) Base64Encoder_1__Fields {
    struct Char__Array *_charsLine;
    struct TextWriter *_writer;
    struct Byte__Array *_leftOverBytes;
    int32_t _leftOverBytesCount;
};

struct Base64Encoder_1 {
    struct Base64Encoder_1__Class *klass;
    MonitorData *monitor;
    struct Base64Encoder_1__Fields fields;
};

struct Base64Encoder_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Base64Encoder_1__StaticFields {
};

struct Base64Encoder_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Base64Encoder_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Base64Encoder_1__VTable vtable;
};

struct JsonTextWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData OnStringEscapeHandlingChanged;
    VirtualInvokeData Close;
    VirtualInvokeData WriteStartObject;
    VirtualInvokeData WriteEndObject;
    VirtualInvokeData WriteStartArray;
    VirtualInvokeData WriteEndArray;
    VirtualInvokeData WriteStartConstructor;
    VirtualInvokeData WriteEndConstructor;
    VirtualInvokeData WritePropertyName;
    VirtualInvokeData WritePropertyName_1;
    VirtualInvokeData WriteEnd;
    VirtualInvokeData WriteToken;
    VirtualInvokeData WriteEnd_1;
    VirtualInvokeData WriteIndent;
    VirtualInvokeData WriteValueDelimiter;
    VirtualInvokeData WriteIndentSpace;
    VirtualInvokeData WriteNull;
    VirtualInvokeData WriteUndefined;
    VirtualInvokeData WriteRaw;
    VirtualInvokeData WriteRawValue;
    VirtualInvokeData WriteValue;
    VirtualInvokeData WriteValue_1;
    VirtualInvokeData WriteValue_2;
    VirtualInvokeData WriteValue_3;
    VirtualInvokeData WriteValue_4;
    VirtualInvokeData WriteValue_5;
    VirtualInvokeData WriteValue_6;
    VirtualInvokeData WriteValue_7;
    VirtualInvokeData WriteValue_8;
    VirtualInvokeData WriteValue_9;
    VirtualInvokeData WriteValue_10;
    VirtualInvokeData WriteValue_11;
    VirtualInvokeData WriteValue_12;
    VirtualInvokeData WriteValue_13;
    VirtualInvokeData WriteValue_14;
    VirtualInvokeData WriteValue_15;
    VirtualInvokeData WriteValue_16;
    VirtualInvokeData WriteValue_17;
    VirtualInvokeData WriteValue_18;
    VirtualInvokeData WriteValue_19;
    VirtualInvokeData WriteValue_20;
    VirtualInvokeData WriteValue_21;
    VirtualInvokeData WriteValue_22;
    VirtualInvokeData WriteValue_23;
    VirtualInvokeData WriteValue_24;
    VirtualInvokeData WriteValue_25;
    VirtualInvokeData WriteValue_26;
    VirtualInvokeData WriteValue_27;
    VirtualInvokeData WriteValue_28;
    VirtualInvokeData WriteValue_29;
    VirtualInvokeData WriteValue_30;
    VirtualInvokeData WriteValue_31;
    VirtualInvokeData WriteValue_32;
    VirtualInvokeData WriteValue_33;
    VirtualInvokeData WriteValue_34;
    VirtualInvokeData WriteValue_35;
    VirtualInvokeData WriteValue_36;
    VirtualInvokeData WriteValue_37;
    VirtualInvokeData WriteComment;
    VirtualInvokeData Dispose;
};

struct JsonTextWriter__StaticFields {
};

struct JsonTextWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonTextWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonTextWriter__VTable vtable;
};

struct TraceJsonReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData get_TokenType;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_Depth;
    VirtualInvokeData get_Path;
    VirtualInvokeData Read;
    VirtualInvokeData ReadAsInt32;
    VirtualInvokeData ReadAsString;
    VirtualInvokeData ReadAsBytes;
    VirtualInvokeData ReadAsDouble;
    VirtualInvokeData ReadAsBoolean;
    VirtualInvokeData ReadAsDecimal;
    VirtualInvokeData ReadAsDateTime;
    VirtualInvokeData ReadAsDateTimeOffset;
    VirtualInvokeData Dispose;
    VirtualInvokeData Close;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
    VirtualInvokeData Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
};

struct TraceJsonReader__StaticFields {
};

struct TraceJsonReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceJsonReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceJsonReader__VTable vtable;
};

enum class WriteState__Enum_1 : int32_t {
    Error = 0x00000000,
    Closed = 0x00000001,
    Object = 0x00000002,
    Array = 0x00000003,
    Constructor = 0x00000004,
    Property = 0x00000005,
    Start = 0x00000006,
};

struct WriteState__Enum_1__Boxed {
    struct WriteState__Enum_1__Class *klass;
    MonitorData *monitor;
    WriteState__Enum_1 value;
    
};

struct WriteState__Enum_1__VTable {
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

struct WriteState__Enum_1__StaticFields {
};

struct WriteState__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteState__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteState__Enum_1__VTable vtable;
};

enum class PrimitiveTypeCode__Enum : int32_t {
    Empty = 0x00000000,
    Object = 0x00000001,
    Char = 0x00000002,
    CharNullable = 0x00000003,
    Boolean = 0x00000004,
    BooleanNullable = 0x00000005,
    SByte = 0x00000006,
    SByteNullable = 0x00000007,
    Int16 = 0x00000008,
    Int16Nullable = 0x00000009,
    UInt16 = 0x0000000a,
    UInt16Nullable = 0x0000000b,
    Int32 = 0x0000000c,
    Int32Nullable = 0x0000000d,
    Byte = 0x0000000e,
    ByteNullable = 0x0000000f,
    UInt32 = 0x00000010,
    UInt32Nullable = 0x00000011,
    Int64 = 0x00000012,
    Int64Nullable = 0x00000013,
    UInt64 = 0x00000014,
    UInt64Nullable = 0x00000015,
    Single = 0x00000016,
    SingleNullable = 0x00000017,
    Double = 0x00000018,
    DoubleNullable = 0x00000019,
    DateTime = 0x0000001a,
    DateTimeNullable = 0x0000001b,
    DateTimeOffset = 0x0000001c,
    DateTimeOffsetNullable = 0x0000001d,
    Decimal = 0x0000001e,
    DecimalNullable = 0x0000001f,
    Guid = 0x00000020,
    GuidNullable = 0x00000021,
    TimeSpan = 0x00000022,
    TimeSpanNullable = 0x00000023,
    BigInteger = 0x00000024,
    BigIntegerNullable = 0x00000025,
    Uri = 0x00000026,
    String = 0x00000027,
    Bytes = 0x00000028,
    DBNull = 0x00000029,
};

struct PrimitiveTypeCode__Enum__Boxed {
    struct PrimitiveTypeCode__Enum__Class *klass;
    MonitorData *monitor;
    PrimitiveTypeCode__Enum value;
    
};

struct PrimitiveTypeCode__Enum__VTable {
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

struct PrimitiveTypeCode__Enum__StaticFields {
};

struct PrimitiveTypeCode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrimitiveTypeCode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrimitiveTypeCode__Enum__VTable vtable;
};

struct PrimitiveTypeCode___VTable {
};

struct PrimitiveTypeCode___StaticFields {
};

struct PrimitiveTypeCode___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PrimitiveTypeCode___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PrimitiveTypeCode___VTable vtable;
};

struct JsonWriterException__Fields {
    struct JsonException__Fields _;
    struct String *_Path_k__BackingField;
};

struct JsonWriterException {
    struct JsonWriterException__Class *klass;
    MonitorData *monitor;
    struct JsonWriterException__Fields fields;
};

struct JsonWriterException__VTable {
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

struct JsonWriterException__StaticFields {
};

struct JsonWriterException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonWriterException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonWriterException__VTable vtable;
};

struct IList_1_System_Int32_ {
    struct IList_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct IList_1_System_Int32___VTable {
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
};

struct IList_1_System_Int32___StaticFields {
};

struct IList_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IList_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IList_1_System_Int32___VTable vtable;
};

struct __declspec(align(8)) TypeInformation_1__Fields {
    struct Type *_Type_k__BackingField;
    PrimitiveTypeCode__Enum _TypeCode_k__BackingField;
    
};

struct TypeInformation_1 {
    struct TypeInformation_1__Class *klass;
    MonitorData *monitor;
    struct TypeInformation_1__Fields fields;
};

struct TypeInformation_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TypeInformation_1__StaticFields {
};

struct TypeInformation_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeInformation_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeInformation_1__VTable vtable;
};

struct Func_2_Object_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Object_Object_ {
    struct Func_2_Object_Object___Class *klass;
    MonitorData *monitor;
    struct Func_2_Object_Object___Fields fields;
};

struct StructMultiKey_2_System_Type_System_Type_ {
    struct Type *Value1;
    struct Type *Value2;
};

struct StructMultiKey_2_System_Type_System_Type___Boxed {
    struct StructMultiKey_2_System_Type_System_Type___Class *klass;
    MonitorData *monitor;
    struct StructMultiKey_2_System_Type_System_Type_ fields;
};

struct Func_2_Object_Object___VTable {
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

struct Func_2_Object_Object___StaticFields {
};

struct Func_2_Object_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_Object_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_Object_Object___VTable vtable;
};

struct StructMultiKey_2_System_Type_System_Type___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct StructMultiKey_2_System_Type_System_Type___StaticFields {
};

struct StructMultiKey_2_System_Type_System_Type___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StructMultiKey_2_System_Type_System_Type___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StructMultiKey_2_System_Type_System_Type___VTable vtable;
};

enum class ConvertUtils_ConvertResult__Enum : int32_t {
    Success = 0x00000000,
    CannotConvertNull = 0x00000001,
    NotInstantiableType = 0x00000002,
    NoValidConversion = 0x00000003,
};

struct ConvertUtils_ConvertResult__Enum__Boxed {
    struct ConvertUtils_ConvertResult__Enum__Class *klass;
    MonitorData *monitor;
    ConvertUtils_ConvertResult__Enum value;
    
};

struct ConvertUtils_ConvertResult__Enum__VTable {
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

struct ConvertUtils_ConvertResult__Enum__StaticFields {
};

struct ConvertUtils_ConvertResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConvertUtils_ConvertResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConvertUtils_ConvertResult__Enum__VTable vtable;
};

enum class ParseResult__Enum : int32_t {
    None = 0x00000000,
    Success = 0x00000001,
    Overflow = 0x00000002,
    Invalid = 0x00000003,
};

struct ParseResult__Enum__Boxed {
    struct ParseResult__Enum__Class *klass;
    MonitorData *monitor;
    ParseResult__Enum value;
    
};

struct ParseResult__Enum__VTable {
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

struct ParseResult__Enum__StaticFields {
};

struct ParseResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParseResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParseResult__Enum__VTable vtable;
};

struct __declspec(align(8)) ConvertUtils_c_DisplayClass8_0__Fields {
    struct MethodCall_2_System_Object_System_Object_ *call;
};

struct ConvertUtils_c_DisplayClass8_0 {
    struct ConvertUtils_c_DisplayClass8_0__Class *klass;
    MonitorData *monitor;
    struct ConvertUtils_c_DisplayClass8_0__Fields fields;
};

struct MethodCall_2_System_Object_System_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct MethodCall_2_System_Object_System_Object_ {
    struct MethodCall_2_System_Object_System_Object___Class *klass;
    MonitorData *monitor;
    struct MethodCall_2_System_Object_System_Object___Fields fields;
};

struct MethodCall_2_System_Object_System_Object___VTable {
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

struct MethodCall_2_System_Object_System_Object___StaticFields {
};

struct MethodCall_2_System_Object_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodCall_2_System_Object_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodCall_2_System_Object_System_Object___VTable vtable;
};

struct ConvertUtils_c_DisplayClass8_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ConvertUtils_c_DisplayClass8_0__StaticFields {
};

struct ConvertUtils_c_DisplayClass8_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConvertUtils_c_DisplayClass8_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConvertUtils_c_DisplayClass8_0__VTable vtable;
};

enum class ParserTimeZone__Enum : int32_t {
    Unspecified = 0x00000000,
    Utc = 0x00000001,
    LocalWestOfUtc = 0x00000002,
    LocalEastOfUtc = 0x00000003,
};

struct ParserTimeZone__Enum__Boxed {
    struct ParserTimeZone__Enum__Class *klass;
    MonitorData *monitor;
    ParserTimeZone__Enum value;
    
};

struct DateTimeParser {
    int32_t Year;
    int32_t Month;
    int32_t Day;
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    int32_t Fraction;
    int32_t ZoneHour;
    int32_t ZoneMinute;
    ParserTimeZone__Enum Zone;
    
    struct Char__Array *_text;
    int32_t _end;
};

struct DateTimeParser__Boxed {
    struct DateTimeParser__Class *klass;
    MonitorData *monitor;
    struct DateTimeParser fields;
};

struct ParserTimeZone__Enum__VTable {
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

struct ParserTimeZone__Enum__StaticFields {
};

struct ParserTimeZone__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParserTimeZone__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParserTimeZone__Enum__VTable vtable;
};

struct DateTimeParser__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DateTimeParser__StaticFields {
    struct Int32__Array *Power10;
    int32_t Lzyyyy;
    int32_t Lzyyyy_;
    int32_t Lzyyyy_MM;
    int32_t Lzyyyy_MM_;
    int32_t Lzyyyy_MM_dd;
    int32_t Lzyyyy_MM_ddT;
    int32_t LzHH;
    int32_t LzHH_;
    int32_t LzHH_mm;
    int32_t LzHH_mm_;
    int32_t LzHH_mm_ss;
    int32_t Lz_;
    int32_t Lz_zz;
};

struct DateTimeParser__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeParser__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeParser__VTable vtable;
};

struct DateTimeKind___VTable {
};

struct DateTimeKind___StaticFields {
};

struct DateTimeKind___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeKind___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeKind___VTable vtable;
};

struct ReflectionDelegateFactory {
    struct ReflectionDelegateFactory__Class *klass;
    MonitorData *monitor;
};

struct DynamicReflectionDelegateFactory {
    struct DynamicReflectionDelegateFactory__Class *klass;
    MonitorData *monitor;
};

struct ReflectionDelegateFactory__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
};

struct ReflectionDelegateFactory__StaticFields {
};

struct ReflectionDelegateFactory__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionDelegateFactory__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionDelegateFactory__VTable vtable;
};

struct DynamicReflectionDelegateFactory__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateMethodCall;
    VirtualInvokeData CreateParameterizedConstructor;
    VirtualInvokeData CreateDefaultConstructor;
    VirtualInvokeData CreateGet;
    VirtualInvokeData CreateGet_1;
    VirtualInvokeData CreateSet;
    VirtualInvokeData CreateSet_1;
};

struct DynamicReflectionDelegateFactory__StaticFields {
    struct DynamicReflectionDelegateFactory *_Instance_k__BackingField;
};

struct DynamicReflectionDelegateFactory__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicReflectionDelegateFactory__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicReflectionDelegateFactory__VTable vtable;
};

struct IDynamicMetaObjectProvider {
    struct IDynamicMetaObjectProvider__Class *klass;
    MonitorData *monitor;
};

struct IDynamicMetaObjectProvider__VTable {
    VirtualInvokeData GetMetaObject;
};

struct IDynamicMetaObjectProvider__StaticFields {
};

struct IDynamicMetaObjectProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDynamicMetaObjectProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDynamicMetaObjectProvider__VTable vtable;
};

struct NoThrowExpressionVisitor {
    struct NoThrowExpressionVisitor__Class *klass;
    MonitorData *monitor;
};

struct NoThrowExpressionVisitor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Visit;
    VirtualInvokeData VisitBinary;
    VirtualInvokeData VisitBlock;
    VirtualInvokeData VisitConditional;
    VirtualInvokeData VisitConstant;
    VirtualInvokeData VisitDebugInfo;
    VirtualInvokeData VisitDefault;
    VirtualInvokeData VisitExtension;
    VirtualInvokeData VisitGoto;
    VirtualInvokeData VisitInvocation;
    VirtualInvokeData VisitLabelTarget;
    VirtualInvokeData VisitLabel;
    VirtualInvokeData VisitLambda;
    VirtualInvokeData VisitLoop;
    VirtualInvokeData VisitMember;
    VirtualInvokeData VisitIndex;
    VirtualInvokeData VisitMethodCall;
    VirtualInvokeData VisitNewArray;
    VirtualInvokeData VisitNew;
    VirtualInvokeData VisitParameter;
    VirtualInvokeData VisitRuntimeVariables;
    VirtualInvokeData VisitSwitchCase;
    VirtualInvokeData VisitSwitch;
    VirtualInvokeData VisitCatchBlock;
    VirtualInvokeData VisitTry;
    VirtualInvokeData VisitTypeBinary;
    VirtualInvokeData VisitUnary;
    VirtualInvokeData VisitMemberInit;
    VirtualInvokeData VisitListInit;
    VirtualInvokeData VisitElementInit;
    VirtualInvokeData VisitMemberBinding;
    VirtualInvokeData VisitMemberAssignment;
    VirtualInvokeData VisitMemberMemberBinding;
    VirtualInvokeData VisitMemberListBinding;
};

struct NoThrowExpressionVisitor__StaticFields {
    struct Object *ErrorResult;
};

struct NoThrowExpressionVisitor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NoThrowExpressionVisitor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NoThrowExpressionVisitor__VTable vtable;
};

struct __declspec(align(8)) EnumInfo__Fields {
    bool IsFlags;
    struct UInt64__Array *Values;
    struct String__Array *Names;
    struct String__Array *ResolvedNames;
};

struct EnumInfo {
    struct EnumInfo__Class *klass;
    MonitorData *monitor;
    struct EnumInfo__Fields fields;
};

struct EnumInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EnumInfo__StaticFields {
};

struct EnumInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnumInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnumInfo__VTable vtable;
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy_ {
    struct Type *Value1;
    struct NamingStrategy *Value2;
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___Boxed {
    struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___Class *klass;
    MonitorData *monitor;
    struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy_ fields;
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___StaticFields {
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___VTable vtable;
};

struct EnumUtils_c {
    struct EnumUtils_c__Class *klass;
    MonitorData *monitor;
};

}
