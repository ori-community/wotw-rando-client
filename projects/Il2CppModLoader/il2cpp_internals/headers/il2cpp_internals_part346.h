namespace app {
struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___VTable {
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
struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___StaticFields {
};
struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse___VTable vtable;
};

struct SetGlobalPolicyRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ * Permissions;
};
struct SetGlobalPolicyRequest {
  struct SetGlobalPolicyRequest__Class *klass;
  struct MonitorData *monitor;
  struct SetGlobalPolicyRequest__Fields fields;
};
struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_ {
  struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___Fields fields;
};
struct SetGlobalPolicyResponse__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct SetGlobalPolicyResponse {
  struct SetGlobalPolicyResponse__Class *klass;
  struct MonitorData *monitor;
  struct SetGlobalPolicyResponse__Fields fields;
};
struct SetGlobalPolicyRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetGlobalPolicyRequest__StaticFields {
};
struct SetGlobalPolicyRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetGlobalPolicyRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetGlobalPolicyRequest__VTable vtable;
};
struct SetGlobalPolicyResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetGlobalPolicyResponse__StaticFields {
};
struct SetGlobalPolicyResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetGlobalPolicyResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetGlobalPolicyResponse__VTable vtable;
};
struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___VTable {
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
struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___StaticFields {
};
struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse___VTable vtable;
};

struct SetProfileLanguageRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct EntityKey_7 * Entity;
  int32_t ExpectedVersion;
  struct String * Language;
};
struct SetProfileLanguageRequest {
  struct SetProfileLanguageRequest__Class *klass;
  struct MonitorData *monitor;
  struct SetProfileLanguageRequest__Fields fields;
};
struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_ {
  struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___Fields fields;
};
enum OperationTypes__Enum_2 : int32_t {
  OperationTypes__Enum_2_Created = 0,
  OperationTypes__Enum_2_Updated = 1,
  OperationTypes__Enum_2_Deleted = 2,
  OperationTypes__Enum_2_None = 3,
};
struct OperationTypes__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OperationTypes__Enum_2 value;
};
struct Nullable_1_PlayFab_ProfilesModels_OperationTypes_ {
  enum OperationTypes__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___Boxed {
  struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ProfilesModels_OperationTypes_ fields;
};
struct SetProfileLanguageResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct Nullable_1_PlayFab_ProfilesModels_OperationTypes_ OperationResult;
  struct Nullable_1_Int32_ VersionNumber;
};
struct SetProfileLanguageResponse {
  struct SetProfileLanguageResponse__Class *klass;
  struct MonitorData *monitor;
  struct SetProfileLanguageResponse__Fields fields;
};
struct SetProfileLanguageRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetProfileLanguageRequest__StaticFields {
};
struct SetProfileLanguageRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetProfileLanguageRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetProfileLanguageRequest__VTable vtable;
};
struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___StaticFields {
};
struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ProfilesModels_OperationTypes___VTable vtable;
};
struct SetProfileLanguageResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetProfileLanguageResponse__StaticFields {
};
struct SetProfileLanguageResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetProfileLanguageResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetProfileLanguageResponse__VTable vtable;
};
struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___VTable {
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
struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___StaticFields {
};
struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse___VTable vtable;
};

struct SetEntityProfilePolicyRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct EntityKey_7 * Entity;
  struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ * Statements;
};
struct SetEntityProfilePolicyRequest {
  struct SetEntityProfilePolicyRequest__Class *klass;
  struct MonitorData *monitor;
  struct SetEntityProfilePolicyRequest__Fields fields;
};
struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_ {
  struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___Fields fields;
};
struct SetEntityProfilePolicyResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ProfilesModels_EntityPermissionStatement_ * Permissions;
};
struct SetEntityProfilePolicyResponse {
  struct SetEntityProfilePolicyResponse__Class *klass;
  struct MonitorData *monitor;
  struct SetEntityProfilePolicyResponse__Fields fields;
};
struct SetEntityProfilePolicyRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetEntityProfilePolicyRequest__StaticFields {
};
struct SetEntityProfilePolicyRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetEntityProfilePolicyRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetEntityProfilePolicyRequest__VTable vtable;
};
struct SetEntityProfilePolicyResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetEntityProfilePolicyResponse__StaticFields {
};
struct SetEntityProfilePolicyResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetEntityProfilePolicyResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetEntityProfilePolicyResponse__VTable vtable;
};
struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___VTable {
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
struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___StaticFields {
};
struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse___VTable vtable;
};

struct __declspec(align(8)) PlayFabProfilesInstanceAPI__Fields {
  struct PlayFabApiSettings * ApiSettings;
  struct PlayFabAuthenticationContext * authenticationContext;
};
struct PlayFabProfilesInstanceAPI {
  struct PlayFabProfilesInstanceAPI__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabProfilesInstanceAPI__Fields fields;
};
struct PlayFabProfilesInstanceAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabProfilesInstanceAPI__StaticFields {
};
struct PlayFabProfilesInstanceAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabProfilesInstanceAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabProfilesInstanceAPI__VTable vtable;
};

struct AddCharacterVirtualCurrencyRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  int32_t Amount;
  struct String * CharacterId;
  struct String * PlayFabId;
  struct String * VirtualCurrency;
};
struct AddCharacterVirtualCurrencyRequest {
  struct AddCharacterVirtualCurrencyRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddCharacterVirtualCurrencyRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ {
  struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___Fields fields;
};
struct ModifyCharacterVirtualCurrencyResult__Fields {
  struct PlayFabResultCommon__Fields _;
  int32_t Balance;
  struct String * VirtualCurrency;
};
struct ModifyCharacterVirtualCurrencyResult {
  struct ModifyCharacterVirtualCurrencyResult__Class *klass;
  struct MonitorData *monitor;
  struct ModifyCharacterVirtualCurrencyResult__Fields fields;
};
struct AddCharacterVirtualCurrencyRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddCharacterVirtualCurrencyRequest__StaticFields {
};
struct AddCharacterVirtualCurrencyRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddCharacterVirtualCurrencyRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddCharacterVirtualCurrencyRequest__VTable vtable;
};
struct ModifyCharacterVirtualCurrencyResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ModifyCharacterVirtualCurrencyResult__StaticFields {
};
struct ModifyCharacterVirtualCurrencyResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModifyCharacterVirtualCurrencyResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModifyCharacterVirtualCurrencyResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___VTable {
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
struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult___VTable vtable;
};

struct AddFriendRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * FriendEmail;
  struct String * FriendPlayFabId;
  struct String * FriendTitleDisplayName;
  struct String * FriendUsername;
  struct String * PlayFabId;
};
struct AddFriendRequest_1 {
  struct AddFriendRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct AddFriendRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_EmptyResponse___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_EmptyResponse_ {
  struct Action_1_PlayFab_ServerModels_EmptyResponse___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_EmptyResponse___Fields fields;
};
struct EmptyResponse_3__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct EmptyResponse_3 {
  struct EmptyResponse_3__Class *klass;
  struct MonitorData *monitor;
  struct EmptyResponse_3__Fields fields;
};
struct AddFriendRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddFriendRequest_1__StaticFields {
};
struct AddFriendRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddFriendRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddFriendRequest_1__VTable vtable;
};
struct EmptyResponse_3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EmptyResponse_3__StaticFields {
};
struct EmptyResponse_3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EmptyResponse_3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EmptyResponse_3__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_EmptyResponse___VTable {
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
struct Action_1_PlayFab_ServerModels_EmptyResponse___StaticFields {
};
struct Action_1_PlayFab_ServerModels_EmptyResponse___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_EmptyResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_EmptyResponse___VTable vtable;
};

struct AddPlayerTagRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PlayFabId;
  struct String * TagName;
};
struct AddPlayerTagRequest {
  struct AddPlayerTagRequest__Class *klass;
  struct MonitorData *monitor;
  struct AddPlayerTagRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_AddPlayerTagResult_ {
  struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___Fields fields;
};
struct AddPlayerTagResult__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AddPlayerTagResult {
  struct AddPlayerTagResult__Class *klass;
  struct MonitorData *monitor;
  struct AddPlayerTagResult__Fields fields;
};
struct AddPlayerTagRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddPlayerTagRequest__StaticFields {
};
struct AddPlayerTagRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddPlayerTagRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddPlayerTagRequest__VTable vtable;
};
struct AddPlayerTagResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddPlayerTagResult__StaticFields {
};
struct AddPlayerTagResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddPlayerTagResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddPlayerTagResult__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___VTable {
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
struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_AddPlayerTagResult___VTable vtable;
};

struct AddSharedGroupMembersRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct List_1_System_String_ * PlayFabIds;
  struct String * SharedGroupId;
};
struct AddSharedGroupMembersRequest_1 {
  struct AddSharedGroupMembersRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct AddSharedGroupMembersRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_ {
  struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___Fields fields;
};
struct AddSharedGroupMembersResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
};
struct AddSharedGroupMembersResult_1 {
  struct AddSharedGroupMembersResult_1__Class *klass;
  struct MonitorData *monitor;
  struct AddSharedGroupMembersResult_1__Fields fields;
};
struct AddSharedGroupMembersRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddSharedGroupMembersRequest_1__StaticFields {
};
struct AddSharedGroupMembersRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddSharedGroupMembersRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddSharedGroupMembersRequest_1__VTable vtable;
};
struct AddSharedGroupMembersResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddSharedGroupMembersResult_1__StaticFields {
};
struct AddSharedGroupMembersResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddSharedGroupMembersResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddSharedGroupMembersResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___VTable {
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
struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult___VTable vtable;
};

struct AddUserVirtualCurrencyRequest_1__Fields {
  struct PlayFabRequestCommon__Fields _;
  int32_t Amount;
  struct String * PlayFabId;
  struct String * VirtualCurrency;
};
struct AddUserVirtualCurrencyRequest_1 {
  struct AddUserVirtualCurrencyRequest_1__Class *klass;
  struct MonitorData *monitor;
  struct AddUserVirtualCurrencyRequest_1__Fields fields;
};
struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_ {
  struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___Fields fields;
};
struct ModifyUserVirtualCurrencyResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  int32_t Balance;
  int32_t BalanceChange;
  struct String * PlayFabId;
  struct String * VirtualCurrency;
};
struct ModifyUserVirtualCurrencyResult_1 {
  struct ModifyUserVirtualCurrencyResult_1__Class *klass;
  struct MonitorData *monitor;
  struct ModifyUserVirtualCurrencyResult_1__Fields fields;
};
struct AddUserVirtualCurrencyRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddUserVirtualCurrencyRequest_1__StaticFields {
};
struct AddUserVirtualCurrencyRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddUserVirtualCurrencyRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddUserVirtualCurrencyRequest_1__VTable vtable;
};
struct ModifyUserVirtualCurrencyResult_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ModifyUserVirtualCurrencyResult_1__StaticFields {
};
struct ModifyUserVirtualCurrencyResult_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ModifyUserVirtualCurrencyResult_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ModifyUserVirtualCurrencyResult_1__VTable vtable;
};
struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___VTable {
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
struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___StaticFields {
};
struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult___VTable vtable;
};

struct AuthenticateSessionTicketRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * SessionTicket;
};
struct AuthenticateSessionTicketRequest {
  struct AuthenticateSessionTicketRequest__Class *klass;
  struct MonitorData *monitor;
  struct AuthenticateSessionTicketRequest__Fields fields;
};
struct Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_ {
  struct Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult___Fields fields;
};
struct AuthenticateSessionTicketResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct UserAccountInfo_1 * UserInfo;
};
struct AuthenticateSessionTicketResult {
  struct AuthenticateSessionTicketResult__Class *klass;
  struct MonitorData *monitor;
  struct AuthenticateSessionTicketResult__Fields fields;
};
struct __declspec(align(8)) UserAccountInfo_1__Fields {
  struct UserAndroidDeviceInfo_1 * AndroidDeviceInfo;
  struct DateTime Created;
  struct UserCustomIdInfo_1 * CustomIdInfo;
  struct UserFacebookInfo_1 * FacebookInfo;
  struct UserFacebookInstantGamesIdInfo_1 * FacebookInstantGamesIdInfo;
  struct UserGameCenterInfo_1 * GameCenterInfo;
  struct UserGoogleInfo_1 * GoogleInfo;
  struct UserIosDeviceInfo_1 * IosDeviceInfo;
  struct UserKongregateInfo_1 * KongregateInfo;
  struct UserNintendoSwitchDeviceIdInfo_1 * NintendoSwitchDeviceIdInfo;
  struct List_1_PlayFab_ServerModels_UserOpenIdInfo_ * OpenIdInfo;
  struct String * PlayFabId;
  struct UserPrivateAccountInfo_1 * PrivateInfo;
  struct UserPsnInfo_1 * PsnInfo;
  struct UserSteamInfo_1 * SteamInfo;
  struct UserTitleInfo_1 * TitleInfo;
  struct UserTwitchInfo_1 * TwitchInfo;
  struct String * Username;
  struct UserWindowsHelloInfo_1 * WindowsHelloInfo;
  struct UserXboxInfo_1 * XboxInfo;
};
struct UserAccountInfo_1 {
  struct UserAccountInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserAccountInfo_1__Fields fields;
};
struct __declspec(align(8)) UserAndroidDeviceInfo_1__Fields {
  struct String * AndroidDeviceId;
};
struct UserAndroidDeviceInfo_1 {
  struct UserAndroidDeviceInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserAndroidDeviceInfo_1__Fields fields;
};
struct __declspec(align(8)) UserCustomIdInfo_1__Fields {
  struct String * CustomId;
};
struct UserCustomIdInfo_1 {
  struct UserCustomIdInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserCustomIdInfo_1__Fields fields;
};
struct __declspec(align(8)) UserFacebookInfo_1__Fields {
  struct String * FacebookId;
  struct String * FullName;
};
struct UserFacebookInfo_1 {
  struct UserFacebookInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserFacebookInfo_1__Fields fields;
};
struct __declspec(align(8)) UserFacebookInstantGamesIdInfo_1__Fields {
  struct String * FacebookInstantGamesId;
};
struct UserFacebookInstantGamesIdInfo_1 {
  struct UserFacebookInstantGamesIdInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserFacebookInstantGamesIdInfo_1__Fields fields;
};
struct __declspec(align(8)) UserGameCenterInfo_1__Fields {
  struct String * GameCenterId;
};
struct UserGameCenterInfo_1 {
  struct UserGameCenterInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserGameCenterInfo_1__Fields fields;
};
struct __declspec(align(8)) UserGoogleInfo_1__Fields {
  struct String * GoogleEmail;
  struct String * GoogleGender;
  struct String * GoogleId;
  struct String * GoogleLocale;
};
struct UserGoogleInfo_1 {
  struct UserGoogleInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserGoogleInfo_1__Fields fields;
};
struct __declspec(align(8)) UserIosDeviceInfo_1__Fields {
  struct String * IosDeviceId;
};
struct UserIosDeviceInfo_1 {
  struct UserIosDeviceInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserIosDeviceInfo_1__Fields fields;
};
struct __declspec(align(8)) UserKongregateInfo_1__Fields {
  struct String * KongregateId;
  struct String * KongregateName;
};
struct UserKongregateInfo_1 {
  struct UserKongregateInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserKongregateInfo_1__Fields fields;
};
struct __declspec(align(8)) UserNintendoSwitchDeviceIdInfo_1__Fields {
  struct String * NintendoSwitchDeviceId;
};
struct UserNintendoSwitchDeviceIdInfo_1 {
  struct UserNintendoSwitchDeviceIdInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserNintendoSwitchDeviceIdInfo_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_UserOpenIdInfo___Fields {
  struct UserOpenIdInfo_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_UserOpenIdInfo_ {
  struct List_1_PlayFab_ServerModels_UserOpenIdInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_UserOpenIdInfo___Fields fields;
};
struct __declspec(align(8)) UserOpenIdInfo_1__Fields {
  struct String * ConnectionId;
  struct String * Issuer;
  struct String * Subject;
};
struct UserOpenIdInfo_1 {
  struct UserOpenIdInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserOpenIdInfo_1__Fields fields;
};
struct UserOpenIdInfo_1__Array {
  struct UserOpenIdInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UserOpenIdInfo_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_UserOpenIdInfo_ {
  struct IEnumerator_1_PlayFab_ServerModels_UserOpenIdInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UserPrivateAccountInfo_1__Fields {
  struct String * Email;
};
struct UserPrivateAccountInfo_1 {
  struct UserPrivateAccountInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserPrivateAccountInfo_1__Fields fields;
};
struct __declspec(align(8)) UserPsnInfo_1__Fields {
  struct String * PsnAccountId;
  struct String * PsnOnlineId;
};
struct UserPsnInfo_1 {
  struct UserPsnInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct UserPsnInfo_1__Fields fields;
};
enum TitleActivationStatus__Enum_1 : int32_t {
  TitleActivationStatus__Enum_1_None = 0,
  TitleActivationStatus__Enum_1_ActivatedTitleKey = 1,
  TitleActivationStatus__Enum_1_PendingSteam = 2,
  TitleActivationStatus__Enum_1_ActivatedSteam = 3,
  TitleActivationStatus__Enum_1_RevokedSteam = 4,
};
struct TitleActivationStatus__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TitleActivationStatus__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_TitleActivationStatus_ {
  enum TitleActivationStatus__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_TitleActivationStatus___Boxed {
  struct Nullable_1_PlayFab_ServerModels_TitleActivationStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_TitleActivationStatus_ fields;
};
enum Currency__Enum_1 : int32_t {
  Currency__Enum_1_AED = 0,
  Currency__Enum_1_AFN = 1,
  Currency__Enum_1_ALL = 2,
  Currency__Enum_1_AMD = 3,
  Currency__Enum_1_ANG = 4,
  Currency__Enum_1_AOA = 5,
  Currency__Enum_1_ARS = 6,
  Currency__Enum_1_AUD = 7,
  Currency__Enum_1_AWG = 8,
  Currency__Enum_1_AZN = 9,
  Currency__Enum_1_BAM = 10,
  Currency__Enum_1_BBD = 11,
  Currency__Enum_1_BDT = 12,
  Currency__Enum_1_BGN = 13,
  Currency__Enum_1_BHD = 14,
  Currency__Enum_1_BIF = 15,
  Currency__Enum_1_BMD = 16,
  Currency__Enum_1_BND = 17,
  Currency__Enum_1_BOB = 18,
  Currency__Enum_1_BRL = 19,
  Currency__Enum_1_BSD = 20,
  Currency__Enum_1_BTN = 21,
  Currency__Enum_1_BWP = 22,
  Currency__Enum_1_BYR = 23,
  Currency__Enum_1_BZD = 24,
  Currency__Enum_1_CAD = 25,
  Currency__Enum_1_CDF = 26,
  Currency__Enum_1_CHF = 27,
  Currency__Enum_1_CLP = 28,
  Currency__Enum_1_CNY = 29,
  Currency__Enum_1_COP = 30,
  Currency__Enum_1_CRC = 31,
  Currency__Enum_1_CUC = 32,
  Currency__Enum_1_CUP = 33,
  Currency__Enum_1_CVE = 34,
  Currency__Enum_1_CZK = 35,
  Currency__Enum_1_DJF = 36,
  Currency__Enum_1_DKK = 37,
  Currency__Enum_1_DOP = 38,
  Currency__Enum_1_DZD = 39,
  Currency__Enum_1_EGP = 40,
  Currency__Enum_1_ERN = 41,
  Currency__Enum_1_ETB = 42,
  Currency__Enum_1_EUR = 43,
  Currency__Enum_1_FJD = 44,
  Currency__Enum_1_FKP = 45,
  Currency__Enum_1_GBP = 46,
  Currency__Enum_1_GEL = 47,
  Currency__Enum_1_GGP = 48,
  Currency__Enum_1_GHS = 49,
  Currency__Enum_1_GIP = 50,
  Currency__Enum_1_GMD = 51,
  Currency__Enum_1_GNF = 52,
  Currency__Enum_1_GTQ = 53,
  Currency__Enum_1_GYD = 54,
  Currency__Enum_1_HKD = 55,
  Currency__Enum_1_HNL = 56,
  Currency__Enum_1_HRK = 57,
  Currency__Enum_1_HTG = 58,
  Currency__Enum_1_HUF = 59,
  Currency__Enum_1_IDR = 60,
  Currency__Enum_1_ILS = 61,
  Currency__Enum_1_IMP = 62,
  Currency__Enum_1_INR = 63,
  Currency__Enum_1_IQD = 64,
  Currency__Enum_1_IRR = 65,
  Currency__Enum_1_ISK = 66,
  Currency__Enum_1_JEP = 67,
  Currency__Enum_1_JMD = 68,
  Currency__Enum_1_JOD = 69,
  Currency__Enum_1_JPY = 70,
  Currency__Enum_1_KES = 71,
  Currency__Enum_1_KGS = 72,
  Currency__Enum_1_KHR = 73,
  Currency__Enum_1_KMF = 74,
  Currency__Enum_1_KPW = 75,
  Currency__Enum_1_KRW = 76,
  Currency__Enum_1_KWD = 77,
  Currency__Enum_1_KYD = 78,
  Currency__Enum_1_KZT = 79,
  Currency__Enum_1_LAK = 80,
  Currency__Enum_1_LBP = 81,
  Currency__Enum_1_LKR = 82,
  Currency__Enum_1_LRD = 83,
  Currency__Enum_1_LSL = 84,
  Currency__Enum_1_LYD = 85,
  Currency__Enum_1_MAD = 86,
  Currency__Enum_1_MDL = 87,
  Currency__Enum_1_MGA = 88,
  Currency__Enum_1_MKD = 89,
  Currency__Enum_1_MMK = 90,
  Currency__Enum_1_MNT = 91,
  Currency__Enum_1_MOP = 92,
  Currency__Enum_1_MRO = 93,
  Currency__Enum_1_MUR = 94,
  Currency__Enum_1_MVR = 95,
  Currency__Enum_1_MWK = 96,
  Currency__Enum_1_MXN = 97,
  Currency__Enum_1_MYR = 98,
  Currency__Enum_1_MZN = 99,
  Currency__Enum_1_NAD = 100,
  Currency__Enum_1_NGN = 101,
  Currency__Enum_1_NIO = 102,
  Currency__Enum_1_NOK = 103,
  Currency__Enum_1_NPR = 104,
  Currency__Enum_1_NZD = 105,
  Currency__Enum_1_OMR = 106,
  Currency__Enum_1_PAB = 107,
  Currency__Enum_1_PEN = 108,
  Currency__Enum_1_PGK = 109,
  Currency__Enum_1_PHP = 110,
  Currency__Enum_1_PKR = 111,
  Currency__Enum_1_PLN = 112,
  Currency__Enum_1_PYG = 113,
  Currency__Enum_1_QAR = 114,
  Currency__Enum_1_RON = 115,
  Currency__Enum_1_RSD = 116,
  Currency__Enum_1_RUB = 117,
  Currency__Enum_1_RWF = 118,
  Currency__Enum_1_SAR = 119,
  Currency__Enum_1_SBD = 120,
  Currency__Enum_1_SCR = 121,
  Currency__Enum_1_SDG = 122,
  Currency__Enum_1_SEK = 123,
  Currency__Enum_1_SGD = 124,
  Currency__Enum_1_SHP = 125,
  Currency__Enum_1_SLL = 126,
  Currency__Enum_1_SOS = 127,
  Currency__Enum_1_SPL = 128,
  Currency__Enum_1_SRD = 129,
  Currency__Enum_1_STD = 130,
  Currency__Enum_1_SVC = 131,
  Currency__Enum_1_SYP = 132,
  Currency__Enum_1_SZL = 133,
  Currency__Enum_1_THB = 134,
  Currency__Enum_1_TJS = 135,
  Currency__Enum_1_TMT = 136,
  Currency__Enum_1_TND = 137,
  Currency__Enum_1_TOP = 138,
  Currency__Enum_1_TRY = 139,
  Currency__Enum_1_TTD = 140,
  Currency__Enum_1_TVD = 141,
  Currency__Enum_1_TWD = 142,
  Currency__Enum_1_TZS = 143,
  Currency__Enum_1_UAH = 144,
  Currency__Enum_1_UGX = 145,
  Currency__Enum_1_USD = 146,
  Currency__Enum_1_UYU = 147,
  Currency__Enum_1_UZS = 148,
  Currency__Enum_1_VEF = 149,
  Currency__Enum_1_VND = 150,
  Currency__Enum_1_VUV = 151,
  Currency__Enum_1_WST = 152,
  Currency__Enum_1_XAF = 153,
  Currency__Enum_1_XCD = 154,
  Currency__Enum_1_XDR = 155,
  Currency__Enum_1_XOF = 156,
  Currency__Enum_1_XPF = 157,
  Currency__Enum_1_YER = 158,
  Currency__Enum_1_ZAR = 159,
  Currency__Enum_1_ZMW = 160,
  Currency__Enum_1_ZWD = 161,
};}