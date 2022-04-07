namespace app {
struct PlayerLeftLobbyEventData {
  struct PlayerLeftLobbyEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLeftLobbyEventData__Fields fields;
};
struct PlayerLeftLobbyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLeftLobbyEventData__StaticFields {
};
struct PlayerLeftLobbyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLeftLobbyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLeftLobbyEventData__VTable vtable;
};

struct PlayerLinkedAccountEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Email;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Origination;
  struct String * OriginationUserId;
  struct String * TitleId;
  struct String * Username;
};
struct PlayerLinkedAccountEventData {
  struct PlayerLinkedAccountEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLinkedAccountEventData__Fields fields;
};
struct PlayerLinkedAccountEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLinkedAccountEventData__StaticFields {
};
struct PlayerLinkedAccountEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLinkedAccountEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLinkedAccountEventData__VTable vtable;
};

struct PlayerLoggedInEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EventLocation * Location;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * PlatformUserName;
  struct String * TitleId;
};
struct PlayerLoggedInEventData {
  struct PlayerLoggedInEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerLoggedInEventData__Fields fields;
};
enum ContinentCode__Enum_2 : int32_t {
  ContinentCode__Enum_2_AF = 0,
  ContinentCode__Enum_2_AN = 1,
  ContinentCode__Enum_2_AS = 2,
  ContinentCode__Enum_2_EU = 3,
  ContinentCode__Enum_2_NA = 4,
  ContinentCode__Enum_2_OC = 5,
  ContinentCode__Enum_2_SA = 6,
};
struct ContinentCode__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ContinentCode__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ {
  enum ContinentCode__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ fields;
};
enum CountryCode__Enum_2 : int32_t {
  CountryCode__Enum_2_AF = 0,
  CountryCode__Enum_2_AX = 1,
  CountryCode__Enum_2_AL = 2,
  CountryCode__Enum_2_DZ = 3,
  CountryCode__Enum_2_AS = 4,
  CountryCode__Enum_2_AD = 5,
  CountryCode__Enum_2_AO = 6,
  CountryCode__Enum_2_AI = 7,
  CountryCode__Enum_2_AQ = 8,
  CountryCode__Enum_2_AG = 9,
  CountryCode__Enum_2_AR = 10,
  CountryCode__Enum_2_AM = 11,
  CountryCode__Enum_2_AW = 12,
  CountryCode__Enum_2_AU = 13,
  CountryCode__Enum_2_AT = 14,
  CountryCode__Enum_2_AZ = 15,
  CountryCode__Enum_2_BS = 16,
  CountryCode__Enum_2_BH = 17,
  CountryCode__Enum_2_BD = 18,
  CountryCode__Enum_2_BB = 19,
  CountryCode__Enum_2_BY = 20,
  CountryCode__Enum_2_BE = 21,
  CountryCode__Enum_2_BZ = 22,
  CountryCode__Enum_2_BJ = 23,
  CountryCode__Enum_2_BM = 24,
  CountryCode__Enum_2_BT = 25,
  CountryCode__Enum_2_BO = 26,
  CountryCode__Enum_2_BQ = 27,
  CountryCode__Enum_2_BA = 28,
  CountryCode__Enum_2_BW = 29,
  CountryCode__Enum_2_BV = 30,
  CountryCode__Enum_2_BR = 31,
  CountryCode__Enum_2_IO = 32,
  CountryCode__Enum_2_BN = 33,
  CountryCode__Enum_2_BG = 34,
  CountryCode__Enum_2_BF = 35,
  CountryCode__Enum_2_BI = 36,
  CountryCode__Enum_2_KH = 37,
  CountryCode__Enum_2_CM = 38,
  CountryCode__Enum_2_CA = 39,
  CountryCode__Enum_2_CV = 40,
  CountryCode__Enum_2_KY = 41,
  CountryCode__Enum_2_CF = 42,
  CountryCode__Enum_2_TD = 43,
  CountryCode__Enum_2_CL = 44,
  CountryCode__Enum_2_CN = 45,
  CountryCode__Enum_2_CX = 46,
  CountryCode__Enum_2_CC = 47,
  CountryCode__Enum_2_CO = 48,
  CountryCode__Enum_2_KM = 49,
  CountryCode__Enum_2_CG = 50,
  CountryCode__Enum_2_CD = 51,
  CountryCode__Enum_2_CK = 52,
  CountryCode__Enum_2_CR = 53,
  CountryCode__Enum_2_CI = 54,
  CountryCode__Enum_2_HR = 55,
  CountryCode__Enum_2_CU = 56,
  CountryCode__Enum_2_CW = 57,
  CountryCode__Enum_2_CY = 58,
  CountryCode__Enum_2_CZ = 59,
  CountryCode__Enum_2_DK = 60,
  CountryCode__Enum_2_DJ = 61,
  CountryCode__Enum_2_DM = 62,
  CountryCode__Enum_2_DO = 63,
  CountryCode__Enum_2_EC = 64,
  CountryCode__Enum_2_EG = 65,
  CountryCode__Enum_2_SV = 66,
  CountryCode__Enum_2_GQ = 67,
  CountryCode__Enum_2_ER = 68,
  CountryCode__Enum_2_EE = 69,
  CountryCode__Enum_2_ET = 70,
  CountryCode__Enum_2_FK = 71,
  CountryCode__Enum_2_FO = 72,
  CountryCode__Enum_2_FJ = 73,
  CountryCode__Enum_2_FI = 74,
  CountryCode__Enum_2_FR = 75,
  CountryCode__Enum_2_GF = 76,
  CountryCode__Enum_2_PF = 77,
  CountryCode__Enum_2_TF = 78,
  CountryCode__Enum_2_GA = 79,
  CountryCode__Enum_2_GM = 80,
  CountryCode__Enum_2_GE = 81,
  CountryCode__Enum_2_DE = 82,
  CountryCode__Enum_2_GH = 83,
  CountryCode__Enum_2_GI = 84,
  CountryCode__Enum_2_GR = 85,
  CountryCode__Enum_2_GL = 86,
  CountryCode__Enum_2_GD = 87,
  CountryCode__Enum_2_GP = 88,
  CountryCode__Enum_2_GU = 89,
  CountryCode__Enum_2_GT = 90,
  CountryCode__Enum_2_GG = 91,
  CountryCode__Enum_2_GN = 92,
  CountryCode__Enum_2_GW = 93,
  CountryCode__Enum_2_GY = 94,
  CountryCode__Enum_2_HT = 95,
  CountryCode__Enum_2_HM = 96,
  CountryCode__Enum_2_VA = 97,
  CountryCode__Enum_2_HN = 98,
  CountryCode__Enum_2_HK = 99,
  CountryCode__Enum_2_HU = 100,
  CountryCode__Enum_2_IS = 101,
  CountryCode__Enum_2_IN = 102,
  CountryCode__Enum_2_ID = 103,
  CountryCode__Enum_2_IR = 104,
  CountryCode__Enum_2_IQ = 105,
  CountryCode__Enum_2_IE = 106,
  CountryCode__Enum_2_IM = 107,
  CountryCode__Enum_2_IL = 108,
  CountryCode__Enum_2_IT = 109,
  CountryCode__Enum_2_JM = 110,
  CountryCode__Enum_2_JP = 111,
  CountryCode__Enum_2_JE = 112,
  CountryCode__Enum_2_JO = 113,
  CountryCode__Enum_2_KZ = 114,
  CountryCode__Enum_2_KE = 115,
  CountryCode__Enum_2_KI = 116,
  CountryCode__Enum_2_KP = 117,
  CountryCode__Enum_2_KR = 118,
  CountryCode__Enum_2_KW = 119,
  CountryCode__Enum_2_KG = 120,
  CountryCode__Enum_2_LA = 121,
  CountryCode__Enum_2_LV = 122,
  CountryCode__Enum_2_LB = 123,
  CountryCode__Enum_2_LS = 124,
  CountryCode__Enum_2_LR = 125,
  CountryCode__Enum_2_LY = 126,
  CountryCode__Enum_2_LI = 127,
  CountryCode__Enum_2_LT = 128,
  CountryCode__Enum_2_LU = 129,
  CountryCode__Enum_2_MO = 130,
  CountryCode__Enum_2_MK = 131,
  CountryCode__Enum_2_MG = 132,
  CountryCode__Enum_2_MW = 133,
  CountryCode__Enum_2_MY = 134,
  CountryCode__Enum_2_MV = 135,
  CountryCode__Enum_2_ML = 136,
  CountryCode__Enum_2_MT = 137,
  CountryCode__Enum_2_MH = 138,
  CountryCode__Enum_2_MQ = 139,
  CountryCode__Enum_2_MR = 140,
  CountryCode__Enum_2_MU = 141,
  CountryCode__Enum_2_YT = 142,
  CountryCode__Enum_2_MX = 143,
  CountryCode__Enum_2_FM = 144,
  CountryCode__Enum_2_MD = 145,
  CountryCode__Enum_2_MC = 146,
  CountryCode__Enum_2_MN = 147,
  CountryCode__Enum_2_ME = 148,
  CountryCode__Enum_2_MS = 149,
  CountryCode__Enum_2_MA = 150,
  CountryCode__Enum_2_MZ = 151,
  CountryCode__Enum_2_MM = 152,
  CountryCode__Enum_2_NA = 153,
  CountryCode__Enum_2_NR = 154,
  CountryCode__Enum_2_NP = 155,
  CountryCode__Enum_2_NL = 156,
  CountryCode__Enum_2_NC = 157,
  CountryCode__Enum_2_NZ = 158,
  CountryCode__Enum_2_NI = 159,
  CountryCode__Enum_2_NE = 160,
  CountryCode__Enum_2_NG = 161,
  CountryCode__Enum_2_NU = 162,
  CountryCode__Enum_2_NF = 163,
  CountryCode__Enum_2_MP = 164,
  CountryCode__Enum_2_NO = 165,
  CountryCode__Enum_2_OM = 166,
  CountryCode__Enum_2_PK = 167,
  CountryCode__Enum_2_PW = 168,
  CountryCode__Enum_2_PS = 169,
  CountryCode__Enum_2_PA = 170,
  CountryCode__Enum_2_PG = 171,
  CountryCode__Enum_2_PY = 172,
  CountryCode__Enum_2_PE = 173,
  CountryCode__Enum_2_PH = 174,
  CountryCode__Enum_2_PN = 175,
  CountryCode__Enum_2_PL = 176,
  CountryCode__Enum_2_PT = 177,
  CountryCode__Enum_2_PR = 178,
  CountryCode__Enum_2_QA = 179,
  CountryCode__Enum_2_RE = 180,
  CountryCode__Enum_2_RO = 181,
  CountryCode__Enum_2_RU = 182,
  CountryCode__Enum_2_RW = 183,
  CountryCode__Enum_2_BL = 184,
  CountryCode__Enum_2_SH = 185,
  CountryCode__Enum_2_KN = 186,
  CountryCode__Enum_2_LC = 187,
  CountryCode__Enum_2_MF = 188,
  CountryCode__Enum_2_PM = 189,
  CountryCode__Enum_2_VC = 190,
  CountryCode__Enum_2_WS = 191,
  CountryCode__Enum_2_SM = 192,
  CountryCode__Enum_2_ST = 193,
  CountryCode__Enum_2_SA = 194,
  CountryCode__Enum_2_SN = 195,
  CountryCode__Enum_2_RS = 196,
  CountryCode__Enum_2_SC = 197,
  CountryCode__Enum_2_SL = 198,
  CountryCode__Enum_2_SG = 199,
  CountryCode__Enum_2_SX = 200,
  CountryCode__Enum_2_SK = 201,
  CountryCode__Enum_2_SI = 202,
  CountryCode__Enum_2_SB = 203,
  CountryCode__Enum_2_SO = 204,
  CountryCode__Enum_2_ZA = 205,
  CountryCode__Enum_2_GS = 206,
  CountryCode__Enum_2_SS = 207,
  CountryCode__Enum_2_ES = 208,
  CountryCode__Enum_2_LK = 209,
  CountryCode__Enum_2_SD = 210,
  CountryCode__Enum_2_SR = 211,
  CountryCode__Enum_2_SJ = 212,
  CountryCode__Enum_2_SZ = 213,
  CountryCode__Enum_2_SE = 214,
  CountryCode__Enum_2_CH = 215,
  CountryCode__Enum_2_SY = 216,
  CountryCode__Enum_2_TW = 217,
  CountryCode__Enum_2_TJ = 218,
  CountryCode__Enum_2_TZ = 219,
  CountryCode__Enum_2_TH = 220,
  CountryCode__Enum_2_TL = 221,
  CountryCode__Enum_2_TG = 222,
  CountryCode__Enum_2_TK = 223,
  CountryCode__Enum_2_TO = 224,
  CountryCode__Enum_2_TT = 225,
  CountryCode__Enum_2_TN = 226,
  CountryCode__Enum_2_TR = 227,
  CountryCode__Enum_2_TM = 228,
  CountryCode__Enum_2_TC = 229,
  CountryCode__Enum_2_TV = 230,
  CountryCode__Enum_2_UG = 231,
  CountryCode__Enum_2_UA = 232,
  CountryCode__Enum_2_AE = 233,
  CountryCode__Enum_2_GB = 234,
  CountryCode__Enum_2_US = 235,
  CountryCode__Enum_2_UM = 236,
  CountryCode__Enum_2_UY = 237,
  CountryCode__Enum_2_UZ = 238,
  CountryCode__Enum_2_VU = 239,
  CountryCode__Enum_2_VE = 240,
  CountryCode__Enum_2_VN = 241,
  CountryCode__Enum_2_VG = 242,
  CountryCode__Enum_2_VI = 243,
  CountryCode__Enum_2_WF = 244,
  CountryCode__Enum_2_EH = 245,
  CountryCode__Enum_2_YE = 246,
  CountryCode__Enum_2_ZM = 247,
  CountryCode__Enum_2_ZW = 248,
};
struct CountryCode__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CountryCode__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ {
  enum CountryCode__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ fields;
};
struct __declspec(align(8)) EventLocation__Fields {
  struct String * City;
  struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode_ ContinentCode;
  struct Nullable_1_PlayFab_PlayStreamModels_CountryCode_ CountryCode;
  struct Nullable_1_Double_ Latitude;
  struct Nullable_1_Double_ Longitude;
};
struct EventLocation {
  struct EventLocation__Class *klass;
  struct MonitorData *monitor;
  struct EventLocation__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_ContinentCode___VTable vtable;
};
struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_CountryCode___VTable vtable;
};
struct EventLocation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventLocation__StaticFields {
};
struct EventLocation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventLocation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventLocation__VTable vtable;
};
struct PlayerLoggedInEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerLoggedInEventData__StaticFields {
};
struct PlayerLoggedInEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerLoggedInEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerLoggedInEventData__VTable vtable;
};

struct PlayerMatchedWithLobbyEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * GameMode;
  struct String * LobbyId;
  struct String * Region;
  struct String * ServerBuildVersion;
  struct String * ServerHost;
  struct String * ServerHostInstanceId;
  struct String * ServerIPV4Address;
  struct String * ServerIPV6Address;
  uint32_t ServerPort;
  struct String * TitleId;
};
struct PlayerMatchedWithLobbyEventData {
  struct PlayerMatchedWithLobbyEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerMatchedWithLobbyEventData__Fields fields;
};
struct PlayerMatchedWithLobbyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerMatchedWithLobbyEventData__StaticFields {
};
struct PlayerMatchedWithLobbyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerMatchedWithLobbyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerMatchedWithLobbyEventData__VTable vtable;
};

struct PlayerPasswordResetLinkSentEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ InitiatedBy;
  struct String * InitiatedFromIPAddress;
  struct DateTime LinkExpiration;
  struct String * PasswordResetId;
  struct String * RecoveryEmailAddress;
  struct String * TitleId;
};
struct PlayerPasswordResetLinkSentEventData {
  struct PlayerPasswordResetLinkSentEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPasswordResetLinkSentEventData__Fields fields;
};
struct PlayerPasswordResetLinkSentEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerPasswordResetLinkSentEventData__StaticFields {
};
struct PlayerPasswordResetLinkSentEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerPasswordResetLinkSentEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerPasswordResetLinkSentEventData__VTable vtable;
};

enum TransactionStatus__Enum_1 : int32_t {
  TransactionStatus__Enum_1_CreateCart = 0,
  TransactionStatus__Enum_1_Init = 1,
  TransactionStatus__Enum_1_Approved = 2,
  TransactionStatus__Enum_1_Succeeded = 3,
  TransactionStatus__Enum_1_FailedByProvider = 4,
  TransactionStatus__Enum_1_DisputePending = 5,
  TransactionStatus__Enum_1_RefundPending = 6,
  TransactionStatus__Enum_1_Refunded = 7,
  TransactionStatus__Enum_1_RefundFailed = 8,
  TransactionStatus__Enum_1_ChargedBack = 9,
  TransactionStatus__Enum_1_FailedByUber = 10,
  TransactionStatus__Enum_1_FailedByPlayFab = 11,
  TransactionStatus__Enum_1_Revoked = 12,
  TransactionStatus__Enum_1_TradePending = 13,
  TransactionStatus__Enum_1_Traded = 14,
  TransactionStatus__Enum_1_Upgraded = 15,
  TransactionStatus__Enum_1_StackPending = 16,
  TransactionStatus__Enum_1_Stacked = 17,
  TransactionStatus__Enum_1_Other = 18,
  TransactionStatus__Enum_1_Failed = 19,
};
struct TransactionStatus__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TransactionStatus__Enum_1 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ {
  enum TransactionStatus__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ fields;
};
struct PlayerPayForPurchaseEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * OrderId;
  struct String * ProviderData;
  struct String * ProviderName;
  struct String * ProviderToken;
  struct String * PurchaseConfirmationPageURL;
  struct String * PurchaseCurrency;
  uint32_t PurchasePrice;
  struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus_ Status;
  struct String * TitleId;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrencyBalances;
  struct Dictionary_2_System_String_System_Int32_ * VirtualCurrencyGrants;
};
struct PlayerPayForPurchaseEventData {
  struct PlayerPayForPurchaseEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPayForPurchaseEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_TransactionStatus___VTable vtable;
};
struct PlayerPayForPurchaseEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerPayForPurchaseEventData__StaticFields {
};
struct PlayerPayForPurchaseEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerPayForPurchaseEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerPayForPurchaseEventData__VTable vtable;
};

enum LeaderboardVersionChangeBehavior__Enum : int32_t {
  LeaderboardVersionChangeBehavior__Enum_ResetValues = 0,
};
struct LeaderboardVersionChangeBehavior__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LeaderboardVersionChangeBehavior__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ {
  enum LeaderboardVersionChangeBehavior__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ fields;
};
struct PlayerRankedOnLeaderboardVersionEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct LeaderboardSource * LeaderboardSource;
  uint32_t Rank;
  struct String * TitleId;
  int32_t Value;
  uint32_t Version;
  struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior_ VersionChangeBehavior;
};
struct PlayerRankedOnLeaderboardVersionEventData {
  struct PlayerRankedOnLeaderboardVersionEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRankedOnLeaderboardVersionEventData__Fields fields;
};
struct __declspec(align(8)) LeaderboardSource__Fields {
  struct StatisticLeaderboardSource * Statistic;
};
struct LeaderboardSource {
  struct LeaderboardSource__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardSource__Fields fields;
};
struct __declspec(align(8)) StatisticLeaderboardSource__Fields {
  uint32_t StatisticId;
  struct String * StatisticName;
};
struct StatisticLeaderboardSource {
  struct StatisticLeaderboardSource__Class *klass;
  struct MonitorData *monitor;
  struct StatisticLeaderboardSource__Fields fields;
};
struct StatisticLeaderboardSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticLeaderboardSource__StaticFields {
};
struct StatisticLeaderboardSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticLeaderboardSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticLeaderboardSource__VTable vtable;
};
struct LeaderboardSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboardSource__StaticFields {
};
struct LeaderboardSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardSource__VTable vtable;
};
struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___VTable vtable;
};
struct PlayerRankedOnLeaderboardVersionEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerRankedOnLeaderboardVersionEventData__StaticFields {
};
struct PlayerRankedOnLeaderboardVersionEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRankedOnLeaderboardVersionEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRankedOnLeaderboardVersionEventData__VTable vtable;
};

enum PaymentType__Enum : int32_t {
  PaymentType__Enum_Purchase = 0,
  PaymentType__Enum_ReceiptValidation = 1,
};
struct PaymentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PaymentType__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ {
  enum PaymentType__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ fields;
};
enum Currency__Enum_2 : int32_t {
  Currency__Enum_2_AED = 0,
  Currency__Enum_2_AFN = 1,
  Currency__Enum_2_ALL = 2,
  Currency__Enum_2_AMD = 3,
  Currency__Enum_2_ANG = 4,
  Currency__Enum_2_AOA = 5,
  Currency__Enum_2_ARS = 6,
  Currency__Enum_2_AUD = 7,
  Currency__Enum_2_AWG = 8,
  Currency__Enum_2_AZN = 9,
  Currency__Enum_2_BAM = 10,
  Currency__Enum_2_BBD = 11,
  Currency__Enum_2_BDT = 12,
  Currency__Enum_2_BGN = 13,
  Currency__Enum_2_BHD = 14,
  Currency__Enum_2_BIF = 15,
  Currency__Enum_2_BMD = 16,
  Currency__Enum_2_BND = 17,
  Currency__Enum_2_BOB = 18,
  Currency__Enum_2_BRL = 19,
  Currency__Enum_2_BSD = 20,
  Currency__Enum_2_BTN = 21,
  Currency__Enum_2_BWP = 22,
  Currency__Enum_2_BYR = 23,
  Currency__Enum_2_BZD = 24,
  Currency__Enum_2_CAD = 25,
  Currency__Enum_2_CDF = 26,
  Currency__Enum_2_CHF = 27,
  Currency__Enum_2_CLP = 28,
  Currency__Enum_2_CNY = 29,
  Currency__Enum_2_COP = 30,
  Currency__Enum_2_CRC = 31,
  Currency__Enum_2_CUC = 32,
  Currency__Enum_2_CUP = 33,
  Currency__Enum_2_CVE = 34,
  Currency__Enum_2_CZK = 35,
  Currency__Enum_2_DJF = 36,
  Currency__Enum_2_DKK = 37,
  Currency__Enum_2_DOP = 38,
  Currency__Enum_2_DZD = 39,
  Currency__Enum_2_EGP = 40,
  Currency__Enum_2_ERN = 41,
  Currency__Enum_2_ETB = 42,
  Currency__Enum_2_EUR = 43,
  Currency__Enum_2_FJD = 44,
  Currency__Enum_2_FKP = 45,
  Currency__Enum_2_GBP = 46,
  Currency__Enum_2_GEL = 47,
  Currency__Enum_2_GGP = 48,
  Currency__Enum_2_GHS = 49,
  Currency__Enum_2_GIP = 50,
  Currency__Enum_2_GMD = 51,
  Currency__Enum_2_GNF = 52,
  Currency__Enum_2_GTQ = 53,
  Currency__Enum_2_GYD = 54,
  Currency__Enum_2_HKD = 55,
  Currency__Enum_2_HNL = 56,
  Currency__Enum_2_HRK = 57,
  Currency__Enum_2_HTG = 58,
  Currency__Enum_2_HUF = 59,
  Currency__Enum_2_IDR = 60,
  Currency__Enum_2_ILS = 61,
  Currency__Enum_2_IMP = 62,
  Currency__Enum_2_INR = 63,
  Currency__Enum_2_IQD = 64,
  Currency__Enum_2_IRR = 65,
  Currency__Enum_2_ISK = 66,
  Currency__Enum_2_JEP = 67,
  Currency__Enum_2_JMD = 68,
  Currency__Enum_2_JOD = 69,
  Currency__Enum_2_JPY = 70,
  Currency__Enum_2_KES = 71,
  Currency__Enum_2_KGS = 72,
  Currency__Enum_2_KHR = 73,
  Currency__Enum_2_KMF = 74,
  Currency__Enum_2_KPW = 75,
  Currency__Enum_2_KRW = 76,
  Currency__Enum_2_KWD = 77,
  Currency__Enum_2_KYD = 78,
  Currency__Enum_2_KZT = 79,
  Currency__Enum_2_LAK = 80,
  Currency__Enum_2_LBP = 81,
  Currency__Enum_2_LKR = 82,
  Currency__Enum_2_LRD = 83,
  Currency__Enum_2_LSL = 84,
  Currency__Enum_2_LYD = 85,
  Currency__Enum_2_MAD = 86,
  Currency__Enum_2_MDL = 87,
  Currency__Enum_2_MGA = 88,
  Currency__Enum_2_MKD = 89,
  Currency__Enum_2_MMK = 90,
  Currency__Enum_2_MNT = 91,
  Currency__Enum_2_MOP = 92,
  Currency__Enum_2_MRO = 93,
  Currency__Enum_2_MUR = 94,
  Currency__Enum_2_MVR = 95,
  Currency__Enum_2_MWK = 96,
  Currency__Enum_2_MXN = 97,
  Currency__Enum_2_MYR = 98,
  Currency__Enum_2_MZN = 99,
  Currency__Enum_2_NAD = 100,
  Currency__Enum_2_NGN = 101,
  Currency__Enum_2_NIO = 102,
  Currency__Enum_2_NOK = 103,
  Currency__Enum_2_NPR = 104,
  Currency__Enum_2_NZD = 105,
  Currency__Enum_2_OMR = 106,
  Currency__Enum_2_PAB = 107,
  Currency__Enum_2_PEN = 108,
  Currency__Enum_2_PGK = 109,
  Currency__Enum_2_PHP = 110,
  Currency__Enum_2_PKR = 111,
  Currency__Enum_2_PLN = 112,
  Currency__Enum_2_PYG = 113,
  Currency__Enum_2_QAR = 114,
  Currency__Enum_2_RON = 115,
  Currency__Enum_2_RSD = 116,
  Currency__Enum_2_RUB = 117,
  Currency__Enum_2_RWF = 118,
  Currency__Enum_2_SAR = 119,
  Currency__Enum_2_SBD = 120,
  Currency__Enum_2_SCR = 121,
  Currency__Enum_2_SDG = 122,
  Currency__Enum_2_SEK = 123,
  Currency__Enum_2_SGD = 124,
  Currency__Enum_2_SHP = 125,
  Currency__Enum_2_SLL = 126,
  Currency__Enum_2_SOS = 127,
  Currency__Enum_2_SPL = 128,
  Currency__Enum_2_SRD = 129,
  Currency__Enum_2_STD = 130,
  Currency__Enum_2_SVC = 131,
  Currency__Enum_2_SYP = 132,
  Currency__Enum_2_SZL = 133,
  Currency__Enum_2_THB = 134,
  Currency__Enum_2_TJS = 135,
  Currency__Enum_2_TMT = 136,
  Currency__Enum_2_TND = 137,
  Currency__Enum_2_TOP = 138,
  Currency__Enum_2_TRY = 139,
  Currency__Enum_2_TTD = 140,
  Currency__Enum_2_TVD = 141,
  Currency__Enum_2_TWD = 142,
  Currency__Enum_2_TZS = 143,
  Currency__Enum_2_UAH = 144,
  Currency__Enum_2_UGX = 145,
  Currency__Enum_2_USD = 146,
  Currency__Enum_2_UYU = 147,
  Currency__Enum_2_UZS = 148,
  Currency__Enum_2_VEF = 149,
  Currency__Enum_2_VND = 150,
  Currency__Enum_2_VUV = 151,
  Currency__Enum_2_WST = 152,
  Currency__Enum_2_XAF = 153,
  Currency__Enum_2_XCD = 154,
  Currency__Enum_2_XDR = 155,
  Currency__Enum_2_XOF = 156,
  Currency__Enum_2_XPF = 157,
  Currency__Enum_2_YER = 158,
  Currency__Enum_2_ZAR = 159,
  Currency__Enum_2_ZMW = 160,
  Currency__Enum_2_ZWD = 161,
};
struct Currency__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Currency__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_Currency_ {
  enum Currency__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_Currency___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_Currency___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_Currency_ fields;
};
struct PlayerRealMoneyPurchaseEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * OrderId;
  uint32_t OrderTotal;
  struct String * PaymentProvider;
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
  struct List_1_System_String_ * PurchasedProduct;
  struct String * TitleId;
  struct Nullable_1_PlayFab_PlayStreamModels_Currency_ TransactionCurrency;
  struct String * TransactionId;
  struct Nullable_1_UInt32_ TransactionTotal;
};
struct PlayerRealMoneyPurchaseEventData {
  struct PlayerRealMoneyPurchaseEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRealMoneyPurchaseEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___VTable vtable;
};
struct Nullable_1_PlayFab_PlayStreamModels_Currency___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_Currency___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_Currency___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_Currency___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_Currency___VTable vtable;
};
struct PlayerRealMoneyPurchaseEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerRealMoneyPurchaseEventData__StaticFields {
};
struct PlayerRealMoneyPurchaseEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerRealMoneyPurchaseEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerRealMoneyPurchaseEventData__VTable vtable;
};

struct PlayerReceiptValidationEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Error;
  struct String * PaymentProvider;
  struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
  struct String * ReceiptContent;
  struct String * TitleId;
  bool Valid;
};
struct PlayerReceiptValidationEventData {
  struct PlayerReceiptValidationEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerReceiptValidationEventData__Fields fields;
};
struct PlayerReceiptValidationEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerReceiptValidationEventData__StaticFields {
};
struct PlayerReceiptValidationEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerReceiptValidationEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerReceiptValidationEventData__VTable vtable;
};

struct PlayerRedeemedCouponEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CouponCode;
  struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_ * GrantedInventoryItems;
  struct String * TitleId;
};
struct PlayerRedeemedCouponEventData {
  struct PlayerRedeemedCouponEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerRedeemedCouponEventData__Fields fields;
};}