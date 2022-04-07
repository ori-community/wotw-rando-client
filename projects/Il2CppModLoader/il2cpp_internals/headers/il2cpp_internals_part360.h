namespace app {
struct Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult___VTable vtable;
};

struct RefreshGameServerInstanceHeartbeatRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * LobbyId;
};
struct RefreshGameServerInstanceHeartbeatRequest {
  struct RefreshGameServerInstanceHeartbeatRequest__Class *klass;
  struct MonitorData *monitor;
  struct RefreshGameServerInstanceHeartbeatRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_ {
  struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___Fields fields;
};
struct RefreshGameServerInstanceHeartbeatResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct RefreshGameServerInstanceHeartbeatResult {
  struct RefreshGameServerInstanceHeartbeatResult__Class *klass;
  struct MonitorData *monitor;
  struct RefreshGameServerInstanceHeartbeatResult__Fields fields;
};
struct RefreshGameServerInstanceHeartbeatRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RefreshGameServerInstanceHeartbeatRequest__StaticFields {
};
struct RefreshGameServerInstanceHeartbeatRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RefreshGameServerInstanceHeartbeatRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RefreshGameServerInstanceHeartbeatRequest__VTable vtable;
};
struct RefreshGameServerInstanceHeartbeatResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RefreshGameServerInstanceHeartbeatResult__StaticFields {
};
struct RefreshGameServerInstanceHeartbeatResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RefreshGameServerInstanceHeartbeatResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RefreshGameServerInstanceHeartbeatResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult___VTable vtable;
};

enum Region__Enum_2 : int32_t {
  Region__Enum_2_USCentral = 0,
  Region__Enum_2_USEast = 1,
  Region__Enum_2_EUWest = 2,
  Region__Enum_2_Singapore = 3,
  Region__Enum_2_Japan = 4,
  Region__Enum_2_Brazil = 5,
  Region__Enum_2_Australia = 6,
};
struct Region__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Region__Enum_2 value;
};
struct RegisterGameRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Build;
  struct String * GameMode;
  struct String * LobbyId;
  enum Region__Enum_2 Region;
  struct String * ServerIPV4Address;
  struct String * ServerIPV6Address;
  struct String * ServerPort;
  struct String * ServerPublicDNSName;
  struct Dictionary_2_System_String_System_String_ * Tags;
};
struct RegisterGameRequest {
  struct RegisterGameRequest__Class *klass;
  struct MonitorData *monitor;
  struct RegisterGameRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RegisterGameResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RegisterGameResponse_ {
  struct Action_1_PlayFab_ServerModels_RegisterGameResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RegisterGameResponse___Fields fields;
};
struct RegisterGameResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * LobbyId;
};
struct RegisterGameResponse {
  struct RegisterGameResponse__Class *klass;
  struct MonitorData *monitor;
  struct RegisterGameResponse__Fields fields;
};
struct RegisterGameRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegisterGameRequest__StaticFields {
};
struct RegisterGameRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegisterGameRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegisterGameRequest__VTable vtable;
};
struct RegisterGameResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegisterGameResponse__StaticFields {
};
struct RegisterGameResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegisterGameResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegisterGameResponse__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RegisterGameResponse___VTable {
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
struct Action_1_PlayFab_ServerModels_RegisterGameResponse___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RegisterGameResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RegisterGameResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RegisterGameResponse___VTable vtable;
};

struct RemoveFriendRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * FriendPlayFabId;
  struct String * PlayFabId;
};
struct RemoveFriendRequest_1 {
  struct RemoveFriendRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct RemoveFriendRequest_1__Fields fields;
};
struct RemoveFriendRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoveFriendRequest_1__StaticFields {
};
struct RemoveFriendRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveFriendRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveFriendRequest_1__VTable vtable;
};

struct RemovePlayerTagRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
  struct String * TagName;
};
struct RemovePlayerTagRequest {
  struct RemovePlayerTagRequest__Class *klass;
  struct MonitorData *monitor;
  struct RemovePlayerTagRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult_ {
  struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___Fields fields;
};
struct RemovePlayerTagResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct RemovePlayerTagResult {
  struct RemovePlayerTagResult__Class *klass;
  struct MonitorData *monitor;
  struct RemovePlayerTagResult__Fields fields;
};
struct RemovePlayerTagRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemovePlayerTagRequest__StaticFields {
};
struct RemovePlayerTagRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemovePlayerTagRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemovePlayerTagRequest__VTable vtable;
};
struct RemovePlayerTagResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemovePlayerTagResult__StaticFields {
};
struct RemovePlayerTagResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemovePlayerTagResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemovePlayerTagResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RemovePlayerTagResult___VTable vtable;
};

struct RemoveSharedGroupMembersRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * PlayFabIds;
  struct String * SharedGroupId;
};
struct RemoveSharedGroupMembersRequest_1 {
  struct RemoveSharedGroupMembersRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct RemoveSharedGroupMembersRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_ {
  struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___Fields fields;
};
struct RemoveSharedGroupMembersResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct RemoveSharedGroupMembersResult_1 {
  struct RemoveSharedGroupMembersResult_1__Class *klass;
  struct MonitorData *monitor;
  struct RemoveSharedGroupMembersResult_1__Fields fields;
};
struct RemoveSharedGroupMembersRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoveSharedGroupMembersRequest_1__StaticFields {
};
struct RemoveSharedGroupMembersRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveSharedGroupMembersRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveSharedGroupMembersRequest_1__VTable vtable;
};
struct RemoveSharedGroupMembersResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoveSharedGroupMembersResult_1__StaticFields {
};
struct RemoveSharedGroupMembersResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoveSharedGroupMembersResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoveSharedGroupMembersResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult___VTable vtable;
};

struct ReportPlayerServerRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Comment;
  struct String * ReporteeId;
  struct String * ReporterId;
};
struct ReportPlayerServerRequest {
  struct ReportPlayerServerRequest__Class *klass;
  struct MonitorData *monitor;
  struct ReportPlayerServerRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult_ {
  struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___Fields fields;
};
struct ReportPlayerServerResult__Fields {
  struct PlayFabResultCommon__Fields _;
  int32_t SubmissionsRemaining;
};
struct ReportPlayerServerResult {
  struct ReportPlayerServerResult__Class *klass;
  struct MonitorData *monitor;
  struct ReportPlayerServerResult__Fields fields;
};
struct ReportPlayerServerRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReportPlayerServerRequest__StaticFields {
};
struct ReportPlayerServerRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReportPlayerServerRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReportPlayerServerRequest__VTable vtable;
};
struct ReportPlayerServerResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReportPlayerServerResult__StaticFields {
};
struct ReportPlayerServerResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReportPlayerServerResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReportPlayerServerResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___VTable {
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
struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_ReportPlayerServerResult___VTable vtable;
};

struct RevokeAllBansForUserRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
};
struct RevokeAllBansForUserRequest {
  struct RevokeAllBansForUserRequest__Class *klass;
  struct MonitorData *monitor;
  struct RevokeAllBansForUserRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_ {
  struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___Fields fields;
};
struct RevokeAllBansForUserResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_BanInfo_ * BanData;
};
struct RevokeAllBansForUserResult {
  struct RevokeAllBansForUserResult__Class *klass;
  struct MonitorData *monitor;
  struct RevokeAllBansForUserResult__Fields fields;
};
struct RevokeAllBansForUserRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeAllBansForUserRequest__StaticFields {
};
struct RevokeAllBansForUserRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeAllBansForUserRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeAllBansForUserRequest__VTable vtable;
};
struct RevokeAllBansForUserResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeAllBansForUserResult__StaticFields {
};
struct RevokeAllBansForUserResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeAllBansForUserResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeAllBansForUserResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult___VTable vtable;
};

struct RevokeBansRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * BanIds;
};
struct RevokeBansRequest {
  struct RevokeBansRequest__Class *klass;
  struct MonitorData *monitor;
  struct RevokeBansRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RevokeBansResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RevokeBansResult_ {
  struct Action_1_PlayFab_ServerModels_RevokeBansResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RevokeBansResult___Fields fields;
};
struct RevokeBansResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_BanInfo_ * BanData;
};
struct RevokeBansResult {
  struct RevokeBansResult__Class *klass;
  struct MonitorData *monitor;
  struct RevokeBansResult__Fields fields;
};
struct RevokeBansRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeBansRequest__StaticFields {
};
struct RevokeBansRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeBansRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeBansRequest__VTable vtable;
};
struct RevokeBansResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeBansResult__StaticFields {
};
struct RevokeBansResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeBansResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeBansResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RevokeBansResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RevokeBansResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RevokeBansResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RevokeBansResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RevokeBansResult___VTable vtable;
};

struct RevokeInventoryItemRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterId;
  struct String * ItemInstanceId;
  struct String * PlayFabId;
};
struct RevokeInventoryItemRequest {
  struct RevokeInventoryItemRequest__Class *klass;
  struct MonitorData *monitor;
  struct RevokeInventoryItemRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryResult_ {
  struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___Fields fields;
};
struct RevokeInventoryResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct RevokeInventoryResult {
  struct RevokeInventoryResult__Class *klass;
  struct MonitorData *monitor;
  struct RevokeInventoryResult__Fields fields;
};
struct RevokeInventoryItemRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeInventoryItemRequest__StaticFields {
};
struct RevokeInventoryItemRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeInventoryItemRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeInventoryItemRequest__VTable vtable;
};
struct RevokeInventoryResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RevokeInventoryResult__StaticFields {
};
struct RevokeInventoryResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RevokeInventoryResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RevokeInventoryResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___VTable {
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
struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_RevokeInventoryResult___VTable vtable;
};

struct RevokeInventoryItemsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_PlayFab_ServerModels_RevokeInventoryItem_ * Items;
};
struct RevokeInventoryItemsRequest {
  struct RevokeInventoryItemsRequest__Class *klass;
  struct MonitorData *monitor;
  struct RevokeInventoryItemsRequest__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_RevokeInventoryItem___Fields {
  struct RevokeInventoryItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_RevokeInventoryItem_ {
  struct List_1_PlayFab_ServerModels_RevokeInventoryItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_RevokeInventoryItem___Fields fields;
};
struct __declspec(align(8)) RevokeInventoryItem__Fields {
  struct String * CharacterId;
  struct String * ItemInstanceId;
  struct String * PlayFabId;
};
struct RevokeInventoryItem {
  struct RevokeInventoryItem__Class *klass;
  struct MonitorData *monitor;
  struct RevokeInventoryItem__Fields fields;
};
struct RevokeInventoryItem__Array {
  struct RevokeInventoryItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RevokeInventoryItem * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem_ {
  struct IEnumerator_1_PlayFab_ServerModels_RevokeInventoryItem___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_ {
  struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult___Fields fields;
};
struct RevokeInventoryItemsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_RevokeItemError_ * Errors;
};
struct RevokeInventoryItemsResult {
  struct RevokeInventoryItemsResult__Class *klass;
  struct MonitorData *monitor;
  struct RevokeInventoryItemsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_RevokeItemError___Fields {
  struct RevokeItemError__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_RevokeItemError_ {
  struct List_1_PlayFab_ServerModels_RevokeItemError___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_RevokeItemError___Fields fields;
};
enum GenericErrorCodes__Enum : int32_t {
  GenericErrorCodes__Enum_Success = 0,
  GenericErrorCodes__Enum_UnkownError = 1,
  GenericErrorCodes__Enum_InvalidParams = 2,
  GenericErrorCodes__Enum_AccountNotFound = 3,
  GenericErrorCodes__Enum_AccountBanned = 4,
  GenericErrorCodes__Enum_InvalidUsernameOrPassword = 5,
  GenericErrorCodes__Enum_InvalidTitleId = 6,
  GenericErrorCodes__Enum_InvalidEmailAddress = 7,
  GenericErrorCodes__Enum_EmailAddressNotAvailable = 8,
  GenericErrorCodes__Enum_InvalidUsername = 9,
  GenericErrorCodes__Enum_InvalidPassword = 10,
  GenericErrorCodes__Enum_UsernameNotAvailable = 11,
  GenericErrorCodes__Enum_InvalidSteamTicket = 12,
  GenericErrorCodes__Enum_AccountAlreadyLinked = 13,
  GenericErrorCodes__Enum_LinkedAccountAlreadyClaimed = 14,
  GenericErrorCodes__Enum_InvalidFacebookToken = 15,
  GenericErrorCodes__Enum_AccountNotLinked = 16,
  GenericErrorCodes__Enum_FailedByPaymentProvider = 17,
  GenericErrorCodes__Enum_CouponCodeNotFound = 18,
  GenericErrorCodes__Enum_InvalidContainerItem = 19,
  GenericErrorCodes__Enum_ContainerNotOwned = 20,
  GenericErrorCodes__Enum_KeyNotOwned = 21,
  GenericErrorCodes__Enum_InvalidItemIdInTable = 22,
  GenericErrorCodes__Enum_InvalidReceipt = 23,
  GenericErrorCodes__Enum_ReceiptAlreadyUsed = 24,
  GenericErrorCodes__Enum_ReceiptCancelled = 25,
  GenericErrorCodes__Enum_GameNotFound = 26,
  GenericErrorCodes__Enum_GameModeNotFound = 27,
  GenericErrorCodes__Enum_InvalidGoogleToken = 28,
  GenericErrorCodes__Enum_UserIsNotPartOfDeveloper = 29,
  GenericErrorCodes__Enum_InvalidTitleForDeveloper = 30,
  GenericErrorCodes__Enum_TitleNameConflicts = 31,
  GenericErrorCodes__Enum_UserisNotValid = 32,
  GenericErrorCodes__Enum_ValueAlreadyExists = 33,
  GenericErrorCodes__Enum_BuildNotFound = 34,
  GenericErrorCodes__Enum_PlayerNotInGame = 35,
  GenericErrorCodes__Enum_InvalidTicket = 36,
  GenericErrorCodes__Enum_InvalidDeveloper = 37,
  GenericErrorCodes__Enum_InvalidOrderInfo = 38,
  GenericErrorCodes__Enum_RegistrationIncomplete = 39,
  GenericErrorCodes__Enum_InvalidPlatform = 40,
  GenericErrorCodes__Enum_UnknownError = 41,
  GenericErrorCodes__Enum_SteamApplicationNotOwned = 42,
  GenericErrorCodes__Enum_WrongSteamAccount = 43,
  GenericErrorCodes__Enum_TitleNotActivated = 44,
  GenericErrorCodes__Enum_RegistrationSessionNotFound = 45,
  GenericErrorCodes__Enum_NoSuchMod = 46,
  GenericErrorCodes__Enum_FileNotFound = 47,
  GenericErrorCodes__Enum_DuplicateEmail = 48,
  GenericErrorCodes__Enum_ItemNotFound = 49,
  GenericErrorCodes__Enum_ItemNotOwned = 50,
  GenericErrorCodes__Enum_ItemNotRecycleable = 51,
  GenericErrorCodes__Enum_ItemNotAffordable = 52,
  GenericErrorCodes__Enum_InvalidVirtualCurrency = 53,
  GenericErrorCodes__Enum_WrongVirtualCurrency = 54,
  GenericErrorCodes__Enum_WrongPrice = 55,
  GenericErrorCodes__Enum_NonPositiveValue = 56,
  GenericErrorCodes__Enum_InvalidRegion = 57,
  GenericErrorCodes__Enum_RegionAtCapacity = 58,
  GenericErrorCodes__Enum_ServerFailedToStart = 59,
  GenericErrorCodes__Enum_NameNotAvailable = 60,
  GenericErrorCodes__Enum_InsufficientFunds = 61,
  GenericErrorCodes__Enum_InvalidDeviceID = 62,
  GenericErrorCodes__Enum_InvalidPushNotificationToken = 63,
  GenericErrorCodes__Enum_NoRemainingUses = 64,
  GenericErrorCodes__Enum_InvalidPaymentProvider = 65,
  GenericErrorCodes__Enum_PurchaseInitializationFailure = 66,
  GenericErrorCodes__Enum_DuplicateUsername = 67,
  GenericErrorCodes__Enum_InvalidBuyerInfo = 68,
  GenericErrorCodes__Enum_NoGameModeParamsSet = 69,
  GenericErrorCodes__Enum_BodyTooLarge = 70,
  GenericErrorCodes__Enum_ReservedWordInBody = 71,
  GenericErrorCodes__Enum_InvalidTypeInBody = 72,
  GenericErrorCodes__Enum_InvalidRequest = 73,
  GenericErrorCodes__Enum_ReservedEventName = 74,
  GenericErrorCodes__Enum_InvalidUserStatistics = 75,
  GenericErrorCodes__Enum_NotAuthenticated = 76,
  GenericErrorCodes__Enum_StreamAlreadyExists = 77,
  GenericErrorCodes__Enum_ErrorCreatingStream = 78,
  GenericErrorCodes__Enum_StreamNotFound = 79,
  GenericErrorCodes__Enum_InvalidAccount = 80,
  GenericErrorCodes__Enum_PurchaseDoesNotExist = 81,
  GenericErrorCodes__Enum_InvalidPurchaseTransactionStatus = 82,
  GenericErrorCodes__Enum_APINotEnabledForGameClientAccess = 83,
  GenericErrorCodes__Enum_NoPushNotificationARNForTitle = 84,
  GenericErrorCodes__Enum_BuildAlreadyExists = 85,
  GenericErrorCodes__Enum_BuildPackageDoesNotExist = 86,
  GenericErrorCodes__Enum_CustomAnalyticsEventsNotEnabledForTitle = 87,
  GenericErrorCodes__Enum_InvalidSharedGroupId = 88,
  GenericErrorCodes__Enum_NotAuthorized = 89,
  GenericErrorCodes__Enum_MissingTitleGoogleProperties = 90,
  GenericErrorCodes__Enum_InvalidItemProperties = 91,
  GenericErrorCodes__Enum_InvalidPSNAuthCode = 92,
  GenericErrorCodes__Enum_InvalidItemId = 93,
  GenericErrorCodes__Enum_PushNotEnabledForAccount = 94,
  GenericErrorCodes__Enum_PushServiceError = 95,
  GenericErrorCodes__Enum_ReceiptDoesNotContainInAppItems = 96,
  GenericErrorCodes__Enum_ReceiptContainsMultipleInAppItems = 97,
  GenericErrorCodes__Enum_InvalidBundleID = 98,
  GenericErrorCodes__Enum_JavascriptException = 99,
  GenericErrorCodes__Enum_InvalidSessionTicket = 100,
  GenericErrorCodes__Enum_UnableToConnectToDatabase = 101,
  GenericErrorCodes__Enum_InternalServerError = 102,
  GenericErrorCodes__Enum_InvalidReportDate = 103,
  GenericErrorCodes__Enum_ReportNotAvailable = 104,
  GenericErrorCodes__Enum_DatabaseThroughputExceeded = 105,
  GenericErrorCodes__Enum_InvalidGameTicket = 106,
  GenericErrorCodes__Enum_ExpiredGameTicket = 107,
  GenericErrorCodes__Enum_GameTicketDoesNotMatchLobby = 108,
  GenericErrorCodes__Enum_LinkedDeviceAlreadyClaimed = 109,
  GenericErrorCodes__Enum_DeviceAlreadyLinked = 110,
  GenericErrorCodes__Enum_DeviceNotLinked = 111,
  GenericErrorCodes__Enum_PartialFailure = 112,
  GenericErrorCodes__Enum_PublisherNotSet = 113,
  GenericErrorCodes__Enum_ServiceUnavailable = 114,
  GenericErrorCodes__Enum_VersionNotFound = 115,
  GenericErrorCodes__Enum_RevisionNotFound = 116,
  GenericErrorCodes__Enum_InvalidPublisherId = 117,
  GenericErrorCodes__Enum_DownstreamServiceUnavailable = 118,
  GenericErrorCodes__Enum_APINotIncludedInTitleUsageTier = 119,
  GenericErrorCodes__Enum_DAULimitExceeded = 120,
  GenericErrorCodes__Enum_APIRequestLimitExceeded = 121,
  GenericErrorCodes__Enum_InvalidAPIEndpoint = 122,
  GenericErrorCodes__Enum_BuildNotAvailable = 123,
  GenericErrorCodes__Enum_ConcurrentEditError = 124,
  GenericErrorCodes__Enum_ContentNotFound = 125,
  GenericErrorCodes__Enum_CharacterNotFound = 126,
  GenericErrorCodes__Enum_CloudScriptNotFound = 127,
  GenericErrorCodes__Enum_ContentQuotaExceeded = 128,
  GenericErrorCodes__Enum_InvalidCharacterStatistics = 129,
  GenericErrorCodes__Enum_PhotonNotEnabledForTitle = 130,
  GenericErrorCodes__Enum_PhotonApplicationNotFound = 131,
  GenericErrorCodes__Enum_PhotonApplicationNotAssociatedWithTitle = 132,
  GenericErrorCodes__Enum_InvalidEmailOrPassword = 133,
  GenericErrorCodes__Enum_FacebookAPIError = 134,
  GenericErrorCodes__Enum_InvalidContentType = 135,
  GenericErrorCodes__Enum_KeyLengthExceeded = 136,
  GenericErrorCodes__Enum_DataLengthExceeded = 137,
  GenericErrorCodes__Enum_TooManyKeys = 138,
  GenericErrorCodes__Enum_FreeTierCannotHaveVirtualCurrency = 139,
  GenericErrorCodes__Enum_MissingAmazonSharedKey = 140,
  GenericErrorCodes__Enum_AmazonValidationError = 141,
  GenericErrorCodes__Enum_InvalidPSNIssuerId = 142,
  GenericErrorCodes__Enum_PSNInaccessible = 143,
  GenericErrorCodes__Enum_ExpiredAuthToken = 144,
  GenericErrorCodes__Enum_FailedToGetEntitlements = 145,
  GenericErrorCodes__Enum_FailedToConsumeEntitlement = 146,
  GenericErrorCodes__Enum_TradeAcceptingUserNotAllowed = 147,
  GenericErrorCodes__Enum_TradeInventoryItemIsAssignedToCharacter = 148,
  GenericErrorCodes__Enum_TradeInventoryItemIsBundle = 149,
  GenericErrorCodes__Enum_TradeStatusNotValidForCancelling = 150,
  GenericErrorCodes__Enum_TradeStatusNotValidForAccepting = 151,
  GenericErrorCodes__Enum_TradeDoesNotExist = 152,
  GenericErrorCodes__Enum_TradeCancelled = 153,
  GenericErrorCodes__Enum_TradeAlreadyFilled = 154,
  GenericErrorCodes__Enum_TradeWaitForStatusTimeout = 155,
  GenericErrorCodes__Enum_TradeInventoryItemExpired = 156,
  GenericErrorCodes__Enum_TradeMissingOfferedAndAcceptedItems = 157,
  GenericErrorCodes__Enum_TradeAcceptedItemIsBundle = 158,
  GenericErrorCodes__Enum_TradeAcceptedItemIsStackable = 159,
  GenericErrorCodes__Enum_TradeInventoryItemInvalidStatus = 160,
  GenericErrorCodes__Enum_TradeAcceptedCatalogItemInvalid = 161,
  GenericErrorCodes__Enum_TradeAllowedUsersInvalid = 162,
  GenericErrorCodes__Enum_TradeInventoryItemDoesNotExist = 163,
  GenericErrorCodes__Enum_TradeInventoryItemIsConsumed = 164,
  GenericErrorCodes__Enum_TradeInventoryItemIsStackable = 165,
  GenericErrorCodes__Enum_TradeAcceptedItemsMismatch = 166,
  GenericErrorCodes__Enum_InvalidKongregateToken = 167,
  GenericErrorCodes__Enum_FeatureNotConfiguredForTitle = 168,
  GenericErrorCodes__Enum_NoMatchingCatalogItemForReceipt = 169,
  GenericErrorCodes__Enum_InvalidCurrencyCode = 170,
  GenericErrorCodes__Enum_NoRealMoneyPriceForCatalogItem = 171,
  GenericErrorCodes__Enum_TradeInventoryItemIsNotTradable = 172,
  GenericErrorCodes__Enum_TradeAcceptedCatalogItemIsNotTradable = 173,
  GenericErrorCodes__Enum_UsersAlreadyFriends = 174,
  GenericErrorCodes__Enum_LinkedIdentifierAlreadyClaimed = 175,
  GenericErrorCodes__Enum_CustomIdNotLinked = 176,
  GenericErrorCodes__Enum_TotalDataSizeExceeded = 177,
  GenericErrorCodes__Enum_DeleteKeyConflict = 178,
  GenericErrorCodes__Enum_InvalidXboxLiveToken = 179,
  GenericErrorCodes__Enum_ExpiredXboxLiveToken = 180,
  GenericErrorCodes__Enum_ResettableStatisticVersionRequired = 181,
  GenericErrorCodes__Enum_NotAuthorizedByTitle = 182,
  GenericErrorCodes__Enum_NoPartnerEnabled = 183,
  GenericErrorCodes__Enum_InvalidPartnerResponse = 184,
  GenericErrorCodes__Enum_APINotEnabledForGameServerAccess = 185,
  GenericErrorCodes__Enum_StatisticNotFound = 186,
  GenericErrorCodes__Enum_StatisticNameConflict = 187,
  GenericErrorCodes__Enum_StatisticVersionClosedForWrites = 188,
  GenericErrorCodes__Enum_StatisticVersionInvalid = 189,
  GenericErrorCodes__Enum_APIClientRequestRateLimitExceeded = 190,
  GenericErrorCodes__Enum_InvalidJSONContent = 191,
  GenericErrorCodes__Enum_InvalidDropTable = 192,
  GenericErrorCodes__Enum_StatisticVersionAlreadyIncrementedForScheduledInterval = 193,
  GenericErrorCodes__Enum_StatisticCountLimitExceeded = 194,
  GenericErrorCodes__Enum_StatisticVersionIncrementRateExceeded = 195,
  GenericErrorCodes__Enum_ContainerKeyInvalid = 196,
  GenericErrorCodes__Enum_CloudScriptExecutionTimeLimitExceeded = 197,
  GenericErrorCodes__Enum_NoWritePermissionsForEvent = 198,
  GenericErrorCodes__Enum_CloudScriptFunctionArgumentSizeExceeded = 199,
  GenericErrorCodes__Enum_CloudScriptAPIRequestCountExceeded = 200,
  GenericErrorCodes__Enum_CloudScriptAPIRequestError = 201,
  GenericErrorCodes__Enum_CloudScriptHTTPRequestError = 202,
  GenericErrorCodes__Enum_InsufficientGuildRole = 203,
  GenericErrorCodes__Enum_GuildNotFound = 204,
  GenericErrorCodes__Enum_OverLimit = 205,
  GenericErrorCodes__Enum_EventNotFound = 206,
  GenericErrorCodes__Enum_InvalidEventField = 207,
  GenericErrorCodes__Enum_InvalidEventName = 208,
  GenericErrorCodes__Enum_CatalogNotConfigured = 209,
  GenericErrorCodes__Enum_OperationNotSupportedForPlatform = 210,
  GenericErrorCodes__Enum_SegmentNotFound = 211,
  GenericErrorCodes__Enum_StoreNotFound = 212,
  GenericErrorCodes__Enum_InvalidStatisticName = 213,
  GenericErrorCodes__Enum_TitleNotQualifiedForLimit = 214,
  GenericErrorCodes__Enum_InvalidServiceLimitLevel = 215,
  GenericErrorCodes__Enum_ServiceLimitLevelInTransition = 216,
  GenericErrorCodes__Enum_CouponAlreadyRedeemed = 217,
  GenericErrorCodes__Enum_GameServerBuildSizeLimitExceeded = 218,
  GenericErrorCodes__Enum_GameServerBuildCountLimitExceeded = 219,
  GenericErrorCodes__Enum_VirtualCurrencyCountLimitExceeded = 220,
  GenericErrorCodes__Enum_VirtualCurrencyCodeExists = 221,
  GenericErrorCodes__Enum_TitleNewsItemCountLimitExceeded = 222,
  GenericErrorCodes__Enum_InvalidTwitchToken = 223,
  GenericErrorCodes__Enum_TwitchResponseError = 224,
  GenericErrorCodes__Enum_ProfaneDisplayName = 225,
  GenericErrorCodes__Enum_UserAlreadyAdded = 226,
  GenericErrorCodes__Enum_InvalidVirtualCurrencyCode = 227,
  GenericErrorCodes__Enum_VirtualCurrencyCannotBeDeleted = 228,
  GenericErrorCodes__Enum_IdentifierAlreadyClaimed = 229,
  GenericErrorCodes__Enum_IdentifierNotLinked = 230,
  GenericErrorCodes__Enum_InvalidContinuationToken = 231,
  GenericErrorCodes__Enum_ExpiredContinuationToken = 232,
  GenericErrorCodes__Enum_InvalidSegment = 233,
  GenericErrorCodes__Enum_InvalidSessionId = 234,
  GenericErrorCodes__Enum_SessionLogNotFound = 235,
  GenericErrorCodes__Enum_InvalidSearchTerm = 236,
  GenericErrorCodes__Enum_TwoFactorAuthenticationTokenRequired = 237,
  GenericErrorCodes__Enum_GameServerHostCountLimitExceeded = 238,
  GenericErrorCodes__Enum_PlayerTagCountLimitExceeded = 239,
  GenericErrorCodes__Enum_RequestAlreadyRunning = 240,
  GenericErrorCodes__Enum_ActionGroupNotFound = 241,
  GenericErrorCodes__Enum_MaximumSegmentBulkActionJobsRunning = 242,
  GenericErrorCodes__Enum_NoActionsOnPlayersInSegmentJob = 243,
  GenericErrorCodes__Enum_DuplicateStatisticName = 244,
  GenericErrorCodes__Enum_ScheduledTaskNameConflict = 245,
  GenericErrorCodes__Enum_ScheduledTaskCreateConflict = 246,
  GenericErrorCodes__Enum_InvalidScheduledTaskName = 247,
  GenericErrorCodes__Enum_InvalidTaskSchedule = 248,
  GenericErrorCodes__Enum_SteamNotEnabledForTitle = 249,
  GenericErrorCodes__Enum_LimitNotAnUpgradeOption = 250,
  GenericErrorCodes__Enum_NoSecretKeyEnabledForCloudScript = 251,
  GenericErrorCodes__Enum_TaskNotFound = 252,
  GenericErrorCodes__Enum_TaskInstanceNotFound = 253,
  GenericErrorCodes__Enum_InvalidIdentityProviderId = 254,
  GenericErrorCodes__Enum_MisconfiguredIdentityProvider = 255,
  GenericErrorCodes__Enum_InvalidScheduledTaskType = 256,
  GenericErrorCodes__Enum_BillingInformationRequired = 257,
  GenericErrorCodes__Enum_LimitedEditionItemUnavailable = 258,
  GenericErrorCodes__Enum_InvalidAdPlacementAndReward = 259,
  GenericErrorCodes__Enum_AllAdPlacementViewsAlreadyConsumed = 260,
  GenericErrorCodes__Enum_GoogleOAuthNotConfiguredForTitle = 261,
  GenericErrorCodes__Enum_GoogleOAuthError = 262,
  GenericErrorCodes__Enum_UserNotFriend = 263,
  GenericErrorCodes__Enum_InvalidSignature = 264,
  GenericErrorCodes__Enum_InvalidPublicKey = 265,
  GenericErrorCodes__Enum_GoogleOAuthNoIdTokenIncludedInResponse = 266,
  GenericErrorCodes__Enum_StatisticUpdateInProgress = 267,
  GenericErrorCodes__Enum_LeaderboardVersionNotAvailable = 268,
  GenericErrorCodes__Enum_StatisticAlreadyHasPrizeTable = 269,
  GenericErrorCodes__Enum_PrizeTableHasOverlappingRanks = 270,
  GenericErrorCodes__Enum_PrizeTableHasMissingRanks = 271,
  GenericErrorCodes__Enum_PrizeTableRankStartsAtZero = 272,
  GenericErrorCodes__Enum_InvalidStatistic = 273,
  GenericErrorCodes__Enum_ExpressionParseFailure = 274,
  GenericErrorCodes__Enum_ExpressionInvokeFailure = 275,
  GenericErrorCodes__Enum_ExpressionTooLong = 276,
  GenericErrorCodes__Enum_DataUpdateRateExceeded = 277,
  GenericErrorCodes__Enum_RestrictedEmailDomain = 278,
  GenericErrorCodes__Enum_EncryptionKeyDisabled = 279,
  GenericErrorCodes__Enum_EncryptionKeyMissing = 280,
  GenericErrorCodes__Enum_EncryptionKeyBroken = 281,
  GenericErrorCodes__Enum_NoSharedSecretKeyConfigured = 282,
  GenericErrorCodes__Enum_SecretKeyNotFound = 283,
  GenericErrorCodes__Enum_PlayerSecretAlreadyConfigured = 284,
  GenericErrorCodes__Enum_APIRequestsDisabledForTitle = 285,
  GenericErrorCodes__Enum_InvalidSharedSecretKey = 286,
  GenericErrorCodes__Enum_PrizeTableHasNoRanks = 287,
  GenericErrorCodes__Enum_ProfileDoesNotExist = 288,
  GenericErrorCodes__Enum_ContentS3OriginBucketNotConfigured = 289,
  GenericErrorCodes__Enum_InvalidEnvironmentForReceipt = 290,
  GenericErrorCodes__Enum_EncryptedRequestNotAllowed = 291,
  GenericErrorCodes__Enum_SignedRequestNotAllowed = 292,
  GenericErrorCodes__Enum_RequestViewConstraintParamsNotAllowed = 293,
  GenericErrorCodes__Enum_BadPartnerConfiguration = 294,
  GenericErrorCodes__Enum_XboxBPCertificateFailure = 295,
  GenericErrorCodes__Enum_XboxXASSExchangeFailure = 296,
  GenericErrorCodes__Enum_InvalidEntityId = 297,
  GenericErrorCodes__Enum_StatisticValueAggregationOverflow = 298,
  GenericErrorCodes__Enum_EmailMessageFromAddressIsMissing = 299,
  GenericErrorCodes__Enum_EmailMessageToAddressIsMissing = 300,
  GenericErrorCodes__Enum_SmtpServerAuthenticationError = 301,
  GenericErrorCodes__Enum_SmtpServerLimitExceeded = 302,
  GenericErrorCodes__Enum_SmtpServerInsufficientStorage = 303,
  GenericErrorCodes__Enum_SmtpServerCommunicationError = 304,
  GenericErrorCodes__Enum_SmtpServerGeneralFailure = 305,
  GenericErrorCodes__Enum_EmailClientTimeout = 306,
  GenericErrorCodes__Enum_EmailClientCanceledTask = 307,
  GenericErrorCodes__Enum_EmailTemplateMissing = 308,
  GenericErrorCodes__Enum_InvalidHostForTitleId = 309,
  GenericErrorCodes__Enum_EmailConfirmationTokenDoesNotExist = 310,
  GenericErrorCodes__Enum_EmailConfirmationTokenExpired = 311,
  GenericErrorCodes__Enum_AccountDeleted = 312,
  GenericErrorCodes__Enum_PlayerSecretNotConfigured = 313,
  GenericErrorCodes__Enum_InvalidSignatureTime = 314,
  GenericErrorCodes__Enum_NoContactEmailAddressFound = 315,
  GenericErrorCodes__Enum_InvalidAuthToken = 316,
  GenericErrorCodes__Enum_AuthTokenDoesNotExist = 317,
  GenericErrorCodes__Enum_AuthTokenExpired = 318,
  GenericErrorCodes__Enum_AuthTokenAlreadyUsedToResetPassword = 319,
  GenericErrorCodes__Enum_MembershipNameTooLong = 320,
  GenericErrorCodes__Enum_MembershipNotFound = 321,
  GenericErrorCodes__Enum_GoogleServiceAccountInvalid = 322,
  GenericErrorCodes__Enum_GoogleServiceAccountParseFailure = 323,
  GenericErrorCodes__Enum_EntityTokenMissing = 324,
  GenericErrorCodes__Enum_EntityTokenInvalid = 325,
  GenericErrorCodes__Enum_EntityTokenExpired = 326,
  GenericErrorCodes__Enum_EntityTokenRevoked = 327,
  GenericErrorCodes__Enum_InvalidProductForSubscription = 328,
  GenericErrorCodes__Enum_XboxInaccessible = 329,
  GenericErrorCodes__Enum_SubscriptionAlreadyTaken = 330,
  GenericErrorCodes__Enum_SmtpAddonNotEnabled = 331,
  GenericErrorCodes__Enum_APIConcurrentRequestLimitExceeded = 332,
  GenericErrorCodes__Enum_XboxRejectedXSTSExchangeRequest = 333,
  GenericErrorCodes__Enum_VariableNotDefined = 334,
  GenericErrorCodes__Enum_TemplateVersionNotDefined = 335,
  GenericErrorCodes__Enum_FileTooLarge = 336,
  GenericErrorCodes__Enum_TitleDeleted = 337,
  GenericErrorCodes__Enum_TitleContainsUserAccounts = 338,
  GenericErrorCodes__Enum_TitleDeletionPlayerCleanupFailure = 339,
  GenericErrorCodes__Enum_EntityFileOperationPending = 340,
  GenericErrorCodes__Enum_NoEntityFileOperationPending = 341,
  GenericErrorCodes__Enum_EntityProfileVersionMismatch = 342,
  GenericErrorCodes__Enum_TemplateVersionTooOld = 343,
  GenericErrorCodes__Enum_MembershipDefinitionInUse = 344,
  GenericErrorCodes__Enum_PaymentPageNotConfigured = 345,
  GenericErrorCodes__Enum_FailedLoginAttemptRateLimitExceeded = 346,
  GenericErrorCodes__Enum_EntityBlockedByGroup = 347,
  GenericErrorCodes__Enum_RoleDoesNotExist = 348,
  GenericErrorCodes__Enum_EntityIsAlreadyMember = 349,
  GenericErrorCodes__Enum_DuplicateRoleId = 350,
  GenericErrorCodes__Enum_GroupInvitationNotFound = 351,
  GenericErrorCodes__Enum_GroupApplicationNotFound = 352,
  GenericErrorCodes__Enum_OutstandingInvitationAcceptedInstead = 353,
  GenericErrorCodes__Enum_OutstandingApplicationAcceptedInstead = 354,
  GenericErrorCodes__Enum_RoleIsGroupDefaultMember = 355,
  GenericErrorCodes__Enum_RoleIsGroupAdmin = 356,
  GenericErrorCodes__Enum_RoleNameNotAvailable = 357,
  GenericErrorCodes__Enum_GroupNameNotAvailable = 358,
  GenericErrorCodes__Enum_EmailReportAlreadySent = 359,
  GenericErrorCodes__Enum_EmailReportRecipientBlacklisted = 360,
  GenericErrorCodes__Enum_EventNamespaceNotAllowed = 361,
  GenericErrorCodes__Enum_EventEntityNotAllowed = 362,
  GenericErrorCodes__Enum_InvalidEntityType = 363,
  GenericErrorCodes__Enum_NullTokenResultFromAad = 364,
  GenericErrorCodes__Enum_InvalidTokenResultFromAad = 365,
  GenericErrorCodes__Enum_NoValidCertificateForAad = 366,
  GenericErrorCodes__Enum_InvalidCertificateForAad = 367,
  GenericErrorCodes__Enum_DuplicateDropTableId = 368,
  GenericErrorCodes__Enum_MultiplayerServerError = 369,
  GenericErrorCodes__Enum_MultiplayerServerTooManyRequests = 370,
  GenericErrorCodes__Enum_MultiplayerServerNoContent = 371,
  GenericErrorCodes__Enum_MultiplayerServerBadRequest = 372,
  GenericErrorCodes__Enum_MultiplayerServerUnauthorized = 373,
  GenericErrorCodes__Enum_MultiplayerServerForbidden = 374,
  GenericErrorCodes__Enum_MultiplayerServerNotFound = 375,
  GenericErrorCodes__Enum_MultiplayerServerConflict = 376,
  GenericErrorCodes__Enum_MultiplayerServerInternalServerError = 377,
  GenericErrorCodes__Enum_MultiplayerServerUnavailable = 378,
  GenericErrorCodes__Enum_ExplicitContentDetected = 379,
  GenericErrorCodes__Enum_PIIContentDetected = 380,
  GenericErrorCodes__Enum_InvalidScheduledTaskParameter = 381,
  GenericErrorCodes__Enum_PerEntityEventRateLimitExceeded = 382,
  GenericErrorCodes__Enum_TitleDefaultLanguageNotSet = 383,
  GenericErrorCodes__Enum_EmailTemplateMissingDefaultVersion = 384,
  GenericErrorCodes__Enum_FacebookInstantGamesIdNotLinked = 385,
  GenericErrorCodes__Enum_InvalidFacebookInstantGamesSignature = 386,
  GenericErrorCodes__Enum_FacebookInstantGamesAuthNotConfiguredForTitle = 387,
  GenericErrorCodes__Enum_EntityProfileConstraintValidationFailed = 388,
  GenericErrorCodes__Enum_TelemetryIngestionKeyPending = 389,
  GenericErrorCodes__Enum_TelemetryIngestionKeyNotFound = 390,
  GenericErrorCodes__Enum_StatisticChildNameInvalid = 391,
  GenericErrorCodes__Enum_DataIntegrityError = 392,
  GenericErrorCodes__Enum_VirtualCurrencyCannotBeSetToOlderVersion = 393,
  GenericErrorCodes__Enum_VirtualCurrencyMustBeWithinIntegerRange = 394,
  GenericErrorCodes__Enum_EmailTemplateInvalidSyntax = 395,
  GenericErrorCodes__Enum_EmailTemplateMissingCallback = 396,
  GenericErrorCodes__Enum_PushNotificationTemplateInvalidPayload = 397,
  GenericErrorCodes__Enum_InvalidLocalizedPushNotificationLanguage = 398,
  GenericErrorCodes__Enum_MissingLocalizedPushNotificationMessage = 399,
  GenericErrorCodes__Enum_PushNotificationTemplateMissingPlatformPayload = 400,
  GenericErrorCodes__Enum_PushNotificationTemplatePayloadContainsInvalidJson = 401,
  GenericErrorCodes__Enum_PushNotificationTemplateContainsInvalidIosPayload = 402,
  GenericErrorCodes__Enum_PushNotificationTemplateContainsInvalidAndroidPayload = 403,
  GenericErrorCodes__Enum_PushNotificationTemplateIosPayloadMissingNotificationBody = 404,
  GenericErrorCodes__Enum_PushNotificationTemplateAndroidPayloadMissingNotificationBody = 405,
  GenericErrorCodes__Enum_PushNotificationTemplateNotFound = 406,
  GenericErrorCodes__Enum_PushNotificationTemplateMissingDefaultVersion = 407,
  GenericErrorCodes__Enum_PushNotificationTemplateInvalidSyntax = 408,
  GenericErrorCodes__Enum_PushNotificationTemplateNoCustomPayloadForV1 = 409,
  GenericErrorCodes__Enum_NoLeaderboardForStatistic = 410,
  GenericErrorCodes__Enum_TitleNewsMissingDefaultLanguage = 411,
  GenericErrorCodes__Enum_TitleNewsNotFound = 412,
  GenericErrorCodes__Enum_TitleNewsDuplicateLanguage = 413,
  GenericErrorCodes__Enum_TitleNewsMissingTitleOrBody = 414,
  GenericErrorCodes__Enum_TitleNewsInvalidLanguage = 415,
  GenericErrorCodes__Enum_EmailRecipientBlacklisted = 416,
  GenericErrorCodes__Enum_InvalidGameCenterAuthRequest = 417,
  GenericErrorCodes__Enum_GameCenterAuthenticationFailed = 418,
  GenericErrorCodes__Enum_CannotEnablePartiesForTitle = 419,
  GenericErrorCodes__Enum_PartyError = 420,
  GenericErrorCodes__Enum_PartyRequests = 421,
  GenericErrorCodes__Enum_PartyNoContent = 422,
  GenericErrorCodes__Enum_PartyBadRequest = 423,
  GenericErrorCodes__Enum_PartyUnauthorized = 424,
  GenericErrorCodes__Enum_PartyForbidden = 425,
  GenericErrorCodes__Enum_PartyNotFound = 426,
  GenericErrorCodes__Enum_PartyConflict = 427,
  GenericErrorCodes__Enum_PartyInternalServerError = 428,
  GenericErrorCodes__Enum_PartyUnavailable = 429,
  GenericErrorCodes__Enum_PartyTooManyRequests = 430,
  GenericErrorCodes__Enum_PushNotificationTemplateMissingName = 431,
  GenericErrorCodes__Enum_CannotEnableMultiplayerServersForTitle = 432,
  GenericErrorCodes__Enum_WriteAttemptedDuringExport = 433,
  GenericErrorCodes__Enum_MultiplayerServerTitleQuotaCoresExceeded = 434,
  GenericErrorCodes__Enum_MatchmakingEntityInvalid = 435,
  GenericErrorCodes__Enum_MatchmakingPlayerAttributesInvalid = 436,
  GenericErrorCodes__Enum_MatchmakingQueueNotFound = 437,
  GenericErrorCodes__Enum_MatchmakingMatchNotFound = 438,
  GenericErrorCodes__Enum_MatchmakingTicketNotFound = 439,
  GenericErrorCodes__Enum_MatchmakingAlreadyJoinedTicket = 440,
  GenericErrorCodes__Enum_MatchmakingTicketAlreadyCompleted = 441,
  GenericErrorCodes__Enum_MatchmakingQueueConfigInvalid = 442,
  GenericErrorCodes__Enum_MatchmakingMemberProfileInvalid = 443,
  GenericErrorCodes__Enum_NintendoSwitchDeviceIdNotLinked = 444,
  GenericErrorCodes__Enum_MatchmakingNotEnabled = 445,
  GenericErrorCodes__Enum_MatchmakingPlayerAttributesTooLarge = 446,
  GenericErrorCodes__Enum_MatchmakingNumberOfPlayersInTicketTooLarge = 447,
  GenericErrorCodes__Enum_MatchmakingAttributeInvalid = 448,
  GenericErrorCodes__Enum_MatchmakingPlayerHasNotJoinedTicket = 449,
  GenericErrorCodes__Enum_MatchmakingRateLimitExceeded = 450,
  GenericErrorCodes__Enum_MatchmakingTicketMembershipLimitExceeded = 451,
  GenericErrorCodes__Enum_MatchmakingUnauthorized = 452,
  GenericErrorCodes__Enum_TitleConfigNotFound = 453,
  GenericErrorCodes__Enum_TitleConfigUpdateConflict = 454,
  GenericErrorCodes__Enum_TitleConfigSerializationError = 455,
  GenericErrorCodes__Enum_CatalogEntityInvalid = 456,
  GenericErrorCodes__Enum_CatalogTitleIdMissing = 457,
  GenericErrorCodes__Enum_CatalogPlayerIdMissing = 458,
  GenericErrorCodes__Enum_CatalogClientIdentityInvalid = 459,
  GenericErrorCodes__Enum_CatalogOneOrMoreFilesInvalid = 460,
  GenericErrorCodes__Enum_CatalogItemMetadataInvalid = 461,
  GenericErrorCodes__Enum_CatalogItemIdInvalid = 462,
  GenericErrorCodes__Enum_CatalogSearchParameterInvalid = 463,
  GenericErrorCodes__Enum_CatalogFeatureDisabled = 464,
  GenericErrorCodes__Enum_CatalogConfigMissing = 465,
  GenericErrorCodes__Enum_CatalogConfigTooManyContentTypes = 466,
  GenericErrorCodes__Enum_CatalogConfigContentTypeTooLong = 467,
  GenericErrorCodes__Enum_CatalogConfigTooManyTags = 468,
  GenericErrorCodes__Enum_CatalogConfigTagTooLong = 469,
  GenericErrorCodes__Enum_ExportInvalidStatusUpdate = 470,
  GenericErrorCodes__Enum_ExportInvalidPrefix = 471,
  GenericErrorCodes__Enum_ExportBlobContainerDoesNotExist = 472,
  GenericErrorCodes__Enum_ExportEventNameNotFound = 473,
  GenericErrorCodes__Enum_ExportExportTitleIdNotFound = 474,
  GenericErrorCodes__Enum_ExportCouldNotUpdate = 475,
  GenericErrorCodes__Enum_ExportInvalidStorageType = 476,
};}