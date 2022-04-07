namespace app {
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ {
  struct Task_1_System_Boolean_ * m_task;
  bool m_continueOnCapturedContext;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Boxed {
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ fields;
};
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_System_Boolean_ __t__builder;
  struct CancellationToken cancellationToken;
  struct SemaphoreSlim_TaskNode * asyncWaiter;
  int32_t millisecondsTimeout;
  struct CancellationTokenSource * _cts_5__1;
  struct SemaphoreSlim * __4__this;
  struct Object * __7__wrap1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task_ __u__1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean_ __u__2;
};
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Boxed {
  struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class *klass;
  struct MonitorData *monitor;
  struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31 fields;
};
struct IAsyncStateMachine {
  struct IAsyncStateMachine__Class *klass;
  struct MonitorData *monitor;
};
struct IAsyncStateMachine__VTable {
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct IAsyncStateMachine__StaticFields {
};
struct IAsyncStateMachine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAsyncStateMachine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAsyncStateMachine__VTable vtable;
};
struct AsyncMethodBuilderCore__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncMethodBuilderCore__StaticFields {
};
struct AsyncMethodBuilderCore__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncMethodBuilderCore__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncMethodBuilderCore__VTable vtable;
};
struct AsyncTaskMethodBuilder_1_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_System_Boolean___StaticFields {
  struct Task_1_System_Boolean_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_System_Boolean___VTable vtable;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___StaticFields {
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Threading_Tasks_Task___VTable vtable;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___StaticFields {
};
struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Boolean___VTable vtable;
};
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__StaticFields {
};
struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SemaphoreSlim_WaitUntilCountOrTimeoutAsync_d_31__VTable vtable;
};

struct SpinLock {
  int32_t m_owner;
};
struct SpinLock__Boxed {
  struct SpinLock__Class *klass;
  struct MonitorData *monitor;
  struct SpinLock fields;
};
struct SpinLock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpinLock__StaticFields {
  int32_t MAXIMUM_WAITERS;
};
struct SpinLock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpinLock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpinLock__VTable vtable;
};

struct __declspec(align(8)) SpinLock_SystemThreading_SpinLockDebugView__Fields {
  struct SpinLock m_spinLock;
};
struct SpinLock_SystemThreading_SpinLockDebugView {
  struct SpinLock_SystemThreading_SpinLockDebugView__Class *klass;
  struct MonitorData *monitor;
  struct SpinLock_SystemThreading_SpinLockDebugView__Fields fields;
};
struct SpinLock_SystemThreading_SpinLockDebugView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpinLock_SystemThreading_SpinLockDebugView__StaticFields {
};
struct SpinLock_SystemThreading_SpinLockDebugView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpinLock_SystemThreading_SpinLockDebugView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpinLock_SystemThreading_SpinLockDebugView__VTable vtable;
};

struct SpinWait {
  int32_t m_count;
};
struct SpinWait__Boxed {
  struct SpinWait__Class *klass;
  struct MonitorData *monitor;
  struct SpinWait fields;
};
struct SpinWait__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpinWait__StaticFields {
};
struct SpinWait__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpinWait__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpinWait__VTable vtable;
};

struct AbandonedMutexException__Fields {
  struct SystemException__Fields _;
  int32_t m_MutexIndex;
  struct Mutex * m_Mutex;
};
struct AbandonedMutexException {
  struct AbandonedMutexException__Class *klass;
  struct MonitorData *monitor;
  struct AbandonedMutexException__Fields fields;
};
struct Mutex__Fields {
  struct WaitHandle__Fields _;
};
struct Mutex {
  struct Mutex__Class *klass;
  struct MonitorData *monitor;
  struct Mutex__Fields fields;
};
struct Mutex__VTable {
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
struct Mutex__StaticFields {
};
struct Mutex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mutex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mutex__VTable vtable;
};
struct AbandonedMutexException__VTable {
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
struct AbandonedMutexException__StaticFields {
};
struct AbandonedMutexException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AbandonedMutexException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AbandonedMutexException__VTable vtable;
};

struct AutoResetEvent__Fields {
  struct EventWaitHandle__Fields _;
};
struct AutoResetEvent {
  struct AutoResetEvent__Class *klass;
  struct MonitorData *monitor;
  struct AutoResetEvent__Fields fields;
};
struct AutoResetEvent__VTable {
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
struct AutoResetEvent__StaticFields {
};
struct AutoResetEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoResetEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoResetEvent__VTable vtable;
};

enum EventResetMode__Enum : int32_t {
  EventResetMode__Enum_AutoReset = 0,
  EventResetMode__Enum_ManualReset = 1,
};
struct EventResetMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventResetMode__Enum value;
};

struct ExecutionContext_Reader {
  struct ExecutionContext * m_ec;
};
struct ExecutionContext_Reader__Boxed {
  struct ExecutionContext_Reader__Class *klass;
  struct MonitorData *monitor;
  struct ExecutionContext_Reader fields;
};
struct ExecutionContextSwitcher {
  struct ExecutionContext_Reader outerEC;
  bool outerECBelongsToScope;
  struct Object * hecsw;
  struct Thread * thread;
};
struct ExecutionContextSwitcher__Boxed {
  struct ExecutionContextSwitcher__Class *klass;
  struct MonitorData *monitor;
  struct ExecutionContextSwitcher fields;
};
struct ExecutionContext_Reader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExecutionContext_Reader__StaticFields {
};
struct ExecutionContext_Reader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecutionContext_Reader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecutionContext_Reader__VTable vtable;
};
struct ExecutionContextSwitcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExecutionContextSwitcher__StaticFields {
};
struct ExecutionContextSwitcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecutionContextSwitcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecutionContextSwitcher__VTable vtable;
};

enum ExecutionContext_CaptureOptions__Enum : int32_t {
  ExecutionContext_CaptureOptions__Enum_None = 0,
  ExecutionContext_CaptureOptions__Enum_IgnoreSyncCtx = 1,
  ExecutionContext_CaptureOptions__Enum_OptimizeDefaultCase = 2,
};
struct ExecutionContext_CaptureOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExecutionContext_CaptureOptions__Enum value;
};

struct LogicalCallContext_Reader {
  struct LogicalCallContext * m_ctx;
};
struct LogicalCallContext_Reader__Boxed {
  struct LogicalCallContext_Reader__Class *klass;
  struct MonitorData *monitor;
  struct LogicalCallContext_Reader fields;
};
struct LogicalCallContext_Reader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LogicalCallContext_Reader__StaticFields {
};
struct LogicalCallContext_Reader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LogicalCallContext_Reader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LogicalCallContext_Reader__VTable vtable;
};

struct LockRecursionException__Fields {
  struct Exception__Fields _;
};
struct LockRecursionException {
  struct LockRecursionException__Class *klass;
  struct MonitorData *monitor;
  struct LockRecursionException__Fields fields;
};
struct LockRecursionException__VTable {
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
struct LockRecursionException__StaticFields {
};
struct LockRecursionException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LockRecursionException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LockRecursionException__VTable vtable;
};

struct SemaphoreFullException__Fields {
  struct SystemException__Fields _;
};
struct SemaphoreFullException {
  struct SemaphoreFullException__Class *klass;
  struct MonitorData *monitor;
  struct SemaphoreFullException__Fields fields;
};
struct SemaphoreFullException__VTable {
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
struct SemaphoreFullException__StaticFields {
};
struct SemaphoreFullException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SemaphoreFullException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SemaphoreFullException__VTable vtable;
};

struct SynchronizationLockException__Fields {
  struct SystemException__Fields _;
};
struct SynchronizationLockException {
  struct SynchronizationLockException__Class *klass;
  struct MonitorData *monitor;
  struct SynchronizationLockException__Fields fields;
};
struct SynchronizationLockException__VTable {
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
struct SynchronizationLockException__StaticFields {
};
struct SynchronizationLockException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SynchronizationLockException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SynchronizationLockException__VTable vtable;
};

struct __declspec(align(8)) ThreadHelper__Fields {
  struct Delegate * _start;
  struct Object * _startArg;
  struct ExecutionContext * _executionContext;
};
struct ThreadHelper {
  struct ThreadHelper__Class *klass;
  struct MonitorData *monitor;
  struct ThreadHelper__Fields fields;
};
struct ThreadHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadHelper__StaticFields {
  struct ContextCallback * _ccb;
};
struct ThreadHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadHelper__VTable vtable;
};

struct ThreadStart__Fields {
  struct MulticastDelegate__Fields _;
};
struct ThreadStart {
  struct ThreadStart__Class *klass;
  struct MonitorData *monitor;
  struct ThreadStart__Fields fields;
};
struct ThreadStart__VTable {
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
struct ThreadStart__StaticFields {
};
struct ThreadStart__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadStart__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadStart__VTable vtable;
};

enum ThreadPriority__Enum : int32_t {
  ThreadPriority__Enum_Lowest = 0,
  ThreadPriority__Enum_BelowNormal = 1,
  ThreadPriority__Enum_Normal = 2,
  ThreadPriority__Enum_AboveNormal = 3,
  ThreadPriority__Enum_Highest = 4,
};
struct ThreadPriority__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ThreadPriority__Enum value;
};

struct ThreadInterruptedException__Fields {
  struct SystemException__Fields _;
};
struct ThreadInterruptedException {
  struct ThreadInterruptedException__Class *klass;
  struct MonitorData *monitor;
  struct ThreadInterruptedException__Fields fields;
};
struct ThreadInterruptedException__VTable {
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
struct ThreadInterruptedException__StaticFields {
};
struct ThreadInterruptedException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadInterruptedException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadInterruptedException__VTable vtable;
};

struct WaitCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct WaitCallback {
  struct WaitCallback__Class *klass;
  struct MonitorData *monitor;
  struct WaitCallback__Fields fields;
};
struct WaitCallback__VTable {
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
struct WaitCallback__StaticFields {
};
struct WaitCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitCallback__VTable vtable;
};

struct WaitOrTimerCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct WaitOrTimerCallback {
  struct WaitOrTimerCallback__Class *klass;
  struct MonitorData *monitor;
  struct WaitOrTimerCallback__Fields fields;
};
struct WaitOrTimerCallback__VTable {
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
struct WaitOrTimerCallback__StaticFields {
};
struct WaitOrTimerCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitOrTimerCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitOrTimerCallback__VTable vtable;
};

struct __declspec(align(8)) ThreadPoolWorkQueue__Fields {
  struct ThreadPoolWorkQueue_QueueSegment * queueHead;
  struct ThreadPoolWorkQueue_QueueSegment * queueTail;
  int32_t numOutstandingThreadRequests;
};
struct ThreadPoolWorkQueue {
  struct ThreadPoolWorkQueue__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolWorkQueue__Fields fields;
};
struct __declspec(align(8)) ThreadPoolWorkQueue_QueueSegment__Fields {
  struct IThreadPoolWorkItem__Array * nodes;
  int32_t indexes;
  struct ThreadPoolWorkQueue_QueueSegment * Next;
};
struct ThreadPoolWorkQueue_QueueSegment {
  struct ThreadPoolWorkQueue_QueueSegment__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolWorkQueue_QueueSegment__Fields fields;
};
struct IThreadPoolWorkItem {
  struct IThreadPoolWorkItem__Class *klass;
  struct MonitorData *monitor;
};
struct IThreadPoolWorkItem__Array {
  struct IThreadPoolWorkItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IThreadPoolWorkItem * vector[32];
};
struct __declspec(align(8)) ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Fields {
  struct ThreadPoolWorkQueue_WorkStealingQueue__Array * m_array;
};
struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ {
  struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Fields fields;
};
struct __declspec(align(8)) ThreadPoolWorkQueue_WorkStealingQueue__Fields {
  struct IThreadPoolWorkItem__Array * m_array;
  int32_t m_mask;
  int32_t m_headIndex;
  int32_t m_tailIndex;
  struct SpinLock m_foreignLock;
};
struct ThreadPoolWorkQueue_WorkStealingQueue {
  struct ThreadPoolWorkQueue_WorkStealingQueue__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolWorkQueue_WorkStealingQueue__Fields fields;
};
struct ThreadPoolWorkQueue_WorkStealingQueue__Array {
  struct ThreadPoolWorkQueue_WorkStealingQueue__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ThreadPoolWorkQueue_WorkStealingQueue * vector[32];
};
struct IThreadPoolWorkItem__VTable {
  VirtualInvokeData ExecuteWorkItem;
  VirtualInvokeData MarkAborted;
};
struct IThreadPoolWorkItem__StaticFields {
};
struct IThreadPoolWorkItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IThreadPoolWorkItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IThreadPoolWorkItem__VTable vtable;
};
struct ThreadPoolWorkQueue_QueueSegment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadPoolWorkQueue_QueueSegment__StaticFields {
};
struct ThreadPoolWorkQueue_QueueSegment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolWorkQueue_QueueSegment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolWorkQueue_QueueSegment__VTable vtable;
};
struct ThreadPoolWorkQueue_WorkStealingQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadPoolWorkQueue_WorkStealingQueue__StaticFields {
};
struct ThreadPoolWorkQueue_WorkStealingQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolWorkQueue_WorkStealingQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolWorkQueue_WorkStealingQueue__VTable vtable;
};
struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___StaticFields {
};
struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___VTable vtable;
};
struct ThreadPoolWorkQueue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadPoolWorkQueue__StaticFields {
  struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ * allThreadQueues;
};
struct ThreadPoolWorkQueue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolWorkQueue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolWorkQueue__VTable vtable;
};

struct __declspec(align(8)) ThreadPoolWorkQueueThreadLocals__Fields {
  struct ThreadPoolWorkQueue * workQueue;
  struct ThreadPoolWorkQueue_WorkStealingQueue * workStealingQueue;
  struct Random * random;
};
struct ThreadPoolWorkQueueThreadLocals {
  struct ThreadPoolWorkQueueThreadLocals__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPoolWorkQueueThreadLocals__Fields fields;
};
struct ThreadPoolWorkQueueThreadLocals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ThreadPoolWorkQueueThreadLocals__StaticFields {
  struct ThreadPoolWorkQueueThreadLocals * threadLocals;
};
struct ThreadPoolWorkQueueThreadLocals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPoolWorkQueueThreadLocals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPoolWorkQueueThreadLocals__VTable vtable;
};

struct __declspec(align(8)) QueueUserWorkItemCallback__Fields {
  struct WaitCallback * callback;
  struct ExecutionContext * context;
  struct Object * state;
};
struct QueueUserWorkItemCallback {
  struct QueueUserWorkItemCallback__Class *klass;
  struct MonitorData *monitor;
  struct QueueUserWorkItemCallback__Fields fields;
};
struct QueueUserWorkItemCallback__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
};
struct QueueUserWorkItemCallback__StaticFields {
  struct ContextCallback * ccb;
};
struct QueueUserWorkItemCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QueueUserWorkItemCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QueueUserWorkItemCallback__VTable vtable;
};

struct RegisteredWaitHandle__Fields {
  struct MarshalByRefObject__Fields _;
  struct WaitHandle * _waitObject;
  struct WaitOrTimerCallback * _callback;
  struct Object * _state;
  struct WaitHandle * _finalEvent;
  struct ManualResetEvent * _cancelEvent;
  struct TimeSpan _timeout;
  int32_t _callsInProcess;
  bool _executeOnlyOnce;
  bool _unregistered;
};
struct RegisteredWaitHandle {
  struct RegisteredWaitHandle__Class *klass;
  struct MonitorData *monitor;
  struct RegisteredWaitHandle__Fields fields;
};
struct RegisteredWaitHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
};
struct RegisteredWaitHandle__StaticFields {
};
struct RegisteredWaitHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegisteredWaitHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegisteredWaitHandle__VTable vtable;
};

struct IEnumerable_1_System_Threading_IThreadPoolWorkItem_ {
  struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___StaticFields {
};
struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Threading_IThreadPoolWorkItem___VTable vtable;
};

struct __declspec(align(8)) ThreadPool_EnumerateQueuedWorkItems_d_21__Fields {
  int32_t __1__state;
  struct IThreadPoolWorkItem * __2__current;
  int32_t __l__initialThreadId;
  struct ThreadPoolWorkQueue_WorkStealingQueue__Array * wsQueues;
  struct ThreadPoolWorkQueue_WorkStealingQueue__Array * __3__wsQueues;
  struct IThreadPoolWorkItem__Array * _items_5__1;
  int32_t _i_5__2;
  struct ThreadPoolWorkQueue_QueueSegment * globalQueueTail;
  struct ThreadPoolWorkQueue_QueueSegment * __3__globalQueueTail;
  struct IThreadPoolWorkItem__Array * _items_5__3;
  int32_t _i_5__4;
  struct ThreadPoolWorkQueue_QueueSegment * _segment_5__5;
  struct ThreadPoolWorkQueue_WorkStealingQueue__Array * __7__wrap1;
  int32_t __7__wrap2;
};
struct ThreadPool_EnumerateQueuedWorkItems_d_21 {
  struct ThreadPool_EnumerateQueuedWorkItems_d_21__Class *klass;
  struct MonitorData *monitor;
  struct ThreadPool_EnumerateQueuedWorkItems_d_21__Fields fields;
};
struct IEnumerator_1_System_Threading_IThreadPoolWorkItem_ {
  struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___StaticFields {
};
struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Threading_IThreadPoolWorkItem___VTable vtable;
};
struct ThreadPool_EnumerateQueuedWorkItems_d_21__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Threading_IThreadPoolWorkItem__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Threading_IThreadPoolWorkItem__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ThreadPool_EnumerateQueuedWorkItems_d_21__StaticFields {
};
struct ThreadPool_EnumerateQueuedWorkItems_d_21__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ThreadPool_EnumerateQueuedWorkItems_d_21__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ThreadPool_EnumerateQueuedWorkItems_d_21__VTable vtable;
};}