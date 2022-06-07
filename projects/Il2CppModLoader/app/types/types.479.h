namespace app {
struct Action_1_PlayFab_ServerModels_WriteEventResponse___StaticFields {
};

struct Action_1_PlayFab_ServerModels_WriteEventResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ServerModels_WriteEventResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ServerModels_WriteEventResponse___VTable vtable;
};

struct WriteServerPlayerEventRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Dictionary_2_System_String_System_Object_ *Body;
    struct String *EventName;
    struct String *PlayFabId;
    struct Nullable_1_DateTime_ Timestamp;
};

struct WriteServerPlayerEventRequest {
    struct WriteServerPlayerEventRequest__Class *klass;
    MonitorData *monitor;
    struct WriteServerPlayerEventRequest__Fields fields;
};

struct WriteServerPlayerEventRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WriteServerPlayerEventRequest__StaticFields {
};

struct WriteServerPlayerEventRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteServerPlayerEventRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteServerPlayerEventRequest__VTable vtable;
};

struct WriteTitleEventRequest_1__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Dictionary_2_System_String_System_Object_ *Body;
    struct String *EventName;
    struct Nullable_1_DateTime_ Timestamp;
};

struct WriteTitleEventRequest_1 {
    struct WriteTitleEventRequest_1__Class *klass;
    MonitorData *monitor;
    struct WriteTitleEventRequest_1__Fields fields;
};

struct WriteTitleEventRequest_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WriteTitleEventRequest_1__StaticFields {
};

struct WriteTitleEventRequest_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WriteTitleEventRequest_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WriteTitleEventRequest_1__VTable vtable;
};

struct __declspec(align(8)) PlayFabServerInstanceAPI__Fields {
    struct PlayFabApiSettings *ApiSettings;
    struct PlayFabAuthenticationContext *authenticationContext;
};

struct PlayFabServerInstanceAPI {
    struct PlayFabServerInstanceAPI__Class *klass;
    MonitorData *monitor;
    struct PlayFabServerInstanceAPI__Fields fields;
};

struct PlayFabServerInstanceAPI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabServerInstanceAPI__StaticFields {
};

struct PlayFabServerInstanceAPI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabServerInstanceAPI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabServerInstanceAPI__VTable vtable;
};

enum class PlayFabExceptionCode__Enum : int32_t {
    DeveloperKeyNotSet = 0x00000000,
    EntityTokenNotSet = 0x00000001,
    NotLoggedIn = 0x00000002,
    TitleNotSet = 0x00000003,
};

struct PlayFabExceptionCode__Enum__Boxed {
    struct PlayFabExceptionCode__Enum__Class *klass;
    MonitorData *monitor;
    PlayFabExceptionCode__Enum value;
    
};

struct PlayFabException__Fields {
    struct Exception__Fields _;
    PlayFabExceptionCode__Enum Code;
    
};

struct PlayFabException {
    struct PlayFabException__Class *klass;
    MonitorData *monitor;
    struct PlayFabException__Fields fields;
};

struct PlayFabExceptionCode__Enum__VTable {
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

struct PlayFabExceptionCode__Enum__StaticFields {
};

struct PlayFabExceptionCode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabExceptionCode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabExceptionCode__Enum__VTable vtable;
};

struct PlayFabException__VTable {
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

struct PlayFabException__StaticFields {
};

struct PlayFabException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabException__VTable vtable;
};

struct __declspec(align(8)) OneDSEventsAPI__Fields {
    struct String *oneDSProjectIdIkey;
    struct String *oneDSIngestionKey;
    struct String *oneDSJwtToken;
    struct String *oneDSHeaderJwtTicketKey;
    struct String *oneDSHeaderJwtTicketPrefix;
    bool _IsOneDSAuthenticated_k__BackingField;
};

struct OneDSEventsAPI {
    struct OneDSEventsAPI__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI__Fields fields;
};

struct OneDSEventsAPI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDSEventsAPI__StaticFields {
};

struct OneDSEventsAPI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI__VTable vtable;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1___Fields {
    struct Task__Fields _;
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_ *m_result;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1_ {
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
    MonitorData *monitor;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
};

struct __declspec(align(8)) PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___Fields {
    struct WriteEventsResponse *Result;
    struct Object *CustomData;
    struct PlayFabError *Error;
};

struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_ {
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___Class *klass;
    MonitorData *monitor;
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1_ {
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__Fields fields;
};

struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___StaticFields {
};

struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse___VTable vtable;
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17__VTable vtable;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
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

struct Task_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1_ *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__17 *TaskWhenAnyCast;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__Fields {
    struct Task__Fields _;
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_ *m_result;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1 {
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__Class *klass;
    MonitorData *monitor;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__Fields fields;
};

struct __declspec(align(8)) PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Fields {
    struct TelemetryIngestionConfigResponse *Result;
    struct Object *CustomData;
    struct PlayFabError *Error;
};

struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_ {
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Class *klass;
    MonitorData *monitor;
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Fields fields;
};

struct TelemetryIngestionConfigResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *IngestionKey;
    struct String *TelemetryJwtHeaderKey;
    struct String *TelemetryJwtHeaderPrefix;
    struct String *TelemetryJwtToken;
    struct String *TenantId;
};

struct TelemetryIngestionConfigResponse {
    struct TelemetryIngestionConfigResponse__Class *klass;
    MonitorData *monitor;
    struct TelemetryIngestionConfigResponse__Fields fields;
};

struct __declspec(align(8)) TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__Fields {
    struct CancellationToken m_defaultCancellationToken;
    struct TaskScheduler *m_defaultScheduler;
    TaskCreationOptions__Enum m_defaultCreationOptions;
    
    TaskContinuationOptions__Enum m_defaultContinuationOptions;
    
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1 {
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__Class *klass;
    MonitorData *monitor;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__Fields fields;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18 {
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__Class *klass;
    MonitorData *monitor;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__Fields fields;
};

struct TelemetryIngestionConfigRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct TelemetryIngestionConfigRequest {
    struct TelemetryIngestionConfigRequest__Class *klass;
    MonitorData *monitor;
    struct TelemetryIngestionConfigRequest__Fields fields;
};

struct TelemetryIngestionConfigResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TelemetryIngestionConfigResponse__StaticFields {
};

struct TelemetryIngestionConfigResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryIngestionConfigResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryIngestionConfigResponse__VTable vtable;
};

struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___StaticFields {
};

struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___VTable vtable;
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields {
};

struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable vtable;
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__VTable {
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

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__StaticFields {
};

struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18__VTable vtable;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable {
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

struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields {
    struct TaskFactory_1_PlayFab_SharedModels_PlayFabResult_1__1 *s_Factory;
    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__18 *TaskWhenAnyCast;
};

struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable vtable;
};

struct TelemetryIngestionConfigRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TelemetryIngestionConfigRequest__StaticFields {
};

struct TelemetryIngestionConfigRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TelemetryIngestionConfigRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TelemetryIngestionConfigRequest__VTable vtable;
};

struct __declspec(align(8)) OneDSEventsAPI_c_DisplayClass11_0__Fields {
    struct PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_ *result;
    struct Object *customData;
};

struct OneDSEventsAPI_c_DisplayClass11_0 {
    struct OneDSEventsAPI_c_DisplayClass11_0__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_c_DisplayClass11_0__Fields fields;
};

struct OneDSEventsAPI_c_DisplayClass11_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDSEventsAPI_c_DisplayClass11_0__StaticFields {
};

struct OneDSEventsAPI_c_DisplayClass11_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_c_DisplayClass11_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_c_DisplayClass11_0__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_ {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1_ *m_task;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Boxed {
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_ fields;
};

struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1_ __t__builder;
    struct Object *customData;
    struct WriteEventsRequest *request;
    struct OneDSEventsAPI *__4__this;
    struct Dictionary_2_System_String_System_String_ *extraHeaders;
    struct OneDSEventsAPI_c_DisplayClass11_0 *__8__1;
    struct TaskAwaiter __u__1;
};

struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed {
    struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 fields;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1_ *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};

struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__StaticFields {
};

struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__VTable vtable;
};

struct __declspec(align(8)) OneDSEventsAPI_c_DisplayClass12_0__Fields {
    struct TelemetryIngestionConfigRequest *request;
    struct PlayFabResult_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_ *result;
    struct Object *customData;
    struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_ *__9__2;
    struct Action_1_PlayFab_PlayFabError_ *__9__3;
};

struct OneDSEventsAPI_c_DisplayClass12_0 {
    struct OneDSEventsAPI_c_DisplayClass12_0__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_c_DisplayClass12_0__Fields fields;
};

struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_ {
    struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Fields fields;
};

struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___VTable {
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

struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___StaticFields {
};

struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse___VTable vtable;
};

struct OneDSEventsAPI_c_DisplayClass12_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDSEventsAPI_c_DisplayClass12_0__StaticFields {
};

struct OneDSEventsAPI_c_DisplayClass12_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_c_DisplayClass12_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_c_DisplayClass12_0__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1 {
    struct AsyncMethodBuilderCore m_coreState;
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1 *m_task;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Boxed {
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Class *klass;
    MonitorData *monitor;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1 fields;
};

struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1 __t__builder;
    struct TelemetryIngestionConfigRequest *request;
    struct Object *customData;
    struct OneDSEventsAPI_c_DisplayClass12_0 *__8__1;
    struct TaskAwaiter __u__1;
};

struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Boxed {
    struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 fields;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields {
    struct Task_1_PlayFab_SharedModels_PlayFabResult_1__1 *s_defaultResultTask;
};

struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncTaskMethodBuilder_1_PlayFab_SharedModels_PlayFabResult_1__1__VTable vtable;
};

struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__StaticFields {
};

struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__VTable vtable;
};

struct __declspec(align(8)) OneDSEventsAPI_c_DisplayClass13_0__Fields {
    int32_t frequency;
    struct Func_1_Boolean_ *condition;
};

struct OneDSEventsAPI_c_DisplayClass13_0 {
    struct OneDSEventsAPI_c_DisplayClass13_0__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_c_DisplayClass13_0__Fields fields;
};

struct OneDSEventsAPI_c_DisplayClass13_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OneDSEventsAPI_c_DisplayClass13_0__StaticFields {
};

struct OneDSEventsAPI_c_DisplayClass13_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_c_DisplayClass13_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_c_DisplayClass13_0__VTable vtable;
};

struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    struct OneDSEventsAPI_c_DisplayClass13_0 *__4__this;
    struct TaskAwaiter __u__1;
};

struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Boxed {
    struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d fields;
};

struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__StaticFields {
};

struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_c_DisplayClass13_0_WaitWhile_b_0_d__VTable vtable;
};

struct TaskAwaiter_1_System_Threading_Tasks_Task_ {
    struct Task_1_Task_ *m_task;
};

struct TaskAwaiter_1_System_Threading_Tasks_Task___Boxed {
    struct TaskAwaiter_1_System_Threading_Tasks_Task___Class *klass;
    MonitorData *monitor;
    struct TaskAwaiter_1_System_Threading_Tasks_Task_ fields;
};

struct OneDSEventsAPI_WaitWhile_d_13 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder __t__builder;
    int32_t frequency;
    struct Func_1_Boolean_ *condition;
    int32_t timeout;
    struct Object *__7__wrap1;
    struct TaskAwaiter_1_System_Threading_Tasks_Task_ __u__1;
};

struct OneDSEventsAPI_WaitWhile_d_13__Boxed {
    struct OneDSEventsAPI_WaitWhile_d_13__Class *klass;
    MonitorData *monitor;
    struct OneDSEventsAPI_WaitWhile_d_13 fields;
};

struct TaskAwaiter_1_System_Threading_Tasks_Task___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData UnsafeOnCompleted;
    VirtualInvokeData OnCompleted;
};

struct TaskAwaiter_1_System_Threading_Tasks_Task___StaticFields {
};

struct TaskAwaiter_1_System_Threading_Tasks_Task___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskAwaiter_1_System_Threading_Tasks_Task___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskAwaiter_1_System_Threading_Tasks_Task___VTable vtable;
};

struct OneDSEventsAPI_WaitWhile_d_13__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveNext;
    VirtualInvokeData SetStateMachine;
};

struct OneDSEventsAPI_WaitWhile_d_13__StaticFields {
};

struct OneDSEventsAPI_WaitWhile_d_13__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneDSEventsAPI_WaitWhile_d_13__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneDSEventsAPI_WaitWhile_d_13__VTable vtable;
};

struct __declspec(align(8)) PlayFabDataGatherer__Fields {
    struct String *ProductName;
    struct String *ProductBundle;
    struct String *Version;
    struct String *Company;
    RuntimePlatform__Enum Platform;
    
    bool GraphicsMultiThreaded;
    GraphicsDeviceType__Enum GraphicsType;
    
    struct String *DataPath;
    struct String *PersistentDataPath;
    struct String *StreamingAssetsPath;
    int32_t TargetFrameRate;
    struct String *UnityVersion;
    bool RunInBackground;
    struct String *DeviceModel;
    DeviceType__Enum DeviceType;
    
    struct String *DeviceUniqueId;
    struct String *OperatingSystem;
    int32_t GraphicsDeviceId;
    struct String *GraphicsDeviceName;
    int32_t GraphicsMemorySize;
    int32_t GraphicsShaderLevel;
    int32_t SystemMemorySize;
    int32_t ProcessorCount;
    int32_t ProcessorFrequency;
    struct String *ProcessorType;
    bool SupportsAccelerometer;
    bool SupportsGyroscope;
    bool SupportsLocationService;
};

}
