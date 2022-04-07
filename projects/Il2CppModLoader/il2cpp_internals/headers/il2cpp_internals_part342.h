namespace app {
struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___Fields fields;
};
struct GetMultiplayerServerDetailsResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_ * ConnectedPlayers;
  struct String * FQDN;
  struct String * IPV4Address;
  struct Nullable_1_DateTime_ LastStateTransitionTime;
  struct List_1_PlayFab_MultiplayerModels_Port_ * Ports;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region;
  struct String * ServerId;
  struct String * SessionId;
  struct String * State;
  struct String * VmId;
};
struct GetMultiplayerServerDetailsResponse {
  struct GetMultiplayerServerDetailsResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetMultiplayerServerDetailsResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_ConnectedPlayer___Fields {
  struct ConnectedPlayer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_ {
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___Fields fields;
};
struct __declspec(align(8)) ConnectedPlayer__Fields {
  struct String * PlayerId;
};
struct ConnectedPlayer {
  struct ConnectedPlayer__Class *klass;
  struct MonitorData *monitor;
  struct ConnectedPlayer__Fields fields;
};
struct ConnectedPlayer__Array {
  struct ConnectedPlayer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConnectedPlayer * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___Class *klass;
  struct MonitorData *monitor;
};
struct GetMultiplayerServerDetailsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMultiplayerServerDetailsRequest__StaticFields {
};
struct GetMultiplayerServerDetailsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMultiplayerServerDetailsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMultiplayerServerDetailsRequest__VTable vtable;
};
struct ConnectedPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConnectedPlayer__StaticFields {
};
struct ConnectedPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConnectedPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConnectedPlayer__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_ConnectedPlayer___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___VTable {
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
struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___StaticFields {
  struct ConnectedPlayer__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer___VTable vtable;
};
struct GetMultiplayerServerDetailsResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetMultiplayerServerDetailsResponse__StaticFields {
};
struct GetMultiplayerServerDetailsResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetMultiplayerServerDetailsResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetMultiplayerServerDetailsResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse___VTable vtable;
};

struct GetQueueStatisticsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * QueueName;
};
struct GetQueueStatisticsRequest {
  struct GetQueueStatisticsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetQueueStatisticsRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_ {
  struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___Fields fields;
};
struct GetQueueStatisticsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Nullable_1_UInt32_ NumberOfPlayersMatching;
  struct Statistics * TimeToMatchStatisticsInSeconds;
};
struct GetQueueStatisticsResult {
  struct GetQueueStatisticsResult__Class *klass;
  struct MonitorData *monitor;
  struct GetQueueStatisticsResult__Fields fields;
};
struct __declspec(align(8)) Statistics__Fields {
  double Average;
  double Percentile50;
  double Percentile90;
  double Percentile99;
};
struct Statistics {
  struct Statistics__Class *klass;
  struct MonitorData *monitor;
  struct Statistics__Fields fields;
};
struct GetQueueStatisticsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetQueueStatisticsRequest__StaticFields {
};
struct GetQueueStatisticsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetQueueStatisticsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetQueueStatisticsRequest__VTable vtable;
};
struct Statistics__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Statistics__StaticFields {
};
struct Statistics__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Statistics__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Statistics__VTable vtable;
};
struct GetQueueStatisticsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetQueueStatisticsResult__StaticFields {
};
struct GetQueueStatisticsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetQueueStatisticsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetQueueStatisticsResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult___VTable vtable;
};

struct GetRemoteLoginEndpointRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildId;
  enum AzureRegion__Enum Region;
  struct String * VmId;
};
struct GetRemoteLoginEndpointRequest {
  struct GetRemoteLoginEndpointRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetRemoteLoginEndpointRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___Fields fields;
};
struct GetRemoteLoginEndpointResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * IPV4Address;
  int32_t Port;
};
struct GetRemoteLoginEndpointResponse {
  struct GetRemoteLoginEndpointResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetRemoteLoginEndpointResponse__Fields fields;
};
struct GetRemoteLoginEndpointRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetRemoteLoginEndpointRequest__StaticFields {
};
struct GetRemoteLoginEndpointRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetRemoteLoginEndpointRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetRemoteLoginEndpointRequest__VTable vtable;
};
struct GetRemoteLoginEndpointResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetRemoteLoginEndpointResponse__StaticFields {
};
struct GetRemoteLoginEndpointResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetRemoteLoginEndpointResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetRemoteLoginEndpointResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse___VTable vtable;
};

struct GetTitleEnabledForMultiplayerServersStatusRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
};
struct GetTitleEnabledForMultiplayerServersStatusRequest {
  struct GetTitleEnabledForMultiplayerServersStatusRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleEnabledForMultiplayerServersStatusRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___Fields fields;
};
struct GetTitleEnabledForMultiplayerServersStatusResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Nullable_1_PlayFab_MultiplayerModels_TitleMultiplayerServerEnabledStatus_ Status;
};
struct GetTitleEnabledForMultiplayerServersStatusResponse {
  struct GetTitleEnabledForMultiplayerServersStatusResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetTitleEnabledForMultiplayerServersStatusResponse__Fields fields;
};
struct GetTitleEnabledForMultiplayerServersStatusRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleEnabledForMultiplayerServersStatusRequest__StaticFields {
};
struct GetTitleEnabledForMultiplayerServersStatusRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleEnabledForMultiplayerServersStatusRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleEnabledForMultiplayerServersStatusRequest__VTable vtable;
};
struct GetTitleEnabledForMultiplayerServersStatusResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetTitleEnabledForMultiplayerServersStatusResponse__StaticFields {
};
struct GetTitleEnabledForMultiplayerServersStatusResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetTitleEnabledForMultiplayerServersStatusResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetTitleEnabledForMultiplayerServersStatusResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse___VTable vtable;
};

struct JoinMatchmakingTicketRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct MatchmakingPlayer * Member;
  struct String * QueueName;
  struct String * TicketId;
};
struct JoinMatchmakingTicketRequest {
  struct JoinMatchmakingTicketRequest__Class *klass;
  struct MonitorData *monitor;
  struct JoinMatchmakingTicketRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_ {
  struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___Fields fields;
};
struct JoinMatchmakingTicketResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct JoinMatchmakingTicketResult {
  struct JoinMatchmakingTicketResult__Class *klass;
  struct MonitorData *monitor;
  struct JoinMatchmakingTicketResult__Fields fields;
};
struct JoinMatchmakingTicketRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JoinMatchmakingTicketRequest__StaticFields {
};
struct JoinMatchmakingTicketRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JoinMatchmakingTicketRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JoinMatchmakingTicketRequest__VTable vtable;
};
struct JoinMatchmakingTicketResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JoinMatchmakingTicketResult__StaticFields {
};
struct JoinMatchmakingTicketResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JoinMatchmakingTicketResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JoinMatchmakingTicketResult__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult___VTable vtable;
};

struct ListMultiplayerServersRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildId;
  struct Nullable_1_Int32_ PageSize;
  enum AzureRegion__Enum Region;
  struct String * SkipToken;
};
struct ListMultiplayerServersRequest {
  struct ListMultiplayerServersRequest__Class *klass;
  struct MonitorData *monitor;
  struct ListMultiplayerServersRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Fields fields;
};
struct ListMultiplayerServersResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_ * MultiplayerServerSummaries;
  int32_t PageSize;
  struct String * SkipToken;
};
struct ListMultiplayerServersResponse {
  struct ListMultiplayerServersResponse__Class *klass;
  struct MonitorData *monitor;
  struct ListMultiplayerServersResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Fields {
  struct MultiplayerServerSummary__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_ {
  struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Fields fields;
};
struct __declspec(align(8)) MultiplayerServerSummary__Fields {
  struct List_1_PlayFab_MultiplayerModels_ConnectedPlayer_ * ConnectedPlayers;
  struct Nullable_1_DateTime_ LastStateTransitionTime;
  struct Nullable_1_PlayFab_MultiplayerModels_AzureRegion_ Region;
  struct String * ServerId;
  struct String * SessionId;
  struct String * State;
  struct String * VmId;
};
struct MultiplayerServerSummary {
  struct MultiplayerServerSummary__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerSummary__Fields fields;
};
struct MultiplayerServerSummary__Array {
  struct MultiplayerServerSummary__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MultiplayerServerSummary * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class *klass;
  struct MonitorData *monitor;
};
struct ListMultiplayerServersRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListMultiplayerServersRequest__StaticFields {
};
struct ListMultiplayerServersRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListMultiplayerServersRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListMultiplayerServersRequest__VTable vtable;
};
struct MultiplayerServerSummary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerSummary__StaticFields {
};
struct MultiplayerServerSummary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerSummary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerSummary__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable {
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
struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields {
  struct MultiplayerServerSummary__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_MultiplayerServerSummary___VTable vtable;
};
struct ListMultiplayerServersResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListMultiplayerServersResponse__StaticFields {
};
struct ListMultiplayerServersResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListMultiplayerServersResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListMultiplayerServersResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse___VTable vtable;
};

struct ListAssetSummariesRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Int32_ PageSize;
  struct String * SkipToken;
};
struct ListAssetSummariesRequest {
  struct ListAssetSummariesRequest__Class *klass;
  struct MonitorData *monitor;
  struct ListAssetSummariesRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Fields fields;
};
struct ListAssetSummariesResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_MultiplayerModels_AssetSummary_ * AssetSummaries;
  int32_t PageSize;
  struct String * SkipToken;
};
struct ListAssetSummariesResponse {
  struct ListAssetSummariesResponse__Class *klass;
  struct MonitorData *monitor;
  struct ListAssetSummariesResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_AssetSummary___Fields {
  struct AssetSummary__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_MultiplayerModels_AssetSummary_ {
  struct List_1_PlayFab_MultiplayerModels_AssetSummary___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_MultiplayerModels_AssetSummary___Fields fields;
};
struct __declspec(align(8)) AssetSummary__Fields {
  struct String * FileName;
  struct Dictionary_2_System_String_System_String_ * Metadata;
};
struct AssetSummary {
  struct AssetSummary__Class *klass;
  struct MonitorData *monitor;
  struct AssetSummary__Fields fields;
};
struct AssetSummary__Array {
  struct AssetSummary__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AssetSummary * vector[32];
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary_ {
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___Class *klass;
  struct MonitorData *monitor;
};
struct ListAssetSummariesRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListAssetSummariesRequest__StaticFields {
};
struct ListAssetSummariesRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListAssetSummariesRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListAssetSummariesRequest__VTable vtable;
};
struct AssetSummary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AssetSummary__StaticFields {
};
struct AssetSummary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssetSummary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssetSummary__VTable vtable;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields {
};
struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_MultiplayerModels_AssetSummary___VTable vtable;
};
struct List_1_PlayFab_MultiplayerModels_AssetSummary___VTable {
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
struct List_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields {
  struct AssetSummary__Array * _emptyArray;
};
struct List_1_PlayFab_MultiplayerModels_AssetSummary___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_MultiplayerModels_AssetSummary___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_MultiplayerModels_AssetSummary___VTable vtable;
};
struct ListAssetSummariesResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListAssetSummariesResponse__StaticFields {
};
struct ListAssetSummariesResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListAssetSummariesResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListAssetSummariesResponse__VTable vtable;
};
struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___VTable {
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
struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___StaticFields {
};
struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse___VTable vtable;
};

struct ListBuildSummariesRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Int32_ PageSize;
  struct String * SkipToken;
};
struct ListBuildSummariesRequest {
  struct ListBuildSummariesRequest__Class *klass;
  struct MonitorData *monitor;
  struct ListBuildSummariesRequest__Fields fields;
};
struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_ {
  struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse___Fields fields;
};
struct ListBuildSummariesResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_MultiplayerModels_BuildSummary_ * BuildSummaries;
  int32_t PageSize;
  struct String * SkipToken;
};
struct ListBuildSummariesResponse {
  struct ListBuildSummariesResponse__Class *klass;
  struct MonitorData *monitor;
  struct ListBuildSummariesResponse__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_MultiplayerModels_BuildSummary___Fields {
  struct BuildSummary__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};}