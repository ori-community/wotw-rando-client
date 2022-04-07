namespace app {
struct ESteamControllerPad__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamControllerPad__Enum value;
};

enum ESteamInputType__Enum : int32_t {
  ESteamInputType__Enum_k_ESteamInputType_Unknown = 0,
  ESteamInputType__Enum_k_ESteamInputType_SteamController = 1,
  ESteamInputType__Enum_k_ESteamInputType_XBox360Controller = 2,
  ESteamInputType__Enum_k_ESteamInputType_XBoxOneController = 3,
  ESteamInputType__Enum_k_ESteamInputType_GenericGamepad = 4,
  ESteamInputType__Enum_k_ESteamInputType_PS4Controller = 5,
  ESteamInputType__Enum_k_ESteamInputType_AppleMFiController = 6,
  ESteamInputType__Enum_k_ESteamInputType_AndroidController = 7,
  ESteamInputType__Enum_k_ESteamInputType_SwitchJoyConPair = 8,
  ESteamInputType__Enum_k_ESteamInputType_SwitchJoyConSingle = 9,
  ESteamInputType__Enum_k_ESteamInputType_SwitchProController = 10,
  ESteamInputType__Enum_k_ESteamInputType_MobileTouch = 11,
  ESteamInputType__Enum_k_ESteamInputType_PS3Controller = 12,
  ESteamInputType__Enum_k_ESteamInputType_Count = 13,
  ESteamInputType__Enum_k_ESteamInputType_MaximumPossibleValue = 255,
};
struct ESteamInputType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamInputType__Enum value;
};

enum EXboxOrigin__Enum : int32_t {
  EXboxOrigin__Enum_k_EXboxOrigin_A = 0,
  EXboxOrigin__Enum_k_EXboxOrigin_B = 1,
  EXboxOrigin__Enum_k_EXboxOrigin_X = 2,
  EXboxOrigin__Enum_k_EXboxOrigin_Y = 3,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftBumper = 4,
  EXboxOrigin__Enum_k_EXboxOrigin_RightBumper = 5,
  EXboxOrigin__Enum_k_EXboxOrigin_Menu = 6,
  EXboxOrigin__Enum_k_EXboxOrigin_View = 7,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftTrigger_Pull = 8,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftTrigger_Click = 9,
  EXboxOrigin__Enum_k_EXboxOrigin_RightTrigger_Pull = 10,
  EXboxOrigin__Enum_k_EXboxOrigin_RightTrigger_Click = 11,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_Move = 12,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_Click = 13,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_DPadNorth = 14,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_DPadSouth = 15,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_DPadWest = 16,
  EXboxOrigin__Enum_k_EXboxOrigin_LeftStick_DPadEast = 17,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_Move = 18,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_Click = 19,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_DPadNorth = 20,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_DPadSouth = 21,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_DPadWest = 22,
  EXboxOrigin__Enum_k_EXboxOrigin_RightStick_DPadEast = 23,
  EXboxOrigin__Enum_k_EXboxOrigin_DPad_North = 24,
  EXboxOrigin__Enum_k_EXboxOrigin_DPad_South = 25,
  EXboxOrigin__Enum_k_EXboxOrigin_DPad_West = 26,
  EXboxOrigin__Enum_k_EXboxOrigin_DPad_East = 27,
  EXboxOrigin__Enum_k_EXboxOrigin_Count = 28,
};
struct EXboxOrigin__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EXboxOrigin__Enum value;
};

enum EPersonaState__Enum : int32_t {
  EPersonaState__Enum_k_EPersonaStateOffline = 0,
  EPersonaState__Enum_k_EPersonaStateOnline = 1,
  EPersonaState__Enum_k_EPersonaStateBusy = 2,
  EPersonaState__Enum_k_EPersonaStateAway = 3,
  EPersonaState__Enum_k_EPersonaStateSnooze = 4,
  EPersonaState__Enum_k_EPersonaStateLookingToTrade = 5,
  EPersonaState__Enum_k_EPersonaStateLookingToPlay = 6,
  EPersonaState__Enum_k_EPersonaStateInvisible = 7,
  EPersonaState__Enum_k_EPersonaStateMax = 8,
};
struct EPersonaState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EPersonaState__Enum value;
};

enum EFriendFlags__Enum : int32_t {
  EFriendFlags__Enum_k_EFriendFlagNone = 0,
  EFriendFlags__Enum_k_EFriendFlagBlocked = 1,
  EFriendFlags__Enum_k_EFriendFlagFriendshipRequested = 2,
  EFriendFlags__Enum_k_EFriendFlagImmediate = 4,
  EFriendFlags__Enum_k_EFriendFlagClanMember = 8,
  EFriendFlags__Enum_k_EFriendFlagOnGameServer = 16,
  EFriendFlags__Enum_k_EFriendFlagRequestingFriendship = 128,
  EFriendFlags__Enum_k_EFriendFlagRequestingInfo = 256,
  EFriendFlags__Enum_k_EFriendFlagIgnored = 512,
  EFriendFlags__Enum_k_EFriendFlagIgnoredFriend = 1024,
  EFriendFlags__Enum_k_EFriendFlagChatMember = 4096,
  EFriendFlags__Enum_k_EFriendFlagAll = 65535,
};
struct EFriendFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EFriendFlags__Enum value;
};

enum EFriendRelationship__Enum : int32_t {
  EFriendRelationship__Enum_k_EFriendRelationshipNone = 0,
  EFriendRelationship__Enum_k_EFriendRelationshipBlocked = 1,
  EFriendRelationship__Enum_k_EFriendRelationshipRequestRecipient = 2,
  EFriendRelationship__Enum_k_EFriendRelationshipFriend = 3,
  EFriendRelationship__Enum_k_EFriendRelationshipRequestInitiator = 4,
  EFriendRelationship__Enum_k_EFriendRelationshipIgnored = 5,
  EFriendRelationship__Enum_k_EFriendRelationshipIgnoredFriend = 6,
  EFriendRelationship__Enum_k_EFriendRelationshipSuggested_DEPRECATED = 7,
  EFriendRelationship__Enum_k_EFriendRelationshipMax = 8,
};
struct EFriendRelationship__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EFriendRelationship__Enum value;
};

struct CGameID {
  uint64_t m_GameID;
};
struct CGameID__Boxed {
  struct CGameID__Class *klass;
  struct MonitorData *monitor;
  struct CGameID fields;
};
struct FriendGameInfo_t {
  struct CGameID m_gameID;
  uint32_t m_unGameIP;
  uint16_t m_usGamePort;
  uint16_t m_usQueryPort;
  struct CSteamID m_steamIDLobby;
};
struct FriendGameInfo_t__Boxed {
  struct FriendGameInfo_t__Class *klass;
  struct MonitorData *monitor;
  struct FriendGameInfo_t fields;
};
struct CGameID__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct CGameID__StaticFields {
};
struct CGameID__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CGameID__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CGameID__VTable vtable;
};
struct FriendGameInfo_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FriendGameInfo_t__StaticFields {
};
struct FriendGameInfo_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FriendGameInfo_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FriendGameInfo_t__VTable vtable;
};

struct FriendsGroupID_t {
  int16_t m_FriendsGroupID;
};
struct FriendsGroupID_t__Boxed {
  struct FriendsGroupID_t__Class *klass;
  struct MonitorData *monitor;
  struct FriendsGroupID_t fields;
};
struct FriendsGroupID_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct FriendsGroupID_t__StaticFields {
  struct FriendsGroupID_t Invalid;
};
struct FriendsGroupID_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FriendsGroupID_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FriendsGroupID_t__VTable vtable;
};

struct CSteamID__Array {
  struct CSteamID__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CSteamID vector[32];
};

enum EActivateGameOverlayToWebPageMode__Enum : int32_t {
  EActivateGameOverlayToWebPageMode__Enum_k_EActivateGameOverlayToWebPageMode_Default = 0,
  EActivateGameOverlayToWebPageMode__Enum_k_EActivateGameOverlayToWebPageMode_Modal = 1,
};
struct EActivateGameOverlayToWebPageMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EActivateGameOverlayToWebPageMode__Enum value;
};

enum EOverlayToStoreFlag__Enum : int32_t {
  EOverlayToStoreFlag__Enum_k_EOverlayToStoreFlag_None = 0,
  EOverlayToStoreFlag__Enum_k_EOverlayToStoreFlag_AddToCart = 1,
  EOverlayToStoreFlag__Enum_k_EOverlayToStoreFlag_AddToCartAndShow = 2,
};
struct EOverlayToStoreFlag__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EOverlayToStoreFlag__Enum value;
};

enum EChatEntryType__Enum : int32_t {
  EChatEntryType__Enum_k_EChatEntryTypeInvalid = 0,
  EChatEntryType__Enum_k_EChatEntryTypeChatMsg = 1,
  EChatEntryType__Enum_k_EChatEntryTypeTyping = 2,
  EChatEntryType__Enum_k_EChatEntryTypeInviteGame = 3,
  EChatEntryType__Enum_k_EChatEntryTypeEmote = 4,
  EChatEntryType__Enum_k_EChatEntryTypeLeftConversation = 6,
  EChatEntryType__Enum_k_EChatEntryTypeEntered = 7,
  EChatEntryType__Enum_k_EChatEntryTypeWasKicked = 8,
  EChatEntryType__Enum_k_EChatEntryTypeWasBanned = 9,
  EChatEntryType__Enum_k_EChatEntryTypeDisconnected = 10,
  EChatEntryType__Enum_k_EChatEntryTypeHistoricalChat = 11,
  EChatEntryType__Enum_k_EChatEntryTypeLinkBlocked = 14,
};
struct EChatEntryType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EChatEntryType__Enum value;
};

struct HAuthTicket {
  uint32_t m_HAuthTicket;
};
struct HAuthTicket__Boxed {
  struct HAuthTicket__Class *klass;
  struct MonitorData *monitor;
  struct HAuthTicket fields;
};
struct HAuthTicket__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HAuthTicket__StaticFields {
  struct HAuthTicket Invalid;
};
struct HAuthTicket__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HAuthTicket__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HAuthTicket__VTable vtable;
};

enum EBeginAuthSessionResult__Enum : int32_t {
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultOK = 0,
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultInvalidTicket = 1,
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultDuplicateRequest = 2,
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultInvalidVersion = 3,
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultGameMismatch = 4,
  EBeginAuthSessionResult__Enum_k_EBeginAuthSessionResultExpiredTicket = 5,
};
struct EBeginAuthSessionResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EBeginAuthSessionResult__Enum value;
};

enum EUserHasLicenseForAppResult__Enum : int32_t {
  EUserHasLicenseForAppResult__Enum_k_EUserHasLicenseResultHasLicense = 0,
  EUserHasLicenseForAppResult__Enum_k_EUserHasLicenseResultDoesNotHaveLicense = 1,
  EUserHasLicenseForAppResult__Enum_k_EUserHasLicenseResultNoAuth = 2,
};
struct EUserHasLicenseForAppResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUserHasLicenseForAppResult__Enum value;
};

struct HTTPRequestHandle {
  uint32_t m_HTTPRequestHandle;
};
struct HTTPRequestHandle__Boxed {
  struct HTTPRequestHandle__Class *klass;
  struct MonitorData *monitor;
  struct HTTPRequestHandle fields;
};
enum EHTTPMethod__Enum : int32_t {
  EHTTPMethod__Enum_k_EHTTPMethodInvalid = 0,
  EHTTPMethod__Enum_k_EHTTPMethodGET = 1,
  EHTTPMethod__Enum_k_EHTTPMethodHEAD = 2,
  EHTTPMethod__Enum_k_EHTTPMethodPOST = 3,
  EHTTPMethod__Enum_k_EHTTPMethodPUT = 4,
  EHTTPMethod__Enum_k_EHTTPMethodDELETE = 5,
  EHTTPMethod__Enum_k_EHTTPMethodOPTIONS = 6,
  EHTTPMethod__Enum_k_EHTTPMethodPATCH = 7,
};
struct EHTTPMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EHTTPMethod__Enum value;
};
struct HTTPRequestHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HTTPRequestHandle__StaticFields {
  struct HTTPRequestHandle Invalid;
};
struct HTTPRequestHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HTTPRequestHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HTTPRequestHandle__VTable vtable;
};

struct HTTPCookieContainerHandle {
  uint32_t m_HTTPCookieContainerHandle;
};
struct HTTPCookieContainerHandle__Boxed {
  struct HTTPCookieContainerHandle__Class *klass;
  struct MonitorData *monitor;
  struct HTTPCookieContainerHandle fields;
};
struct HTTPCookieContainerHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HTTPCookieContainerHandle__StaticFields {
  struct HTTPCookieContainerHandle Invalid;
};
struct HTTPCookieContainerHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HTTPCookieContainerHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HTTPCookieContainerHandle__VTable vtable;
};

struct SteamInventoryResult_t {
  int32_t m_SteamInventoryResult;
};
struct SteamInventoryResult_t__Boxed {
  struct SteamInventoryResult_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamInventoryResult_t fields;
};
struct SteamInventoryResult_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamInventoryResult_t__StaticFields {
  struct SteamInventoryResult_t Invalid;
};
struct SteamInventoryResult_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamInventoryResult_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamInventoryResult_t__VTable vtable;
};

struct SteamItemInstanceID_t {
  uint64_t m_SteamItemInstanceID;
};
struct SteamItemInstanceID_t__Boxed {
  struct SteamItemInstanceID_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamItemInstanceID_t fields;
};
struct SteamItemDef_t {
  int32_t m_SteamItemDef;
};
struct SteamItemDef_t__Boxed {
  struct SteamItemDef_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamItemDef_t fields;
};
struct SteamItemDetails_t {
  struct SteamItemInstanceID_t m_itemId;
  struct SteamItemDef_t m_iDefinition;
  uint16_t m_unQuantity;
  uint16_t m_unFlags;
};
struct SteamItemDetails_t__Boxed {
  struct SteamItemDetails_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamItemDetails_t fields;
};
struct SteamItemDetails_t__Array {
  struct SteamItemDetails_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SteamItemDetails_t vector[32];
};
struct SteamItemInstanceID_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamItemInstanceID_t__StaticFields {
  struct SteamItemInstanceID_t Invalid;
};
struct SteamItemInstanceID_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamItemInstanceID_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamItemInstanceID_t__VTable vtable;
};
struct SteamItemDef_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamItemDef_t__StaticFields {
};
struct SteamItemDef_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamItemDef_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamItemDef_t__VTable vtable;
};
struct SteamItemDetails_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SteamItemDetails_t__StaticFields {
};
struct SteamItemDetails_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamItemDetails_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamItemDetails_t__VTable vtable;
};

struct SteamItemInstanceID_t__Array {
  struct SteamItemInstanceID_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SteamItemInstanceID_t vector[32];
};

struct SteamItemDef_t__Array {
  struct SteamItemDef_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SteamItemDef_t vector[32];
};

struct SteamInventoryUpdateHandle_t {
  uint64_t m_SteamInventoryUpdateHandle;
};
struct SteamInventoryUpdateHandle_t__Boxed {
  struct SteamInventoryUpdateHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamInventoryUpdateHandle_t fields;
};
struct SteamInventoryUpdateHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamInventoryUpdateHandle_t__StaticFields {
  struct SteamInventoryUpdateHandle_t Invalid;
};
struct SteamInventoryUpdateHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamInventoryUpdateHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamInventoryUpdateHandle_t__VTable vtable;
};

enum EP2PSend__Enum : int32_t {
  EP2PSend__Enum_k_EP2PSendUnreliable = 0,
  EP2PSend__Enum_k_EP2PSendUnreliableNoDelay = 1,
  EP2PSend__Enum_k_EP2PSendReliable = 2,
  EP2PSend__Enum_k_EP2PSendReliableWithBuffering = 3,
};
struct EP2PSend__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EP2PSend__Enum value;
};

struct P2PSessionState_t {
  uint8_t m_bConnectionActive;
  uint8_t m_bConnecting;
  uint8_t m_eP2PSessionError;
  uint8_t m_bUsingRelay;
  int32_t m_nBytesQueuedForSend;
  int32_t m_nPacketsQueuedForSend;
  uint32_t m_nRemoteIP;
  uint16_t m_nRemotePort;
};
struct P2PSessionState_t__Boxed {
  struct P2PSessionState_t__Class *klass;
  struct MonitorData *monitor;
  struct P2PSessionState_t fields;
};
struct P2PSessionState_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct P2PSessionState_t__StaticFields {
};
struct P2PSessionState_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct P2PSessionState_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct P2PSessionState_t__VTable vtable;
};

struct SNetListenSocket_t {
  uint32_t m_SNetListenSocket;
};
struct SNetListenSocket_t__Boxed {
  struct SNetListenSocket_t__Class *klass;
  struct MonitorData *monitor;
  struct SNetListenSocket_t fields;
};
struct SNetListenSocket_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SNetListenSocket_t__StaticFields {
};
struct SNetListenSocket_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SNetListenSocket_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SNetListenSocket_t__VTable vtable;
};

struct SNetSocket_t {
  uint32_t m_SNetSocket;
};
struct SNetSocket_t__Boxed {
  struct SNetSocket_t__Class *klass;
  struct MonitorData *monitor;
  struct SNetSocket_t fields;
};
struct SNetSocket_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SNetSocket_t__StaticFields {
};
struct SNetSocket_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SNetSocket_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SNetSocket_t__VTable vtable;
};

enum ESNetSocketConnectionType__Enum : int32_t {
  ESNetSocketConnectionType__Enum_k_ESNetSocketConnectionTypeNotConnected = 0,
  ESNetSocketConnectionType__Enum_k_ESNetSocketConnectionTypeUDP = 1,
  ESNetSocketConnectionType__Enum_k_ESNetSocketConnectionTypeUDPRelay = 2,
};
struct ESNetSocketConnectionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESNetSocketConnectionType__Enum value;
};

struct UGCQueryHandle_t {
  uint64_t m_UGCQueryHandle;
};
struct UGCQueryHandle_t__Boxed {
  struct UGCQueryHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct UGCQueryHandle_t fields;
};
struct AccountID_t {
  uint32_t m_AccountID;
};
struct AccountID_t__Boxed {
  struct AccountID_t__Class *klass;
  struct MonitorData *monitor;
  struct AccountID_t fields;
};
enum EUserUGCList__Enum : int32_t {
  EUserUGCList__Enum_k_EUserUGCList_Published = 0,
  EUserUGCList__Enum_k_EUserUGCList_VotedOn = 1,
  EUserUGCList__Enum_k_EUserUGCList_VotedUp = 2,
  EUserUGCList__Enum_k_EUserUGCList_VotedDown = 3,
  EUserUGCList__Enum_k_EUserUGCList_WillVoteLater = 4,
  EUserUGCList__Enum_k_EUserUGCList_Favorited = 5,
  EUserUGCList__Enum_k_EUserUGCList_Subscribed = 6,
  EUserUGCList__Enum_k_EUserUGCList_UsedOrPlayed = 7,
  EUserUGCList__Enum_k_EUserUGCList_Followed = 8,
};
struct EUserUGCList__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUserUGCList__Enum value;
};
enum EUGCMatchingUGCType__Enum : int32_t {
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Items = 0,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Items_Mtx = 1,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Items_ReadyToUse = 2,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Collections = 3,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Artwork = 4,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Videos = 5,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_Screenshots = 6,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_AllGuides = 7,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_WebGuides = 8,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_IntegratedGuides = 9,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_UsableInGame = 10,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_ControllerBindings = 11,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_GameManagedItems = 12,
  EUGCMatchingUGCType__Enum_k_EUGCMatchingUGCType_All = -1,
};
struct EUGCMatchingUGCType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUGCMatchingUGCType__Enum value;
};
enum EUserUGCListSortOrder__Enum : int32_t {
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_CreationOrderDesc = 0,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_CreationOrderAsc = 1,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_TitleAsc = 2,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_LastUpdatedDesc = 3,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_SubscriptionDateDesc = 4,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_VoteScoreDesc = 5,
  EUserUGCListSortOrder__Enum_k_EUserUGCListSortOrder_ForModeration = 6,
};
struct EUserUGCListSortOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUserUGCListSortOrder__Enum value;
};
struct UGCQueryHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct UGCQueryHandle_t__StaticFields {
  struct UGCQueryHandle_t Invalid;
};
struct UGCQueryHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UGCQueryHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UGCQueryHandle_t__VTable vtable;
};
struct AccountID_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct AccountID_t__StaticFields {
};
struct AccountID_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AccountID_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AccountID_t__VTable vtable;
};

enum EUGCQuery__Enum : int32_t {
  EUGCQuery__Enum_k_EUGCQuery_RankedByVote = 0,
  EUGCQuery__Enum_k_EUGCQuery_RankedByPublicationDate = 1,
  EUGCQuery__Enum_k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 2,
  EUGCQuery__Enum_k_EUGCQuery_RankedByTrend = 3,
  EUGCQuery__Enum_k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 4,
  EUGCQuery__Enum_k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 5,
  EUGCQuery__Enum_k_EUGCQuery_RankedByNumTimesReported = 6,
  EUGCQuery__Enum_k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 7,
  EUGCQuery__Enum_k_EUGCQuery_NotYetRated = 8,
  EUGCQuery__Enum_k_EUGCQuery_RankedByTotalVotesAsc = 9,
  EUGCQuery__Enum_k_EUGCQuery_RankedByVotesUp = 10,
  EUGCQuery__Enum_k_EUGCQuery_RankedByTextSearch = 11,
  EUGCQuery__Enum_k_EUGCQuery_RankedByTotalUniqueSubscriptions = 12,
  EUGCQuery__Enum_k_EUGCQuery_RankedByPlaytimeTrend = 13,
  EUGCQuery__Enum_k_EUGCQuery_RankedByTotalPlaytime = 14,
  EUGCQuery__Enum_k_EUGCQuery_RankedByAveragePlaytimeTrend = 15,
  EUGCQuery__Enum_k_EUGCQuery_RankedByLifetimeAveragePlaytime = 16,
  EUGCQuery__Enum_k_EUGCQuery_RankedByPlaytimeSessionsTrend = 17,
  EUGCQuery__Enum_k_EUGCQuery_RankedByLifetimePlaytimeSessions = 18,
};
struct EUGCQuery__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUGCQuery__Enum value;
};

struct PublishedFileId_t {
  uint64_t m_PublishedFileId;
};
struct PublishedFileId_t__Boxed {
  struct PublishedFileId_t__Class *klass;
  struct MonitorData *monitor;
  struct PublishedFileId_t fields;
};
struct PublishedFileId_t__Array {
  struct PublishedFileId_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PublishedFileId_t vector[32];
};
struct PublishedFileId_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct PublishedFileId_t__StaticFields {
  struct PublishedFileId_t Invalid;
};
struct PublishedFileId_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PublishedFileId_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PublishedFileId_t__VTable vtable;
};

enum EWorkshopFileType__Enum : int32_t {
  EWorkshopFileType__Enum_k_EWorkshopFileTypeFirst = 0,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeCommunity = 0,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeMicrotransaction = 1,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeCollection = 2,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeArt = 3,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeVideo = 4,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeScreenshot = 5,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeGame = 6,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeSoftware = 7,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeConcept = 8,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeWebGuide = 9,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeIntegratedGuide = 10,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeMerch = 11,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeControllerBinding = 12,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeSteamworksAccessInvite = 13,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeSteamVideo = 14,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeGameManagedItem = 15,
  EWorkshopFileType__Enum_k_EWorkshopFileTypeMax = 16,
};
struct EWorkshopFileType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EWorkshopFileType__Enum value;
};
enum ERemoteStoragePublishedFileVisibility__Enum : int32_t {
  ERemoteStoragePublishedFileVisibility__Enum_k_ERemoteStoragePublishedFileVisibilityPublic = 0,
  ERemoteStoragePublishedFileVisibility__Enum_k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 1,
  ERemoteStoragePublishedFileVisibility__Enum_k_ERemoteStoragePublishedFileVisibilityPrivate = 2,
};
struct ERemoteStoragePublishedFileVisibility__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ERemoteStoragePublishedFileVisibility__Enum value;
};
struct UGCHandle_t {
  uint64_t m_UGCHandle;
};
struct UGCHandle_t__Boxed {
  struct UGCHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct UGCHandle_t fields;
};
struct SteamUGCDetails_t {
  struct PublishedFileId_t m_nPublishedFileId;
  enum EResult__Enum m_eResult;
  enum EWorkshopFileType__Enum m_eFileType;
  struct AppId_t m_nCreatorAppID;
  struct AppId_t m_nConsumerAppID;
  struct String * m_rgchTitle;
  struct String * m_rgchDescription;
  uint64_t m_ulSteamIDOwner;
  uint32_t m_rtimeCreated;
  uint32_t m_rtimeUpdated;
  uint32_t m_rtimeAddedToUserList;
  enum ERemoteStoragePublishedFileVisibility__Enum m_eVisibility;
  bool m_bBanned;
  bool m_bAcceptedForUse;
  bool m_bTagsTruncated;
  struct String * m_rgchTags;
  struct UGCHandle_t m_hFile;
  struct UGCHandle_t m_hPreviewFile;
  struct String * m_pchFileName;
  int32_t m_nFileSize;
  int32_t m_nPreviewFileSize;
  struct String * m_rgchURL;
  uint32_t m_unVotesUp;
  uint32_t m_unVotesDown;
  float m_flScore;
  uint32_t m_unNumChildren;
};
struct SteamUGCDetails_t__Boxed {
  struct SteamUGCDetails_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamUGCDetails_t fields;
};
struct UGCHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct UGCHandle_t__StaticFields {
  struct UGCHandle_t Invalid;
};
struct UGCHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UGCHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UGCHandle_t__VTable vtable;
};
struct SteamUGCDetails_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SteamUGCDetails_t__StaticFields {
};
struct SteamUGCDetails_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamUGCDetails_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamUGCDetails_t__VTable vtable;
};

enum EItemStatistic__Enum : int32_t {
  EItemStatistic__Enum_k_EItemStatistic_NumSubscriptions = 0,
  EItemStatistic__Enum_k_EItemStatistic_NumFavorites = 1,
  EItemStatistic__Enum_k_EItemStatistic_NumFollowers = 2,
  EItemStatistic__Enum_k_EItemStatistic_NumUniqueSubscriptions = 3,
  EItemStatistic__Enum_k_EItemStatistic_NumUniqueFavorites = 4,
  EItemStatistic__Enum_k_EItemStatistic_NumUniqueFollowers = 5,
  EItemStatistic__Enum_k_EItemStatistic_NumUniqueWebsiteViews = 6,
  EItemStatistic__Enum_k_EItemStatistic_ReportScore = 7,
  EItemStatistic__Enum_k_EItemStatistic_NumSecondsPlayed = 8,
  EItemStatistic__Enum_k_EItemStatistic_NumPlaytimeSessions = 9,
  EItemStatistic__Enum_k_EItemStatistic_NumComments = 10,
  EItemStatistic__Enum_k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = 11,
  EItemStatistic__Enum_k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 12,
};
struct EItemStatistic__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EItemStatistic__Enum value;
};

enum EItemPreviewType__Enum : int32_t {
  EItemPreviewType__Enum_k_EItemPreviewType_Image = 0,
  EItemPreviewType__Enum_k_EItemPreviewType_YouTubeVideo = 1,
  EItemPreviewType__Enum_k_EItemPreviewType_Sketchfab = 2,
  EItemPreviewType__Enum_k_EItemPreviewType_EnvironmentMap_HorizontalCross = 3,
  EItemPreviewType__Enum_k_EItemPreviewType_EnvironmentMap_LatLong = 4,
  EItemPreviewType__Enum_k_EItemPreviewType_ReservedMax = 255,
};
struct EItemPreviewType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EItemPreviewType__Enum value;
};

struct UGCUpdateHandle_t {
  uint64_t m_UGCUpdateHandle;
};
struct UGCUpdateHandle_t__Boxed {
  struct UGCUpdateHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct UGCUpdateHandle_t fields;
};
struct UGCUpdateHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct UGCUpdateHandle_t__StaticFields {
  struct UGCUpdateHandle_t Invalid;
};
struct UGCUpdateHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UGCUpdateHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UGCUpdateHandle_t__VTable vtable;
};

enum EItemUpdateStatus__Enum : int32_t {
  EItemUpdateStatus__Enum_k_EItemUpdateStatusInvalid = 0,
  EItemUpdateStatus__Enum_k_EItemUpdateStatusPreparingConfig = 1,
  EItemUpdateStatus__Enum_k_EItemUpdateStatusPreparingContent = 2,
  EItemUpdateStatus__Enum_k_EItemUpdateStatusUploadingContent = 3,
  EItemUpdateStatus__Enum_k_EItemUpdateStatusUploadingPreviewFile = 4,
  EItemUpdateStatus__Enum_k_EItemUpdateStatusCommittingChanges = 5,
};
struct EItemUpdateStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EItemUpdateStatus__Enum value;
};}