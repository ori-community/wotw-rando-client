namespace app {
    struct DigestHeaderParser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DigestHeaderParser__StaticFields {
        struct String__Array* keywords;
    };

    struct DigestHeaderParser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DigestHeaderParser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DigestHeaderParser__VTable vtable;
    };

    struct __declspec(align(8)) DigestSession__Fields {
        struct DateTime lastUse;
        int32_t _nc;
        struct HashAlgorithm* hash;
        struct DigestHeaderParser* parser;
        struct String* _cnonce;
    };

    struct DigestSession {
        struct DigestSession__Class* klass;
        MonitorData* monitor;
        struct DigestSession__Fields fields;
    };

    struct DigestSession__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DigestSession__StaticFields {
        struct RandomNumberGenerator* rng;
    };

    struct DigestSession__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DigestSession__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DigestSession__VTable vtable;
    };

    struct DigestClient {
        struct DigestClient__Class* klass;
        MonitorData* monitor;
    };

    struct DigestClient__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Authenticate;
        VirtualInvokeData PreAuthenticate;
        VirtualInvokeData get_CanPreAuthenticate;
        VirtualInvokeData get_AuthenticationType;
    };

    struct DigestClient__StaticFields {
        struct Hashtable* cache;
    };

    struct DigestClient__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DigestClient__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DigestClient__VTable vtable;
    };

    struct Task_1_System_Net_IPAddress___Fields {
        struct Task__Fields _;
        struct IPAddress__Array* m_result;
    };

    struct Task_1_System_Net_IPAddress_ {
        struct Task_1_System_Net_IPAddress___Class* klass;
        MonitorData* monitor;
        struct Task_1_System_Net_IPAddress___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_System_Net_IPAddress___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_System_Net_IPAddress_ {
        struct TaskFactory_1_System_Net_IPAddress___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_System_Net_IPAddress___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Fields fields;
    };

    struct TaskFactory_1_System_Net_IPAddress___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_System_Net_IPAddress___StaticFields {
    };

    struct TaskFactory_1_System_Net_IPAddress___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_System_Net_IPAddress___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_System_Net_IPAddress___VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__VTable {
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

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11__VTable vtable;
    };

    struct Task_1_System_Net_IPAddress___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ShouldReplicate;
        VirtualInvokeData CreateReplicaTask;
        VirtualInvokeData get_SavedStateForNextReplica;
        VirtualInvokeData set_SavedStateFromPreviousReplica;
        VirtualInvokeData get_HandedOverChildReplica;
        VirtualInvokeData set_HandedOverChildReplica;
        VirtualInvokeData InnerInvoke;
    };

    struct Task_1_System_Net_IPAddress___StaticFields {
        struct TaskFactory_1_System_Net_IPAddress_* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__11* TaskWhenAnyCast;
    };

    struct Task_1_System_Net_IPAddress___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_System_Net_IPAddress___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_System_Net_IPAddress___VTable vtable;
    };

    struct Task_1_System_Net_IPHostEntry___Fields {
        struct Task__Fields _;
        struct IPHostEntry* m_result;
    };

    struct Task_1_System_Net_IPHostEntry_ {
        struct Task_1_System_Net_IPHostEntry___Class* klass;
        MonitorData* monitor;
        struct Task_1_System_Net_IPHostEntry___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_System_Net_IPHostEntry___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_System_Net_IPHostEntry_ {
        struct TaskFactory_1_System_Net_IPHostEntry___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_System_Net_IPHostEntry___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Fields fields;
    };

    struct TaskFactory_1_System_Net_IPHostEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_System_Net_IPHostEntry___StaticFields {
    };

    struct TaskFactory_1_System_Net_IPHostEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_System_Net_IPHostEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_System_Net_IPHostEntry___VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__VTable {
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

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12__VTable vtable;
    };

    struct Task_1_System_Net_IPHostEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
        VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
        VirtualInvokeData get_IsCompleted;
        VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
        VirtualInvokeData get_AsyncState;
        VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData ShouldReplicate;
        VirtualInvokeData CreateReplicaTask;
        VirtualInvokeData get_SavedStateForNextReplica;
        VirtualInvokeData set_SavedStateFromPreviousReplica;
        VirtualInvokeData get_HandedOverChildReplica;
        VirtualInvokeData set_HandedOverChildReplica;
        VirtualInvokeData InnerInvoke;
    };

    struct Task_1_System_Net_IPHostEntry___StaticFields {
        struct TaskFactory_1_System_Net_IPHostEntry_* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__12* TaskWhenAnyCast;
    };

    struct Task_1_System_Net_IPHostEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_System_Net_IPHostEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_System_Net_IPHostEntry___VTable vtable;
    };

    struct Dns_GetHostByNameCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Dns_GetHostByNameCallback {
        struct Dns_GetHostByNameCallback__Class* klass;
        MonitorData* monitor;
        struct Dns_GetHostByNameCallback__Fields fields;
    };

    struct Dns_GetHostByNameCallback__VTable {
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

    struct Dns_GetHostByNameCallback__StaticFields {
    };

    struct Dns_GetHostByNameCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dns_GetHostByNameCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dns_GetHostByNameCallback__VTable vtable;
    };

    struct Dns_ResolveCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Dns_ResolveCallback {
        struct Dns_ResolveCallback__Class* klass;
        MonitorData* monitor;
        struct Dns_ResolveCallback__Fields fields;
    };

    struct Dns_ResolveCallback__VTable {
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

    struct Dns_ResolveCallback__StaticFields {
    };

    struct Dns_ResolveCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dns_ResolveCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dns_ResolveCallback__VTable vtable;
    };

    struct Dns_GetHostEntryNameCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Dns_GetHostEntryNameCallback {
        struct Dns_GetHostEntryNameCallback__Class* klass;
        MonitorData* monitor;
        struct Dns_GetHostEntryNameCallback__Fields fields;
    };

    struct Dns_GetHostEntryNameCallback__VTable {
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

    struct Dns_GetHostEntryNameCallback__StaticFields {
    };

    struct Dns_GetHostEntryNameCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dns_GetHostEntryNameCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dns_GetHostEntryNameCallback__VTable vtable;
    };

    struct Dns_GetHostEntryIPCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Dns_GetHostEntryIPCallback {
        struct Dns_GetHostEntryIPCallback__Class* klass;
        MonitorData* monitor;
        struct Dns_GetHostEntryIPCallback__Fields fields;
    };

    struct Dns_GetHostEntryIPCallback__VTable {
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

    struct Dns_GetHostEntryIPCallback__StaticFields {
    };

    struct Dns_GetHostEntryIPCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dns_GetHostEntryIPCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dns_GetHostEntryIPCallback__VTable vtable;
    };

    struct Dns_GetHostAddressesCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Dns_GetHostAddressesCallback {
        struct Dns_GetHostAddressesCallback__Class* klass;
        MonitorData* monitor;
        struct Dns_GetHostAddressesCallback__Fields fields;
    };

    struct Dns_GetHostAddressesCallback__VTable {
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

    struct Dns_GetHostAddressesCallback__StaticFields {
    };

    struct Dns_GetHostAddressesCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dns_GetHostAddressesCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dns_GetHostAddressesCallback__VTable vtable;
    };

    enum class SocketAsyncOperation__Enum : int32_t {
        None = 0x00000000,
        Accept = 0x00000001,
        Connect = 0x00000002,
        Disconnect = 0x00000003,
        Receive = 0x00000004,
        ReceiveFrom = 0x00000005,
        ReceiveMessageFrom = 0x00000006,
        Send = 0x00000007,
        SendPackets = 0x00000008,
        SendTo = 0x00000009,
    };

    struct SocketAsyncOperation__Enum__Boxed {
        struct SocketAsyncOperation__Enum__Class* klass;
        MonitorData* monitor;
        SocketAsyncOperation__Enum value;
    };

    enum class SocketError__Enum : int32_t {
        Success = 0x00000000,
        SocketError = -1,
        Interrupted = 0x00002714,
        AccessDenied = 0x0000271d,
        Fault = 0x0000271e,
        InvalidArgument = 0x00002726,
        TooManyOpenSockets = 0x00002728,
        WouldBlock = 0x00002733,
        InProgress = 0x00002734,
        AlreadyInProgress = 0x00002735,
        NotSocket = 0x00002736,
        DestinationAddressRequired = 0x00002737,
        MessageSize = 0x00002738,
        ProtocolType = 0x00002739,
        ProtocolOption = 0x0000273a,
        ProtocolNotSupported = 0x0000273b,
        SocketNotSupported = 0x0000273c,
        OperationNotSupported = 0x0000273d,
        ProtocolFamilyNotSupported = 0x0000273e,
        AddressFamilyNotSupported = 0x0000273f,
        AddressAlreadyInUse = 0x00002740,
        AddressNotAvailable = 0x00002741,
        NetworkDown = 0x00002742,
        NetworkUnreachable = 0x00002743,
        NetworkReset = 0x00002744,
        ConnectionAborted = 0x00002745,
        ConnectionReset = 0x00002746,
        NoBufferSpaceAvailable = 0x00002747,
        IsConnected = 0x00002748,
        NotConnected = 0x00002749,
        Shutdown = 0x0000274a,
        TimedOut = 0x0000274c,
        ConnectionRefused = 0x0000274d,
        HostDown = 0x00002750,
        HostUnreachable = 0x00002751,
        ProcessLimit = 0x00002753,
        SystemNotReady = 0x0000276b,
        VersionNotSupported = 0x0000276c,
        NotInitialized = 0x0000276d,
        Disconnecting = 0x00002775,
        TypeNotFound = 0x0000277d,
        HostNotFound = 0x00002af9,
        TryAgain = 0x00002afa,
        NoRecovery = 0x00002afb,
        NoData = 0x00002afc,
        IOPending = 0x000003e5,
        OperationAborted = 0x000003e3,
    };

    struct SocketError__Enum__Boxed {
        struct SocketError__Enum__Class* klass;
        MonitorData* monitor;
        SocketError__Enum value;
    };

    struct __declspec(align(8)) SocketAsyncEventArgs__Fields {
        bool disposed;
        int32_t in_progress;
        struct EndPoint* remote_ep;
        struct Socket* current_socket;
        struct SocketAsyncResult* socket_async_result;
        struct Socket* _AcceptSocket_k__BackingField;
        struct IList_1_System_ArraySegment_1_* m_BufferList;
        int32_t _BytesTransferred_k__BackingField;
        int32_t _Count_k__BackingField;
        SocketAsyncOperation__Enum _LastOperation_k__BackingField;

        int32_t _SendPacketsSendSize_k__BackingField;
        SocketError__Enum _SocketError_k__BackingField;

        struct Object* _UserToken_k__BackingField;
        struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_* Completed;
    };

    struct SocketAsyncEventArgs {
        struct SocketAsyncEventArgs__Class* klass;
        MonitorData* monitor;
        struct SocketAsyncEventArgs__Fields fields;
    };

    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs_ {
        struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Class* klass;
        MonitorData* monitor;
        struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Fields fields;
    };

    struct SocketAsyncOperation__Enum__VTable {
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

    struct SocketAsyncOperation__Enum__StaticFields {
    };

    struct SocketAsyncOperation__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketAsyncOperation__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketAsyncOperation__Enum__VTable vtable;
    };

    struct SocketError__Enum__VTable {
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

    struct SocketError__Enum__StaticFields {
    };

    struct SocketError__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketError__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketError__Enum__VTable vtable;
    };

    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___VTable {
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

    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___StaticFields {
    };

    struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandler_1_System_Net_Sockets_SocketAsyncEventArgs___VTable vtable;
    };

    struct SocketAsyncEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData OnCompleted;
    };

    struct SocketAsyncEventArgs__StaticFields {
    };

    struct SocketAsyncEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SocketAsyncEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SocketAsyncEventArgs__VTable vtable;
    };

    struct Socket___VTable {
    };

    struct Socket___StaticFields {
    };

    struct Socket___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Socket___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Socket___VTable vtable;
    };

    struct ListenerPrefix___VTable {
    };

    struct ListenerPrefix___StaticFields {
    };

    struct ListenerPrefix___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerPrefix___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerPrefix___VTable vtable;
    };

    struct EndPointManager {
        struct EndPointManager__Class* klass;
        MonitorData* monitor;
    };

    struct EndPointManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EndPointManager__StaticFields {
        struct Hashtable* ip_to_endpoints;
    };

    struct EndPointManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EndPointManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EndPointManager__VTable vtable;
    };

    enum class TransportType__Enum : int32_t {
        Udp = 0x00000001,
        Connectionless = 0x00000001,
        Tcp = 0x00000002,
        ConnectionOriented = 0x00000002,
        All = 0x00000003,
    };

    struct TransportType__Enum__Boxed {
        struct TransportType__Enum__Class* klass;
        MonitorData* monitor;
        TransportType__Enum value;
    };

    struct __declspec(align(8)) EndpointPermission__Fields {
        struct String* hostname;
        int32_t port;
        TransportType__Enum transport;

        bool resolved;
        bool hasWildcard;
        struct IPAddress__Array* addresses;
    };

    struct EndpointPermission {
        struct EndpointPermission__Class* klass;
        MonitorData* monitor;
        struct EndpointPermission__Fields fields;
    };

    struct TransportType__Enum__VTable {
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

    struct TransportType__Enum__StaticFields {
    };

    struct TransportType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransportType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransportType__Enum__VTable vtable;
    };

    struct EndpointPermission__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EndpointPermission__StaticFields {
        struct Char__Array* dot_char;
    };

    struct EndpointPermission__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EndpointPermission__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EndpointPermission__VTable vtable;
    };

    struct __declspec(align(8)) FtpAsyncResult__Fields {
        struct FtpWebResponse* response;
        struct ManualResetEvent* waitHandle;
        struct Exception* exception;
        struct AsyncCallback* callback;
        struct Stream* stream;
        struct Object* state;
        bool completed;
        bool synch;
        struct Object* locker;
    };

    struct FtpAsyncResult {
        struct FtpAsyncResult__Class* klass;
        MonitorData* monitor;
        struct FtpAsyncResult__Fields fields;
    };

    struct FtpWebResponse__Fields {
        struct WebResponse__Fields _;
        struct Stream* stream;
        struct Uri* uri;
        FtpStatusCode__Enum statusCode;

        struct DateTime lastModified;
        struct String* bannerMessage;
        struct String* welcomeMessage;
        struct String* exitMessage;
        struct String* statusDescription;
        struct String* method;
        bool disposed;
        struct FtpWebRequest* request;
        int64_t contentLength;
    };

    struct FtpWebResponse {
        struct FtpWebResponse__Class* klass;
        MonitorData* monitor;
        struct FtpWebResponse__Fields fields;
    };

    enum class FtpWebRequest_RequestState__Enum : int32_t {
        Before = 0x00000000,
        Scheduled = 0x00000001,
        Connecting = 0x00000002,
        Authenticating = 0x00000003,
        OpeningData = 0x00000004,
        TransferInProgress = 0x00000005,
        Finished = 0x00000006,
        Aborted = 0x00000007,
        Error = 0x00000008,
    };

    struct FtpWebRequest_RequestState__Enum__Boxed {
        struct FtpWebRequest_RequestState__Enum__Class* klass;
        MonitorData* monitor;
        FtpWebRequest_RequestState__Enum value;
    };

    struct FtpWebRequest__Fields {
        struct WebRequest__Fields _;
        struct Uri* requestUri;
        struct String* file_name;
        struct ServicePoint* servicePoint;
        struct Stream* origDataStream;
        struct Stream* dataStream;
        struct Stream* controlStream;
        struct StreamReader* controlReader;
        struct NetworkCredential* credentials;
        struct IPHostEntry* hostEntry;
        struct IPEndPoint* localEndPoint;
        struct IPEndPoint* remoteEndPoint;
        struct IWebProxy* proxy;
        int32_t timeout;
        int32_t rwTimeout;
        int64_t offset;
        bool binary;
        bool enableSsl;
        bool usePassive;
        bool keepAlive;
        struct String* method;
        struct String* renameTo;
        struct Object* locker;
        FtpWebRequest_RequestState__Enum requestState;

        struct FtpAsyncResult* asyncResult;
        struct FtpWebResponse* ftpResponse;
        struct Stream* requestStream;
        struct String* initial_path;
        struct Encoding* dataEncoding;
    };

} // namespace app
