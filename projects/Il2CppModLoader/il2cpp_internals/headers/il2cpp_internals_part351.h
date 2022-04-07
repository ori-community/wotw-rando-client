namespace app {
struct GetLeaderboardResult_1__Fields {
  struct PlayFabResultCommon__Fields _;
  struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_ * Leaderboard;
  struct Nullable_1_DateTime_ NextReset;
  int32_t Version;
};
struct GetLeaderboardResult_1 {
  struct GetLeaderboardResult_1__Class *klass;
  struct MonitorData *monitor;
  struct GetLeaderboardResult_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_PlayerLeaderboardEntry___Fields {
  struct PlayerLeaderboardEntry_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_ {
  struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry___Fields fields;
};
struct __declspec(align(8)) PlayerLeaderboardEntry_1__Fields {
  struct String * DisplayName;
  struct String * PlayFabId;
  int32_t Position;
  struct PlayerProfileModel_1 * Profile;
  int32_t StatValue;
};
struct PlayerLeaderboardEntry_1 {
  struct PlayerLeaderboardEntry_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLeaderboardEntry_1__Fields fields;
};
struct PlayerLeaderboardEntry_1__Array {
  struct PlayerLeaderboardEntry_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PlayerLeaderboardEntry_1 * vector[32];
};
enum LoginIdentityProvider__Enum_1 : int32_t {
  LoginIdentityProvider__Enum_1_Unknown = 0,
  LoginIdentityProvider__Enum_1_PlayFab = 1,
  LoginIdentityProvider__Enum_1_Custom = 2,
  LoginIdentityProvider__Enum_1_GameCenter = 3,
  LoginIdentityProvider__Enum_1_GooglePlay = 4,
  LoginIdentityProvider__Enum_1_Steam = 5,
  LoginIdentityProvider__Enum_1_XBoxLive = 6,
  LoginIdentityProvider__Enum_1_PSN = 7,
  LoginIdentityProvider__Enum_1_Kongregate = 8,
  LoginIdentityProvider__Enum_1_Facebook = 9,
  LoginIdentityProvider__Enum_1_IOSDevice = 10,
  LoginIdentityProvider__Enum_1_AndroidDevice = 11,
  LoginIdentityProvider__Enum_1_Twitch = 12,
  LoginIdentityProvider__Enum_1_WindowsHello = 13,
  LoginIdentityProvider__Enum_1_GameServer = 14,
  LoginIdentityProvider__Enum_1_CustomServer = 15,
  LoginIdentityProvider__Enum_1_NintendoSwitch = 16,
  LoginIdentityProvider__Enum_1_FacebookInstantGames = 17,
  LoginIdentityProvider__Enum_1_OpenIdConnect = 18,
};
struct LoginIdentityProvider__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoginIdentityProvider__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ {
  enum LoginIdentityProvider__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___Boxed {
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ fields;
};
struct __declspec(align(8)) PlayerProfileModel_1__Fields {
  struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel_ * AdCampaignAttributions;
  struct String * AvatarUrl;
  struct Nullable_1_DateTime_ BannedUntil;
  struct List_1_PlayFab_ServerModels_ContactEmailInfoModel_ * ContactEmailAddresses;
  struct Nullable_1_DateTime_ Created;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ LastLogin;
  struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel_ * LinkedAccounts;
  struct List_1_PlayFab_ServerModels_LocationModel_ * Locations;
  struct List_1_PlayFab_ServerModels_MembershipModel_ * Memberships;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Origination;
  struct String * PlayerId;
  struct String * PublisherId;
  struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_ * PushNotificationRegistrations;
  struct List_1_PlayFab_ServerModels_StatisticModel_ * Statistics;
  struct List_1_PlayFab_ServerModels_TagModel_ * Tags;
  struct String * TitleId;
  struct Nullable_1_UInt32_ TotalValueToDateInUSD;
  struct List_1_PlayFab_ServerModels_ValueToDateModel_ * ValuesToDate;
};
struct PlayerProfileModel_1 {
  struct PlayerProfileModel_1__Class *klass;
  struct MonitorData *monitor;
  struct PlayerProfileModel_1__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_AdCampaignAttributionModel___Fields {
  struct AdCampaignAttributionModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel_ {
  struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___Fields fields;
};
struct __declspec(align(8)) AdCampaignAttributionModel_1__Fields {
  struct DateTime AttributedAt;
  struct String * CampaignId;
  struct String * Platform;
};
struct AdCampaignAttributionModel_1 {
  struct AdCampaignAttributionModel_1__Class *klass;
  struct MonitorData *monitor;
  struct AdCampaignAttributionModel_1__Fields fields;
};
struct AdCampaignAttributionModel_1__Array {
  struct AdCampaignAttributionModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AdCampaignAttributionModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_ContactEmailInfoModel___Fields {
  struct ContactEmailInfoModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_ContactEmailInfoModel_ {
  struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___Fields fields;
};
enum EmailVerificationStatus__Enum_1 : int32_t {
  EmailVerificationStatus__Enum_1_Unverified = 0,
  EmailVerificationStatus__Enum_1_Pending = 1,
  EmailVerificationStatus__Enum_1_Confirmed = 2,
};
struct EmailVerificationStatus__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EmailVerificationStatus__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus_ {
  enum EmailVerificationStatus__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___Boxed {
  struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus_ fields;
};
struct __declspec(align(8)) ContactEmailInfoModel_1__Fields {
  struct String * EmailAddress;
  struct String * Name;
  struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus_ VerificationStatus;
};
struct ContactEmailInfoModel_1 {
  struct ContactEmailInfoModel_1__Class *klass;
  struct MonitorData *monitor;
  struct ContactEmailInfoModel_1__Fields fields;
};
struct ContactEmailInfoModel_1__Array {
  struct ContactEmailInfoModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ContactEmailInfoModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Fields {
  struct LinkedPlatformAccountModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel_ {
  struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Fields fields;
};
struct __declspec(align(8)) LinkedPlatformAccountModel_1__Fields {
  struct String * Email;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * Username;
};
struct LinkedPlatformAccountModel_1 {
  struct LinkedPlatformAccountModel_1__Class *klass;
  struct MonitorData *monitor;
  struct LinkedPlatformAccountModel_1__Fields fields;
};
struct LinkedPlatformAccountModel_1__Array {
  struct LinkedPlatformAccountModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LinkedPlatformAccountModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_LocationModel___Fields {
  struct LocationModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_LocationModel_ {
  struct List_1_PlayFab_ServerModels_LocationModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_LocationModel___Fields fields;
};
enum ContinentCode__Enum_1 : int32_t {
  ContinentCode__Enum_1_AF = 0,
  ContinentCode__Enum_1_AN = 1,
  ContinentCode__Enum_1_AS = 2,
  ContinentCode__Enum_1_EU = 3,
  ContinentCode__Enum_1_NA = 4,
  ContinentCode__Enum_1_OC = 5,
  ContinentCode__Enum_1_SA = 6,
};
struct ContinentCode__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ContinentCode__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_ContinentCode_ {
  enum ContinentCode__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_ContinentCode___Boxed {
  struct Nullable_1_PlayFab_ServerModels_ContinentCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_ContinentCode_ fields;
};
enum CountryCode__Enum_1 : int32_t {
  CountryCode__Enum_1_AF = 0,
  CountryCode__Enum_1_AX = 1,
  CountryCode__Enum_1_AL = 2,
  CountryCode__Enum_1_DZ = 3,
  CountryCode__Enum_1_AS = 4,
  CountryCode__Enum_1_AD = 5,
  CountryCode__Enum_1_AO = 6,
  CountryCode__Enum_1_AI = 7,
  CountryCode__Enum_1_AQ = 8,
  CountryCode__Enum_1_AG = 9,
  CountryCode__Enum_1_AR = 10,
  CountryCode__Enum_1_AM = 11,
  CountryCode__Enum_1_AW = 12,
  CountryCode__Enum_1_AU = 13,
  CountryCode__Enum_1_AT = 14,
  CountryCode__Enum_1_AZ = 15,
  CountryCode__Enum_1_BS = 16,
  CountryCode__Enum_1_BH = 17,
  CountryCode__Enum_1_BD = 18,
  CountryCode__Enum_1_BB = 19,
  CountryCode__Enum_1_BY = 20,
  CountryCode__Enum_1_BE = 21,
  CountryCode__Enum_1_BZ = 22,
  CountryCode__Enum_1_BJ = 23,
  CountryCode__Enum_1_BM = 24,
  CountryCode__Enum_1_BT = 25,
  CountryCode__Enum_1_BO = 26,
  CountryCode__Enum_1_BQ = 27,
  CountryCode__Enum_1_BA = 28,
  CountryCode__Enum_1_BW = 29,
  CountryCode__Enum_1_BV = 30,
  CountryCode__Enum_1_BR = 31,
  CountryCode__Enum_1_IO = 32,
  CountryCode__Enum_1_BN = 33,
  CountryCode__Enum_1_BG = 34,
  CountryCode__Enum_1_BF = 35,
  CountryCode__Enum_1_BI = 36,
  CountryCode__Enum_1_KH = 37,
  CountryCode__Enum_1_CM = 38,
  CountryCode__Enum_1_CA = 39,
  CountryCode__Enum_1_CV = 40,
  CountryCode__Enum_1_KY = 41,
  CountryCode__Enum_1_CF = 42,
  CountryCode__Enum_1_TD = 43,
  CountryCode__Enum_1_CL = 44,
  CountryCode__Enum_1_CN = 45,
  CountryCode__Enum_1_CX = 46,
  CountryCode__Enum_1_CC = 47,
  CountryCode__Enum_1_CO = 48,
  CountryCode__Enum_1_KM = 49,
  CountryCode__Enum_1_CG = 50,
  CountryCode__Enum_1_CD = 51,
  CountryCode__Enum_1_CK = 52,
  CountryCode__Enum_1_CR = 53,
  CountryCode__Enum_1_CI = 54,
  CountryCode__Enum_1_HR = 55,
  CountryCode__Enum_1_CU = 56,
  CountryCode__Enum_1_CW = 57,
  CountryCode__Enum_1_CY = 58,
  CountryCode__Enum_1_CZ = 59,
  CountryCode__Enum_1_DK = 60,
  CountryCode__Enum_1_DJ = 61,
  CountryCode__Enum_1_DM = 62,
  CountryCode__Enum_1_DO = 63,
  CountryCode__Enum_1_EC = 64,
  CountryCode__Enum_1_EG = 65,
  CountryCode__Enum_1_SV = 66,
  CountryCode__Enum_1_GQ = 67,
  CountryCode__Enum_1_ER = 68,
  CountryCode__Enum_1_EE = 69,
  CountryCode__Enum_1_ET = 70,
  CountryCode__Enum_1_FK = 71,
  CountryCode__Enum_1_FO = 72,
  CountryCode__Enum_1_FJ = 73,
  CountryCode__Enum_1_FI = 74,
  CountryCode__Enum_1_FR = 75,
  CountryCode__Enum_1_GF = 76,
  CountryCode__Enum_1_PF = 77,
  CountryCode__Enum_1_TF = 78,
  CountryCode__Enum_1_GA = 79,
  CountryCode__Enum_1_GM = 80,
  CountryCode__Enum_1_GE = 81,
  CountryCode__Enum_1_DE = 82,
  CountryCode__Enum_1_GH = 83,
  CountryCode__Enum_1_GI = 84,
  CountryCode__Enum_1_GR = 85,
  CountryCode__Enum_1_GL = 86,
  CountryCode__Enum_1_GD = 87,
  CountryCode__Enum_1_GP = 88,
  CountryCode__Enum_1_GU = 89,
  CountryCode__Enum_1_GT = 90,
  CountryCode__Enum_1_GG = 91,
  CountryCode__Enum_1_GN = 92,
  CountryCode__Enum_1_GW = 93,
  CountryCode__Enum_1_GY = 94,
  CountryCode__Enum_1_HT = 95,
  CountryCode__Enum_1_HM = 96,
  CountryCode__Enum_1_VA = 97,
  CountryCode__Enum_1_HN = 98,
  CountryCode__Enum_1_HK = 99,
  CountryCode__Enum_1_HU = 100,
  CountryCode__Enum_1_IS = 101,
  CountryCode__Enum_1_IN = 102,
  CountryCode__Enum_1_ID = 103,
  CountryCode__Enum_1_IR = 104,
  CountryCode__Enum_1_IQ = 105,
  CountryCode__Enum_1_IE = 106,
  CountryCode__Enum_1_IM = 107,
  CountryCode__Enum_1_IL = 108,
  CountryCode__Enum_1_IT = 109,
  CountryCode__Enum_1_JM = 110,
  CountryCode__Enum_1_JP = 111,
  CountryCode__Enum_1_JE = 112,
  CountryCode__Enum_1_JO = 113,
  CountryCode__Enum_1_KZ = 114,
  CountryCode__Enum_1_KE = 115,
  CountryCode__Enum_1_KI = 116,
  CountryCode__Enum_1_KP = 117,
  CountryCode__Enum_1_KR = 118,
  CountryCode__Enum_1_KW = 119,
  CountryCode__Enum_1_KG = 120,
  CountryCode__Enum_1_LA = 121,
  CountryCode__Enum_1_LV = 122,
  CountryCode__Enum_1_LB = 123,
  CountryCode__Enum_1_LS = 124,
  CountryCode__Enum_1_LR = 125,
  CountryCode__Enum_1_LY = 126,
  CountryCode__Enum_1_LI = 127,
  CountryCode__Enum_1_LT = 128,
  CountryCode__Enum_1_LU = 129,
  CountryCode__Enum_1_MO = 130,
  CountryCode__Enum_1_MK = 131,
  CountryCode__Enum_1_MG = 132,
  CountryCode__Enum_1_MW = 133,
  CountryCode__Enum_1_MY = 134,
  CountryCode__Enum_1_MV = 135,
  CountryCode__Enum_1_ML = 136,
  CountryCode__Enum_1_MT = 137,
  CountryCode__Enum_1_MH = 138,
  CountryCode__Enum_1_MQ = 139,
  CountryCode__Enum_1_MR = 140,
  CountryCode__Enum_1_MU = 141,
  CountryCode__Enum_1_YT = 142,
  CountryCode__Enum_1_MX = 143,
  CountryCode__Enum_1_FM = 144,
  CountryCode__Enum_1_MD = 145,
  CountryCode__Enum_1_MC = 146,
  CountryCode__Enum_1_MN = 147,
  CountryCode__Enum_1_ME = 148,
  CountryCode__Enum_1_MS = 149,
  CountryCode__Enum_1_MA = 150,
  CountryCode__Enum_1_MZ = 151,
  CountryCode__Enum_1_MM = 152,
  CountryCode__Enum_1_NA = 153,
  CountryCode__Enum_1_NR = 154,
  CountryCode__Enum_1_NP = 155,
  CountryCode__Enum_1_NL = 156,
  CountryCode__Enum_1_NC = 157,
  CountryCode__Enum_1_NZ = 158,
  CountryCode__Enum_1_NI = 159,
  CountryCode__Enum_1_NE = 160,
  CountryCode__Enum_1_NG = 161,
  CountryCode__Enum_1_NU = 162,
  CountryCode__Enum_1_NF = 163,
  CountryCode__Enum_1_MP = 164,
  CountryCode__Enum_1_NO = 165,
  CountryCode__Enum_1_OM = 166,
  CountryCode__Enum_1_PK = 167,
  CountryCode__Enum_1_PW = 168,
  CountryCode__Enum_1_PS = 169,
  CountryCode__Enum_1_PA = 170,
  CountryCode__Enum_1_PG = 171,
  CountryCode__Enum_1_PY = 172,
  CountryCode__Enum_1_PE = 173,
  CountryCode__Enum_1_PH = 174,
  CountryCode__Enum_1_PN = 175,
  CountryCode__Enum_1_PL = 176,
  CountryCode__Enum_1_PT = 177,
  CountryCode__Enum_1_PR = 178,
  CountryCode__Enum_1_QA = 179,
  CountryCode__Enum_1_RE = 180,
  CountryCode__Enum_1_RO = 181,
  CountryCode__Enum_1_RU = 182,
  CountryCode__Enum_1_RW = 183,
  CountryCode__Enum_1_BL = 184,
  CountryCode__Enum_1_SH = 185,
  CountryCode__Enum_1_KN = 186,
  CountryCode__Enum_1_LC = 187,
  CountryCode__Enum_1_MF = 188,
  CountryCode__Enum_1_PM = 189,
  CountryCode__Enum_1_VC = 190,
  CountryCode__Enum_1_WS = 191,
  CountryCode__Enum_1_SM = 192,
  CountryCode__Enum_1_ST = 193,
  CountryCode__Enum_1_SA = 194,
  CountryCode__Enum_1_SN = 195,
  CountryCode__Enum_1_RS = 196,
  CountryCode__Enum_1_SC = 197,
  CountryCode__Enum_1_SL = 198,
  CountryCode__Enum_1_SG = 199,
  CountryCode__Enum_1_SX = 200,
  CountryCode__Enum_1_SK = 201,
  CountryCode__Enum_1_SI = 202,
  CountryCode__Enum_1_SB = 203,
  CountryCode__Enum_1_SO = 204,
  CountryCode__Enum_1_ZA = 205,
  CountryCode__Enum_1_GS = 206,
  CountryCode__Enum_1_SS = 207,
  CountryCode__Enum_1_ES = 208,
  CountryCode__Enum_1_LK = 209,
  CountryCode__Enum_1_SD = 210,
  CountryCode__Enum_1_SR = 211,
  CountryCode__Enum_1_SJ = 212,
  CountryCode__Enum_1_SZ = 213,
  CountryCode__Enum_1_SE = 214,
  CountryCode__Enum_1_CH = 215,
  CountryCode__Enum_1_SY = 216,
  CountryCode__Enum_1_TW = 217,
  CountryCode__Enum_1_TJ = 218,
  CountryCode__Enum_1_TZ = 219,
  CountryCode__Enum_1_TH = 220,
  CountryCode__Enum_1_TL = 221,
  CountryCode__Enum_1_TG = 222,
  CountryCode__Enum_1_TK = 223,
  CountryCode__Enum_1_TO = 224,
  CountryCode__Enum_1_TT = 225,
  CountryCode__Enum_1_TN = 226,
  CountryCode__Enum_1_TR = 227,
  CountryCode__Enum_1_TM = 228,
  CountryCode__Enum_1_TC = 229,
  CountryCode__Enum_1_TV = 230,
  CountryCode__Enum_1_UG = 231,
  CountryCode__Enum_1_UA = 232,
  CountryCode__Enum_1_AE = 233,
  CountryCode__Enum_1_GB = 234,
  CountryCode__Enum_1_US = 235,
  CountryCode__Enum_1_UM = 236,
  CountryCode__Enum_1_UY = 237,
  CountryCode__Enum_1_UZ = 238,
  CountryCode__Enum_1_VU = 239,
  CountryCode__Enum_1_VE = 240,
  CountryCode__Enum_1_VN = 241,
  CountryCode__Enum_1_VG = 242,
  CountryCode__Enum_1_VI = 243,
  CountryCode__Enum_1_WF = 244,
  CountryCode__Enum_1_EH = 245,
  CountryCode__Enum_1_YE = 246,
  CountryCode__Enum_1_ZM = 247,
  CountryCode__Enum_1_ZW = 248,
};
struct CountryCode__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CountryCode__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_CountryCode_ {
  enum CountryCode__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_CountryCode___Boxed {
  struct Nullable_1_PlayFab_ServerModels_CountryCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_CountryCode_ fields;
};
struct __declspec(align(8)) LocationModel_1__Fields {
  struct String * City;
  struct Nullable_1_PlayFab_ServerModels_ContinentCode_ ContinentCode;
  struct Nullable_1_PlayFab_ServerModels_CountryCode_ CountryCode;
  struct Nullable_1_Double_ Latitude;
  struct Nullable_1_Double_ Longitude;
};
struct LocationModel_1 {
  struct LocationModel_1__Class *klass;
  struct MonitorData *monitor;
  struct LocationModel_1__Fields fields;
};
struct LocationModel_1__Array {
  struct LocationModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LocationModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_LocationModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_LocationModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_MembershipModel___Fields {
  struct MembershipModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_MembershipModel_ {
  struct List_1_PlayFab_ServerModels_MembershipModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_MembershipModel___Fields fields;
};
struct __declspec(align(8)) MembershipModel_1__Fields {
  bool IsActive;
  struct DateTime MembershipExpiration;
  struct String * MembershipId;
  struct Nullable_1_DateTime_ OverrideExpiration;
  struct List_1_PlayFab_ServerModels_SubscriptionModel_ * Subscriptions;
};
struct MembershipModel_1 {
  struct MembershipModel_1__Class *klass;
  struct MonitorData *monitor;
  struct MembershipModel_1__Fields fields;
};
struct MembershipModel_1__Array {
  struct MembershipModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MembershipModel_1 * vector[32];
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_SubscriptionModel___Fields {
  struct SubscriptionModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_SubscriptionModel_ {
  struct List_1_PlayFab_ServerModels_SubscriptionModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_SubscriptionModel___Fields fields;
};
enum SubscriptionProviderStatus__Enum_1 : int32_t {
  SubscriptionProviderStatus__Enum_1_NoError = 0,
  SubscriptionProviderStatus__Enum_1_Cancelled = 1,
  SubscriptionProviderStatus__Enum_1_UnknownError = 2,
  SubscriptionProviderStatus__Enum_1_BillingError = 3,
  SubscriptionProviderStatus__Enum_1_ProductUnavailable = 4,
  SubscriptionProviderStatus__Enum_1_CustomerDidNotAcceptPriceChange = 5,
  SubscriptionProviderStatus__Enum_1_FreeTrial = 6,
  SubscriptionProviderStatus__Enum_1_PaymentPending = 7,
};
struct SubscriptionProviderStatus__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SubscriptionProviderStatus__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ {
  enum SubscriptionProviderStatus__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus___Boxed {
  struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ fields;
};
struct __declspec(align(8)) SubscriptionModel_1__Fields {
  struct DateTime Expiration;
  struct DateTime InitialSubscriptionTime;
  bool IsActive;
  struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ Status;
  struct String * SubscriptionId;
  struct String * SubscriptionItemId;
  struct String * SubscriptionProvider;
};
struct SubscriptionModel_1 {
  struct SubscriptionModel_1__Class *klass;
  struct MonitorData *monitor;
  struct SubscriptionModel_1__Fields fields;
};
struct SubscriptionModel_1__Array {
  struct SubscriptionModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SubscriptionModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_SubscriptionModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_SubscriptionModel___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ServerModels_MembershipModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_MembershipModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Fields {
  struct PushNotificationRegistrationModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_ {
  struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Fields fields;
};
enum PushNotificationPlatform__Enum_1 : int32_t {
  PushNotificationPlatform__Enum_1_ApplePushNotificationService = 0,
  PushNotificationPlatform__Enum_1_GoogleCloudMessaging = 1,
};
struct PushNotificationPlatform__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PushNotificationPlatform__Enum_1 value;
};
struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ {
  enum PushNotificationPlatform__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform___Boxed {
  struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ fields;
};
struct __declspec(align(8)) PushNotificationRegistrationModel_1__Fields {
  struct String * NotificationEndpointARN;
  struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ Platform;
};
struct PushNotificationRegistrationModel_1 {
  struct PushNotificationRegistrationModel_1__Class *klass;
  struct MonitorData *monitor;
  struct PushNotificationRegistrationModel_1__Fields fields;
};
struct PushNotificationRegistrationModel_1__Array {
  struct PushNotificationRegistrationModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PushNotificationRegistrationModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistrationModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_StatisticModel___Fields {
  struct StatisticModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_StatisticModel_ {
  struct List_1_PlayFab_ServerModels_StatisticModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_StatisticModel___Fields fields;
};
struct __declspec(align(8)) StatisticModel_1__Fields {
  struct String * Name;
  int32_t Value;
  int32_t Version;
};
struct StatisticModel_1 {
  struct StatisticModel_1__Class *klass;
  struct MonitorData *monitor;
  struct StatisticModel_1__Fields fields;
};
struct StatisticModel_1__Array {
  struct StatisticModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_StatisticModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_StatisticModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_TagModel___Fields {
  struct TagModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_TagModel_ {
  struct List_1_PlayFab_ServerModels_TagModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_TagModel___Fields fields;
};
struct __declspec(align(8)) TagModel_1__Fields {
  struct String * TagValue;
};
struct TagModel_1 {
  struct TagModel_1__Class *klass;
  struct MonitorData *monitor;
  struct TagModel_1__Fields fields;
};
struct TagModel_1__Array {
  struct TagModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TagModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_TagModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_TagModel___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PlayFab_ServerModels_ValueToDateModel___Fields {
  struct ValueToDateModel_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_ServerModels_ValueToDateModel_ {
  struct List_1_PlayFab_ServerModels_ValueToDateModel___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_ServerModels_ValueToDateModel___Fields fields;
};
struct __declspec(align(8)) ValueToDateModel_1__Fields {
  struct String * Currency;
  uint32_t TotalValue;
  struct String * TotalValueAsDecimal;
};
struct ValueToDateModel_1 {
  struct ValueToDateModel_1__Class *klass;
  struct MonitorData *monitor;
  struct ValueToDateModel_1__Fields fields;
};
struct ValueToDateModel_1__Array {
  struct ValueToDateModel_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ValueToDateModel_1 * vector[32];
};
struct IEnumerator_1_PlayFab_ServerModels_ValueToDateModel_ {
  struct IEnumerator_1_PlayFab_ServerModels_ValueToDateModel___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_PlayFab_ServerModels_PlayerLeaderboardEntry_ {
  struct IEnumerator_1_PlayFab_ServerModels_PlayerLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct PlayerProfileViewConstraints_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerProfileViewConstraints_1__StaticFields {
};
struct PlayerProfileViewConstraints_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerProfileViewConstraints_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerProfileViewConstraints_1__VTable vtable;
};
struct GetFriendLeaderboardRequest_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GetFriendLeaderboardRequest_1__StaticFields {
};
struct GetFriendLeaderboardRequest_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetFriendLeaderboardRequest_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetFriendLeaderboardRequest_1__VTable vtable;
};
struct AdCampaignAttributionModel_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdCampaignAttributionModel_1__StaticFields {
};
struct AdCampaignAttributionModel_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdCampaignAttributionModel_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdCampaignAttributionModel_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable vtable;
};
struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable {
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
struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields {
  struct AdCampaignAttributionModel_1__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable vtable;
};
struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___StaticFields {
};
struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___VTable vtable;
};
struct ContactEmailInfoModel_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ContactEmailInfoModel_1__StaticFields {
};
struct ContactEmailInfoModel_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContactEmailInfoModel_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContactEmailInfoModel_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields {
};
struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable vtable;
};
struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable {
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
struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields {
  struct ContactEmailInfoModel_1__Array * _emptyArray;
};
struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable vtable;
};
struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___StaticFields {
};
struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___VTable vtable;
};
struct LinkedPlatformAccountModel_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}