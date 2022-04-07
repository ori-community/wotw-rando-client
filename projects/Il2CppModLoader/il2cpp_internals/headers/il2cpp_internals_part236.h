namespace app {
struct SqlInt16__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlInt16__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlInt16__VTable vtable;
};

struct SqlInt32 {
  bool m_fNotNull;
  int32_t m_value;
};
struct SqlInt32__Boxed {
  struct SqlInt32__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlInt32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlInt32__VTable vtable;
};

struct SqlMoney {
  bool _fNotNull;
  int64_t _value;
};
struct SqlMoney__Boxed {
  struct SqlMoney__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlMoney__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlMoney__VTable vtable;
};

struct SqlSingle {
  bool _fNotNull;
  float _value;
};
struct SqlSingle__Boxed {
  struct SqlSingle__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlSingle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlSingle__VTable vtable;
};

struct SqlTypeException__Fields {
  struct SystemException__Fields _;
};
struct SqlTypeException {
  struct SqlTypeException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlTypeException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlTypeException__VTable vtable;
};

struct SqlNullValueException__Fields {
  struct SqlTypeException__Fields _;
};
struct SqlNullValueException {
  struct SqlNullValueException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlNullValueException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlNullValueException__VTable vtable;
};

struct SqlTruncateException__Fields {
  struct SqlTypeException__Fields _;
};
struct SqlTruncateException {
  struct SqlTruncateException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlTruncateException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlTruncateException__VTable vtable;
};

struct __declspec(align(8)) SqlXml__Fields {
  struct MethodInfo_1 * _createSqlReaderMethodInfo;
  bool _fNotNull;
  struct Stream * _stream;
  bool _firstCreateReader;
};
struct SqlXml {
  struct SqlXml__Class *klass;
  struct MonitorData *monitor;
  struct SqlXml__Fields fields;
};
struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ {
  struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Func_4_System_IO_Stream_System_Xml_XmlReaderSettings_System_Xml_XmlParserContext_System_Xml_XmlReader_ * s_sqlReaderDelegate;
  struct XmlReaderSettings * s_defaultXmlReaderSettings;
  struct XmlReaderSettings * s_defaultXmlReaderSettingsCloseInput;
  struct MethodInfo_1 * s_createSqlReaderMethodInfo;
};
struct SqlXml__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlXml__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlXml__VTable vtable;
};

struct SqlXmlStreamWrapper__Fields {
  struct Stream__Fields _;
  struct Stream * _stream;
  int64_t _lPosition;
  bool _isClosed;
};
struct SqlXmlStreamWrapper {
  struct SqlXmlStreamWrapper__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SqlXmlStreamWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SqlXmlStreamWrapper__VTable vtable;
};

struct BooleanStorage__Fields {
  struct DataStorage__Fields _;
  struct Boolean__Array * _values;
};
struct BooleanStorage {
  struct BooleanStorage__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BooleanStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BooleanStorage__VTable vtable;
};

struct ByteStorage__Fields {
  struct DataStorage__Fields _;
  struct Byte__Array * _values;
};
struct ByteStorage {
  struct ByteStorage__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ByteStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ByteStorage__VTable vtable;
};

struct CharStorage__Fields {
  struct DataStorage__Fields _;
  struct Char__Array * _values;
};
struct CharStorage {
  struct CharStorage__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharStorage__VTable vtable;
};

struct DateTimeOffsetStorage__Fields {
  struct DataStorage__Fields _;
  struct DateTimeOffset__Array * _values;
};
struct DateTimeOffsetStorage {
  struct DateTimeOffsetStorage__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeOffsetStorage__Fields fields;
};
struct DateTimeOffset__Array {
  struct DateTimeOffset__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DateTimeOffset vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeOffsetStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeOffsetStorage__VTable vtable;
};

struct DateTimeStorage__Fields {
  struct DataStorage__Fields _;
  struct DateTime__Array * _values;
};
struct DateTimeStorage {
  struct DateTimeStorage__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeStorage__Fields fields;
};
struct DateTime__Array {
  struct DateTime__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DateTime vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeStorage__VTable vtable;
};

struct DecimalStorage__Fields {
  struct DataStorage__Fields _;
  struct Decimal__Array * _values;
};
struct DecimalStorage {
  struct DecimalStorage__Class *klass;
  struct MonitorData *monitor;
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
struct DecimalStorage__StaticFields {
  struct Decimal s_defaultValue;
};
struct DecimalStorage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecimalStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecimalStorage__VTable vtable;
};

struct DoubleStorage__Fields {
  struct DataStorage__Fields _;
  struct Double__Array * _values;
};
struct DoubleStorage {
  struct DoubleStorage__Class *klass;
  struct MonitorData *monitor;
  struct DoubleStorage__Fields fields;
};
struct DoubleStorage__VTable {
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
struct DoubleStorage__StaticFields {
};
struct DoubleStorage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoubleStorage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoubleStorage__VTable vtable;
};

struct Int16Storage__Fields {
  struct DataStorage__Fields _;
  struct Int16__Array * _values;
};
struct Int16Storage {
  struct Int16Storage__Class *klass;
  struct MonitorData *monitor;
  struct Int16Storage__Fields fields;
};
struct Int16Storage__VTable {
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
struct Int16Storage__StaticFields {
};
struct Int16Storage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Int16Storage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Int16Storage__VTable vtable;
};

struct Int32Storage__Fields {
  struct DataStorage__Fields _;
  struct Int32__Array * _values;
};
struct Int32Storage {
  struct Int32Storage__Class *klass;
  struct MonitorData *monitor;
  struct Int32Storage__Fields fields;
};
struct Int32Storage__VTable {
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
struct Int32Storage__StaticFields {
};
struct Int32Storage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Int32Storage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Int32Storage__VTable vtable;
};

struct Int64Storage__Fields {
  struct DataStorage__Fields _;
  struct Int64__Array * _values;
};
struct Int64Storage {
  struct Int64Storage__Class *klass;
  struct MonitorData *monitor;
  struct Int64Storage__Fields fields;
};
struct Int64Storage__VTable {
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
struct Int64Storage__StaticFields {
};
struct Int64Storage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Int64Storage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Int64Storage__VTable vtable;
};

struct ObjectStorage__Fields {
  struct DataStorage__Fields _;
  struct Object__Array * _values;
  bool _implementsIXmlSerializable;
};
struct ObjectStorage {
  struct ObjectStorage__Class *klass;
  struct MonitorData *monitor;
  struct ObjectStorage__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields fields;
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
  struct Type * key;
  struct XmlRootAttribute * value;
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Boxed {
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  int32_t hashCode;
  int32_t next;
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ key;
  struct XmlSerializer * value;
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Array {
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ vector[32];
};
struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
  struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields {
  struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields fields;
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Array {
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields {
  struct Dictionary_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Fields fields;
};
struct XmlSerializer__Array {
  struct XmlSerializer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XmlSerializer * vector[32];
};
struct IEnumerator_1_System_Xml_Serialization_XmlSerializer_ {
  struct IEnumerator_1_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
  struct ICollection_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Xml_Serialization_XmlSerializer_ {
  struct ICollection_1_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ key;
  struct XmlSerializer * value;
};
struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Boxed {
  struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ fields;
};
struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Array {
  struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer_ {
  struct IEnumerator_1_KeyValuePair_2_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
  struct IEnumerable_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Xml_Serialization_XmlSerializer_ {
  struct IEnumerable_1_System_Xml_Serialization_XmlSerializer___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields {
};
struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___VTable vtable;
};
struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields {
};
struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_System_Xml_Serialization_XmlSerializer___VTable {
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
};}