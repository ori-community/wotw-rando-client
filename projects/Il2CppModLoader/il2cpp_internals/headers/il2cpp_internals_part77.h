namespace app {

struct WriteStreamClosedEventArgs {
  struct WriteStreamClosedEventArgs__Class *klass;
  struct MonitorData *monitor;
};
struct WriteStreamClosedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WriteStreamClosedEventArgs__StaticFields {
};
struct WriteStreamClosedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteStreamClosedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteStreamClosedEventArgs__VTable vtable;
};

struct WriteStreamClosedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct WriteStreamClosedEventHandler {
  struct WriteStreamClosedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct WriteStreamClosedEventHandler__Fields fields;
};
struct WriteStreamClosedEventHandler__VTable {
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
struct WriteStreamClosedEventHandler__StaticFields {
};
struct WriteStreamClosedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteStreamClosedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteStreamClosedEventHandler__VTable vtable;
};

struct __declspec(align(8)) LazyAsyncResult_ThreadContext__Fields {
  int32_t m_NestedIOCount;
};
struct LazyAsyncResult_ThreadContext {
  struct LazyAsyncResult_ThreadContext__Class *klass;
  struct MonitorData *monitor;
  struct LazyAsyncResult_ThreadContext__Fields fields;
};
struct LazyAsyncResult_ThreadContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LazyAsyncResult_ThreadContext__StaticFields {
};
struct LazyAsyncResult_ThreadContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LazyAsyncResult_ThreadContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LazyAsyncResult_ThreadContext__VTable vtable;
};

struct __declspec(align(8)) LazyAsyncResult__Fields {
  struct Object * m_AsyncObject;
  struct Object * m_AsyncState;
  struct AsyncCallback * m_AsyncCallback;
  struct Object * m_Result;
  int32_t m_ErrorCode;
  int32_t m_IntCompleted;
  bool m_EndCalled;
  bool m_UserEvent;
  struct Object * m_Event;
};
struct LazyAsyncResult {
  struct LazyAsyncResult__Class *klass;
  struct MonitorData *monitor;
  struct LazyAsyncResult__Fields fields;
};
struct LazyAsyncResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData get_CompletedSynchronously;
  VirtualInvokeData Complete;
  VirtualInvokeData Cleanup;
};
struct LazyAsyncResult__StaticFields {
  struct LazyAsyncResult_ThreadContext * t_ThreadContext;
};
struct LazyAsyncResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LazyAsyncResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LazyAsyncResult__VTable vtable;
};

struct BaseLoggingObject {
  struct BaseLoggingObject__Class *klass;
  struct MonitorData *monitor;
};
struct BaseLoggingObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData EnterFunc;
  VirtualInvokeData LeaveFunc;
  VirtualInvokeData DumpArrayToConsole;
  VirtualInvokeData PrintLine;
  VirtualInvokeData DumpArray;
  VirtualInvokeData DumpArrayToFile;
  VirtualInvokeData Flush;
  VirtualInvokeData Flush_1;
  VirtualInvokeData LoggingMonitorTick;
  VirtualInvokeData Dump;
  VirtualInvokeData Dump_1;
  VirtualInvokeData Dump_2;
  VirtualInvokeData Dump_3;
};
struct BaseLoggingObject__StaticFields {
};
struct BaseLoggingObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseLoggingObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseLoggingObject__VTable vtable;
};

enum ThreadKinds__Enum : int32_t {
  ThreadKinds__Enum_Unknown = 0,
  ThreadKinds__Enum_User = 1,
  ThreadKinds__Enum_System = 2,
  ThreadKinds__Enum_Sync = 4,
  ThreadKinds__Enum_Async = 8,
  ThreadKinds__Enum_Timer = 16,
  ThreadKinds__Enum_CompletionPort = 32,
  ThreadKinds__Enum_Worker = 64,
  ThreadKinds__Enum_Finalization = 128,
  ThreadKinds__Enum_Other = 256,
  ThreadKinds__Enum_OwnerMask = 3,
  ThreadKinds__Enum_SyncMask = 12,
  ThreadKinds__Enum_SourceMask = 496,
  ThreadKinds__Enum_SafeSources = 352,
  ThreadKinds__Enum_ThreadPool = 96,
};
struct ThreadKinds__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ThreadKinds__Enum value;
};

struct NetRes {
  struct NetRes__Class *klass;
  struct MonitorData *monitor;
};
struct NetRes__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NetRes__StaticFields {
};
struct NetRes__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NetRes__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NetRes__VTable vtable;
};

enum FtpStatusCode__Enum : int32_t {
  FtpStatusCode__Enum_Undefined = 0,
  FtpStatusCode__Enum_RestartMarker = 110,
  FtpStatusCode__Enum_ServiceTemporarilyNotAvailable = 120,
  FtpStatusCode__Enum_DataAlreadyOpen = 125,
  FtpStatusCode__Enum_OpeningData = 150,
  FtpStatusCode__Enum_CommandOK = 200,
  FtpStatusCode__Enum_CommandExtraneous = 202,
  FtpStatusCode__Enum_DirectoryStatus = 212,
  FtpStatusCode__Enum_FileStatus = 213,
  FtpStatusCode__Enum_SystemType = 215,
  FtpStatusCode__Enum_SendUserCommand = 220,
  FtpStatusCode__Enum_ClosingControl = 221,
  FtpStatusCode__Enum_ClosingData = 226,
  FtpStatusCode__Enum_EnteringPassive = 227,
  FtpStatusCode__Enum_LoggedInProceed = 230,
  FtpStatusCode__Enum_ServerWantsSecureSession = 234,
  FtpStatusCode__Enum_FileActionOK = 250,
  FtpStatusCode__Enum_PathnameCreated = 257,
  FtpStatusCode__Enum_SendPasswordCommand = 331,
  FtpStatusCode__Enum_NeedLoginAccount = 332,
  FtpStatusCode__Enum_FileCommandPending = 350,
  FtpStatusCode__Enum_ServiceNotAvailable = 421,
  FtpStatusCode__Enum_CantOpenData = 425,
  FtpStatusCode__Enum_ConnectionClosed = 426,
  FtpStatusCode__Enum_ActionNotTakenFileUnavailableOrBusy = 450,
  FtpStatusCode__Enum_ActionAbortedLocalProcessingError = 451,
  FtpStatusCode__Enum_ActionNotTakenInsufficientSpace = 452,
  FtpStatusCode__Enum_CommandSyntaxError = 500,
  FtpStatusCode__Enum_ArgumentSyntaxError = 501,
  FtpStatusCode__Enum_CommandNotImplemented = 502,
  FtpStatusCode__Enum_BadCommandSequence = 503,
  FtpStatusCode__Enum_NotLoggedIn = 530,
  FtpStatusCode__Enum_AccountNeeded = 532,
  FtpStatusCode__Enum_ActionNotTakenFileUnavailable = 550,
  FtpStatusCode__Enum_ActionAbortedUnknownPageType = 551,
  FtpStatusCode__Enum_FileActionAborted = 552,
  FtpStatusCode__Enum_ActionNotTakenFilenameNotAllowed = 553,
};
struct FtpStatusCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FtpStatusCode__Enum value;
};

struct PooledStream__Fields {
  struct Stream__Fields _;
  bool m_CheckLifetime;
  struct TimeSpan m_Lifetime;
  struct DateTime m_CreateTime;
  bool m_ConnectionIsDoomed;
  struct ConnectionPool * m_ConnectionPool;
  struct WeakReference * m_Owner;
  int32_t m_PooledCount;
  bool m_Initalizing;
  struct IPAddress * m_ServerAddress;
  struct NetworkStream * m_NetworkStream;
  struct Socket * m_AbortSocket;
  struct Socket * m_AbortSocket6;
  bool m_JustConnected;
  struct GeneralAsyncDelegate * m_AsyncCallback;
};
struct PooledStream {
  struct PooledStream__Class *klass;
  struct MonitorData *monitor;
  struct PooledStream__Fields fields;
};
enum ConnectionPool_State__Enum : int32_t {
  ConnectionPool_State__Enum_Initializing = 0,
  ConnectionPool_State__Enum_Running = 1,
  ConnectionPool_State__Enum_ShuttingDown = 2,
};
struct ConnectionPool_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConnectionPool_State__Enum value;
};
struct __declspec(align(8)) ConnectionPool__Fields {
  struct TimerThread_Queue * m_CleanupQueue;
  enum ConnectionPool_State__Enum m_State;
  struct InterlockedStack * m_StackOld;
  struct InterlockedStack * m_StackNew;
  int32_t m_WaitCount;
  struct WaitHandle__Array * m_WaitHandles;
  struct Exception * m_ResError;
  bool m_ErrorOccured;
  struct TimerThread_Timer * m_ErrorTimer;
  struct ArrayList * m_ObjectList;
  int32_t m_TotalObjects;
  struct Queue * m_QueuedRequests;
  struct Thread * m_AsyncThread;
  int32_t m_MaxPoolSize;
  int32_t m_MinPoolSize;
  struct ServicePoint * m_ServicePoint;
  struct CreateConnectionDelegate * m_CreateConnectionCallback;
};
struct ConnectionPool {
  struct ConnectionPool__Class *klass;
  struct MonitorData *monitor;
  struct ConnectionPool__Fields fields;
};
struct __declspec(align(8)) InterlockedStack__Fields {
  struct Stack * _stack;
};
struct InterlockedStack {
  struct InterlockedStack__Class *klass;
  struct MonitorData *monitor;
  struct InterlockedStack__Fields fields;
};
struct CreateConnectionDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct CreateConnectionDelegate {
  struct CreateConnectionDelegate__Class *klass;
  struct MonitorData *monitor;
  struct CreateConnectionDelegate__Fields fields;
};
struct GeneralAsyncDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct GeneralAsyncDelegate {
  struct GeneralAsyncDelegate__Class *klass;
  struct MonitorData *monitor;
  struct GeneralAsyncDelegate__Fields fields;
};
struct InterlockedStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InterlockedStack__StaticFields {
};
struct InterlockedStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InterlockedStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InterlockedStack__VTable vtable;
};
struct CreateConnectionDelegate__VTable {
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
struct CreateConnectionDelegate__StaticFields {
};
struct CreateConnectionDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateConnectionDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateConnectionDelegate__VTable vtable;
};
struct ConnectionPool__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConnectionPool__StaticFields {
  struct TimerThread_Callback * s_CleanupCallback;
  struct TimerThread_Callback * s_CancelErrorCallback;
  struct TimerThread_Queue * s_CancelErrorQueue;
};
struct ConnectionPool__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConnectionPool__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConnectionPool__VTable vtable;
};
struct GeneralAsyncDelegate__VTable {
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
struct GeneralAsyncDelegate__StaticFields {
};
struct GeneralAsyncDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GeneralAsyncDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GeneralAsyncDelegate__VTable vtable;
};
struct PooledStream__VTable {
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
  VirtualInvokeData get_ServicePoint;
  VirtualInvokeData ConnectionCallback;
  VirtualInvokeData UnsafeBeginRead;
  VirtualInvokeData UnsafeBeginWrite;
};
struct PooledStream__StaticFields {
};
struct PooledStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PooledStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PooledStream__VTable vtable;
};

enum SocketShutdown__Enum : int32_t {
  SocketShutdown__Enum_Receive = 0,
  SocketShutdown__Enum_Send = 1,
  SocketShutdown__Enum_Both = 2,
};
struct SocketShutdown__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SocketShutdown__Enum value;
};

enum SelectMode__Enum : int32_t {
  SelectMode__Enum_SelectRead = 0,
  SelectMode__Enum_SelectWrite = 1,
  SelectMode__Enum_SelectError = 2,
};
struct SelectMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SelectMode__Enum value;
};

struct DirectProxy__Fields {
  struct ProxyChain__Fields _;
  bool m_ProxyRetrieved;
};
struct DirectProxy {
  struct DirectProxy__Class *klass;
  struct MonitorData *monitor;
  struct DirectProxy__Fields fields;
};
struct DirectProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Abort;
  VirtualInvokeData GetNextProxy;
};
struct DirectProxy__StaticFields {
};
struct DirectProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DirectProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DirectProxy__VTable vtable;
};

struct StaticProxy__Fields {
  struct ProxyChain__Fields _;
  struct Uri * m_Proxy;
};
struct StaticProxy {
  struct StaticProxy__Class *klass;
  struct MonitorData *monitor;
  struct StaticProxy__Fields fields;
};
struct StaticProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Abort;
  VirtualInvokeData GetNextProxy;
};
struct StaticProxy__StaticFields {
};
struct StaticProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StaticProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StaticProxy__VTable vtable;
};

struct __declspec(align(8)) ScatterGatherBuffers__Fields {
  struct ScatterGatherBuffers_MemoryChunk * headChunk;
  struct ScatterGatherBuffers_MemoryChunk * currentChunk;
  int32_t nextChunkLength;
  int32_t totalLength;
  int32_t chunkCount;
};
struct ScatterGatherBuffers {
  struct ScatterGatherBuffers__Class *klass;
  struct MonitorData *monitor;
  struct ScatterGatherBuffers__Fields fields;
};
struct __declspec(align(8)) ScatterGatherBuffers_MemoryChunk__Fields {
  struct Byte__Array * Buffer;
  int32_t FreeOffset;
  struct ScatterGatherBuffers_MemoryChunk * Next;
};
struct ScatterGatherBuffers_MemoryChunk {
  struct ScatterGatherBuffers_MemoryChunk__Class *klass;
  struct MonitorData *monitor;
  struct ScatterGatherBuffers_MemoryChunk__Fields fields;
};
struct ScatterGatherBuffers_MemoryChunk__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScatterGatherBuffers_MemoryChunk__StaticFields {
};
struct ScatterGatherBuffers_MemoryChunk__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScatterGatherBuffers_MemoryChunk__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScatterGatherBuffers_MemoryChunk__VTable vtable;
};
struct ScatterGatherBuffers__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScatterGatherBuffers__StaticFields {
};
struct ScatterGatherBuffers__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScatterGatherBuffers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScatterGatherBuffers__VTable vtable;
};

struct Semaphore__Fields {
  struct WaitHandle__Fields _;
};
struct Semaphore {
  struct Semaphore__Class *klass;
  struct MonitorData *monitor;
  struct Semaphore__Fields fields;
};
struct Semaphore__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Handle;
  VirtualInvokeData set_Handle;
  VirtualInvokeData WaitOne;
  VirtualInvokeData WaitOne_1;
  VirtualInvokeData WaitOne_2;
  VirtualInvokeData WaitOne_3;
  VirtualInvokeData WaitOne_4;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
};
struct Semaphore__StaticFields {
};
struct Semaphore__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Semaphore__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Semaphore__VTable vtable;
};

struct TimerThread_InfiniteTimerQueue__Fields {
  struct TimerThread_Queue__Fields _;
};
struct TimerThread_InfiniteTimerQueue {
  struct TimerThread_InfiniteTimerQueue__Class *klass;
  struct MonitorData *monitor;
  struct TimerThread_InfiniteTimerQueue__Fields fields;
};
struct TimerThread_InfiniteTimerQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateTimer;
};
struct TimerThread_InfiniteTimerQueue__StaticFields {
};
struct TimerThread_InfiniteTimerQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerThread_InfiniteTimerQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerThread_InfiniteTimerQueue__VTable vtable;
};

struct TimerThread_InfiniteTimer__Fields {
  struct TimerThread_Timer__Fields _;
  int32_t cancelled;
};
struct TimerThread_InfiniteTimer {
  struct TimerThread_InfiniteTimer__Class *klass;
  struct MonitorData *monitor;
  struct TimerThread_InfiniteTimer__Fields fields;
};
struct TimerThread_InfiniteTimer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData Cancel;
  VirtualInvokeData get_HasExpired;
};
struct TimerThread_InfiniteTimer__StaticFields {
};
struct TimerThread_InfiniteTimer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimerThread_InfiniteTimer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimerThread_InfiniteTimer__VTable vtable;
};

struct __declspec(align(8)) WebProxyDataBuilder__Fields {
  struct WebProxyData * m_Result;
};
struct WebProxyDataBuilder {
  struct WebProxyDataBuilder__Class *klass;
  struct MonitorData *monitor;
  struct WebProxyDataBuilder__Fields fields;
};
struct __declspec(align(8)) WebProxyData__Fields {
  bool bypassOnLocal;
  bool automaticallyDetectSettings;
  struct Uri * proxyAddress;
  struct Hashtable * proxyHostAddresses;
  struct Uri * scriptLocation;
  struct ArrayList * bypassList;
};
struct WebProxyData {
  struct WebProxyData__Class *klass;
  struct MonitorData *monitor;
  struct WebProxyData__Fields fields;
};
struct WebProxyData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WebProxyData__StaticFields {
};
struct WebProxyData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebProxyData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebProxyData__VTable vtable;
};
struct WebProxyDataBuilder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct WebProxyDataBuilder__StaticFields {
};
struct WebProxyDataBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WebProxyDataBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WebProxyDataBuilder__VTable vtable;
};

struct __declspec(align(8)) EmptyWebProxy__Fields {
  struct ICredentials * m_credentials;
};
struct EmptyWebProxy {
  struct EmptyWebProxy__Class *klass;
  struct MonitorData *monitor;
  struct EmptyWebProxy__Fields fields;
};
struct EmptyWebProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Net_IAutoWebProxy_GetProxies;
  VirtualInvokeData GetProxy;
  VirtualInvokeData IsBypassed;
  VirtualInvokeData get_Credentials;
  VirtualInvokeData set_Credentials;
};
struct EmptyWebProxy__StaticFields {
};
struct EmptyWebProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EmptyWebProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EmptyWebProxy__VTable vtable;
};

struct __declspec(align(8)) ConnectionPool_AsyncConnectionPoolRequest__Fields {
  struct Object * OwningObject;
  struct GeneralAsyncDelegate * AsyncCallback;
  struct ConnectionPool * Pool;
  int32_t CreationTimeout;
};
struct ConnectionPool_AsyncConnectionPoolRequest {
  struct ConnectionPool_AsyncConnectionPoolRequest__Class *klass;
  struct MonitorData *monitor;
  struct ConnectionPool_AsyncConnectionPoolRequest__Fields fields;
};
struct ConnectionPool_AsyncConnectionPoolRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConnectionPool_AsyncConnectionPoolRequest__StaticFields {
};
struct ConnectionPool_AsyncConnectionPoolRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConnectionPool_AsyncConnectionPoolRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConnectionPool_AsyncConnectionPoolRequest__VTable vtable;
};

struct __declspec(align(8)) Cookie__Fields {
  struct String * m_comment;
  struct Uri * m_commentUri;
  enum CookieVariant__Enum m_cookieVariant;
  bool m_discard;
  struct String * m_domain;
  bool m_domain_implicit;
  struct DateTime m_expires;
  struct String * m_name;
  struct String * m_path;
  bool m_path_implicit;
  struct String * m_port;
  bool m_port_implicit;
  struct Int32__Array * m_port_list;
  bool m_secure;
  bool m_httpOnly;
  struct DateTime m_timeStamp;
  struct String * m_value;
  int32_t m_version;
  struct String * m_domainKey;
  bool IsQuotedVersion;
  bool IsQuotedDomain;
};
struct Cookie {
  struct Cookie__Class *klass;
  struct MonitorData *monitor;
  struct Cookie__Fields fields;
};
struct Comparer_1 {
  struct Comparer_1__Class *klass;
  struct MonitorData *monitor;
};
struct Comparer_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_IComparer_Compare;
};
struct Comparer_1__StaticFields {
};
struct Comparer_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparer_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparer_1__VTable vtable;
};
struct Cookie__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Cookie__StaticFields {
  struct Char__Array * PortSplitDelimiters;
  struct Char__Array * Reserved2Name;
  struct Char__Array * Reserved2Value;
  struct Comparer_1 * staticComparer;
};
struct Cookie__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Cookie__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Cookie__VTable vtable;
};

enum CookieToken__Enum : int32_t {
  CookieToken__Enum_Nothing = 0,
  CookieToken__Enum_NameValuePair = 1,
  CookieToken__Enum_Attribute = 2,
  CookieToken__Enum_EndToken = 3,
  CookieToken__Enum_EndCookie = 4,
  CookieToken__Enum_End = 5,
  CookieToken__Enum_Equals = 6,
  CookieToken__Enum_Comment = 7,
  CookieToken__Enum_CommentUrl = 8,
  CookieToken__Enum_CookieName = 9,
  CookieToken__Enum_Discard = 10,
  CookieToken__Enum_Domain = 11,
  CookieToken__Enum_Expires = 12,
  CookieToken__Enum_MaxAge = 13,
  CookieToken__Enum_Path = 14,
  CookieToken__Enum_Port = 15,
  CookieToken__Enum_Secure = 16,
  CookieToken__Enum_HttpOnly = 17,
  CookieToken__Enum_Unknown = 18,
  CookieToken__Enum_Version = 19,
};
struct CookieToken__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CookieToken__Enum value;
};
struct __declspec(align(8)) CookieTokenizer__Fields {
  bool m_eofCookie;
  int32_t m_index;
  int32_t m_length;
  struct String * m_name;
  bool m_quoted;
  int32_t m_start;
  enum CookieToken__Enum m_token;
  int32_t m_tokenLength;
  struct String * m_tokenStream;
  struct String * m_value;
};
struct CookieTokenizer {
  struct CookieTokenizer__Class *klass;
  struct MonitorData *monitor;
  struct CookieTokenizer__Fields fields;
};
struct CookieTokenizer_RecognizedAttribute {
  struct String * m_name;
  enum CookieToken__Enum m_token;
};
struct CookieTokenizer_RecognizedAttribute__Boxed {
  struct CookieTokenizer_RecognizedAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CookieTokenizer_RecognizedAttribute fields;
};
struct CookieTokenizer_RecognizedAttribute__Array {
  struct CookieTokenizer_RecognizedAttribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CookieTokenizer_RecognizedAttribute vector[32];
};
struct CookieTokenizer_RecognizedAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CookieTokenizer_RecognizedAttribute__StaticFields {
};
struct CookieTokenizer_RecognizedAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CookieTokenizer_RecognizedAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CookieTokenizer_RecognizedAttribute__VTable vtable;
};
struct CookieTokenizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CookieTokenizer__StaticFields {
  struct CookieTokenizer_RecognizedAttribute__Array * RecognizedAttributes;
  struct CookieTokenizer_RecognizedAttribute__Array * RecognizedServerAttributes;
};
struct CookieTokenizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CookieTokenizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CookieTokenizer__VTable vtable;
};

struct __declspec(align(8)) CookieParser__Fields {
  struct CookieTokenizer * m_tokenizer;
  struct Cookie * m_savedCookie;
};
struct CookieParser {
  struct CookieParser__Class *klass;
  struct MonitorData *monitor;
  struct CookieParser__Fields fields;
};
struct CookieParser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CookieParser__StaticFields {
};
struct CookieParser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CookieParser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CookieParser__VTable vtable;
};}