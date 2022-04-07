namespace app {
struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct EventBatchingStage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RunStage;
  VirtualInvokeData InitStage;
  VirtualInvokeData RunStage_1;
  VirtualInvokeData GetInputConsumingEnumerable;
  VirtualInvokeData StoreOutput;
  VirtualInvokeData OnNextInputItem;
};
struct EventBatchingStage__StaticFields {
  struct TimeSpan DefaultBatchFillTimeout;
  int32_t EventAvailabilityCheckTimeoutInMs;
};
struct EventBatchingStage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventBatchingStage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventBatchingStage__VTable vtable;
};

struct __declspec(align(8)) EventBatchingStage_GetInputConsumingEnumerable_d_19__Fields {
  int32_t __1__state;
  struct IPlayFabEmitEventRequest * __2__current;
  int32_t __l__initialThreadId;
  struct EventBatchingStage * __4__this;
};
struct EventBatchingStage_GetInputConsumingEnumerable_d_19 {
  struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Class *klass;
  struct MonitorData *monitor;
  struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Fields fields;
};
struct EventBatchingStage_GetInputConsumingEnumerable_d_19__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_PlayFab_IPlayFabEmitEventRequest__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_Generic_IEnumerator_PlayFab_IPlayFabEmitEventRequest__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct EventBatchingStage_GetInputConsumingEnumerable_d_19__StaticFields {
};
struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventBatchingStage_GetInputConsumingEnumerable_d_19__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventBatchingStage_GetInputConsumingEnumerable_d_19__VTable vtable;
};

struct __declspec(align(8)) PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields {
  struct CancellationTokenSource * cts;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ * input;
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_ * output;
};
struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ {
  struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
  struct MonitorData *monitor;
  struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
};
struct EventSendingStage__Fields {
  struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields _;
  struct OneDSEventsAPI * oneDSEventsApi;
  struct ILogger_1 * logger;
};
struct EventSendingStage {
  struct EventSendingStage__Class *klass;
  struct MonitorData *monitor;
  struct EventSendingStage__Fields fields;
};
struct __declspec(align(8)) BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Fields {
  struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1_ * _collection;
  int32_t _boundedCapacity;
  struct SemaphoreSlim * _freeNodes;
  struct SemaphoreSlim * _occupiedNodes;
  bool _isDisposed;
  struct CancellationTokenSource * _consumersCancellationTokenSource;
  struct CancellationTokenSource * _producersCancellationTokenSource;
  int32_t _currentAdders;
};
struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_ {
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
  struct MonitorData *monitor;
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
};
struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1_ {
  struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1_ {
  struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch_ {
  struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
};
struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
  VirtualInvokeData TryAdd;
  VirtualInvokeData TryTake;
  VirtualInvokeData ToArray;
};
struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};
struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};
struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};
struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};
struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData Dispose_1;
};
struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};
struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};
struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
};
struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
};
struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RunStage;
  VirtualInvokeData InitStage;
  VirtualInvokeData RunStage_1;
  VirtualInvokeData GetInputConsumingEnumerable;
  VirtualInvokeData StoreOutput;
  VirtualInvokeData __unknown;
};
struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};
struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};
struct EventSendingStage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RunStage;
  VirtualInvokeData InitStage;
  VirtualInvokeData RunStage_1;
  VirtualInvokeData GetInputConsumingEnumerable;
  VirtualInvokeData StoreOutput;
  VirtualInvokeData OnNextInputItem;
};
struct EventSendingStage__StaticFields {
};
struct EventSendingStage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSendingStage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSendingStage__VTable vtable;
};

struct EventSendingStage_c {
  struct EventSendingStage_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents_ {
  struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___Fields fields;
};
struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___VTable {
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
struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___StaticFields {
};
struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents___VTable vtable;
};
struct EventSendingStage_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventSendingStage_c__StaticFields {
  struct EventSendingStage_c * __9;
  struct Func_2_PlayFab_PlayFabEmitEventRequest_PlayFab_EventsModels_EventContents_ * __9__3_0;
};
struct EventSendingStage_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventSendingStage_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventSendingStage_c__VTable vtable;
};

struct __declspec(align(8)) OneDSEventPipeline__Fields {
  bool isActive;
  struct Object * isActiveLock;
  struct OneDSEventPipelineSettings * settings;
  struct CancellationToken externalCancellationToken;
  struct CancellationTokenSource * pipelineCancellationTokenSource;
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * eventBuffer;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ * batchBuffer;
  struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_ * sendResultBuffer;
  struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * batchingStage;
  struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * sendingStage;
  struct Task * batchingTask;
  struct Task * sendingTask;
  struct Task * pipelineTask;
  struct ILogger_1 * logger;
  bool disposed;
};
struct OneDSEventPipeline {
  struct OneDSEventPipeline__Class *klass;
  struct MonitorData *monitor;
  struct OneDSEventPipeline__Fields fields;
};
struct __declspec(align(8)) OneDSEventPipelineSettings__Fields {
  int32_t batchSize;
  struct TimeSpan batchFillTimeout;
  int32_t _EventBufferSize_k__BackingField;
  int32_t _BatchBufferSize_k__BackingField;
  int32_t _MaxHttpAttempts_k__BackingField;
};
struct OneDSEventPipelineSettings {
  struct OneDSEventPipelineSettings__Class *klass;
  struct MonitorData *monitor;
  struct OneDSEventPipelineSettings__Fields fields;
};
struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ {
  struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
};
struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ {
  struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Class *klass;
  struct MonitorData *monitor;
};
struct OneDSEventPipelineSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OneDSEventPipelineSettings__StaticFields {
  struct TimeSpan MinBatchFillTimeout;
  struct TimeSpan MaxBatchFillTimeout;
  struct TimeSpan DefaultBatchFillTimeout;
};
struct OneDSEventPipelineSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneDSEventPipelineSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneDSEventPipelineSettings__VTable vtable;
};
struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable {
  VirtualInvokeData RunStage;
};
struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields {
};
struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPipelineStage_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable vtable;
};
struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___VTable {
  VirtualInvokeData RunStage;
};
struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
};
struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPipelineStage_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
};
struct OneDSEventPipeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData StartAsync;
  VirtualInvokeData IntakeEvent;
  VirtualInvokeData IntakeEventAsync;
  VirtualInvokeData Dispose;
  VirtualInvokeData Dispose_1;
};
struct OneDSEventPipeline__StaticFields {
};
struct OneDSEventPipeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneDSEventPipeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneDSEventPipeline__VTable vtable;
};

struct OneDSEventPipeline_StartAsync_d_19 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder __t__builder;
  struct OneDSEventPipeline * __4__this;
  struct TaskAwaiter __u__1;
};
struct OneDSEventPipeline_StartAsync_d_19__Boxed {
  struct OneDSEventPipeline_StartAsync_d_19__Class *klass;
  struct MonitorData *monitor;
  struct OneDSEventPipeline_StartAsync_d_19 fields;
};
struct OneDSEventPipeline_StartAsync_d_19__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct OneDSEventPipeline_StartAsync_d_19__StaticFields {
};
struct OneDSEventPipeline_StartAsync_d_19__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneDSEventPipeline_StartAsync_d_19__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneDSEventPipeline_StartAsync_d_19__VTable vtable;
};

struct OneDSEventPipeline_StartAsync_d_20 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder __t__builder;
  struct OneDSEventPipeline * __4__this;
  struct CancellationToken cancellationToken;
  struct TaskAwaiter __u__1;
};
struct OneDSEventPipeline_StartAsync_d_20__Boxed {
  struct OneDSEventPipeline_StartAsync_d_20__Class *klass;
  struct MonitorData *monitor;
  struct OneDSEventPipeline_StartAsync_d_20 fields;
};
struct OneDSEventPipeline_StartAsync_d_20__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct OneDSEventPipeline_StartAsync_d_20__StaticFields {
};
struct OneDSEventPipeline_StartAsync_d_20__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneDSEventPipeline_StartAsync_d_20__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneDSEventPipeline_StartAsync_d_20__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_PlayFab_IPlayFabEmitEventResponse_ * m_task;
};
struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Boxed {
  struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_ fields;
};
struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse_ {
  struct Task_1_PlayFab_IPlayFabEmitEventResponse_ * m_task;
};
struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___Boxed {
  struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___Class *klass;
  struct MonitorData *monitor;
  struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse_ fields;
};
struct OneDSEventPipeline_IntakeEventAsync_d_24 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse_ __t__builder;
  struct OneDSEventPipeline * __4__this;
  struct IPlayFabEmitEventRequest * request;
  struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse_ __u__1;
};
struct OneDSEventPipeline_IntakeEventAsync_d_24__Boxed {
  struct OneDSEventPipeline_IntakeEventAsync_d_24__Class *klass;
  struct MonitorData *monitor;
  struct OneDSEventPipeline_IntakeEventAsync_d_24 fields;
};
struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___StaticFields {
  struct Task_1_PlayFab_IPlayFabEmitEventResponse_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_PlayFab_IPlayFabEmitEventResponse___VTable vtable;
};
struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___StaticFields {
};
struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskAwaiter_1_PlayFab_IPlayFabEmitEventResponse___VTable vtable;
};
struct OneDSEventPipeline_IntakeEventAsync_d_24__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct OneDSEventPipeline_IntakeEventAsync_d_24__StaticFields {
};
struct OneDSEventPipeline_IntakeEventAsync_d_24__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneDSEventPipeline_IntakeEventAsync_d_24__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneDSEventPipeline_IntakeEventAsync_d_24__VTable vtable;
};

enum LogLevel__Enum_1 : int32_t {
  LogLevel__Enum_1_Trace = 0,
  LogLevel__Enum_1_Debug = 1,
  LogLevel__Enum_1_Information = 2,
  LogLevel__Enum_1_Warning = 3,
  LogLevel__Enum_1_Error = 4,
  LogLevel__Enum_1_Critical = 5,
  LogLevel__Enum_1_None = 6,
};
struct LogLevel__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LogLevel__Enum_1 value;
};
struct __declspec(align(8)) DebugLogger__Fields {
  enum LogLevel__Enum_1 minLogLevel;
};
struct DebugLogger {
  struct DebugLogger__Class *klass;
  struct MonitorData *monitor;
  struct DebugLogger__Fields fields;
};
struct DebugLogger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Log;
  VirtualInvokeData Trace;
  VirtualInvokeData Debug;
  VirtualInvokeData Information;
  VirtualInvokeData Warning;
  VirtualInvokeData Error;
  VirtualInvokeData Critical;
};
struct DebugLogger__StaticFields {
};
struct DebugLogger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugLogger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugLogger__VTable vtable;
};

struct __declspec(align(8)) HttpResponseObject__Fields {
  int32_t code;
  int32_t errorCode;
  struct String * status;
  struct Object * data;
};
struct HttpResponseObject {
  struct HttpResponseObject__Class *klass;
  struct MonitorData *monitor;
  struct HttpResponseObject__Fields fields;
};
struct HttpResponseObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HttpResponseObject__StaticFields {
};
struct HttpResponseObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HttpResponseObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HttpResponseObject__VTable vtable;
};

struct ISerializerPlugin {
  struct ISerializerPlugin__Class *klass;
  struct MonitorData *monitor;
};
struct ISerializerPlugin__VTable {
  VirtualInvokeData DeserializeObject;
  VirtualInvokeData DeserializeObject_1;
  VirtualInvokeData DeserializeObject_2;
  VirtualInvokeData SerializeObject;
  VirtualInvokeData SerializeObject_1;
};
struct ISerializerPlugin__StaticFields {
};
struct ISerializerPlugin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISerializerPlugin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISerializerPlugin__VTable vtable;
};

struct SimpleJsonInstance {
  struct SimpleJsonInstance__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PocoJsonSerializerStrategy__Fields {
  struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate_ * ConstructorCache;
  struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ * GetCache;
  struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ * SetCache;
};
struct PocoJsonSerializerStrategy {
  struct PocoJsonSerializerStrategy__Class *klass;
  struct MonitorData *monitor;
  struct PocoJsonSerializerStrategy__Fields fields;
};
struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Fields {
  struct PocoJsonSerializerStrategy__Fields _;
};
struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization {
  struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class *klass;
  struct MonitorData *monitor;
  struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Fields fields;
};
struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate_ {
  struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ {
  struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ {
  struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class *klass;
  struct MonitorData *monitor;
};
enum NullValueHandling__Enum_1 : int32_t {
  NullValueHandling__Enum_1_Include = 0,
  NullValueHandling__Enum_1_Ignore = 1,
};
struct NullValueHandling__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NullValueHandling__Enum_1 value;
};
struct __declspec(align(8)) JsonProperty_1__Fields {
  struct String * PropertyName;
  enum NullValueHandling__Enum_1 NullValueHandling;
};
struct JsonProperty_1 {
  struct JsonProperty_1__Class *klass;
  struct MonitorData *monitor;
  struct JsonProperty_1__Fields fields;
};
struct ReflectionUtils_ConstructorDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct ReflectionUtils_ConstructorDelegate {
  struct ReflectionUtils_ConstructorDelegate__Class *klass;
  struct MonitorData *monitor;
  struct ReflectionUtils_ConstructorDelegate__Fields fields;
};
struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ {
  struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ {
  struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___StaticFields {
};
struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_Type_PlayFab_Json_ReflectionUtils_ConstructorDelegate___VTable vtable;
};
struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields {
};
struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_Type_IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable vtable;
};
struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields {
};
struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_Type_IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable vtable;
};
struct JsonProperty_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct JsonProperty_1__StaticFields {
};
struct JsonProperty_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonProperty_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonProperty_1__VTable vtable;
};
struct ReflectionUtils_ConstructorDelegate__VTable {
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
struct ReflectionUtils_ConstructorDelegate__StaticFields {
};
struct ReflectionUtils_ConstructorDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReflectionUtils_ConstructorDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReflectionUtils_ConstructorDelegate__VTable vtable;
};
struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields {
};
struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable vtable;
};
struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields {
};
struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable vtable;
};
struct PocoJsonSerializerStrategy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData TrySerializeNonPrimitiveObject;
  VirtualInvokeData DeserializeObject;
  VirtualInvokeData MapClrMemberNameToJsonFieldName;
  VirtualInvokeData MapClrMemberNameToJsonFieldName_1;
  VirtualInvokeData ContructorDelegateFactory;
  VirtualInvokeData GetterValueFactory;
  VirtualInvokeData SetterValueFactory;
  VirtualInvokeData TrySerializeNonPrimitiveObject_1;
  VirtualInvokeData DeserializeObject_1;
  VirtualInvokeData SerializeEnum;
  VirtualInvokeData TrySerializeKnownTypes;
  VirtualInvokeData TrySerializeUnknownTypes;
};
struct PocoJsonSerializerStrategy__StaticFields {
  struct Type__Array * EmptyTypes;
  struct Type__Array * ArrayConstructorParameterTypes;
  struct String__Array * Iso8601Format;
};
struct PocoJsonSerializerStrategy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PocoJsonSerializerStrategy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PocoJsonSerializerStrategy__VTable vtable;
};
struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData TrySerializeNonPrimitiveObject;
  VirtualInvokeData DeserializeObject;
  VirtualInvokeData MapClrMemberNameToJsonFieldName;
  VirtualInvokeData MapClrMemberNameToJsonFieldName_1;
  VirtualInvokeData ContructorDelegateFactory;
  VirtualInvokeData GetterValueFactory;
  VirtualInvokeData SetterValueFactory;
  VirtualInvokeData TrySerializeNonPrimitiveObject_1;
  VirtualInvokeData DeserializeObject_1;
  VirtualInvokeData SerializeEnum;
  VirtualInvokeData TrySerializeKnownTypes;
  VirtualInvokeData TrySerializeUnknownTypes;
};
struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__StaticFields {
};
struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization__VTable vtable;
};
struct SimpleJsonInstance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DeserializeObject;
  VirtualInvokeData DeserializeObject_1;
  VirtualInvokeData DeserializeObject_2;
  VirtualInvokeData SerializeObject;
  VirtualInvokeData SerializeObject_1;
};
struct SimpleJsonInstance__StaticFields {
  struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization * ApiSerializerStrategy;
};
struct SimpleJsonInstance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleJsonInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleJsonInstance__VTable vtable;
};

struct JsonArray__Fields {
  struct List_1_System_Object___Fields _;
};
struct JsonArray {
  struct JsonArray__Class *klass;
  struct MonitorData *monitor;
  struct JsonArray__Fields fields;
};
struct JsonArray__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct JsonArray__StaticFields {
};
struct JsonArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonArray__VTable vtable;
};

struct __declspec(align(8)) JsonObject__Fields {
  struct Dictionary_2_System_String_System_Object_ * _members;
};
struct JsonObject {
  struct JsonObject__Class *klass;
  struct MonitorData *monitor;
  struct JsonObject__Fields fields;
};
struct JsonObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add_1;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove_1;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};}