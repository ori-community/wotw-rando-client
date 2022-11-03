namespace app {
    struct ReflectionOnlyType__StaticFields {
    };

    struct ReflectionOnlyType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectionOnlyType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectionOnlyType__VTable vtable;
    };

    struct SByte___VTable {
    };

    struct SByte___StaticFields {
    };

    struct SByte___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SByte___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SByte___VTable vtable;
    };

    struct SerializableAttribute {
        struct SerializableAttribute__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializableAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializableAttribute__VTable vtable;
    };

    struct __declspec(align(8)) SharedStatics__Fields {
        struct Tokenizer_StringMaker* _maker;
    };

    struct SharedStatics {
        struct SharedStatics__Class* klass;
        MonitorData* monitor;
        struct SharedStatics__Fields fields;
    };

    struct __declspec(align(8)) Tokenizer_StringMaker__Fields {
        struct String__Array* aStrings;
        uint32_t cStringsMax;
        uint32_t cStringsUsed;
        struct StringBuilder* _outStringBuilder;
        struct Char__Array* _outChars;
        int32_t _outIndex;
    };

    struct Tokenizer_StringMaker {
        struct Tokenizer_StringMaker__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tokenizer_StringMaker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tokenizer_StringMaker__VTable vtable;
    };

    struct SharedStatics__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SharedStatics__StaticFields {
        struct SharedStatics* _sharedStatics;
    };

    struct SharedStatics__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SharedStatics__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SharedStatics__VTable vtable;
    };

    struct Tokenizer_StringMaker___VTable {
    };

    struct Tokenizer_StringMaker___StaticFields {
    };

    struct Tokenizer_StringMaker___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tokenizer_StringMaker___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tokenizer_StringMaker___VTable vtable;
    };

    struct StackOverflowException__Fields {
        struct SystemException__Fields _;
    };

    struct StackOverflowException {
        struct StackOverflowException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StackOverflowException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StackOverflowException__VTable vtable;
    };

    enum class StringComparison__Enum : int32_t {
        CurrentCulture = 0x00000000,
        CurrentCultureIgnoreCase = 0x00000001,
        InvariantCulture = 0x00000002,
        InvariantCultureIgnoreCase = 0x00000003,
        Ordinal = 0x00000004,
        OrdinalIgnoreCase = 0x00000005,
    };

    struct StringComparison__Enum__Boxed {
        struct StringComparison__Enum__Class* klass;
        MonitorData* monitor;
        StringComparison__Enum value;
    };

    struct StringComparison__Enum__VTable {
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

    struct StringComparison__Enum__StaticFields {
    };

    struct StringComparison__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringComparison__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringComparison__Enum__VTable vtable;
    };

    enum class StringSplitOptions__Enum : int32_t {
        None = 0x00000000,
        RemoveEmptyEntries = 0x00000001,
    };

    struct StringSplitOptions__Enum__Boxed {
        struct StringSplitOptions__Enum__Class* klass;
        MonitorData* monitor;
        StringSplitOptions__Enum value;
    };

    struct StringSplitOptions__Enum__VTable {
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

    struct StringSplitOptions__Enum__StaticFields {
    };

    struct StringSplitOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringSplitOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringSplitOptions__Enum__VTable vtable;
    };

    struct Int32__1__VTable {
    };

    struct Int32__1__StaticFields {
    };

    struct Int32__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int32__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int32__1__VTable vtable;
    };

    struct SBytePtr {
        struct SBytePtr__Class* klass;
        MonitorData* monitor;
    };

    struct SBytePtr__VTable {
    };

    struct SBytePtr__StaticFields {
    };

    struct SBytePtr__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SBytePtr__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SBytePtr__VTable vtable;
    };

    struct __declspec(align(8)) Encoding__Fields {
        int32_t m_codePage;
        struct CodePageDataItem* dataItem;
        bool m_deserializedFromEverett;
        bool m_isReadOnly;
        struct EncoderFallback* encoderFallback;
        struct DecoderFallback* decoderFallback;
    };

    struct Encoding {
        struct Encoding__Class* klass;
        MonitorData* monitor;
        struct Encoding__Fields fields;
    };

    struct __declspec(align(8)) CodePageDataItem__Fields {
        int32_t m_dataIndex;
        int32_t m_uiFamilyCodePage;
        struct String* m_webName;
        struct String* m_headerName;
        struct String* m_bodyName;
        uint32_t m_flags;
    };

    struct CodePageDataItem {
        struct CodePageDataItem__Class* klass;
        MonitorData* monitor;
        struct CodePageDataItem__Fields fields;
    };

    struct __declspec(align(8)) EncoderFallback__Fields {
        bool bIsMicrosoftBestFitFallback;
    };

    struct EncoderFallback {
        struct EncoderFallback__Class* klass;
        MonitorData* monitor;
        struct EncoderFallback__Fields fields;
    };

    struct InternalEncoderBestFitFallback__Fields {
        struct EncoderFallback__Fields _;
        struct Encoding* encoding;
        struct Char__Array* arrayBestFit;
    };

    struct InternalEncoderBestFitFallback {
        struct InternalEncoderBestFitFallback__Class* klass;
        MonitorData* monitor;
        struct InternalEncoderBestFitFallback__Fields fields;
    };

    struct __declspec(align(8)) EncoderFallbackBuffer__Fields {
        uint16_t* charStart;
        uint16_t* charEnd;
        struct EncoderNLS* encoder;
        bool setEncoder;
        bool bUsedEncoder;
        bool bFallingBack;
        int32_t iRecursionCount;
    };

    struct EncoderFallbackBuffer {
        struct EncoderFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct EncoderFallbackBuffer__Fields fields;
    };

    struct __declspec(align(8)) Encoder__Fields {
        struct EncoderFallback* m_fallback;
        struct EncoderFallbackBuffer* m_fallbackBuffer;
    };

    struct Encoder {
        struct Encoder__Class* klass;
        MonitorData* monitor;
        struct Encoder__Fields fields;
    };

    struct EncoderNLS__Fields {
        struct Encoder__Fields _;
        uint16_t charLeftOver;
        struct Encoding* m_encoding;
        bool m_mustFlush;
        bool m_throwOnOverflow;
        int32_t m_charsUsed;
    };

    struct EncoderNLS {
        struct EncoderNLS__Class* klass;
        MonitorData* monitor;
        struct EncoderNLS__Fields fields;
    };

    struct InternalEncoderBestFitFallbackBuffer__Fields {
        struct EncoderFallbackBuffer__Fields _;
        uint16_t cBestFit;
        struct InternalEncoderBestFitFallback* oFallback;
        int32_t iCount;
        int32_t iSize;
    };

    struct InternalEncoderBestFitFallbackBuffer {
        struct InternalEncoderBestFitFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct InternalEncoderBestFitFallbackBuffer__Fields fields;
    };

    struct __declspec(align(8)) DecoderFallback__Fields {
        bool bIsMicrosoftBestFitFallback;
    };

    struct DecoderFallback {
        struct DecoderFallback__Class* klass;
        MonitorData* monitor;
        struct DecoderFallback__Fields fields;
    };

    struct InternalDecoderBestFitFallback__Fields {
        struct DecoderFallback__Fields _;
        struct Encoding* encoding;
        struct Char__Array* arrayBestFit;
        uint16_t cReplacement;
    };

    struct InternalDecoderBestFitFallback {
        struct InternalDecoderBestFitFallback__Class* klass;
        MonitorData* monitor;
        struct InternalDecoderBestFitFallback__Fields fields;
    };

    struct __declspec(align(8)) DecoderFallbackBuffer__Fields {
        uint8_t* byteStart;
        uint16_t* charEnd;
    };

    struct DecoderFallbackBuffer {
        struct DecoderFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct DecoderFallbackBuffer__Fields fields;
    };

    struct InternalDecoderBestFitFallbackBuffer__Fields {
        struct DecoderFallbackBuffer__Fields _;
        uint16_t cBestFit;
        int32_t iCount;
        int32_t iSize;
        struct InternalDecoderBestFitFallback* oFallback;
    };

    struct InternalDecoderBestFitFallbackBuffer {
        struct InternalDecoderBestFitFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct InternalDecoderBestFitFallbackBuffer__Fields fields;
    };

    struct ASCIIEncoding__Fields {
        struct Encoding__Fields _;
    };

    struct ASCIIEncoding {
        struct ASCIIEncoding__Class* klass;
        MonitorData* monitor;
        struct ASCIIEncoding__Fields fields;
    };

    struct __declspec(align(8)) Decoder__Fields {
        struct DecoderFallback* m_fallback;
        struct DecoderFallbackBuffer* m_fallbackBuffer;
    };

    struct Decoder {
        struct Decoder__Class* klass;
        MonitorData* monitor;
        struct Decoder__Fields fields;
    };

    struct DecoderNLS__Fields {
        struct Decoder__Fields _;
        struct Encoding* m_encoding;
        bool m_mustFlush;
        bool m_throwOnOverflow;
        int32_t m_bytesUsed;
    };

    struct DecoderNLS {
        struct DecoderNLS__Class* klass;
        MonitorData* monitor;
        struct DecoderNLS__Fields fields;
    };

    struct CodePageDataItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CodePageDataItem__StaticFields {
        struct Char__Array* sep;
    };

    struct CodePageDataItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CodePageDataItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderNLS__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Object* s_InternalSyncObject;
    };

    struct InternalEncoderBestFitFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InternalEncoderBestFitFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InternalEncoderBestFitFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct EncoderFallback* replacementFallback;
        struct EncoderFallback* exceptionFallback;
        struct Object* s_InternalSyncObject;
    };

    struct EncoderFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Object* s_InternalSyncObject;
    };

    struct InternalDecoderBestFitFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InternalDecoderBestFitFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InternalDecoderBestFitFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct DecoderFallback* replacementFallback;
        struct DecoderFallback* exceptionFallback;
        struct Object* s_InternalSyncObject;
    };

    struct DecoderFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Decoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderNLS__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ASCIIEncoding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct Encoding* defaultEncoding;
        struct Encoding* unicodeEncoding;
        struct Encoding* bigEndianUnicode;
        struct Encoding* utf7Encoding;
        struct Encoding* utf8Encoding;
        struct Encoding* utf32Encoding;
        struct Encoding* asciiEncoding;
        struct Encoding* latin1Encoding;
        struct Hashtable* encodings;
        struct Object* s_InternalSyncObject;
    };

    struct Encoding__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Encoding__VTable vtable;
    };

    enum class NormalizationForm__Enum : int32_t {
        FormC = 0x00000001,
        FormD = 0x00000002,
        FormKC = 0x00000005,
        FormKD = 0x00000006,
    };

    struct NormalizationForm__Enum__Boxed {
        struct NormalizationForm__Enum__Class* klass;
        MonitorData* monitor;
        NormalizationForm__Enum value;
    };

    struct NormalizationForm__Enum__VTable {
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

    struct NormalizationForm__Enum__StaticFields {
    };

    struct NormalizationForm__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NormalizationForm__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NormalizationForm__Enum__VTable vtable;
    };

    struct StringComparer {
        struct StringComparer__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CultureAwareComparer__Fields {
        struct CompareInfo* _compareInfo;
        bool _ignoreCase;
        CompareOptions__Enum _options;
    };

} // namespace app
