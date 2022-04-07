namespace app {
struct GameInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameInfo__StaticFields {
};
struct GameInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameInfo__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_GameInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ClientModels_GameInfo___StaticFields {
};
struct IEnumerator_1_PlayFab_ClientModels_GameInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ClientModels_GameInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ClientModels_GameInfo___VTable vtable;
};
struct List_1_PlayFab_ClientModels_GameInfo___VTable {
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
struct List_1_PlayFab_ClientModels_GameInfo___StaticFields {
  struct GameInfo__Array * _emptyArray;
};
struct List_1_PlayFab_ClientModels_GameInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ClientModels_GameInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ClientModels_GameInfo___VTable vtable;
};
struct CurrentGamesResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CurrentGamesResult__StaticFields {
};
struct CurrentGamesResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CurrentGamesResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CurrentGamesResult__VTable vtable;
};
struct Action_1_PlayFab_ClientModels_CurrentGamesResult___VTable {
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
struct Action_1_PlayFab_ClientModels_CurrentGamesResult___StaticFields {
};
struct Action_1_PlayFab_ClientModels_CurrentGamesResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_ClientModels_CurrentGamesResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_ClientModels_CurrentGamesResult___VTable vtable;
};

struct GetFriendLeaderboardRequest__Fields {
  struct PlayFabRequestCommon__Fields _;
  struct Nullable_1_Boolean_ IncludeFacebookFriends;
  struct Nullable_1_Boolean_ IncludeSteamFriends;
  struct Nullable_1_Int32_ MaxResultsCount;
  struct PlayerProfileViewConstraints * ProfileConstraints;
  int32_t StartPosition;
  struct String * StatisticName;
  struct Nullable_1_Int32_ Version;
  struct String * XboxToken;
};
struct GetFriendLeaderboardRequest {
  struct GetFriendLeaderboardRequest__Class *klass;
  struct MonitorData *monitor;
  struct GetFriendLeaderboardRequest__Fields fields;
};
struct __declspec(align(8)) PlayerProfileViewConstraints__Fields {
  bool ShowAvatarUrl;
  bool ShowBannedUntil;
  bool ShowCampaignAttributions;
  bool ShowContactEmailAddresses;
  bool ShowCreated;
  bool ShowDisplayName;
  bool ShowLastLogin;
  bool ShowLinkedAccounts;
  bool ShowLocations;
  bool ShowMemberships;
  bool ShowOrigination;
  bool ShowPushNotificationRegistrations;
  bool ShowStatistics;
  bool ShowTags;
  bool ShowTotalValueToDateInUsd;
  bool ShowValuesToDate;
};
struct PlayerProfileViewConstraints {
  struct PlayerProfileViewConstraints__Class *klass;
  struct MonitorData *monitor;
  struct PlayerProfileViewConstraints__Fields fields;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_ClientModels_GetLeaderboardResult_ {
  struct Action_1_PlayFab_ClientModels_GetLeaderboardResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_ClientModels_GetLeaderboardResult___Fields fields;
};
struct GetLeaderboardResult__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * Leaderboard;
  struct Nullable_1_DateTime_ NextReset;
  int32_t Version;
};
struct GetLeaderboardResult {
  struct GetLeaderboardResult__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardResult__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_PlayerLeaderboardEntry___Fields {
  struct PlayerLeaderboardEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ {
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry___Fields fields;
};
struct __declspec(align(8)) PlayerLeaderboardEntry__Fields {
  struct String * DisplayName;
  struct String * PlayFabId;
  int32_t Position;
  struct PlayerProfileModel * Profile;
  int32_t StatValue;
};
struct PlayerLeaderboardEntry {
  struct PlayerLeaderboardEntry__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLeaderboardEntry__Fields fields;
};
struct PlayerLeaderboardEntry__Array {
  struct PlayerLeaderboardEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLeaderboardEntry * vector[32];
};
enum LoginIdentityProvider__Enum : int32_t {
  LoginIdentityProvider__Enum_Unknown = 0,
  LoginIdentityProvider__Enum_PlayFab = 1,
  LoginIdentityProvider__Enum_Custom = 2,
  LoginIdentityProvider__Enum_GameCenter = 3,
  LoginIdentityProvider__Enum_GooglePlay = 4,
  LoginIdentityProvider__Enum_Steam = 5,
  LoginIdentityProvider__Enum_XBoxLive = 6,
  LoginIdentityProvider__Enum_PSN = 7,
  LoginIdentityProvider__Enum_Kongregate = 8,
  LoginIdentityProvider__Enum_Facebook = 9,
  LoginIdentityProvider__Enum_IOSDevice = 10,
  LoginIdentityProvider__Enum_AndroidDevice = 11,
  LoginIdentityProvider__Enum_Twitch = 12,
  LoginIdentityProvider__Enum_WindowsHello = 13,
  LoginIdentityProvider__Enum_GameServer = 14,
  LoginIdentityProvider__Enum_CustomServer = 15,
  LoginIdentityProvider__Enum_NintendoSwitch = 16,
  LoginIdentityProvider__Enum_FacebookInstantGames = 17,
  LoginIdentityProvider__Enum_OpenIdConnect = 18,
};
struct LoginIdentityProvider__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoginIdentityProvider__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ {
  enum LoginIdentityProvider__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider___Boxed {
  struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ fields;
};
struct __declspec(align(8)) PlayerProfileModel__Fields {
  struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel_ * AdCampaignAttributions;
  struct String * AvatarUrl;
  struct Nullable_1_DateTime_ BannedUntil;
  struct List_1_PlayFab_ClientModels_ContactEmailInfoModel_ * ContactEmailAddresses;
  struct Nullable_1_DateTime_ Created;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ LastLogin;
  struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ * LinkedAccounts;
  struct List_1_PlayFab_ClientModels_LocationModel_ * Locations;
  struct List_1_PlayFab_ClientModels_MembershipModel_ * Memberships;
  struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ Origination;
  struct String * PlayerId;
  struct String * PublisherId;
  struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ * PushNotificationRegistrations;
  struct List_1_PlayFab_ClientModels_StatisticModel_ * Statistics;
  struct List_1_PlayFab_ClientModels_TagModel_ * Tags;
  struct String * TitleId;
  struct Nullable_1_UInt32_ TotalValueToDateInUSD;
  struct List_1_PlayFab_ClientModels_ValueToDateModel_ * ValuesToDate;
};
struct PlayerProfileModel {
  struct PlayerProfileModel__Class *klass;
  struct MonitorData *monitor;
  struct PlayerProfileModel__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Fields {
  struct AdCampaignAttributionModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel_ {
  struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Fields fields;
};
struct __declspec(align(8)) AdCampaignAttributionModel__Fields {
  struct DateTime AttributedAt;
  struct String * CampaignId;
  struct String * Platform;
};
struct AdCampaignAttributionModel {
  struct AdCampaignAttributionModel__Class *klass;
  struct MonitorData *monitor;
  struct AdCampaignAttributionModel__Fields fields;
};
struct AdCampaignAttributionModel__Array {
  struct AdCampaignAttributionModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AdCampaignAttributionModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_ContactEmailInfoModel___Fields {
  struct ContactEmailInfoModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_ContactEmailInfoModel_ {
  struct List_1_PlayFab_ClientModels_ContactEmailInfoModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_ContactEmailInfoModel___Fields fields;
};
enum EmailVerificationStatus__Enum : int32_t {
  EmailVerificationStatus__Enum_Unverified = 0,
  EmailVerificationStatus__Enum_Pending = 1,
  EmailVerificationStatus__Enum_Confirmed = 2,
};
struct EmailVerificationStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EmailVerificationStatus__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ {
  enum EmailVerificationStatus__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Boxed {
  struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ fields;
};
struct __declspec(align(8)) ContactEmailInfoModel__Fields {
  struct String * EmailAddress;
  struct String * Name;
  struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ VerificationStatus;
};
struct ContactEmailInfoModel {
  struct ContactEmailInfoModel__Class *klass;
  struct MonitorData *monitor;
  struct ContactEmailInfoModel__Fields fields;
};
struct ContactEmailInfoModel__Array {
  struct ContactEmailInfoModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ContactEmailInfoModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_ContactEmailInfoModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_ContactEmailInfoModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Fields {
  struct LinkedPlatformAccountModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ {
  struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Fields fields;
};
struct __declspec(align(8)) LinkedPlatformAccountModel__Fields {
  struct String * Email;
  struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * Username;
};
struct LinkedPlatformAccountModel {
  struct LinkedPlatformAccountModel__Class *klass;
  struct MonitorData *monitor;
  struct LinkedPlatformAccountModel__Fields fields;
};
struct LinkedPlatformAccountModel__Array {
  struct LinkedPlatformAccountModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LinkedPlatformAccountModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_LocationModel___Fields {
  struct LocationModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_LocationModel_ {
  struct List_1_PlayFab_ClientModels_LocationModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_LocationModel___Fields fields;
};
enum ContinentCode__Enum : int32_t {
  ContinentCode__Enum_AF = 0,
  ContinentCode__Enum_AN = 1,
  ContinentCode__Enum_AS = 2,
  ContinentCode__Enum_EU = 3,
  ContinentCode__Enum_NA = 4,
  ContinentCode__Enum_OC = 5,
  ContinentCode__Enum_SA = 6,
};
struct ContinentCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ContinentCode__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_ContinentCode_ {
  enum ContinentCode__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_ContinentCode___Boxed {
  struct Nullable_1_PlayFab_ClientModels_ContinentCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_ContinentCode_ fields;
};
enum CountryCode__Enum : int32_t {
  CountryCode__Enum_AF = 0,
  CountryCode__Enum_AX = 1,
  CountryCode__Enum_AL = 2,
  CountryCode__Enum_DZ = 3,
  CountryCode__Enum_AS = 4,
  CountryCode__Enum_AD = 5,
  CountryCode__Enum_AO = 6,
  CountryCode__Enum_AI = 7,
  CountryCode__Enum_AQ = 8,
  CountryCode__Enum_AG = 9,
  CountryCode__Enum_AR = 10,
  CountryCode__Enum_AM = 11,
  CountryCode__Enum_AW = 12,
  CountryCode__Enum_AU = 13,
  CountryCode__Enum_AT = 14,
  CountryCode__Enum_AZ = 15,
  CountryCode__Enum_BS = 16,
  CountryCode__Enum_BH = 17,
  CountryCode__Enum_BD = 18,
  CountryCode__Enum_BB = 19,
  CountryCode__Enum_BY = 20,
  CountryCode__Enum_BE = 21,
  CountryCode__Enum_BZ = 22,
  CountryCode__Enum_BJ = 23,
  CountryCode__Enum_BM = 24,
  CountryCode__Enum_BT = 25,
  CountryCode__Enum_BO = 26,
  CountryCode__Enum_BQ = 27,
  CountryCode__Enum_BA = 28,
  CountryCode__Enum_BW = 29,
  CountryCode__Enum_BV = 30,
  CountryCode__Enum_BR = 31,
  CountryCode__Enum_IO = 32,
  CountryCode__Enum_BN = 33,
  CountryCode__Enum_BG = 34,
  CountryCode__Enum_BF = 35,
  CountryCode__Enum_BI = 36,
  CountryCode__Enum_KH = 37,
  CountryCode__Enum_CM = 38,
  CountryCode__Enum_CA = 39,
  CountryCode__Enum_CV = 40,
  CountryCode__Enum_KY = 41,
  CountryCode__Enum_CF = 42,
  CountryCode__Enum_TD = 43,
  CountryCode__Enum_CL = 44,
  CountryCode__Enum_CN = 45,
  CountryCode__Enum_CX = 46,
  CountryCode__Enum_CC = 47,
  CountryCode__Enum_CO = 48,
  CountryCode__Enum_KM = 49,
  CountryCode__Enum_CG = 50,
  CountryCode__Enum_CD = 51,
  CountryCode__Enum_CK = 52,
  CountryCode__Enum_CR = 53,
  CountryCode__Enum_CI = 54,
  CountryCode__Enum_HR = 55,
  CountryCode__Enum_CU = 56,
  CountryCode__Enum_CW = 57,
  CountryCode__Enum_CY = 58,
  CountryCode__Enum_CZ = 59,
  CountryCode__Enum_DK = 60,
  CountryCode__Enum_DJ = 61,
  CountryCode__Enum_DM = 62,
  CountryCode__Enum_DO = 63,
  CountryCode__Enum_EC = 64,
  CountryCode__Enum_EG = 65,
  CountryCode__Enum_SV = 66,
  CountryCode__Enum_GQ = 67,
  CountryCode__Enum_ER = 68,
  CountryCode__Enum_EE = 69,
  CountryCode__Enum_ET = 70,
  CountryCode__Enum_FK = 71,
  CountryCode__Enum_FO = 72,
  CountryCode__Enum_FJ = 73,
  CountryCode__Enum_FI = 74,
  CountryCode__Enum_FR = 75,
  CountryCode__Enum_GF = 76,
  CountryCode__Enum_PF = 77,
  CountryCode__Enum_TF = 78,
  CountryCode__Enum_GA = 79,
  CountryCode__Enum_GM = 80,
  CountryCode__Enum_GE = 81,
  CountryCode__Enum_DE = 82,
  CountryCode__Enum_GH = 83,
  CountryCode__Enum_GI = 84,
  CountryCode__Enum_GR = 85,
  CountryCode__Enum_GL = 86,
  CountryCode__Enum_GD = 87,
  CountryCode__Enum_GP = 88,
  CountryCode__Enum_GU = 89,
  CountryCode__Enum_GT = 90,
  CountryCode__Enum_GG = 91,
  CountryCode__Enum_GN = 92,
  CountryCode__Enum_GW = 93,
  CountryCode__Enum_GY = 94,
  CountryCode__Enum_HT = 95,
  CountryCode__Enum_HM = 96,
  CountryCode__Enum_VA = 97,
  CountryCode__Enum_HN = 98,
  CountryCode__Enum_HK = 99,
  CountryCode__Enum_HU = 100,
  CountryCode__Enum_IS = 101,
  CountryCode__Enum_IN = 102,
  CountryCode__Enum_ID = 103,
  CountryCode__Enum_IR = 104,
  CountryCode__Enum_IQ = 105,
  CountryCode__Enum_IE = 106,
  CountryCode__Enum_IM = 107,
  CountryCode__Enum_IL = 108,
  CountryCode__Enum_IT = 109,
  CountryCode__Enum_JM = 110,
  CountryCode__Enum_JP = 111,
  CountryCode__Enum_JE = 112,
  CountryCode__Enum_JO = 113,
  CountryCode__Enum_KZ = 114,
  CountryCode__Enum_KE = 115,
  CountryCode__Enum_KI = 116,
  CountryCode__Enum_KP = 117,
  CountryCode__Enum_KR = 118,
  CountryCode__Enum_KW = 119,
  CountryCode__Enum_KG = 120,
  CountryCode__Enum_LA = 121,
  CountryCode__Enum_LV = 122,
  CountryCode__Enum_LB = 123,
  CountryCode__Enum_LS = 124,
  CountryCode__Enum_LR = 125,
  CountryCode__Enum_LY = 126,
  CountryCode__Enum_LI = 127,
  CountryCode__Enum_LT = 128,
  CountryCode__Enum_LU = 129,
  CountryCode__Enum_MO = 130,
  CountryCode__Enum_MK = 131,
  CountryCode__Enum_MG = 132,
  CountryCode__Enum_MW = 133,
  CountryCode__Enum_MY = 134,
  CountryCode__Enum_MV = 135,
  CountryCode__Enum_ML = 136,
  CountryCode__Enum_MT = 137,
  CountryCode__Enum_MH = 138,
  CountryCode__Enum_MQ = 139,
  CountryCode__Enum_MR = 140,
  CountryCode__Enum_MU = 141,
  CountryCode__Enum_YT = 142,
  CountryCode__Enum_MX = 143,
  CountryCode__Enum_FM = 144,
  CountryCode__Enum_MD = 145,
  CountryCode__Enum_MC = 146,
  CountryCode__Enum_MN = 147,
  CountryCode__Enum_ME = 148,
  CountryCode__Enum_MS = 149,
  CountryCode__Enum_MA = 150,
  CountryCode__Enum_MZ = 151,
  CountryCode__Enum_MM = 152,
  CountryCode__Enum_NA = 153,
  CountryCode__Enum_NR = 154,
  CountryCode__Enum_NP = 155,
  CountryCode__Enum_NL = 156,
  CountryCode__Enum_NC = 157,
  CountryCode__Enum_NZ = 158,
  CountryCode__Enum_NI = 159,
  CountryCode__Enum_NE = 160,
  CountryCode__Enum_NG = 161,
  CountryCode__Enum_NU = 162,
  CountryCode__Enum_NF = 163,
  CountryCode__Enum_MP = 164,
  CountryCode__Enum_NO = 165,
  CountryCode__Enum_OM = 166,
  CountryCode__Enum_PK = 167,
  CountryCode__Enum_PW = 168,
  CountryCode__Enum_PS = 169,
  CountryCode__Enum_PA = 170,
  CountryCode__Enum_PG = 171,
  CountryCode__Enum_PY = 172,
  CountryCode__Enum_PE = 173,
  CountryCode__Enum_PH = 174,
  CountryCode__Enum_PN = 175,
  CountryCode__Enum_PL = 176,
  CountryCode__Enum_PT = 177,
  CountryCode__Enum_PR = 178,
  CountryCode__Enum_QA = 179,
  CountryCode__Enum_RE = 180,
  CountryCode__Enum_RO = 181,
  CountryCode__Enum_RU = 182,
  CountryCode__Enum_RW = 183,
  CountryCode__Enum_BL = 184,
  CountryCode__Enum_SH = 185,
  CountryCode__Enum_KN = 186,
  CountryCode__Enum_LC = 187,
  CountryCode__Enum_MF = 188,
  CountryCode__Enum_PM = 189,
  CountryCode__Enum_VC = 190,
  CountryCode__Enum_WS = 191,
  CountryCode__Enum_SM = 192,
  CountryCode__Enum_ST = 193,
  CountryCode__Enum_SA = 194,
  CountryCode__Enum_SN = 195,
  CountryCode__Enum_RS = 196,
  CountryCode__Enum_SC = 197,
  CountryCode__Enum_SL = 198,
  CountryCode__Enum_SG = 199,
  CountryCode__Enum_SX = 200,
  CountryCode__Enum_SK = 201,
  CountryCode__Enum_SI = 202,
  CountryCode__Enum_SB = 203,
  CountryCode__Enum_SO = 204,
  CountryCode__Enum_ZA = 205,
  CountryCode__Enum_GS = 206,
  CountryCode__Enum_SS = 207,
  CountryCode__Enum_ES = 208,
  CountryCode__Enum_LK = 209,
  CountryCode__Enum_SD = 210,
  CountryCode__Enum_SR = 211,
  CountryCode__Enum_SJ = 212,
  CountryCode__Enum_SZ = 213,
  CountryCode__Enum_SE = 214,
  CountryCode__Enum_CH = 215,
  CountryCode__Enum_SY = 216,
  CountryCode__Enum_TW = 217,
  CountryCode__Enum_TJ = 218,
  CountryCode__Enum_TZ = 219,
  CountryCode__Enum_TH = 220,
  CountryCode__Enum_TL = 221,
  CountryCode__Enum_TG = 222,
  CountryCode__Enum_TK = 223,
  CountryCode__Enum_TO = 224,
  CountryCode__Enum_TT = 225,
  CountryCode__Enum_TN = 226,
  CountryCode__Enum_TR = 227,
  CountryCode__Enum_TM = 228,
  CountryCode__Enum_TC = 229,
  CountryCode__Enum_TV = 230,
  CountryCode__Enum_UG = 231,
  CountryCode__Enum_UA = 232,
  CountryCode__Enum_AE = 233,
  CountryCode__Enum_GB = 234,
  CountryCode__Enum_US = 235,
  CountryCode__Enum_UM = 236,
  CountryCode__Enum_UY = 237,
  CountryCode__Enum_UZ = 238,
  CountryCode__Enum_VU = 239,
  CountryCode__Enum_VE = 240,
  CountryCode__Enum_VN = 241,
  CountryCode__Enum_VG = 242,
  CountryCode__Enum_VI = 243,
  CountryCode__Enum_WF = 244,
  CountryCode__Enum_EH = 245,
  CountryCode__Enum_YE = 246,
  CountryCode__Enum_ZM = 247,
  CountryCode__Enum_ZW = 248,
};
struct CountryCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CountryCode__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_CountryCode_ {
  enum CountryCode__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_CountryCode___Boxed {
  struct Nullable_1_PlayFab_ClientModels_CountryCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_CountryCode_ fields;
};
struct __declspec(align(8)) LocationModel__Fields {
  struct String * City;
  struct Nullable_1_PlayFab_ClientModels_ContinentCode_ ContinentCode;
  struct Nullable_1_PlayFab_ClientModels_CountryCode_ CountryCode;
  struct Nullable_1_Double_ Latitude;
  struct Nullable_1_Double_ Longitude;
};
struct LocationModel {
  struct LocationModel__Class *klass;
  struct MonitorData *monitor;
  struct LocationModel__Fields fields;
};
struct LocationModel__Array {
  struct LocationModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocationModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_LocationModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_LocationModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_MembershipModel___Fields {
  struct MembershipModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_MembershipModel_ {
  struct List_1_PlayFab_ClientModels_MembershipModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_MembershipModel___Fields fields;
};
struct __declspec(align(8)) MembershipModel__Fields {
  bool IsActive;
  struct DateTime MembershipExpiration;
  struct String * MembershipId;
  struct Nullable_1_DateTime_ OverrideExpiration;
  struct List_1_PlayFab_ClientModels_SubscriptionModel_ * Subscriptions;
};
struct MembershipModel {
  struct MembershipModel__Class *klass;
  struct MonitorData *monitor;
  struct MembershipModel__Fields fields;
};
struct MembershipModel__Array {
  struct MembershipModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MembershipModel * vector[32];
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_SubscriptionModel___Fields {
  struct SubscriptionModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_SubscriptionModel_ {
  struct List_1_PlayFab_ClientModels_SubscriptionModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_SubscriptionModel___Fields fields;
};
enum SubscriptionProviderStatus__Enum : int32_t {
  SubscriptionProviderStatus__Enum_NoError = 0,
  SubscriptionProviderStatus__Enum_Cancelled = 1,
  SubscriptionProviderStatus__Enum_UnknownError = 2,
  SubscriptionProviderStatus__Enum_BillingError = 3,
  SubscriptionProviderStatus__Enum_ProductUnavailable = 4,
  SubscriptionProviderStatus__Enum_CustomerDidNotAcceptPriceChange = 5,
  SubscriptionProviderStatus__Enum_FreeTrial = 6,
  SubscriptionProviderStatus__Enum_PaymentPending = 7,
};
struct SubscriptionProviderStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SubscriptionProviderStatus__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ {
  enum SubscriptionProviderStatus__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus___Boxed {
  struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ fields;
};
struct __declspec(align(8)) SubscriptionModel__Fields {
  struct DateTime Expiration;
  struct DateTime InitialSubscriptionTime;
  bool IsActive;
  struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ Status;
  struct String * SubscriptionId;
  struct String * SubscriptionItemId;
  struct String * SubscriptionProvider;
};
struct SubscriptionModel {
  struct SubscriptionModel__Class *klass;
  struct MonitorData *monitor;
  struct SubscriptionModel__Fields fields;
};
struct SubscriptionModel__Array {
  struct SubscriptionModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SubscriptionModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_SubscriptionModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_SubscriptionModel___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ClientModels_MembershipModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_MembershipModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Fields {
  struct PushNotificationRegistrationModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ {
  struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Fields fields;
};
enum PushNotificationPlatform__Enum : int32_t {
  PushNotificationPlatform__Enum_ApplePushNotificationService = 0,
  PushNotificationPlatform__Enum_GoogleCloudMessaging = 1,
};
struct PushNotificationPlatform__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PushNotificationPlatform__Enum value;
};
struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ {
  enum PushNotificationPlatform__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform___Boxed {
  struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ fields;
};
struct __declspec(align(8)) PushNotificationRegistrationModel__Fields {
  struct String * NotificationEndpointARN;
  struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ Platform;
};
struct PushNotificationRegistrationModel {
  struct PushNotificationRegistrationModel__Class *klass;
  struct MonitorData *monitor;
  struct PushNotificationRegistrationModel__Fields fields;
};
struct PushNotificationRegistrationModel__Array {
  struct PushNotificationRegistrationModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PushNotificationRegistrationModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_StatisticModel___Fields {
  struct StatisticModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_StatisticModel_ {
  struct List_1_PlayFab_ClientModels_StatisticModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_StatisticModel___Fields fields;
};
struct __declspec(align(8)) StatisticModel__Fields {
  struct String * Name;
  int32_t Value;
  int32_t Version;
};
struct StatisticModel {
  struct StatisticModel__Class *klass;
  struct MonitorData *monitor;
  struct StatisticModel__Fields fields;
};
struct StatisticModel__Array {
  struct StatisticModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_StatisticModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_StatisticModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_TagModel___Fields {
  struct TagModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_TagModel_ {
  struct List_1_PlayFab_ClientModels_TagModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_TagModel___Fields fields;
};
struct __declspec(align(8)) TagModel__Fields {
  struct String * TagValue;
};
struct TagModel {
  struct TagModel__Class *klass;
  struct MonitorData *monitor;
  struct TagModel__Fields fields;
};
struct TagModel__Array {
  struct TagModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TagModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_TagModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_TagModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ClientModels_ValueToDateModel___Fields {
  struct ValueToDateModel__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ClientModels_ValueToDateModel_ {
  struct List_1_PlayFab_ClientModels_ValueToDateModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ClientModels_ValueToDateModel___Fields fields;
};
struct __declspec(align(8)) ValueToDateModel__Fields {
  struct String * Currency;
  uint32_t TotalValue;
  struct String * TotalValueAsDecimal;
};
struct ValueToDateModel {
  struct ValueToDateModel__Class *klass;
  struct MonitorData *monitor;
  struct ValueToDateModel__Fields fields;
};
struct ValueToDateModel__Array {
  struct ValueToDateModel__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValueToDateModel * vector[32];
};
struct IEnumerator_1_PlayFab_ClientModels_ValueToDateModel_ {
  struct IEnumerator_1_PlayFab_ClientModels_ValueToDateModel___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ {
  struct IEnumerator_1_PlayFab_ClientModels_PlayerLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct PlayerProfileViewConstraints__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerProfileViewConstraints__StaticFields {
};
struct PlayerProfileViewConstraints__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerProfileViewConstraints__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerProfileViewConstraints__VTable vtable;
};
struct GetFriendLeaderboardRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendLeaderboardRequest__StaticFields {
};
struct GetFriendLeaderboardRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendLeaderboardRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendLeaderboardRequest__VTable vtable;
};
struct AdCampaignAttributionModel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdCampaignAttributionModel__StaticFields {
};
struct AdCampaignAttributionModel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdCampaignAttributionModel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdCampaignAttributionModel__VTable vtable;
};
struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___VTable {
  VirtualInvokeData get_Current;
};}