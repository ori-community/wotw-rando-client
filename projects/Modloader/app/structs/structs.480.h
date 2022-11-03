namespace app {
    struct PlayFabDataGatherer {
        struct PlayFabDataGatherer__Class* klass;
        MonitorData* monitor;
        struct PlayFabDataGatherer__Fields fields;
    };

    struct PlayFabDataGatherer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabDataGatherer__StaticFields {
    };

    struct PlayFabDataGatherer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabDataGatherer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabDataGatherer__VTable vtable;
    };

    struct PlayFabEmitEventCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct PlayFabEmitEventCallback {
        struct PlayFabEmitEventCallback__Class* klass;
        MonitorData* monitor;
        struct PlayFabEmitEventCallback__Fields fields;
    };

    struct IPlayFabEvent {
        struct IPlayFabEvent__Class* klass;
        MonitorData* monitor;
    };

    struct IPlayFabEmitEventResponse {
        struct IPlayFabEmitEventResponse__Class* klass;
        MonitorData* monitor;
    };

    struct IPlayFabEvent__VTable {
    };

    struct IPlayFabEvent__StaticFields {
    };

    struct IPlayFabEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPlayFabEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPlayFabEvent__VTable vtable;
    };

    struct IPlayFabEmitEventResponse__VTable {
    };

    struct IPlayFabEmitEventResponse__StaticFields {
    };

    struct IPlayFabEmitEventResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPlayFabEmitEventResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPlayFabEmitEventResponse__VTable vtable;
    };

    struct PlayFabEmitEventCallback__VTable {
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

    struct PlayFabEmitEventCallback__StaticFields {
    };

    struct PlayFabEmitEventCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEmitEventCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEmitEventCallback__VTable vtable;
    };

    enum class PlayFabEventType__Enum : int32_t {
        Default = 0x00000000,
        Lightweight = 0x00000001,
        Heavyweight = 0x00000002,
    };

    struct PlayFabEventType__Enum__Boxed {
        struct PlayFabEventType__Enum__Class* klass;
        MonitorData* monitor;
        PlayFabEventType__Enum value;
    };

    struct __declspec(align(8)) PlayFabEvent__Fields {
        PlayFabEventType__Enum _EventType_k__BackingField;

        struct EventContents* _EventContents_k__BackingField;
    };

    struct PlayFabEvent {
        struct PlayFabEvent__Class* klass;
        MonitorData* monitor;
        struct PlayFabEvent__Fields fields;
    };

    struct PlayFabEventType__Enum__VTable {
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

    struct PlayFabEventType__Enum__StaticFields {
    };

    struct PlayFabEventType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEventType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEventType__Enum__VTable vtable;
    };

    struct PlayFabEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabEvent__StaticFields {
    };

    struct PlayFabEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEvent__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabEmitEventRequest__Fields {
        struct PlayFabEvent* _Event_k__BackingField;
        struct String* _TitleId_k__BackingField;
        struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_* _ResultPromise_k__BackingField;
    };

    struct PlayFabEmitEventRequest {
        struct PlayFabEmitEventRequest__Class* klass;
        MonitorData* monitor;
        struct PlayFabEmitEventRequest__Fields fields;
    };

    struct __declspec(align(8)) TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___Fields {
        struct Task_1_PlayFab_IPlayFabEmitEventResponse_* m_task;
    };

    struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ {
        struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___Class* klass;
        MonitorData* monitor;
        struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___Fields fields;
    };

    struct Task_1_PlayFab_IPlayFabEmitEventResponse___Fields {
        struct Task__Fields _;
        struct IPlayFabEmitEventResponse* m_result;
    };

    struct Task_1_PlayFab_IPlayFabEmitEventResponse_ {
        struct Task_1_PlayFab_IPlayFabEmitEventResponse___Class* klass;
        MonitorData* monitor;
        struct Task_1_PlayFab_IPlayFabEmitEventResponse___Fields fields;
    };

    struct __declspec(align(8)) TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___Fields {
        struct CancellationToken m_defaultCancellationToken;
        struct TaskScheduler* m_defaultScheduler;
        TaskCreationOptions__Enum m_defaultCreationOptions;

        TaskContinuationOptions__Enum m_defaultContinuationOptions;
    };

    struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse_ {
        struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___Class* klass;
        MonitorData* monitor;
        struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___Fields fields;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19 {
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__Fields fields;
    };

    struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___StaticFields {
    };

    struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse___VTable vtable;
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__VTable {
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

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__StaticFields {
    };

    struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19__VTable vtable;
    };

    struct Task_1_PlayFab_IPlayFabEmitEventResponse___VTable {
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

    struct Task_1_PlayFab_IPlayFabEmitEventResponse___StaticFields {
        struct TaskFactory_1_PlayFab_IPlayFabEmitEventResponse_* s_Factory;
        struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__19* TaskWhenAnyCast;
    };

    struct Task_1_PlayFab_IPlayFabEmitEventResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Task_1_PlayFab_IPlayFabEmitEventResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Task_1_PlayFab_IPlayFabEmitEventResponse___VTable vtable;
    };

    struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___StaticFields {
    };

    struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse___VTable vtable;
    };

    struct PlayFabEmitEventRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabEmitEventRequest__StaticFields {
    };

    struct PlayFabEmitEventRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEmitEventRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEmitEventRequest__VTable vtable;
    };

    enum class EmitEventResult__Enum : int32_t {
        Success = 0x00000000,
        Overflow = 0x00000001,
        Disabled = 0x00000002,
        NotSupported = 0x00000003,
    };

    struct EmitEventResult__Enum__Boxed {
        struct EmitEventResult__Enum__Class* klass;
        MonitorData* monitor;
        EmitEventResult__Enum value;
    };

    struct __declspec(align(8)) PlayFabEmitEventResponse__Fields {
        struct PlayFabEvent* _Event_k__BackingField;
        EmitEventResult__Enum _EmitEventResult_k__BackingField;

        struct PlayFabError* _PlayFabError_k__BackingField;
        struct WriteEventsResponse* _WriteEventsResponse_k__BackingField;
        struct IList_1_PlayFab_IPlayFabEmitEventRequest_* _Batch_k__BackingField;
        uint64_t _BatchNumber_k__BackingField;
    };

    struct PlayFabEmitEventResponse {
        struct PlayFabEmitEventResponse__Class* klass;
        MonitorData* monitor;
        struct PlayFabEmitEventResponse__Fields fields;
    };

    struct IList_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IList_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct EmitEventResult__Enum__VTable {
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

    struct EmitEventResult__Enum__StaticFields {
    };

    struct EmitEventResult__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmitEventResult__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmitEventResult__Enum__VTable vtable;
    };

    struct IList_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IList_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct PlayFabEmitEventResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabEmitEventResponse__StaticFields {
    };

    struct PlayFabEmitEventResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEmitEventResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEmitEventResponse__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabEventAPI__Fields {
        struct IPlayFabEventRouter* _EventRouter_k__BackingField;
    };

    struct PlayFabEventAPI {
        struct PlayFabEventAPI__Class* klass;
        MonitorData* monitor;
        struct PlayFabEventAPI__Fields fields;
    };

    struct IPlayFabEventRouter {
        struct IPlayFabEventRouter__Class* klass;
        MonitorData* monitor;
    };

    struct IPlayFabEventRouter__VTable {
        VirtualInvokeData get_Pipelines;
        VirtualInvokeData AddAndStartPipeline;
        VirtualInvokeData RouteEvent;
    };

    struct IPlayFabEventRouter__StaticFields {
    };

    struct IPlayFabEventRouter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPlayFabEventRouter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPlayFabEventRouter__VTable vtable;
    };

    struct PlayFabEventAPI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabEventAPI__StaticFields {
    };

    struct PlayFabEventAPI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEventAPI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEventAPI__VTable vtable;
    };

    struct ILogger_1 {
        struct ILogger_1__Class* klass;
        MonitorData* monitor;
    };

    struct ILogger_1__VTable {
        VirtualInvokeData Log;
        VirtualInvokeData Trace;
        VirtualInvokeData Debug;
        VirtualInvokeData Information;
        VirtualInvokeData Warning;
        VirtualInvokeData Error;
        VirtualInvokeData Critical;
    };

    struct ILogger_1__StaticFields {
    };

    struct ILogger_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILogger_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILogger_1__VTable vtable;
    };

    struct IEnumerable_1_System_Threading_Tasks_Task_1_ {
        struct IEnumerable_1_System_Threading_Tasks_Task_1___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Threading_Tasks_Task_1___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_Threading_Tasks_Task_1___StaticFields {
    };

    struct IEnumerable_1_System_Threading_Tasks_Task_1___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_Threading_Tasks_Task_1___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_Threading_Tasks_Task_1___VTable vtable;
    };

    struct __declspec(align(8)) PlayFabEventRouter__Fields {
        struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_* _Pipelines_k__BackingField;
        struct ILogger_1* logger;
    };

    struct PlayFabEventRouter {
        struct PlayFabEventRouter__Class* klass;
        MonitorData* monitor;
        struct PlayFabEventRouter__Fields fields;
    };

    struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ {
        struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Class* klass;
        MonitorData* monitor;
    };

    enum class EventPipelineKey__Enum : int32_t {
        PlayFab = 0x00000000,
        OneDS = 0x00000001,
    };

    struct EventPipelineKey__Enum__Boxed {
        struct EventPipelineKey__Enum__Class* klass;
        MonitorData* monitor;
        EventPipelineKey__Enum value;
    };

    struct IEventPipeline {
        struct IEventPipeline__Class* klass;
        MonitorData* monitor;
    };

    struct IPlayFabEmitEventRequest {
        struct IPlayFabEmitEventRequest__Class* klass;
        MonitorData* monitor;
    };

    struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
    };

    struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___StaticFields {
    };

    struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___VTable vtable;
    };

    struct EventPipelineKey__Enum__VTable {
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

    struct EventPipelineKey__Enum__StaticFields {
    };

    struct EventPipelineKey__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventPipelineKey__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventPipelineKey__Enum__VTable vtable;
    };

    struct IEventPipeline__VTable {
        VirtualInvokeData StartAsync;
        VirtualInvokeData IntakeEvent;
        VirtualInvokeData IntakeEventAsync;
    };

    struct IEventPipeline__StaticFields {
    };

    struct IEventPipeline__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEventPipeline__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEventPipeline__VTable vtable;
    };

    struct IPlayFabEmitEventRequest__VTable {
    };

    struct IPlayFabEmitEventRequest__StaticFields {
    };

    struct IPlayFabEmitEventRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPlayFabEmitEventRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPlayFabEmitEventRequest__VTable vtable;
    };

    struct PlayFabEventRouter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Pipelines;
        VirtualInvokeData AddAndStartPipeline;
        VirtualInvokeData RouteEvent;
    };

    struct PlayFabEventRouter__StaticFields {
    };

    struct PlayFabEventRouter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabEventRouter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabEventRouter__VTable vtable;
    };

    struct EqualityComparer_1_PlayFab_PluginContractKey_ {
        struct EqualityComparer_1_PlayFab_PluginContractKey___Class* klass;
        MonitorData* monitor;
    };

    struct PluginContractKeyComparator {
        struct PluginContractKeyComparator__Class* klass;
        MonitorData* monitor;
    };

    enum class PluginContract__Enum : int32_t {
        PlayFab_Serializer = 0x00000000,
        PlayFab_Transport = 0x00000001,
    };

    struct PluginContract__Enum__Boxed {
        struct PluginContract__Enum__Class* klass;
        MonitorData* monitor;
        PluginContract__Enum value;
    };

    struct PluginContractKey {
        PluginContract__Enum _pluginContract;

        struct String* _pluginName;
    };

    struct PluginContractKey__Boxed {
        struct PluginContractKey__Class* klass;
        MonitorData* monitor;
        struct PluginContractKey fields;
    };

    struct PluginContractKey__Array {
        struct PluginContractKey__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PluginContractKey vector[32];
    };

    struct PluginContract__Enum__VTable {
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

    struct PluginContract__Enum__StaticFields {
    };

    struct PluginContract__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PluginContract__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PluginContract__Enum__VTable vtable;
    };

    struct PluginContractKey__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PluginContractKey__StaticFields {
    };

    struct PluginContractKey__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PluginContractKey__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PluginContractKey__VTable vtable;
    };

    struct PluginContractKey__Array__VTable {
    };

    struct PluginContractKey__Array__StaticFields {
    };

    struct PluginContractKey__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PluginContractKey__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PluginContractKey__Array__VTable vtable;
    };

    struct EqualityComparer_1_PlayFab_PluginContractKey___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IEqualityComparer_Equals;
        VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData IndexOf;
        VirtualInvokeData LastIndexOf;
    };

    struct EqualityComparer_1_PlayFab_PluginContractKey___StaticFields {
        struct EqualityComparer_1_PlayFab_PluginContractKey_* defaultComparer;
    };

    struct EqualityComparer_1_PlayFab_PluginContractKey___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EqualityComparer_1_PlayFab_PluginContractKey___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EqualityComparer_1_PlayFab_PluginContractKey___VTable vtable;
    };

    struct PluginContractKeyComparator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IEqualityComparer_Equals;
        VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData Equals_2;
        VirtualInvokeData GetHashCode_2;
        VirtualInvokeData IndexOf;
        VirtualInvokeData LastIndexOf;
    };

    struct PluginContractKeyComparator__StaticFields {
    };

    struct PluginContractKeyComparator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PluginContractKeyComparator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PluginContractKeyComparator__VTable vtable;
    };

    struct __declspec(align(8)) PluginManager__Fields {
        struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* plugins;
    };

    struct PluginManager {
        struct PluginManager__Class* klass;
        MonitorData* monitor;
        struct PluginManager__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_PlayFab_PluginContractKey_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ {
        struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ {
        int32_t hashCode;
        int32_t next;
        struct PluginContractKey key;
        struct IPlayFabPlugin* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ fields;
    };

    struct IPlayFabPlugin {
        struct IPlayFabPlugin__Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Array {
        struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ vector[32];
    };

    struct IEqualityComparer_1_PlayFab_PluginContractKey_ {
        struct IEqualityComparer_1_PlayFab_PluginContractKey___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields {
        struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields fields;
    };

    struct IEnumerator_1_PlayFab_PluginContractKey_ {
        struct IEnumerator_1_PlayFab_PluginContractKey___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields {
        struct Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin___Fields fields;
    };

    struct IPlayFabPlugin__Array {
        struct IPlayFabPlugin__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IPlayFabPlugin* vector[32];
    };

    struct IEnumerator_1_PlayFab_IPlayFabPlugin_ {
        struct IEnumerator_1_PlayFab_IPlayFabPlugin___Class* klass;
        MonitorData* monitor;
    };

} // namespace app
