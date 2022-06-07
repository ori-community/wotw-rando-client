namespace app {
struct Uri_UriInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Uri_UriInfo__StaticFields {
};

struct Uri_UriInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Uri_UriInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Uri_UriInfo__VTable vtable;
};

struct UriIdnScope__Enum__VTable {
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

struct UriIdnScope__Enum__StaticFields {
};

struct UriIdnScope__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UriIdnScope__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UriIdnScope__Enum__VTable vtable;
};

struct UriKind__Enum__VTable {
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

struct UriKind__Enum__StaticFields {
};

struct UriKind__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UriKind__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UriKind__Enum__VTable vtable;
};

struct Uri__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};

struct Uri__StaticFields {
    struct String *UriSchemeFile;
    struct String *UriSchemeFtp;
    struct String *UriSchemeGopher;
    struct String *UriSchemeHttp;
    struct String *UriSchemeHttps;
    struct String *UriSchemeWs;
    struct String *UriSchemeWss;
    struct String *UriSchemeMailto;
    struct String *UriSchemeNews;
    struct String *UriSchemeNntp;
    struct String *UriSchemeNetTcp;
    struct String *UriSchemeNetPipe;
    struct String *SchemeDelimiter;
    bool s_ConfigInitialized;
    bool s_ConfigInitializing;
    UriIdnScope__Enum s_IdnScope;
    
    bool s_IriParsing;
    bool useDotNetRelativeOrAbsolute;
    bool IsWindowsFileSystem;
    struct Object *s_initLock;
    struct Char__Array *HexLowerChars;
    struct Char__Array *_WSchars;
};

struct Uri__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Uri__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Uri__VTable vtable;
};

struct IWebProxy {
    struct IWebProxy__Class *klass;
    MonitorData *monitor;
};

struct IWebProxy__VTable {
    VirtualInvokeData GetProxy;
    VirtualInvokeData IsBypassed;
    VirtualInvokeData get_Credentials;
    VirtualInvokeData set_Credentials;
};

struct IWebProxy__StaticFields {
};

struct IWebProxy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IWebProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IWebProxy__VTable vtable;
};

struct __declspec(align(8)) CFNetwork_GetProxyData__Fields {
    void *script;
    void *targetUri;
    void *error;
    void *result;
    struct ManualResetEvent *evt;
};

struct CFNetwork_GetProxyData {
    struct CFNetwork_GetProxyData__Class *klass;
    MonitorData *monitor;
    struct CFNetwork_GetProxyData__Fields fields;
};

struct CFNetwork_GetProxyData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct CFNetwork_GetProxyData__StaticFields {
};

struct CFNetwork_GetProxyData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CFNetwork_GetProxyData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CFNetwork_GetProxyData__VTable vtable;
};

struct __declspec(align(8)) CFNetwork_CFWebProxy__Fields {
    struct ICredentials *credentials;
    bool userSpecified;
};

struct CFNetwork_CFWebProxy {
    struct CFNetwork_CFWebProxy__Class *klass;
    MonitorData *monitor;
    struct CFNetwork_CFWebProxy__Fields fields;
};

struct ICredentials {
    struct ICredentials__Class *klass;
    MonitorData *monitor;
};

struct ICredentials__VTable {
    VirtualInvokeData GetCredential;
};

struct ICredentials__StaticFields {
};

struct ICredentials__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICredentials__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICredentials__VTable vtable;
};

struct CFNetwork_CFWebProxy__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetProxy;
    VirtualInvokeData IsBypassed;
    VirtualInvokeData get_Credentials;
    VirtualInvokeData set_Credentials;
};

struct CFNetwork_CFWebProxy__StaticFields {
};

struct CFNetwork_CFWebProxy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CFNetwork_CFWebProxy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CFNetwork_CFWebProxy__VTable vtable;
};

struct __declspec(align(8)) NetworkCredential__Fields {
    struct String *m_domain;
    struct String *m_userName;
    struct SecureString *m_password;
};

struct NetworkCredential {
    struct NetworkCredential__Class *klass;
    MonitorData *monitor;
    struct NetworkCredential__Fields fields;
};

struct NetworkCredential__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetCredential;
    VirtualInvokeData GetCredential_1;
};

struct NetworkCredential__StaticFields {
};

struct NetworkCredential__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkCredential__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkCredential__VTable vtable;
};

struct NetworkCredential___VTable {
};

struct NetworkCredential___StaticFields {
};

struct NetworkCredential___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkCredential___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkCredential___VTable vtable;
};

struct __declspec(align(8)) CFNetwork_c_DisplayClass13_0__Fields {
    struct CFProxy__Array *proxies;
    struct CFRunLoop *runLoop;
};

struct CFNetwork_c_DisplayClass13_0 {
    struct CFNetwork_c_DisplayClass13_0__Class *klass;
    MonitorData *monitor;
    struct CFNetwork_c_DisplayClass13_0__Fields fields;
};

struct CFNetwork_c_DisplayClass13_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CFNetwork_c_DisplayClass13_0__StaticFields {
};

struct CFNetwork_c_DisplayClass13_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CFNetwork_c_DisplayClass13_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CFNetwork_c_DisplayClass13_0__VTable vtable;
};

struct __declspec(align(8)) AsyncProtocolResult__Fields {
    int32_t _UserResult_k__BackingField;
    struct ExceptionDispatchInfo *_Error_k__BackingField;
};

struct AsyncProtocolResult {
    struct AsyncProtocolResult__Class *klass;
    MonitorData *monitor;
    struct AsyncProtocolResult__Fields fields;
};

struct AsyncProtocolResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncProtocolResult__StaticFields {
};

struct AsyncProtocolResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncProtocolResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncProtocolResult__VTable vtable;
};

struct Task_1_Mono_Net_Security_AsyncProtocolResult___Fields {
    struct Task__Fields _;
    struct AsyncProtocolResult *m_result;
};

struct Task_1_Mono_Net_Security_AsyncProtocolResult_ {
    struct Task_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
    MonitorData *monitor;
    struct Task_1_Mono_Net_Security_AsyncProtocolResult___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult_ {
    struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Fields fields;
};

struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
};

struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4__VTable vtable;
};

struct Task_1_Mono_Net_Security_AsyncProtocolResult___VTable {
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

struct Task_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
    struct TaskFactory_1_Mono_Net_Security_AsyncProtocolResult_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__4 *TaskWhenAnyCast;
};

struct Task_1_Mono_Net_Security_AsyncProtocolResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_Mono_Net_Security_AsyncProtocolResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_Mono_Net_Security_AsyncProtocolResult___VTable vtable;
};

struct Task_1_System_Nullable_1___Fields {
    struct Task__Fields _;
    struct Nullable_1_Int32_ m_result;
};

struct Task_1_System_Nullable_1_ {
    struct Task_1_System_Nullable_1___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Nullable_1___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Nullable_1___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Nullable_1_ {
    struct TaskFactory_1_System_Nullable_1___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Nullable_1___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Fields fields;
};

struct TaskFactory_1_System_Nullable_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_Nullable_1___StaticFields {
};

struct TaskFactory_1_System_Nullable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_Nullable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_Nullable_1___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5__VTable vtable;
};

struct Task_1_System_Nullable_1___VTable {
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

struct Task_1_System_Nullable_1___StaticFields {
    struct TaskFactory_1_System_Nullable_1_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__5 *TaskWhenAnyCast;
};

struct Task_1_System_Nullable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_Nullable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_Nullable_1___VTable vtable;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_Mono_Net_Security_AsyncProtocolResult_ *m_task;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Boxed {
    struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ fields;
};

struct AsyncProtocolRequest_StartOperation_d_23 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult_ __t__builder;
    struct AsyncProtocolRequest *__4__this;
    struct CancellationToken cancellationToken;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;
};

struct AsyncProtocolRequest_StartOperation_d_23__Boxed {
    struct AsyncProtocolRequest_StartOperation_d_23__Class *klass;
    MonitorData *monitor;
    struct AsyncProtocolRequest_StartOperation_d_23 fields;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___StaticFields {
    struct Task_1_Mono_Net_Security_AsyncProtocolResult_ *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_Mono_Net_Security_AsyncProtocolResult___VTable vtable;
};

struct AsyncProtocolRequest_StartOperation_d_23__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct AsyncProtocolRequest_StartOperation_d_23__StaticFields {
};

struct AsyncProtocolRequest_StartOperation_d_23__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncProtocolRequest_StartOperation_d_23__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncProtocolRequest_StartOperation_d_23__VTable vtable;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_ {
    struct Task_1_System_Nullable_1_ *m_task;
    bool m_continueOnCapturedContext;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Boxed {
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Class *klass;
    MonitorData *monitor;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_ fields;
};

struct AsyncProtocolRequest_ProcessOperation_d_24 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct CancellationToken cancellationToken;
    struct AsyncProtocolRequest *__4__this;
    AsyncOperationStatus__Enum _status_5__1;
    
    AsyncOperationStatus__Enum _newStatus_5__2;
    
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1_ __u__1;
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;
};

struct AsyncProtocolRequest_ProcessOperation_d_24__Boxed {
    struct AsyncProtocolRequest_ProcessOperation_d_24__Class *klass;
    MonitorData *monitor;
    struct AsyncProtocolRequest_ProcessOperation_d_24 fields;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___StaticFields {
};

struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Nullable_1___VTable vtable;
};

struct AsyncProtocolRequest_ProcessOperation_d_24__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct AsyncProtocolRequest_ProcessOperation_d_24__StaticFields {
};

struct AsyncProtocolRequest_ProcessOperation_d_24__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncProtocolRequest_ProcessOperation_d_24__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncProtocolRequest_ProcessOperation_d_24__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_System_Nullable_1_ {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_System_Nullable_1_ *m_task;
};

struct AsyncTaskMethodBuilder_1_System_Nullable_1___Boxed {
    struct AsyncTaskMethodBuilder_1_System_Nullable_1___Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_System_Nullable_1_ fields;
};

struct AsyncProtocolRequest_InnerRead_d_25 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_Nullable_1_ __t__builder;
    struct AsyncProtocolRequest *__4__this;
    struct CancellationToken cancellationToken;
    int32_t _requestedSize_5__1;
    struct Nullable_1_Int32_ _totalRead_5__2;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Int32_ __u__1;
};

struct AsyncProtocolRequest_InnerRead_d_25__Boxed {
    struct AsyncProtocolRequest_InnerRead_d_25__Class *klass;
    MonitorData *monitor;
    struct AsyncProtocolRequest_InnerRead_d_25 fields;
};

struct AsyncTaskMethodBuilder_1_System_Nullable_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_System_Nullable_1___StaticFields {
    struct Task_1_System_Nullable_1_ *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_System_Nullable_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_System_Nullable_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_System_Nullable_1___VTable vtable;
};

struct AsyncProtocolRequest_InnerRead_d_25__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct AsyncProtocolRequest_InnerRead_d_25__StaticFields {
};

struct AsyncProtocolRequest_InnerRead_d_25__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncProtocolRequest_InnerRead_d_25__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncProtocolRequest_InnerRead_d_25__VTable vtable;
};

struct AsyncReadOrWriteRequest__Fields {
    struct AsyncProtocolRequest__Fields _;
    struct BufferOffsetSize *_UserBuffer_k__BackingField;
    int32_t _CurrentSize_k__BackingField;
};

struct AsyncReadOrWriteRequest {
    struct AsyncReadOrWriteRequest__Class *klass;
    MonitorData *monitor;
    struct AsyncReadOrWriteRequest__Fields fields;
};

struct AsyncReadRequest__Fields {
    struct AsyncReadOrWriteRequest__Fields _;
};

struct AsyncReadRequest {
    struct AsyncReadRequest__Class *klass;
    MonitorData *monitor;
    struct AsyncReadRequest__Fields fields;
};

struct AsyncReadRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Run;
};

struct AsyncReadRequest__StaticFields {
};

struct AsyncReadRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncReadRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncReadRequest__VTable vtable;
};

struct AsyncReadOrWriteRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct AsyncReadOrWriteRequest__StaticFields {
};

struct AsyncReadOrWriteRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncReadOrWriteRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncReadOrWriteRequest__VTable vtable;
};

struct AsyncWriteRequest__Fields {
    struct AsyncReadOrWriteRequest__Fields _;
};

struct AsyncWriteRequest {
    struct AsyncWriteRequest__Class *klass;
    MonitorData *monitor;
    struct AsyncWriteRequest__Fields fields;
};

struct AsyncWriteRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Run;
};

struct AsyncWriteRequest__StaticFields {
};

struct AsyncWriteRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncWriteRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncWriteRequest__VTable vtable;
};

struct ServerCertValidationCallbackWrapper__Fields {
    struct MulticastDelegate__Fields _;
};

struct ServerCertValidationCallbackWrapper {
    struct ServerCertValidationCallbackWrapper__Class *klass;
    MonitorData *monitor;
    struct ServerCertValidationCallbackWrapper__Fields fields;
};

struct __declspec(align(8)) ServerCertValidationCallback__Fields {
    struct RemoteCertificateValidationCallback *m_ValidationCallback;
    struct ExecutionContext *m_Context;
};

struct ServerCertValidationCallback {
    struct ServerCertValidationCallback__Class *klass;
    MonitorData *monitor;
    struct ServerCertValidationCallback__Fields fields;
};

struct RemoteCertificateValidationCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct RemoteCertificateValidationCallback {
    struct RemoteCertificateValidationCallback__Class *klass;
    MonitorData *monitor;
    struct RemoteCertificateValidationCallback__Fields fields;
};

enum class SslPolicyErrors__Enum : int32_t {
    None = 0x00000000,
    RemoteCertificateNotAvailable = 0x00000001,
    RemoteCertificateNameMismatch = 0x00000002,
    RemoteCertificateChainErrors = 0x00000004,
};

struct SslPolicyErrors__Enum__Boxed {
    struct SslPolicyErrors__Enum__Class *klass;
    MonitorData *monitor;
    SslPolicyErrors__Enum value;
    
};

struct SslPolicyErrors__Enum__VTable {
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

struct SslPolicyErrors__Enum__StaticFields {
};

struct SslPolicyErrors__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SslPolicyErrors__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SslPolicyErrors__Enum__VTable vtable;
};

struct RemoteCertificateValidationCallback__VTable {
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

}
