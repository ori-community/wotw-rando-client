namespace app {
struct TitleProfileViewConstraintsChangedEventData {
  struct TitleProfileViewConstraintsChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleProfileViewConstraintsChangedEventData__Fields fields;
};
struct TitleProfileViewConstraintsChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleProfileViewConstraintsChangedEventData__StaticFields {
};
struct TitleProfileViewConstraintsChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleProfileViewConstraintsChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleProfileViewConstraintsChangedEventData__VTable vtable;
};

struct TitlePublishedCloudScriptEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  int32_t Revision;
  struct String * UserId;
};
struct TitlePublishedCloudScriptEventData {
  struct TitlePublishedCloudScriptEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitlePublishedCloudScriptEventData__Fields fields;
};
struct TitlePublishedCloudScriptEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitlePublishedCloudScriptEventData__StaticFields {
};
struct TitlePublishedCloudScriptEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitlePublishedCloudScriptEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitlePublishedCloudScriptEventData__VTable vtable;
};

struct TitleQueueConfigUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  bool Deleted;
  struct String * DeveloperId;
  struct String * MatchQueueName;
  struct String * UserId;
};
struct TitleQueueConfigUpdatedEventData {
  struct TitleQueueConfigUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleQueueConfigUpdatedEventData__Fields fields;
};
struct TitleQueueConfigUpdatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleQueueConfigUpdatedEventData__StaticFields {
};
struct TitleQueueConfigUpdatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleQueueConfigUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleQueueConfigUpdatedEventData__VTable vtable;
};

struct TitleRequestedLimitChangeEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct String * LevelName;
  struct String * LimitDisplayName;
  struct String * LimitId;
  struct String * PreviousLevelName;
  struct Nullable_1_Double_ PreviousPriceUSD;
  struct Nullable_1_Double_ PreviousValue;
  struct Nullable_1_Double_ PriceUSD;
  struct String * TransactionId;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
  struct String * UserId;
  struct Nullable_1_Double_ Value;
};
struct TitleRequestedLimitChangeEventData {
  struct TitleRequestedLimitChangeEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleRequestedLimitChangeEventData__Fields fields;
};
struct TitleRequestedLimitChangeEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleRequestedLimitChangeEventData__StaticFields {
};
struct TitleRequestedLimitChangeEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleRequestedLimitChangeEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleRequestedLimitChangeEventData__VTable vtable;
};

struct TitleSavedSurveyEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Genre;
  struct List_1_System_String_ * Monetization;
  struct List_1_System_String_ * Platforms;
  struct List_1_System_String_ * PlayerModes;
  struct String * TitleName;
  struct String * TitleWebsite;
};
struct TitleSavedSurveyEventData {
  struct TitleSavedSurveyEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleSavedSurveyEventData__Fields fields;
};
struct TitleSavedSurveyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleSavedSurveyEventData__StaticFields {
};
struct TitleSavedSurveyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleSavedSurveyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleSavedSurveyEventData__VTable vtable;
};

struct TitleScheduledCloudScriptExecutedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct ExecuteCloudScriptResult_3 * CloudScriptExecutionResult;
  struct String * FunctionName;
  struct NameId * ScheduledTask;
};
struct TitleScheduledCloudScriptExecutedEventData {
  struct TitleScheduledCloudScriptExecutedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleScheduledCloudScriptExecutedEventData__Fields fields;
};
struct __declspec(align(8)) NameId__Fields {
  struct String * Id;
  struct String * Name;
};
struct NameId {
  struct NameId__Class *klass;
  struct MonitorData *monitor;
  struct NameId__Fields fields;
};
struct NameId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NameId__StaticFields {
};
struct NameId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameId__VTable vtable;
};
struct TitleScheduledCloudScriptExecutedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleScheduledCloudScriptExecutedEventData__StaticFields {
};
struct TitleScheduledCloudScriptExecutedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleScheduledCloudScriptExecutedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleScheduledCloudScriptExecutedEventData__VTable vtable;
};

struct TitleSecretKeyEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_Boolean_ Deleted;
  struct String * DeveloperId;
  struct Nullable_1_Boolean_ Disabled;
  struct Nullable_1_DateTime_ ExpiryDate;
  struct String * SecretKeyId;
  struct String * SecretKeyName;
  struct String * UserId;
};
struct TitleSecretKeyEventData {
  struct TitleSecretKeyEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleSecretKeyEventData__Fields fields;
};
struct TitleSecretKeyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleSecretKeyEventData__StaticFields {
};
struct TitleSecretKeyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleSecretKeyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleSecretKeyEventData__VTable vtable;
};

struct TitleStartedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct Object * Parameter;
  struct String * ScheduledByUserId;
  struct NameIdentifier * ScheduledTask;
  struct String * TaskInstanceId;
  struct String * TaskType;
  struct String * UserId;
};
struct TitleStartedTaskEventData {
  struct TitleStartedTaskEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleStartedTaskEventData__Fields fields;
};
struct TitleStartedTaskEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleStartedTaskEventData__StaticFields {
};
struct TitleStartedTaskEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleStartedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleStartedTaskEventData__VTable vtable;
};

enum StatisticResetIntervalOption__Enum : int32_t {
  StatisticResetIntervalOption__Enum_Never = 0,
  StatisticResetIntervalOption__Enum_Hour = 1,
  StatisticResetIntervalOption__Enum_Day = 2,
  StatisticResetIntervalOption__Enum_Week = 3,
  StatisticResetIntervalOption__Enum_Month = 4,
};
struct StatisticResetIntervalOption__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatisticResetIntervalOption__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ {
  enum StatisticResetIntervalOption__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ fields;
};
struct TitleStatisticVersionChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ ScheduledResetInterval;
  struct Nullable_1_DateTime_ ScheduledResetTime;
  struct String * StatisticName;
  uint32_t StatisticVersion;
};
struct TitleStatisticVersionChangedEventData {
  struct TitleStatisticVersionChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleStatisticVersionChangedEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___VTable vtable;
};
struct TitleStatisticVersionChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleStatisticVersionChangedEventData__StaticFields {
};
struct TitleStatisticVersionChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleStatisticVersionChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleStatisticVersionChangedEventData__VTable vtable;
};

struct TitleStoreUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  bool Deleted;
  struct String * DeveloperId;
  struct String * StoreId;
  struct String * UserId;
};
struct TitleStoreUpdatedEventData {
  struct TitleStoreUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleStoreUpdatedEventData__Fields fields;
};
struct TitleStoreUpdatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleStoreUpdatedEventData__StaticFields {
};
struct TitleStoreUpdatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleStoreUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleStoreUpdatedEventData__VTable vtable;
};

struct TitleUpdatedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  bool HasRenamed;
  struct NameIdentifier * ScheduledTask;
  struct String * UserId;
};
struct TitleUpdatedTaskEventData {
  struct TitleUpdatedTaskEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleUpdatedTaskEventData__Fields fields;
};
struct TitleUpdatedTaskEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleUpdatedTaskEventData__StaticFields {
};
struct TitleUpdatedTaskEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleUpdatedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleUpdatedTaskEventData__VTable vtable;
};

struct __declspec(align(8)) PlayStreamEventHistory__Fields {
  struct String * ParentEventId;
  struct String * ParentTriggerId;
  bool TriggeredEvents;
};
struct PlayStreamEventHistory {
  struct PlayStreamEventHistory__Class *klass;
  struct MonitorData *monitor;
  struct PlayStreamEventHistory__Fields fields;
};
struct PlayStreamEventHistory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayStreamEventHistory__StaticFields {
};
struct PlayStreamEventHistory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayStreamEventHistory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayStreamEventHistory__VTable vtable;
};

struct __declspec(align(8)) PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields {
  struct CancellationTokenSource * cts;
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * input;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ * output;
};
struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ {
  struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
  struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields fields;
};
struct EventBatchingStage__Fields {
  struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields _;
  int32_t _BatchSize_k__BackingField;
  struct TimeSpan _BatchFillTimeout_k__BackingField;
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ * batches;
  struct Stopwatch * stopwatch;
  struct ILogger_1 * logger;
};
struct EventBatchingStage {
  struct EventBatchingStage__Class *klass;
  struct MonitorData *monitor;
  struct EventBatchingStage__Fields fields;
};
struct __declspec(align(8)) BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Fields {
  struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest_ * _collection;
  int32_t _boundedCapacity;
  struct SemaphoreSlim * _freeNodes;
  struct SemaphoreSlim * _occupiedNodes;
  bool _isDisposed;
  struct CancellationTokenSource * _consumersCancellationTokenSource;
  struct CancellationTokenSource * _producersCancellationTokenSource;
  int32_t _currentAdders;
};
struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
};
struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Fields {
  struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch_ * _collection;
  int32_t _boundedCapacity;
  struct SemaphoreSlim * _freeNodes;
  struct SemaphoreSlim * _occupiedNodes;
  bool _isDisposed;
  struct CancellationTokenSource * _consumersCancellationTokenSource;
  struct CancellationTokenSource * _producersCancellationTokenSource;
  int32_t _currentAdders;
};
struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ {
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Fields fields;
};
struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch_ {
  struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch_ {
  struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TitleEventBatch__Fields {
  struct String * _TitleId_k__BackingField;
  struct List_1_PlayFab_IPlayFabEmitEventRequest_ * _Events_k__BackingField;
};
struct TitleEventBatch {
  struct TitleEventBatch__Class *klass;
  struct MonitorData *monitor;
  struct TitleEventBatch__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
  struct IPlayFabEmitEventRequest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
};
struct IPlayFabEmitEventRequest__Array {
  struct IPlayFabEmitEventRequest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPlayFabEmitEventRequest * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct List_1_PlayFab_IPlayFabEmitEventRequest_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
  struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
};
struct List_1_PlayFab_IPlayFabEmitEventRequest___Array {
  struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_PlayFab_IPlayFabEmitEventRequest_ * vector[32];
};
struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct String * key;
  struct List_1_PlayFab_IPlayFabEmitEventRequest_ * value;
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Boxed {
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ fields;
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array {
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
  struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class *klass;
  struct MonitorData *monitor;
};
struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData TryAdd;
  VirtualInvokeData TryTake;
  VirtualInvokeData ToArray;
};
struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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
struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable {
  VirtualInvokeData TryAdd;
  VirtualInvokeData TryTake;
  VirtualInvokeData ToArray;
};
struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
};
struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
};
struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
};
struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
};
struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable {
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
struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
};
struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
};
struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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
struct List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
  struct IPlayFabEmitEventRequest__Array * _emptyArray;
};
struct List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct TitleEventBatch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleEventBatch__StaticFields {
};
struct TitleEventBatch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleEventBatch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleEventBatch__VTable vtable;
};
struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable {
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
struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields {
};
struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
};
struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
};
struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};}