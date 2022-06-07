namespace app {
struct OutputBuffer {
    struct OutputBuffer__Class *klass;
    MonitorData *monitor;
    struct OutputBuffer__Fields fields;
};

struct CopyEncoder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CopyEncoder__StaticFields {
};

struct CopyEncoder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CopyEncoder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CopyEncoder__VTable vtable;
};

struct DeflateInput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DeflateInput__StaticFields {
};

struct DeflateInput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateInput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateInput__VTable vtable;
};

struct OutputBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OutputBuffer__StaticFields {
};

struct OutputBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutputBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutputBuffer__VTable vtable;
};

struct DeflateInput_InputState {
    int32_t count;
    int32_t startIndex;
};

struct DeflateInput_InputState__Boxed {
    struct DeflateInput_InputState__Class *klass;
    MonitorData *monitor;
    struct DeflateInput_InputState fields;
};

struct DeflateInput_InputState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DeflateInput_InputState__StaticFields {
};

struct DeflateInput_InputState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateInput_InputState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateInput_InputState__VTable vtable;
};

enum class DeflaterManaged_DeflaterState__Enum : int32_t {
    NotStarted = 0x00000000,
    SlowDownForIncompressible1 = 0x00000001,
    SlowDownForIncompressible2 = 0x00000002,
    StartingSmallData = 0x00000003,
    CompressThenCheck = 0x00000004,
    CheckingForIncompressible = 0x00000005,
    HandlingSmallData = 0x00000006,
};

struct DeflaterManaged_DeflaterState__Enum__Boxed {
    struct DeflaterManaged_DeflaterState__Enum__Class *klass;
    MonitorData *monitor;
    DeflaterManaged_DeflaterState__Enum value;
    
};

struct __declspec(align(8)) DeflaterManaged__Fields {
    struct FastEncoder *deflateEncoder;
    struct CopyEncoder *copyEncoder;
    struct DeflateInput *input;
    struct OutputBuffer *output;
    DeflaterManaged_DeflaterState__Enum processingState;
    
    struct DeflateInput *inputFromHistory;
};

struct DeflaterManaged {
    struct DeflaterManaged__Class *klass;
    MonitorData *monitor;
    struct DeflaterManaged__Fields fields;
};

struct __declspec(align(8)) FastEncoder__Fields {
    struct FastEncoderWindow *inputWindow;
    struct Match_1 *currentMatch;
    double lastCompressionRatio;
};

struct FastEncoder {
    struct FastEncoder__Class *klass;
    MonitorData *monitor;
    struct FastEncoder__Fields fields;
};

struct __declspec(align(8)) FastEncoderWindow__Fields {
    struct Byte__Array *window;
    int32_t bufPos;
    int32_t bufEnd;
    struct UInt16__Array *prev;
    struct UInt16__Array *lookup;
};

struct FastEncoderWindow {
    struct FastEncoderWindow__Class *klass;
    MonitorData *monitor;
    struct FastEncoderWindow__Fields fields;
};

enum class MatchState__Enum : int32_t {
    HasSymbol = 0x00000001,
    HasMatch = 0x00000002,
    HasSymbolAndMatch = 0x00000003,
};

struct MatchState__Enum__Boxed {
    struct MatchState__Enum__Class *klass;
    MonitorData *monitor;
    MatchState__Enum value;
    
};

struct __declspec(align(8)) Match_1__Fields {
    MatchState__Enum state;
    
    int32_t pos;
    int32_t len;
    uint8_t symbol;
};

struct Match_1 {
    struct Match_1__Class *klass;
    MonitorData *monitor;
    struct Match_1__Fields fields;
};

struct FastEncoderWindow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FastEncoderWindow__StaticFields {
};

struct FastEncoderWindow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FastEncoderWindow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FastEncoderWindow__VTable vtable;
};

struct MatchState__Enum__VTable {
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

struct MatchState__Enum__StaticFields {
};

struct MatchState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MatchState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MatchState__Enum__VTable vtable;
};

struct Match_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Match_1__StaticFields {
};

struct Match_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Match_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Match_1__VTable vtable;
};

struct FastEncoder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FastEncoder__StaticFields {
};

struct FastEncoder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FastEncoder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FastEncoder__VTable vtable;
};

struct DeflaterManaged_DeflaterState__Enum__VTable {
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

struct DeflaterManaged_DeflaterState__Enum__StaticFields {
};

struct DeflaterManaged_DeflaterState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflaterManaged_DeflaterState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflaterManaged_DeflaterState__Enum__VTable vtable;
};

struct DeflaterManaged__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Unity_IO_Compression_IDeflater_NeedsInput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_SetInput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_GetDeflateOutput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_Finish;
    VirtualInvokeData System_IDisposable_Dispose;
};

struct DeflaterManaged__StaticFields {
};

struct DeflaterManaged__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflaterManaged__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflaterManaged__VTable vtable;
};

enum class CompressionMode__Enum_2 : int32_t {
    Decompress = 0x00000000,
    Compress = 0x00000001,
};

struct CompressionMode__Enum_2__Boxed {
    struct CompressionMode__Enum_2__Class *klass;
    MonitorData *monitor;
    CompressionMode__Enum_2 value;
    
};

struct DeflateStream_1__Fields {
    struct Stream__Fields _;
    struct Stream *_stream;
    CompressionMode__Enum_2 _mode;
    
    bool _leaveOpen;
    struct Inflater *inflater;
    struct IDeflater *deflater;
    struct Byte__Array *buffer;
    int32_t asyncOperations;
    struct AsyncCallback *m_CallBack;
    struct DeflateStream_AsyncWriteDelegate *m_AsyncWriterDelegate;
    struct IFileFormatWriter *formatWriter;
    bool wroteHeader;
    bool wroteBytes;
};

struct DeflateStream_1 {
    struct DeflateStream_1__Class *klass;
    MonitorData *monitor;
    struct DeflateStream_1__Fields fields;
};

enum class InflaterState__Enum : int32_t {
    ReadingHeader = 0x00000000,
    ReadingBFinal = 0x00000002,
    ReadingBType = 0x00000003,
    ReadingNumLitCodes = 0x00000004,
    ReadingNumDistCodes = 0x00000005,
    ReadingNumCodeLengthCodes = 0x00000006,
    ReadingCodeLengthCodes = 0x00000007,
    ReadingTreeCodesBefore = 0x00000008,
    ReadingTreeCodesAfter = 0x00000009,
    DecodeTop = 0x0000000a,
    HaveInitialLength = 0x0000000b,
    HaveFullLength = 0x0000000c,
    HaveDistCode = 0x0000000d,
    UncompressedAligning = 0x0000000f,
    UncompressedByte1 = 0x00000010,
    UncompressedByte2 = 0x00000011,
    UncompressedByte3 = 0x00000012,
    UncompressedByte4 = 0x00000013,
    DecodingUncompressed = 0x00000014,
    StartReadingFooter = 0x00000015,
    ReadingFooter = 0x00000016,
    VerifyingFooter = 0x00000017,
    Done = 0x00000018,
};

struct InflaterState__Enum__Boxed {
    struct InflaterState__Enum__Class *klass;
    MonitorData *monitor;
    InflaterState__Enum value;
    
};

enum class BlockType__Enum : int32_t {
    Uncompressed = 0x00000000,
    Static = 0x00000001,
    Dynamic = 0x00000002,
};

struct BlockType__Enum__Boxed {
    struct BlockType__Enum__Class *klass;
    MonitorData *monitor;
    BlockType__Enum value;
    
};

struct __declspec(align(8)) Inflater__Fields {
    struct OutputWindow *output;
    struct InputBuffer *input;
    struct HuffmanTree *literalLengthTree;
    struct HuffmanTree *distanceTree;
    InflaterState__Enum state;
    
    bool hasFormatReader;
    int32_t bfinal;
    BlockType__Enum blockType;
    
    struct Byte__Array *blockLengthBuffer;
    int32_t blockLength;
    int32_t length;
    int32_t distanceCode;
    int32_t extraBits;
    int32_t loopCounter;
    int32_t literalLengthCodeCount;
    int32_t distanceCodeCount;
    int32_t codeLengthCodeCount;
    int32_t codeArraySize;
    int32_t lengthCode;
    struct Byte__Array *codeList;
    struct Byte__Array *codeLengthTreeCodeLength;
    struct HuffmanTree *codeLengthTree;
    struct IFileFormatReader *formatReader;
};

struct Inflater {
    struct Inflater__Class *klass;
    MonitorData *monitor;
    struct Inflater__Fields fields;
};

struct __declspec(align(8)) OutputWindow__Fields {
    struct Byte__Array *window;
    int32_t end;
    int32_t bytesUsed;
};

struct OutputWindow {
    struct OutputWindow__Class *klass;
    MonitorData *monitor;
    struct OutputWindow__Fields fields;
};

struct __declspec(align(8)) InputBuffer__Fields {
    struct Byte__Array *buffer;
    int32_t start;
    int32_t end;
    uint32_t bitBuffer;
    int32_t bitsInBuffer;
};

struct InputBuffer {
    struct InputBuffer__Class *klass;
    MonitorData *monitor;
    struct InputBuffer__Fields fields;
};

struct __declspec(align(8)) HuffmanTree__Fields {
    int32_t tableBits;
    struct Int16__Array *table;
    struct Int16__Array *left;
    struct Int16__Array *right;
    struct Byte__Array *codeLengthArray;
    int32_t tableMask;
};

struct HuffmanTree {
    struct HuffmanTree__Class *klass;
    MonitorData *monitor;
    struct HuffmanTree__Fields fields;
};

struct IFileFormatReader {
    struct IFileFormatReader__Class *klass;
    MonitorData *monitor;
};

struct IDeflater {
    struct IDeflater__Class *klass;
    MonitorData *monitor;
};

struct DeflateStream_AsyncWriteDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct DeflateStream_AsyncWriteDelegate {
    struct DeflateStream_AsyncWriteDelegate__Class *klass;
    MonitorData *monitor;
    struct DeflateStream_AsyncWriteDelegate__Fields fields;
};

struct IFileFormatWriter {
    struct IFileFormatWriter__Class *klass;
    MonitorData *monitor;
};

struct CompressionMode__Enum_2__VTable {
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

struct CompressionMode__Enum_2__StaticFields {
};

struct CompressionMode__Enum_2__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompressionMode__Enum_2__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompressionMode__Enum_2__VTable vtable;
};

struct OutputWindow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OutputWindow__StaticFields {
};

struct OutputWindow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutputWindow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutputWindow__VTable vtable;
};

struct InputBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InputBuffer__StaticFields {
};

struct InputBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InputBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InputBuffer__VTable vtable;
};

struct HuffmanTree__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HuffmanTree__StaticFields {
    struct HuffmanTree *staticLiteralLengthTree;
    struct HuffmanTree *staticDistanceTree;
};

struct HuffmanTree__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HuffmanTree__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HuffmanTree__VTable vtable;
};

struct InflaterState__Enum__VTable {
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

struct InflaterState__Enum__StaticFields {
};

struct InflaterState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InflaterState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InflaterState__Enum__VTable vtable;
};

struct BlockType__Enum__VTable {
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

struct BlockType__Enum__StaticFields {
};

struct BlockType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlockType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlockType__Enum__VTable vtable;
};

struct IFileFormatReader__VTable {
    VirtualInvokeData ReadHeader;
    VirtualInvokeData ReadFooter;
    VirtualInvokeData UpdateWithBytesRead;
    VirtualInvokeData Validate;
};

struct IFileFormatReader__StaticFields {
};

struct IFileFormatReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFileFormatReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFileFormatReader__VTable vtable;
};

struct Inflater__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Inflater__StaticFields {
    struct Byte__Array *extraLengthBits;
    struct Int32__Array *lengthBase;
    struct Int32__Array *distanceBasePosition;
    struct Byte__Array *codeOrder;
    struct Byte__Array *staticDistanceTreeTable;
};

struct Inflater__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Inflater__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Inflater__VTable vtable;
};

struct IDeflater__VTable {
    VirtualInvokeData NeedsInput;
    VirtualInvokeData SetInput;
    VirtualInvokeData GetDeflateOutput;
    VirtualInvokeData Finish;
};

struct IDeflater__StaticFields {
};

struct IDeflater__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDeflater__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDeflater__VTable vtable;
};

struct DeflateStream_AsyncWriteDelegate__VTable {
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

struct DeflateStream_AsyncWriteDelegate__StaticFields {
};

struct DeflateStream_AsyncWriteDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateStream_AsyncWriteDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateStream_AsyncWriteDelegate__VTable vtable;
};

struct IFileFormatWriter__VTable {
    VirtualInvokeData GetHeader;
    VirtualInvokeData UpdateWithBytesRead;
    VirtualInvokeData GetFooter;
};

struct IFileFormatWriter__StaticFields {
};

struct IFileFormatWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IFileFormatWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IFileFormatWriter__VTable vtable;
};

struct DeflateStream_1__VTable {
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

struct DeflateStream_1__StaticFields {
};

struct DeflateStream_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateStream_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateStream_1__VTable vtable;
};

enum class DeflateStream_WorkerType__Enum : uint8_t {
    Managed = 0x00,
    Unknown = 0x01,
};

struct DeflateStream_WorkerType__Enum__Boxed {
    struct DeflateStream_WorkerType__Enum__Class *klass;
    MonitorData *monitor;
    DeflateStream_WorkerType__Enum value;
    
};

struct DeflateStream_WorkerType__Enum__VTable {
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

struct DeflateStream_WorkerType__Enum__StaticFields {
};

struct DeflateStream_WorkerType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateStream_WorkerType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateStream_WorkerType__Enum__VTable vtable;
};

struct __declspec(align(8)) DeflateStreamAsyncResult__Fields {
    struct Byte__Array *buffer;
    int32_t offset;
    int32_t count;
    bool isWrite;
    struct Object *m_AsyncObject;
    struct Object *m_AsyncState;
    struct AsyncCallback *m_AsyncCallback;
    struct Object *m_Result;
    bool m_CompletedSynchronously;
    int32_t m_InvokedCallback;
    int32_t m_Completed;
    struct Object *m_Event;
};

struct DeflateStreamAsyncResult {
    struct DeflateStreamAsyncResult__Class *klass;
    MonitorData *monitor;
    struct DeflateStreamAsyncResult__Fields fields;
};

struct DeflateStreamAsyncResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
};

struct DeflateStreamAsyncResult__StaticFields {
};

struct DeflateStreamAsyncResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeflateStreamAsyncResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeflateStreamAsyncResult__VTable vtable;
};

enum class GZipDecoder_GzipHeaderState__Enum : int32_t {
    ReadingID1 = 0x00000000,
    ReadingID2 = 0x00000001,
    ReadingCM = 0x00000002,
    ReadingFLG = 0x00000003,
    ReadingMMTime = 0x00000004,
    ReadingXFL = 0x00000005,
    ReadingOS = 0x00000006,
    ReadingXLen1 = 0x00000007,
    ReadingXLen2 = 0x00000008,
    ReadingXLenData = 0x00000009,
    ReadingFileName = 0x0000000a,
    ReadingComment = 0x0000000b,
    ReadingCRC16Part1 = 0x0000000c,
    ReadingCRC16Part2 = 0x0000000d,
    Done = 0x0000000e,
    ReadingCRC = 0x0000000f,
    ReadingFileSize = 0x00000010,
};

struct GZipDecoder_GzipHeaderState__Enum__Boxed {
    struct GZipDecoder_GzipHeaderState__Enum__Class *klass;
    MonitorData *monitor;
    GZipDecoder_GzipHeaderState__Enum value;
    
};

struct __declspec(align(8)) GZipDecoder__Fields {
    GZipDecoder_GzipHeaderState__Enum gzipHeaderSubstate;
    
    GZipDecoder_GzipHeaderState__Enum gzipFooterSubstate;
    
    int32_t gzip_header_flag;
    int32_t gzip_header_xlen;
    uint32_t expectedCrc32;
    uint32_t expectedOutputStreamSizeModulo;
    int32_t loopCounter;
    uint32_t actualCrc32;
    int64_t actualStreamSizeModulo;
};

struct GZipDecoder {
    struct GZipDecoder__Class *klass;
    MonitorData *monitor;
    struct GZipDecoder__Fields fields;
};

struct GZipDecoder_GzipHeaderState__Enum__VTable {
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

}
