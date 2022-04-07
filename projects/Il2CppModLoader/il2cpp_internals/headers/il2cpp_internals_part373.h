namespace app {
struct GameLobbyStartedEventData {
  struct GameLobbyStartedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GameLobbyStartedEventData__Fields fields;
};
struct GameLobbyStartedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameLobbyStartedEventData__StaticFields {
};
struct GameLobbyStartedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameLobbyStartedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameLobbyStartedEventData__VTable vtable;
};

struct GameServerHostStartedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * InstanceId;
  struct String * InstanceProvider;
  struct String * InstanceType;
  struct String * Region;
  struct String * ServerBuildVersion;
  struct String * ServerHost;
  struct String * ServerIPV4Address;
  struct String * ServerIPV6Address;
  struct DateTime StartTime;
  struct String * TitleId;
};
struct GameServerHostStartedEventData {
  struct GameServerHostStartedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GameServerHostStartedEventData__Fields fields;
};
struct GameServerHostStartedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameServerHostStartedEventData__StaticFields {
};
struct GameServerHostStartedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameServerHostStartedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameServerHostStartedEventData__VTable vtable;
};

enum GameServerHostStopReason__Enum : int32_t {
  GameServerHostStopReason__Enum_Other = 0,
  GameServerHostStopReason__Enum_ExcessCapacity = 1,
  GameServerHostStopReason__Enum_LimitExceeded = 2,
  GameServerHostStopReason__Enum_BuildNotActiveInRegion = 3,
  GameServerHostStopReason__Enum_Unresponsive = 4,
};
struct GameServerHostStopReason__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GameServerHostStopReason__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ {
  enum GameServerHostStopReason__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ fields;
};
struct GameServerHostStoppedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * InstanceId;
  struct String * InstanceProvider;
  struct String * InstanceType;
  struct String * Region;
  struct String * ServerBuildVersion;
  struct String * ServerHost;
  struct String * ServerIPV4Address;
  struct String * ServerIPV6Address;
  struct DateTime StartTime;
  struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason_ StopReason;
  struct DateTime StopTime;
  struct String * TitleId;
};
struct GameServerHostStoppedEventData {
  struct GameServerHostStoppedEventData__Class *klass;
  struct MonitorData *monitor;
  struct GameServerHostStoppedEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_GameServerHostStopReason___VTable vtable;
};
struct GameServerHostStoppedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameServerHostStoppedEventData__StaticFields {
};
struct GameServerHostStoppedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameServerHostStoppedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameServerHostStoppedEventData__VTable vtable;
};

struct SessionEndedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  bool Crashed;
  struct DateTime EndTime;
  struct Nullable_1_Double_ KilobytesWritten;
  double SessionLengthMs;
  struct String * TitleId;
  struct String * UserId;
};
struct SessionEndedEventData {
  struct SessionEndedEventData__Class *klass;
  struct MonitorData *monitor;
  struct SessionEndedEventData__Fields fields;
};
struct SessionEndedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SessionEndedEventData__StaticFields {
};
struct SessionEndedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SessionEndedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SessionEndedEventData__VTable vtable;
};

struct SessionStartedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * TemporaryWriteUrl;
  struct String * TitleId;
};
struct SessionStartedEventData {
  struct SessionStartedEventData__Class *klass;
  struct MonitorData *monitor;
  struct SessionStartedEventData__Fields fields;
};
struct SessionStartedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SessionStartedEventData__StaticFields {
};
struct SessionStartedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SessionStartedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SessionStartedEventData__VTable vtable;
};

struct TitleAbortedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct String * TaskInstanceId;
  struct String * UserId;
};
struct TitleAbortedTaskEventData {
  struct TitleAbortedTaskEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleAbortedTaskEventData__Fields fields;
};
struct TitleAbortedTaskEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleAbortedTaskEventData__StaticFields {
};
struct TitleAbortedTaskEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleAbortedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleAbortedTaskEventData__VTable vtable;
};

struct TitleAddedCloudScriptEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  bool Published;
  int32_t Revision;
  struct List_1_System_String_ * ScriptNames;
  struct String * UserId;
  int32_t Version;
};
struct TitleAddedCloudScriptEventData {
  struct TitleAddedCloudScriptEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleAddedCloudScriptEventData__Fields fields;
};
struct TitleAddedCloudScriptEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleAddedCloudScriptEventData__StaticFields {
};
struct TitleAddedCloudScriptEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleAddedCloudScriptEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleAddedCloudScriptEventData__VTable vtable;
};

struct TitleAddedGameBuildEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * BuildId;
  struct String * DeveloperId;
  int32_t MaxGamesPerHost;
  int32_t MinFreeGameSlots;
  struct List_1_PlayFab_PlayStreamModels_Region_ * Regions;
  struct String * UserId;
};
struct TitleAddedGameBuildEventData {
  struct TitleAddedGameBuildEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleAddedGameBuildEventData__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_Region___Fields {
  struct Region__Enum_3__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_Region_ {
  struct List_1_PlayFab_PlayStreamModels_Region___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_Region___Fields fields;
};
enum Region__Enum_3 : int32_t {
  Region__Enum_3_USCentral = 0,
  Region__Enum_3_USEast = 1,
  Region__Enum_3_EUWest = 2,
  Region__Enum_3_Singapore = 3,
  Region__Enum_3_Japan = 4,
  Region__Enum_3_Brazil = 5,
  Region__Enum_3_Australia = 6,
};
struct Region__Enum_3__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Region__Enum_3 value;
};
struct Region__Enum_3__Array {
  struct Region__Enum_3__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum Region__Enum_3 vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Region_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_Region___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Region___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Region___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_Region___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_Region___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_Region___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_Region___VTable {
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
struct List_1_PlayFab_PlayStreamModels_Region___StaticFields {
  struct Region__Enum_3__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_Region___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_Region___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_Region___VTable vtable;
};
struct TitleAddedGameBuildEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleAddedGameBuildEventData__StaticFields {
};
struct TitleAddedGameBuildEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleAddedGameBuildEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleAddedGameBuildEventData__VTable vtable;
};

struct TitleAPISettingsChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct APISettings * PreviousSettingsValues;
  struct APISettings * SettingsValues;
  struct String * UserId;
};
struct TitleAPISettingsChangedEventData {
  struct TitleAPISettingsChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleAPISettingsChangedEventData__Fields fields;
};
struct __declspec(align(8)) APISettings__Fields {
  bool AllowClientToAddVirtualCurrency;
  bool AllowClientToPostPlayerStatistics;
  bool AllowClientToStartGames;
  bool AllowClientToSubtractVirtualCurrency;
  bool AllowNonUniquePlayerDisplayNames;
  bool AllowServerToDeleteUsers;
  struct String * DefaultLanguage;
  bool DisableAPIAccess;
  struct Nullable_1_Int32_ DisplayNameRandomSuffixLength;
  bool EnableClientIPAddressObfuscation;
  bool RequireCustomDataJSONFormat;
  bool UseExternalGameServerProvider;
  bool UseSandboxPayments;
};
struct APISettings {
  struct APISettings__Class *klass;
  struct MonitorData *monitor;
  struct APISettings__Fields fields;
};
struct APISettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct APISettings__StaticFields {
};
struct APISettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct APISettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct APISettings__VTable vtable;
};
struct TitleAPISettingsChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleAPISettingsChangedEventData__StaticFields {
};
struct TitleAPISettingsChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleAPISettingsChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleAPISettingsChangedEventData__VTable vtable;
};

struct TitleCatalogUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  bool Deleted;
  struct String * DeveloperId;
  struct String * UserId;
};
struct TitleCatalogUpdatedEventData {
  struct TitleCatalogUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleCatalogUpdatedEventData__Fields fields;
};
struct TitleCatalogUpdatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleCatalogUpdatedEventData__StaticFields {
};
struct TitleCatalogUpdatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleCatalogUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleCatalogUpdatedEventData__VTable vtable;
};

enum AlertStates__Enum : int32_t {
  AlertStates__Enum_Triggered = 0,
  AlertStates__Enum_Recovered = 1,
  AlertStates__Enum_ReTriggered = 2,
};
struct AlertStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlertStates__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ {
  enum AlertStates__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ fields;
};
enum AlertLevel__Enum_2 : int32_t {
  AlertLevel__Enum_2_Warn = 0,
  AlertLevel__Enum_2_Alert = 1,
  AlertLevel__Enum_2_Critical = 2,
};
struct AlertLevel__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlertLevel__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ {
  enum AlertLevel__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ fields;
};
struct TitleClientRateLimitedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AlertEventId;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ AlertState;
  struct String * API;
  struct String * ErrorCode;
  struct String * GraphUrl;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ Level;
};
struct TitleClientRateLimitedEventData {
  struct TitleClientRateLimitedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleClientRateLimitedEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates___VTable vtable;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel___VTable vtable;
};
struct TitleClientRateLimitedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TitleClientRateLimitedEventData__StaticFields {
};
struct TitleClientRateLimitedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleClientRateLimitedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleClientRateLimitedEventData__VTable vtable;
};

enum TaskInstanceStatus__Enum : int32_t {
  TaskInstanceStatus__Enum_Succeeded = 0,
  TaskInstanceStatus__Enum_Starting = 1,
  TaskInstanceStatus__Enum_InProgress = 2,
  TaskInstanceStatus__Enum_Failed = 3,
  TaskInstanceStatus__Enum_Aborted = 4,
  TaskInstanceStatus__Enum_Stalled = 5,
};
struct TaskInstanceStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TaskInstanceStatus__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ {
  enum TaskInstanceStatus__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ fields;
};
struct TitleCompletedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_DateTime_ AbortedAt;
  bool IsAborted;
  struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus_ Result;
  struct Object * Summary;
  struct String * TaskInstanceId;
  struct String * TaskType;
};
struct TitleCompletedTaskEventData {
  struct TitleCompletedTaskEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleCompletedTaskEventData__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_TaskInstanceStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleCompletedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleCompletedTaskEventData__VTable vtable;
};

struct TitleCreatedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct NameIdentifier * ScheduledTask;
  struct String * UserId;
};
struct TitleCreatedTaskEventData {
  struct TitleCreatedTaskEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleCreatedTaskEventData__Fields fields;
};
struct __declspec(align(8)) NameIdentifier__Fields {
  struct String * Id;
  struct String * Name;
};
struct NameIdentifier {
  struct NameIdentifier__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameIdentifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleCreatedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleCreatedTaskEventData__VTable vtable;
};

struct TitleDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
};
struct TitleDeletedEventData {
  struct TitleDeletedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleDeletedEventData__VTable vtable;
};

struct TitleDeletedTaskEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct NameIdentifier * ScheduledTask;
  struct String * UserId;
};
struct TitleDeletedTaskEventData {
  struct TitleDeletedTaskEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleDeletedTaskEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleDeletedTaskEventData__VTable vtable;
};

struct TitleExceededLimitEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Dictionary_2_System_String_System_Object_ * Details;
  struct String * LimitDisplayName;
  struct String * LimitId;
  double LimitValue;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
  double Value;
};
struct TitleExceededLimitEventData {
  struct TitleExceededLimitEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleExceededLimitEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleExceededLimitEventData__VTable vtable;
};

struct TitleHighErrorRateEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AlertEventId;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertStates_ AlertState;
  struct String * API;
  struct String * ErrorCode;
  struct String * GraphUrl;
  struct Nullable_1_PlayFab_PlayStreamModels_AlertLevel_ Level;
};
struct TitleHighErrorRateEventData {
  struct TitleHighErrorRateEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleHighErrorRateEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleHighErrorRateEventData__VTable vtable;
};

struct TitleInitiatedPlayerPasswordResetEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct String * PasswordResetId;
  struct String * PlayerId;
  struct String * PlayerRecoveryEmailAddress;
  struct String * UserId;
};
struct TitleInitiatedPlayerPasswordResetEventData {
  struct TitleInitiatedPlayerPasswordResetEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleInitiatedPlayerPasswordResetEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleInitiatedPlayerPasswordResetEventData__VTable vtable;
};

struct TitleLimitChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * LimitDisplayName;
  struct String * LimitId;
  struct Nullable_1_Double_ PreviousPriceUSD;
  struct Nullable_1_Double_ PreviousValue;
  struct Nullable_1_Double_ PriceUSD;
  struct String * TransactionId;
  struct Nullable_1_PlayFab_PlayStreamModels_MetricUnit_ Unit;
  struct Nullable_1_Double_ Value;
};
struct TitleLimitChangedEventData {
  struct TitleLimitChangedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleLimitChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleLimitChangedEventData__VTable vtable;
};

struct TitleModifiedGameBuildEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * BuildId;
  struct String * DeveloperId;
  int32_t MaxGamesPerHost;
  int32_t MinFreeGameSlots;
  struct List_1_PlayFab_PlayStreamModels_Region_ * Regions;
  struct String * UserId;
};
struct TitleModifiedGameBuildEventData {
  struct TitleModifiedGameBuildEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleModifiedGameBuildEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleModifiedGameBuildEventData__VTable vtable;
};

enum NewsStatus__Enum : int32_t {
  NewsStatus__Enum_None = 0,
  NewsStatus__Enum_Unpublished = 1,
  NewsStatus__Enum_Published = 2,
  NewsStatus__Enum_Archived = 3,
};
struct NewsStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NewsStatus__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ {
  enum NewsStatus__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ fields;
};
struct TitleNewsUpdatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct DateTime DateCreated;
  struct String * NewsId;
  struct String * NewsTitle;
  struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus_ Status;
};
struct TitleNewsUpdatedEventData {
  struct TitleNewsUpdatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct TitleNewsUpdatedEventData__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_NewsStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitleNewsUpdatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitleNewsUpdatedEventData__VTable vtable;
};

struct TitlePermissionsPolicyChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct String * NewPolicy;
  struct String * PolicyName;
  struct String * UserId;
};
struct TitlePermissionsPolicyChangedEventData {
  struct TitlePermissionsPolicyChangedEventData__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TitlePermissionsPolicyChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TitlePermissionsPolicyChangedEventData__VTable vtable;
};

struct TitleProfileViewConstraintsChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DeveloperId;
  struct String * PreviousProfileViewConstraints;
  struct String * ProfileType;
  struct String * ProfileViewConstraints;
  struct String * UserId;
};}