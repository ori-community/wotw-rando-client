namespace app {
struct ReflectionOnlyType__StaticFields {
};
struct ReflectionOnlyType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionOnlyType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionOnlyType__VTable vtable;
};

struct SerializableAttribute {
  struct SerializableAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SerializableAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SerializableAttribute__StaticFields {
};
struct SerializableAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializableAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializableAttribute__VTable vtable;
};

struct __declspec(align(8)) SharedStatics__Fields {
  struct Tokenizer_StringMaker * _maker;
};
struct SharedStatics {
  struct SharedStatics__Class *klass;
  struct MonitorData *monitor;
  struct SharedStatics__Fields fields;
};
struct __declspec(align(8)) Tokenizer_StringMaker__Fields {
  struct String__Array * aStrings;
  uint32_t cStringsMax;
  uint32_t cStringsUsed;
  struct StringBuilder * _outStringBuilder;
  struct Char__Array * _outChars;
  int32_t _outIndex;
};
struct Tokenizer_StringMaker {
  struct Tokenizer_StringMaker__Class *klass;
  struct MonitorData *monitor;
  struct Tokenizer_StringMaker__Fields fields;
};
struct Tokenizer_StringMaker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Tokenizer_StringMaker__StaticFields {
};
struct Tokenizer_StringMaker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tokenizer_StringMaker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Tokenizer_StringMaker__VTable vtable;
};
struct SharedStatics__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SharedStatics__StaticFields {
  struct SharedStatics * _sharedStatics;
};
struct SharedStatics__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SharedStatics__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SharedStatics__VTable vtable;
};

struct StackOverflowException__Fields {
  struct SystemException__Fields _;
};
struct StackOverflowException {
  struct StackOverflowException__Class *klass;
  struct MonitorData *monitor;
  struct StackOverflowException__Fields fields;
};
struct StackOverflowException__VTable {
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
struct StackOverflowException__StaticFields {
};
struct StackOverflowException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StackOverflowException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StackOverflowException__VTable vtable;
};

enum StringComparison__Enum : int32_t {
  StringComparison__Enum_CurrentCulture = 0,
  StringComparison__Enum_CurrentCultureIgnoreCase = 1,
  StringComparison__Enum_InvariantCulture = 2,
  StringComparison__Enum_InvariantCultureIgnoreCase = 3,
  StringComparison__Enum_Ordinal = 4,
  StringComparison__Enum_OrdinalIgnoreCase = 5,
};
struct StringComparison__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StringComparison__Enum value;
};

enum StringSplitOptions__Enum : int32_t {
  StringSplitOptions__Enum_None = 0,
  StringSplitOptions__Enum_RemoveEmptyEntries = 1,
};
struct StringSplitOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StringSplitOptions__Enum value;
};

struct __declspec(align(8)) Encoding__Fields {
  int32_t m_codePage;
  struct CodePageDataItem * dataItem;
  bool m_deserializedFromEverett;
  bool m_isReadOnly;
  struct EncoderFallback * encoderFallback;
  struct DecoderFallback * decoderFallback;
};
struct Encoding {
  struct Encoding__Class *klass;
  struct MonitorData *monitor;
  struct Encoding__Fields fields;
};
struct __declspec(align(8)) CodePageDataItem__Fields {
  int32_t m_dataIndex;
  int32_t m_uiFamilyCodePage;
  struct String * m_webName;
  struct String * m_headerName;
  struct String * m_bodyName;
  uint32_t m_flags;
};
struct CodePageDataItem {
  struct CodePageDataItem__Class *klass;
  struct MonitorData *monitor;
  struct CodePageDataItem__Fields fields;
};
struct __declspec(align(8)) EncoderFallback__Fields {
  bool bIsMicrosoftBestFitFallback;
};
struct EncoderFallback {
  struct EncoderFallback__Class *klass;
  struct MonitorData *monitor;
  struct EncoderFallback__Fields fields;
};
struct InternalEncoderBestFitFallback__Fields {
  struct EncoderFallback__Fields _;
  struct Encoding * encoding;
  struct Char__Array * arrayBestFit;
};
struct InternalEncoderBestFitFallback {
  struct InternalEncoderBestFitFallback__Class *klass;
  struct MonitorData *monitor;
  struct InternalEncoderBestFitFallback__Fields fields;
};
struct __declspec(align(8)) EncoderFallbackBuffer__Fields {
  uint16_t * charStart;
  uint16_t * charEnd;
  struct EncoderNLS * encoder;
  bool setEncoder;
  bool bUsedEncoder;
  bool bFallingBack;
  int32_t iRecursionCount;
};
struct EncoderFallbackBuffer {
  struct EncoderFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct EncoderFallbackBuffer__Fields fields;
};
struct __declspec(align(8)) Encoder__Fields {
  struct EncoderFallback * m_fallback;
  struct EncoderFallbackBuffer * m_fallbackBuffer;
};
struct Encoder {
  struct Encoder__Class *klass;
  struct MonitorData *monitor;
  struct Encoder__Fields fields;
};
struct EncoderNLS__Fields {
  struct Encoder__Fields _;
  uint16_t charLeftOver;
  struct Encoding * m_encoding;
  bool m_mustFlush;
  bool m_throwOnOverflow;
  int32_t m_charsUsed;
};
struct EncoderNLS {
  struct EncoderNLS__Class *klass;
  struct MonitorData *monitor;
  struct EncoderNLS__Fields fields;
};
struct InternalEncoderBestFitFallbackBuffer__Fields {
  struct EncoderFallbackBuffer__Fields _;
  uint16_t cBestFit;
  struct InternalEncoderBestFitFallback * oFallback;
  int32_t iCount;
  int32_t iSize;
};
struct InternalEncoderBestFitFallbackBuffer {
  struct InternalEncoderBestFitFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct InternalEncoderBestFitFallbackBuffer__Fields fields;
};
struct __declspec(align(8)) DecoderFallback__Fields {
  bool bIsMicrosoftBestFitFallback;
};
struct DecoderFallback {
  struct DecoderFallback__Class *klass;
  struct MonitorData *monitor;
  struct DecoderFallback__Fields fields;
};
struct InternalDecoderBestFitFallback__Fields {
  struct DecoderFallback__Fields _;
  struct Encoding * encoding;
  struct Char__Array * arrayBestFit;
  uint16_t cReplacement;
};
struct InternalDecoderBestFitFallback {
  struct InternalDecoderBestFitFallback__Class *klass;
  struct MonitorData *monitor;
  struct InternalDecoderBestFitFallback__Fields fields;
};
struct __declspec(align(8)) DecoderFallbackBuffer__Fields {
  uint8_t * byteStart;
  uint16_t * charEnd;
};
struct DecoderFallbackBuffer {
  struct DecoderFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct DecoderFallbackBuffer__Fields fields;
};
struct InternalDecoderBestFitFallbackBuffer__Fields {
  struct DecoderFallbackBuffer__Fields _;
  uint16_t cBestFit;
  int32_t iCount;
  int32_t iSize;
  struct InternalDecoderBestFitFallback * oFallback;
};
struct InternalDecoderBestFitFallbackBuffer {
  struct InternalDecoderBestFitFallbackBuffer__Class *klass;
  struct MonitorData *monitor;
  struct InternalDecoderBestFitFallbackBuffer__Fields fields;
};
struct ASCIIEncoding__Fields {
  struct Encoding__Fields _;
};
struct ASCIIEncoding {
  struct ASCIIEncoding__Class *klass;
  struct MonitorData *monitor;
  struct ASCIIEncoding__Fields fields;
};
struct __declspec(align(8)) Decoder__Fields {
  struct DecoderFallback * m_fallback;
  struct DecoderFallbackBuffer * m_fallbackBuffer;
};
struct Decoder {
  struct Decoder__Class *klass;
  struct MonitorData *monitor;
  struct Decoder__Fields fields;
};
struct DecoderNLS__Fields {
  struct Decoder__Fields _;
  struct Encoding * m_encoding;
  bool m_mustFlush;
  bool m_throwOnOverflow;
  int32_t m_bytesUsed;
};
struct DecoderNLS {
  struct DecoderNLS__Class *klass;
  struct MonitorData *monitor;
  struct DecoderNLS__Fields fields;
};
struct CodePageDataItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CodePageDataItem__StaticFields {
  struct Char__Array * sep;
};
struct CodePageDataItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CodePageDataItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CodePageDataItem__VTable vtable;
};
struct Encoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetByteCount;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData GetBytes;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
};
struct Encoder__StaticFields {
};
struct Encoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Encoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Encoder__VTable vtable;
};
struct EncoderNLS__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData GetByteCount;
  VirtualInvokeData GetByteCount_1;
  VirtualInvokeData GetBytes;
  VirtualInvokeData GetBytes_1;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_HasState;
};
struct EncoderNLS__StaticFields {
};
struct EncoderNLS__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EncoderNLS__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EncoderNLS__VTable vtable;
};
struct InternalEncoderBestFitFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Fallback;
  VirtualInvokeData Fallback_1;
  VirtualInvokeData GetNextChar;
  VirtualInvokeData MovePrevious;
  VirtualInvokeData get_Remaining;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
};
struct InternalEncoderBestFitFallbackBuffer__StaticFields {
  struct Object * s_InternalSyncObject;
};
struct InternalEncoderBestFitFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalEncoderBestFitFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalEncoderBestFitFallbackBuffer__VTable vtable;
};
struct EncoderFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
};
struct EncoderFallbackBuffer__StaticFields {
};
struct EncoderFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EncoderFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EncoderFallbackBuffer__VTable vtable;
};
struct InternalEncoderBestFitFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateFallbackBuffer;
  VirtualInvokeData get_MaxCharCount;
};
struct InternalEncoderBestFitFallback__StaticFields {
};
struct InternalEncoderBestFitFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalEncoderBestFitFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalEncoderBestFitFallback__VTable vtable;
};
struct EncoderFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct EncoderFallback__StaticFields {
  struct EncoderFallback * replacementFallback;
  struct EncoderFallback * exceptionFallback;
  struct Object * s_InternalSyncObject;
};
struct EncoderFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EncoderFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EncoderFallback__VTable vtable;
};
struct InternalDecoderBestFitFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Fallback;
  VirtualInvokeData GetNextChar;
  VirtualInvokeData get_Remaining;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
  VirtualInvokeData InternalFallback_1;
};
struct InternalDecoderBestFitFallbackBuffer__StaticFields {
  struct Object * s_InternalSyncObject;
};
struct InternalDecoderBestFitFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalDecoderBestFitFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalDecoderBestFitFallbackBuffer__VTable vtable;
};
struct DecoderFallbackBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData Reset;
  VirtualInvokeData InternalFallback;
  VirtualInvokeData InternalFallback_1;
};
struct DecoderFallbackBuffer__StaticFields {
};
struct DecoderFallbackBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderFallbackBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderFallbackBuffer__VTable vtable;
};
struct InternalDecoderBestFitFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateFallbackBuffer;
  VirtualInvokeData get_MaxCharCount;
};
struct InternalDecoderBestFitFallback__StaticFields {
};
struct InternalDecoderBestFitFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalDecoderBestFitFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalDecoderBestFitFallback__VTable vtable;
};
struct DecoderFallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct DecoderFallback__StaticFields {
  struct DecoderFallback * replacementFallback;
  struct DecoderFallback * exceptionFallback;
  struct Object * s_InternalSyncObject;
};
struct DecoderFallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderFallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderFallback__VTable vtable;
};
struct Decoder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData GetChars;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
};
struct Decoder__StaticFields {
};
struct Decoder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Decoder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Decoder__VTable vtable;
};
struct DecoderNLS__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData GetCharCount_2;
  VirtualInvokeData GetChars;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData GetChars_2;
  VirtualInvokeData Convert;
  VirtualInvokeData Convert_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData get_HasState;
};
struct DecoderNLS__StaticFields {
};
struct DecoderNLS__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DecoderNLS__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DecoderNLS__VTable vtable;
};
struct ASCIIEncoding__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData SetDefaultFallbacks;
  VirtualInvokeData GetPreamble;
  VirtualInvokeData get_EncodingName;
  VirtualInvokeData get_WebName;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetByteCount;
  VirtualInvokeData GetByteCount_1;
  VirtualInvokeData GetByteCount_2;
  VirtualInvokeData GetByteCount_3;
  VirtualInvokeData GetBytes;
  VirtualInvokeData GetBytes_1;
  VirtualInvokeData GetBytes_2;
  VirtualInvokeData GetBytes_3;
  VirtualInvokeData GetBytes_4;
  VirtualInvokeData GetBytes_5;
  VirtualInvokeData GetBytes_6;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData GetCharCount_2;
  VirtualInvokeData GetChars;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData GetChars_2;
  VirtualInvokeData GetChars_3;
  VirtualInvokeData get_CodePage;
  VirtualInvokeData GetDecoder;
  VirtualInvokeData GetEncoder;
  VirtualInvokeData GetMaxByteCount;
  VirtualInvokeData GetMaxCharCount;
  VirtualInvokeData GetString;
  VirtualInvokeData GetString_1;
  VirtualInvokeData GetBestFitUnicodeToBytesData;
  VirtualInvokeData GetBestFitBytesToUnicodeData;
};
struct ASCIIEncoding__StaticFields {
};
struct ASCIIEncoding__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ASCIIEncoding__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ASCIIEncoding__VTable vtable;
};
struct Encoding__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData SetDefaultFallbacks;
  VirtualInvokeData GetPreamble;
  VirtualInvokeData get_EncodingName;
  VirtualInvokeData get_WebName;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetByteCount;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetByteCount_1;
  VirtualInvokeData GetByteCount_2;
  VirtualInvokeData GetBytes;
  VirtualInvokeData GetBytes_1;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData GetBytes_2;
  VirtualInvokeData GetBytes_3;
  VirtualInvokeData GetBytes_4;
  VirtualInvokeData GetBytes_5;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData GetCharCount;
  VirtualInvokeData GetCharCount_1;
  VirtualInvokeData GetChars;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData GetChars_1;
  VirtualInvokeData GetChars_2;
  VirtualInvokeData get_CodePage;
  VirtualInvokeData GetDecoder;
  VirtualInvokeData GetEncoder;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData GetString;
  VirtualInvokeData GetString_1;
  VirtualInvokeData GetBestFitUnicodeToBytesData;
  VirtualInvokeData GetBestFitBytesToUnicodeData;
};
struct Encoding__StaticFields {
  struct Encoding * defaultEncoding;
  struct Encoding * unicodeEncoding;
  struct Encoding * bigEndianUnicode;
  struct Encoding * utf7Encoding;
  struct Encoding * utf8Encoding;
  struct Encoding * utf32Encoding;
  struct Encoding * asciiEncoding;
  struct Encoding * latin1Encoding;
  struct Hashtable * encodings;
  struct Object * s_InternalSyncObject;
};
struct Encoding__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Encoding__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Encoding__VTable vtable;
};

enum NormalizationForm__Enum : int32_t {
  NormalizationForm__Enum_FormC = 1,
  NormalizationForm__Enum_FormD = 2,
  NormalizationForm__Enum_FormKC = 5,
  NormalizationForm__Enum_FormKD = 6,
};
struct NormalizationForm__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NormalizationForm__Enum value;
};

struct StringComparer {
  struct StringComparer__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CultureAwareComparer__Fields {
  struct CompareInfo * _compareInfo;
  bool _ignoreCase;
  enum CompareOptions__Enum _options;
};
struct CultureAwareComparer {
  struct CultureAwareComparer__Class *klass;
  struct MonitorData *monitor;
  struct CultureAwareComparer__Fields fields;
};
struct CultureAwareComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Compare_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData Compare_2;
  VirtualInvokeData Equals_3;
  VirtualInvokeData GetHashCode_3;
};
struct CultureAwareComparer__StaticFields {
};
struct CultureAwareComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CultureAwareComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CultureAwareComparer__VTable vtable;
};
struct StringComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Compare_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct StringComparer__StaticFields {
  struct StringComparer * _invariantCulture;
  struct StringComparer * _invariantCultureIgnoreCase;
  struct StringComparer * _ordinal;
  struct StringComparer * _ordinalIgnoreCase;
};
struct StringComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringComparer__VTable vtable;
};

struct __declspec(align(8)) OrdinalComparer__Fields {
  bool _ignoreCase;
};
struct OrdinalComparer {
  struct OrdinalComparer__Class *klass;
  struct MonitorData *monitor;
  struct OrdinalComparer__Fields fields;
};
struct OrdinalComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Compare_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
  VirtualInvokeData Compare_2;
  VirtualInvokeData Equals_3;
  VirtualInvokeData GetHashCode_3;
};
struct OrdinalComparer__StaticFields {
};
struct OrdinalComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OrdinalComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OrdinalComparer__VTable vtable;
};

struct STAThreadAttribute {
  struct STAThreadAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct STAThreadAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct STAThreadAttribute__StaticFields {
};
struct STAThreadAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct STAThreadAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct STAThreadAttribute__VTable vtable;
};

struct ThreadStaticAttribute {
  struct ThreadStaticAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ThreadStaticAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ThreadStaticAttribute__StaticFields {
};
struct ThreadStaticAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadStaticAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadStaticAttribute__VTable vtable;
};

struct TimeoutException__Fields {
  struct SystemException__Fields _;
};
struct TimeoutException {
  struct TimeoutException__Class *klass;
  struct MonitorData *monitor;
  struct TimeoutException__Fields fields;
};
struct TimeoutException__VTable {
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
struct TimeoutException__StaticFields {
};
struct TimeoutException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeoutException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeoutException__VTable vtable;
};

struct __declspec(align(8)) List_1_System_TimeZoneInfo_AdjustmentRule___Fields {
  struct TimeZoneInfo_AdjustmentRule__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_TimeZoneInfo_AdjustmentRule_ {
  struct List_1_System_TimeZoneInfo_AdjustmentRule___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_TimeZoneInfo_AdjustmentRule___Fields fields;
};
struct TimeZoneInfo_TransitionTime {
  struct DateTime m_timeOfDay;
  uint8_t m_month;
  uint8_t m_week;
  uint8_t m_day;
  enum DayOfWeek__Enum m_dayOfWeek;
  bool m_isFixedDateRule;
};
struct TimeZoneInfo_TransitionTime__Boxed {
  struct TimeZoneInfo_TransitionTime__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo_TransitionTime fields;
};
struct __declspec(align(8)) TimeZoneInfo_AdjustmentRule__Fields {
  struct DateTime m_dateStart;
  struct DateTime m_dateEnd;
  struct TimeSpan m_daylightDelta;
  struct TimeZoneInfo_TransitionTime m_daylightTransitionStart;
  struct TimeZoneInfo_TransitionTime m_daylightTransitionEnd;
  struct TimeSpan m_baseUtcOffsetDelta;
};
struct TimeZoneInfo_AdjustmentRule {
  struct TimeZoneInfo_AdjustmentRule__Class *klass;
  struct MonitorData *monitor;
  struct TimeZoneInfo_AdjustmentRule__Fields fields;
};
struct TimeZoneInfo_AdjustmentRule__Array {
  struct TimeZoneInfo_AdjustmentRule__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TimeZoneInfo_AdjustmentRule * vector[32];
};
struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule_ {
  struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___Class *klass;
  struct MonitorData *monitor;
};
struct TimeZoneInfo_TransitionTime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
};
struct TimeZoneInfo_TransitionTime__StaticFields {
};
struct TimeZoneInfo_TransitionTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo_TransitionTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo_TransitionTime__VTable vtable;
};
struct TimeZoneInfo_AdjustmentRule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
};
struct TimeZoneInfo_AdjustmentRule__StaticFields {
};
struct TimeZoneInfo_AdjustmentRule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeZoneInfo_AdjustmentRule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeZoneInfo_AdjustmentRule__VTable vtable;
};
struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___StaticFields {
};
struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___VTable vtable;
};
struct List_1_System_TimeZoneInfo_AdjustmentRule___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};}