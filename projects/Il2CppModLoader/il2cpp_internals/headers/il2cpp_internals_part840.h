namespace app {
struct __declspec(align(8)) gameserveritem_t__Fields {
  struct servernetadr_t m_NetAdr;
  int32_t m_nPing;
  bool m_bHadSuccessfulResponse;
  bool m_bDoNotRefresh;
  struct Byte__Array * m_szGameDir;
  struct Byte__Array * m_szMap;
  struct Byte__Array * m_szGameDescription;
  uint32_t m_nAppID;
  int32_t m_nPlayers;
  int32_t m_nMaxPlayers;
  int32_t m_nBotPlayers;
  bool m_bPassword;
  bool m_bSecure;
  uint32_t m_ulTimeLastPlayed;
  int32_t m_nServerVersion;
  struct Byte__Array * m_szServerName;
  struct Byte__Array * m_szGameTags;
  struct CSteamID m_steamID;
};
struct gameserveritem_t {
  struct gameserveritem_t__Class *klass;
  struct MonitorData *monitor;
  struct gameserveritem_t__Fields fields;
};
struct servernetadr_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct servernetadr_t__StaticFields {
};
struct servernetadr_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct servernetadr_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct servernetadr_t__VTable vtable;
};
struct gameserveritem_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct gameserveritem_t__StaticFields {
};
struct gameserveritem_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct gameserveritem_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct gameserveritem_t__VTable vtable;
};

struct HServerQuery {
  int32_t m_HServerQuery;
};
struct HServerQuery__Boxed {
  struct HServerQuery__Class *klass;
  struct MonitorData *monitor;
  struct HServerQuery fields;
};
struct __declspec(align(8)) ISteamMatchmakingPingResponse__Fields {
  struct ISteamMatchmakingPingResponse_VTable * m_VTable;
  void * m_pVTable;
  struct GCHandle m_pGCHandle;
  struct ISteamMatchmakingPingResponse_ServerResponded * m_ServerResponded;
  struct ISteamMatchmakingPingResponse_ServerFailedToRespond * m_ServerFailedToRespond;
};
struct ISteamMatchmakingPingResponse {
  struct ISteamMatchmakingPingResponse__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse__Fields fields;
};
struct __declspec(align(8)) ISteamMatchmakingPingResponse_VTable__Fields {
  struct ISteamMatchmakingPingResponse_InternalServerResponded * m_VTServerResponded;
  struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond * m_VTServerFailedToRespond;
};
struct ISteamMatchmakingPingResponse_VTable {
  struct ISteamMatchmakingPingResponse_VTable__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse_VTable__Fields fields;
};
struct ISteamMatchmakingPingResponse_InternalServerResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPingResponse_InternalServerResponded {
  struct ISteamMatchmakingPingResponse_InternalServerResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse_InternalServerResponded__Fields fields;
};
struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
  struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Fields fields;
};
struct ISteamMatchmakingPingResponse_ServerResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPingResponse_ServerResponded {
  struct ISteamMatchmakingPingResponse_ServerResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse_ServerResponded__Fields fields;
};
struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPingResponse_ServerFailedToRespond {
  struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Fields fields;
};
struct HServerQuery__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HServerQuery__StaticFields {
  struct HServerQuery Invalid;
};
struct HServerQuery__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HServerQuery__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HServerQuery__VTable vtable;
};
struct ISteamMatchmakingPingResponse_InternalServerResponded__VTable {
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
struct ISteamMatchmakingPingResponse_InternalServerResponded__StaticFields {
};
struct ISteamMatchmakingPingResponse_InternalServerResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse_InternalServerResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse_InternalServerResponded__VTable vtable;
};
struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__VTable {
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
struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__StaticFields {
};
struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse_InternalServerFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingPingResponse_VTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingPingResponse_VTable__StaticFields {
};
struct ISteamMatchmakingPingResponse_VTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse_VTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse_VTable__VTable vtable;
};
struct ISteamMatchmakingPingResponse_ServerResponded__VTable {
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
struct ISteamMatchmakingPingResponse_ServerResponded__StaticFields {
};
struct ISteamMatchmakingPingResponse_ServerResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse_ServerResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse_ServerResponded__VTable vtable;
};
struct ISteamMatchmakingPingResponse_ServerFailedToRespond__VTable {
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
struct ISteamMatchmakingPingResponse_ServerFailedToRespond__StaticFields {
};
struct ISteamMatchmakingPingResponse_ServerFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse_ServerFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse_ServerFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingPingResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingPingResponse__StaticFields {
};
struct ISteamMatchmakingPingResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPingResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPingResponse__VTable vtable;
};

struct __declspec(align(8)) ISteamMatchmakingPlayersResponse__Fields {
  struct ISteamMatchmakingPlayersResponse_VTable * m_VTable;
  void * m_pVTable;
  struct GCHandle m_pGCHandle;
  struct ISteamMatchmakingPlayersResponse_AddPlayerToList * m_AddPlayerToList;
  struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond * m_PlayersFailedToRespond;
  struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * m_PlayersRefreshComplete;
};
struct ISteamMatchmakingPlayersResponse {
  struct ISteamMatchmakingPlayersResponse__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse__Fields fields;
};
struct __declspec(align(8)) ISteamMatchmakingPlayersResponse_VTable__Fields {
  struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList * m_VTAddPlayerToList;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond * m_VTPlayersFailedToRespond;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * m_VTPlayersRefreshComplete;
};
struct ISteamMatchmakingPlayersResponse_VTable {
  struct ISteamMatchmakingPlayersResponse_VTable__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_VTable__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
  struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
  struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
  struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_AddPlayerToList {
  struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond {
  struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete {
  struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Fields fields;
};
struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__VTable {
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
struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_InternalAddPlayerToList__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__VTable {
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
struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__VTable {
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
struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_VTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingPlayersResponse_VTable__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_VTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_VTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_VTable__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_AddPlayerToList__VTable {
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
struct ISteamMatchmakingPlayersResponse_AddPlayerToList__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_AddPlayerToList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_AddPlayerToList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_AddPlayerToList__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__VTable {
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
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_PlayersFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__VTable {
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
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__StaticFields {
};
struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse_PlayersRefreshComplete__VTable vtable;
};
struct ISteamMatchmakingPlayersResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingPlayersResponse__StaticFields {
};
struct ISteamMatchmakingPlayersResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingPlayersResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingPlayersResponse__VTable vtable;
};

struct __declspec(align(8)) ISteamMatchmakingRulesResponse__Fields {
  struct ISteamMatchmakingRulesResponse_VTable * m_VTable;
  void * m_pVTable;
  struct GCHandle m_pGCHandle;
  struct ISteamMatchmakingRulesResponse_RulesResponded * m_RulesResponded;
  struct ISteamMatchmakingRulesResponse_RulesFailedToRespond * m_RulesFailedToRespond;
  struct ISteamMatchmakingRulesResponse_RulesRefreshComplete * m_RulesRefreshComplete;
};
struct ISteamMatchmakingRulesResponse {
  struct ISteamMatchmakingRulesResponse__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse__Fields fields;
};
struct __declspec(align(8)) ISteamMatchmakingRulesResponse_VTable__Fields {
  struct ISteamMatchmakingRulesResponse_InternalRulesResponded * m_VTRulesResponded;
  struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond * m_VTRulesFailedToRespond;
  struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete * m_VTRulesRefreshComplete;
};
struct ISteamMatchmakingRulesResponse_VTable {
  struct ISteamMatchmakingRulesResponse_VTable__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_VTable__Fields fields;
};
struct ISteamMatchmakingRulesResponse_InternalRulesResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_InternalRulesResponded {
  struct ISteamMatchmakingRulesResponse_InternalRulesResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_InternalRulesResponded__Fields fields;
};
struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond {
  struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Fields fields;
};
struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete {
  struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Fields fields;
};
struct ISteamMatchmakingRulesResponse_RulesResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_RulesResponded {
  struct ISteamMatchmakingRulesResponse_RulesResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_RulesResponded__Fields fields;
};
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond {
  struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__Fields fields;
};
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete {
  struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__Fields fields;
};
struct ISteamMatchmakingRulesResponse_InternalRulesResponded__VTable {
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
struct ISteamMatchmakingRulesResponse_InternalRulesResponded__StaticFields {
};
struct ISteamMatchmakingRulesResponse_InternalRulesResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_InternalRulesResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_InternalRulesResponded__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__VTable {
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
struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__StaticFields {
};
struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__VTable {
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
struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__StaticFields {
};
struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_InternalRulesRefreshComplete__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_VTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingRulesResponse_VTable__StaticFields {
};
struct ISteamMatchmakingRulesResponse_VTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_VTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_VTable__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_RulesResponded__VTable {
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
struct ISteamMatchmakingRulesResponse_RulesResponded__StaticFields {
};
struct ISteamMatchmakingRulesResponse_RulesResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_RulesResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_RulesResponded__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__VTable {
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
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__StaticFields {
};
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_RulesFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__VTable {
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
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__StaticFields {
};
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse_RulesRefreshComplete__VTable vtable;
};
struct ISteamMatchmakingRulesResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingRulesResponse__StaticFields {
};
struct ISteamMatchmakingRulesResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingRulesResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingRulesResponse__VTable vtable;
};

enum EGameSearchErrorCode_t__Enum : int32_t {
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_OK = 1,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_Search_Already_In_Progress = 2,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_No_Search_In_Progress = 3,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_Not_Lobby_Leader = 4,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_No_Host_Available = 5,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_Search_Params_Invalid = 6,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_Offline = 7,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_NotAuthorized = 8,
  EGameSearchErrorCode_t__Enum_k_EGameSearchErrorCode_Failed_Unknown_Error = 9,
};
struct EGameSearchErrorCode_t__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EGameSearchErrorCode_t__Enum value;
};

enum EPlayerResult_t__Enum : int32_t {
  EPlayerResult_t__Enum_k_EPlayerResultFailedToConnect = 1,
  EPlayerResult_t__Enum_k_EPlayerResultAbandoned = 2,
  EPlayerResult_t__Enum_k_EPlayerResultKicked = 3,
  EPlayerResult_t__Enum_k_EPlayerResultIncomplete = 4,
  EPlayerResult_t__Enum_k_EPlayerResultCompleted = 5,
};
struct EPlayerResult_t__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EPlayerResult_t__Enum value;
};

struct PartyBeaconID_t {
  uint64_t m_PartyBeaconID;
};
struct PartyBeaconID_t__Boxed {
  struct PartyBeaconID_t__Class *klass;
  struct MonitorData *monitor;
  struct PartyBeaconID_t fields;
};
struct PartyBeaconID_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct PartyBeaconID_t__StaticFields {
  struct PartyBeaconID_t Invalid;
};
struct PartyBeaconID_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PartyBeaconID_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PartyBeaconID_t__VTable vtable;
};

enum ESteamPartyBeaconLocationType__Enum : int32_t {
  ESteamPartyBeaconLocationType__Enum_k_ESteamPartyBeaconLocationType_Invalid = 0,
  ESteamPartyBeaconLocationType__Enum_k_ESteamPartyBeaconLocationType_ChatGroup = 1,
  ESteamPartyBeaconLocationType__Enum_k_ESteamPartyBeaconLocationType_Max = 2,
};
struct ESteamPartyBeaconLocationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamPartyBeaconLocationType__Enum value;
};
struct SteamPartyBeaconLocation_t {
  enum ESteamPartyBeaconLocationType__Enum m_eType;
  uint64_t m_ulLocationID;
};
struct SteamPartyBeaconLocation_t__Boxed {
  struct SteamPartyBeaconLocation_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamPartyBeaconLocation_t fields;
};
struct SteamPartyBeaconLocation_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SteamPartyBeaconLocation_t__StaticFields {
};
struct SteamPartyBeaconLocation_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamPartyBeaconLocation_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamPartyBeaconLocation_t__VTable vtable;
};

struct SteamPartyBeaconLocation_t__Array {
  struct SteamPartyBeaconLocation_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SteamPartyBeaconLocation_t vector[32];
};

enum ESteamPartyBeaconLocationData__Enum : int32_t {
  ESteamPartyBeaconLocationData__Enum_k_ESteamPartyBeaconLocationDataInvalid = 0,
  ESteamPartyBeaconLocationData__Enum_k_ESteamPartyBeaconLocationDataName = 1,
  ESteamPartyBeaconLocationData__Enum_k_ESteamPartyBeaconLocationDataIconURLSmall = 2,
  ESteamPartyBeaconLocationData__Enum_k_ESteamPartyBeaconLocationDataIconURLMedium = 3,
  ESteamPartyBeaconLocationData__Enum_k_ESteamPartyBeaconLocationDataIconURLLarge = 4,
};
struct ESteamPartyBeaconLocationData__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamPartyBeaconLocationData__Enum value;
};

enum AudioPlayback_Status__Enum : int32_t {
  AudioPlayback_Status__Enum_AudioPlayback_Undefined = 0,
  AudioPlayback_Status__Enum_AudioPlayback_Playing = 1,
  AudioPlayback_Status__Enum_AudioPlayback_Paused = 2,
  AudioPlayback_Status__Enum_AudioPlayback_Idle = 3,
};
struct AudioPlayback_Status__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AudioPlayback_Status__Enum value;
};

enum EParentalFeature__Enum : int32_t {
  EParentalFeature__Enum_k_EFeatureInvalid = 0,
  EParentalFeature__Enum_k_EFeatureStore = 1,
  EParentalFeature__Enum_k_EFeatureCommunity = 2,
  EParentalFeature__Enum_k_EFeatureProfile = 3,
  EParentalFeature__Enum_k_EFeatureFriends = 4,
  EParentalFeature__Enum_k_EFeatureNews = 5,
  EParentalFeature__Enum_k_EFeatureTrading = 6,
  EParentalFeature__Enum_k_EFeatureSettings = 7,
  EParentalFeature__Enum_k_EFeatureConsole = 8,
  EParentalFeature__Enum_k_EFeatureBrowser = 9,
  EParentalFeature__Enum_k_EFeatureParentalSetup = 10,
  EParentalFeature__Enum_k_EFeatureLibrary = 11,
  EParentalFeature__Enum_k_EFeatureTest = 12,
  EParentalFeature__Enum_k_EFeatureMax = 13,
};
struct EParentalFeature__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EParentalFeature__Enum value;
};

enum ESteamDeviceFormFactor__Enum : int32_t {
  ESteamDeviceFormFactor__Enum_k_ESteamDeviceFormFactorUnknown = 0,
  ESteamDeviceFormFactor__Enum_k_ESteamDeviceFormFactorPhone = 1,
  ESteamDeviceFormFactor__Enum_k_ESteamDeviceFormFactorTablet = 2,
  ESteamDeviceFormFactor__Enum_k_ESteamDeviceFormFactorComputer = 3,
  ESteamDeviceFormFactor__Enum_k_ESteamDeviceFormFactorTV = 4,
};
struct ESteamDeviceFormFactor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamDeviceFormFactor__Enum value;
};

enum ERemoteStoragePlatform__Enum : int32_t {
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformNone = 0,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformWindows = 1,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformOSX = 2,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformPS3 = 4,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformLinux = 8,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformReserved2 = 16,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformAndroid = 32,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformIOS = 64,
  ERemoteStoragePlatform__Enum_k_ERemoteStoragePlatformAll = -1,
};
struct ERemoteStoragePlatform__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ERemoteStoragePlatform__Enum value;
};

struct UGCFileWriteStreamHandle_t {
  uint64_t m_UGCFileWriteStreamHandle;
};
struct UGCFileWriteStreamHandle_t__Boxed {
  struct UGCFileWriteStreamHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct UGCFileWriteStreamHandle_t fields;
};
struct UGCFileWriteStreamHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};}