namespace app {
enum class TaskInstanceStatus__Enum : int32_t {
    Succeeded = 0x00000000,
    Starting = 0x00000001,
    InProgress = 0x00000002,
    Failed = 0x00000003,
    Aborted = 0x00000004,
    Stalled = 0x00000005,
};

struct TaskInstanceStatus__Enum__Boxed {
    struct TaskInstanceStatus__Enum__Class *klass;
    MonitorData *monitor;
    TaskInstanceStatus__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ {
    TaskInstanceStatus__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ fields;
};

struct TitleCompletedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_DateTime_ AbortedAt;
    bool IsAborted;
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ Result;
    struct Object *Summary;
    struct String *TaskInstanceId;
    struct String *TaskType;
};

struct TitleCompletedTaskEventData {
    struct TitleCompletedTaskEventData__Class *klass;
    MonitorData *monitor;
    struct TitleCompletedTaskEventData__Fields fields;
};

struct TaskInstanceStatus__Enum__VTable {
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

struct TaskInstanceStatus__Enum__StaticFields {
};

struct TaskInstanceStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskInstanceStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskInstanceStatus__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___VTable vtable;
};

struct TitleCompletedTaskEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleCompletedTaskEventData__StaticFields {
};

struct TitleCompletedTaskEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleCompletedTaskEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleCompletedTaskEventData__VTable vtable;
};

struct TitleCreatedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct NameIdentifier *ScheduledTask;
    struct String *UserId;
};

struct TitleCreatedTaskEventData {
    struct TitleCreatedTaskEventData__Class *klass;
    MonitorData *monitor;
    struct TitleCreatedTaskEventData__Fields fields;
};

struct __declspec(align(8)) NameIdentifier__Fields {
    struct String *Id;
    struct String *Name;
};

struct NameIdentifier {
    struct NameIdentifier__Class *klass;
    MonitorData *monitor;
    struct NameIdentifier__Fields fields;
};

struct NameIdentifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NameIdentifier__StaticFields {
};

struct NameIdentifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NameIdentifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NameIdentifier__VTable vtable;
};

struct TitleCreatedTaskEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleCreatedTaskEventData__StaticFields {
};

struct TitleCreatedTaskEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleCreatedTaskEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleCreatedTaskEventData__VTable vtable;
};

struct TitleDeletedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
};

struct TitleDeletedEventData {
    struct TitleDeletedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleDeletedEventData__Fields fields;
};

struct TitleDeletedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleDeletedEventData__StaticFields {
};

struct TitleDeletedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleDeletedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleDeletedEventData__VTable vtable;
};

struct TitleDeletedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct NameIdentifier *ScheduledTask;
    struct String *UserId;
};

struct TitleDeletedTaskEventData {
    struct TitleDeletedTaskEventData__Class *klass;
    MonitorData *monitor;
    struct TitleDeletedTaskEventData__Fields fields;
};

struct TitleDeletedTaskEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleDeletedTaskEventData__StaticFields {
};

struct TitleDeletedTaskEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleDeletedTaskEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleDeletedTaskEventData__VTable vtable;
};

struct TitleExceededLimitEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Dictionary_2_System_String_System_Object_ *Details;
    struct String *LimitDisplayName;
    struct String *LimitId;
    double LimitValue;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
    double Value;
};

struct TitleExceededLimitEventData {
    struct TitleExceededLimitEventData__Class *klass;
    MonitorData *monitor;
    struct TitleExceededLimitEventData__Fields fields;
};

struct TitleExceededLimitEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleExceededLimitEventData__StaticFields {
};

struct TitleExceededLimitEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleExceededLimitEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleExceededLimitEventData__VTable vtable;
};

struct TitleHighErrorRateEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *AlertEventId;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ AlertState;
    struct String *API;
    struct String *ErrorCode;
    struct String *GraphUrl;
    struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ Level;
};

struct TitleHighErrorRateEventData {
    struct TitleHighErrorRateEventData__Class *klass;
    MonitorData *monitor;
    struct TitleHighErrorRateEventData__Fields fields;
};

struct TitleHighErrorRateEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleHighErrorRateEventData__StaticFields {
};

struct TitleHighErrorRateEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleHighErrorRateEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleHighErrorRateEventData__VTable vtable;
};

struct TitleInitiatedPlayerPasswordResetEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct String *PasswordResetId;
    struct String *PlayerId;
    struct String *PlayerRecoveryEmailAddress;
    struct String *UserId;
};

struct TitleInitiatedPlayerPasswordResetEventData {
    struct TitleInitiatedPlayerPasswordResetEventData__Class *klass;
    MonitorData *monitor;
    struct TitleInitiatedPlayerPasswordResetEventData__Fields fields;
};

struct TitleInitiatedPlayerPasswordResetEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleInitiatedPlayerPasswordResetEventData__StaticFields {
};

struct TitleInitiatedPlayerPasswordResetEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleInitiatedPlayerPasswordResetEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleInitiatedPlayerPasswordResetEventData__VTable vtable;
};

struct TitleLimitChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *LimitDisplayName;
    struct String *LimitId;
    struct Nullable_1_Double_ PreviousPriceUSD;
    struct Nullable_1_Double_ PreviousValue;
    struct Nullable_1_Double_ PriceUSD;
    struct String *TransactionId;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
    struct Nullable_1_Double_ Value;
};

struct TitleLimitChangedEventData {
    struct TitleLimitChangedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleLimitChangedEventData__Fields fields;
};

struct TitleLimitChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleLimitChangedEventData__StaticFields {
};

struct TitleLimitChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleLimitChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleLimitChangedEventData__VTable vtable;
};

struct TitleModifiedGameBuildEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *BuildId;
    struct String *DeveloperId;
    int32_t MaxGamesPerHost;
    int32_t MinFreeGameSlots;
    struct List_1_PlayFab_PlayStreamModels_Region_ *Regions;
    struct String *UserId;
};

struct TitleModifiedGameBuildEventData {
    struct TitleModifiedGameBuildEventData__Class *klass;
    MonitorData *monitor;
    struct TitleModifiedGameBuildEventData__Fields fields;
};

struct TitleModifiedGameBuildEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleModifiedGameBuildEventData__StaticFields {
};

struct TitleModifiedGameBuildEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleModifiedGameBuildEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleModifiedGameBuildEventData__VTable vtable;
};

enum class NewsStatus__Enum : int32_t {
    None = 0x00000000,
    Unpublished = 0x00000001,
    Published = 0x00000002,
    Archived = 0x00000003,
};

struct NewsStatus__Enum__Boxed {
    struct NewsStatus__Enum__Class *klass;
    MonitorData *monitor;
    NewsStatus__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ {
    NewsStatus__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ fields;
};

struct TitleNewsUpdatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct DateTime DateCreated;
    struct String *NewsId;
    struct String *NewsTitle;
    struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ Status;
};

struct TitleNewsUpdatedEventData {
    struct TitleNewsUpdatedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleNewsUpdatedEventData__Fields fields;
};

struct NewsStatus__Enum__VTable {
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

struct NewsStatus__Enum__StaticFields {
};

struct NewsStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NewsStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NewsStatus__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___VTable vtable;
};

struct TitleNewsUpdatedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitleNewsUpdatedEventData__StaticFields {
};

struct TitleNewsUpdatedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleNewsUpdatedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleNewsUpdatedEventData__VTable vtable;
};

struct TitlePermissionsPolicyChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct String *NewPolicy;
    struct String *PolicyName;
    struct String *UserId;
};

struct TitlePermissionsPolicyChangedEventData {
    struct TitlePermissionsPolicyChangedEventData__Class *klass;
    MonitorData *monitor;
    struct TitlePermissionsPolicyChangedEventData__Fields fields;
};

struct TitlePermissionsPolicyChangedEventData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TitlePermissionsPolicyChangedEventData__StaticFields {
};

struct TitlePermissionsPolicyChangedEventData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitlePermissionsPolicyChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitlePermissionsPolicyChangedEventData__VTable vtable;
};

struct TitleProfileViewConstraintsChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct String *PreviousProfileViewConstraints;
    struct String *ProfileType;
    struct String *ProfileViewConstraints;
    struct String *UserId;
};

struct TitleProfileViewConstraintsChangedEventData {
    struct TitleProfileViewConstraintsChangedEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleProfileViewConstraintsChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleProfileViewConstraintsChangedEventData__VTable vtable;
};

struct TitlePublishedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    int32_t Revision;
    struct String *UserId;
};

struct TitlePublishedCloudScriptEventData {
    struct TitlePublishedCloudScriptEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitlePublishedCloudScriptEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitlePublishedCloudScriptEventData__VTable vtable;
};

struct TitleQueueConfigUpdatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    bool Deleted;
    struct String *DeveloperId;
    struct String *MatchQueueName;
    struct String *UserId;
};

struct TitleQueueConfigUpdatedEventData {
    struct TitleQueueConfigUpdatedEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleQueueConfigUpdatedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleQueueConfigUpdatedEventData__VTable vtable;
};

struct TitleRequestedLimitChangeEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct String *LevelName;
    struct String *LimitDisplayName;
    struct String *LimitId;
    struct String *PreviousLevelName;
    struct Nullable_1_Double_ PreviousPriceUSD;
    struct Nullable_1_Double_ PreviousValue;
    struct Nullable_1_Double_ PriceUSD;
    struct String *TransactionId;
    struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
    struct String *UserId;
    struct Nullable_1_Double_ Value;
};

struct TitleRequestedLimitChangeEventData {
    struct TitleRequestedLimitChangeEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleRequestedLimitChangeEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleRequestedLimitChangeEventData__VTable vtable;
};

struct TitleSavedSurveyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *Genre;
    struct List_1_System_String_ *Monetization;
    struct List_1_System_String_ *Platforms;
    struct List_1_System_String_ *PlayerModes;
    struct String *TitleName;
    struct String *TitleWebsite;
};

struct TitleSavedSurveyEventData {
    struct TitleSavedSurveyEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleSavedSurveyEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleSavedSurveyEventData__VTable vtable;
};

struct TitleScheduledCloudScriptExecutedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct ExecuteCloudScriptResult_3 *CloudScriptExecutionResult;
    struct String *FunctionName;
    struct NameId *ScheduledTask;
};

struct TitleScheduledCloudScriptExecutedEventData {
    struct TitleScheduledCloudScriptExecutedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleScheduledCloudScriptExecutedEventData__Fields fields;
};

struct __declspec(align(8)) NameId__Fields {
    struct String *Id;
    struct String *Name;
};

struct NameId {
    struct NameId__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NameId__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleScheduledCloudScriptExecutedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleScheduledCloudScriptExecutedEventData__VTable vtable;
};

struct TitleSecretKeyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_Boolean_ Deleted;
    struct String *DeveloperId;
    struct Nullable_1_Boolean_ Disabled;
    struct Nullable_1_DateTime_ ExpiryDate;
    struct String *SecretKeyId;
    struct String *SecretKeyName;
    struct String *UserId;
};

struct TitleSecretKeyEventData {
    struct TitleSecretKeyEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleSecretKeyEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleSecretKeyEventData__VTable vtable;
};

struct TitleStartedTaskEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *DeveloperId;
    struct Object *Parameter;
    struct String *ScheduledByUserId;
    struct NameIdentifier *ScheduledTask;
    struct String *TaskInstanceId;
    struct String *TaskType;
    struct String *UserId;
};

struct TitleStartedTaskEventData {
    struct TitleStartedTaskEventData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleStartedTaskEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleStartedTaskEventData__VTable vtable;
};

enum class StatisticResetIntervalOption__Enum : int32_t {
    Never = 0x00000000,
    Hour = 0x00000001,
    Day = 0x00000002,
    Week = 0x00000003,
    Month = 0x00000004,
};

struct StatisticResetIntervalOption__Enum__Boxed {
    struct StatisticResetIntervalOption__Enum__Class *klass;
    MonitorData *monitor;
    StatisticResetIntervalOption__Enum value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ {
    StatisticResetIntervalOption__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ fields;
};

struct TitleStatisticVersionChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ ScheduledResetInterval;
    struct Nullable_1_DateTime_ ScheduledResetTime;
    struct String *StatisticName;
    uint32_t StatisticVersion;
};

struct TitleStatisticVersionChangedEventData {
    struct TitleStatisticVersionChangedEventData__Class *klass;
    MonitorData *monitor;
    struct TitleStatisticVersionChangedEventData__Fields fields;
};

struct StatisticResetIntervalOption__Enum__VTable {
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

struct StatisticResetIntervalOption__Enum__StaticFields {
};

struct StatisticResetIntervalOption__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StatisticResetIntervalOption__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StatisticResetIntervalOption__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TitleStatisticVersionChangedEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TitleStatisticVersionChangedEventData__VTable vtable;
};

struct TitleStoreUpdatedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String *CatalogVersion;
    bool Deleted;
    struct String *DeveloperId;
    struct String *StoreId;
    struct String *UserId;
};

}
