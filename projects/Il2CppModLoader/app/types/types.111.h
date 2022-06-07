namespace app {
struct FtpWebRequest {
    struct FtpWebRequest__Class *klass;
    MonitorData *monitor;
    struct FtpWebRequest__Fields fields;
};

struct FtpWebRequest_RequestState__Enum__VTable {
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

struct FtpWebRequest_RequestState__Enum__StaticFields {
};

struct FtpWebRequest_RequestState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpWebRequest_RequestState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpWebRequest_RequestState__Enum__VTable vtable;
};

struct FtpWebRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    VirtualInvokeData get_CreatorInstance;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_CachePolicy;
    VirtualInvokeData set_CachePolicy;
    VirtualInvokeData get_Method;
    VirtualInvokeData set_Method;
    VirtualInvokeData get_RequestUri;
    VirtualInvokeData get_ConnectionGroupName;
    VirtualInvokeData set_ConnectionGroupName;
    VirtualInvokeData get_Headers;
    VirtualInvokeData set_Headers;
    VirtualInvokeData get_ContentLength;
    VirtualInvokeData set_ContentLength;
    VirtualInvokeData get_ContentType;
    VirtualInvokeData set_ContentType;
    VirtualInvokeData get_Credentials;
    VirtualInvokeData set_Credentials;
    VirtualInvokeData get_UseDefaultCredentials;
    VirtualInvokeData set_UseDefaultCredentials;
    VirtualInvokeData get_Proxy;
    VirtualInvokeData set_Proxy;
    VirtualInvokeData get_PreAuthenticate;
    VirtualInvokeData set_PreAuthenticate;
    VirtualInvokeData get_Timeout;
    VirtualInvokeData set_Timeout;
    VirtualInvokeData GetRequestStream;
    VirtualInvokeData GetResponse;
    VirtualInvokeData BeginGetResponse;
    VirtualInvokeData EndGetResponse;
    VirtualInvokeData BeginGetRequestStream;
    VirtualInvokeData EndGetRequestStream;
    VirtualInvokeData GetRequestStreamAsync;
    VirtualInvokeData GetResponseAsync;
    VirtualInvokeData Abort;
    VirtualInvokeData RequestCallback;
};

struct FtpWebRequest__StaticFields {
    struct String__Array *supportedCommands;
};

struct FtpWebRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpWebRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpWebRequest__VTable vtable;
};

struct FtpWebResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    VirtualInvokeData Dispose;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData Close;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_IsFromCache;
    VirtualInvokeData get_IsCacheFresh;
    VirtualInvokeData get_IsMutuallyAuthenticated;
    VirtualInvokeData get_ContentLength;
    VirtualInvokeData set_ContentLength;
    VirtualInvokeData get_ContentType;
    VirtualInvokeData set_ContentType;
    VirtualInvokeData GetResponseStream;
    VirtualInvokeData get_ResponseUri;
    VirtualInvokeData get_Headers;
    VirtualInvokeData get_SupportsHeaders;
};

struct FtpWebResponse__StaticFields {
};

struct FtpWebResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpWebResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpWebResponse__VTable vtable;
};

struct FtpAsyncResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsCompleted;
    VirtualInvokeData get_AsyncWaitHandle;
    VirtualInvokeData get_AsyncState;
    VirtualInvokeData get_CompletedSynchronously;
};

struct FtpAsyncResult__StaticFields {
};

struct FtpAsyncResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpAsyncResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpAsyncResult__VTable vtable;
};

struct FtpDataStream__Fields {
    struct Stream__Fields _;
    struct FtpWebRequest *request;
    struct Stream *networkStream;
    bool disposed;
    bool isRead;
    int32_t totalRead;
};

struct FtpDataStream {
    struct FtpDataStream__Class *klass;
    MonitorData *monitor;
    struct FtpDataStream__Fields fields;
};

struct FtpDataStream__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData System_IDisposable_Dispose;
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
    VirtualInvokeData Dispose;
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

struct FtpDataStream__StaticFields {
};

struct FtpDataStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpDataStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpDataStream__VTable vtable;
};

struct FtpDataStream_WriteDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct FtpDataStream_WriteDelegate {
    struct FtpDataStream_WriteDelegate__Class *klass;
    MonitorData *monitor;
    struct FtpDataStream_WriteDelegate__Fields fields;
};

struct FtpDataStream_WriteDelegate__VTable {
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

struct FtpDataStream_WriteDelegate__StaticFields {
};

struct FtpDataStream_WriteDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpDataStream_WriteDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpDataStream_WriteDelegate__VTable vtable;
};

struct FtpDataStream_ReadDelegate__Fields {
    struct MulticastDelegate__Fields _;
};

struct FtpDataStream_ReadDelegate {
    struct FtpDataStream_ReadDelegate__Class *klass;
    MonitorData *monitor;
    struct FtpDataStream_ReadDelegate__Fields fields;
};

struct FtpDataStream_ReadDelegate__VTable {
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

struct FtpDataStream_ReadDelegate__StaticFields {
};

struct FtpDataStream_ReadDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpDataStream_ReadDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpDataStream_ReadDelegate__VTable vtable;
};

struct FtpRequestCreator {
    struct FtpRequestCreator__Class *klass;
    MonitorData *monitor;
};

struct FtpRequestCreator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
};

struct FtpRequestCreator__StaticFields {
};

struct FtpRequestCreator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpRequestCreator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpRequestCreator__VTable vtable;
};

struct __declspec(align(8)) FtpStatus__Fields {
    FtpStatusCode__Enum statusCode;
    
    struct String *statusDescription;
};

struct FtpStatus {
    struct FtpStatus__Class *klass;
    MonitorData *monitor;
    struct FtpStatus__Fields fields;
};

struct FtpStatus__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FtpStatus__StaticFields {
};

struct FtpStatus__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FtpStatus__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FtpStatus__VTable vtable;
};

struct Stream___VTable {
};

struct Stream___StaticFields {
};

struct Stream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stream___VTable vtable;
};

struct HttpListenerTimeoutManager {
    struct HttpListenerTimeoutManager__Class *klass;
    MonitorData *monitor;
};

struct HttpListenerTimeoutManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpListenerTimeoutManager__StaticFields {
};

struct HttpListenerTimeoutManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerTimeoutManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerTimeoutManager__VTable vtable;
};

struct Task_1_System_Net_HttpListenerContext___Fields {
    struct Task__Fields _;
    struct HttpListenerContext *m_result;
};

struct Task_1_System_Net_HttpListenerContext_ {
    struct Task_1_System_Net_HttpListenerContext___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Net_HttpListenerContext___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Net_HttpListenerContext___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Net_HttpListenerContext_ {
    struct TaskFactory_1_System_Net_HttpListenerContext___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Net_HttpListenerContext___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__Fields fields;
};

struct TaskFactory_1_System_Net_HttpListenerContext___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_Net_HttpListenerContext___StaticFields {
};

struct TaskFactory_1_System_Net_HttpListenerContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_Net_HttpListenerContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_Net_HttpListenerContext___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13__VTable vtable;
};

struct Task_1_System_Net_HttpListenerContext___VTable {
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

struct Task_1_System_Net_HttpListenerContext___StaticFields {
    struct TaskFactory_1_System_Net_HttpListenerContext_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__13 *TaskWhenAnyCast;
};

struct Task_1_System_Net_HttpListenerContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_Net_HttpListenerContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_Net_HttpListenerContext___VTable vtable;
};

struct HttpListenerBasicIdentity__Fields {
    struct GenericIdentity__Fields _;
    struct String *password;
};

struct HttpListenerBasicIdentity {
    struct HttpListenerBasicIdentity__Class *klass;
    MonitorData *monitor;
    struct HttpListenerBasicIdentity__Fields fields;
};

struct HttpListenerBasicIdentity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AuthenticationType;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_AuthenticationType_1;
    VirtualInvokeData get_Claims;
    VirtualInvokeData get_Name_1;
    VirtualInvokeData Clone;
    VirtualInvokeData AddClaim;
    VirtualInvokeData FindFirst;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_Password;
};

struct HttpListenerBasicIdentity__StaticFields {
};

struct HttpListenerBasicIdentity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerBasicIdentity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerBasicIdentity__VTable vtable;
};

struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___Fields {
    struct Task__Fields _;
    struct HttpListenerWebSocketContext *m_result;
};

struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext_ {
    struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___Fields fields;
};

struct WebSocketContext {
    struct WebSocketContext__Class *klass;
    MonitorData *monitor;
};

struct HttpListenerWebSocketContext {
    struct HttpListenerWebSocketContext__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext_ {
    struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__Fields fields;
};

struct WebSocketContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WebSocketContext__StaticFields {
};

struct WebSocketContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebSocketContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebSocketContext__VTable vtable;
};

struct HttpListenerWebSocketContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpListenerWebSocketContext__StaticFields {
};

struct HttpListenerWebSocketContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerWebSocketContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerWebSocketContext__VTable vtable;
};

struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___StaticFields {
};

struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14__VTable vtable;
};

struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___VTable {
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

struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___StaticFields {
    struct TaskFactory_1_System_Net_WebSockets_HttpListenerWebSocketContext_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__14 *TaskWhenAnyCast;
};

struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_Net_WebSockets_HttpListenerWebSocketContext___VTable vtable;
};

struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Fields {
    struct Task__Fields _;
    struct X509Certificate2 *m_result;
};

struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2_ {
    struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2_ {
    struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__Fields fields;
};

struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___StaticFields {
};

struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15__VTable vtable;
};

struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___VTable {
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

struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___StaticFields {
    struct TaskFactory_1_System_Security_Cryptography_X509Certificates_X509Certificate2_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__15 *TaskWhenAnyCast;
};

struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_Security_Cryptography_X509Certificates_X509Certificate2___VTable vtable;
};

struct HttpListenerRequest_Context {
    struct HttpListenerRequest_Context__Class *klass;
    MonitorData *monitor;
};

struct HttpListenerRequest_Context__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetChannelBinding;
    VirtualInvokeData GetTlsTokenBindings;
};

struct HttpListenerRequest_Context__StaticFields {
};

struct HttpListenerRequest_Context__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpListenerRequest_Context__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpListenerRequest_Context__VTable vtable;
};

struct HttpRequestCreator {
    struct HttpRequestCreator__Class *klass;
    MonitorData *monitor;
};

struct HttpRequestCreator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Create;
};

struct HttpRequestCreator__StaticFields {
};

struct HttpRequestCreator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpRequestCreator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpRequestCreator__VTable vtable;
};

struct TransportContext___VTable {
};

struct TransportContext___StaticFields {
};

struct TransportContext___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransportContext___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransportContext___VTable vtable;
};

struct __declspec(align(8)) HttpWebRequest_c_DisplayClass238_0__Fields {
    struct WebAsyncResult *aread;
    struct HttpWebRequest *__4__this;
};

struct HttpWebRequest_c_DisplayClass238_0 {
    struct HttpWebRequest_c_DisplayClass238_0__Class *klass;
    MonitorData *monitor;
    struct HttpWebRequest_c_DisplayClass238_0__Fields fields;
};

struct HttpWebRequest_c_DisplayClass238_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HttpWebRequest_c_DisplayClass238_0__StaticFields {
};

struct HttpWebRequest_c_DisplayClass238_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HttpWebRequest_c_DisplayClass238_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HttpWebRequest_c_DisplayClass238_0__VTable vtable;
};

struct IPv6AddressFormatter {
    struct UInt16__Array *address;
    int64_t scopeId;
};

struct IPv6AddressFormatter__Boxed {
    struct IPv6AddressFormatter__Class *klass;
    MonitorData *monitor;
    struct IPv6AddressFormatter fields;
};

struct IPv6AddressFormatter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct IPv6AddressFormatter__StaticFields {
};

struct IPv6AddressFormatter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IPv6AddressFormatter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IPv6AddressFormatter__VTable vtable;
};

struct __declspec(align(8)) ListenerAsyncResult__Fields {
    struct ManualResetEvent *handle;
    bool synch;
    bool completed;
    struct AsyncCallback *cb;
    struct Object *state;
    struct Exception *exception;
    struct HttpListenerContext *context;
    struct Object *locker;
    struct ListenerAsyncResult *forward;
    bool EndCalled;
    bool InGet;
};

struct ListenerAsyncResult {
    struct ListenerAsyncResult__Class *klass;
    MonitorData *monitor;
    struct ListenerAsyncResult__Fields fields;
};

}
