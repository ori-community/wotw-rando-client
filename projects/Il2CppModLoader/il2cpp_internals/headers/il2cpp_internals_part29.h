namespace app {
struct BinaryWriter {
  struct BinaryWriter__Class *klass;
  struct MonitorData *monitor;
  struct BinaryWriter__Fields fields;
};
struct BinaryWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData get_BaseStream;
  VirtualInvokeData Flush;
  VirtualInvokeData Seek;
  VirtualInvokeData Write;
  VirtualInvokeData Write_1;
  VirtualInvokeData Write_2;
  VirtualInvokeData Write_3;
  VirtualInvokeData Write_4;
  VirtualInvokeData Write_5;
  VirtualInvokeData Write_6;
  VirtualInvokeData Write_7;
  VirtualInvokeData Write_8;
  VirtualInvokeData Write_9;
  VirtualInvokeData Write_10;
  VirtualInvokeData Write_11;
  VirtualInvokeData Write_12;
  VirtualInvokeData Write_13;
  VirtualInvokeData Write_14;
  VirtualInvokeData Write_15;
};
struct BinaryWriter__StaticFields {
  struct BinaryWriter * Null;
};
struct BinaryWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinaryWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinaryWriter__VTable vtable;
};

enum SearchOption__Enum : int32_t {
  SearchOption__Enum_TopDirectoryOnly = 0,
  SearchOption__Enum_AllDirectories = 1,
};
struct SearchOption__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SearchOption__Enum value;
};

enum FileAttributes__Enum : int32_t {
  FileAttributes__Enum_Archive = 32,
  FileAttributes__Enum_Compressed = 2048,
  FileAttributes__Enum_Device = 64,
  FileAttributes__Enum_Directory = 16,
  FileAttributes__Enum_Encrypted = 16384,
  FileAttributes__Enum_Hidden = 2,
  FileAttributes__Enum_Normal = 128,
  FileAttributes__Enum_NotContentIndexed = 8192,
  FileAttributes__Enum_Offline = 4096,
  FileAttributes__Enum_ReadOnly = 1,
  FileAttributes__Enum_ReparsePoint = 1024,
  FileAttributes__Enum_SparseFile = 512,
  FileAttributes__Enum_System = 4,
  FileAttributes__Enum_Temporary = 256,
  FileAttributes__Enum_IntegrityStream = 32768,
  FileAttributes__Enum_NoScrubData = 131072,
};
struct FileAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FileAttributes__Enum value;
};
struct MonoIOStat {
  enum FileAttributes__Enum fileAttributes;
  int64_t Length;
  int64_t CreationTime;
  int64_t LastAccessTime;
  int64_t LastWriteTime;
};
struct MonoIOStat__Boxed {
  struct MonoIOStat__Class *klass;
  struct MonitorData *monitor;
  struct MonoIOStat fields;
};
struct FileSystemInfo__Fields {
  struct MarshalByRefObject__Fields _;
  struct MonoIOStat _data;
  int32_t _dataInitialised;
  struct String * FullPath;
  struct String * OriginalPath;
  struct String * _displayPath;
};
struct FileSystemInfo {
  struct FileSystemInfo__Class *klass;
  struct MonitorData *monitor;
  struct FileSystemInfo__Fields fields;
};
struct DirectoryInfo__Fields {
  struct FileSystemInfo__Fields _;
  struct String * current;
  struct String * parent;
};
struct DirectoryInfo {
  struct DirectoryInfo__Class *klass;
  struct MonitorData *monitor;
  struct DirectoryInfo__Fields fields;
};
struct FileInfo__Fields {
  struct FileSystemInfo__Fields _;
  struct String * _name;
};
struct FileInfo {
  struct FileInfo__Class *klass;
  struct MonitorData *monitor;
  struct FileInfo__Fields fields;
};
struct MonoIOStat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoIOStat__StaticFields {
};
struct MonoIOStat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoIOStat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoIOStat__VTable vtable;
};
struct FileInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_FullName;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Exists;
  VirtualInvokeData GetObjectData_1;
};
struct FileInfo__StaticFields {
};
struct FileInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileInfo__VTable vtable;
};
struct FileSystemInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_FullName;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData GetObjectData_1;
};
struct FileSystemInfo__StaticFields {
};
struct FileSystemInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileSystemInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileSystemInfo__VTable vtable;
};
struct DirectoryInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_FullName;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Exists;
  VirtualInvokeData GetObjectData_1;
};
struct DirectoryInfo__StaticFields {
};
struct DirectoryInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DirectoryInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DirectoryInfo__VTable vtable;
};

struct __declspec(align(8)) Directory_SearchData__Fields {
  struct String * fullPath;
  struct String * userPath;
  enum SearchOption__Enum searchOption;
};
struct Directory_SearchData {
  struct Directory_SearchData__Class *klass;
  struct MonitorData *monitor;
  struct Directory_SearchData__Fields fields;
};
struct Directory_SearchData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Directory_SearchData__StaticFields {
};
struct Directory_SearchData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Directory_SearchData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Directory_SearchData__VTable vtable;
};

struct DirectoryNotFoundException__Fields {
  struct IOException__Fields _;
};
struct DirectoryNotFoundException {
  struct DirectoryNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct DirectoryNotFoundException__Fields fields;
};
struct DirectoryNotFoundException__VTable {
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
struct DirectoryNotFoundException__StaticFields {
};
struct DirectoryNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DirectoryNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DirectoryNotFoundException__VTable vtable;
};

struct DriveNotFoundException__Fields {
  struct IOException__Fields _;
};
struct DriveNotFoundException {
  struct DriveNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct DriveNotFoundException__Fields fields;
};
struct DriveNotFoundException__VTable {
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
struct DriveNotFoundException__StaticFields {
};
struct DriveNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DriveNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DriveNotFoundException__VTable vtable;
};

struct EndOfStreamException__Fields {
  struct IOException__Fields _;
};
struct EndOfStreamException {
  struct EndOfStreamException__Class *klass;
  struct MonitorData *monitor;
  struct EndOfStreamException__Fields fields;
};
struct EndOfStreamException__VTable {
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
struct EndOfStreamException__StaticFields {
};
struct EndOfStreamException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EndOfStreamException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EndOfStreamException__VTable vtable;
};

struct FileStream__Fields {
  struct Stream__Fields _;
  struct Byte__Array * buf;
  struct String * name;
  struct SafeFileHandle * safeHandle;
  bool isExposed;
  int64_t append_startpos;
  enum FileAccess__Enum access;
  bool owner;
  bool async;
  bool canseek;
  bool anonymous;
  bool buf_dirty;
  int32_t buf_size;
  int32_t buf_length;
  int32_t buf_offset;
  int64_t buf_start;
};
struct FileStream {
  struct FileStream__Class *klass;
  struct MonitorData *monitor;
  struct FileStream__Fields fields;
};
struct FileStream__VTable {
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
  VirtualInvokeData get_SafeFileHandle;
};
struct FileStream__StaticFields {
  struct Byte__Array * buf_recycle;
  struct Object * buf_recycle_lock;
};
struct FileStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileStream__VTable vtable;
};

struct FileLoadException__Fields {
  struct IOException__Fields _;
  struct String * _fileName;
  struct String * _fusionLog;
};
struct FileLoadException {
  struct FileLoadException__Class *klass;
  struct MonitorData *monitor;
  struct FileLoadException__Fields fields;
};
struct FileLoadException__VTable {
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
struct FileLoadException__StaticFields {
};
struct FileLoadException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileLoadException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileLoadException__VTable vtable;
};

struct FileNotFoundException__Fields {
  struct IOException__Fields _;
  struct String * _fileName;
  struct String * _fusionLog;
};
struct FileNotFoundException {
  struct FileNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct FileNotFoundException__Fields fields;
};
struct FileNotFoundException__VTable {
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
struct FileNotFoundException__StaticFields {
};
struct FileNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileNotFoundException__VTable vtable;
};

struct SearchResultHandler_1_System_String_ {
  struct SearchResultHandler_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) StringResultHandler__Fields {
  bool _includeFiles;
  bool _includeDirs;
};
struct StringResultHandler {
  struct StringResultHandler__Class *klass;
  struct MonitorData *monitor;
  struct StringResultHandler__Fields fields;
};
struct __declspec(align(8)) SearchResult__Fields {
  struct String * fullPath;
  struct String * userPath;
  struct Win32Native_WIN32_FIND_DATA * findData;
};
struct SearchResult {
  struct SearchResult__Class *klass;
  struct MonitorData *monitor;
  struct SearchResult__Fields fields;
};
struct SearchResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SearchResult__StaticFields {
};
struct SearchResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SearchResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SearchResult__VTable vtable;
};
struct SearchResultHandler_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct SearchResultHandler_1_System_String___StaticFields {
};
struct SearchResultHandler_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SearchResultHandler_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SearchResultHandler_1_System_String___VTable vtable;
};
struct StringResultHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsResultIncluded;
  VirtualInvokeData CreateObject;
};
struct StringResultHandler__StaticFields {
};
struct StringResultHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringResultHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringResultHandler__VTable vtable;
};

struct MemoryStream__Fields {
  struct Stream__Fields _;
  struct Byte__Array * _buffer;
  int32_t _origin;
  int32_t _position;
  int32_t _length;
  int32_t _capacity;
  bool _expandable;
  bool _writable;
  bool _exposable;
  bool _isOpen;
  struct Task_1_System_Int32_ * _lastReadTask;
};
struct MemoryStream {
  struct MemoryStream__Class *klass;
  struct MonitorData *monitor;
  struct MemoryStream__Fields fields;
};
struct MemoryStream__VTable {
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
  VirtualInvokeData GetBuffer;
  VirtualInvokeData get_Capacity;
  VirtualInvokeData set_Capacity;
  VirtualInvokeData ToArray;
  VirtualInvokeData WriteTo;
};
struct MemoryStream__StaticFields {
};
struct MemoryStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemoryStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemoryStream__VTable vtable;
};

struct PathTooLongException__Fields {
  struct IOException__Fields _;
};
struct PathTooLongException {
  struct PathTooLongException__Class *klass;
  struct MonitorData *monitor;
  struct PathTooLongException__Fields fields;
};
struct PathTooLongException__VTable {
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
struct PathTooLongException__StaticFields {
};
struct PathTooLongException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PathTooLongException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PathTooLongException__VTable vtable;
};

struct PinnedBufferMemoryStream__Fields {
  struct UnmanagedMemoryStream__Fields _;
  struct Byte__Array * _array;
  struct GCHandle _pinningHandle;
};
struct PinnedBufferMemoryStream {
  struct PinnedBufferMemoryStream__Class *klass;
  struct MonitorData *monitor;
  struct PinnedBufferMemoryStream__Fields fields;
};
struct PinnedBufferMemoryStream__VTable {
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
struct PinnedBufferMemoryStream__StaticFields {
};
struct PinnedBufferMemoryStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PinnedBufferMemoryStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PinnedBufferMemoryStream__VTable vtable;
};

struct Stream_NullStream__Fields {
  struct Stream__Fields _;
};
struct Stream_NullStream {
  struct Stream_NullStream__Class *klass;
  struct MonitorData *monitor;
  struct Stream_NullStream__Fields fields;
};
struct Stream_NullStream__VTable {
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
struct Stream_NullStream__StaticFields {
  struct Task_1_System_Int32_ * s_nullReadTask;
};
struct Stream_NullStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stream_NullStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stream_NullStream__VTable vtable;
};

struct __declspec(align(8)) Stream_SynchronousAsyncResult__Fields {
  struct Object * _stateObject;
  bool _isWrite;
  struct ManualResetEvent * _waitHandle;
  struct ExceptionDispatchInfo * _exceptionInfo;
  bool _endXxxCalled;
  int32_t _bytesRead;
};
struct Stream_SynchronousAsyncResult {
  struct Stream_SynchronousAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct Stream_SynchronousAsyncResult__Fields fields;
};
struct Stream_SynchronousAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
};
struct Stream_SynchronousAsyncResult__StaticFields {
};
struct Stream_SynchronousAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stream_SynchronousAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stream_SynchronousAsyncResult__VTable vtable;
};

struct Stream_SynchronousAsyncResult_c {
  struct Stream_SynchronousAsyncResult_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_System_Threading_ManualResetEvent___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Threading_ManualResetEvent_ {
  struct Func_1_System_Threading_ManualResetEvent___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Threading_ManualResetEvent___Fields fields;
};
struct Func_1_System_Threading_ManualResetEvent___VTable {
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
struct Func_1_System_Threading_ManualResetEvent___StaticFields {
};
struct Func_1_System_Threading_ManualResetEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_System_Threading_ManualResetEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_System_Threading_ManualResetEvent___VTable vtable;
};
struct Stream_SynchronousAsyncResult_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Stream_SynchronousAsyncResult_c__StaticFields {
  struct Stream_SynchronousAsyncResult_c * __9;
  struct Func_1_System_Threading_ManualResetEvent_ * __9__12_0;
};
struct Stream_SynchronousAsyncResult_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stream_SynchronousAsyncResult_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stream_SynchronousAsyncResult_c__VTable vtable;
};

struct Stream_c {
  struct Stream_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_System_Threading_SemaphoreSlim___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_System_Threading_SemaphoreSlim_ {
  struct Func_1_System_Threading_SemaphoreSlim___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_System_Threading_SemaphoreSlim___Fields fields;
};
struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ {
  struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___Class *klass;
  struct MonitorData *monitor;
  struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___Fields fields;
};
struct Stream_ReadWriteParameters {
  struct Byte__Array * Buffer;
  int32_t Offset;
  int32_t Count;
};
struct Stream_ReadWriteParameters__Boxed {
  struct Stream_ReadWriteParameters__Class *klass;
  struct MonitorData *monitor;
  struct Stream_ReadWriteParameters fields;
};
struct Func_3_System_IO_Stream_IAsyncResult_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_IO_Stream_IAsyncResult_Int32_ {
  struct Func_3_System_IO_Stream_IAsyncResult_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_3_System_IO_Stream_IAsyncResult_Int32___Fields fields;
};
struct Action_2_System_Threading_Tasks_Task_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_System_Threading_Tasks_Task_Object_ {
  struct Action_2_System_Threading_Tasks_Task_Object___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_System_Threading_Tasks_Task_Object___Fields fields;
};
struct Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ {
  struct Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult___Class *klass;
  struct MonitorData *monitor;
  struct Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult___Fields fields;
};
struct VoidTaskResult {
};
struct VoidTaskResult__Boxed {
  struct VoidTaskResult__Class *klass;
  struct MonitorData *monitor;
  struct VoidTaskResult fields;
};
struct Func_1_System_Threading_SemaphoreSlim___VTable {
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
struct Func_1_System_Threading_SemaphoreSlim___StaticFields {
};
struct Func_1_System_Threading_SemaphoreSlim___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_System_Threading_SemaphoreSlim___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_System_Threading_SemaphoreSlim___VTable vtable;
};
struct Stream_ReadWriteParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Stream_ReadWriteParameters__StaticFields {
};
struct Stream_ReadWriteParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stream_ReadWriteParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stream_ReadWriteParameters__VTable vtable;
};
struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___VTable {
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
struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___StaticFields {
};
struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult___VTable vtable;
};
struct Func_3_System_IO_Stream_IAsyncResult_Int32___VTable {
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