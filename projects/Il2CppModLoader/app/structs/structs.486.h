namespace app {
    struct PlayerPhotonSessionAuthenticatedEventData {
        struct PlayerPhotonSessionAuthenticatedEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerPhotonSessionAuthenticatedEventData__Fields fields;
    };

    struct PhotonServicesEnum__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct PhotonServicesEnum__Enum__StaticFields {
    };

    struct PhotonServicesEnum__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhotonServicesEnum__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhotonServicesEnum__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_PhotonServicesEnum___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerPhotonSessionAuthenticatedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerPhotonSessionAuthenticatedEventData__VTable vtable;
    };

    struct AuthTokenValidatedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* EmailTemplateId;
        struct String* TitleId;
        struct String* Token;
    };

    struct AuthTokenValidatedEventData {
        struct AuthTokenValidatedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AuthTokenValidatedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AuthTokenValidatedEventData__VTable vtable;
    };

    struct MasterPlayerTitleDeletedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* MetaData;
        struct String* PlayerId;
        struct String* ReceiptId;
    };

    struct MasterPlayerTitleDeletedEventData {
        struct MasterPlayerTitleDeletedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MasterPlayerTitleDeletedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MasterPlayerTitleDeletedEventData__VTable vtable;
    };

    struct PlayerActionExecutedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* ActionName;
        struct ActionExecutionError* Error;
        double ExecutionDuration;
        struct Object* ExecutionResult;
        struct DateTime ScheduledTimestamp;
        struct String* TitleId;
        struct DateTime TriggeredTimestamp;
        struct EventRuleMatch* TriggeringEventRuleMatch;
        struct SegmentMembershipChange* TriggeringSegmentMembershipChange;
    };

    struct PlayerActionExecutedEventData {
        struct PlayerActionExecutedEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerActionExecutedEventData__Fields fields;
    };

    struct __declspec(align(8)) ActionExecutionError__Fields {
        struct String* Error;
        struct String* Message;
    };

    struct ActionExecutionError {
        struct ActionExecutionError__Class* klass;
        MonitorData* monitor;
        struct ActionExecutionError__Fields fields;
    };

    struct __declspec(align(8)) EventRuleMatch__Fields {
        struct String* EventId;
        struct String* RuleId;
    };

    struct EventRuleMatch {
        struct EventRuleMatch__Class* klass;
        MonitorData* monitor;
        struct EventRuleMatch__Fields fields;
    };

    enum class SegmentMembershipChangeType__Enum : int32_t {
        Entered = 0x00000000,
        Exited = 0x00000001,
    };

    struct SegmentMembershipChangeType__Enum__Boxed {
        struct SegmentMembershipChangeType__Enum__Class* klass;
        MonitorData* monitor;
        SegmentMembershipChangeType__Enum value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ {
        SegmentMembershipChangeType__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ fields;
    };

    struct __declspec(align(8)) SegmentMembershipChange__Fields {
        struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType_ Change;
        struct String* EventId;
        struct String* SegmentId;
    };

    struct SegmentMembershipChange {
        struct SegmentMembershipChange__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActionExecutionError__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventRuleMatch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventRuleMatch__VTable vtable;
    };

    struct SegmentMembershipChangeType__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct SegmentMembershipChangeType__Enum__StaticFields {
    };

    struct SegmentMembershipChangeType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SegmentMembershipChangeType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SegmentMembershipChangeType__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_SegmentMembershipChangeType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SegmentMembershipChange__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerActionExecutedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerActionExecutedEventData__VTable vtable;
    };

    struct PlayerAdCampaignAttributionEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* CampaignId;
        struct String* TitleId;
    };

    struct PlayerAdCampaignAttributionEventData {
        struct PlayerAdCampaignAttributionEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdCampaignAttributionEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdCampaignAttributionEventData__VTable vtable;
    };

    struct PlayerAdClosedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
    };

    struct PlayerAdClosedEventData {
        struct PlayerAdClosedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdClosedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdClosedEventData__VTable vtable;
    };

    enum class LoginIdentityProvider__Enum_2 : int32_t {
        Unknown = 0x00000000,
        PlayFab = 0x00000001,
        Custom = 0x00000002,
        GameCenter = 0x00000003,
        GooglePlay = 0x00000004,
        Steam = 0x00000005,
        XBoxLive = 0x00000006,
        PSN = 0x00000007,
        Kongregate = 0x00000008,
        Facebook = 0x00000009,
        IOSDevice = 0x0000000a,
        AndroidDevice = 0x0000000b,
        Twitch = 0x0000000c,
        WindowsHello = 0x0000000d,
        GameServer = 0x0000000e,
        CustomServer = 0x0000000f,
        NintendoSwitch = 0x00000010,
        FacebookInstantGames = 0x00000011,
        OpenIdConnect = 0x00000012,
    };

    struct LoginIdentityProvider__Enum_2__Boxed {
        struct LoginIdentityProvider__Enum_2__Class* klass;
        MonitorData* monitor;
        LoginIdentityProvider__Enum_2 value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ {
        LoginIdentityProvider__Enum_2 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ fields;
    };

    struct PlayerAddedTitleEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* DisplayName;
        struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider_ Platform;
        struct String* PlatformUserId;
        struct String* TitleId;
    };

    struct PlayerAddedTitleEventData {
        struct PlayerAddedTitleEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerAddedTitleEventData__Fields fields;
    };

    struct LoginIdentityProvider__Enum_2__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct LoginIdentityProvider__Enum_2__StaticFields {
    };

    struct LoginIdentityProvider__Enum_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginIdentityProvider__Enum_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginIdentityProvider__Enum_2__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_LoginIdentityProvider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAddedTitleEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAddedTitleEventData__VTable vtable;
    };

    struct PlayerAdEndedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
    };

    struct PlayerAdEndedEventData {
        struct PlayerAdEndedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdEndedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdEndedEventData__VTable vtable;
    };

    struct PlayerAdOpenedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
    };

    struct PlayerAdOpenedEventData {
        struct PlayerAdOpenedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdOpenedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdOpenedEventData__VTable vtable;
    };

    struct PlayerAdRewardedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct List_1_System_String_* ActionGroupDebugMessages;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
        struct Nullable_1_Int32_ ViewsRemainingThisPeriod;
    };

    struct PlayerAdRewardedEventData {
        struct PlayerAdRewardedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdRewardedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdRewardedEventData__VTable vtable;
    };

    struct PlayerAdRewardValuedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        double RevenueShare;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
    };

    struct PlayerAdRewardValuedEventData {
        struct PlayerAdRewardValuedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdRewardValuedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdRewardValuedEventData__VTable vtable;
    };

    struct PlayerAdStartedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* AdPlacementId;
        struct String* AdPlacementName;
        struct String* AdUnit;
        struct String* RewardId;
        struct String* RewardName;
        struct String* TitleId;
    };

    struct PlayerAdStartedEventData {
        struct PlayerAdStartedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAdStartedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAdStartedEventData__VTable vtable;
    };

    struct PlayerBannedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct Nullable_1_DateTime_ BanExpiration;
        struct String* BanId;
        struct String* BanReason;
        bool PermanentBan;
        struct String* TitleId;
    };

    struct PlayerBannedEventData {
        struct PlayerBannedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerBannedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerBannedEventData__VTable vtable;
    };

    struct PlayerChangedAvatarEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* ImageUrl;
        struct String* PreviousImageUrl;
        struct String* TitleId;
    };

    struct PlayerChangedAvatarEventData {
        struct PlayerChangedAvatarEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerChangedAvatarEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerChangedAvatarEventData__VTable vtable;
    };

    enum class PasswordResetInitiationSource__Enum : int32_t {
        Self = 0x00000000,
        Admin = 0x00000001,
    };

    struct PasswordResetInitiationSource__Enum__Boxed {
        struct PasswordResetInitiationSource__Enum__Class* klass;
        MonitorData* monitor;
        PasswordResetInitiationSource__Enum value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ {
        PasswordResetInitiationSource__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ fields;
    };

    struct PlayerCompletedPasswordResetEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* CompletedFromIPAddress;
        struct DateTime CompletionTimestamp;
        struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource_ InitiatedBy;
        struct String* InitiatedFromIPAddress;
        struct DateTime InitiationTimestamp;
        struct DateTime LinkExpiration;
        struct String* PasswordResetId;
        struct String* RecoveryEmailAddress;
        struct String* TitleId;
    };

    struct PlayerCompletedPasswordResetEventData {
        struct PlayerCompletedPasswordResetEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerCompletedPasswordResetEventData__Fields fields;
    };

    struct PasswordResetInitiationSource__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct PasswordResetInitiationSource__Enum__StaticFields {
    };

    struct PasswordResetInitiationSource__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PasswordResetInitiationSource__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PasswordResetInitiationSource__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_PasswordResetInitiationSource___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerCompletedPasswordResetEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerCompletedPasswordResetEventData__VTable vtable;
    };

    struct PlayerConsumedItemEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* CatalogVersion;
        struct String* ItemId;
        struct String* ItemInstanceId;
        uint32_t PreviousUsesRemaining;
        struct String* TitleId;
        uint32_t UsesRemaining;
    };

    struct PlayerConsumedItemEventData {
        struct PlayerConsumedItemEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerConsumedItemEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerConsumedItemEventData__VTable vtable;
    };

    struct PlayerCreatedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct DateTime Created;
        struct String* PublisherId;
        struct String* TitleId;
    };

    struct PlayerCreatedEventData {
        struct PlayerCreatedEventData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerCreatedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerCreatedEventData__VTable vtable;
    };

    struct PlayerDataExportedEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* ExportDownloadUrl;
        struct String* JobReceiptId;
        struct DateTime RequestTime;
        struct String* TitleId;
    };

    struct PlayerDataExportedEventData {
        struct PlayerDataExportedEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerDataExportedEventData__Fields fields;
    };

    struct PlayerDataExportedEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
