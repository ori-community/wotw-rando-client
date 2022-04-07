namespace app {
struct CharacterVirtualCurrencyBalanceChangedEventData__StaticFields {
};
struct CharacterVirtualCurrencyBalanceChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterVirtualCurrencyBalanceChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterVirtualCurrencyBalanceChangedEventData__VTable vtable;
};

struct DisplayNameFilteredEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DisplayName;
  struct String * PlayerId;
};
struct DisplayNameFilteredEventData {
  struct DisplayNameFilteredEventData__Class *klass;
  struct MonitorData *monitor;
  struct DisplayNameFilteredEventData__Fields fields;
};
struct DisplayNameFilteredEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DisplayNameFilteredEventData__StaticFields {
};
struct DisplayNameFilteredEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisplayNameFilteredEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisplayNameFilteredEventData__VTable vtable;
};

struct PlayerDisplayNameFilteredEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DisplayName;
  struct String * TitleId;
};
struct PlayerDisplayNameFilteredEventData {
  struct PlayerDisplayNameFilteredEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDisplayNameFilteredEventData__Fields fields;
};
struct PlayerDisplayNameFilteredEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerDisplayNameFilteredEventData__StaticFields {
};
struct PlayerDisplayNameFilteredEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDisplayNameFilteredEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDisplayNameFilteredEventData__VTable vtable;
};

enum PhotonServicesEnum__Enum : int32_t {
  PhotonServicesEnum__Enum_Realtime = 0,
  PhotonServicesEnum__Enum_Turnbased = 1,
  PhotonServicesEnum__Enum_Chat = 2,
};
struct PhotonServicesEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PhotonServicesEnum__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ {
  enum PhotonServicesEnum__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ fields;
};
struct PlayerPhotonSessionAuthenticatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * PhotonApplicationId;
  struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum_ PhotonApplicationType;
  struct String * TitleId;
};
struct PlayerPhotonSessionAuthenticatedEventData {
  struct PlayerPhotonSessionAuthenticatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPhotonSessionAuthenticatedEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___VTable vtable;
};
struct PlayerPhotonSessionAuthenticatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerPhotonSessionAuthenticatedEventData__StaticFields {
};
struct PlayerPhotonSessionAuthenticatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerPhotonSessionAuthenticatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerPhotonSessionAuthenticatedEventData__VTable vtable;
};

struct AuthTokenValidatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * EmailTemplateId;
  struct String * TitleId;
  struct String * Token;
};
struct AuthTokenValidatedEventData {
  struct AuthTokenValidatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct AuthTokenValidatedEventData__Fields fields;
};
struct AuthTokenValidatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AuthTokenValidatedEventData__StaticFields {
};
struct AuthTokenValidatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuthTokenValidatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuthTokenValidatedEventData__VTable vtable;
};

struct MasterPlayerTitleDeletedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * MetaData;
  struct String * PlayerId;
  struct String * ReceiptId;
};
struct MasterPlayerTitleDeletedEventData {
  struct MasterPlayerTitleDeletedEventData__Class *klass;
  struct MonitorData *monitor;
  struct MasterPlayerTitleDeletedEventData__Fields fields;
};
struct MasterPlayerTitleDeletedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MasterPlayerTitleDeletedEventData__StaticFields {
};
struct MasterPlayerTitleDeletedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MasterPlayerTitleDeletedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MasterPlayerTitleDeletedEventData__VTable vtable;
};

struct PlayerActionExecutedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * ActionName;
  struct ActionExecutionError * Error;
  double ExecutionDuration;
  struct Object * ExecutionResult;
  struct DateTime ScheduledTimestamp;
  struct String * TitleId;
  struct DateTime TriggeredTimestamp;
  struct EventRuleMatch * TriggeringEventRuleMatch;
  struct SegmentMembershipChange * TriggeringSegmentMembershipChange;
};
struct PlayerActionExecutedEventData {
  struct PlayerActionExecutedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerActionExecutedEventData__Fields fields;
};
struct __declspec(align(8)) ActionExecutionError__Fields {
  struct String * Error;
  struct String * Message;
};
struct ActionExecutionError {
  struct ActionExecutionError__Class *klass;
  struct MonitorData *monitor;
  struct ActionExecutionError__Fields fields;
};
struct __declspec(align(8)) EventRuleMatch__Fields {
  struct String * EventId;
  struct String * RuleId;
};
struct EventRuleMatch {
  struct EventRuleMatch__Class *klass;
  struct MonitorData *monitor;
  struct EventRuleMatch__Fields fields;
};
enum SegmentMembershipChangeType__Enum : int32_t {
  SegmentMembershipChangeType__Enum_Entered = 0,
  SegmentMembershipChangeType__Enum_Exited = 1,
};
struct SegmentMembershipChangeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SegmentMembershipChangeType__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ {
  enum SegmentMembershipChangeType__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ fields;
};
struct __declspec(align(8)) SegmentMembershipChange__Fields {
  struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ Change;
  struct String * EventId;
  struct String * SegmentId;
};
struct SegmentMembershipChange {
  struct SegmentMembershipChange__Class *klass;
  struct MonitorData *monitor;
  struct SegmentMembershipChange__Fields fields;
};
struct ActionExecutionError__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActionExecutionError__StaticFields {
};
struct ActionExecutionError__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActionExecutionError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActionExecutionError__VTable vtable;
};
struct EventRuleMatch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EventRuleMatch__StaticFields {
};
struct EventRuleMatch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventRuleMatch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventRuleMatch__VTable vtable;
};
struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___VTable vtable;
};
struct SegmentMembershipChange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SegmentMembershipChange__StaticFields {
};
struct SegmentMembershipChange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SegmentMembershipChange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SegmentMembershipChange__VTable vtable;
};
struct PlayerActionExecutedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerActionExecutedEventData__StaticFields {
};
struct PlayerActionExecutedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerActionExecutedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerActionExecutedEventData__VTable vtable;
};

struct PlayerAdCampaignAttributionEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CampaignId;
  struct String * TitleId;
};
struct PlayerAdCampaignAttributionEventData {
  struct PlayerAdCampaignAttributionEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdCampaignAttributionEventData__Fields fields;
};
struct PlayerAdCampaignAttributionEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdCampaignAttributionEventData__StaticFields {
};
struct PlayerAdCampaignAttributionEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdCampaignAttributionEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdCampaignAttributionEventData__VTable vtable;
};

struct PlayerAdClosedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
};
struct PlayerAdClosedEventData {
  struct PlayerAdClosedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdClosedEventData__Fields fields;
};
struct PlayerAdClosedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdClosedEventData__StaticFields {
};
struct PlayerAdClosedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdClosedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdClosedEventData__VTable vtable;
};

enum LoginIdentityProvider__Enum_2 : int32_t {
  LoginIdentityProvider__Enum_2_Unknown = 0,
  LoginIdentityProvider__Enum_2_PlayFab = 1,
  LoginIdentityProvider__Enum_2_Custom = 2,
  LoginIdentityProvider__Enum_2_GameCenter = 3,
  LoginIdentityProvider__Enum_2_GooglePlay = 4,
  LoginIdentityProvider__Enum_2_Steam = 5,
  LoginIdentityProvider__Enum_2_XBoxLive = 6,
  LoginIdentityProvider__Enum_2_PSN = 7,
  LoginIdentityProvider__Enum_2_Kongregate = 8,
  LoginIdentityProvider__Enum_2_Facebook = 9,
  LoginIdentityProvider__Enum_2_IOSDevice = 10,
  LoginIdentityProvider__Enum_2_AndroidDevice = 11,
  LoginIdentityProvider__Enum_2_Twitch = 12,
  LoginIdentityProvider__Enum_2_WindowsHello = 13,
  LoginIdentityProvider__Enum_2_GameServer = 14,
  LoginIdentityProvider__Enum_2_CustomServer = 15,
  LoginIdentityProvider__Enum_2_NintendoSwitch = 16,
  LoginIdentityProvider__Enum_2_FacebookInstantGames = 17,
  LoginIdentityProvider__Enum_2_OpenIdConnect = 18,
};
struct LoginIdentityProvider__Enum_2__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoginIdentityProvider__Enum_2 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ {
  enum LoginIdentityProvider__Enum_2 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ fields;
};
struct PlayerAddedTitleEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DisplayName;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
  struct String * PlatformUserId;
  struct String * TitleId;
};
struct PlayerAddedTitleEventData {
  struct PlayerAddedTitleEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAddedTitleEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___VTable vtable;
};
struct PlayerAddedTitleEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAddedTitleEventData__StaticFields {
};
struct PlayerAddedTitleEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAddedTitleEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAddedTitleEventData__VTable vtable;
};

struct PlayerAdEndedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
};
struct PlayerAdEndedEventData {
  struct PlayerAdEndedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdEndedEventData__Fields fields;
};
struct PlayerAdEndedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdEndedEventData__StaticFields {
};
struct PlayerAdEndedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdEndedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdEndedEventData__VTable vtable;
};

struct PlayerAdOpenedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
};
struct PlayerAdOpenedEventData {
  struct PlayerAdOpenedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdOpenedEventData__Fields fields;
};
struct PlayerAdOpenedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdOpenedEventData__StaticFields {
};
struct PlayerAdOpenedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdOpenedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdOpenedEventData__VTable vtable;
};

struct PlayerAdRewardedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct List_1_System_String_ * ActionGroupDebugMessages;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
  struct Nullable_1_Int32_ ViewsRemainingThisPeriod;
};
struct PlayerAdRewardedEventData {
  struct PlayerAdRewardedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdRewardedEventData__Fields fields;
};
struct PlayerAdRewardedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdRewardedEventData__StaticFields {
};
struct PlayerAdRewardedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdRewardedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdRewardedEventData__VTable vtable;
};

struct PlayerAdRewardValuedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  double RevenueShare;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
};
struct PlayerAdRewardValuedEventData {
  struct PlayerAdRewardValuedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdRewardValuedEventData__Fields fields;
};
struct PlayerAdRewardValuedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdRewardValuedEventData__StaticFields {
};
struct PlayerAdRewardValuedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdRewardValuedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdRewardValuedEventData__VTable vtable;
};

struct PlayerAdStartedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * AdPlacementId;
  struct String * AdPlacementName;
  struct String * AdUnit;
  struct String * RewardId;
  struct String * RewardName;
  struct String * TitleId;
};
struct PlayerAdStartedEventData {
  struct PlayerAdStartedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAdStartedEventData__Fields fields;
};
struct PlayerAdStartedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerAdStartedEventData__StaticFields {
};
struct PlayerAdStartedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerAdStartedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerAdStartedEventData__VTable vtable;
};

struct PlayerBannedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Nullable_1_DateTime_ BanExpiration;
  struct String * BanId;
  struct String * BanReason;
  bool PermanentBan;
  struct String * TitleId;
};
struct PlayerBannedEventData {
  struct PlayerBannedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerBannedEventData__Fields fields;
};
struct PlayerBannedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerBannedEventData__StaticFields {
};
struct PlayerBannedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerBannedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerBannedEventData__VTable vtable;
};

struct PlayerChangedAvatarEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * ImageUrl;
  struct String * PreviousImageUrl;
  struct String * TitleId;
};
struct PlayerChangedAvatarEventData {
  struct PlayerChangedAvatarEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerChangedAvatarEventData__Fields fields;
};
struct PlayerChangedAvatarEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerChangedAvatarEventData__StaticFields {
};
struct PlayerChangedAvatarEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerChangedAvatarEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerChangedAvatarEventData__VTable vtable;
};

enum PasswordResetInitiationSource__Enum : int32_t {
  PasswordResetInitiationSource__Enum_Self = 0,
  PasswordResetInitiationSource__Enum_Admin = 1,
};
struct PasswordResetInitiationSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PasswordResetInitiationSource__Enum value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ {
  enum PasswordResetInitiationSource__Enum value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ fields;
};
struct PlayerCompletedPasswordResetEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CompletedFromIPAddress;
  struct DateTime CompletionTimestamp;
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ InitiatedBy;
  struct String * InitiatedFromIPAddress;
  struct DateTime InitiationTimestamp;
  struct DateTime LinkExpiration;
  struct String * PasswordResetId;
  struct String * RecoveryEmailAddress;
  struct String * TitleId;
};
struct PlayerCompletedPasswordResetEventData {
  struct PlayerCompletedPasswordResetEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCompletedPasswordResetEventData__Fields fields;
};
struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___VTable vtable;
};
struct PlayerCompletedPasswordResetEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerCompletedPasswordResetEventData__StaticFields {
};
struct PlayerCompletedPasswordResetEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCompletedPasswordResetEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCompletedPasswordResetEventData__VTable vtable;
};

struct PlayerConsumedItemEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * CatalogVersion;
  struct String * ItemId;
  struct String * ItemInstanceId;
  uint32_t PreviousUsesRemaining;
  struct String * TitleId;
  uint32_t UsesRemaining;
};
struct PlayerConsumedItemEventData {
  struct PlayerConsumedItemEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerConsumedItemEventData__Fields fields;
};
struct PlayerConsumedItemEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerConsumedItemEventData__StaticFields {
};
struct PlayerConsumedItemEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerConsumedItemEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerConsumedItemEventData__VTable vtable;
};

struct PlayerCreatedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct DateTime Created;
  struct String * PublisherId;
  struct String * TitleId;
};
struct PlayerCreatedEventData {
  struct PlayerCreatedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerCreatedEventData__Fields fields;
};
struct PlayerCreatedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerCreatedEventData__StaticFields {
};
struct PlayerCreatedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerCreatedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerCreatedEventData__VTable vtable;
};

struct PlayerDataExportedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * ExportDownloadUrl;
  struct String * JobReceiptId;
  struct DateTime RequestTime;
  struct String * TitleId;
};
struct PlayerDataExportedEventData {
  struct PlayerDataExportedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDataExportedEventData__Fields fields;
};
struct PlayerDataExportedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerDataExportedEventData__StaticFields {
};
struct PlayerDataExportedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDataExportedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDataExportedEventData__VTable vtable;
};

struct PlayerDeviceInfoEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct Dictionary_2_System_String_System_Object_ * DeviceInfo;
  struct String * TitleId;
};
struct PlayerDeviceInfoEventData {
  struct PlayerDeviceInfoEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDeviceInfoEventData__Fields fields;
};
struct PlayerDeviceInfoEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerDeviceInfoEventData__StaticFields {
};
struct PlayerDeviceInfoEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDeviceInfoEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDeviceInfoEventData__VTable vtable;
};

struct PlayerDisplayNameChangedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * DisplayName;
  struct String * PreviousDisplayName;
  struct String * TitleId;
};
struct PlayerDisplayNameChangedEventData {
  struct PlayerDisplayNameChangedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDisplayNameChangedEventData__Fields fields;
};
struct PlayerDisplayNameChangedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerDisplayNameChangedEventData__StaticFields {
};
struct PlayerDisplayNameChangedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDisplayNameChangedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDisplayNameChangedEventData__VTable vtable;
};

struct PlayerExecutedCloudScriptEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct ExecuteCloudScriptResult_3 * CloudScriptExecutionResult;
  struct String * FunctionName;
  struct String * TitleId;
};
struct PlayerExecutedCloudScriptEventData {
  struct PlayerExecutedCloudScriptEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerExecutedCloudScriptEventData__Fields fields;
};
struct PlayerExecutedCloudScriptEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerExecutedCloudScriptEventData__StaticFields {
};
struct PlayerExecutedCloudScriptEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerExecutedCloudScriptEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerExecutedCloudScriptEventData__VTable vtable;
};

struct PlayerInventoryItemAddedEventData__Fields {
  struct PlayStreamEventBase__Fields _;
  struct String * Annotation;
  struct List_1_System_String_ * BundleContents;
  struct String * CatalogVersion;
  struct String * Class;
  struct String * CouponCode;
  struct String * DisplayName;
  struct Nullable_1_DateTime_ Expiration;
  struct String * InstanceId;
  struct String * ItemId;
  struct Nullable_1_UInt32_ RemainingUses;
  struct String * TitleId;
};
struct PlayerInventoryItemAddedEventData {
  struct PlayerInventoryItemAddedEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerInventoryItemAddedEventData__Fields fields;
};
struct PlayerInventoryItemAddedEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerInventoryItemAddedEventData__StaticFields {
};
struct PlayerInventoryItemAddedEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerInventoryItemAddedEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerInventoryItemAddedEventData__VTable vtable;
};

struct PlayerJoinedLobbyEventData__Fields {
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
struct PlayerJoinedLobbyEventData {
  struct PlayerJoinedLobbyEventData__Class *klass;
  struct MonitorData *monitor;
  struct PlayerJoinedLobbyEventData__Fields fields;
};
struct PlayerJoinedLobbyEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerJoinedLobbyEventData__StaticFields {
};
struct PlayerJoinedLobbyEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerJoinedLobbyEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerJoinedLobbyEventData__VTable vtable;
};

struct PlayerLeftLobbyEventData__Fields {
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
};}