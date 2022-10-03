namespace app {
    struct __declspec(align(8)) SpinLock_SystemThreading_SpinLockDebugView__Fields {
        struct SpinLock m_spinLock;
    };

    struct SpinLock_SystemThreading_SpinLockDebugView {
        struct SpinLock_SystemThreading_SpinLockDebugView__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpinLock_SystemThreading_SpinLockDebugView__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpinLock_SystemThreading_SpinLockDebugView__VTable vtable;
    };

    struct SpinWait {
        int32_t m_count;
    };

    struct SpinWait__Boxed {
        struct SpinWait__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpinWait__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpinWait__VTable vtable;
    };

    struct AbandonedMutexException__Fields {
        struct SystemException__Fields _;
        int32_t m_MutexIndex;
        struct Mutex* m_Mutex;
    };

    struct AbandonedMutexException {
        struct AbandonedMutexException__Class* klass;
        MonitorData* monitor;
        struct AbandonedMutexException__Fields fields;
    };

    struct Mutex__Fields {
        struct WaitHandle__Fields _;
    };

    struct Mutex {
        struct Mutex__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Mutex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AbandonedMutexException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AbandonedMutexException__VTable vtable;
    };

    struct AutoResetEvent__Fields {
        struct EventWaitHandle__Fields _;
    };

    struct AutoResetEvent {
        struct AutoResetEvent__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutoResetEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutoResetEvent__VTable vtable;
    };

    enum class EventResetMode__Enum : int32_t {
        AutoReset = 0x00000000,
        ManualReset = 0x00000001,
    };

    struct EventResetMode__Enum__Boxed {
        struct EventResetMode__Enum__Class* klass;
        MonitorData* monitor;
        EventResetMode__Enum value;
    };

    struct EventResetMode__Enum__VTable {
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

    struct EventResetMode__Enum__StaticFields {
    };

    struct EventResetMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventResetMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventResetMode__Enum__VTable vtable;
    };

    struct ExecutionContext_Reader {
        struct ExecutionContext* m_ec;
    };

    struct ExecutionContext_Reader__Boxed {
        struct ExecutionContext_Reader__Class* klass;
        MonitorData* monitor;
        struct ExecutionContext_Reader fields;
    };

    struct ExecutionContextSwitcher {
        struct ExecutionContext_Reader outerEC;
        bool outerECBelongsToScope;
        struct Object* hecsw;
        struct Thread* thread;
    };

    struct ExecutionContextSwitcher__Boxed {
        struct ExecutionContextSwitcher__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExecutionContext_Reader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExecutionContextSwitcher__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExecutionContextSwitcher__VTable vtable;
    };

    struct ExecutionContextSwitcher___VTable {
    };

    struct ExecutionContextSwitcher___StaticFields {
    };

    struct ExecutionContextSwitcher___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExecutionContextSwitcher___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExecutionContextSwitcher___VTable vtable;
    };

    enum class ExecutionContext_CaptureOptions__Enum : int32_t {
        None = 0x00000000,
        IgnoreSyncCtx = 0x00000001,
        OptimizeDefaultCase = 0x00000002,
    };

    struct ExecutionContext_CaptureOptions__Enum__Boxed {
        struct ExecutionContext_CaptureOptions__Enum__Class* klass;
        MonitorData* monitor;
        ExecutionContext_CaptureOptions__Enum value;
    };

    struct ExecutionContext_CaptureOptions__Enum__VTable {
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

    struct ExecutionContext_CaptureOptions__Enum__StaticFields {
    };

    struct ExecutionContext_CaptureOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExecutionContext_CaptureOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExecutionContext_CaptureOptions__Enum__VTable vtable;
    };

    struct LogicalCallContext_Reader {
        struct LogicalCallContext* m_ctx;
    };

    struct LogicalCallContext_Reader__Boxed {
        struct LogicalCallContext_Reader__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LogicalCallContext_Reader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LogicalCallContext_Reader__VTable vtable;
    };

    struct LockRecursionException__Fields {
        struct Exception__Fields _;
    };

    struct LockRecursionException {
        struct LockRecursionException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LockRecursionException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LockRecursionException__VTable vtable;
    };

    struct SemaphoreFullException__Fields {
        struct SystemException__Fields _;
    };

    struct SemaphoreFullException {
        struct SemaphoreFullException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SemaphoreFullException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SemaphoreFullException__VTable vtable;
    };

    struct SynchronizationLockException__Fields {
        struct SystemException__Fields _;
    };

    struct SynchronizationLockException {
        struct SynchronizationLockException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SynchronizationLockException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SynchronizationLockException__VTable vtable;
    };

    struct __declspec(align(8)) ThreadHelper__Fields {
        struct Delegate* _start;
        struct Object* _startArg;
        struct ExecutionContext* _executionContext;
    };

    struct ThreadHelper {
        struct ThreadHelper__Class* klass;
        MonitorData* monitor;
        struct ThreadHelper__Fields fields;
    };

    struct ThreadHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ThreadHelper__StaticFields {
        struct ContextCallback* _ccb;
    };

    struct ThreadHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadHelper__VTable vtable;
    };

    struct ThreadStart__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct ThreadStart {
        struct ThreadStart__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadStart__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadStart__VTable vtable;
    };

    enum class ThreadPriority__Enum : int32_t {
        Lowest = 0x00000000,
        BelowNormal = 0x00000001,
        Normal = 0x00000002,
        AboveNormal = 0x00000003,
        Highest = 0x00000004,
    };

    struct ThreadPriority__Enum__Boxed {
        struct ThreadPriority__Enum__Class* klass;
        MonitorData* monitor;
        ThreadPriority__Enum value;
    };

    struct ThreadPriority__Enum__VTable {
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

    struct ThreadPriority__Enum__StaticFields {
    };

    struct ThreadPriority__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPriority__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPriority__Enum__VTable vtable;
    };

    struct ThreadInterruptedException__Fields {
        struct SystemException__Fields _;
    };

    struct ThreadInterruptedException {
        struct ThreadInterruptedException__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadInterruptedException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadInterruptedException__VTable vtable;
    };

    struct WaitCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct WaitCallback {
        struct WaitCallback__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitCallback__VTable vtable;
    };

    struct WaitOrTimerCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct WaitOrTimerCallback {
        struct WaitOrTimerCallback__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitOrTimerCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitOrTimerCallback__VTable vtable;
    };

    struct __declspec(align(8)) ThreadPoolWorkQueue__Fields {
        struct ThreadPoolWorkQueue_QueueSegment* queueHead;
        struct ThreadPoolWorkQueue_QueueSegment* queueTail;
        int32_t numOutstandingThreadRequests;
    };

    struct ThreadPoolWorkQueue {
        struct ThreadPoolWorkQueue__Class* klass;
        MonitorData* monitor;
        struct ThreadPoolWorkQueue__Fields fields;
    };

    struct __declspec(align(8)) ThreadPoolWorkQueue_QueueSegment__Fields {
        struct IThreadPoolWorkItem__Array* nodes;
        int32_t indexes;
        struct ThreadPoolWorkQueue_QueueSegment* Next;
    };

    struct ThreadPoolWorkQueue_QueueSegment {
        struct ThreadPoolWorkQueue_QueueSegment__Class* klass;
        MonitorData* monitor;
        struct ThreadPoolWorkQueue_QueueSegment__Fields fields;
    };

    struct IThreadPoolWorkItem {
        struct IThreadPoolWorkItem__Class* klass;
        MonitorData* monitor;
    };

    struct IThreadPoolWorkItem__Array {
        struct IThreadPoolWorkItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IThreadPoolWorkItem* vector[32];
    };

    struct __declspec(align(8)) ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Fields {
        struct ThreadPoolWorkQueue_WorkStealingQueue__Array* m_array;
    };

    struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_ {
        struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Class* klass;
        MonitorData* monitor;
        struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___Fields fields;
    };

    struct __declspec(align(8)) ThreadPoolWorkQueue_WorkStealingQueue__Fields {
        struct IThreadPoolWorkItem__Array* m_array;
        int32_t m_mask;
        int32_t m_headIndex;
        int32_t m_tailIndex;
        struct SpinLock m_foreignLock;
    };

    struct ThreadPoolWorkQueue_WorkStealingQueue {
        struct ThreadPoolWorkQueue_WorkStealingQueue__Class* klass;
        MonitorData* monitor;
        struct ThreadPoolWorkQueue_WorkStealingQueue__Fields fields;
    };

    struct ThreadPoolWorkQueue_WorkStealingQueue__Array {
        struct ThreadPoolWorkQueue_WorkStealingQueue__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ThreadPoolWorkQueue_WorkStealingQueue* vector[32];
    };

    struct IThreadPoolWorkItem__VTable {
        VirtualInvokeData ExecuteWorkItem;
        VirtualInvokeData MarkAborted;
    };

    struct IThreadPoolWorkItem__StaticFields {
    };

    struct IThreadPoolWorkItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IThreadPoolWorkItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IThreadPoolWorkItem__VTable vtable;
    };

    struct IThreadPoolWorkItem__Array__VTable {
    };

    struct IThreadPoolWorkItem__Array__StaticFields {
    };

    struct IThreadPoolWorkItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IThreadPoolWorkItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IThreadPoolWorkItem__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueue_QueueSegment__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueue_WorkStealingQueue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPoolWorkQueue_WorkStealingQueue__VTable vtable;
    };

    struct ThreadPoolWorkQueue_WorkStealingQueue__Array__VTable {
    };

    struct ThreadPoolWorkQueue_WorkStealingQueue__Array__StaticFields {
    };

    struct ThreadPoolWorkQueue_WorkStealingQueue__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueue_WorkStealingQueue__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPoolWorkQueue_WorkStealingQueue__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue___VTable vtable;
    };

    struct ThreadPoolWorkQueue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ThreadPoolWorkQueue__StaticFields {
        struct ThreadPoolWorkQueue_SparseArray_1_ThreadPoolWorkQueue_WorkStealingQueue_* allThreadQueues;
    };

    struct ThreadPoolWorkQueue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPoolWorkQueue__VTable vtable;
    };

    struct __declspec(align(8)) ThreadPoolWorkQueueThreadLocals__Fields {
        struct ThreadPoolWorkQueue* workQueue;
        struct ThreadPoolWorkQueue_WorkStealingQueue* workStealingQueue;
        struct Random* random;
    };

    struct ThreadPoolWorkQueueThreadLocals {
        struct ThreadPoolWorkQueueThreadLocals__Class* klass;
        MonitorData* monitor;
        struct ThreadPoolWorkQueueThreadLocals__Fields fields;
    };

    struct ThreadPoolWorkQueueThreadLocals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ThreadPoolWorkQueueThreadLocals__StaticFields {
        struct ThreadPoolWorkQueueThreadLocals* threadLocals;
    };

    struct ThreadPoolWorkQueueThreadLocals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadPoolWorkQueueThreadLocals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadPoolWorkQueueThreadLocals__VTable vtable;
    };

    struct IThreadPoolWorkItem___VTable {
    };

    struct IThreadPoolWorkItem___StaticFields {
    };

    struct IThreadPoolWorkItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IThreadPoolWorkItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IThreadPoolWorkItem___VTable vtable;
    };

    struct __declspec(align(8)) QueueUserWorkItemCallback__Fields {
        struct WaitCallback* callback;
        struct ExecutionContext* context;
        struct Object* state;
    };

    struct QueueUserWorkItemCallback {
        struct QueueUserWorkItemCallback__Class* klass;
        MonitorData* monitor;
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
        struct ContextCallback* ccb;
    };

} // namespace app
