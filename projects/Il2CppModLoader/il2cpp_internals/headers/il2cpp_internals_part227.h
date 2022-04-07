namespace app {
struct InflateManager_InflateManagerMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InflateManager_InflateManagerMode__Enum value;
};
struct __declspec(align(8)) InflateManager__Fields {
  enum InflateManager_InflateManagerMode__Enum mode;
  struct ZlibCodec * _codec;
  int32_t method;
  uint32_t computedCheck;
  uint32_t expectedCheck;
  int32_t marker;
  bool _handleRfc1950HeaderBytes;
  int32_t wbits;
  struct InflateBlocks * blocks;
};
struct InflateManager {
  struct InflateManager__Class *klass;
  struct MonitorData *monitor;
  struct InflateManager__Fields fields;
};
enum InflateBlocks_InflateBlockMode__Enum : int32_t {
  InflateBlocks_InflateBlockMode__Enum_TYPE = 0,
  InflateBlocks_InflateBlockMode__Enum_LENS = 1,
  InflateBlocks_InflateBlockMode__Enum_STORED = 2,
  InflateBlocks_InflateBlockMode__Enum_TABLE = 3,
  InflateBlocks_InflateBlockMode__Enum_BTREE = 4,
  InflateBlocks_InflateBlockMode__Enum_DTREE = 5,
  InflateBlocks_InflateBlockMode__Enum_CODES = 6,
  InflateBlocks_InflateBlockMode__Enum_DRY = 7,
  InflateBlocks_InflateBlockMode__Enum_DONE = 8,
  InflateBlocks_InflateBlockMode__Enum_BAD = 9,
};
struct InflateBlocks_InflateBlockMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InflateBlocks_InflateBlockMode__Enum value;
};
struct __declspec(align(8)) InflateBlocks__Fields {
  enum InflateBlocks_InflateBlockMode__Enum mode;
  int32_t left;
  int32_t table;
  int32_t index;
  struct Int32__Array * blens;
  struct Int32__Array * bb;
  struct Int32__Array * tb;
  struct InflateCodes * codes;
  int32_t last;
  struct ZlibCodec * _codec;
  int32_t bitk;
  int32_t bitb;
  struct Int32__Array * hufts;
  struct Byte__Array * window;
  int32_t end;
  int32_t readAt;
  int32_t writeAt;
  struct Object * checkfn;
  uint32_t check;
  struct InfTree * inftree;
};
struct InflateBlocks {
  struct InflateBlocks__Class *klass;
  struct MonitorData *monitor;
  struct InflateBlocks__Fields fields;
};
struct __declspec(align(8)) InflateCodes__Fields {
  int32_t mode;
  int32_t len;
  struct Int32__Array * tree;
  int32_t tree_index;
  int32_t need;
  int32_t lit;
  int32_t bitsToGet;
  int32_t dist;
  uint8_t lbits;
  uint8_t dbits;
  struct Int32__Array * ltree;
  int32_t ltree_index;
  struct Int32__Array * dtree;
  int32_t dtree_index;
};
struct InflateCodes {
  struct InflateCodes__Class *klass;
  struct MonitorData *monitor;
  struct InflateCodes__Fields fields;
};
struct __declspec(align(8)) InfTree__Fields {
  struct Int32__Array * hn;
  struct Int32__Array * v;
  struct Int32__Array * c;
  struct Int32__Array * r;
  struct Int32__Array * u;
  struct Int32__Array * x;
};
struct InfTree {
  struct InfTree__Class *klass;
  struct MonitorData *monitor;
  struct InfTree__Fields fields;
};
enum DeflateFlavor__Enum : int32_t {
  DeflateFlavor__Enum_Store = 0,
  DeflateFlavor__Enum_Fast = 1,
  DeflateFlavor__Enum_Slow = 2,
};
struct DeflateFlavor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DeflateFlavor__Enum value;
};
struct __declspec(align(8)) DeflateManager_Config__Fields {
  int32_t GoodLength;
  int32_t MaxLazy;
  int32_t NiceLength;
  int32_t MaxChainLength;
  enum DeflateFlavor__Enum Flavor;
};
struct DeflateManager_Config {
  struct DeflateManager_Config__Class *klass;
  struct MonitorData *monitor;
  struct DeflateManager_Config__Fields fields;
};
struct DeflateManager_Config__Array {
  struct DeflateManager_Config__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DeflateManager_Config * vector[32];
};
struct __declspec(align(8)) Tree__Fields {
  struct Int16__Array * dyn_tree;
  int32_t max_code;
  struct StaticTree * staticTree;
};
struct Tree {
  struct Tree__Class *klass;
  struct MonitorData *monitor;
  struct Tree__Fields fields;
};
struct __declspec(align(8)) StaticTree__Fields {
  struct Int16__Array * treeCodes;
  struct Int32__Array * extraBits;
  int32_t extraBase;
  int32_t elems;
  int32_t maxLength;
};
struct StaticTree {
  struct StaticTree__Class *klass;
  struct MonitorData *monitor;
  struct StaticTree__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateManager_CompressFunc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateManager_CompressFunc__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InflateCodes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InflateCodes__VTable vtable;
};
struct InfTree__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InfTree__StaticFields {
  struct Int32__Array * fixed_tl;
  struct Int32__Array * fixed_td;
  struct Int32__Array * cplens;
  struct Int32__Array * cplext;
  struct Int32__Array * cpdist;
  struct Int32__Array * cpdext;
};
struct InfTree__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InfTree__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InfTree__VTable vtable;
};
struct InflateBlocks__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InflateBlocks__StaticFields {
  struct Int32__Array * border;
};
struct InflateBlocks__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InflateBlocks__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InflateBlocks__VTable vtable;
};
struct InflateManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InflateManager__StaticFields {
  struct Byte__Array * mark;
};
struct InflateManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InflateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InflateManager__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZlibCodec__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZlibCodec__VTable vtable;
};
struct DeflateManager_Config__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DeflateManager_Config__StaticFields {
  struct DeflateManager_Config__Array * Table;
};
struct DeflateManager_Config__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateManager_Config__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateManager_Config__VTable vtable;
};
struct StaticTree__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StaticTree__StaticFields {
  struct Int16__Array * lengthAndLiteralsTreeCodes;
  struct Int16__Array * distTreeCodes;
  struct StaticTree * Literals;
  struct StaticTree * Distances;
  struct StaticTree * BitLengths;
};
struct StaticTree__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StaticTree__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Int32__Array * ExtraLengthBits;
  struct Int32__Array * ExtraDistanceBits;
  struct Int32__Array * extra_blbits;
  struct SByte__Array * bl_order;
  struct SByte__Array * _dist_code;
  struct SByte__Array * LengthCode;
  struct Int32__Array * LengthBase;
  struct Int32__Array * DistanceBase;
};
struct Tree__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Tree__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct String__Array * _ErrorMessage;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeflateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeflateManager__VTable vtable;
};

struct GZipStream_1__Fields {
  struct Stream__Fields _;
  struct Nullable_1_DateTime_ LastModified;
  int32_t _headerByteCount;
  struct ZlibBaseStream * _baseStream;
  bool _disposed;
  bool _firstReadDone;
  struct String * _FileName;
  struct String * _Comment;
  int32_t _Crc32;
};
struct GZipStream_1 {
  struct GZipStream_1__Class *klass;
  struct MonitorData *monitor;
  struct GZipStream_1__Fields fields;
};
enum ZlibBaseStream_StreamMode__Enum : int32_t {
  ZlibBaseStream_StreamMode__Enum_Writer = 0,
  ZlibBaseStream_StreamMode__Enum_Reader = 1,
  ZlibBaseStream_StreamMode__Enum_Undefined = 2,
};
struct ZlibBaseStream_StreamMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ZlibBaseStream_StreamMode__Enum value;
};
enum ZlibStreamFlavor__Enum : int32_t {
  ZlibStreamFlavor__Enum_ZLIB = 1950,
  ZlibStreamFlavor__Enum_DEFLATE = 1951,
  ZlibStreamFlavor__Enum_GZIP = 1952,
};
struct ZlibStreamFlavor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ZlibStreamFlavor__Enum value;
};
enum CompressionMode__Enum_1 : int32_t {
  CompressionMode__Enum_1_Compress = 0,
  CompressionMode__Enum_1_Decompress = 1,
};
struct CompressionMode__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CompressionMode__Enum_1 value;
};
struct ZlibBaseStream__Fields {
  struct Stream__Fields _;
  struct ZlibCodec * _z;
  enum ZlibBaseStream_StreamMode__Enum _streamMode;
  enum FlushType__Enum _flushMode;
  enum ZlibStreamFlavor__Enum _flavor;
  enum CompressionMode__Enum_1 _compressionMode;
  enum CompressionLevel__Enum _level;
  bool _leaveOpen;
  struct Byte__Array * _workingBuffer;
  int32_t _bufferSize;
  struct Byte__Array * _buf1;
  struct Stream * _stream;
  enum CompressionStrategy__Enum Strategy;
  struct CRC32 * crc;
  struct String * _GzipFileName;
  struct String * _GzipComment;
  struct DateTime _GzipMtime;
  int32_t _gzipHeaderByteCount;
  bool nomoreinput;
};
struct ZlibBaseStream {
  struct ZlibBaseStream__Class *klass;
  struct MonitorData *monitor;
  struct ZlibBaseStream__Fields fields;
};
struct __declspec(align(8)) CRC32__Fields {
  uint32_t dwPolynomial;
  int64_t _TotalBytesRead;
  bool reverseBits;
  struct UInt32__Array * crc32Table;
  uint32_t _register;
};
struct CRC32 {
  struct CRC32__Class *klass;
  struct MonitorData *monitor;
  struct CRC32__Fields fields;
};
struct CRC32__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CRC32__StaticFields {
};
struct CRC32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CRC32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CRC32__VTable vtable;
};
struct ZlibBaseStream__VTable {
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
struct ZlibBaseStream__StaticFields {
};
struct ZlibBaseStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZlibBaseStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZlibBaseStream__VTable vtable;
};
struct GZipStream_1__VTable {
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
struct GZipStream_1__StaticFields {
  struct DateTime _unixEpoch;
  struct Encoding * iso8859dash1;
};
struct GZipStream_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GZipStream_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GZipStream_1__VTable vtable;
};

struct ZlibException__Fields {
  struct Exception__Fields _;
};
struct ZlibException {
  struct ZlibException__Class *klass;
  struct MonitorData *monitor;
  struct ZlibException__Fields fields;
};
struct ZlibException__VTable {
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
struct ZlibException__StaticFields {
};
struct ZlibException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZlibException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZlibException__VTable vtable;
};

struct InternalDataCollectionBase {
  struct InternalDataCollectionBase__Class *klass;
  struct MonitorData *monitor;
};
struct InternalDataCollectionBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData get_List;
};
struct InternalDataCollectionBase__StaticFields {
  struct CollectionChangeEventArgs * s_refreshEventArgs;
};
struct InternalDataCollectionBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalDataCollectionBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalDataCollectionBase__VTable vtable;
};

struct __declspec(align(8)) ColumnTypeConverter__Fields {
  struct TypeConverter_StandardValuesCollection * _values;
};
struct ColumnTypeConverter {
  struct ColumnTypeConverter__Class *klass;
  struct MonitorData *monitor;
  struct ColumnTypeConverter__Fields fields;
};
struct ColumnTypeConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct ColumnTypeConverter__StaticFields {
  struct Type__Array * s_types;
};
struct ColumnTypeConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColumnTypeConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColumnTypeConverter__VTable vtable;
};

struct DataCommonEventSource__Fields {
  struct EventSource__Fields _;
};
struct DataCommonEventSource {
  struct DataCommonEventSource__Class *klass;
  struct MonitorData *monitor;
  struct DataCommonEventSource__Fields fields;
};
struct DataCommonEventSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData OnEventCommand;
  VirtualInvokeData Dispose_1;
};
struct DataCommonEventSource__StaticFields {
  struct DataCommonEventSource * Log;
  int64_t s_nextScopeId;
};
struct DataCommonEventSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataCommonEventSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataCommonEventSource__VTable vtable;
};

struct __declspec(align(8)) Constraint_1__Fields {
  struct String * _schemaName;
  bool _inCollection;
  struct DataSet * _dataSet;
  struct String * _name;
  struct PropertyCollection * _extendedProperties;
};
struct Constraint_1 {
  struct Constraint_1__Class *klass;
  struct MonitorData *monitor;
  struct Constraint_1__Fields fields;
};
enum SerializationFormat__Enum_1 : int32_t {
  SerializationFormat__Enum_1_Xml = 0,
  SerializationFormat__Enum_1_Binary = 1,
};
struct SerializationFormat__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SerializationFormat__Enum_1 value;
};
struct DataSet__Fields {
  struct MarshalByValueComponent__Fields _;
  struct DataViewManager * _defaultViewManager;
  struct DataTableCollection * _tableCollection;
  struct DataRelationCollection * _relationCollection;
  struct PropertyCollection * _extendedProperties;
  struct String * _dataSetName;
  struct String * _datasetPrefix;
  struct String * _namespaceURI;
  bool _enforceConstraints;
  bool _caseSensitive;
  struct CultureInfo * _culture;
  bool _cultureUserSet;
  bool _fInReadXml;
  bool _fInLoadDiffgram;
  bool _fTopLevelTable;
  bool _fInitInProgress;
  bool _fEnableCascading;
  bool _fIsSchemaLoading;
  struct String * _mainTableName;
  enum SerializationFormat__Enum_1 _remotingFormat;
  struct Object * _defaultViewManagerLock;
  int32_t _objectID;
  bool _useDataSetSchemaOnly;
  bool _udtIsWrapped;
  struct PropertyChangedEventHandler * PropertyChanging;
  struct MergeFailedEventHandler * MergeFailed;
  struct DataRowCreatedEventHandler * DataRowCreated;
  struct DataSetClearEventhandler * ClearFunctionCalled;
  struct EventHandler * Initialized;
};
struct DataSet {
  struct DataSet__Class *klass;
  struct MonitorData *monitor;
  struct DataSet__Fields fields;
};
struct DataViewManager__Fields {
  struct MarshalByValueComponent__Fields _;
  struct DataViewSettingCollection * _dataViewSettingsCollection;
  struct DataSet * _dataSet;
  struct DataViewManagerListItemTypeDescriptor * _item;
  bool _locked;
  int32_t _nViews;
  struct ListChangedEventHandler * ListChanged;
};
struct DataViewManager {
  struct DataViewManager__Class *klass;
  struct MonitorData *monitor;
  struct DataViewManager__Fields fields;
};
struct __declspec(align(8)) DataViewSettingCollection__Fields {
  struct DataViewManager * _dataViewManager;
  struct Hashtable * _list;
};
struct DataViewSettingCollection {
  struct DataViewSettingCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataViewSettingCollection__Fields fields;
};
enum DataViewRowState__Enum : int32_t {
  DataViewRowState__Enum_None = 0,
  DataViewRowState__Enum_Unchanged = 2,
  DataViewRowState__Enum_Added = 4,
  DataViewRowState__Enum_Deleted = 8,
  DataViewRowState__Enum_ModifiedCurrent = 16,
  DataViewRowState__Enum_ModifiedOriginal = 32,
  DataViewRowState__Enum_OriginalRows = 42,
  DataViewRowState__Enum_CurrentRows = 22,
};
struct DataViewRowState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataViewRowState__Enum value;
};
struct __declspec(align(8)) DataViewSetting__Fields {
  struct DataViewManager * _dataViewManager;
  struct DataTable * _table;
  struct String * _sort;
  struct String * _rowFilter;
  enum DataViewRowState__Enum _rowStateFilter;
  bool _applyDefaultSort;
};
struct DataViewSetting {
  struct DataViewSetting__Class *klass;
  struct MonitorData *monitor;
  struct DataViewSetting__Fields fields;
};
struct DataTable__Fields {
  struct MarshalByValueComponent__Fields _;
  struct DataSet * _dataSet;
  struct DataView * _defaultView;
  int64_t _nextRowID;
  struct DataRowCollection * _rowCollection;
  struct DataColumnCollection * _columnCollection;
  struct ConstraintCollection * _constraintCollection;
  int32_t _elementColumnCount;
  struct DataRelationCollection * _parentRelationsCollection;
  struct DataRelationCollection * _childRelationsCollection;
  struct RecordManager * _recordManager;
  struct List_1_System_Data_Index_ * _indexes;
  struct List_1_System_Data_Index_ * _shadowIndexes;
  int32_t _shadowCount;
  struct PropertyCollection * _extendedProperties;
  struct String * _tableName;
  struct String * _tableNamespace;
  struct String * _tablePrefix;
  struct DataExpression * _displayExpression;
  bool _fNestedInDataset;
  struct CultureInfo * _culture;
  bool _cultureUserSet;
  struct CompareInfo * _compareInfo;
  enum CompareOptions__Enum _compareFlags;
  struct IFormatProvider * _formatProvider;
  struct StringComparer * _hashCodeProvider;
  bool _caseSensitive;
  bool _caseSensitiveUserSet;
  struct String * _encodedTableName;
  struct DataColumn * _xmlText;
  struct DataColumn * _colUnique;
  struct Decimal _minOccurs;
  struct Decimal _maxOccurs;
  bool _repeatableElement;
  struct Object * _typeName;
  struct UniqueConstraint * _primaryKey;
  struct IndexField__Array * _primaryIndex;
  struct DataColumn__Array * _delayedSetPrimaryKey;
  struct Index * _loadIndex;
  struct Index * _loadIndexwithOriginalAdded;
  struct Index * _loadIndexwithCurrentDeleted;
  int32_t _suspendIndexEvents;
  bool _inDataLoad;
  bool _schemaLoading;
  bool _enforceConstraints;
  bool _suspendEnforceConstraints;
  bool fInitInProgress;
  bool _inLoad;
  bool _fInLoadDiffgram;
  uint8_t _isTypedDataTable;
  struct DataRow__Array * _emptyDataRowArray;
  struct PropertyDescriptorCollection * _propertyDescriptorCollectionCache;
  struct DataRelation__Array * _nestedParentRelations;
  struct List_1_System_Data_DataColumn_ * _dependentColumns;
  bool _mergingData;
  struct DataRowChangeEventHandler * _onRowChangedDelegate;
  struct DataRowChangeEventHandler * _onRowChangingDelegate;
  struct DataRowChangeEventHandler * _onRowDeletingDelegate;
  struct DataRowChangeEventHandler * _onRowDeletedDelegate;
  struct DataColumnChangeEventHandler * _onColumnChangedDelegate;
  struct DataColumnChangeEventHandler * _onColumnChangingDelegate;
  struct DataTableClearEventHandler * _onTableClearingDelegate;
  struct DataTableClearEventHandler * _onTableClearedDelegate;
  struct DataTableNewRowEventHandler * _onTableNewRowDelegate;
  struct PropertyChangedEventHandler * _onPropertyChangingDelegate;
  struct EventHandler * _onInitialized;
  struct DataRowBuilder * _rowBuilder;
  struct List_1_System_Data_DataView_ * _delayedViews;
  struct List_1_System_Data_DataViewListener_ * _dataViewListeners;
  struct Hashtable * _rowDiffId;
  struct ReaderWriterLockSlim * _indexesLock;
  int32_t _ukColumnPositionForInference;
  enum SerializationFormat__Enum_1 _remotingFormat;
  int32_t _objectID;
};
struct DataTable {
  struct DataTable__Class *klass;
  struct MonitorData *monitor;
  struct DataTable__Fields fields;
};
struct DataView__Fields {
  struct MarshalByValueComponent__Fields _;
  struct DataViewManager * _dataViewManager;
  struct DataTable * _table;
  bool _locked;
  struct Index * _index;
  struct Dictionary_2_System_String_System_Data_Index_ * _findIndexes;
  struct String * _sort;
  struct Comparison_1_System_Data_DataRow_ * _comparison;
  struct IFilter * _rowFilter;
  enum DataViewRowState__Enum _recordStates;
  bool _shouldOpen;
  bool _open;
  bool _allowNew;
  bool _allowEdit;
  bool _allowDelete;
  bool _applyDefaultSort;
  struct DataRow * _addNewRow;
  struct ListChangedEventArgs * _addNewMoved;
  struct ListChangedEventHandler * _onListChanged;
  struct DataTable * _delayedTable;
  struct String * _delayedRowFilter;
  struct String * _delayedSort;
  enum DataViewRowState__Enum _delayedRecordStates;
  bool _fInitInProgress;
  bool _fEndInitInProgress;
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * _rowViewCache;
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * _rowViewBuffer;
  struct DataViewListener * _dvListener;
  int32_t _objectID;
  struct EventHandler * Initialized;
};
struct DataView {
  struct DataView__Class *klass;
  struct MonitorData *monitor;
  struct DataView__Fields fields;
};
struct __declspec(align(8)) Index__Fields {
  struct DataTable * _table;
  struct IndexField__Array * _indexFields;
  struct Comparison_1_System_Data_DataRow_ * _comparison;
  enum DataViewRowState__Enum _recordStates;
  struct WeakReference * _rowFilter;
  struct Index_IndexTree * _records;
  int32_t _recordCount;
  int32_t _refCount;
  struct Listeners_1_DataViewListener_ * _listeners;
  bool _suspendEvents;
  bool _isSharable;
  bool _hasRemoteAggregate;
  int32_t _objectID;
};
struct Index {
  struct Index__Class *klass;
  struct MonitorData *monitor;
  struct Index__Fields fields;
};
struct IndexField {
  struct DataColumn * Column;
  bool IsDescending;
};
struct IndexField__Boxed {
  struct IndexField__Class *klass;
  struct MonitorData *monitor;
  struct IndexField fields;
};
struct IndexField__Array {
  struct IndexField__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IndexField vector[32];
};
enum StorageType__Enum : int32_t {
  StorageType__Enum_Empty = 0,
  StorageType__Enum_Object = 1,
  StorageType__Enum_DBNull = 2,
  StorageType__Enum_Boolean = 3,
  StorageType__Enum_Char = 4,
  StorageType__Enum_SByte = 5,
  StorageType__Enum_Byte = 6,
  StorageType__Enum_Int16 = 7,
  StorageType__Enum_UInt16 = 8,
  StorageType__Enum_Int32 = 9,
  StorageType__Enum_UInt32 = 10,
  StorageType__Enum_Int64 = 11,
  StorageType__Enum_UInt64 = 12,
  StorageType__Enum_Single = 13,
  StorageType__Enum_Double = 14,
  StorageType__Enum_Decimal = 15,
  StorageType__Enum_DateTime = 16,
  StorageType__Enum_TimeSpan = 17,
  StorageType__Enum_String = 18,
  StorageType__Enum_Guid = 19,
  StorageType__Enum_ByteArray = 20,
  StorageType__Enum_CharArray = 21,
  StorageType__Enum_Type = 22,
  StorageType__Enum_DateTimeOffset = 23,
  StorageType__Enum_BigInteger = 24,
  StorageType__Enum_Uri = 25,
  StorageType__Enum_SqlBinary = 26,
  StorageType__Enum_SqlBoolean = 27,
  StorageType__Enum_SqlByte = 28,
  StorageType__Enum_SqlBytes = 29,
  StorageType__Enum_SqlChars = 30,
  StorageType__Enum_SqlDateTime = 31,
  StorageType__Enum_SqlDecimal = 32,
  StorageType__Enum_SqlDouble = 33,
  StorageType__Enum_SqlGuid = 34,
  StorageType__Enum_SqlInt16 = 35,
  StorageType__Enum_SqlInt32 = 36,
  StorageType__Enum_SqlInt64 = 37,
  StorageType__Enum_SqlMoney = 38,
  StorageType__Enum_SqlSingle = 39,
  StorageType__Enum_SqlString = 40,
};
struct StorageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StorageType__Enum value;
};}