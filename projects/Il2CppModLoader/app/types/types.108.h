namespace app {
struct CompletionDelegate__StaticFields {
};

struct CompletionDelegate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompletionDelegate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompletionDelegate__VTable vtable;
};

struct WebClient_DownloadBitsState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WebClient_DownloadBitsState__StaticFields {
};

struct WebClient_DownloadBitsState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient_DownloadBitsState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClient_DownloadBitsState__VTable vtable;
};

struct __declspec(align(8)) WebClient_UploadBitsState__Fields {
    int32_t m_ChunkSize;
    int32_t m_BufferWritePosition;
    struct WebClient *WebClient;
    struct Stream *WriteStream;
    struct Byte__Array *InnerBuffer;
    struct Byte__Array *Header;
    struct Byte__Array *Footer;
    struct AsyncOperation *AsyncOp;
    struct WebRequest *Request;
    struct CompletionDelegate *UploadCompletionDelegate;
    struct CompletionDelegate *DownloadCompletionDelegate;
    struct Stream *ReadStream;
    struct WebClient_ProgressData *Progress;
};

struct WebClient_UploadBitsState {
    struct WebClient_UploadBitsState__Class *klass;
    MonitorData *monitor;
    struct WebClient_UploadBitsState__Fields fields;
};

struct WebClient_UploadBitsState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WebClient_UploadBitsState__StaticFields {
};

struct WebClient_UploadBitsState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient_UploadBitsState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClient_UploadBitsState__VTable vtable;
};

struct Task_1_System_String___Fields {
    struct Task__Fields _;
    struct String *m_result;
};

struct Task_1_System_String_ {
    struct Task_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_String___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_String___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_String_ {
    struct TaskFactory_1_System_String___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_String___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Fields fields;
};

struct TaskFactory_1_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_String___StaticFields {
};

struct TaskFactory_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_String___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8__VTable vtable;
};

struct Task_1_System_String___VTable {
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

struct Task_1_System_String___StaticFields {
    struct TaskFactory_1_System_String_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__8 *TaskWhenAnyCast;
};

struct Task_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_String___VTable vtable;
};

struct Task_1_System_Byte___Fields {
    struct Task__Fields _;
    struct Byte__Array *m_result;
};

struct Task_1_System_Byte_ {
    struct Task_1_System_Byte___Class *klass;
    MonitorData *monitor;
    struct Task_1_System_Byte___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_System_Byte___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_System_Byte_ {
    struct TaskFactory_1_System_Byte___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_System_Byte___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Fields fields;
};

struct TaskFactory_1_System_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_System_Byte___StaticFields {
};

struct TaskFactory_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_System_Byte___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9__VTable vtable;
};

struct Task_1_System_Byte___VTable {
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

struct Task_1_System_Byte___StaticFields {
    struct TaskFactory_1_System_Byte_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__9 *TaskWhenAnyCast;
};

struct Task_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_System_Byte___VTable vtable;
};

struct WebClient_WebClientWriteStream__Fields {
    struct Stream__Fields _;
    struct WebRequest *m_request;
    struct Stream *m_stream;
    struct WebClient *m_WebClient;
};

struct WebClient_WebClientWriteStream {
    struct WebClient_WebClientWriteStream__Class *klass;
    MonitorData *monitor;
    struct WebClient_WebClientWriteStream__Fields fields;
};

struct WebClient_WebClientWriteStream__VTable {
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

struct WebClient_WebClientWriteStream__StaticFields {
};

struct WebClient_WebClientWriteStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient_WebClientWriteStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClient_WebClientWriteStream__VTable vtable;
};

struct __declspec(align(8)) WebClient_c_DisplayClass219_0__Fields {
    struct WebClient *__4__this;
    struct TaskCompletionSource_1_System_String_ *tcs;
    struct DownloadStringCompletedEventHandler *handler;
};

struct WebClient_c_DisplayClass219_0 {
    struct WebClient_c_DisplayClass219_0__Class *klass;
    MonitorData *monitor;
    struct WebClient_c_DisplayClass219_0__Fields fields;
};

struct __declspec(align(8)) TaskCompletionSource_1_System_String___Fields {
    struct Task_1_System_String_ *m_task;
};

struct TaskCompletionSource_1_System_String_ {
    struct TaskCompletionSource_1_System_String___Class *klass;
    MonitorData *monitor;
    struct TaskCompletionSource_1_System_String___Fields fields;
};

struct TaskCompletionSource_1_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskCompletionSource_1_System_String___StaticFields {
};

struct TaskCompletionSource_1_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskCompletionSource_1_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskCompletionSource_1_System_String___VTable vtable;
};

struct WebClient_c_DisplayClass219_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WebClient_c_DisplayClass219_0__StaticFields {
};

struct WebClient_c_DisplayClass219_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WebClient_c_DisplayClass219_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WebClient_c_DisplayClass219_0__VTable vtable;
};

struct WebClient_c {
    struct WebClient_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_DownloadStringCompletedEventArgs_String_ {
    struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream_ {
    struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream_ {
    struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_UploadStringCompletedEventArgs_String___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_UploadStringCompletedEventArgs_String_ {
    struct Func_2_System_Net_UploadStringCompletedEventArgs_String___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_UploadStringCompletedEventArgs_String___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte_ {
    struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___Fields fields;
};

struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object_ {
    struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___Fields fields;
};

struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_UploadDataCompletedEventArgs_Byte___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_UploadDataCompletedEventArgs_Byte_ {
    struct Func_2_System_Net_UploadDataCompletedEventArgs_Byte___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_UploadDataCompletedEventArgs_Byte___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_UploadDataCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_UploadFileCompletedEventArgs_Byte___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_UploadFileCompletedEventArgs_Byte_ {
    struct Func_2_System_Net_UploadFileCompletedEventArgs_Byte___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_UploadFileCompletedEventArgs_Byte___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_UploadFileCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_UploadValuesCompletedEventArgs_Byte___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Net_UploadValuesCompletedEventArgs_Byte_ {
    struct Func_2_System_Net_UploadValuesCompletedEventArgs_Byte___Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Net_UploadValuesCompletedEventArgs_Byte___Fields fields;
};

struct Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler_ {
    struct Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler___Class *klass;
    MonitorData *monitor;
    struct Action_2_System_Net_WebClient_System_Net_UploadValuesCompletedEventHandler___Fields fields;
};

struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___VTable {
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

struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___StaticFields {
};

struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Net_DownloadStringCompletedEventArgs_String___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_Net_DownloadStringCompletedEventHandler___VTable vtable;
};

struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___VTable {
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

struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___StaticFields {
};

struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Net_OpenReadCompletedEventArgs_System_IO_Stream___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_Net_OpenReadCompletedEventHandler___VTable vtable;
};

struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___VTable {
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

struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___StaticFields {
};

struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Net_OpenWriteCompletedEventArgs_System_IO_Stream___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_Net_OpenWriteCompletedEventHandler___VTable vtable;
};

struct Func_2_System_Net_UploadStringCompletedEventArgs_String___VTable {
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

struct Func_2_System_Net_UploadStringCompletedEventArgs_String___StaticFields {
};

struct Func_2_System_Net_UploadStringCompletedEventArgs_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Net_UploadStringCompletedEventArgs_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Net_UploadStringCompletedEventArgs_String___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_Net_UploadStringCompletedEventHandler___VTable vtable;
};

struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___VTable {
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

struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___StaticFields {
};

struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Net_DownloadDataCompletedEventArgs_Byte___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_Net_DownloadDataCompletedEventHandler___VTable vtable;
};

struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___VTable {
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

struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___StaticFields {
};

struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_ComponentModel_AsyncCompletedEventArgs_Object___VTable vtable;
};

struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___VTable {
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

struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___StaticFields {
};

struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_2_System_Net_WebClient_System_ComponentModel_AsyncCompletedEventHandler___VTable vtable;
};

struct Func_2_System_Net_UploadDataCompletedEventArgs_Byte___VTable {
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
