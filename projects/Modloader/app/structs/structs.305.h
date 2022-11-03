namespace app {
    struct DeflateManager {
        struct DeflateManager__Class* klass;
        MonitorData* monitor;
        struct DeflateManager__Fields fields;
    };

    struct DeflateManager_CompressFunc__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DeflateManager_CompressFunc {
        struct DeflateManager_CompressFunc__Class* klass;
        MonitorData* monitor;
        struct DeflateManager_CompressFunc__Fields fields;
    };

    enum class BlockState__Enum : int32_t {
        NeedMore = 0x00000000,
        BlockDone = 0x00000001,
        FinishStarted = 0x00000002,
        FinishDone = 0x00000003,
    };

    struct BlockState__Enum__Boxed {
        struct BlockState__Enum__Class* klass;
        MonitorData* monitor;
        BlockState__Enum value;
    };

    enum class FlushType__Enum : int32_t {
        None = 0x00000000,
        Partial = 0x00000001,
        Sync = 0x00000002,
        Full = 0x00000003,
        Finish = 0x00000004,
    };

    struct FlushType__Enum__Boxed {
        struct FlushType__Enum__Class* klass;
        MonitorData* monitor;
        FlushType__Enum value;
    };

    struct __declspec(align(8)) ZlibCodec__Fields {
        struct Byte__Array* InputBuffer;
        int32_t NextIn;
        int32_t AvailableBytesIn;
        int64_t TotalBytesIn;
        struct Byte__Array* OutputBuffer;
        int32_t NextOut;
        int32_t AvailableBytesOut;
        int64_t TotalBytesOut;
        struct String* Message;
        struct DeflateManager* dstate;
        struct InflateManager* istate;
        uint32_t _Adler32;
        CompressionLevel__Enum CompressLevel;

        int32_t WindowBits;
        CompressionStrategy__Enum Strategy;
    };

    struct ZlibCodec {
        struct ZlibCodec__Class* klass;
        MonitorData* monitor;
        struct ZlibCodec__Fields fields;
    };

    enum class InflateManager_InflateManagerMode__Enum : int32_t {
        METHOD = 0x00000000,
        FLAG = 0x00000001,
        DICT4 = 0x00000002,
        DICT3 = 0x00000003,
        DICT2 = 0x00000004,
        DICT1 = 0x00000005,
        DICT0 = 0x00000006,
        BLOCKS = 0x00000007,
        CHECK4 = 0x00000008,
        CHECK3 = 0x00000009,
        CHECK2 = 0x0000000a,
        CHECK1 = 0x0000000b,
        DONE = 0x0000000c,
        BAD = 0x0000000d,
    };

    struct InflateManager_InflateManagerMode__Enum__Boxed {
        struct InflateManager_InflateManagerMode__Enum__Class* klass;
        MonitorData* monitor;
        InflateManager_InflateManagerMode__Enum value;
    };

    struct __declspec(align(8)) InflateManager__Fields {
        InflateManager_InflateManagerMode__Enum mode;

        struct ZlibCodec* _codec;
        int32_t method;
        uint32_t computedCheck;
        uint32_t expectedCheck;
        int32_t marker;
        bool _handleRfc1950HeaderBytes;
        int32_t wbits;
        struct InflateBlocks* blocks;
    };

    struct InflateManager {
        struct InflateManager__Class* klass;
        MonitorData* monitor;
        struct InflateManager__Fields fields;
    };

    enum class InflateBlocks_InflateBlockMode__Enum : int32_t {
        TYPE = 0x00000000,
        LENS = 0x00000001,
        STORED = 0x00000002,
        TABLE = 0x00000003,
        BTREE = 0x00000004,
        DTREE = 0x00000005,
        CODES = 0x00000006,
        DRY = 0x00000007,
        DONE = 0x00000008,
        BAD = 0x00000009,
    };

    struct InflateBlocks_InflateBlockMode__Enum__Boxed {
        struct InflateBlocks_InflateBlockMode__Enum__Class* klass;
        MonitorData* monitor;
        InflateBlocks_InflateBlockMode__Enum value;
    };

    struct __declspec(align(8)) InflateBlocks__Fields {
        InflateBlocks_InflateBlockMode__Enum mode;

        int32_t left;
        int32_t table;
        int32_t index;
        struct Int32__Array* blens;
        struct Int32__Array* bb;
        struct Int32__Array* tb;
        struct InflateCodes* codes;
        int32_t last;
        struct ZlibCodec* _codec;
        int32_t bitk;
        int32_t bitb;
        struct Int32__Array* hufts;
        struct Byte__Array* window;
        int32_t end;
        int32_t readAt;
        int32_t writeAt;
        struct Object* checkfn;
        uint32_t check;
        struct InfTree* inftree;
    };

    struct InflateBlocks {
        struct InflateBlocks__Class* klass;
        MonitorData* monitor;
        struct InflateBlocks__Fields fields;
    };

    struct __declspec(align(8)) InflateCodes__Fields {
        int32_t mode;
        int32_t len;
        struct Int32__Array* tree;
        int32_t tree_index;
        int32_t need;
        int32_t lit;
        int32_t bitsToGet;
        int32_t dist;
        uint8_t lbits;
        uint8_t dbits;
        struct Int32__Array* ltree;
        int32_t ltree_index;
        struct Int32__Array* dtree;
        int32_t dtree_index;
    };

    struct InflateCodes {
        struct InflateCodes__Class* klass;
        MonitorData* monitor;
        struct InflateCodes__Fields fields;
    };

    struct __declspec(align(8)) InfTree__Fields {
        struct Int32__Array* hn;
        struct Int32__Array* v;
        struct Int32__Array* c;
        struct Int32__Array* r;
        struct Int32__Array* u;
        struct Int32__Array* x;
    };

    struct InfTree {
        struct InfTree__Class* klass;
        MonitorData* monitor;
        struct InfTree__Fields fields;
    };

    enum class DeflateFlavor__Enum : int32_t {
        Store = 0x00000000,
        Fast = 0x00000001,
        Slow = 0x00000002,
    };

    struct DeflateFlavor__Enum__Boxed {
        struct DeflateFlavor__Enum__Class* klass;
        MonitorData* monitor;
        DeflateFlavor__Enum value;
    };

    struct __declspec(align(8)) DeflateManager_Config__Fields {
        int32_t GoodLength;
        int32_t MaxLazy;
        int32_t NiceLength;
        int32_t MaxChainLength;
        DeflateFlavor__Enum Flavor;
    };

    struct DeflateManager_Config {
        struct DeflateManager_Config__Class* klass;
        MonitorData* monitor;
        struct DeflateManager_Config__Fields fields;
    };

    struct DeflateManager_Config__Array {
        struct DeflateManager_Config__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DeflateManager_Config* vector[32];
    };

    struct __declspec(align(8)) Tree__Fields {
        struct Int16__Array* dyn_tree;
        int32_t max_code;
        struct StaticTree* staticTree;
    };

    struct Tree {
        struct Tree__Class* klass;
        MonitorData* monitor;
        struct Tree__Fields fields;
    };

    struct __declspec(align(8)) StaticTree__Fields {
        struct Int16__Array* treeCodes;
        struct Int32__Array* extraBits;
        int32_t extraBase;
        int32_t elems;
        int32_t maxLength;
    };

    struct StaticTree {
        struct StaticTree__Class* klass;
        MonitorData* monitor;
        struct StaticTree__Fields fields;
    };

    struct BlockState__Enum__VTable {
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

    struct BlockState__Enum__StaticFields {
    };

    struct BlockState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockState__Enum__VTable vtable;
    };

    struct FlushType__Enum__VTable {
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

    struct FlushType__Enum__StaticFields {
    };

    struct FlushType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FlushType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FlushType__Enum__VTable vtable;
    };

    struct DeflateManager_CompressFunc__VTable {
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

    struct DeflateManager_CompressFunc__StaticFields {
    };

    struct DeflateManager_CompressFunc__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateManager_CompressFunc__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateManager_CompressFunc__VTable vtable;
    };

    struct InflateManager_InflateManagerMode__Enum__VTable {
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

    struct InflateManager_InflateManagerMode__Enum__StaticFields {
    };

    struct InflateManager_InflateManagerMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InflateManager_InflateManagerMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InflateManager_InflateManagerMode__Enum__VTable vtable;
    };

    struct InflateBlocks_InflateBlockMode__Enum__VTable {
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

    struct InflateBlocks_InflateBlockMode__Enum__StaticFields {
    };

    struct InflateBlocks_InflateBlockMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InflateBlocks_InflateBlockMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InflateBlocks_InflateBlockMode__Enum__VTable vtable;
    };

    struct InflateCodes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InflateCodes__StaticFields {
    };

    struct InflateCodes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InflateCodes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InflateCodes__VTable vtable;
    };

    struct InfTree__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InfTree__StaticFields {
        struct Int32__Array* fixed_tl;
        struct Int32__Array* fixed_td;
        struct Int32__Array* cplens;
        struct Int32__Array* cplext;
        struct Int32__Array* cpdist;
        struct Int32__Array* cpdext;
    };

    struct InfTree__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InfTree__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InfTree__VTable vtable;
    };

    struct InflateBlocks__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InflateBlocks__StaticFields {
        struct Int32__Array* border;
    };

    struct InflateBlocks__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InflateBlocks__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InflateBlocks__VTable vtable;
    };

    struct InflateManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InflateManager__StaticFields {
        struct Byte__Array* mark;
    };

    struct InflateManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InflateManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InflateManager__VTable vtable;
    };

    struct CompressionLevel__Enum__VTable {
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

    struct CompressionLevel__Enum__StaticFields {
    };

    struct CompressionLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompressionLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompressionLevel__Enum__VTable vtable;
    };

    struct CompressionStrategy__Enum__VTable {
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

    struct CompressionStrategy__Enum__StaticFields {
    };

    struct CompressionStrategy__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompressionStrategy__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompressionStrategy__Enum__VTable vtable;
    };

    struct ZlibCodec__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ZlibCodec__StaticFields {
    };

    struct ZlibCodec__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZlibCodec__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZlibCodec__VTable vtable;
    };

    struct DeflateFlavor__Enum__VTable {
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

    struct DeflateFlavor__Enum__StaticFields {
    };

    struct DeflateFlavor__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateFlavor__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateFlavor__Enum__VTable vtable;
    };

    struct DeflateManager_Config__Array__VTable {
    };

    struct DeflateManager_Config__Array__StaticFields {
    };

    struct DeflateManager_Config__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateManager_Config__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateManager_Config__Array__VTable vtable;
    };

    struct DeflateManager_Config__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeflateManager_Config__StaticFields {
        struct DeflateManager_Config__Array* Table;
    };

    struct DeflateManager_Config__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateManager_Config__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateManager_Config__VTable vtable;
    };

    struct StaticTree__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StaticTree__StaticFields {
        struct Int16__Array* lengthAndLiteralsTreeCodes;
        struct Int16__Array* distTreeCodes;
        struct StaticTree* Literals;
        struct StaticTree* Distances;
        struct StaticTree* BitLengths;
    };

    struct StaticTree__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StaticTree__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StaticTree__VTable vtable;
    };

    struct Tree__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Tree__StaticFields {
        int32_t HEAP_SIZE;
        struct Int32__Array* ExtraLengthBits;
        struct Int32__Array* ExtraDistanceBits;
        struct Int32__Array* extra_blbits;
        struct SByte__Array* bl_order;
        struct SByte__Array* _dist_code;
        struct SByte__Array* LengthCode;
        struct Int32__Array* LengthBase;
        struct Int32__Array* DistanceBase;
    };

    struct Tree__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tree__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tree__VTable vtable;
    };

    struct DeflateManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DeflateManager__StaticFields {
        int32_t MEM_LEVEL_MAX;
        int32_t MEM_LEVEL_DEFAULT;
        struct String__Array* _ErrorMessage;
        int32_t PRESET_DICT;
        int32_t INIT_STATE;
        int32_t BUSY_STATE;
        int32_t FINISH_STATE;
        int32_t Z_DEFLATED;
        int32_t STORED_BLOCK;
        int32_t STATIC_TREES;
        int32_t DYN_TREES;
        int32_t Z_BINARY;
        int32_t Z_ASCII;
        int32_t Z_UNKNOWN;
        int32_t Buf_size;
        int32_t MIN_MATCH;
        int32_t MAX_MATCH;
        int32_t MIN_LOOKAHEAD;
        int32_t HEAP_SIZE;
        int32_t END_BLOCK;
    };

    struct DeflateManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeflateManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeflateManager__VTable vtable;
    };

    struct GZipStream_1__Fields {
        struct Stream__Fields _;
        struct Nullable_1_DateTime_ LastModified;
        int32_t _headerByteCount;
        struct ZlibBaseStream* _baseStream;
        bool _disposed;
        bool _firstReadDone;
        struct String* _FileName;
        struct String* _Comment;
        int32_t _Crc32;
    };

    struct GZipStream_1 {
        struct GZipStream_1__Class* klass;
        MonitorData* monitor;
        struct GZipStream_1__Fields fields;
    };

    enum class ZlibBaseStream_StreamMode__Enum : int32_t {
        Writer = 0x00000000,
        Reader = 0x00000001,
        Undefined = 0x00000002,
    };

    struct ZlibBaseStream_StreamMode__Enum__Boxed {
        struct ZlibBaseStream_StreamMode__Enum__Class* klass;
        MonitorData* monitor;
        ZlibBaseStream_StreamMode__Enum value;
    };

    enum class ZlibStreamFlavor__Enum : int32_t {
        ZLIB = 0x0000079e,
        DEFLATE = 0x0000079f,
        GZIP = 0x000007a0,
    };

    struct ZlibStreamFlavor__Enum__Boxed {
        struct ZlibStreamFlavor__Enum__Class* klass;
        MonitorData* monitor;
        ZlibStreamFlavor__Enum value;
    };

    enum class CompressionMode__Enum_1 : int32_t {
        Compress = 0x00000000,
        Decompress = 0x00000001,
    };

    struct CompressionMode__Enum_1__Boxed {
        struct CompressionMode__Enum_1__Class* klass;
        MonitorData* monitor;
        CompressionMode__Enum_1 value;
    };

    struct ZlibBaseStream__Fields {
        struct Stream__Fields _;
        struct ZlibCodec* _z;
        ZlibBaseStream_StreamMode__Enum _streamMode;

        FlushType__Enum _flushMode;

        ZlibStreamFlavor__Enum _flavor;

        CompressionMode__Enum_1 _compressionMode;

        CompressionLevel__Enum _level;

        bool _leaveOpen;
        struct Byte__Array* _workingBuffer;
        int32_t _bufferSize;
        struct Byte__Array* _buf1;
        struct Stream* _stream;
        CompressionStrategy__Enum Strategy;

        struct CRC32* crc;
        struct String* _GzipFileName;
        struct String* _GzipComment;
        struct DateTime _GzipMtime;
        int32_t _gzipHeaderByteCount;
        bool nomoreinput;
    };

    struct ZlibBaseStream {
        struct ZlibBaseStream__Class* klass;
        MonitorData* monitor;
        struct ZlibBaseStream__Fields fields;
    };

    struct __declspec(align(8)) CRC32__Fields {
        uint32_t dwPolynomial;
        int64_t _TotalBytesRead;
        bool reverseBits;
        struct UInt32__Array* crc32Table;
        uint32_t _register;
    };

    struct CRC32 {
        struct CRC32__Class* klass;
        MonitorData* monitor;
        struct CRC32__Fields fields;
    };

    struct ZlibBaseStream_StreamMode__Enum__VTable {
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

    struct ZlibBaseStream_StreamMode__Enum__StaticFields {
    };

    struct ZlibBaseStream_StreamMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZlibBaseStream_StreamMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZlibBaseStream_StreamMode__Enum__VTable vtable;
    };

    struct ZlibStreamFlavor__Enum__VTable {
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

    struct ZlibStreamFlavor__Enum__StaticFields {
    };

    struct ZlibStreamFlavor__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZlibStreamFlavor__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZlibStreamFlavor__Enum__VTable vtable;
    };

    struct CompressionMode__Enum_1__VTable {
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

    struct CompressionMode__Enum_1__StaticFields {
    };

    struct CompressionMode__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompressionMode__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompressionMode__Enum_1__VTable vtable;
    };

} // namespace app
