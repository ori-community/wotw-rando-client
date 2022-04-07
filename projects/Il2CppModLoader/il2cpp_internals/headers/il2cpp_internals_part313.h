namespace app {
struct PlayFabAuthenticationInstanceAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabAuthenticationInstanceAPI__StaticFields {
};
struct PlayFabAuthenticationInstanceAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabAuthenticationInstanceAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabAuthenticationInstanceAPI__VTable vtable;
};

struct AcceptTradeRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * AcceptedInventoryInstanceIds;
  struct String * OfferingPlayerId;
  struct String * TradeId;
};
struct AcceptTradeRequest {
  struct AcceptTradeRequest__Class *klass;
  struct MonitorData *monitor;
  struct AcceptTradeRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AcceptTradeResponse_ {
  struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___Fields fields;
};
struct AcceptTradeResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct TradeInfo * Trade;
};
struct AcceptTradeResponse {
  struct AcceptTradeResponse__Class *klass;
  struct MonitorData *monitor;
  struct AcceptTradeResponse__Fields fields;
};
enum TradeStatus__Enum : int32_t {
  TradeStatus__Enum_Invalid = 0,
  TradeStatus__Enum_Opening = 1,
  TradeStatus__Enum_Open = 2,
  TradeStatus__Enum_Accepting = 3,
  TradeStatus__Enum_Accepted = 4,
  TradeStatus__Enum_Filled = 5,
  TradeStatus__Enum_Cancelled = 6,
};
struct TradeStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TradeStatus__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_TradeStatus_ {
  enum TradeStatus__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_TradeStatus___Boxed {
  struct Nullable_1_PlayFab_ClientModels_TradeStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_TradeStatus_ fields;
};
struct __declspec(align(8)) TradeInfo__Fields {
  struct List_1_System_String_ * AcceptedInventoryInstanceIds;
  struct String * AcceptedPlayerId;
  struct List_1_System_String_ * AllowedPlayerIds;
  struct Nullable_1_DateTime_ CancelledAt;
  struct Nullable_1_DateTime_ FilledAt;
  struct Nullable_1_DateTime_ InvalidatedAt;
  struct List_1_System_String_ * OfferedCatalogItemIds;
  struct List_1_System_String_ * OfferedInventoryInstanceIds;
  struct String * OfferingPlayerId;
  struct Nullable_1_DateTime_ OpenedAt;
  struct List_1_System_String_ * RequestedCatalogItemIds;
  struct Nullable_1_PlayFab_ClientModels_TradeStatus_ Status;
  struct String * TradeId;
};
struct TradeInfo {
  struct TradeInfo__Class *klass;
  struct MonitorData *monitor;
  struct TradeInfo__Fields fields;
};
struct AcceptTradeRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AcceptTradeRequest__StaticFields {
};
struct AcceptTradeRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcceptTradeRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcceptTradeRequest__VTable vtable;
};
struct Nullable_1_PlayFab_ClientModels_TradeStatus___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ClientModels_TradeStatus___StaticFields {
};
struct Nullable_1_PlayFab_ClientModels_TradeStatus___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ClientModels_TradeStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ClientModels_TradeStatus___VTable vtable;
};
struct TradeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TradeInfo__StaticFields {
};
struct TradeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TradeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TradeInfo__VTable vtable;
};
struct AcceptTradeResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AcceptTradeResponse__StaticFields {
};
struct AcceptTradeResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcceptTradeResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcceptTradeResponse__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___VTable {
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
struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AcceptTradeResponse___VTable vtable;
};

struct AddFriendRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * FriendEmail;
  struct String * FriendPlayFabId;
  struct String * FriendTitleDisplayName;
  struct String * FriendUsername;
};
struct AddFriendRequest {
  struct AddFriendRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddFriendRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AddFriendResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AddFriendResult_ {
  struct Action_1_PlayFab_ClientModels_AddFriendResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AddFriendResult___Fields fields;
};
struct AddFriendResult__Fields {
  struct PlayFabResultCommon__Fields _;
  bool Created;
};
struct AddFriendResult {
  struct AddFriendResult__Class *klass;
  struct MonitorData *monitor;
  struct AddFriendResult__Fields fields;
};
struct AddFriendRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddFriendRequest__StaticFields {
};
struct AddFriendRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddFriendRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddFriendRequest__VTable vtable;
};
struct AddFriendResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddFriendResult__StaticFields {
};
struct AddFriendResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddFriendResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddFriendResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AddFriendResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AddFriendResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AddFriendResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AddFriendResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AddFriendResult___VTable vtable;
};

struct AddGenericIDRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct GenericServiceId * GenericId;
};
struct AddGenericIDRequest {
  struct AddGenericIDRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddGenericIDRequest__Fields fields;
};
struct __declspec(align(8)) GenericServiceId__Fields {
  struct String * ServiceName;
  struct String * UserId;
};
struct GenericServiceId {
  struct GenericServiceId__Class *klass;
  struct MonitorData *monitor;
  struct GenericServiceId__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AddGenericIDResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AddGenericIDResult_ {
  struct Action_1_PlayFab_ClientModels_AddGenericIDResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AddGenericIDResult___Fields fields;
};
struct AddGenericIDResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AddGenericIDResult {
  struct AddGenericIDResult__Class *klass;
  struct MonitorData *monitor;
  struct AddGenericIDResult__Fields fields;
};
struct GenericServiceId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GenericServiceId__StaticFields {
};
struct GenericServiceId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericServiceId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericServiceId__VTable vtable;
};
struct AddGenericIDRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddGenericIDRequest__StaticFields {
};
struct AddGenericIDRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddGenericIDRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddGenericIDRequest__VTable vtable;
};
struct AddGenericIDResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddGenericIDResult__StaticFields {
};
struct AddGenericIDResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddGenericIDResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddGenericIDResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AddGenericIDResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AddGenericIDResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AddGenericIDResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AddGenericIDResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AddGenericIDResult___VTable vtable;
};

struct AddOrUpdateContactEmailRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * EmailAddress;
};
struct AddOrUpdateContactEmailRequest {
  struct AddOrUpdateContactEmailRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddOrUpdateContactEmailRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_ {
  struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___Fields fields;
};
struct AddOrUpdateContactEmailResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AddOrUpdateContactEmailResult {
  struct AddOrUpdateContactEmailResult__Class *klass;
  struct MonitorData *monitor;
  struct AddOrUpdateContactEmailResult__Fields fields;
};
struct AddOrUpdateContactEmailRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddOrUpdateContactEmailRequest__StaticFields {
};
struct AddOrUpdateContactEmailRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddOrUpdateContactEmailRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddOrUpdateContactEmailRequest__VTable vtable;
};
struct AddOrUpdateContactEmailResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddOrUpdateContactEmailResult__StaticFields {
};
struct AddOrUpdateContactEmailResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddOrUpdateContactEmailResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddOrUpdateContactEmailResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult___VTable vtable;
};

struct AddSharedGroupMembersRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * PlayFabIds;
  struct String * SharedGroupId;
};
struct AddSharedGroupMembersRequest {
  struct AddSharedGroupMembersRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddSharedGroupMembersRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult_ {
  struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___Fields fields;
};
struct AddSharedGroupMembersResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AddSharedGroupMembersResult {
  struct AddSharedGroupMembersResult__Class *klass;
  struct MonitorData *monitor;
  struct AddSharedGroupMembersResult__Fields fields;
};
struct AddSharedGroupMembersRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddSharedGroupMembersRequest__StaticFields {
};
struct AddSharedGroupMembersRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddSharedGroupMembersRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddSharedGroupMembersRequest__VTable vtable;
};
struct AddSharedGroupMembersResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddSharedGroupMembersResult__StaticFields {
};
struct AddSharedGroupMembersResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddSharedGroupMembersResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddSharedGroupMembersResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult___VTable vtable;
};

struct AddUsernamePasswordRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Email;
  struct String * Password;
  struct String * Username;
};
struct AddUsernamePasswordRequest {
  struct AddUsernamePasswordRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddUsernamePasswordRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult_ {
  struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___Fields fields;
};
struct AddUsernamePasswordResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * Username;
};
struct AddUsernamePasswordResult {
  struct AddUsernamePasswordResult__Class *klass;
  struct MonitorData *monitor;
  struct AddUsernamePasswordResult__Fields fields;
};
struct AddUsernamePasswordRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddUsernamePasswordRequest__StaticFields {
};
struct AddUsernamePasswordRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddUsernamePasswordRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddUsernamePasswordRequest__VTable vtable;
};
struct AddUsernamePasswordResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddUsernamePasswordResult__StaticFields {
};
struct AddUsernamePasswordResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddUsernamePasswordResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddUsernamePasswordResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AddUsernamePasswordResult___VTable vtable;
};

struct AddUserVirtualCurrencyRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  int32_t Amount;
  struct String * VirtualCurrency;
};
struct AddUserVirtualCurrencyRequest {
  struct AddUserVirtualCurrencyRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddUserVirtualCurrencyRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_ {
  struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___Fields fields;
};
struct ModifyUserVirtualCurrencyResult__Fields {
  struct PlayFabResultCommon__Fields _;
  int32_t Balance;
  int32_t BalanceChange;
  struct String * PlayFabId;
  struct String * VirtualCurrency;
};
struct ModifyUserVirtualCurrencyResult {
  struct ModifyUserVirtualCurrencyResult__Class *klass;
  struct MonitorData *monitor;
  struct ModifyUserVirtualCurrencyResult__Fields fields;
};
struct AddUserVirtualCurrencyRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddUserVirtualCurrencyRequest__StaticFields {
};
struct AddUserVirtualCurrencyRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddUserVirtualCurrencyRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddUserVirtualCurrencyRequest__VTable vtable;
};
struct ModifyUserVirtualCurrencyResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ModifyUserVirtualCurrencyResult__StaticFields {
};
struct ModifyUserVirtualCurrencyResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModifyUserVirtualCurrencyResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModifyUserVirtualCurrencyResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___VTable {
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
struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult___VTable vtable;
};

struct AndroidDevicePushNotificationRegistrationRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * ConfirmationMessage;
  struct String * DeviceToken;
  struct Nullable_1_Boolean_ SendPushNotificationConfirmation;
};
struct AndroidDevicePushNotificationRegistrationRequest {
  struct AndroidDevicePushNotificationRegistrationRequest__Class *klass;
  struct MonitorData *monitor;
  struct AndroidDevicePushNotificationRegistrationRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_ {
  struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___Fields fields;
};
struct AndroidDevicePushNotificationRegistrationResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AndroidDevicePushNotificationRegistrationResult {
  struct AndroidDevicePushNotificationRegistrationResult__Class *klass;
  struct MonitorData *monitor;
  struct AndroidDevicePushNotificationRegistrationResult__Fields fields;
};
struct AndroidDevicePushNotificationRegistrationRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AndroidDevicePushNotificationRegistrationRequest__StaticFields {
};
struct AndroidDevicePushNotificationRegistrationRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AndroidDevicePushNotificationRegistrationRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AndroidDevicePushNotificationRegistrationRequest__VTable vtable;
};
struct AndroidDevicePushNotificationRegistrationResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AndroidDevicePushNotificationRegistrationResult__StaticFields {
};
struct AndroidDevicePushNotificationRegistrationResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AndroidDevicePushNotificationRegistrationResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AndroidDevicePushNotificationRegistrationResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult___VTable vtable;
};

struct AttributeInstallRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * Adid;
  struct String * Idfa;
};
struct AttributeInstallRequest {
  struct AttributeInstallRequest__Class *klass;
  struct MonitorData *monitor;
  struct AttributeInstallRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_AttributeInstallResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_AttributeInstallResult_ {
  struct Action_1_PlayFab_ClientModels_AttributeInstallResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_AttributeInstallResult___Fields fields;
};
struct AttributeInstallResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AttributeInstallResult {
  struct AttributeInstallResult__Class *klass;
  struct MonitorData *monitor;
  struct AttributeInstallResult__Fields fields;
};
struct AttributeInstallRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttributeInstallRequest__StaticFields {
};
struct AttributeInstallRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributeInstallRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributeInstallRequest__VTable vtable;
};
struct AttributeInstallResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttributeInstallResult__StaticFields {
};
struct AttributeInstallResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributeInstallResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributeInstallResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_AttributeInstallResult___VTable {
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
struct Action_1_PlayFab_ClientModels_AttributeInstallResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_AttributeInstallResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_AttributeInstallResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_AttributeInstallResult___VTable vtable;
};

struct CancelTradeRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * TradeId;
};
struct CancelTradeRequest {
  struct CancelTradeRequest__Class *klass;
  struct MonitorData *monitor;
  struct CancelTradeRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_CancelTradeResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_CancelTradeResponse_ {
  struct Action_1_PlayFab_ClientModels_CancelTradeResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_CancelTradeResponse___Fields fields;
};
struct CancelTradeResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct TradeInfo * Trade;
};
struct CancelTradeResponse {
  struct CancelTradeResponse__Class *klass;
  struct MonitorData *monitor;
  struct CancelTradeResponse__Fields fields;
};
struct CancelTradeRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancelTradeRequest__StaticFields {
};
struct CancelTradeRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelTradeRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelTradeRequest__VTable vtable;
};
struct CancelTradeResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancelTradeResponse__StaticFields {
};
struct CancelTradeResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelTradeResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelTradeResponse__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_CancelTradeResponse___VTable {
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
struct Action_1_PlayFab_ClientModels_CancelTradeResponse___StaticFields {
};
struct Action_1_PlayFab_ClientModels_CancelTradeResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_CancelTradeResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_CancelTradeResponse___VTable vtable;
};

struct ConfirmPurchaseRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * OrderId;
};
struct ConfirmPurchaseRequest {
  struct ConfirmPurchaseRequest__Class *klass;
  struct MonitorData *monitor;
  struct ConfirmPurchaseRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult_ {
  struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_ConfirmPurchaseResult___Fields fields;
};}