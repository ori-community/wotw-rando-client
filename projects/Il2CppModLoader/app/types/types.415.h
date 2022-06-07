namespace app {
struct Data__Array__VTable {
};

struct Data__Array__StaticFields {
};

struct Data__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Data__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Data__Array__VTable vtable;
};

struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Data___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Data___StaticFields {
};

struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Data___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Data___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Microsoft_Applications_Events_DataModels_Data___VTable vtable;
};

struct List_1_Microsoft_Applications_Events_DataModels_Data___VTable {
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

struct List_1_Microsoft_Applications_Events_DataModels_Data___StaticFields {
    struct Data__Array *_emptyArray;
};

struct List_1_Microsoft_Applications_Events_DataModels_Data___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Microsoft_Applications_Events_DataModels_Data___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Microsoft_Applications_Events_DataModels_Data___VTable vtable;
};

struct CsEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CsEvent__StaticFields {
};

struct CsEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CsEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CsEvent__VTable vtable;
};

struct __declspec(align(8)) CompactBinaryProtocolWriter__Fields {
    struct List_1_System_Byte_ *_output;
};

struct CompactBinaryProtocolWriter {
    struct CompactBinaryProtocolWriter__Class *klass;
    MonitorData *monitor;
    struct CompactBinaryProtocolWriter__Fields fields;
};

struct CompactBinaryProtocolWriter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CompactBinaryProtocolWriter__StaticFields {
};

struct CompactBinaryProtocolWriter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompactBinaryProtocolWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompactBinaryProtocolWriter__VTable vtable;
};

struct Utils_4 {
    struct Utils_4__Class *klass;
    MonitorData *monitor;
};

struct Utils_4__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Utils_4__StaticFields {
    int64_t TICKS_AT_1970;
};

struct Utils_4__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Utils_4__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Utils_4__VTable vtable;
};

struct __declspec(align(8)) PlayFabRequestCommon__Fields {
    struct PlayFabAuthenticationContext *AuthenticationContext;
};

struct PlayFabRequestCommon {
    struct PlayFabRequestCommon__Class *klass;
    MonitorData *monitor;
    struct PlayFabRequestCommon__Fields fields;
};

struct GetEntityTokenRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey *Entity;
};

struct GetEntityTokenRequest {
    struct GetEntityTokenRequest__Class *klass;
    MonitorData *monitor;
    struct GetEntityTokenRequest__Fields fields;
};

struct __declspec(align(8)) PlayFabAuthenticationContext__Fields {
    struct String *ClientSessionTicket;
    struct String *EntityToken;
    struct String *DeveloperSecretKey;
    struct String *PlayFabId;
};

struct PlayFabAuthenticationContext {
    struct PlayFabAuthenticationContext__Class *klass;
    MonitorData *monitor;
    struct PlayFabAuthenticationContext__Fields fields;
};

struct __declspec(align(8)) EntityKey__Fields {
    struct String *Id;
    struct String *Type;
};

struct EntityKey {
    struct EntityKey__Class *klass;
    MonitorData *monitor;
    struct EntityKey__Fields fields;
};

struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_ {
    struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___Fields fields;
};

struct __declspec(align(8)) PlayFabResultCommon__Fields {
    struct PlayFabRequestCommon *Request;
    struct Object *CustomData;
};

struct PlayFabResultCommon {
    struct PlayFabResultCommon__Class *klass;
    MonitorData *monitor;
    struct PlayFabResultCommon__Fields fields;
};

struct GetEntityTokenResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey *Entity;
    struct String *EntityToken;
    struct Nullable_1_DateTime_ TokenExpiration;
};

struct GetEntityTokenResponse {
    struct GetEntityTokenResponse__Class *klass;
    MonitorData *monitor;
    struct GetEntityTokenResponse__Fields fields;
};

struct Action_1_PlayFab_PlayFabError___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_PlayFabError_ {
    struct Action_1_PlayFab_PlayFabError___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_PlayFabError___Fields fields;
};

enum class PlayFabErrorCode__Enum : int32_t {
    Unknown = 0x00000001,
    ConnectionError = 0x00000002,
    JsonParseError = 0x00000003,
    Success = 0x00000000,
    UnkownError = 0x000001f4,
    InvalidParams = 0x000003e8,
    AccountNotFound = 0x000003e9,
    AccountBanned = 0x000003ea,
    InvalidUsernameOrPassword = 0x000003eb,
    InvalidTitleId = 0x000003ec,
    InvalidEmailAddress = 0x000003ed,
    EmailAddressNotAvailable = 0x000003ee,
    InvalidUsername = 0x000003ef,
    InvalidPassword = 0x000003f0,
    UsernameNotAvailable = 0x000003f1,
    InvalidSteamTicket = 0x000003f2,
    AccountAlreadyLinked = 0x000003f3,
    LinkedAccountAlreadyClaimed = 0x000003f4,
    InvalidFacebookToken = 0x000003f5,
    AccountNotLinked = 0x000003f6,
    FailedByPaymentProvider = 0x000003f7,
    CouponCodeNotFound = 0x000003f8,
    InvalidContainerItem = 0x000003f9,
    ContainerNotOwned = 0x000003fa,
    KeyNotOwned = 0x000003fb,
    InvalidItemIdInTable = 0x000003fc,
    InvalidReceipt = 0x000003fd,
    ReceiptAlreadyUsed = 0x000003fe,
    ReceiptCancelled = 0x000003ff,
    GameNotFound = 0x00000400,
    GameModeNotFound = 0x00000401,
    InvalidGoogleToken = 0x00000402,
    UserIsNotPartOfDeveloper = 0x00000403,
    InvalidTitleForDeveloper = 0x00000404,
    TitleNameConflicts = 0x00000405,
    UserisNotValid = 0x00000406,
    ValueAlreadyExists = 0x00000407,
    BuildNotFound = 0x00000408,
    PlayerNotInGame = 0x00000409,
    InvalidTicket = 0x0000040a,
    InvalidDeveloper = 0x0000040b,
    InvalidOrderInfo = 0x0000040c,
    RegistrationIncomplete = 0x0000040d,
    InvalidPlatform = 0x0000040e,
    UnknownError = 0x0000040f,
    SteamApplicationNotOwned = 0x00000410,
    WrongSteamAccount = 0x00000411,
    TitleNotActivated = 0x00000412,
    RegistrationSessionNotFound = 0x00000413,
    NoSuchMod = 0x00000414,
    FileNotFound = 0x00000415,
    DuplicateEmail = 0x00000416,
    ItemNotFound = 0x00000417,
    ItemNotOwned = 0x00000418,
    ItemNotRecycleable = 0x00000419,
    ItemNotAffordable = 0x0000041a,
    InvalidVirtualCurrency = 0x0000041b,
    WrongVirtualCurrency = 0x0000041c,
    WrongPrice = 0x0000041d,
    NonPositiveValue = 0x0000041e,
    InvalidRegion = 0x0000041f,
    RegionAtCapacity = 0x00000420,
    ServerFailedToStart = 0x00000421,
    NameNotAvailable = 0x00000422,
    InsufficientFunds = 0x00000423,
    InvalidDeviceID = 0x00000424,
    InvalidPushNotificationToken = 0x00000425,
    NoRemainingUses = 0x00000426,
    InvalidPaymentProvider = 0x00000427,
    PurchaseInitializationFailure = 0x00000428,
    DuplicateUsername = 0x00000429,
    InvalidBuyerInfo = 0x0000042a,
    NoGameModeParamsSet = 0x0000042b,
    BodyTooLarge = 0x0000042c,
    ReservedWordInBody = 0x0000042d,
    InvalidTypeInBody = 0x0000042e,
    InvalidRequest = 0x0000042f,
    ReservedEventName = 0x00000430,
    InvalidUserStatistics = 0x00000431,
    NotAuthenticated = 0x00000432,
    StreamAlreadyExists = 0x00000433,
    ErrorCreatingStream = 0x00000434,
    StreamNotFound = 0x00000435,
    InvalidAccount = 0x00000436,
    PurchaseDoesNotExist = 0x00000438,
    InvalidPurchaseTransactionStatus = 0x00000439,
    APINotEnabledForGameClientAccess = 0x0000043a,
    NoPushNotificationARNForTitle = 0x0000043b,
    BuildAlreadyExists = 0x0000043c,
    BuildPackageDoesNotExist = 0x0000043d,
    CustomAnalyticsEventsNotEnabledForTitle = 0x0000043f,
    InvalidSharedGroupId = 0x00000440,
    NotAuthorized = 0x00000441,
    MissingTitleGoogleProperties = 0x00000442,
    InvalidItemProperties = 0x00000443,
    InvalidPSNAuthCode = 0x00000444,
    InvalidItemId = 0x00000445,
    PushNotEnabledForAccount = 0x00000446,
    PushServiceError = 0x00000447,
    ReceiptDoesNotContainInAppItems = 0x00000448,
    ReceiptContainsMultipleInAppItems = 0x00000449,
    InvalidBundleID = 0x0000044a,
    JavascriptException = 0x0000044b,
    InvalidSessionTicket = 0x0000044c,
    UnableToConnectToDatabase = 0x0000044d,
    InternalServerError = 0x00000456,
    InvalidReportDate = 0x00000457,
    ReportNotAvailable = 0x00000458,
    DatabaseThroughputExceeded = 0x00000459,
    InvalidGameTicket = 0x0000045b,
    ExpiredGameTicket = 0x0000045c,
    GameTicketDoesNotMatchLobby = 0x0000045d,
    LinkedDeviceAlreadyClaimed = 0x0000045e,
    DeviceAlreadyLinked = 0x0000045f,
    DeviceNotLinked = 0x00000460,
    PartialFailure = 0x00000461,
    PublisherNotSet = 0x00000462,
    ServiceUnavailable = 0x00000463,
    VersionNotFound = 0x00000464,
    RevisionNotFound = 0x00000465,
    InvalidPublisherId = 0x00000466,
    DownstreamServiceUnavailable = 0x00000467,
    APINotIncludedInTitleUsageTier = 0x00000468,
    DAULimitExceeded = 0x00000469,
    APIRequestLimitExceeded = 0x0000046a,
    InvalidAPIEndpoint = 0x0000046b,
    BuildNotAvailable = 0x0000046c,
    ConcurrentEditError = 0x0000046d,
    ContentNotFound = 0x0000046e,
    CharacterNotFound = 0x0000046f,
    CloudScriptNotFound = 0x00000470,
    ContentQuotaExceeded = 0x00000471,
    InvalidCharacterStatistics = 0x00000472,
    PhotonNotEnabledForTitle = 0x00000473,
    PhotonApplicationNotFound = 0x00000474,
    PhotonApplicationNotAssociatedWithTitle = 0x00000475,
    InvalidEmailOrPassword = 0x00000476,
    FacebookAPIError = 0x00000477,
    InvalidContentType = 0x00000478,
    KeyLengthExceeded = 0x00000479,
    DataLengthExceeded = 0x0000047a,
    TooManyKeys = 0x0000047b,
    FreeTierCannotHaveVirtualCurrency = 0x0000047c,
    MissingAmazonSharedKey = 0x0000047d,
    AmazonValidationError = 0x0000047e,
    InvalidPSNIssuerId = 0x0000047f,
    PSNInaccessible = 0x00000480,
    ExpiredAuthToken = 0x00000481,
    FailedToGetEntitlements = 0x00000482,
    FailedToConsumeEntitlement = 0x00000483,
    TradeAcceptingUserNotAllowed = 0x00000484,
    TradeInventoryItemIsAssignedToCharacter = 0x00000485,
    TradeInventoryItemIsBundle = 0x00000486,
    TradeStatusNotValidForCancelling = 0x00000487,
    TradeStatusNotValidForAccepting = 0x00000488,
    TradeDoesNotExist = 0x00000489,
    TradeCancelled = 0x0000048a,
    TradeAlreadyFilled = 0x0000048b,
    TradeWaitForStatusTimeout = 0x0000048c,
    TradeInventoryItemExpired = 0x0000048d,
    TradeMissingOfferedAndAcceptedItems = 0x0000048e,
    TradeAcceptedItemIsBundle = 0x0000048f,
    TradeAcceptedItemIsStackable = 0x00000490,
    TradeInventoryItemInvalidStatus = 0x00000491,
    TradeAcceptedCatalogItemInvalid = 0x00000492,
    TradeAllowedUsersInvalid = 0x00000493,
    TradeInventoryItemDoesNotExist = 0x00000494,
    TradeInventoryItemIsConsumed = 0x00000495,
    TradeInventoryItemIsStackable = 0x00000496,
    TradeAcceptedItemsMismatch = 0x00000497,
    InvalidKongregateToken = 0x00000498,
    FeatureNotConfiguredForTitle = 0x00000499,
    NoMatchingCatalogItemForReceipt = 0x0000049a,
    InvalidCurrencyCode = 0x0000049b,
    NoRealMoneyPriceForCatalogItem = 0x0000049c,
    TradeInventoryItemIsNotTradable = 0x0000049d,
    TradeAcceptedCatalogItemIsNotTradable = 0x0000049e,
    UsersAlreadyFriends = 0x0000049f,
    LinkedIdentifierAlreadyClaimed = 0x000004a0,
    CustomIdNotLinked = 0x000004a1,
    TotalDataSizeExceeded = 0x000004a2,
    DeleteKeyConflict = 0x000004a3,
    InvalidXboxLiveToken = 0x000004a4,
    ExpiredXboxLiveToken = 0x000004a5,
    ResettableStatisticVersionRequired = 0x000004a6,
    NotAuthorizedByTitle = 0x000004a7,
    NoPartnerEnabled = 0x000004a8,
    InvalidPartnerResponse = 0x000004a9,
    APINotEnabledForGameServerAccess = 0x000004aa,
    StatisticNotFound = 0x000004ab,
    StatisticNameConflict = 0x000004ac,
    StatisticVersionClosedForWrites = 0x000004ad,
    StatisticVersionInvalid = 0x000004ae,
    APIClientRequestRateLimitExceeded = 0x000004af,
    InvalidJSONContent = 0x000004b0,
    InvalidDropTable = 0x000004b1,
    StatisticVersionAlreadyIncrementedForScheduledInterval = 0x000004b2,
    StatisticCountLimitExceeded = 0x000004b3,
    StatisticVersionIncrementRateExceeded = 0x000004b4,
    ContainerKeyInvalid = 0x000004b5,
    CloudScriptExecutionTimeLimitExceeded = 0x000004b6,
    NoWritePermissionsForEvent = 0x000004b7,
    CloudScriptFunctionArgumentSizeExceeded = 0x000004b8,
    CloudScriptAPIRequestCountExceeded = 0x000004b9,
    CloudScriptAPIRequestError = 0x000004ba,
    CloudScriptHTTPRequestError = 0x000004bb,
    InsufficientGuildRole = 0x000004bc,
    GuildNotFound = 0x000004bd,
    OverLimit = 0x000004be,
    EventNotFound = 0x000004bf,
    InvalidEventField = 0x000004c0,
    InvalidEventName = 0x000004c1,
    CatalogNotConfigured = 0x000004c2,
    OperationNotSupportedForPlatform = 0x000004c3,
    SegmentNotFound = 0x000004c4,
    StoreNotFound = 0x000004c5,
    InvalidStatisticName = 0x000004c6,
    TitleNotQualifiedForLimit = 0x000004c7,
    InvalidServiceLimitLevel = 0x000004c8,
    ServiceLimitLevelInTransition = 0x000004c9,
    CouponAlreadyRedeemed = 0x000004ca,
    GameServerBuildSizeLimitExceeded = 0x000004cb,
    GameServerBuildCountLimitExceeded = 0x000004cc,
    VirtualCurrencyCountLimitExceeded = 0x000004cd,
    VirtualCurrencyCodeExists = 0x000004ce,
    TitleNewsItemCountLimitExceeded = 0x000004cf,
    InvalidTwitchToken = 0x000004d0,
    TwitchResponseError = 0x000004d1,
    ProfaneDisplayName = 0x000004d2,
    UserAlreadyAdded = 0x000004d3,
    InvalidVirtualCurrencyCode = 0x000004d4,
    VirtualCurrencyCannotBeDeleted = 0x000004d5,
    IdentifierAlreadyClaimed = 0x000004d6,
    IdentifierNotLinked = 0x000004d7,
    InvalidContinuationToken = 0x000004d8,
    ExpiredContinuationToken = 0x000004d9,
    InvalidSegment = 0x000004da,
    InvalidSessionId = 0x000004db,
    SessionLogNotFound = 0x000004dc,
    InvalidSearchTerm = 0x000004dd,
    TwoFactorAuthenticationTokenRequired = 0x000004de,
    GameServerHostCountLimitExceeded = 0x000004df,
    PlayerTagCountLimitExceeded = 0x000004e0,
    RequestAlreadyRunning = 0x000004e1,
    ActionGroupNotFound = 0x000004e2,
    MaximumSegmentBulkActionJobsRunning = 0x000004e3,
    NoActionsOnPlayersInSegmentJob = 0x000004e4,
    DuplicateStatisticName = 0x000004e5,
    ScheduledTaskNameConflict = 0x000004e6,
    ScheduledTaskCreateConflict = 0x000004e7,
    InvalidScheduledTaskName = 0x000004e8,
    InvalidTaskSchedule = 0x000004e9,
    SteamNotEnabledForTitle = 0x000004ea,
    LimitNotAnUpgradeOption = 0x000004eb,
    NoSecretKeyEnabledForCloudScript = 0x000004ec,
    TaskNotFound = 0x000004ed,
    TaskInstanceNotFound = 0x000004ee,
    InvalidIdentityProviderId = 0x000004ef,
    MisconfiguredIdentityProvider = 0x000004f0,
    InvalidScheduledTaskType = 0x000004f1,
    BillingInformationRequired = 0x000004f2,
    LimitedEditionItemUnavailable = 0x000004f3,
    InvalidAdPlacementAndReward = 0x000004f4,
    AllAdPlacementViewsAlreadyConsumed = 0x000004f5,
    GoogleOAuthNotConfiguredForTitle = 0x000004f6,
    GoogleOAuthError = 0x000004f7,
    UserNotFriend = 0x000004f8,
    InvalidSignature = 0x000004f9,
    InvalidPublicKey = 0x000004fa,
    GoogleOAuthNoIdTokenIncludedInResponse = 0x000004fb,
    StatisticUpdateInProgress = 0x000004fc,
    LeaderboardVersionNotAvailable = 0x000004fd,
    StatisticAlreadyHasPrizeTable = 0x000004ff,
    PrizeTableHasOverlappingRanks = 0x00000500,
    PrizeTableHasMissingRanks = 0x00000501,
    PrizeTableRankStartsAtZero = 0x00000502,
    InvalidStatistic = 0x00000503,
    ExpressionParseFailure = 0x00000504,
    ExpressionInvokeFailure = 0x00000505,
    ExpressionTooLong = 0x00000506,
    DataUpdateRateExceeded = 0x00000507,
    RestrictedEmailDomain = 0x00000508,
    EncryptionKeyDisabled = 0x00000509,
    EncryptionKeyMissing = 0x0000050a,
    EncryptionKeyBroken = 0x0000050b,
    NoSharedSecretKeyConfigured = 0x0000050c,
    SecretKeyNotFound = 0x0000050d,
    PlayerSecretAlreadyConfigured = 0x0000050e,
    APIRequestsDisabledForTitle = 0x0000050f,
    InvalidSharedSecretKey = 0x00000510,
    PrizeTableHasNoRanks = 0x00000511,
    ProfileDoesNotExist = 0x00000512,
    ContentS3OriginBucketNotConfigured = 0x00000513,
    InvalidEnvironmentForReceipt = 0x00000514,
    EncryptedRequestNotAllowed = 0x00000515,
    SignedRequestNotAllowed = 0x00000516,
    RequestViewConstraintParamsNotAllowed = 0x00000517,
    BadPartnerConfiguration = 0x00000518,
    XboxBPCertificateFailure = 0x00000519,
    XboxXASSExchangeFailure = 0x0000051a,
    InvalidEntityId = 0x0000051b,
    StatisticValueAggregationOverflow = 0x0000051c,
    EmailMessageFromAddressIsMissing = 0x0000051d,
    EmailMessageToAddressIsMissing = 0x0000051e,
    SmtpServerAuthenticationError = 0x0000051f,
    SmtpServerLimitExceeded = 0x00000520,
    SmtpServerInsufficientStorage = 0x00000521,
    SmtpServerCommunicationError = 0x00000522,
    SmtpServerGeneralFailure = 0x00000523,
    EmailClientTimeout = 0x00000524,
    EmailClientCanceledTask = 0x00000525,
    EmailTemplateMissing = 0x00000526,
    InvalidHostForTitleId = 0x00000527,
    EmailConfirmationTokenDoesNotExist = 0x00000528,
    EmailConfirmationTokenExpired = 0x00000529,
    AccountDeleted = 0x0000052a,
    PlayerSecretNotConfigured = 0x0000052b,
    InvalidSignatureTime = 0x0000052c,
    NoContactEmailAddressFound = 0x0000052d,
    InvalidAuthToken = 0x0000052e,
    AuthTokenDoesNotExist = 0x0000052f,
    AuthTokenExpired = 0x00000530,
    AuthTokenAlreadyUsedToResetPassword = 0x00000531,
    MembershipNameTooLong = 0x00000532,
    MembershipNotFound = 0x00000533,
    GoogleServiceAccountInvalid = 0x00000534,
    GoogleServiceAccountParseFailure = 0x00000535,
    EntityTokenMissing = 0x00000536,
    EntityTokenInvalid = 0x00000537,
    EntityTokenExpired = 0x00000538,
    EntityTokenRevoked = 0x00000539,
    InvalidProductForSubscription = 0x0000053a,
    XboxInaccessible = 0x0000053b,
    SubscriptionAlreadyTaken = 0x0000053c,
    SmtpAddonNotEnabled = 0x0000053d,
    APIConcurrentRequestLimitExceeded = 0x0000053e,
    XboxRejectedXSTSExchangeRequest = 0x0000053f,
    VariableNotDefined = 0x00000540,
    TemplateVersionNotDefined = 0x00000541,
    FileTooLarge = 0x00000542,
    TitleDeleted = 0x00000543,
    TitleContainsUserAccounts = 0x00000544,
    TitleDeletionPlayerCleanupFailure = 0x00000545,
    EntityFileOperationPending = 0x00000546,
    NoEntityFileOperationPending = 0x00000547,
    EntityProfileVersionMismatch = 0x00000548,
    TemplateVersionTooOld = 0x00000549,
    MembershipDefinitionInUse = 0x0000054a,
    PaymentPageNotConfigured = 0x0000054b,
    FailedLoginAttemptRateLimitExceeded = 0x0000054c,
    EntityBlockedByGroup = 0x0000054d,
    RoleDoesNotExist = 0x0000054e,
    EntityIsAlreadyMember = 0x0000054f,
    DuplicateRoleId = 0x00000550,
    GroupInvitationNotFound = 0x00000551,
    GroupApplicationNotFound = 0x00000552,
    OutstandingInvitationAcceptedInstead = 0x00000553,
    OutstandingApplicationAcceptedInstead = 0x00000554,
    RoleIsGroupDefaultMember = 0x00000555,
    RoleIsGroupAdmin = 0x00000556,
    RoleNameNotAvailable = 0x00000557,
    GroupNameNotAvailable = 0x00000558,
    EmailReportAlreadySent = 0x00000559,
    EmailReportRecipientBlacklisted = 0x0000055a,
    EventNamespaceNotAllowed = 0x0000055b,
    EventEntityNotAllowed = 0x0000055c,
    InvalidEntityType = 0x0000055d,
    NullTokenResultFromAad = 0x0000055e,
    InvalidTokenResultFromAad = 0x0000055f,
    NoValidCertificateForAad = 0x00000560,
    InvalidCertificateForAad = 0x00000561,
    DuplicateDropTableId = 0x00000562,
    MultiplayerServerError = 0x00000563,
    MultiplayerServerTooManyRequests = 0x00000564,
    MultiplayerServerNoContent = 0x00000565,
    MultiplayerServerBadRequest = 0x00000566,
    MultiplayerServerUnauthorized = 0x00000567,
    MultiplayerServerForbidden = 0x00000568,
    MultiplayerServerNotFound = 0x00000569,
    MultiplayerServerConflict = 0x0000056a,
    MultiplayerServerInternalServerError = 0x0000056b,
    MultiplayerServerUnavailable = 0x0000056c,
    ExplicitContentDetected = 0x0000056d,
    PIIContentDetected = 0x0000056e,
    InvalidScheduledTaskParameter = 0x0000056f,
    PerEntityEventRateLimitExceeded = 0x00000570,
    TitleDefaultLanguageNotSet = 0x00000571,
    EmailTemplateMissingDefaultVersion = 0x00000572,
    FacebookInstantGamesIdNotLinked = 0x00000573,
    InvalidFacebookInstantGamesSignature = 0x00000574,
    FacebookInstantGamesAuthNotConfiguredForTitle = 0x00000575,
    EntityProfileConstraintValidationFailed = 0x00000576,
    TelemetryIngestionKeyPending = 0x00000577,
    TelemetryIngestionKeyNotFound = 0x00000578,
    StatisticChildNameInvalid = 0x0000057a,
    DataIntegrityError = 0x0000057b,
    VirtualCurrencyCannotBeSetToOlderVersion = 0x0000057c,
    VirtualCurrencyMustBeWithinIntegerRange = 0x0000057d,
    EmailTemplateInvalidSyntax = 0x0000057e,
    EmailTemplateMissingCallback = 0x0000057f,
    PushNotificationTemplateInvalidPayload = 0x00000580,
    InvalidLocalizedPushNotificationLanguage = 0x00000581,
    MissingLocalizedPushNotificationMessage = 0x00000582,
    PushNotificationTemplateMissingPlatformPayload = 0x00000583,
    PushNotificationTemplatePayloadContainsInvalidJson = 0x00000584,
    PushNotificationTemplateContainsInvalidIosPayload = 0x00000585,
    PushNotificationTemplateContainsInvalidAndroidPayload = 0x00000586,
    PushNotificationTemplateIosPayloadMissingNotificationBody = 0x00000587,
    PushNotificationTemplateAndroidPayloadMissingNotificationBody = 0x00000588,
    PushNotificationTemplateNotFound = 0x00000589,
    PushNotificationTemplateMissingDefaultVersion = 0x0000058a,
    PushNotificationTemplateInvalidSyntax = 0x0000058b,
    PushNotificationTemplateNoCustomPayloadForV1 = 0x0000058c,
    NoLeaderboardForStatistic = 0x0000058d,
    TitleNewsMissingDefaultLanguage = 0x0000058e,
    TitleNewsNotFound = 0x0000058f,
    TitleNewsDuplicateLanguage = 0x00000590,
    TitleNewsMissingTitleOrBody = 0x00000591,
    TitleNewsInvalidLanguage = 0x00000592,
    EmailRecipientBlacklisted = 0x00000593,
    InvalidGameCenterAuthRequest = 0x00000594,
    GameCenterAuthenticationFailed = 0x00000595,
    CannotEnablePartiesForTitle = 0x00000596,
    PartyError = 0x00000597,
    PartyRequests = 0x00000598,
    PartyNoContent = 0x00000599,
    PartyBadRequest = 0x0000059a,
    PartyUnauthorized = 0x0000059b,
    PartyForbidden = 0x0000059c,
    PartyNotFound = 0x0000059d,
    PartyConflict = 0x0000059e,
    PartyInternalServerError = 0x0000059f,
    PartyUnavailable = 0x000005a0,
    PartyTooManyRequests = 0x000005a1,
    PushNotificationTemplateMissingName = 0x000005a2,
    CannotEnableMultiplayerServersForTitle = 0x000005a3,
    WriteAttemptedDuringExport = 0x000005a4,
    MultiplayerServerTitleQuotaCoresExceeded = 0x000005a5,
    MatchmakingEntityInvalid = 0x000007d1,
    MatchmakingPlayerAttributesInvalid = 0x000007d2,
    MatchmakingQueueNotFound = 0x000007e0,
    MatchmakingMatchNotFound = 0x000007e1,
    MatchmakingTicketNotFound = 0x000007e2,
    MatchmakingAlreadyJoinedTicket = 0x000007ec,
    MatchmakingTicketAlreadyCompleted = 0x000007ed,
    MatchmakingQueueConfigInvalid = 0x000007ef,
    MatchmakingMemberProfileInvalid = 0x000007f0,
    NintendoSwitchDeviceIdNotLinked = 0x000007f2,
    MatchmakingNotEnabled = 0x000007f3,
    MatchmakingPlayerAttributesTooLarge = 0x000007fb,
    MatchmakingNumberOfPlayersInTicketTooLarge = 0x000007fc,
    MatchmakingAttributeInvalid = 0x000007fe,
    MatchmakingPlayerHasNotJoinedTicket = 0x00000805,
    MatchmakingRateLimitExceeded = 0x00000806,
    MatchmakingTicketMembershipLimitExceeded = 0x00000807,
    MatchmakingUnauthorized = 0x00000808,
    TitleConfigNotFound = 0x00000bb9,
    TitleConfigUpdateConflict = 0x00000bba,
    TitleConfigSerializationError = 0x00000bbb,
    CatalogEntityInvalid = 0x00000fa1,
    CatalogTitleIdMissing = 0x00000fa2,
    CatalogPlayerIdMissing = 0x00000fa3,
    CatalogClientIdentityInvalid = 0x00000fa4,
    CatalogOneOrMoreFilesInvalid = 0x00000fa5,
    CatalogItemMetadataInvalid = 0x00000fa6,
    CatalogItemIdInvalid = 0x00000fa7,
    CatalogSearchParameterInvalid = 0x00000fa8,
    CatalogFeatureDisabled = 0x00000fa9,
    CatalogConfigMissing = 0x00001004,
    CatalogConfigTooManyContentTypes = 0x00001005,
    CatalogConfigContentTypeTooLong = 0x00001006,
    CatalogConfigTooManyTags = 0x00001007,
    CatalogConfigTagTooLong = 0x00001008,
    ExportInvalidStatusUpdate = 0x00001388,
    ExportInvalidPrefix = 0x00001389,
    ExportBlobContainerDoesNotExist = 0x0000138a,
    ExportEventNameNotFound = 0x0000138b,
    ExportExportTitleIdNotFound = 0x0000138c,
    ExportCouldNotUpdate = 0x0000138d,
    ExportInvalidStorageType = 0x0000138e,
};

struct PlayFabErrorCode__Enum__Boxed {
    struct PlayFabErrorCode__Enum__Class *klass;
    MonitorData *monitor;
    PlayFabErrorCode__Enum value;
    
};

struct __declspec(align(8)) PlayFabError__Fields {
    struct String *ApiEndpoint;
    int32_t HttpCode;
    struct String *HttpStatus;
    PlayFabErrorCode__Enum Error;
    
    struct String *ErrorMessage;
    struct Dictionary_2_System_String_List_1_System_String_ *ErrorDetails;
    struct Object *CustomData;
};

struct PlayFabError {
    struct PlayFabError__Class *klass;
    MonitorData *monitor;
    struct PlayFabError__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_List_1_System_String___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_List_1_System_String_ {
    struct Dictionary_2_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_List_1_System_String___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct List_1_System_String_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Fields {
    struct Dictionary_2_System_String_List_1_System_String_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Fields {
    struct Dictionary_2_System_String_List_1_System_String_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Fields fields;
};

struct ICollection_1_List_1_System_String_ {
    struct ICollection_1_List_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_List_1_System_String_ {
    struct String *key;
    struct List_1_System_String_ *value;
};

struct KeyValuePair_2_System_String_List_1_System_String___Boxed {
    struct KeyValuePair_2_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_List_1_System_String_ fields;
};

struct KeyValuePair_2_System_String_List_1_System_String___Array {
    struct KeyValuePair_2_System_String_List_1_System_String___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_List_1_System_String_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_System_String_ {
    struct IEnumerable_1_List_1_System_String___Class *klass;
    MonitorData *monitor;
};

struct PlayFabAuthenticationContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabAuthenticationContext__StaticFields {
};

struct PlayFabAuthenticationContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabAuthenticationContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabAuthenticationContext__VTable vtable;
};

struct PlayFabRequestCommon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabRequestCommon__StaticFields {
};

struct PlayFabRequestCommon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabRequestCommon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabRequestCommon__VTable vtable;
};

struct EntityKey__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EntityKey__StaticFields {
};

struct EntityKey__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityKey__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityKey__VTable vtable;
};

struct GetEntityTokenRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetEntityTokenRequest__StaticFields {
};

struct GetEntityTokenRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetEntityTokenRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetEntityTokenRequest__VTable vtable;
};

struct PlayFabResultCommon__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PlayFabResultCommon__StaticFields {
};

struct PlayFabResultCommon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayFabResultCommon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayFabResultCommon__VTable vtable;
};

struct GetEntityTokenResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetEntityTokenResponse__StaticFields {
};

struct GetEntityTokenResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetEntityTokenResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetEntityTokenResponse__VTable vtable;
};

struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___VTable {
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

struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___StaticFields {
};

struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___VTable vtable;
};

struct PlayFabErrorCode__Enum__VTable {
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

}
