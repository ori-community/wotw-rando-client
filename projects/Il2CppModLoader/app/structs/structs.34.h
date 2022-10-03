namespace app {
    struct ConsoleScreenBufferInfo__Boxed {
        struct ConsoleScreenBufferInfo__Class* klass;
        MonitorData* monitor;
        struct ConsoleScreenBufferInfo fields;
    };

    struct Coord__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Coord__StaticFields {
    };

    struct Coord__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Coord__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Coord__VTable vtable;
    };

    struct SmallRect__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SmallRect__StaticFields {
    };

    struct SmallRect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SmallRect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SmallRect__VTable vtable;
    };

    struct ConsoleScreenBufferInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConsoleScreenBufferInfo__StaticFields {
    };

    struct ConsoleScreenBufferInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleScreenBufferInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleScreenBufferInfo__VTable vtable;
    };

    struct ConsoleScreenBufferInfo___VTable {
    };

    struct ConsoleScreenBufferInfo___StaticFields {
    };

    struct ConsoleScreenBufferInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleScreenBufferInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleScreenBufferInfo___VTable vtable;
    };

    struct InputRecord {
        int16_t EventType;
        bool KeyDown;
        int16_t RepeatCount;
        int16_t VirtualKeyCode;
        int16_t VirtualScanCode;
        uint16_t Character;
        int32_t ControlKeyState;
        int32_t pad1;
        bool pad2;
    };

    struct InputRecord__Boxed {
        struct InputRecord__Class* klass;
        MonitorData* monitor;
        struct InputRecord fields;
    };

    struct InputRecord__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InputRecord__StaticFields {
    };

    struct InputRecord__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InputRecord__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InputRecord__VTable vtable;
    };

    struct InputRecord___VTable {
    };

    struct InputRecord___StaticFields {
    };

    struct InputRecord___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InputRecord___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InputRecord___VTable vtable;
    };

    struct _ComObject {
        struct _ComObject__Class* klass;
        MonitorData* monitor;
    };

    struct _ComObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct _ComObject__StaticFields {
    };

    struct _ComObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct _ComObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct _ComObject__VTable vtable;
    };

    struct DecoderExceptionFallback__Fields {
        struct DecoderFallback__Fields _;
    };

    struct DecoderExceptionFallback {
        struct DecoderExceptionFallback__Class* klass;
        MonitorData* monitor;
        struct DecoderExceptionFallback__Fields fields;
    };

    struct DecoderExceptionFallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateFallbackBuffer;
        VirtualInvokeData get_MaxCharCount;
    };

    struct DecoderExceptionFallback__StaticFields {
    };

    struct DecoderExceptionFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderExceptionFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecoderExceptionFallback__VTable vtable;
    };

    struct DecoderExceptionFallbackBuffer__Fields {
        struct DecoderFallbackBuffer__Fields _;
    };

    struct DecoderExceptionFallbackBuffer {
        struct DecoderExceptionFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct DecoderExceptionFallbackBuffer__Fields fields;
    };

    struct DecoderExceptionFallbackBuffer__VTable {
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

    struct DecoderExceptionFallbackBuffer__StaticFields {
    };

    struct DecoderExceptionFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderExceptionFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecoderExceptionFallbackBuffer__VTable vtable;
    };

    struct DecoderFallbackException__Fields {
        struct ArgumentException__Fields _;
        struct Byte__Array* bytesUnknown;
        int32_t index;
    };

    struct DecoderFallbackException {
        struct DecoderFallbackException__Class* klass;
        MonitorData* monitor;
        struct DecoderFallbackException__Fields fields;
    };

    struct DecoderFallbackException__VTable {
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

    struct DecoderFallbackException__StaticFields {
    };

    struct DecoderFallbackException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderFallbackException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecoderFallbackException__VTable vtable;
    };

    struct DecoderReplacementFallback__Fields {
        struct DecoderFallback__Fields _;
        struct String* strDefault;
    };

    struct DecoderReplacementFallback {
        struct DecoderReplacementFallback__Class* klass;
        MonitorData* monitor;
        struct DecoderReplacementFallback__Fields fields;
    };

    struct DecoderReplacementFallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateFallbackBuffer;
        VirtualInvokeData get_MaxCharCount;
    };

    struct DecoderReplacementFallback__StaticFields {
    };

    struct DecoderReplacementFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderReplacementFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecoderReplacementFallback__VTable vtable;
    };

    struct DecoderReplacementFallbackBuffer__Fields {
        struct DecoderFallbackBuffer__Fields _;
        struct String* strDefault;
        int32_t fallbackCount;
        int32_t fallbackIndex;
    };

    struct DecoderReplacementFallbackBuffer {
        struct DecoderReplacementFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct DecoderReplacementFallbackBuffer__Fields fields;
    };

    struct DecoderReplacementFallbackBuffer__VTable {
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

    struct DecoderReplacementFallbackBuffer__StaticFields {
    };

    struct DecoderReplacementFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DecoderReplacementFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DecoderReplacementFallbackBuffer__VTable vtable;
    };

    struct EncoderExceptionFallback__Fields {
        struct EncoderFallback__Fields _;
    };

    struct EncoderExceptionFallback {
        struct EncoderExceptionFallback__Class* klass;
        MonitorData* monitor;
        struct EncoderExceptionFallback__Fields fields;
    };

    struct EncoderExceptionFallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateFallbackBuffer;
        VirtualInvokeData get_MaxCharCount;
    };

    struct EncoderExceptionFallback__StaticFields {
    };

    struct EncoderExceptionFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderExceptionFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncoderExceptionFallback__VTable vtable;
    };

    struct EncoderExceptionFallbackBuffer__Fields {
        struct EncoderFallbackBuffer__Fields _;
    };

    struct EncoderExceptionFallbackBuffer {
        struct EncoderExceptionFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct EncoderExceptionFallbackBuffer__Fields fields;
    };

    struct EncoderExceptionFallbackBuffer__VTable {
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

    struct EncoderExceptionFallbackBuffer__StaticFields {
    };

    struct EncoderExceptionFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderExceptionFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncoderExceptionFallbackBuffer__VTable vtable;
    };

    struct EncoderFallbackException__Fields {
        struct ArgumentException__Fields _;
        uint16_t charUnknown;
        uint16_t charUnknownHigh;
        uint16_t charUnknownLow;
        int32_t index;
    };

    struct EncoderFallbackException {
        struct EncoderFallbackException__Class* klass;
        MonitorData* monitor;
        struct EncoderFallbackException__Fields fields;
    };

    struct EncoderFallbackException__VTable {
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

    struct EncoderFallbackException__StaticFields {
    };

    struct EncoderFallbackException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderFallbackException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncoderFallbackException__VTable vtable;
    };

    struct EncoderReplacementFallback__Fields {
        struct EncoderFallback__Fields _;
        struct String* strDefault;
    };

    struct EncoderReplacementFallback {
        struct EncoderReplacementFallback__Class* klass;
        MonitorData* monitor;
        struct EncoderReplacementFallback__Fields fields;
    };

    struct EncoderReplacementFallback__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateFallbackBuffer;
        VirtualInvokeData get_MaxCharCount;
    };

    struct EncoderReplacementFallback__StaticFields {
    };

    struct EncoderReplacementFallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderReplacementFallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncoderReplacementFallback__VTable vtable;
    };

    struct EncoderReplacementFallbackBuffer__Fields {
        struct EncoderFallbackBuffer__Fields _;
        struct String* strDefault;
        int32_t fallbackCount;
        int32_t fallbackIndex;
    };

    struct EncoderReplacementFallbackBuffer {
        struct EncoderReplacementFallbackBuffer__Class* klass;
        MonitorData* monitor;
        struct EncoderReplacementFallbackBuffer__Fields fields;
    };

    struct EncoderReplacementFallbackBuffer__VTable {
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

    struct EncoderReplacementFallbackBuffer__StaticFields {
    };

    struct EncoderReplacementFallbackBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncoderReplacementFallbackBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncoderReplacementFallbackBuffer__VTable vtable;
    };

    struct Encoding_DefaultEncoder__Fields {
        struct Encoder__Fields _;
        struct Encoding* m_encoding;
        bool m_hasInitializedEncoding;
        uint16_t charLeftOver;
    };

    struct Encoding_DefaultEncoder {
        struct Encoding_DefaultEncoder__Class* klass;
        MonitorData* monitor;
        struct Encoding_DefaultEncoder__Fields fields;
    };

    struct Encoding_DefaultEncoder__VTable {
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
        VirtualInvokeData GetRealObject;
    };

    struct Encoding_DefaultEncoder__StaticFields {
    };

    struct Encoding_DefaultEncoder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoding_DefaultEncoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Encoding_DefaultEncoder__VTable vtable;
    };

    struct Encoding_DefaultDecoder__Fields {
        struct Decoder__Fields _;
        struct Encoding* m_encoding;
        bool m_hasInitializedEncoding;
    };

    struct Encoding_DefaultDecoder {
        struct Encoding_DefaultDecoder__Class* klass;
        MonitorData* monitor;
        struct Encoding_DefaultDecoder__Fields fields;
    };

    struct Encoding_DefaultDecoder__VTable {
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
        VirtualInvokeData GetRealObject;
    };

    struct Encoding_DefaultDecoder__StaticFields {
    };

    struct Encoding_DefaultDecoder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoding_DefaultDecoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Encoding_DefaultDecoder__VTable vtable;
    };

    struct __declspec(align(8)) Encoding_EncodingCharBuffer__Fields {
        uint16_t* chars;
        uint16_t* charStart;
        uint16_t* charEnd;
        int32_t charCountResult;
        struct Encoding* enc;
        struct DecoderNLS* decoder;
        uint8_t* byteStart;
        uint8_t* byteEnd;
        uint8_t* bytes;
        struct DecoderFallbackBuffer* fallbackBuffer;
    };

    struct Encoding_EncodingCharBuffer {
        struct Encoding_EncodingCharBuffer__Class* klass;
        MonitorData* monitor;
        struct Encoding_EncodingCharBuffer__Fields fields;
    };

    struct Encoding_EncodingCharBuffer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Encoding_EncodingCharBuffer__StaticFields {
    };

    struct Encoding_EncodingCharBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoding_EncodingCharBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Encoding_EncodingCharBuffer__VTable vtable;
    };

    struct __declspec(align(8)) Encoding_EncodingByteBuffer__Fields {
        uint8_t* bytes;
        uint8_t* byteStart;
        uint8_t* byteEnd;
        uint16_t* chars;
        uint16_t* charStart;
        uint16_t* charEnd;
        int32_t byteCountResult;
        struct Encoding* enc;
        struct EncoderNLS* encoder;
        struct EncoderFallbackBuffer* fallbackBuffer;
    };

    struct Encoding_EncodingByteBuffer {
        struct Encoding_EncodingByteBuffer__Class* klass;
        MonitorData* monitor;
        struct Encoding_EncodingByteBuffer__Fields fields;
    };

    struct Encoding_EncodingByteBuffer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Encoding_EncodingByteBuffer__StaticFields {
    };

    struct Encoding_EncodingByteBuffer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Encoding_EncodingByteBuffer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Encoding_EncodingByteBuffer__VTable vtable;
    };

    struct EncodingNLS__Fields {
        struct Encoding__Fields _;
    };

    struct EncodingNLS {
        struct EncodingNLS__Class* klass;
        MonitorData* monitor;
        struct EncodingNLS__Fields fields;
    };

    struct Latin1Encoding__Fields {
        struct EncodingNLS__Fields _;
    };

    struct Latin1Encoding {
        struct Latin1Encoding__Class* klass;
        MonitorData* monitor;
        struct Latin1Encoding__Fields fields;
    };

    struct Latin1Encoding__VTable {
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
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    };

    struct Latin1Encoding__StaticFields {
        struct Char__Array* arrayCharBestFit;
    };

    struct Latin1Encoding__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Latin1Encoding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Latin1Encoding__VTable vtable;
    };

    struct EncodingNLS__VTable {
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
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData GetString;
        VirtualInvokeData GetString_1;
        VirtualInvokeData GetBestFitUnicodeToBytesData;
        VirtualInvokeData GetBestFitBytesToUnicodeData;
    };

    struct EncodingNLS__StaticFields {
    };

    struct EncodingNLS__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncodingNLS__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncodingNLS__VTable vtable;
    };

    struct EncodingProvider {
        struct EncodingProvider__Class* klass;
        MonitorData* monitor;
    };

    struct EncodingProvider__Array {
        struct EncodingProvider__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EncodingProvider* vector[32];
    };

    struct EncodingProvider__Array__VTable {
    };

    struct EncodingProvider__Array__StaticFields {
    };

    struct EncodingProvider__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncodingProvider__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncodingProvider__Array__VTable vtable;
    };

    struct EncodingProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData GetEncoding;
        VirtualInvokeData GetEncoding_1;
    };

    struct EncodingProvider__StaticFields {
        struct Object* s_InternalSyncObject;
        struct EncodingProvider__Array* s_providers;
    };

    struct EncodingProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EncodingProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EncodingProvider__VTable vtable;
    };

    struct StringBuilder___VTable {
    };

    struct StringBuilder___StaticFields {
    };

    struct StringBuilder___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringBuilder___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringBuilder___VTable vtable;
    };

    struct UnicodeEncoding__Fields {
        struct Encoding__Fields _;
        bool isThrowException;
        bool bigEndian;
        bool byteOrderMark;
    };

    struct UnicodeEncoding {
        struct UnicodeEncoding__Class* klass;
        MonitorData* monitor;
        struct UnicodeEncoding__Fields fields;
    };

    struct UnicodeEncoding__VTable {
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

    struct UnicodeEncoding__StaticFields {
        uint64_t highLowPatternMask;
    };

    struct UnicodeEncoding__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnicodeEncoding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnicodeEncoding__VTable vtable;
    };

    struct UnicodeEncoding_Decoder__Fields {
        struct DecoderNLS__Fields _;
        int32_t lastByte;
        uint16_t lastChar;
    };

    struct UnicodeEncoding_Decoder {
        struct UnicodeEncoding_Decoder__Class* klass;
        MonitorData* monitor;
        struct UnicodeEncoding_Decoder__Fields fields;
    };

    struct UnicodeEncoding_Decoder__VTable {
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

    struct UnicodeEncoding_Decoder__StaticFields {
    };

    struct UnicodeEncoding_Decoder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnicodeEncoding_Decoder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnicodeEncoding_Decoder__VTable vtable;
    };

    struct UTF32Encoding__Fields {
        struct Encoding__Fields _;
        bool emitUTF32ByteOrderMark;
        bool isThrowException;
        bool bigEndian;
    };

    struct UTF32Encoding {
        struct UTF32Encoding__Class* klass;
        MonitorData* monitor;
        struct UTF32Encoding__Fields fields;
    };

    struct UTF32Encoding__VTable {
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

} // namespace app
