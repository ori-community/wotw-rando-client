namespace app {
struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_ {
  struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___Fields fields;
};
struct GetFriendLeaderboardAroundPlayerResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * Leaderboard;
  struct Nullable_1_DateTime_ NextReset;
  int32_t Version;
};
struct GetFriendLeaderboardAroundPlayerResult {
  struct GetFriendLeaderboardAroundPlayerResult__Class *klass;
  struct MonitorData *monitor;
  struct GetFriendLeaderboardAroundPlayerResult__Fields fields;
};
struct GetFriendLeaderboardAroundPlayerRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendLeaderboardAroundPlayerRequest__StaticFields {
};
struct GetFriendLeaderboardAroundPlayerRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendLeaderboardAroundPlayerRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendLeaderboardAroundPlayerRequest__VTable vtable;
};
struct GetFriendLeaderboardAroundPlayerResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendLeaderboardAroundPlayerResult__StaticFields {
};
struct GetFriendLeaderboardAroundPlayerResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendLeaderboardAroundPlayerResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendLeaderboardAroundPlayerResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult___VTable vtable;
};

struct GetFriendsListRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Boolean_ IncludeFacebookFriends;
  struct Nullable_1_Boolean_ IncludeSteamFriends;
  struct PlayerProfileViewConstraints * ProfileConstraints;
  struct String * XboxToken;
};
struct GetFriendsListRequest {
  struct GetFriendsListRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetFriendsListRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetFriendsListResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetFriendsListResult_ {
  struct Action_1_PlayFab_ClientModels_GetFriendsListResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetFriendsListResult___Fields fields;
};
struct GetFriendsListResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_FriendInfo_ * Friends;
};
struct GetFriendsListResult {
  struct GetFriendsListResult__Class *klass;
  struct MonitorData *monitor;
  struct GetFriendsListResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_FriendInfo___Fields {
  struct FriendInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_FriendInfo_ {
  struct List_1_PlayFab_ClientModels_FriendInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_FriendInfo___Fields fields;
};
struct __declspec(align(8)) FriendInfo__Fields {
  struct String * CurrentMatchmakerLobbyId;
  struct UserFacebookInfo * FacebookInfo;
  struct String * FriendPlayFabId;
  struct UserGameCenterInfo * GameCenterInfo;
  struct PlayerProfileModel * Profile;
  struct UserPsnInfo * PSNInfo;
  struct UserSteamInfo * SteamInfo;
  struct List_1_System_String_ * Tags;
  struct String * TitleDisplayName;
  struct String * Username;
  struct UserXboxInfo * XboxInfo;
};
struct FriendInfo {
  struct FriendInfo__Class *klass;
  struct MonitorData *monitor;
  struct FriendInfo__Fields fields;
};
struct FriendInfo__Array {
  struct FriendInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FriendInfo * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_FriendInfo_ {
  struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___Class *klass;
  struct MonitorData *monitor;
};
struct GetFriendsListRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendsListRequest__StaticFields {
};
struct GetFriendsListRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendsListRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendsListRequest__VTable vtable;
};
struct FriendInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FriendInfo__StaticFields {
};
struct FriendInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FriendInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FriendInfo__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_FriendInfo___VTable vtable;
};
struct List_1_PlayFab_ClientModels_FriendInfo___VTable {
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
struct List_1_PlayFab_ClientModels_FriendInfo___StaticFields {
  struct FriendInfo__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_FriendInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_FriendInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_FriendInfo___VTable vtable;
};
struct GetFriendsListResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendsListResult__StaticFields {
};
struct GetFriendsListResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendsListResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendsListResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetFriendsListResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetFriendsListResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetFriendsListResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetFriendsListResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetFriendsListResult___VTable vtable;
};

struct GameServerRegionsRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * BuildVersion;
  struct String * TitleId;
};
struct GameServerRegionsRequest {
  struct GameServerRegionsRequest__Class *klass;
  struct MonitorData *monitor;
  struct GameServerRegionsRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GameServerRegionsResult_ {
  struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___Fields fields;
};
struct GameServerRegionsResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_RegionInfo_ * Regions;
};
struct GameServerRegionsResult {
  struct GameServerRegionsResult__Class *klass;
  struct MonitorData *monitor;
  struct GameServerRegionsResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_RegionInfo___Fields {
  struct RegionInfo_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_RegionInfo_ {
  struct List_1_PlayFab_ClientModels_RegionInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_RegionInfo___Fields fields;
};
struct __declspec(align(8)) RegionInfo_1__Fields {
  bool Available;
  struct String * Name;
  struct String * PingUrl;
  struct Nullable_1_PlayFab_ClientModels_Region_ Region;
};
struct RegionInfo_1 {
  struct RegionInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct RegionInfo_1__Fields fields;
};
struct RegionInfo_1__Array {
  struct RegionInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RegionInfo_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_RegionInfo_ {
  struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___Class *klass;
  struct MonitorData *monitor;
};
struct GameServerRegionsRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameServerRegionsRequest__StaticFields {
};
struct GameServerRegionsRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameServerRegionsRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameServerRegionsRequest__VTable vtable;
};
struct RegionInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RegionInfo_1__StaticFields {
};
struct RegionInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RegionInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RegionInfo_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_RegionInfo___VTable vtable;
};
struct List_1_PlayFab_ClientModels_RegionInfo___VTable {
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
struct List_1_PlayFab_ClientModels_RegionInfo___StaticFields {
  struct RegionInfo_1__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_RegionInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_RegionInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_RegionInfo___VTable vtable;
};
struct GameServerRegionsResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameServerRegionsResult__StaticFields {
};
struct GameServerRegionsResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameServerRegionsResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameServerRegionsResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GameServerRegionsResult___VTable vtable;
};

struct GetLeaderboardRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Int32_ MaxResultsCount;
  struct PlayerProfileViewConstraints * ProfileConstraints;
  int32_t StartPosition;
  struct String * StatisticName;
  struct Nullable_1_Int32_ Version;
};
struct GetLeaderboardRequest {
  struct GetLeaderboardRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardRequest__Fields fields;
};
struct GetLeaderboardRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardRequest__StaticFields {
};
struct GetLeaderboardRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardRequest__VTable vtable;
};

struct GetLeaderboardAroundCharacterRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * CharacterId;
  struct String * CharacterType;
  struct Nullable_1_Int32_ MaxResultsCount;
  struct String * StatisticName;
};
struct GetLeaderboardAroundCharacterRequest {
  struct GetLeaderboardAroundCharacterRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardAroundCharacterRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_ {
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___Fields fields;
};
struct GetLeaderboardAroundCharacterResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_CharacterLeaderboardEntry_ * Leaderboard;
};
struct GetLeaderboardAroundCharacterResult {
  struct GetLeaderboardAroundCharacterResult__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardAroundCharacterResult__Fields fields;
};
struct GetLeaderboardAroundCharacterRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardAroundCharacterRequest__StaticFields {
};
struct GetLeaderboardAroundCharacterRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardAroundCharacterRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardAroundCharacterRequest__VTable vtable;
};
struct GetLeaderboardAroundCharacterResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardAroundCharacterResult__StaticFields {
};
struct GetLeaderboardAroundCharacterResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardAroundCharacterResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardAroundCharacterResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult___VTable vtable;
};

struct GetLeaderboardAroundPlayerRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Int32_ MaxResultsCount;
  struct String * PlayFabId;
  struct PlayerProfileViewConstraints * ProfileConstraints;
  struct String * StatisticName;
  struct Nullable_1_Int32_ Version;
};
struct GetLeaderboardAroundPlayerRequest {
  struct GetLeaderboardAroundPlayerRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardAroundPlayerRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_ {
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___Fields fields;
};
struct GetLeaderboardAroundPlayerResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * Leaderboard;
  struct Nullable_1_DateTime_ NextReset;
  int32_t Version;
};
struct GetLeaderboardAroundPlayerResult {
  struct GetLeaderboardAroundPlayerResult__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardAroundPlayerResult__Fields fields;
};
struct GetLeaderboardAroundPlayerRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardAroundPlayerRequest__StaticFields {
};
struct GetLeaderboardAroundPlayerRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardAroundPlayerRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardAroundPlayerRequest__VTable vtable;
};
struct GetLeaderboardAroundPlayerResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardAroundPlayerResult__StaticFields {
};
struct GetLeaderboardAroundPlayerResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardAroundPlayerResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardAroundPlayerResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult___VTable vtable;
};

struct GetLeaderboardForUsersCharactersRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  int32_t MaxResultsCount;
  struct String * StatisticName;
};
struct GetLeaderboardForUsersCharactersRequest {
  struct GetLeaderboardForUsersCharactersRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardForUsersCharactersRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_ {
  struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___Fields fields;
};
struct GetLeaderboardForUsersCharactersResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_CharacterLeaderboardEntry_ * Leaderboard;
};
struct GetLeaderboardForUsersCharactersResult {
  struct GetLeaderboardForUsersCharactersResult__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardForUsersCharactersResult__Fields fields;
};
struct GetLeaderboardForUsersCharactersRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardForUsersCharactersRequest__StaticFields {
};
struct GetLeaderboardForUsersCharactersRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardForUsersCharactersRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardForUsersCharactersRequest__VTable vtable;
};
struct GetLeaderboardForUsersCharactersResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetLeaderboardForUsersCharactersResult__StaticFields {
};
struct GetLeaderboardForUsersCharactersResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetLeaderboardForUsersCharactersResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetLeaderboardForUsersCharactersResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult___VTable vtable;
};

struct GetPaymentTokenRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * TokenProvider;
};
struct GetPaymentTokenRequest {
  struct GetPaymentTokenRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPaymentTokenRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult_ {
  struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___Fields fields;
};
struct GetPaymentTokenResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * OrderId;
  struct String * ProviderToken;
};
struct GetPaymentTokenResult {
  struct GetPaymentTokenResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPaymentTokenResult__Fields fields;
};
struct GetPaymentTokenRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPaymentTokenRequest__StaticFields {
};
struct GetPaymentTokenRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPaymentTokenRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPaymentTokenRequest__VTable vtable;
};
struct GetPaymentTokenResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPaymentTokenResult__StaticFields {
};
struct GetPaymentTokenResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPaymentTokenResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPaymentTokenResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPaymentTokenResult___VTable vtable;
};

struct GetPhotonAuthenticationTokenRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct String * PhotonApplicationId;
};
struct GetPhotonAuthenticationTokenRequest {
  struct GetPhotonAuthenticationTokenRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPhotonAuthenticationTokenRequest__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_ {
  struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___Fields fields;
};
struct GetPhotonAuthenticationTokenResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct String * PhotonCustomAuthenticationToken;
};
struct GetPhotonAuthenticationTokenResult {
  struct GetPhotonAuthenticationTokenResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPhotonAuthenticationTokenResult__Fields fields;
};
struct GetPhotonAuthenticationTokenRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPhotonAuthenticationTokenRequest__StaticFields {
};
struct GetPhotonAuthenticationTokenRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPhotonAuthenticationTokenRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPhotonAuthenticationTokenRequest__VTable vtable;
};
struct GetPhotonAuthenticationTokenResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetPhotonAuthenticationTokenResult__StaticFields {
};
struct GetPhotonAuthenticationTokenResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetPhotonAuthenticationTokenResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetPhotonAuthenticationTokenResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___VTable {
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
struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult___VTable vtable;
};

struct GetPlayerCombinedInfoRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct GetPlayerCombinedInfoRequestParams * InfoRequestParameters;
  struct String * PlayFabId;
};
struct GetPlayerCombinedInfoRequest {
  struct GetPlayerCombinedInfoRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerCombinedInfoRequest__Fields fields;
};
struct __declspec(align(8)) GetPlayerCombinedInfoRequestParams__Fields {
  bool GetCharacterInventories;
  bool GetCharacterList;
  bool GetPlayerProfile;
  bool GetPlayerStatistics;
  bool GetTitleData;
  bool GetUserAccountInfo;
  bool GetUserData;
  bool GetUserInventory;
  bool GetUserReadOnlyData;
  bool GetUserVirtualCurrency;
  struct List_1_System_String_ * PlayerStatisticNames;
  struct PlayerProfileViewConstraints * ProfileConstraints;
  struct List_1_System_String_ * TitleDataKeys;
  struct List_1_System_String_ * UserDataKeys;
  struct List_1_System_String_ * UserReadOnlyDataKeys;
};
struct GetPlayerCombinedInfoRequestParams {
  struct GetPlayerCombinedInfoRequestParams__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerCombinedInfoRequestParams__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_ {
  struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult___Fields fields;
};
struct GetPlayerCombinedInfoResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct GetPlayerCombinedInfoResultPayload * InfoResultPayload;
  struct String * PlayFabId;
};
struct GetPlayerCombinedInfoResult {
  struct GetPlayerCombinedInfoResult__Class *klass;
  struct MonitorData *monitor;
  struct GetPlayerCombinedInfoResult__Fields fields;
};}