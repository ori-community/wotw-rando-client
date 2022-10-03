namespace app {
    struct PlayFabAchievements_c_DisplayClass17_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabAchievements_c_DisplayClass17_0__StaticFields {
    };

    struct PlayFabAchievements_c_DisplayClass17_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabAchievements_c_DisplayClass17_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabAchievements_c_DisplayClass17_0__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabAchievements_c_DisplayClass18_0__Fields {
        struct CacheData__Array* tmpCachedData;
        struct Boolean__Array* completeData;
        struct PlayFabAchievements* __4__this;
        struct Action_1_PlayFab_PlayFabError_* __9__3;
    };

    struct PlayFabAchievements_c_DisplayClass18_0 {
        struct PlayFabAchievements_c_DisplayClass18_0__Class* klass;
        MonitorData* monitor;
        struct PlayFabAchievements_c_DisplayClass18_0__Fields fields;
    };

    struct PlayFabAchievements_c_DisplayClass18_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabAchievements_c_DisplayClass18_0__StaticFields {
    };

    struct PlayFabAchievements_c_DisplayClass18_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabAchievements_c_DisplayClass18_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabAchievements_c_DisplayClass18_0__VTable vtable;
    };

    struct __declspec(align(8)) PlayFabAchievements_c_DisplayClass18_1__Fields {
        int32_t chunkIndex;
        struct PlayFabAchievements_c_DisplayClass18_0* CS___8__locals1;
    };

    struct PlayFabAchievements_c_DisplayClass18_1 {
        struct PlayFabAchievements_c_DisplayClass18_1__Class* klass;
        MonitorData* monitor;
        struct PlayFabAchievements_c_DisplayClass18_1__Fields fields;
    };

    struct PlayFabAchievements_c_DisplayClass18_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayFabAchievements_c_DisplayClass18_1__StaticFields {
    };

    struct PlayFabAchievements_c_DisplayClass18_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayFabAchievements_c_DisplayClass18_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayFabAchievements_c_DisplayClass18_1__VTable vtable;
    };

    struct __declspec(align(8)) SteamAchievements__Fields {
        bool _HasSynchronised_k__BackingField;
        struct CacheData__Array* m_cachedData;
    };

    struct SteamAchievements {
        struct SteamAchievements__Class* klass;
        MonitorData* monitor;
        struct SteamAchievements__Fields fields;
    };

    struct SteamAchievements__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsSynchronising;
        VirtualInvokeData get_HasSynchronised;
        VirtualInvokeData AwardedOnServer;
        VirtualInvokeData AwardOnServer;
        VirtualInvokeData UpdateFromServer;
        VirtualInvokeData Clear;
    };

    struct SteamAchievements__StaticFields {
        bool _Disable_k__BackingField;
    };

    struct SteamAchievements__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamAchievements__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamAchievements__VTable vtable;
    };

    struct UserAchievementStored_t {
        uint64_t m_nGameID;
        bool m_bGroupAchievement;
        struct String* m_rgchAchievementName;
        uint32_t m_nCurProgress;
        uint32_t m_nMaxProgress;
    };

    struct UserAchievementStored_t__Boxed {
        struct UserAchievementStored_t__Class* klass;
        MonitorData* monitor;
        struct UserAchievementStored_t fields;
    };

    struct UserAchievementStored_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UserAchievementStored_t__StaticFields {
    };

    struct UserAchievementStored_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserAchievementStored_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserAchievementStored_t__VTable vtable;
    };

    enum class EResult__Enum : int32_t {
        k_EResultOK = 0x00000001,
        k_EResultFail = 0x00000002,
        k_EResultNoConnection = 0x00000003,
        k_EResultInvalidPassword = 0x00000005,
        k_EResultLoggedInElsewhere = 0x00000006,
        k_EResultInvalidProtocolVer = 0x00000007,
        k_EResultInvalidParam = 0x00000008,
        k_EResultFileNotFound = 0x00000009,
        k_EResultBusy = 0x0000000a,
        k_EResultInvalidState = 0x0000000b,
        k_EResultInvalidName = 0x0000000c,
        k_EResultInvalidEmail = 0x0000000d,
        k_EResultDuplicateName = 0x0000000e,
        k_EResultAccessDenied = 0x0000000f,
        k_EResultTimeout = 0x00000010,
        k_EResultBanned = 0x00000011,
        k_EResultAccountNotFound = 0x00000012,
        k_EResultInvalidSteamID = 0x00000013,
        k_EResultServiceUnavailable = 0x00000014,
        k_EResultNotLoggedOn = 0x00000015,
        k_EResultPending = 0x00000016,
        k_EResultEncryptionFailure = 0x00000017,
        k_EResultInsufficientPrivilege = 0x00000018,
        k_EResultLimitExceeded = 0x00000019,
        k_EResultRevoked = 0x0000001a,
        k_EResultExpired = 0x0000001b,
        k_EResultAlreadyRedeemed = 0x0000001c,
        k_EResultDuplicateRequest = 0x0000001d,
        k_EResultAlreadyOwned = 0x0000001e,
        k_EResultIPNotFound = 0x0000001f,
        k_EResultPersistFailed = 0x00000020,
        k_EResultLockingFailed = 0x00000021,
        k_EResultLogonSessionReplaced = 0x00000022,
        k_EResultConnectFailed = 0x00000023,
        k_EResultHandshakeFailed = 0x00000024,
        k_EResultIOFailure = 0x00000025,
        k_EResultRemoteDisconnect = 0x00000026,
        k_EResultShoppingCartNotFound = 0x00000027,
        k_EResultBlocked = 0x00000028,
        k_EResultIgnored = 0x00000029,
        k_EResultNoMatch = 0x0000002a,
        k_EResultAccountDisabled = 0x0000002b,
        k_EResultServiceReadOnly = 0x0000002c,
        k_EResultAccountNotFeatured = 0x0000002d,
        k_EResultAdministratorOK = 0x0000002e,
        k_EResultContentVersion = 0x0000002f,
        k_EResultTryAnotherCM = 0x00000030,
        k_EResultPasswordRequiredToKickSession = 0x00000031,
        k_EResultAlreadyLoggedInElsewhere = 0x00000032,
        k_EResultSuspended = 0x00000033,
        k_EResultCancelled = 0x00000034,
        k_EResultDataCorruption = 0x00000035,
        k_EResultDiskFull = 0x00000036,
        k_EResultRemoteCallFailed = 0x00000037,
        k_EResultPasswordUnset = 0x00000038,
        k_EResultExternalAccountUnlinked = 0x00000039,
        k_EResultPSNTicketInvalid = 0x0000003a,
        k_EResultExternalAccountAlreadyLinked = 0x0000003b,
        k_EResultRemoteFileConflict = 0x0000003c,
        k_EResultIllegalPassword = 0x0000003d,
        k_EResultSameAsPreviousValue = 0x0000003e,
        k_EResultAccountLogonDenied = 0x0000003f,
        k_EResultCannotUseOldPassword = 0x00000040,
        k_EResultInvalidLoginAuthCode = 0x00000041,
        k_EResultAccountLogonDeniedNoMail = 0x00000042,
        k_EResultHardwareNotCapableOfIPT = 0x00000043,
        k_EResultIPTInitError = 0x00000044,
        k_EResultParentalControlRestricted = 0x00000045,
        k_EResultFacebookQueryError = 0x00000046,
        k_EResultExpiredLoginAuthCode = 0x00000047,
        k_EResultIPLoginRestrictionFailed = 0x00000048,
        k_EResultAccountLockedDown = 0x00000049,
        k_EResultAccountLogonDeniedVerifiedEmailRequired = 0x0000004a,
        k_EResultNoMatchingURL = 0x0000004b,
        k_EResultBadResponse = 0x0000004c,
        k_EResultRequirePasswordReEntry = 0x0000004d,
        k_EResultValueOutOfRange = 0x0000004e,
        k_EResultUnexpectedError = 0x0000004f,
        k_EResultDisabled = 0x00000050,
        k_EResultInvalidCEGSubmission = 0x00000051,
        k_EResultRestrictedDevice = 0x00000052,
        k_EResultRegionLocked = 0x00000053,
        k_EResultRateLimitExceeded = 0x00000054,
        k_EResultAccountLoginDeniedNeedTwoFactor = 0x00000055,
        k_EResultItemDeleted = 0x00000056,
        k_EResultAccountLoginDeniedThrottle = 0x00000057,
        k_EResultTwoFactorCodeMismatch = 0x00000058,
        k_EResultTwoFactorActivationCodeMismatch = 0x00000059,
        k_EResultAccountAssociatedToMultiplePartners = 0x0000005a,
        k_EResultNotModified = 0x0000005b,
        k_EResultNoMobileDevice = 0x0000005c,
        k_EResultTimeNotSynced = 0x0000005d,
        k_EResultSmsCodeFailed = 0x0000005e,
        k_EResultAccountLimitExceeded = 0x0000005f,
        k_EResultAccountActivityLimitExceeded = 0x00000060,
        k_EResultPhoneActivityLimitExceeded = 0x00000061,
        k_EResultRefundToWallet = 0x00000062,
        k_EResultEmailSendFailure = 0x00000063,
        k_EResultNotSettled = 0x00000064,
        k_EResultNeedCaptcha = 0x00000065,
        k_EResultGSLTDenied = 0x00000066,
        k_EResultGSOwnerDenied = 0x00000067,
        k_EResultInvalidItemType = 0x00000068,
        k_EResultIPBanned = 0x00000069,
        k_EResultGSLTExpired = 0x0000006a,
        k_EResultInsufficientFunds = 0x0000006b,
        k_EResultTooManyPending = 0x0000006c,
        k_EResultNoSiteLicensesFound = 0x0000006d,
        k_EResultWGNetworkSendExceeded = 0x0000006e,
        k_EResultAccountNotFriends = 0x0000006f,
        k_EResultLimitedUserAccount = 0x00000070,
        k_EResultCantRemoveItem = 0x00000071,
    };

    struct EResult__Enum__Boxed {
        struct EResult__Enum__Class* klass;
        MonitorData* monitor;
        EResult__Enum value;
    };

    struct UserStatsStored_t {
        uint64_t m_nGameID;
        EResult__Enum m_eResult;
    };

    struct UserStatsStored_t__Boxed {
        struct UserStatsStored_t__Class* klass;
        MonitorData* monitor;
        struct UserStatsStored_t fields;
    };

    struct EResult__Enum__VTable {
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

    struct EResult__Enum__StaticFields {
    };

    struct EResult__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EResult__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EResult__Enum__VTable vtable;
    };

    struct UserStatsStored_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UserStatsStored_t__StaticFields {
    };

    struct UserStatsStored_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserStatsStored_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserStatsStored_t__VTable vtable;
    };

    struct CSteamID {
        uint64_t m_SteamID;
    };

    struct CSteamID__Boxed {
        struct CSteamID__Class* klass;
        MonitorData* monitor;
        struct CSteamID fields;
    };

    struct UserStatsReceived_t {
        uint64_t m_nGameID;
        EResult__Enum m_eResult;

        struct CSteamID m_steamIDUser;
    };

    struct UserStatsReceived_t__Boxed {
        struct UserStatsReceived_t__Class* klass;
        MonitorData* monitor;
        struct UserStatsReceived_t fields;
    };

    struct CSteamID__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData CompareTo;
    };

    struct CSteamID__StaticFields {
        struct CSteamID Nil;
        struct CSteamID OutofDateGS;
        struct CSteamID LanModeGS;
        struct CSteamID NotInitYetGS;
        struct CSteamID NonSteamGS;
    };

    struct CSteamID__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CSteamID__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CSteamID__VTable vtable;
    };

    struct UserStatsReceived_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UserStatsReceived_t__StaticFields {
    };

    struct UserStatsReceived_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UserStatsReceived_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UserStatsReceived_t__VTable vtable;
    };

    struct __declspec(align(8)) SteamAchievements_c_DisplayClass15_0__Fields {
        struct UserAchievementStored_t param;
    };

    struct SteamAchievements_c_DisplayClass15_0 {
        struct SteamAchievements_c_DisplayClass15_0__Class* klass;
        MonitorData* monitor;
        struct SteamAchievements_c_DisplayClass15_0__Fields fields;
    };

    struct SteamAchievements_c_DisplayClass15_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteamAchievements_c_DisplayClass15_0__StaticFields {
    };

    struct SteamAchievements_c_DisplayClass15_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamAchievements_c_DisplayClass15_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamAchievements_c_DisplayClass15_0__VTable vtable;
    };

    struct __declspec(align(8)) XAchievements__Fields {
        struct XAchievement__Array* achievements;
    };

    struct XAchievements {
        struct XAchievements__Class* klass;
        MonitorData* monitor;
        struct XAchievements__Fields fields;
    };

    struct __declspec(align(8)) XAchievement__Fields {
        struct String* id;
        struct String* name;
        struct String* progressState;
        struct XProgression* progression;
    };

    struct XAchievement {
        struct XAchievement__Class* klass;
        MonitorData* monitor;
        struct XAchievement__Fields fields;
    };

    struct __declspec(align(8)) XProgression__Fields {
        struct XRequirements__Array* requirements;
    };

    struct XProgression {
        struct XProgression__Class* klass;
        MonitorData* monitor;
        struct XProgression__Fields fields;
    };

    struct __declspec(align(8)) XRequirements__Fields {
        struct String* id;
        struct String* current;
        struct String* target;
    };

    struct XRequirements {
        struct XRequirements__Class* klass;
        MonitorData* monitor;
        struct XRequirements__Fields fields;
    };

    struct XRequirements__Array {
        struct XRequirements__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XRequirements* vector[32];
    };

    struct XAchievement__Array {
        struct XAchievement__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XAchievement* vector[32];
    };

    struct XRequirements__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XRequirements__StaticFields {
    };

    struct XRequirements__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XRequirements__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XRequirements__VTable vtable;
    };

    struct XRequirements__Array__VTable {
    };

    struct XRequirements__Array__StaticFields {
    };

    struct XRequirements__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XRequirements__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XRequirements__Array__VTable vtable;
    };

    struct XProgression__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XProgression__StaticFields {
    };

    struct XProgression__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XProgression__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XProgression__VTable vtable;
    };

    struct XAchievement__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XAchievement__StaticFields {
    };

    struct XAchievement__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XAchievement__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XAchievement__VTable vtable;
    };

    struct XAchievement__Array__VTable {
    };

    struct XAchievement__Array__StaticFields {
    };

    struct XAchievement__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XAchievement__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XAchievement__Array__VTable vtable;
    };

    struct XAchievements__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XAchievements__StaticFields {
    };

    struct XAchievements__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XAchievements__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XAchievements__VTable vtable;
    };

    enum class XProgressState__Enum : int32_t {
        Unknown = 0x00000000,
        Achieved = 0x00000001,
        NotStarted = 0x00000002,
        InProgress = 0x00000003,
    };

    struct XProgressState__Enum__Boxed {
        struct XProgressState__Enum__Class* klass;
        MonitorData* monitor;
        XProgressState__Enum value;
    };

    struct XProgressState__Enum__VTable {
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

    struct XProgressState__Enum__StaticFields {
    };

    struct XProgressState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XProgressState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XProgressState__Enum__VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements__Fields {
        bool _IsSynchronising_k__BackingField;
        bool _HasSynchronised_k__BackingField;
        struct CacheData__Array* m_cachedData;
    };

    struct XalAchievements {
        struct XalAchievements__Class* klass;
        MonitorData* monitor;
        struct XalAchievements__Fields fields;
    };

    struct XalAchievements__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsSynchronising;
        VirtualInvokeData get_HasSynchronised;
        VirtualInvokeData AwardedOnServer;
        VirtualInvokeData AwardOnServer;
        VirtualInvokeData UpdateFromServer;
        VirtualInvokeData Clear;
    };

    struct XalAchievements__StaticFields {
        bool _Disable_k__BackingField;
        bool m_wasLastCall401;
        struct String* _signature;
        struct String* _token;
    };

    struct XalAchievements__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements__VTable vtable;
    };

    struct __declspec(align(8)) List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Fields {
        struct XalHttpHeader__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class* klass;
        MonitorData* monitor;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Fields fields;
    };

    struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
        struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
    };

    struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
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

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
        struct XalHttpHeader__Array* _emptyArray;
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__1__VTable {
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__1__StaticFields {
    };

    struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader__1__VTable vtable;
    };

    struct XalUserGetTokenAndSignatureArgs___VTable {
    };

    struct XalUserGetTokenAndSignatureArgs___StaticFields {
    };

    struct XalUserGetTokenAndSignatureArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalUserGetTokenAndSignatureArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalUserGetTokenAndSignatureArgs___VTable vtable;
    };

    struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
        struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
    };

    struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements_c_DisplayClass19_0__Fields {
        struct String* fullAddress;
        struct String* body;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* headers;
        struct XalAchievements* __4__this;
        struct CacheData* data;
        struct Action_1_String_* __9__2;
    };

    struct XalAchievements_c_DisplayClass19_0 {
        struct XalAchievements_c_DisplayClass19_0__Class* klass;
        MonitorData* monitor;
        struct XalAchievements_c_DisplayClass19_0__Fields fields;
    };

    struct XalAchievements_c_DisplayClass19_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalAchievements_c_DisplayClass19_0__StaticFields {
    };

    struct XalAchievements_c_DisplayClass19_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements_c_DisplayClass19_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements_c_DisplayClass19_0__VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements_c_DisplayClass20_0__Fields {
        struct CacheData* data;
    };

    struct XalAchievements_c_DisplayClass20_0 {
        struct XalAchievements_c_DisplayClass20_0__Class* klass;
        MonitorData* monitor;
        struct XalAchievements_c_DisplayClass20_0__Fields fields;
    };

    struct XalAchievements_c_DisplayClass20_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalAchievements_c_DisplayClass20_0__StaticFields {
    };

    struct XalAchievements_c_DisplayClass20_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements_c_DisplayClass20_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements_c_DisplayClass20_0__VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements_c_DisplayClass21_0__Fields {
        struct String* fullAddress;
        struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_* headers;
        struct XalAchievements* __4__this;
    };

    struct XalAchievements_c_DisplayClass21_0 {
        struct XalAchievements_c_DisplayClass21_0__Class* klass;
        MonitorData* monitor;
        struct XalAchievements_c_DisplayClass21_0__Fields fields;
    };

    struct XalAchievements_c_DisplayClass21_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalAchievements_c_DisplayClass21_0__StaticFields {
    };

    struct XalAchievements_c_DisplayClass21_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements_c_DisplayClass21_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements_c_DisplayClass21_0__VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements_c_DisplayClass26_0__Fields {
        struct UnityWebRequest* request;
        struct Action_1_String_* onError;
        struct Action_1_String_* onComplete;
    };

    struct XalAchievements_c_DisplayClass26_0 {
        struct XalAchievements_c_DisplayClass26_0__Class* klass;
        MonitorData* monitor;
        struct XalAchievements_c_DisplayClass26_0__Fields fields;
    };

    struct XalAchievements_c_DisplayClass26_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XalAchievements_c_DisplayClass26_0__StaticFields {
    };

    struct XalAchievements_c_DisplayClass26_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements_c_DisplayClass26_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements_c_DisplayClass26_0__VTable vtable;
    };

    struct __declspec(align(8)) XalAchievements_RunRequest_d_27__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct UnityWebRequest* webRequest;
        struct Action* onComplete;
    };

    struct XalAchievements_RunRequest_d_27 {
        struct XalAchievements_RunRequest_d_27__Class* klass;
        MonitorData* monitor;
        struct XalAchievements_RunRequest_d_27__Fields fields;
    };

    struct XalAchievements_RunRequest_d_27__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct XalAchievements_RunRequest_d_27__StaticFields {
    };

    struct XalAchievements_RunRequest_d_27__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XalAchievements_RunRequest_d_27__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XalAchievements_RunRequest_d_27__VTable vtable;
    };

    struct __declspec(align(8)) XboxOneAchievements_1__Fields {
        struct CacheData__Array* m_cachedData;
        bool _IsSynchronising_k__BackingField;
        bool _HasSynchronised_k__BackingField;
    };

} // namespace app
