namespace app {
struct SqlChars__StaticFields {
};

struct SqlChars__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlChars__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlChars__VTable vtable;
};

enum class SqlCompareOptions__Enum : int32_t {
    None = 0x00000000,
    IgnoreCase = 0x00000001,
    IgnoreNonSpace = 0x00000002,
    IgnoreKanaType = 0x00000008,
    IgnoreWidth = 0x00000010,
    BinarySort = 0x00008000,
    BinarySort2 = 0x00004000,
};

struct SqlCompareOptions__Enum__Boxed {
    struct SqlCompareOptions__Enum__Class *klass;
    MonitorData *monitor;
    SqlCompareOptions__Enum value;
    
};

struct SqlString {
    struct String *m_value;
    struct CompareInfo *m_cmpInfo;
    int32_t m_lcid;
    SqlCompareOptions__Enum m_flag;
    
    bool m_fNotNull;
};

struct SqlString__Boxed {
    struct SqlString__Class *klass;
    MonitorData *monitor;
    struct SqlString fields;
};

struct SqlCompareOptions__Enum__VTable {
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

struct SqlCompareOptions__Enum__StaticFields {
};

struct SqlCompareOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlCompareOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlCompareOptions__Enum__VTable vtable;
};

struct SqlString__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlString__StaticFields {
    struct SqlString Null;
    struct UnicodeEncoding *s_unicodeEncoding;
    int32_t IgnoreCase;
    int32_t IgnoreWidth;
    int32_t IgnoreNonSpace;
    int32_t IgnoreKanaType;
    int32_t BinarySort;
    int32_t BinarySort2;
    SqlCompareOptions__Enum s_iDefaultFlag;
    
    CompareOptions__Enum s_iValidCompareOptionMask;
    
    SqlCompareOptions__Enum s_iValidSqlCompareOptionMask;
    
    int32_t s_lcidUSEnglish;
    int32_t s_lcidBinary;
};

struct SqlString__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlString__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlString__VTable vtable;
};

struct SqlDateTime {
    bool m_fNotNull;
    int32_t m_day;
    int32_t m_time;
};

struct SqlDateTime__Boxed {
    struct SqlDateTime__Class *klass;
    MonitorData *monitor;
    struct SqlDateTime fields;
};

struct SqlDateTime__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlDateTime__StaticFields {
    double s_SQLTicksPerMillisecond;
    int32_t SQLTicksPerSecond;
    int32_t SQLTicksPerMinute;
    int32_t SQLTicksPerHour;
    int32_t s_SQLTicksPerDay;
    int64_t s_ticksPerSecond;
    struct DateTime s_SQLBaseDate;
    int64_t s_SQLBaseDateTicks;
    int32_t s_minYear;
    int32_t s_maxYear;
    int32_t s_minDay;
    int32_t s_maxDay;
    int32_t s_minTime;
    int32_t s_maxTime;
    int32_t s_dayBase;
    struct Int32__Array *s_daysToMonth365;
    struct Int32__Array *s_daysToMonth366;
    struct DateTime s_minDateTime;
    struct DateTime s_maxDateTime;
    struct TimeSpan s_minTimeSpan;
    struct TimeSpan s_maxTimeSpan;
    struct String *s_ISO8601_DateTimeFormat;
    struct String__Array *s_dateTimeFormats;
    struct SqlDateTime MinValue;
    struct SqlDateTime MaxValue;
    struct SqlDateTime Null;
};

struct SqlDateTime__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlDateTime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlDateTime__VTable vtable;
};

struct SqlDecimal {
    uint8_t _bStatus;
    uint8_t _bLen;
    uint8_t _bPrec;
    uint8_t _bScale;
    uint32_t _data1;
    uint32_t _data2;
    uint32_t _data3;
    uint32_t _data4;
};

struct SqlDecimal__Boxed {
    struct SqlDecimal__Class *klass;
    MonitorData *monitor;
    struct SqlDecimal fields;
};

struct SqlDecimal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlDecimal__StaticFields {
    uint8_t s_NUMERIC_MAX_PRECISION;
    uint8_t MaxPrecision;
    uint8_t MaxScale;
    uint8_t s_bNullMask;
    uint8_t s_bIsNull;
    uint8_t s_bNotNull;
    uint8_t s_bReverseNullMask;
    uint8_t s_bSignMask;
    uint8_t s_bPositive;
    uint8_t s_bNegative;
    uint8_t s_bReverseSignMask;
    uint32_t s_uiZero;
    int32_t s_cNumeMax;
    int64_t s_lInt32Base;
    uint64_t s_ulInt32Base;
    uint64_t s_ulInt32BaseForMod;
    uint64_t s_llMax;
    uint32_t s_ulBase10;
    double s_DUINT_BASE;
    double s_DUINT_BASE2;
    double s_DUINT_BASE3;
    double s_DMAX_NUME;
    uint32_t s_DBL_DIG;
    uint8_t s_cNumeDivScaleMin;
    struct UInt32__Array *s_rgulShiftBase;
    struct UInt32__Array *s_decimalHelpersLo;
    struct UInt32__Array *s_decimalHelpersMid;
    struct UInt32__Array *s_decimalHelpersHi;
    struct UInt32__Array *s_decimalHelpersHiHi;
    struct Byte__Array *s_rgCLenFromPrec;
    uint32_t s_ulT1;
    uint32_t s_ulT2;
    uint32_t s_ulT3;
    uint32_t s_ulT4;
    uint32_t s_ulT5;
    uint32_t s_ulT6;
    uint32_t s_ulT7;
    uint32_t s_ulT8;
    uint32_t s_ulT9;
    uint64_t s_dwlT10;
    uint64_t s_dwlT11;
    uint64_t s_dwlT12;
    uint64_t s_dwlT13;
    uint64_t s_dwlT14;
    uint64_t s_dwlT15;
    uint64_t s_dwlT16;
    uint64_t s_dwlT17;
    uint64_t s_dwlT18;
    uint64_t s_dwlT19;
    struct SqlDecimal Null;
    struct SqlDecimal MinValue;
    struct SqlDecimal MaxValue;
};

struct SqlDecimal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlDecimal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlDecimal__VTable vtable;
};

struct SqlInt16 {
    bool m_fNotNull;
    int16_t m_value;
};

struct SqlInt16__Boxed {
    struct SqlInt16__Class *klass;
    MonitorData *monitor;
    struct SqlInt16 fields;
};

struct SqlInt16__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlInt16__StaticFields {
    int32_t s_MASKI2;
    struct SqlInt16 Null;
    struct SqlInt16 Zero;
    struct SqlInt16 MinValue;
    struct SqlInt16 MaxValue;
};

struct SqlInt16__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlInt16__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlInt16__VTable vtable;
};

struct SqlInt32 {
    bool m_fNotNull;
    int32_t m_value;
};

struct SqlInt32__Boxed {
    struct SqlInt32__Class *klass;
    MonitorData *monitor;
    struct SqlInt32 fields;
};

struct SqlInt32__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlInt32__StaticFields {
    int64_t s_iIntMin;
    int64_t s_lBitNotIntMax;
    struct SqlInt32 Null;
    struct SqlInt32 Zero;
    struct SqlInt32 MinValue;
    struct SqlInt32 MaxValue;
};

struct SqlInt32__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlInt32__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlInt32__VTable vtable;
};

struct SqlMoney {
    bool _fNotNull;
    int64_t _value;
};

struct SqlMoney__Boxed {
    struct SqlMoney__Class *klass;
    MonitorData *monitor;
    struct SqlMoney fields;
};

struct SqlMoney__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlMoney__StaticFields {
    int32_t s_iMoneyScale;
    int64_t s_lTickBase;
    double s_dTickBase;
    int64_t s_minLong;
    int64_t s_maxLong;
    struct SqlMoney Null;
    struct SqlMoney Zero;
    struct SqlMoney MinValue;
    struct SqlMoney MaxValue;
};

struct SqlMoney__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlMoney__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlMoney__VTable vtable;
};

struct SqlSingle {
    bool _fNotNull;
    float _value;
};

struct SqlSingle__Boxed {
    struct SqlSingle__Class *klass;
    MonitorData *monitor;
    struct SqlSingle fields;
};

struct SqlSingle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData CompareTo;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlSingle__StaticFields {
    struct SqlSingle Null;
    struct SqlSingle Zero;
    struct SqlSingle MinValue;
    struct SqlSingle MaxValue;
};

struct SqlSingle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlSingle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlSingle__VTable vtable;
};

struct SqlTypeException__Fields {
    struct SystemException__Fields _;
};

struct SqlTypeException {
    struct SqlTypeException__Class *klass;
    MonitorData *monitor;
    struct SqlTypeException__Fields fields;
};

struct SqlTypeException__VTable {
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

struct SqlTypeException__StaticFields {
};

struct SqlTypeException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlTypeException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlTypeException__VTable vtable;
};

struct SqlNullValueException__Fields {
    struct SqlTypeException__Fields _;
};

struct SqlNullValueException {
    struct SqlNullValueException__Class *klass;
    MonitorData *monitor;
    struct SqlNullValueException__Fields fields;
};

struct SqlNullValueException__VTable {
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

struct SqlNullValueException__StaticFields {
};

struct SqlNullValueException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlNullValueException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlNullValueException__VTable vtable;
};

struct SqlTruncateException__Fields {
    struct SqlTypeException__Fields _;
};

struct SqlTruncateException {
    struct SqlTruncateException__Class *klass;
    MonitorData *monitor;
    struct SqlTruncateException__Fields fields;
};

struct SqlTruncateException__VTable {
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

struct SqlTruncateException__StaticFields {
};

struct SqlTruncateException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlTruncateException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlTruncateException__VTable vtable;
};

struct __declspec(align(8)) SqlXml__Fields {
    struct MethodInfo_1 *_createSqlReaderMethodInfo;
    bool _fNotNull;
    struct Stream *_stream;
    bool _firstCreateReader;
};

struct SqlXml {
    struct SqlXml__Class *klass;
    MonitorData *monitor;
    struct SqlXml__Fields fields;
};

struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ {
    struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Class *klass;
    MonitorData *monitor;
    struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Fields fields;
};

struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___VTable {
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

struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___StaticFields {
};

struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___VTable vtable;
};

struct SqlXml__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsNull;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
    VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
};

struct SqlXml__StaticFields {
    struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ *s_sqlReaderDelegate;
    struct XmlReaderSettings *s_defaultXmlReaderSettings;
    struct XmlReaderSettings *s_defaultXmlReaderSettingsCloseInput;
    struct MethodInfo_1 *s_createSqlReaderMethodInfo;
};

struct SqlXml__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlXml__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlXml__VTable vtable;
};

struct SqlXmlStreamWrapper__Fields {
    struct Stream__Fields _;
    struct Stream *_stream;
    int64_t _lPosition;
    bool _isClosed;
};

struct SqlXmlStreamWrapper {
    struct SqlXmlStreamWrapper__Class *klass;
    MonitorData *monitor;
    struct SqlXmlStreamWrapper__Fields fields;
};

struct SqlXmlStreamWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_CanRead;
    VirtualInvokeData get_CanSeek;
    VirtualInvokeData get_CanTimeout;
    VirtualInvokeData get_CanWrite;
    VirtualInvokeData get_Length;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_ReadTimeout;
    VirtualInvokeData set_ReadTimeout;
    VirtualInvokeData get_WriteTimeout;
    VirtualInvokeData set_WriteTimeout;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData Flush;
    VirtualInvokeData FlushAsync;
    VirtualInvokeData BeginRead;
    VirtualInvokeData EndRead;
    VirtualInvokeData ReadAsync;
    VirtualInvokeData BeginWrite;
    VirtualInvokeData EndWrite;
    VirtualInvokeData WriteAsync;
    VirtualInvokeData Seek;
    VirtualInvokeData SetLength;
    VirtualInvokeData Read;
    VirtualInvokeData ReadByte;
    VirtualInvokeData Write;
    VirtualInvokeData WriteByte;
};

struct SqlXmlStreamWrapper__StaticFields {
};

struct SqlXmlStreamWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SqlXmlStreamWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SqlXmlStreamWrapper__VTable vtable;
};

struct BooleanStorage__Fields {
    struct DataStorage__Fields _;
    struct Boolean__Array *_values;
};

struct BooleanStorage {
    struct BooleanStorage__Class *klass;
    MonitorData *monitor;
    struct BooleanStorage__Fields fields;
};

struct BooleanStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

struct BooleanStorage__StaticFields {
};

struct BooleanStorage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanStorage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanStorage__VTable vtable;
};

struct ByteStorage__Fields {
    struct DataStorage__Fields _;
    struct Byte__Array *_values;
};

struct ByteStorage {
    struct ByteStorage__Class *klass;
    MonitorData *monitor;
    struct ByteStorage__Fields fields;
};

struct ByteStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

struct ByteStorage__StaticFields {
};

struct ByteStorage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ByteStorage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ByteStorage__VTable vtable;
};

struct CharStorage__Fields {
    struct DataStorage__Fields _;
    struct Char__Array *_values;
};

struct CharStorage {
    struct CharStorage__Class *klass;
    MonitorData *monitor;
    struct CharStorage__Fields fields;
};

struct CharStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

struct CharStorage__StaticFields {
};

struct CharStorage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharStorage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharStorage__VTable vtable;
};

struct DateTimeOffsetStorage__Fields {
    struct DataStorage__Fields _;
    struct DateTimeOffset__Array *_values;
};

struct DateTimeOffsetStorage {
    struct DateTimeOffsetStorage__Class *klass;
    MonitorData *monitor;
    struct DateTimeOffsetStorage__Fields fields;
};

struct DateTimeOffset__Array {
    struct DateTimeOffset__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DateTimeOffset vector[32];
};

struct DateTimeOffset__Array__VTable {
};

struct DateTimeOffset__Array__StaticFields {
};

struct DateTimeOffset__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeOffset__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeOffset__Array__VTable vtable;
};

struct DateTimeOffsetStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

struct DateTimeOffsetStorage__StaticFields {
    struct DateTimeOffset s_defaultValue;
};

struct DateTimeOffsetStorage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeOffsetStorage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeOffsetStorage__VTable vtable;
};

struct DateTimeStorage__Fields {
    struct DataStorage__Fields _;
    struct DateTime__Array *_values;
};

struct DateTimeStorage {
    struct DateTimeStorage__Class *klass;
    MonitorData *monitor;
    struct DateTimeStorage__Fields fields;
};

struct DateTime__Array {
    struct DateTime__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DateTime vector[32];
};

struct DateTime__Array__VTable {
};

struct DateTime__Array__StaticFields {
};

struct DateTime__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTime__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTime__Array__VTable vtable;
};

struct DateTimeStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

struct DateTimeStorage__StaticFields {
    struct DateTime s_defaultValue;
};

struct DateTimeStorage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DateTimeStorage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DateTimeStorage__VTable vtable;
};

struct DecimalStorage__Fields {
    struct DataStorage__Fields _;
    struct Decimal__Array *_values;
};

struct DecimalStorage {
    struct DecimalStorage__Class *klass;
    MonitorData *monitor;
    struct DecimalStorage__Fields fields;
};

struct DecimalStorage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Aggregate;
    VirtualInvokeData Compare;
    VirtualInvokeData CompareValueTo;
    VirtualInvokeData ConvertValue;
    VirtualInvokeData Copy;
    VirtualInvokeData Get;
    VirtualInvokeData GetStringLength;
    VirtualInvokeData IsNull;
    VirtualInvokeData Set;
    VirtualInvokeData SetCapacity;
    VirtualInvokeData ConvertXmlToObject;
    VirtualInvokeData ConvertXmlToObject_1;
    VirtualInvokeData ConvertObjectToXml;
    VirtualInvokeData ConvertObjectToXml_1;
    VirtualInvokeData GetEmptyStorage;
    VirtualInvokeData CopyValue;
    VirtualInvokeData SetStorage;
};

}
