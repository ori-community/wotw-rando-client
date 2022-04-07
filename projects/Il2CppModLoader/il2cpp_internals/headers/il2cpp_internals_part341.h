namespace app {
struct GetAssetUploadUrlResponse {
  struct GetAssetUploadUrlResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetAssetUploadUrlResponse__Fields fields;
};
struct GetAssetUploadUrlRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetAssetUploadUrlRequest__StaticFields {
};
struct GetAssetUploadUrlRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetAssetUploadUrlRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetAssetUploadUrlRequest__VTable vtable;
};
struct GetAssetUploadUrlResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetAssetUploadUrlResponse__StaticFields {
};
struct GetAssetUploadUrlResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetAssetUploadUrlResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetAssetUploadUrlResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse___VTable vtable;
};

struct GetBuildRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildId;
};
struct GetBuildRequest {
  struct GetBuildRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetBuildRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___Fields fields;
};
struct GetBuildResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * BuildId;
  struct String * BuildName;
  struct String * BuildStatus;
  struct Nullable_1_PlayFab_MultiplayerModels_ContainerFlavor_ ContainerFlavor;
  struct String * ContainerRunCommand;
  struct Nullable_1_DateTime_ CreationTime;
  struct ContainerImageReference * CustomGameContainerImage;
  struct List_1_PlayFab_MultiplayerModels_AssetReference_ * GameAssetReferences;
  struct List_1_PlayFab_MultiplayerModels_GameCertificateReference_ * GameCertificateReferences;
  struct Dictionary_2_System_String_System_String_ * Metadata;
  int32_t MultiplayerServerCountPerVm;
  struct List_1_PlayFab_MultiplayerModels_Port_ * Ports;
  struct List_1_PlayFab_MultiplayerModels_BuildRegion_ * RegionConfigurations;
  struct String * StartMultiplayerServerCommand;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureVmSize_ VmSize;
};
struct GetBuildResponse {
  struct GetBuildResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetBuildResponse__Fields fields;
};
struct GetBuildRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetBuildRequest__StaticFields {
};
struct GetBuildRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetBuildRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetBuildRequest__VTable vtable;
};
struct GetBuildResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetBuildResponse__StaticFields {
};
struct GetBuildResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetBuildResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetBuildResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetBuildResponse___VTable vtable;
};

struct GetContainerRegistryCredentialsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
};
struct GetContainerRegistryCredentialsRequest {
  struct GetContainerRegistryCredentialsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetContainerRegistryCredentialsRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___Fields fields;
};
struct GetContainerRegistryCredentialsResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * DnsName;
  struct String * Password;
  struct String * Username;
};
struct GetContainerRegistryCredentialsResponse {
  struct GetContainerRegistryCredentialsResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetContainerRegistryCredentialsResponse__Fields fields;
};
struct GetContainerRegistryCredentialsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetContainerRegistryCredentialsRequest__StaticFields {
};
struct GetContainerRegistryCredentialsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetContainerRegistryCredentialsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetContainerRegistryCredentialsRequest__VTable vtable;
};
struct GetContainerRegistryCredentialsResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetContainerRegistryCredentialsResponse__StaticFields {
};
struct GetContainerRegistryCredentialsResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetContainerRegistryCredentialsResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetContainerRegistryCredentialsResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse___VTable vtable;
};

struct GetMatchRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  bool EscapeObject;
  struct String * MatchId;
  struct String * QueueName;
  bool ReturnMemberAttributes;
};
struct GetMatchRequest {
  struct GetMatchRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchResult_ {
  struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___Fields fields;
};
struct GetMatchResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * MatchId;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment_ * Members;
  struct List_1_System_String_ * RegionPreferences;
  struct ServerDetails * ServerDetails;
};
struct GetMatchResult {
  struct GetMatchResult__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Fields {
  struct MatchmakingPlayerWithTeamAssignment__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment_ {
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Fields fields;
};
struct __declspec(align(8)) MatchmakingPlayerWithTeamAssignment__Fields {
  struct MatchmakingPlayerAttributes * Attributes;
  struct EntityKey_6 * Entity;
  struct String * TeamId;
};
struct MatchmakingPlayerWithTeamAssignment {
  struct MatchmakingPlayerWithTeamAssignment__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingPlayerWithTeamAssignment__Fields fields;
};
struct MatchmakingPlayerWithTeamAssignment__Array {
  struct MatchmakingPlayerWithTeamAssignment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MatchmakingPlayerWithTeamAssignment * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ServerDetails__Fields {
  struct String * IPV4Address;
  struct List_1_PlayFab_MultiplayerModels_Port_ * Ports;
};
struct ServerDetails {
  struct ServerDetails__Class *klass;
  struct MonitorData *monitor;
  struct ServerDetails__Fields fields;
};
struct GetMatchRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchRequest__StaticFields {
};
struct GetMatchRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchRequest__VTable vtable;
};
struct MatchmakingPlayerWithTeamAssignment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingPlayerWithTeamAssignment__StaticFields {
};
struct MatchmakingPlayerWithTeamAssignment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingPlayerWithTeamAssignment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingPlayerWithTeamAssignment__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___VTable {
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
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___StaticFields {
  struct MatchmakingPlayerWithTeamAssignment__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayerWithTeamAssignment___VTable vtable;
};
struct ServerDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerDetails__StaticFields {
};
struct ServerDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerDetails__VTable vtable;
};
struct GetMatchResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchResult__StaticFields {
};
struct GetMatchResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchResult___VTable vtable;
};

struct GetMatchmakingQueueRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * QueueName;
};
struct GetMatchmakingQueueRequest {
  struct GetMatchmakingQueueRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchmakingQueueRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_ {
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___Fields fields;
};
struct GetMatchmakingQueueResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct MatchmakingQueueConfig * MatchmakingQueue;
};
struct GetMatchmakingQueueResult {
  struct GetMatchmakingQueueResult__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchmakingQueueResult__Fields fields;
};
struct __declspec(align(8)) MatchmakingQueueConfig__Fields {
  struct String * BuildId;
  uint32_t MaxMatchSize;
  uint32_t MinMatchSize;
  struct String * Name;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_ * Rules;
  bool ServerAllocationEnabled;
  struct StatisticsVisibilityToPlayers * StatisticsVisibilityToPlayers;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_ * Teams;
};
struct MatchmakingQueueConfig {
  struct MatchmakingQueueConfig__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingQueueConfig__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Fields {
  struct MatchmakingQueueRule__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_ {
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Fields fields;
};
enum RuleType__Enum : int32_t {
  RuleType__Enum_Unknown = 0,
  RuleType__Enum_DifferenceRule = 1,
  RuleType__Enum_StringEqualityRule = 2,
  RuleType__Enum_MatchTotalRule = 3,
  RuleType__Enum_SetIntersectionRule = 4,
  RuleType__Enum_TeamSizeBalanceRule = 5,
  RuleType__Enum_RegionSelectionRule = 6,
  RuleType__Enum_TeamDifferenceRule = 7,
  RuleType__Enum_TeamTicketSizeSimilarityRule = 8,
};
struct RuleType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RuleType__Enum value;
};
struct __declspec(align(8)) MatchmakingQueueRule__Fields {
  struct String * Name;
  struct Nullable_1_UInt32_ SecondsUntilOptional;
  enum RuleType__Enum Type;
};
struct MatchmakingQueueRule {
  struct MatchmakingQueueRule__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingQueueRule__Fields fields;
};
struct MatchmakingQueueRule__Array {
  struct MatchmakingQueueRule__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MatchmakingQueueRule * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) StatisticsVisibilityToPlayers__Fields {
  bool ShowNumberOfPlayersMatching;
  bool ShowTimeToMatch;
};
struct StatisticsVisibilityToPlayers {
  struct StatisticsVisibilityToPlayers__Class *klass;
  struct MonitorData *monitor;
  struct StatisticsVisibilityToPlayers__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Fields {
  struct MatchmakingQueueTeam__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_ {
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Fields fields;
};
struct __declspec(align(8)) MatchmakingQueueTeam__Fields {
  uint32_t MaxTeamSize;
  uint32_t MinTeamSize;
  struct String * Name;
};
struct MatchmakingQueueTeam {
  struct MatchmakingQueueTeam__Class *klass;
  struct MonitorData *monitor;
  struct MatchmakingQueueTeam__Fields fields;
};
struct MatchmakingQueueTeam__Array {
  struct MatchmakingQueueTeam__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MatchmakingQueueTeam * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Class *klass;
  struct MonitorData *monitor;
};
struct GetMatchmakingQueueRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchmakingQueueRequest__StaticFields {
};
struct GetMatchmakingQueueRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchmakingQueueRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchmakingQueueRequest__VTable vtable;
};
struct MatchmakingQueueRule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingQueueRule__StaticFields {
};
struct MatchmakingQueueRule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingQueueRule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingQueueRule__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___VTable {
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
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___StaticFields {
  struct MatchmakingQueueRule__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueRule___VTable vtable;
};
struct StatisticsVisibilityToPlayers__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticsVisibilityToPlayers__StaticFields {
};
struct StatisticsVisibilityToPlayers__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticsVisibilityToPlayers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticsVisibilityToPlayers__VTable vtable;
};
struct MatchmakingQueueTeam__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingQueueTeam__StaticFields {
};
struct MatchmakingQueueTeam__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingQueueTeam__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingQueueTeam__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___VTable {
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
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___StaticFields {
  struct MatchmakingQueueTeam__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingQueueTeam___VTable vtable;
};
struct MatchmakingQueueConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchmakingQueueConfig__StaticFields {
};
struct MatchmakingQueueConfig__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchmakingQueueConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchmakingQueueConfig__VTable vtable;
};
struct GetMatchmakingQueueResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchmakingQueueResult__StaticFields {
};
struct GetMatchmakingQueueResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchmakingQueueResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchmakingQueueResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult___VTable vtable;
};

struct GetMatchmakingTicketRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  bool EscapeObject;
  struct String * QueueName;
  struct String * TicketId;
};
struct GetMatchmakingTicketRequest {
  struct GetMatchmakingTicketRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchmakingTicketRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_ {
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___Fields fields;
};
enum CancellationReason__Enum : int32_t {
  CancellationReason__Enum_Requested = 0,
  CancellationReason__Enum_Internal = 1,
  CancellationReason__Enum_Timeout = 2,
};
struct CancellationReason__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CancellationReason__Enum value;
};
struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason_ {
  enum CancellationReason__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___Boxed {
  struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason_ fields;
};
struct GetMatchmakingTicketResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason_ CancellationReason;
  struct DateTime Created;
  struct EntityKey_6 * Creator;
  int32_t GiveUpAfterSeconds;
  struct String * MatchId;
  struct List_1_PlayFab_MultiplayerModels_MatchmakingPlayer_ * Members;
  struct List_1_PlayFab_MultiplayerModels_EntityKey_ * MembersToMatchWith;
  struct String * QueueName;
  struct String * Status;
  struct String * TicketId;
};
struct GetMatchmakingTicketResult {
  struct GetMatchmakingTicketResult__Class *klass;
  struct MonitorData *monitor;
  struct GetMatchmakingTicketResult__Fields fields;
};
struct GetMatchmakingTicketRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchmakingTicketRequest__StaticFields {
};
struct GetMatchmakingTicketRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchmakingTicketRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchmakingTicketRequest__VTable vtable;
};
struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___StaticFields {
};
struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_MultiplayerModels_CancellationReason___VTable vtable;
};
struct GetMatchmakingTicketResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMatchmakingTicketResult__StaticFields {
};
struct GetMatchmakingTicketResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMatchmakingTicketResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMatchmakingTicketResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult___VTable vtable;
};

struct GetMultiplayerServerDetailsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildId;
  enum AzureRegion__Enum Region;
  struct String * SessionId;
};
struct GetMultiplayerServerDetailsRequest {
  struct GetMultiplayerServerDetailsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetMultiplayerServerDetailsRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___Fields {
  struct MulticastDelegate__Fields _;
};}