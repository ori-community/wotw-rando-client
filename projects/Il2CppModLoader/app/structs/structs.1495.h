namespace app {
    struct LeaderboardScoreUploaded_t {
        uint8_t m_bSuccess;
        struct SteamLeaderboard_t m_hSteamLeaderboard;
        int32_t m_nScore;
        uint8_t m_bScoreChanged;
        int32_t m_nGlobalRankNew;
        int32_t m_nGlobalRankPrevious;
    };

    struct LeaderboardScoreUploaded_t__Boxed {
        struct LeaderboardScoreUploaded_t__Class* klass;
        MonitorData* monitor;
        struct LeaderboardScoreUploaded_t fields;
    };

    struct NumberOfCurrentPlayers_t {
        uint8_t m_bSuccess;
        int32_t m_cPlayers;
    };

    struct NumberOfCurrentPlayers_t__Boxed {
        struct NumberOfCurrentPlayers_t__Class* klass;
        MonitorData* monitor;
        struct NumberOfCurrentPlayers_t fields;
    };

    struct UserStatsUnloaded_t {
        struct CSteamID m_steamIDUser;
    };

    struct UserStatsUnloaded_t__Boxed {
        struct UserStatsUnloaded_t__Class* klass;
        MonitorData* monitor;
        struct UserStatsUnloaded_t fields;
    };

    struct UserAchievementIconFetched_t {
        struct CGameID m_nGameID;
        struct String* m_rgchAchievementName;
        bool m_bAchieved;
        int32_t m_nIconHandle;
    };

    struct UserAchievementIconFetched_t__Boxed {
        struct UserAchievementIconFetched_t__Class* klass;
        MonitorData* monitor;
        struct UserAchievementIconFetched_t fields;
    };

    struct GlobalAchievementPercentagesReady_t {
        uint64_t m_nGameID;
        EResult__Enum m_eResult;
    };

    struct GlobalAchievementPercentagesReady_t__Boxed {
        struct GlobalAchievementPercentagesReady_t__Class* klass;
        MonitorData* monitor;
        struct GlobalAchievementPercentagesReady_t fields;
    };

    struct LeaderboardUGCSet_t {
        EResult__Enum m_eResult;

        struct SteamLeaderboard_t m_hSteamLeaderboard;
    };

    struct LeaderboardUGCSet_t__Boxed {
        struct LeaderboardUGCSet_t__Class* klass;
        MonitorData* monitor;
        struct LeaderboardUGCSet_t fields;
    };

    struct GlobalStatsReceived_t {
        uint64_t m_nGameID;
        EResult__Enum m_eResult;
    };

    struct GlobalStatsReceived_t__Boxed {
        struct GlobalStatsReceived_t__Class* klass;
        MonitorData* monitor;
        struct GlobalStatsReceived_t fields;
    };

    struct IPCountry_t {
    };

    struct IPCountry_t__Boxed {
        struct IPCountry_t__Class* klass;
        MonitorData* monitor;
        struct IPCountry_t fields;
    };

    struct LowBatteryPower_t {
        uint8_t m_nMinutesBatteryLeft;
    };

    struct LowBatteryPower_t__Boxed {
        struct LowBatteryPower_t__Class* klass;
        MonitorData* monitor;
        struct LowBatteryPower_t fields;
    };

    struct SteamAPICallCompleted_t {
        struct SteamAPICall_t m_hAsyncCall;
        int32_t m_iCallback;
        uint32_t m_cubParam;
    };

    struct SteamAPICallCompleted_t__Boxed {
        struct SteamAPICallCompleted_t__Class* klass;
        MonitorData* monitor;
        struct SteamAPICallCompleted_t fields;
    };

    struct SteamShutdown_t {
    };

    struct SteamShutdown_t__Boxed {
        struct SteamShutdown_t__Class* klass;
        MonitorData* monitor;
        struct SteamShutdown_t fields;
    };

    enum class ECheckFileSignature__Enum : int32_t {
        k_ECheckFileSignatureInvalidSignature = 0x00000000,
        k_ECheckFileSignatureValidSignature = 0x00000001,
        k_ECheckFileSignatureFileNotFound = 0x00000002,
        k_ECheckFileSignatureNoSignaturesFoundForThisApp = 0x00000003,
        k_ECheckFileSignatureNoSignaturesFoundForThisFile = 0x00000004,
    };

    struct ECheckFileSignature__Enum__Boxed {
        struct ECheckFileSignature__Enum__Class* klass;
        MonitorData* monitor;
        ECheckFileSignature__Enum value;
    };

    struct CheckFileSignature_t {
        ECheckFileSignature__Enum m_eCheckFileSignature;
    };

    struct CheckFileSignature_t__Boxed {
        struct CheckFileSignature_t__Class* klass;
        MonitorData* monitor;
        struct CheckFileSignature_t fields;
    };

    struct GamepadTextInputDismissed_t {
        bool m_bSubmitted;
        uint32_t m_unSubmittedText;
    };

    struct GamepadTextInputDismissed_t__Boxed {
        struct GamepadTextInputDismissed_t__Class* klass;
        MonitorData* monitor;
        struct GamepadTextInputDismissed_t fields;
    };

    struct GetVideoURLResult_t {
        EResult__Enum m_eResult;

        struct AppId_t m_unVideoAppID;
        struct String* m_rgchURL;
    };

    struct GetVideoURLResult_t__Boxed {
        struct GetVideoURLResult_t__Class* klass;
        MonitorData* monitor;
        struct GetVideoURLResult_t fields;
    };

    struct GetOPFSettingsResult_t {
        EResult__Enum m_eResult;

        struct AppId_t m_unVideoAppID;
    };

    struct GetOPFSettingsResult_t__Boxed {
        struct GetOPFSettingsResult_t__Class* klass;
        MonitorData* monitor;
        struct GetOPFSettingsResult_t fields;
    };

    enum class EControllerSource__Enum : int32_t {
        k_EControllerSource_None = 0x00000000,
        k_EControllerSource_LeftTrackpad = 0x00000001,
        k_EControllerSource_RightTrackpad = 0x00000002,
        k_EControllerSource_Joystick = 0x00000003,
        k_EControllerSource_ABXY = 0x00000004,
        k_EControllerSource_Switch = 0x00000005,
        k_EControllerSource_LeftTrigger = 0x00000006,
        k_EControllerSource_RightTrigger = 0x00000007,
        k_EControllerSource_LeftBumper = 0x00000008,
        k_EControllerSource_RightBumper = 0x00000009,
        k_EControllerSource_Gyro = 0x0000000a,
        k_EControllerSource_CenterTrackpad = 0x0000000b,
        k_EControllerSource_RightJoystick = 0x0000000c,
        k_EControllerSource_DPad = 0x0000000d,
        k_EControllerSource_Key = 0x0000000e,
        k_EControllerSource_Mouse = 0x0000000f,
        k_EControllerSource_LeftGyro = 0x00000010,
        k_EControllerSource_Count = 0x00000011,
    };

    struct EControllerSource__Enum__Boxed {
        struct EControllerSource__Enum__Class* klass;
        MonitorData* monitor;
        EControllerSource__Enum value;
    };

    enum class ESteamControllerLEDFlag__Enum : int32_t {
        k_ESteamControllerLEDFlag_SetColor = 0x00000000,
        k_ESteamControllerLEDFlag_RestoreUserDefault = 0x00000001,
    };

    struct ESteamControllerLEDFlag__Enum__Boxed {
        struct ESteamControllerLEDFlag__Enum__Class* klass;
        MonitorData* monitor;
        ESteamControllerLEDFlag__Enum value;
    };

    enum class EUserRestriction__Enum : int32_t {
        k_nUserRestrictionNone = 0x00000000,
        k_nUserRestrictionUnknown = 0x00000001,
        k_nUserRestrictionAnyChat = 0x00000002,
        k_nUserRestrictionVoiceChat = 0x00000004,
        k_nUserRestrictionGroupChat = 0x00000008,
        k_nUserRestrictionRating = 0x00000010,
        k_nUserRestrictionGameInvites = 0x00000020,
        k_nUserRestrictionTrading = 0x00000040,
    };

    struct EUserRestriction__Enum__Boxed {
        struct EUserRestriction__Enum__Class* klass;
        MonitorData* monitor;
        EUserRestriction__Enum value;
    };

    enum class EGCResults__Enum : int32_t {
        k_EGCResultOK = 0x00000000,
        k_EGCResultNoMessage = 0x00000001,
        k_EGCResultBufferTooSmall = 0x00000002,
        k_EGCResultNotLoggedOn = 0x00000003,
        k_EGCResultInvalidMessage = 0x00000004,
    };

    struct EGCResults__Enum__Boxed {
        struct EGCResults__Enum__Class* klass;
        MonitorData* monitor;
        EGCResults__Enum value;
    };

    enum class EMouseCursor__Enum : int32_t {
        dc_user = 0x00000000,
        dc_none = 0x00000001,
        dc_arrow = 0x00000002,
        dc_ibeam = 0x00000003,
        dc_hourglass = 0x00000004,
        dc_waitarrow = 0x00000005,
        dc_crosshair = 0x00000006,
        dc_up = 0x00000007,
        dc_sizenw = 0x00000008,
        dc_sizese = 0x00000009,
        dc_sizene = 0x0000000a,
        dc_sizesw = 0x0000000b,
        dc_sizew = 0x0000000c,
        dc_sizee = 0x0000000d,
        dc_sizen = 0x0000000e,
        dc_sizes = 0x0000000f,
        dc_sizewe = 0x00000010,
        dc_sizens = 0x00000011,
        dc_sizeall = 0x00000012,
        dc_no = 0x00000013,
        dc_hand = 0x00000014,
        dc_blank = 0x00000015,
        dc_middle_pan = 0x00000016,
        dc_north_pan = 0x00000017,
        dc_north_east_pan = 0x00000018,
        dc_east_pan = 0x00000019,
        dc_south_east_pan = 0x0000001a,
        dc_south_pan = 0x0000001b,
        dc_south_west_pan = 0x0000001c,
        dc_west_pan = 0x0000001d,
        dc_north_west_pan = 0x0000001e,
        dc_alias = 0x0000001f,
        dc_cell = 0x00000020,
        dc_colresize = 0x00000021,
        dc_copycur = 0x00000022,
        dc_verticaltext = 0x00000023,
        dc_rowresize = 0x00000024,
        dc_zoomin = 0x00000025,
        dc_zoomout = 0x00000026,
        dc_help = 0x00000027,
        dc_custom = 0x00000028,
        dc_last = 0x00000029,
    };

    struct EMouseCursor__Enum__Boxed {
        struct EMouseCursor__Enum__Class* klass;
        MonitorData* monitor;
        EMouseCursor__Enum value;
    };

    enum class EInputSource__Enum : int32_t {
        k_EInputSource_None = 0x00000000,
        k_EInputSource_LeftTrackpad = 0x00000001,
        k_EInputSource_RightTrackpad = 0x00000002,
        k_EInputSource_Joystick = 0x00000003,
        k_EInputSource_ABXY = 0x00000004,
        k_EInputSource_Switch = 0x00000005,
        k_EInputSource_LeftTrigger = 0x00000006,
        k_EInputSource_RightTrigger = 0x00000007,
        k_EInputSource_LeftBumper = 0x00000008,
        k_EInputSource_RightBumper = 0x00000009,
        k_EInputSource_Gyro = 0x0000000a,
        k_EInputSource_CenterTrackpad = 0x0000000b,
        k_EInputSource_RightJoystick = 0x0000000c,
        k_EInputSource_DPad = 0x0000000d,
        k_EInputSource_Key = 0x0000000e,
        k_EInputSource_Mouse = 0x0000000f,
        k_EInputSource_LeftGyro = 0x00000010,
        k_EInputSource_Count = 0x00000011,
    };

    struct EInputSource__Enum__Boxed {
        struct EInputSource__Enum__Class* klass;
        MonitorData* monitor;
        EInputSource__Enum value;
    };

    enum class ESteamInputLEDFlag__Enum : int32_t {
        k_ESteamInputLEDFlag_SetColor = 0x00000000,
        k_ESteamInputLEDFlag_RestoreUserDefault = 0x00000001,
    };

    struct ESteamInputLEDFlag__Enum__Boxed {
        struct ESteamInputLEDFlag__Enum__Class* klass;
        MonitorData* monitor;
        ESteamInputLEDFlag__Enum value;
    };

    enum class ESteamItemFlags__Enum : int32_t {
        k_ESteamItemNoTrade = 0x00000001,
        k_ESteamItemRemoved = 0x00000100,
        k_ESteamItemConsumed = 0x00000200,
    };

    struct ESteamItemFlags__Enum__Boxed {
        struct ESteamItemFlags__Enum__Class* klass;
        MonitorData* monitor;
        ESteamItemFlags__Enum value;
    };

    enum class EChatMemberStateChange__Enum : int32_t {
        k_EChatMemberStateChangeEntered = 0x00000001,
        k_EChatMemberStateChangeLeft = 0x00000002,
        k_EChatMemberStateChangeDisconnected = 0x00000004,
        k_EChatMemberStateChangeKicked = 0x00000008,
        k_EChatMemberStateChangeBanned = 0x00000010,
    };

    struct EChatMemberStateChange__Enum__Boxed {
        struct EChatMemberStateChange__Enum__Class* klass;
        MonitorData* monitor;
        EChatMemberStateChange__Enum value;
    };

    enum class EP2PSessionError__Enum : int32_t {
        k_EP2PSessionErrorNone = 0x00000000,
        k_EP2PSessionErrorNotRunningApp = 0x00000001,
        k_EP2PSessionErrorNoRightsToApp = 0x00000002,
        k_EP2PSessionErrorDestinationNotLoggedIn = 0x00000003,
        k_EP2PSessionErrorTimeout = 0x00000004,
        k_EP2PSessionErrorMax = 0x00000005,
    };

    struct EP2PSessionError__Enum__Boxed {
        struct EP2PSessionError__Enum__Class* klass;
        MonitorData* monitor;
        EP2PSessionError__Enum value;
    };

    enum class ESNetSocketState__Enum : int32_t {
        k_ESNetSocketStateInvalid = 0x00000000,
        k_ESNetSocketStateConnected = 0x00000001,
        k_ESNetSocketStateInitiated = 0x0000000a,
        k_ESNetSocketStateLocalCandidatesFound = 0x0000000b,
        k_ESNetSocketStateReceivedRemoteCandidates = 0x0000000c,
        k_ESNetSocketStateChallengeHandshake = 0x0000000f,
        k_ESNetSocketStateDisconnecting = 0x00000015,
        k_ESNetSocketStateLocalDisconnect = 0x00000016,
        k_ESNetSocketStateTimeoutDuringConnect = 0x00000017,
        k_ESNetSocketStateRemoteEndDisconnected = 0x00000018,
        k_ESNetSocketStateConnectionBroken = 0x00000019,
    };

    struct ESNetSocketState__Enum__Boxed {
        struct ESNetSocketState__Enum__Class* klass;
        MonitorData* monitor;
        ESNetSocketState__Enum value;
    };

    enum class EItemState__Enum : int32_t {
        k_EItemStateNone = 0x00000000,
        k_EItemStateSubscribed = 0x00000001,
        k_EItemStateLegacyItem = 0x00000002,
        k_EItemStateInstalled = 0x00000004,
        k_EItemStateNeedsUpdate = 0x00000008,
        k_EItemStateDownloading = 0x00000010,
        k_EItemStateDownloadPending = 0x00000020,
    };

    struct EItemState__Enum__Boxed {
        struct EItemState__Enum__Class* klass;
        MonitorData* monitor;
        EItemState__Enum value;
    };

    enum class EFailureType__Enum : int32_t {
        k_EFailureFlushedCallbackQueue = 0x00000000,
        k_EFailurePipeFail = 0x00000001,
    };

    struct EFailureType__Enum__Boxed {
        struct EFailureType__Enum__Class* klass;
        MonitorData* monitor;
        EFailureType__Enum value;
    };

    enum class EAppReleaseState__Enum : int32_t {
        k_EAppReleaseState_Unknown = 0x00000000,
        k_EAppReleaseState_Unavailable = 0x00000001,
        k_EAppReleaseState_Prerelease = 0x00000002,
        k_EAppReleaseState_PreloadOnly = 0x00000003,
        k_EAppReleaseState_Released = 0x00000004,
    };

    struct EAppReleaseState__Enum__Boxed {
        struct EAppReleaseState__Enum__Class* klass;
        MonitorData* monitor;
        EAppReleaseState__Enum value;
    };

    enum class EAppOwnershipFlags__Enum : int32_t {
        k_EAppOwnershipFlags_None = 0x00000000,
        k_EAppOwnershipFlags_OwnsLicense = 0x00000001,
        k_EAppOwnershipFlags_FreeLicense = 0x00000002,
        k_EAppOwnershipFlags_RegionRestricted = 0x00000004,
        k_EAppOwnershipFlags_LowViolence = 0x00000008,
        k_EAppOwnershipFlags_InvalidPlatform = 0x00000010,
        k_EAppOwnershipFlags_SharedLicense = 0x00000020,
        k_EAppOwnershipFlags_FreeWeekend = 0x00000040,
        k_EAppOwnershipFlags_RetailLicense = 0x00000080,
        k_EAppOwnershipFlags_LicenseLocked = 0x00000100,
        k_EAppOwnershipFlags_LicensePending = 0x00000200,
        k_EAppOwnershipFlags_LicenseExpired = 0x00000400,
        k_EAppOwnershipFlags_LicensePermanent = 0x00000800,
        k_EAppOwnershipFlags_LicenseRecurring = 0x00001000,
        k_EAppOwnershipFlags_LicenseCanceled = 0x00002000,
        k_EAppOwnershipFlags_AutoGrant = 0x00004000,
        k_EAppOwnershipFlags_PendingGift = 0x00008000,
        k_EAppOwnershipFlags_RentalNotActivated = 0x00010000,
        k_EAppOwnershipFlags_Rental = 0x00020000,
        k_EAppOwnershipFlags_SiteLicense = 0x00040000,
    };

    struct EAppOwnershipFlags__Enum__Boxed {
        struct EAppOwnershipFlags__Enum__Class* klass;
        MonitorData* monitor;
        EAppOwnershipFlags__Enum value;
    };

    enum class EAppType__Enum : int32_t {
        k_EAppType_Invalid = 0x00000000,
        k_EAppType_Game = 0x00000001,
        k_EAppType_Application = 0x00000002,
        k_EAppType_Tool = 0x00000004,
        k_EAppType_Demo = 0x00000008,
        k_EAppType_Media_DEPRECATED = 0x00000010,
        k_EAppType_DLC = 0x00000020,
        k_EAppType_Guide = 0x00000040,
        k_EAppType_Driver = 0x00000080,
        k_EAppType_Config = 0x00000100,
        k_EAppType_Hardware = 0x00000200,
        k_EAppType_Franchise = 0x00000400,
        k_EAppType_Video = 0x00000800,
        k_EAppType_Plugin = 0x00001000,
        k_EAppType_Music = 0x00002000,
        k_EAppType_Series = 0x00004000,
        k_EAppType_Comic = 0x00008000,
        k_EAppType_Beta = 0x00010000,
        k_EAppType_Shortcut = 0x40000000,
        k_EAppType_DepotOnly = -2147483647,
    };

    struct EAppType__Enum__Boxed {
        struct EAppType__Enum__Class* klass;
        MonitorData* monitor;
        EAppType__Enum value;
    };

    enum class ESteamUserStatType__Enum : int32_t {
        k_ESteamUserStatTypeINVALID = 0x00000000,
        k_ESteamUserStatTypeINT = 0x00000001,
        k_ESteamUserStatTypeFLOAT = 0x00000002,
        k_ESteamUserStatTypeAVGRATE = 0x00000003,
        k_ESteamUserStatTypeACHIEVEMENTS = 0x00000004,
        k_ESteamUserStatTypeGROUPACHIEVEMENTS = 0x00000005,
        k_ESteamUserStatTypeMAX = 0x00000006,
    };

    struct ESteamUserStatType__Enum__Boxed {
        struct ESteamUserStatType__Enum__Class* klass;
        MonitorData* monitor;
        ESteamUserStatType__Enum value;
    };

    enum class EChatSteamIDInstanceFlags__Enum : int32_t {
        k_EChatAccountInstanceMask = 0x00000fff,
        k_EChatInstanceFlagClan = 0x00080000,
        k_EChatInstanceFlagLobby = 0x00040000,
        k_EChatInstanceFlagMMSLobby = 0x00020000,
    };

    struct EChatSteamIDInstanceFlags__Enum__Boxed {
        struct EChatSteamIDInstanceFlags__Enum__Class* klass;
        MonitorData* monitor;
        EChatSteamIDInstanceFlags__Enum value;
    };

    enum class EMarketingMessageFlags__Enum : int32_t {
        k_EMarketingMessageFlagsNone = 0x00000000,
        k_EMarketingMessageFlagsHighPriority = 0x00000001,
        k_EMarketingMessageFlagsPlatformWindows = 0x00000002,
        k_EMarketingMessageFlagsPlatformMac = 0x00000004,
        k_EMarketingMessageFlagsPlatformLinux = 0x00000008,
        k_EMarketingMessageFlagsPlatformRestrictions = 0x0000000e,
    };

    struct EMarketingMessageFlags__Enum__Boxed {
        struct EMarketingMessageFlags__Enum__Class* klass;
        MonitorData* monitor;
        EMarketingMessageFlags__Enum value;
    };

    enum class EBroadcastUploadResult__Enum : int32_t {
        k_EBroadcastUploadResultNone = 0x00000000,
        k_EBroadcastUploadResultOK = 0x00000001,
        k_EBroadcastUploadResultInitFailed = 0x00000002,
        k_EBroadcastUploadResultFrameFailed = 0x00000003,
        k_EBroadcastUploadResultTimeout = 0x00000004,
        k_EBroadcastUploadResultBandwidthExceeded = 0x00000005,
        k_EBroadcastUploadResultLowFPS = 0x00000006,
        k_EBroadcastUploadResultMissingKeyFrames = 0x00000007,
        k_EBroadcastUploadResultNoConnection = 0x00000008,
        k_EBroadcastUploadResultRelayFailed = 0x00000009,
        k_EBroadcastUploadResultSettingsChanged = 0x0000000a,
        k_EBroadcastUploadResultMissingAudio = 0x0000000b,
        k_EBroadcastUploadResultTooFarBehind = 0x0000000c,
        k_EBroadcastUploadResultTranscodeBehind = 0x0000000d,
        k_EBroadcastUploadResultNotAllowedToPlay = 0x0000000e,
        k_EBroadcastUploadResultBusy = 0x0000000f,
        k_EBroadcastUploadResultBanned = 0x00000010,
        k_EBroadcastUploadResultAlreadyActive = 0x00000011,
        k_EBroadcastUploadResultForcedOff = 0x00000012,
        k_EBroadcastUploadResultAudioBehind = 0x00000013,
        k_EBroadcastUploadResultShutdown = 0x00000014,
        k_EBroadcastUploadResultDisconnect = 0x00000015,
        k_EBroadcastUploadResultVideoInitFailed = 0x00000016,
        k_EBroadcastUploadResultAudioInitFailed = 0x00000017,
    };

    struct EBroadcastUploadResult__Enum__Boxed {
        struct EBroadcastUploadResult__Enum__Class* klass;
        MonitorData* monitor;
        EBroadcastUploadResult__Enum value;
    };

    enum class ELaunchOptionType__Enum : int32_t {
        k_ELaunchOptionType_None = 0x00000000,
        k_ELaunchOptionType_Default = 0x00000001,
        k_ELaunchOptionType_SafeMode = 0x00000002,
        k_ELaunchOptionType_Multiplayer = 0x00000003,
        k_ELaunchOptionType_Config = 0x00000004,
        k_ELaunchOptionType_OpenVR = 0x00000005,
        k_ELaunchOptionType_Server = 0x00000006,
        k_ELaunchOptionType_Editor = 0x00000007,
        k_ELaunchOptionType_Manual = 0x00000008,
        k_ELaunchOptionType_Benchmark = 0x00000009,
        k_ELaunchOptionType_Option1 = 0x0000000a,
        k_ELaunchOptionType_Option2 = 0x0000000b,
        k_ELaunchOptionType_Option3 = 0x0000000c,
        k_ELaunchOptionType_OculusVR = 0x0000000d,
        k_ELaunchOptionType_OpenVROverlay = 0x0000000e,
        k_ELaunchOptionType_OSVR = 0x0000000f,
        k_ELaunchOptionType_Dialog = 0x000003e8,
    };

    struct ELaunchOptionType__Enum__Boxed {
        struct ELaunchOptionType__Enum__Class* klass;
        MonitorData* monitor;
        ELaunchOptionType__Enum value;
    };

    enum class EVRHMDType__Enum : int32_t {
        k_eEVRHMDType_None = -1,
        k_eEVRHMDType_Unknown = 0x00000000,
        k_eEVRHMDType_HTC_Dev = 0x00000001,
        k_eEVRHMDType_HTC_VivePre = 0x00000002,
        k_eEVRHMDType_HTC_Vive = 0x00000003,
        k_eEVRHMDType_HTC_VivePro = 0x00000004,
        k_eEVRHMDType_HTC_ViveCosmos = 0x00000005,
        k_eEVRHMDType_HTC_Unknown = 0x00000014,
        k_eEVRHMDType_Oculus_DK1 = 0x00000015,
        k_eEVRHMDType_Oculus_DK2 = 0x00000016,
        k_eEVRHMDType_Oculus_Rift = 0x00000017,
        k_eEVRHMDType_Oculus_RiftS = 0x00000018,
        k_eEVRHMDType_Oculus_Unknown = 0x00000028,
        k_eEVRHMDType_Acer_Unknown = 0x00000032,
        k_eEVRHMDType_Acer_WindowsMR = 0x00000033,
        k_eEVRHMDType_Dell_Unknown = 0x0000003c,
        k_eEVRHMDType_Dell_Visor = 0x0000003d,
        k_eEVRHMDType_Lenovo_Unknown = 0x00000046,
        k_eEVRHMDType_Lenovo_Explorer = 0x00000047,
        k_eEVRHMDType_HP_Unknown = 0x00000050,
        k_eEVRHMDType_HP_WindowsMR = 0x00000051,
        k_eEVRHMDType_Samsung_Unknown = 0x0000005a,
        k_eEVRHMDType_Samsung_Odyssey = 0x0000005b,
        k_eEVRHMDType_Unannounced_Unknown = 0x00000064,
        k_eEVRHMDType_Unannounced_WindowsMR = 0x00000065,
        k_eEVRHMDType_vridge = 0x0000006e,
        k_eEVRHMDType_Huawei_Unknown = 0x00000078,
        k_eEVRHMDType_Huawei_VR2 = 0x00000079,
        k_eEVRHMDType_Huawei_EndOfRange = 0x00000081,
        k_eEVRHmdType_Valve_Unknown = 0x00000082,
        k_eEVRHmdType_Valve_Index = 0x00000083,
    };

    struct EVRHMDType__Enum__Boxed {
        struct EVRHMDType__Enum__Class* klass;
        MonitorData* monitor;
        EVRHMDType__Enum value;
    };

    struct FriendSessionStateInfo_t {
        uint32_t m_uiOnlineSessionInstances;
        uint8_t m_uiPublishedToFriendsSessionInstance;
    };

    struct FriendSessionStateInfo_t__Boxed {
        struct FriendSessionStateInfo_t__Class* klass;
        MonitorData* monitor;
        struct FriendSessionStateInfo_t fields;
    };

    struct CallbackMsg_t {
        int32_t m_hSteamUser;
        int32_t m_iCallback;
        void* m_pubParam;
        int32_t m_cubParam;
    };

    struct CallbackMsg_t__Boxed {
        struct CallbackMsg_t__Class* klass;
        MonitorData* monitor;
        struct CallbackMsg_t fields;
    };

    enum class VesselType__Enum : int32_t {
        Health = 0x00000000,
        HalfHealth = 0x00000001,
        Energy = 0x00000002,
        HalfEnergy = 0x00000003,
    };

    struct VesselType__Enum__Boxed {
        struct VesselType__Enum__Class* klass;
        MonitorData* monitor;
        VesselType__Enum value;
    };

    enum class ExperienceType__Enum : int32_t {
        Small = 0x00000000,
        Medium = 0x00000001,
        Large = 0x00000002,
    };

    struct ExperienceType__Enum__Boxed {
        struct ExperienceType__Enum__Class* klass;
        MonitorData* monitor;
        ExperienceType__Enum value;
    };

    enum class ZTest__Enum : int32_t {
        Disabled = 0x00000000,
        Never = 0x00000001,
        Less = 0x00000002,
        Equal = 0x00000003,
        LessEqual = 0x00000004,
        Greater = 0x00000005,
        NotEqual = 0x00000006,
        GreaterEqual = 0x00000007,
        Always = 0x00000008,
    };

    struct ZTest__Enum__Boxed {
        struct ZTest__Enum__Class* klass;
        MonitorData* monitor;
        ZTest__Enum value;
    };

    enum class ZWrite__Enum : int32_t {
        Off = 0x00000000,
        On = 0x00000001,
    };

    struct ZWrite__Enum__Boxed {
        struct ZWrite__Enum__Class* klass;
        MonitorData* monitor;
        ZWrite__Enum value;
    };

    enum class GroundPatrolBehaviour_GroundPatrolMode__Enum : int32_t {
        Infinite = 0x00000000,
        ReturnSuccessAtEachPoint = 0x00000001,
    };

    struct GroundPatrolBehaviour_GroundPatrolMode__Enum__Boxed {
        struct GroundPatrolBehaviour_GroundPatrolMode__Enum__Class* klass;
        MonitorData* monitor;
        GroundPatrolBehaviour_GroundPatrolMode__Enum value;
    };

    enum class RammingBehaviour_SlamChargeType__Enum : int32_t {
        SingleAverage = 0x00000000,
        Multiple = 0x00000001,
    };

    struct RammingBehaviour_SlamChargeType__Enum__Boxed {
        struct RammingBehaviour_SlamChargeType__Enum__Class* klass;
        MonitorData* monitor;
        RammingBehaviour_SlamChargeType__Enum value;
    };

    enum class SimpleGroundNavigation_TargetState__Enum : int32_t {
    };

    struct SimpleGroundNavigation_TargetState__Enum__Boxed {
        struct SimpleGroundNavigation_TargetState__Enum__Class* klass;
        MonitorData* monitor;
        SimpleGroundNavigation_TargetState__Enum value;
    };

    enum class CrashContext_DataState__Enum : uint32_t {
        Neither = 0x00000000,
        First = 0x00000001,
        Second = 0x00000002,
    };

    struct CrashContext_DataState__Enum__Boxed {
        struct CrashContext_DataState__Enum__Class* klass;
        MonitorData* monitor;
        CrashContext_DataState__Enum value;
    };

    struct CrashContext_HeaderData {
        uint32_t Signature;
        uint32_t Version;
        int32_t BuildNumber;
        int32_t SystemMemorySize;
        struct Guid TelemetrySessionID;
        CrashContext_DataState__Enum State;
    };

    struct CrashContext_HeaderData__Boxed {
        struct CrashContext_HeaderData__Class* klass;
        MonitorData* monitor;
        struct CrashContext_HeaderData fields;
    };

    enum class LevelType__Enum : int32_t {
        All = 0x00000000,
        Single = 0x00000001,
    };

    struct LevelType__Enum__Boxed {
        struct LevelType__Enum__Class* klass;
        MonitorData* monitor;
        LevelType__Enum value;
    };

    enum class HierarchyTestResultAggregator_Field__Enum : int32_t {
        CPU = 0x00000000,
        GPU = 0x00000001,
    };

    struct HierarchyTestResultAggregator_Field__Enum__Boxed {
        struct HierarchyTestResultAggregator_Field__Enum__Class* klass;
        MonitorData* monitor;
        HierarchyTestResultAggregator_Field__Enum value;
    };

    enum class ArtPriority__Enum : int32_t {
        A = 0x00000000,
        B = 0x00000001,
        C = 0x00000002,
        D = 0x00000003,
    };

    struct ArtPriority__Enum__Boxed {
        struct ArtPriority__Enum__Class* klass;
        MonitorData* monitor;
        ArtPriority__Enum value;
    };

    enum class MoonRenderPipelineView_TLCVolumeTypes__Enum : int32_t {
        Point = 0x00000001,
    };

    struct MoonRenderPipelineView_TLCVolumeTypes__Enum__Boxed {
        struct MoonRenderPipelineView_TLCVolumeTypes__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineView_TLCVolumeTypes__Enum value;
    };

    enum class MoonRenderPipelineView_TLCLightTypes__Enum : int32_t {
        Point = 0x00000001,
    };

    struct MoonRenderPipelineView_TLCLightTypes__Enum__Boxed {
        struct MoonRenderPipelineView_TLCLightTypes__Enum__Class* klass;
        MonitorData* monitor;
        MoonRenderPipelineView_TLCLightTypes__Enum value;
    };

    struct MoonRenderPipelineView_STLCLightShadeInfo {
        struct Vector4 depthBounds_DarkeningLightMaskInfluence_Intensity3D;
        struct Vector4 pos_ThicknessNear;
        struct Vector4 color;
        struct Vector4 falloffNear;
        struct Vector4 falloffFar;
        struct Vector4 lightParams;
        struct Vector4 zExpand_Depth_ThicknessFar;
        struct Vector4 directionalLight;
        struct Vector4 offset_Hardness_Darkening_ErasingWeight;
        struct Vector4 color3D;
    };

    struct MoonRenderPipelineView_STLCLightShadeInfo__Boxed {
        struct MoonRenderPipelineView_STLCLightShadeInfo__Class* klass;
        MonitorData* monitor;
        struct MoonRenderPipelineView_STLCLightShadeInfo fields;
    };

    enum class WWiseSoundAnimatorEntity_TriggeringState__Enum : int32_t {
        None = 0x00000000,
        Triggered = 0x00000001,
        Finished = 0x00000002,
    };

    struct WWiseSoundAnimatorEntity_TriggeringState__Enum__Boxed {
        struct WWiseSoundAnimatorEntity_TriggeringState__Enum__Class* klass;
        MonitorData* monitor;
        WWiseSoundAnimatorEntity_TriggeringState__Enum value;
    };

    struct _PrivateImplementationDetails__6 {
        struct _PrivateImplementationDetails__6__Class* klass;
        MonitorData* monitor;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_28_2 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_28_2__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_28_2__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_28_2 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_24_3 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_24_3__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_24_3__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_24_3 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_12_4 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_12_4__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_12_4__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_12_4 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_64_5 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_64_5__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_64_5__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_64_5 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_48_3 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_48_3__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_48_3__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_48_3 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_16_4 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_16_4__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_16_4__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_16_4 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_76_1 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_76_1__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_76_1__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_76_1 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_2080 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_2080__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_2080__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_2080 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_40_3 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_40_3__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_40_3__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_40_3 fields;
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_20_5 {
    };

    struct _PrivateImplementationDetails_StaticArrayInitTypeSize_20_5__Boxed {
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_20_5__Class* klass;
        MonitorData* monitor;
        struct _PrivateImplementationDetails_StaticArrayInitTypeSize_20_5 fields;
    };

} // namespace app
