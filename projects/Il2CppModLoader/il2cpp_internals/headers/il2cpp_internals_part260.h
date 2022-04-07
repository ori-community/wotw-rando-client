namespace app {
struct __declspec(align(8)) Base64Encoder_1__Fields {
  struct Char__Array * _charsLine;
  struct TextWriter * _writer;
  struct Byte__Array * _leftOverBytes;
  int32_t _leftOverBytesCount;
};
struct Base64Encoder_1 {
  struct Base64Encoder_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Base64Encoder_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonTextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TraceJsonReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TraceJsonReader__VTable vtable;
};

enum WriteState__Enum_1 : int32_t {
  WriteState__Enum_1_Error = 0,
  WriteState__Enum_1_Closed = 1,
  WriteState__Enum_1_Object = 2,
  WriteState__Enum_1_Array = 3,
  WriteState__Enum_1_Constructor = 4,
  WriteState__Enum_1_Property = 5,
  WriteState__Enum_1_Start = 6,
};
struct WriteState__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WriteState__Enum_1 value;
};

enum PrimitiveTypeCode__Enum : int32_t {
  PrimitiveTypeCode__Enum_Empty = 0,
  PrimitiveTypeCode__Enum_Object = 1,
  PrimitiveTypeCode__Enum_Char = 2,
  PrimitiveTypeCode__Enum_CharNullable = 3,
  PrimitiveTypeCode__Enum_Boolean = 4,
  PrimitiveTypeCode__Enum_BooleanNullable = 5,
  PrimitiveTypeCode__Enum_SByte = 6,
  PrimitiveTypeCode__Enum_SByteNullable = 7,
  PrimitiveTypeCode__Enum_Int16 = 8,
  PrimitiveTypeCode__Enum_Int16Nullable = 9,
  PrimitiveTypeCode__Enum_UInt16 = 10,
  PrimitiveTypeCode__Enum_UInt16Nullable = 11,
  PrimitiveTypeCode__Enum_Int32 = 12,
  PrimitiveTypeCode__Enum_Int32Nullable = 13,
  PrimitiveTypeCode__Enum_Byte = 14,
  PrimitiveTypeCode__Enum_ByteNullable = 15,
  PrimitiveTypeCode__Enum_UInt32 = 16,
  PrimitiveTypeCode__Enum_UInt32Nullable = 17,
  PrimitiveTypeCode__Enum_Int64 = 18,
  PrimitiveTypeCode__Enum_Int64Nullable = 19,
  PrimitiveTypeCode__Enum_UInt64 = 20,
  PrimitiveTypeCode__Enum_UInt64Nullable = 21,
  PrimitiveTypeCode__Enum_Single = 22,
  PrimitiveTypeCode__Enum_SingleNullable = 23,
  PrimitiveTypeCode__Enum_Double = 24,
  PrimitiveTypeCode__Enum_DoubleNullable = 25,
  PrimitiveTypeCode__Enum_DateTime = 26,
  PrimitiveTypeCode__Enum_DateTimeNullable = 27,
  PrimitiveTypeCode__Enum_DateTimeOffset = 28,
  PrimitiveTypeCode__Enum_DateTimeOffsetNullable = 29,
  PrimitiveTypeCode__Enum_Decimal = 30,
  PrimitiveTypeCode__Enum_DecimalNullable = 31,
  PrimitiveTypeCode__Enum_Guid = 32,
  PrimitiveTypeCode__Enum_GuidNullable = 33,
  PrimitiveTypeCode__Enum_TimeSpan = 34,
  PrimitiveTypeCode__Enum_TimeSpanNullable = 35,
  PrimitiveTypeCode__Enum_BigInteger = 36,
  PrimitiveTypeCode__Enum_BigIntegerNullable = 37,
  PrimitiveTypeCode__Enum_Uri = 38,
  PrimitiveTypeCode__Enum_String = 39,
  PrimitiveTypeCode__Enum_Bytes = 40,
  PrimitiveTypeCode__Enum_DBNull = 41,
};
struct PrimitiveTypeCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PrimitiveTypeCode__Enum value;
};

struct JsonWriterException__Fields {
  struct JsonException__Fields _;
  struct String * _Path_k__BackingField;
};
struct JsonWriterException {
  struct JsonWriterException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonWriterException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonWriterException__VTable vtable;
};

struct IList_1_System_Int32_ {
  struct IList_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Int32___VTable vtable;
};

struct __declspec(align(8)) TypeInformation_1__Fields {
  struct Type * _Type_k__BackingField;
  enum PrimitiveTypeCode__Enum _TypeCode_k__BackingField;
};
struct TypeInformation_1 {
  struct TypeInformation_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeInformation_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeInformation_1__VTable vtable;
};

struct Func_2_Object_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Object_Object_ {
  struct Func_2_Object_Object___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Object_Object___Fields fields;
};
struct StructMultiKey_2_System_Type_System_Type_ {
  struct Type * Value1;
  struct Type * Value2;
};
struct StructMultiKey_2_System_Type_System_Type___Boxed {
  struct StructMultiKey_2_System_Type_System_Type___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Object_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StructMultiKey_2_System_Type_System_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StructMultiKey_2_System_Type_System_Type___VTable vtable;
};

enum ConvertUtils_ConvertResult__Enum : int32_t {
  ConvertUtils_ConvertResult__Enum_Success = 0,
  ConvertUtils_ConvertResult__Enum_CannotConvertNull = 1,
  ConvertUtils_ConvertResult__Enum_NotInstantiableType = 2,
  ConvertUtils_ConvertResult__Enum_NoValidConversion = 3,
};
struct ConvertUtils_ConvertResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConvertUtils_ConvertResult__Enum value;
};

enum ParseResult__Enum : int32_t {
  ParseResult__Enum_None = 0,
  ParseResult__Enum_Success = 1,
  ParseResult__Enum_Overflow = 2,
  ParseResult__Enum_Invalid = 3,
};
struct ParseResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParseResult__Enum value;
};

struct __declspec(align(8)) ConvertUtils_c_DisplayClass8_0__Fields {
  struct MethodCall_2_System_Object_System_Object_ * call;
};
struct ConvertUtils_c_DisplayClass8_0 {
  struct ConvertUtils_c_DisplayClass8_0__Class *klass;
  struct MonitorData *monitor;
  struct ConvertUtils_c_DisplayClass8_0__Fields fields;
};
struct MethodCall_2_System_Object_System_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct MethodCall_2_System_Object_System_Object_ {
  struct MethodCall_2_System_Object_System_Object___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodCall_2_System_Object_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConvertUtils_c_DisplayClass8_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConvertUtils_c_DisplayClass8_0__VTable vtable;
};

enum ParserTimeZone__Enum : int32_t {
  ParserTimeZone__Enum_Unspecified = 0,
  ParserTimeZone__Enum_Utc = 1,
  ParserTimeZone__Enum_LocalWestOfUtc = 2,
  ParserTimeZone__Enum_LocalEastOfUtc = 3,
};
struct ParserTimeZone__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParserTimeZone__Enum value;
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
  enum ParserTimeZone__Enum Zone;
  struct Char__Array * _text;
  int32_t _end;
};
struct DateTimeParser__Boxed {
  struct DateTimeParser__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeParser fields;
};
struct DateTimeParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DateTimeParser__StaticFields {
  struct Int32__Array * Power10;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeParser__VTable vtable;
};

struct ReflectionDelegateFactory {
  struct ReflectionDelegateFactory__Class *klass;
  struct MonitorData *monitor;
};
struct DynamicReflectionDelegateFactory {
  struct DynamicReflectionDelegateFactory__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionDelegateFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct DynamicReflectionDelegateFactory * _Instance_k__BackingField;
};
struct DynamicReflectionDelegateFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicReflectionDelegateFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicReflectionDelegateFactory__VTable vtable;
};

struct IDynamicMetaObjectProvider {
  struct IDynamicMetaObjectProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IDynamicMetaObjectProvider__VTable {
  VirtualInvokeData GetMetaObject;
};
struct IDynamicMetaObjectProvider__StaticFields {
};
struct IDynamicMetaObjectProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDynamicMetaObjectProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDynamicMetaObjectProvider__VTable vtable;
};

struct NoThrowExpressionVisitor {
  struct NoThrowExpressionVisitor__Class *klass;
  struct MonitorData *monitor;
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
  struct Object * ErrorResult;
};
struct NoThrowExpressionVisitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NoThrowExpressionVisitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NoThrowExpressionVisitor__VTable vtable;
};

struct __declspec(align(8)) EnumInfo__Fields {
  bool IsFlags;
  struct UInt64__Array * Values;
  struct String__Array * Names;
  struct String__Array * ResolvedNames;
};
struct EnumInfo {
  struct EnumInfo__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnumInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnumInfo__VTable vtable;
};

struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy_ {
  struct Type * Value1;
  struct NamingStrategy * Value2;
};
struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___Boxed {
  struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy___VTable vtable;
};

struct EnumUtils_c {
  struct EnumUtils_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ {
  struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___Fields fields;
};
struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___VTable {
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
struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___StaticFields {
};
struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String___VTable vtable;
};
struct EnumUtils_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnumUtils_c__StaticFields {
  struct EnumUtils_c * __9;
  struct Func_2_System_Runtime_Serialization_EnumMemberAttribute_String_ * __9__3_0;
};
struct EnumUtils_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnumUtils_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnumUtils_c__VTable vtable;
};

struct __declspec(align(8)) FSharpFunction__Fields {
  struct Object * _instance;
  struct MethodCall_2_System_Object_System_Object_ * _invoker;
};
struct FSharpFunction {
  struct FSharpFunction__Class *klass;
  struct MonitorData *monitor;
  struct FSharpFunction__Fields fields;
};
struct FSharpFunction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FSharpFunction__StaticFields {
};
struct FSharpFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FSharpFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FSharpFunction__VTable vtable;
};

struct __declspec(align(8)) FSharpUtils_c_DisplayClass49_0__Fields {
  struct MethodCall_2_System_Object_System_Object_ * call;
  struct MethodCall_2_System_Object_System_Object_ * invoke;
};
struct FSharpUtils_c_DisplayClass49_0 {
  struct FSharpUtils_c_DisplayClass49_0__Class *klass;
  struct MonitorData *monitor;
  struct FSharpUtils_c_DisplayClass49_0__Fields fields;
};
struct FSharpUtils_c_DisplayClass49_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FSharpUtils_c_DisplayClass49_0__StaticFields {
};
struct FSharpUtils_c_DisplayClass49_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FSharpUtils_c_DisplayClass49_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FSharpUtils_c_DisplayClass49_0__VTable vtable;
};

struct __declspec(align(8)) ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Fields {
  struct String * _ContractTypeName_k__BackingField;
  struct String * _CreatedTypeName_k__BackingField;
  struct String * _BuilderTypeName_k__BackingField;
};
struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo {
  struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Fields fields;
};
struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__StaticFields {
};
struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__VTable vtable;
};

struct __declspec(align(8)) ImmutableCollectionsUtils_c_DisplayClass24_0__Fields {
  struct String * name;
};
struct ImmutableCollectionsUtils_c_DisplayClass24_0 {
  struct ImmutableCollectionsUtils_c_DisplayClass24_0__Class *klass;
  struct MonitorData *monitor;
  struct ImmutableCollectionsUtils_c_DisplayClass24_0__Fields fields;
};
struct ImmutableCollectionsUtils_c_DisplayClass24_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ImmutableCollectionsUtils_c_DisplayClass24_0__StaticFields {
};
struct ImmutableCollectionsUtils_c_DisplayClass24_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImmutableCollectionsUtils_c_DisplayClass24_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImmutableCollectionsUtils_c_DisplayClass24_0__VTable vtable;
};

struct ImmutableCollectionsUtils_c {
  struct ImmutableCollectionsUtils_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Reflection_MethodInfo_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Reflection_MethodInfo_Boolean_ {
  struct Func_2_System_Reflection_MethodInfo_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Reflection_MethodInfo_Boolean___Fields fields;
};
struct Func_2_System_Reflection_MethodInfo_Boolean___VTable {
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
struct Func_2_System_Reflection_MethodInfo_Boolean___StaticFields {
};
struct Func_2_System_Reflection_MethodInfo_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Reflection_MethodInfo_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Reflection_MethodInfo_Boolean___VTable vtable;
};
struct ImmutableCollectionsUtils_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ImmutableCollectionsUtils_c__StaticFields {
  struct ImmutableCollectionsUtils_c * __9;
  struct Func_2_System_Reflection_MethodInfo_Boolean_ * __9__24_1;
  struct Func_2_System_Reflection_MethodInfo_Boolean_ * __9__25_1;
};
struct ImmutableCollectionsUtils_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImmutableCollectionsUtils_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImmutableCollectionsUtils_c__VTable vtable;
};

struct __declspec(align(8)) ImmutableCollectionsUtils_c_DisplayClass25_0__Fields {
  struct String * name;
};
struct ImmutableCollectionsUtils_c_DisplayClass25_0 {
  struct ImmutableCollectionsUtils_c_DisplayClass25_0__Class *klass;
  struct MonitorData *monitor;
  struct ImmutableCollectionsUtils_c_DisplayClass25_0__Fields fields;
};
struct ImmutableCollectionsUtils_c_DisplayClass25_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ImmutableCollectionsUtils_c_DisplayClass25_0__StaticFields {
};
struct ImmutableCollectionsUtils_c_DisplayClass25_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImmutableCollectionsUtils_c_DisplayClass25_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImmutableCollectionsUtils_c_DisplayClass25_0__VTable vtable;
};

struct LateBoundReflectionDelegateFactory {
  struct LateBoundReflectionDelegateFactory__Class *klass;
  struct MonitorData *monitor;
};
struct LateBoundReflectionDelegateFactory__VTable {
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
struct LateBoundReflectionDelegateFactory__StaticFields {
  struct LateBoundReflectionDelegateFactory * _instance;
};
struct LateBoundReflectionDelegateFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LateBoundReflectionDelegateFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LateBoundReflectionDelegateFactory__VTable vtable;
};

struct __declspec(align(8)) LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Fields {
  struct ConstructorInfo * c;
  struct MethodBase * method;
};
struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0 {
  struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Fields fields;
};
struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__StaticFields {
};
struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LateBoundReflectionDelegateFactory_c_DisplayClass3_0__VTable vtable;
};

struct __declspec(align(8)) ReflectionMember__Fields {
  struct Type * _MemberType_k__BackingField;
  struct Func_2_Object_Object_ * _Getter_k__BackingField;
  struct Action_2_Object_Object_ * _Setter_k__BackingField;
};
struct ReflectionMember {
  struct ReflectionMember__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionMember__Fields fields;
};
struct Action_2_Object_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Object_Object_ {
  struct Action_2_Object_Object___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Object_Object___Fields fields;
};
struct Action_2_Object_Object___VTable {
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
};}