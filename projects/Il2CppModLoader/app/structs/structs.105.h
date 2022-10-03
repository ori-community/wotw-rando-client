namespace app {
    struct FtpStatusCode__Enum__VTable {
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

    struct FtpStatusCode__Enum__StaticFields {
    };

    struct FtpStatusCode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FtpStatusCode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FtpStatusCode__Enum__VTable vtable;
    };

    struct PooledStream__Fields {
        struct Stream__Fields _;
        bool m_CheckLifetime;
        struct TimeSpan m_Lifetime;
        struct DateTime m_CreateTime;
        bool m_ConnectionIsDoomed;
        struct ConnectionPool* m_ConnectionPool;
        struct WeakReference* m_Owner;
        int32_t m_PooledCount;
        bool m_Initalizing;
        struct IPAddress* m_ServerAddress;
        struct NetworkStream* m_NetworkStream;
        struct Socket* m_AbortSocket;
        struct Socket* m_AbortSocket6;
        bool m_JustConnected;
        struct GeneralAsyncDelegate* m_AsyncCallback;
    };

    struct PooledStream {
        struct PooledStream__Class* klass;
        MonitorData* monitor;
        struct PooledStream__Fields fields;
    };

    enum class ConnectionPool_State__Enum : int32_t {
        Initializing = 0x00000000,
        Running = 0x00000001,
        ShuttingDown = 0x00000002,
    };

    struct ConnectionPool_State__Enum__Boxed {
        struct ConnectionPool_State__Enum__Class* klass;
        MonitorData* monitor;
        ConnectionPool_State__Enum value;
    };

    struct __declspec(align(8)) ConnectionPool__Fields {
        struct TimerThread_Queue* m_CleanupQueue;
        ConnectionPool_State__Enum m_State;

        struct InterlockedStack* m_StackOld;
        struct InterlockedStack* m_StackNew;
        int32_t m_WaitCount;
        struct WaitHandle__Array* m_WaitHandles;
        struct Exception* m_ResError;
        bool m_ErrorOccured;
        struct TimerThread_Timer* m_ErrorTimer;
        struct ArrayList* m_ObjectList;
        int32_t m_TotalObjects;
        struct Queue* m_QueuedRequests;
        struct Thread* m_AsyncThread;
        int32_t m_MaxPoolSize;
        int32_t m_MinPoolSize;
        struct ServicePoint* m_ServicePoint;
        struct CreateConnectionDelegate* m_CreateConnectionCallback;
    };

    struct ConnectionPool {
        struct ConnectionPool__Class* klass;
        MonitorData* monitor;
        struct ConnectionPool__Fields fields;
    };

    struct __declspec(align(8)) InterlockedStack__Fields {
        struct Stack* _stack;
    };

    struct InterlockedStack {
        struct InterlockedStack__Class* klass;
        MonitorData* monitor;
        struct InterlockedStack__Fields fields;
    };

    struct CreateConnectionDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct CreateConnectionDelegate {
        struct CreateConnectionDelegate__Class* klass;
        MonitorData* monitor;
        struct CreateConnectionDelegate__Fields fields;
    };

    struct GeneralAsyncDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct GeneralAsyncDelegate {
        struct GeneralAsyncDelegate__Class* klass;
        MonitorData* monitor;
        struct GeneralAsyncDelegate__Fields fields;
    };

    struct ConnectionPool_State__Enum__VTable {
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

    struct ConnectionPool_State__Enum__StaticFields {
    };

    struct ConnectionPool_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConnectionPool_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConnectionPool_State__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InterlockedStack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CreateConnectionDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CreateConnectionDelegate__VTable vtable;
    };

    struct ConnectionPool__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConnectionPool__StaticFields {
        struct TimerThread_Callback* s_CleanupCallback;
        struct TimerThread_Callback* s_CancelErrorCallback;
        struct TimerThread_Queue* s_CancelErrorQueue;
    };

    struct ConnectionPool__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConnectionPool__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GeneralAsyncDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PooledStream__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PooledStream__VTable vtable;
    };

    enum class SocketShutdown__Enum : int32_t {
        Receive = 0x00000000,
        Send = 0x00000001,
        Both = 0x00000002,
    };

    struct SocketShutdown__Enum__Boxed {
        struct SocketShutdown__Enum__Class* klass;
        MonitorData* monitor;
        SocketShutdown__Enum value;
    };

    struct SocketShutdown__Enum__VTable {
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

    struct SocketShutdown__Enum__StaticFields {
    };

    struct SocketShutdown__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketShutdown__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketShutdown__Enum__VTable vtable;
    };

    enum class SelectMode__Enum : int32_t {
        SelectRead = 0x00000000,
        SelectWrite = 0x00000001,
        SelectError = 0x00000002,
    };

    struct SelectMode__Enum__Boxed {
        struct SelectMode__Enum__Class* klass;
        MonitorData* monitor;
        SelectMode__Enum value;
    };

    struct SelectMode__Enum__VTable {
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

    struct SelectMode__Enum__StaticFields {
    };

    struct SelectMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SelectMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SelectMode__Enum__VTable vtable;
    };

    struct DirectProxy__Fields {
        struct ProxyChain__Fields _;
        bool m_ProxyRetrieved;
    };

    struct DirectProxy {
        struct DirectProxy__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DirectProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DirectProxy__VTable vtable;
    };

    struct StaticProxy__Fields {
        struct ProxyChain__Fields _;
        struct Uri* m_Proxy;
    };

    struct StaticProxy {
        struct StaticProxy__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StaticProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StaticProxy__VTable vtable;
    };

    struct __declspec(align(8)) ScatterGatherBuffers__Fields {
        struct ScatterGatherBuffers_MemoryChunk* headChunk;
        struct ScatterGatherBuffers_MemoryChunk* currentChunk;
        int32_t nextChunkLength;
        int32_t totalLength;
        int32_t chunkCount;
    };

    struct ScatterGatherBuffers {
        struct ScatterGatherBuffers__Class* klass;
        MonitorData* monitor;
        struct ScatterGatherBuffers__Fields fields;
    };

    struct __declspec(align(8)) ScatterGatherBuffers_MemoryChunk__Fields {
        struct Byte__Array* Buffer;
        int32_t FreeOffset;
        struct ScatterGatherBuffers_MemoryChunk* Next;
    };

    struct ScatterGatherBuffers_MemoryChunk {
        struct ScatterGatherBuffers_MemoryChunk__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScatterGatherBuffers_MemoryChunk__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScatterGatherBuffers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScatterGatherBuffers__VTable vtable;
    };

    struct Semaphore_1__Fields {
        struct WaitHandle__Fields _;
    };

    struct Semaphore_1 {
        struct Semaphore_1__Class* klass;
        MonitorData* monitor;
        struct Semaphore_1__Fields fields;
    };

    struct Semaphore_1__VTable {
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

    struct Semaphore_1__StaticFields {
    };

    struct Semaphore_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Semaphore_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Semaphore_1__VTable vtable;
    };

    struct TimerThread_InfiniteTimerQueue__Fields {
        struct TimerThread_Queue__Fields _;
    };

    struct TimerThread_InfiniteTimerQueue {
        struct TimerThread_InfiniteTimerQueue__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimerThread_InfiniteTimerQueue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimerThread_InfiniteTimerQueue__VTable vtable;
    };

    struct TimerThread_InfiniteTimer__Fields {
        struct TimerThread_Timer__Fields _;
        int32_t cancelled;
    };

    struct TimerThread_InfiniteTimer {
        struct TimerThread_InfiniteTimer__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimerThread_InfiniteTimer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimerThread_InfiniteTimer__VTable vtable;
    };

    struct __declspec(align(8)) WebProxyDataBuilder__Fields {
        struct WebProxyData* m_Result;
    };

    struct WebProxyDataBuilder {
        struct WebProxyDataBuilder__Class* klass;
        MonitorData* monitor;
        struct WebProxyDataBuilder__Fields fields;
    };

    struct __declspec(align(8)) WebProxyData__Fields {
        bool bypassOnLocal;
        bool automaticallyDetectSettings;
        struct Uri* proxyAddress;
        struct Hashtable* proxyHostAddresses;
        struct Uri* scriptLocation;
        struct ArrayList* bypassList;
    };

    struct WebProxyData {
        struct WebProxyData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebProxyData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WebProxyDataBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WebProxyDataBuilder__VTable vtable;
    };

    struct __declspec(align(8)) EmptyWebProxy__Fields {
        struct ICredentials* m_credentials;
    };

    struct EmptyWebProxy {
        struct EmptyWebProxy__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmptyWebProxy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmptyWebProxy__VTable vtable;
    };

    struct __declspec(align(8)) ConnectionPool_AsyncConnectionPoolRequest__Fields {
        struct Object* OwningObject;
        struct GeneralAsyncDelegate* AsyncCallback;
        struct ConnectionPool* Pool;
        int32_t CreationTimeout;
    };

    struct ConnectionPool_AsyncConnectionPoolRequest {
        struct ConnectionPool_AsyncConnectionPoolRequest__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConnectionPool_AsyncConnectionPoolRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConnectionPool_AsyncConnectionPoolRequest__VTable vtable;
    };

    struct WaitHandle___VTable {
    };

    struct WaitHandle___StaticFields {
    };

    struct WaitHandle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitHandle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitHandle___VTable vtable;
    };

    struct __declspec(align(8)) Cookie__Fields {
        struct String* m_comment;
        struct Uri* m_commentUri;
        CookieVariant__Enum m_cookieVariant;

        bool m_discard;
        struct String* m_domain;
        bool m_domain_implicit;
        struct DateTime m_expires;
        struct String* m_name;
        struct String* m_path;
        bool m_path_implicit;
        struct String* m_port;
        bool m_port_implicit;
        struct Int32__Array* m_port_list;
        bool m_secure;
        bool m_httpOnly;
        struct DateTime m_timeStamp;
        struct String* m_value;
        int32_t m_version;
        struct String* m_domainKey;
        bool IsQuotedVersion;
        bool IsQuotedDomain;
    };

    struct Cookie {
        struct Cookie__Class* klass;
        MonitorData* monitor;
        struct Cookie__Fields fields;
    };

    struct Comparer_1 {
        struct Comparer_1__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Comparer_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Comparer_1__VTable vtable;
    };

    struct Cookie__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Cookie__StaticFields {
        struct Char__Array* PortSplitDelimiters;
        struct Char__Array* Reserved2Name;
        struct Char__Array* Reserved2Value;
        struct Comparer_1* staticComparer;
    };

    struct Cookie__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Cookie__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Cookie__VTable vtable;
    };

    enum class CookieToken__Enum : int32_t {
        Nothing = 0x00000000,
        NameValuePair = 0x00000001,
        Attribute = 0x00000002,
        EndToken = 0x00000003,
        EndCookie = 0x00000004,
        End = 0x00000005,
        Equals = 0x00000006,
        Comment = 0x00000007,
        CommentUrl = 0x00000008,
        CookieName = 0x00000009,
        Discard = 0x0000000a,
        Domain = 0x0000000b,
        Expires = 0x0000000c,
        MaxAge = 0x0000000d,
        Path = 0x0000000e,
        Port = 0x0000000f,
        Secure = 0x00000010,
        HttpOnly = 0x00000011,
        Unknown = 0x00000012,
        Version = 0x00000013,
    };

    struct CookieToken__Enum__Boxed {
        struct CookieToken__Enum__Class* klass;
        MonitorData* monitor;
        CookieToken__Enum value;
    };

    struct __declspec(align(8)) CookieTokenizer__Fields {
        bool m_eofCookie;
        int32_t m_index;
        int32_t m_length;
        struct String* m_name;
        bool m_quoted;
        int32_t m_start;
        CookieToken__Enum m_token;

        int32_t m_tokenLength;
        struct String* m_tokenStream;
        struct String* m_value;
    };

    struct CookieTokenizer {
        struct CookieTokenizer__Class* klass;
        MonitorData* monitor;
        struct CookieTokenizer__Fields fields;
    };

    struct CookieTokenizer_RecognizedAttribute {
        struct String* m_name;
        CookieToken__Enum m_token;
    };

    struct CookieTokenizer_RecognizedAttribute__Boxed {
        struct CookieTokenizer_RecognizedAttribute__Class* klass;
        MonitorData* monitor;
        struct CookieTokenizer_RecognizedAttribute fields;
    };

    struct CookieTokenizer_RecognizedAttribute__Array {
        struct CookieTokenizer_RecognizedAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CookieTokenizer_RecognizedAttribute vector[32];
    };

    struct CookieToken__Enum__VTable {
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

    struct CookieToken__Enum__StaticFields {
    };

    struct CookieToken__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CookieToken__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CookieToken__Enum__VTable vtable;
    };

    struct CookieTokenizer_RecognizedAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
