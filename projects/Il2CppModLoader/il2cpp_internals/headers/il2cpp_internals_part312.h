namespace app {
struct PlayFabResultCommon {
  struct PlayFabResultCommon__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabResultCommon__Fields fields;
};
struct GetEntityTokenResponse__Fields {
  struct PlayFabResultCommon__Fields _;
  struct EntityKey * Entity;
  struct String * EntityToken;
  struct Nullable_1_DateTime_ TokenExpiration;
};
struct GetEntityTokenResponse {
  struct GetEntityTokenResponse__Class *klass;
  struct MonitorData *monitor;
  struct GetEntityTokenResponse__Fields fields;
};
struct Action_1_PlayFab_PlayFabError___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_PlayFab_PlayFabError_ {
  struct Action_1_PlayFab_PlayFabError___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_PlayFab_PlayFabError___Fields fields;
};
enum PlayFabErrorCode__Enum : int32_t {
  PlayFabErrorCode__Enum_Unknown = 1,
  PlayFabErrorCode__Enum_ConnectionError = 2,
  PlayFabErrorCode__Enum_JsonParseError = 3,
  PlayFabErrorCode__Enum_Success = 0,
  PlayFabErrorCode__Enum_UnkownError = 500,
  PlayFabErrorCode__Enum_InvalidParams = 1000,
  PlayFabErrorCode__Enum_AccountNotFound = 1001,
  PlayFabErrorCode__Enum_AccountBanned = 1002,
  PlayFabErrorCode__Enum_InvalidUsernameOrPassword = 1003,
  PlayFabErrorCode__Enum_InvalidTitleId = 1004,
  PlayFabErrorCode__Enum_InvalidEmailAddress = 1005,
  PlayFabErrorCode__Enum_EmailAddressNotAvailable = 1006,
  PlayFabErrorCode__Enum_InvalidUsername = 1007,
  PlayFabErrorCode__Enum_InvalidPassword = 1008,
  PlayFabErrorCode__Enum_UsernameNotAvailable = 1009,
  PlayFabErrorCode__Enum_InvalidSteamTicket = 1010,
  PlayFabErrorCode__Enum_AccountAlreadyLinked = 1011,
  PlayFabErrorCode__Enum_LinkedAccountAlreadyClaimed = 1012,
  PlayFabErrorCode__Enum_InvalidFacebookToken = 1013,
  PlayFabErrorCode__Enum_AccountNotLinked = 1014,
  PlayFabErrorCode__Enum_FailedByPaymentProvider = 1015,
  PlayFabErrorCode__Enum_CouponCodeNotFound = 1016,
  PlayFabErrorCode__Enum_InvalidContainerItem = 1017,
  PlayFabErrorCode__Enum_ContainerNotOwned = 1018,
  PlayFabErrorCode__Enum_KeyNotOwned = 1019,
  PlayFabErrorCode__Enum_InvalidItemIdInTable = 1020,
  PlayFabErrorCode__Enum_InvalidReceipt = 1021,
  PlayFabErrorCode__Enum_ReceiptAlreadyUsed = 1022,
  PlayFabErrorCode__Enum_ReceiptCancelled = 1023,
  PlayFabErrorCode__Enum_GameNotFound = 1024,
  PlayFabErrorCode__Enum_GameModeNotFound = 1025,
  PlayFabErrorCode__Enum_InvalidGoogleToken = 1026,
  PlayFabErrorCode__Enum_UserIsNotPartOfDeveloper = 1027,
  PlayFabErrorCode__Enum_InvalidTitleForDeveloper = 1028,
  PlayFabErrorCode__Enum_TitleNameConflicts = 1029,
  PlayFabErrorCode__Enum_UserisNotValid = 1030,
  PlayFabErrorCode__Enum_ValueAlreadyExists = 1031,
  PlayFabErrorCode__Enum_BuildNotFound = 1032,
  PlayFabErrorCode__Enum_PlayerNotInGame = 1033,
  PlayFabErrorCode__Enum_InvalidTicket = 1034,
  PlayFabErrorCode__Enum_InvalidDeveloper = 1035,
  PlayFabErrorCode__Enum_InvalidOrderInfo = 1036,
  PlayFabErrorCode__Enum_RegistrationIncomplete = 1037,
  PlayFabErrorCode__Enum_InvalidPlatform = 1038,
  PlayFabErrorCode__Enum_UnknownError = 1039,
  PlayFabErrorCode__Enum_SteamApplicationNotOwned = 1040,
  PlayFabErrorCode__Enum_WrongSteamAccount = 1041,
  PlayFabErrorCode__Enum_TitleNotActivated = 1042,
  PlayFabErrorCode__Enum_RegistrationSessionNotFound = 1043,
  PlayFabErrorCode__Enum_NoSuchMod = 1044,
  PlayFabErrorCode__Enum_FileNotFound = 1045,
  PlayFabErrorCode__Enum_DuplicateEmail = 1046,
  PlayFabErrorCode__Enum_ItemNotFound = 1047,
  PlayFabErrorCode__Enum_ItemNotOwned = 1048,
  PlayFabErrorCode__Enum_ItemNotRecycleable = 1049,
  PlayFabErrorCode__Enum_ItemNotAffordable = 1050,
  PlayFabErrorCode__Enum_InvalidVirtualCurrency = 1051,
  PlayFabErrorCode__Enum_WrongVirtualCurrency = 1052,
  PlayFabErrorCode__Enum_WrongPrice = 1053,
  PlayFabErrorCode__Enum_NonPositiveValue = 1054,
  PlayFabErrorCode__Enum_InvalidRegion = 1055,
  PlayFabErrorCode__Enum_RegionAtCapacity = 1056,
  PlayFabErrorCode__Enum_ServerFailedToStart = 1057,
  PlayFabErrorCode__Enum_NameNotAvailable = 1058,
  PlayFabErrorCode__Enum_InsufficientFunds = 1059,
  PlayFabErrorCode__Enum_InvalidDeviceID = 1060,
  PlayFabErrorCode__Enum_InvalidPushNotificationToken = 1061,
  PlayFabErrorCode__Enum_NoRemainingUses = 1062,
  PlayFabErrorCode__Enum_InvalidPaymentProvider = 1063,
  PlayFabErrorCode__Enum_PurchaseInitializationFailure = 1064,
  PlayFabErrorCode__Enum_DuplicateUsername = 1065,
  PlayFabErrorCode__Enum_InvalidBuyerInfo = 1066,
  PlayFabErrorCode__Enum_NoGameModeParamsSet = 1067,
  PlayFabErrorCode__Enum_BodyTooLarge = 1068,
  PlayFabErrorCode__Enum_ReservedWordInBody = 1069,
  PlayFabErrorCode__Enum_InvalidTypeInBody = 1070,
  PlayFabErrorCode__Enum_InvalidRequest = 1071,
  PlayFabErrorCode__Enum_ReservedEventName = 1072,
  PlayFabErrorCode__Enum_InvalidUserStatistics = 1073,
  PlayFabErrorCode__Enum_NotAuthenticated = 1074,
  PlayFabErrorCode__Enum_StreamAlreadyExists = 1075,
  PlayFabErrorCode__Enum_ErrorCreatingStream = 1076,
  PlayFabErrorCode__Enum_StreamNotFound = 1077,
  PlayFabErrorCode__Enum_InvalidAccount = 1078,
  PlayFabErrorCode__Enum_PurchaseDoesNotExist = 1080,
  PlayFabErrorCode__Enum_InvalidPurchaseTransactionStatus = 1081,
  PlayFabErrorCode__Enum_APINotEnabledForGameClientAccess = 1082,
  PlayFabErrorCode__Enum_NoPushNotificationARNForTitle = 1083,
  PlayFabErrorCode__Enum_BuildAlreadyExists = 1084,
  PlayFabErrorCode__Enum_BuildPackageDoesNotExist = 1085,
  PlayFabErrorCode__Enum_CustomAnalyticsEventsNotEnabledForTitle = 1087,
  PlayFabErrorCode__Enum_InvalidSharedGroupId = 1088,
  PlayFabErrorCode__Enum_NotAuthorized = 1089,
  PlayFabErrorCode__Enum_MissingTitleGoogleProperties = 1090,
  PlayFabErrorCode__Enum_InvalidItemProperties = 1091,
  PlayFabErrorCode__Enum_InvalidPSNAuthCode = 1092,
  PlayFabErrorCode__Enum_InvalidItemId = 1093,
  PlayFabErrorCode__Enum_PushNotEnabledForAccount = 1094,
  PlayFabErrorCode__Enum_PushServiceError = 1095,
  PlayFabErrorCode__Enum_ReceiptDoesNotContainInAppItems = 1096,
  PlayFabErrorCode__Enum_ReceiptContainsMultipleInAppItems = 1097,
  PlayFabErrorCode__Enum_InvalidBundleID = 1098,
  PlayFabErrorCode__Enum_JavascriptException = 1099,
  PlayFabErrorCode__Enum_InvalidSessionTicket = 1100,
  PlayFabErrorCode__Enum_UnableToConnectToDatabase = 1101,
  PlayFabErrorCode__Enum_InternalServerError = 1110,
  PlayFabErrorCode__Enum_InvalidReportDate = 1111,
  PlayFabErrorCode__Enum_ReportNotAvailable = 1112,
  PlayFabErrorCode__Enum_DatabaseThroughputExceeded = 1113,
  PlayFabErrorCode__Enum_InvalidGameTicket = 1115,
  PlayFabErrorCode__Enum_ExpiredGameTicket = 1116,
  PlayFabErrorCode__Enum_GameTicketDoesNotMatchLobby = 1117,
  PlayFabErrorCode__Enum_LinkedDeviceAlreadyClaimed = 1118,
  PlayFabErrorCode__Enum_DeviceAlreadyLinked = 1119,
  PlayFabErrorCode__Enum_DeviceNotLinked = 1120,
  PlayFabErrorCode__Enum_PartialFailure = 1121,
  PlayFabErrorCode__Enum_PublisherNotSet = 1122,
  PlayFabErrorCode__Enum_ServiceUnavailable = 1123,
  PlayFabErrorCode__Enum_VersionNotFound = 1124,
  PlayFabErrorCode__Enum_RevisionNotFound = 1125,
  PlayFabErrorCode__Enum_InvalidPublisherId = 1126,
  PlayFabErrorCode__Enum_DownstreamServiceUnavailable = 1127,
  PlayFabErrorCode__Enum_APINotIncludedInTitleUsageTier = 1128,
  PlayFabErrorCode__Enum_DAULimitExceeded = 1129,
  PlayFabErrorCode__Enum_APIRequestLimitExceeded = 1130,
  PlayFabErrorCode__Enum_InvalidAPIEndpoint = 1131,
  PlayFabErrorCode__Enum_BuildNotAvailable = 1132,
  PlayFabErrorCode__Enum_ConcurrentEditError = 1133,
  PlayFabErrorCode__Enum_ContentNotFound = 1134,
  PlayFabErrorCode__Enum_CharacterNotFound = 1135,
  PlayFabErrorCode__Enum_CloudScriptNotFound = 1136,
  PlayFabErrorCode__Enum_ContentQuotaExceeded = 1137,
  PlayFabErrorCode__Enum_InvalidCharacterStatistics = 1138,
  PlayFabErrorCode__Enum_PhotonNotEnabledForTitle = 1139,
  PlayFabErrorCode__Enum_PhotonApplicationNotFound = 1140,
  PlayFabErrorCode__Enum_PhotonApplicationNotAssociatedWithTitle = 1141,
  PlayFabErrorCode__Enum_InvalidEmailOrPassword = 1142,
  PlayFabErrorCode__Enum_FacebookAPIError = 1143,
  PlayFabErrorCode__Enum_InvalidContentType = 1144,
  PlayFabErrorCode__Enum_KeyLengthExceeded = 1145,
  PlayFabErrorCode__Enum_DataLengthExceeded = 1146,
  PlayFabErrorCode__Enum_TooManyKeys = 1147,
  PlayFabErrorCode__Enum_FreeTierCannotHaveVirtualCurrency = 1148,
  PlayFabErrorCode__Enum_MissingAmazonSharedKey = 1149,
  PlayFabErrorCode__Enum_AmazonValidationError = 1150,
  PlayFabErrorCode__Enum_InvalidPSNIssuerId = 1151,
  PlayFabErrorCode__Enum_PSNInaccessible = 1152,
  PlayFabErrorCode__Enum_ExpiredAuthToken = 1153,
  PlayFabErrorCode__Enum_FailedToGetEntitlements = 1154,
  PlayFabErrorCode__Enum_FailedToConsumeEntitlement = 1155,
  PlayFabErrorCode__Enum_TradeAcceptingUserNotAllowed = 1156,
  PlayFabErrorCode__Enum_TradeInventoryItemIsAssignedToCharacter = 1157,
  PlayFabErrorCode__Enum_TradeInventoryItemIsBundle = 1158,
  PlayFabErrorCode__Enum_TradeStatusNotValidForCancelling = 1159,
  PlayFabErrorCode__Enum_TradeStatusNotValidForAccepting = 1160,
  PlayFabErrorCode__Enum_TradeDoesNotExist = 1161,
  PlayFabErrorCode__Enum_TradeCancelled = 1162,
  PlayFabErrorCode__Enum_TradeAlreadyFilled = 1163,
  PlayFabErrorCode__Enum_TradeWaitForStatusTimeout = 1164,
  PlayFabErrorCode__Enum_TradeInventoryItemExpired = 1165,
  PlayFabErrorCode__Enum_TradeMissingOfferedAndAcceptedItems = 1166,
  PlayFabErrorCode__Enum_TradeAcceptedItemIsBundle = 1167,
  PlayFabErrorCode__Enum_TradeAcceptedItemIsStackable = 1168,
  PlayFabErrorCode__Enum_TradeInventoryItemInvalidStatus = 1169,
  PlayFabErrorCode__Enum_TradeAcceptedCatalogItemInvalid = 1170,
  PlayFabErrorCode__Enum_TradeAllowedUsersInvalid = 1171,
  PlayFabErrorCode__Enum_TradeInventoryItemDoesNotExist = 1172,
  PlayFabErrorCode__Enum_TradeInventoryItemIsConsumed = 1173,
  PlayFabErrorCode__Enum_TradeInventoryItemIsStackable = 1174,
  PlayFabErrorCode__Enum_TradeAcceptedItemsMismatch = 1175,
  PlayFabErrorCode__Enum_InvalidKongregateToken = 1176,
  PlayFabErrorCode__Enum_FeatureNotConfiguredForTitle = 1177,
  PlayFabErrorCode__Enum_NoMatchingCatalogItemForReceipt = 1178,
  PlayFabErrorCode__Enum_InvalidCurrencyCode = 1179,
  PlayFabErrorCode__Enum_NoRealMoneyPriceForCatalogItem = 1180,
  PlayFabErrorCode__Enum_TradeInventoryItemIsNotTradable = 1181,
  PlayFabErrorCode__Enum_TradeAcceptedCatalogItemIsNotTradable = 1182,
  PlayFabErrorCode__Enum_UsersAlreadyFriends = 1183,
  PlayFabErrorCode__Enum_LinkedIdentifierAlreadyClaimed = 1184,
  PlayFabErrorCode__Enum_CustomIdNotLinked = 1185,
  PlayFabErrorCode__Enum_TotalDataSizeExceeded = 1186,
  PlayFabErrorCode__Enum_DeleteKeyConflict = 1187,
  PlayFabErrorCode__Enum_InvalidXboxLiveToken = 1188,
  PlayFabErrorCode__Enum_ExpiredXboxLiveToken = 1189,
  PlayFabErrorCode__Enum_ResettableStatisticVersionRequired = 1190,
  PlayFabErrorCode__Enum_NotAuthorizedByTitle = 1191,
  PlayFabErrorCode__Enum_NoPartnerEnabled = 1192,
  PlayFabErrorCode__Enum_InvalidPartnerResponse = 1193,
  PlayFabErrorCode__Enum_APINotEnabledForGameServerAccess = 1194,
  PlayFabErrorCode__Enum_StatisticNotFound = 1195,
  PlayFabErrorCode__Enum_StatisticNameConflict = 1196,
  PlayFabErrorCode__Enum_StatisticVersionClosedForWrites = 1197,
  PlayFabErrorCode__Enum_StatisticVersionInvalid = 1198,
  PlayFabErrorCode__Enum_APIClientRequestRateLimitExceeded = 1199,
  PlayFabErrorCode__Enum_InvalidJSONContent = 1200,
  PlayFabErrorCode__Enum_InvalidDropTable = 1201,
  PlayFabErrorCode__Enum_StatisticVersionAlreadyIncrementedForScheduledInterval = 1202,
  PlayFabErrorCode__Enum_StatisticCountLimitExceeded = 1203,
  PlayFabErrorCode__Enum_StatisticVersionIncrementRateExceeded = 1204,
  PlayFabErrorCode__Enum_ContainerKeyInvalid = 1205,
  PlayFabErrorCode__Enum_CloudScriptExecutionTimeLimitExceeded = 1206,
  PlayFabErrorCode__Enum_NoWritePermissionsForEvent = 1207,
  PlayFabErrorCode__Enum_CloudScriptFunctionArgumentSizeExceeded = 1208,
  PlayFabErrorCode__Enum_CloudScriptAPIRequestCountExceeded = 1209,
  PlayFabErrorCode__Enum_CloudScriptAPIRequestError = 1210,
  PlayFabErrorCode__Enum_CloudScriptHTTPRequestError = 1211,
  PlayFabErrorCode__Enum_InsufficientGuildRole = 1212,
  PlayFabErrorCode__Enum_GuildNotFound = 1213,
  PlayFabErrorCode__Enum_OverLimit = 1214,
  PlayFabErrorCode__Enum_EventNotFound = 1215,
  PlayFabErrorCode__Enum_InvalidEventField = 1216,
  PlayFabErrorCode__Enum_InvalidEventName = 1217,
  PlayFabErrorCode__Enum_CatalogNotConfigured = 1218,
  PlayFabErrorCode__Enum_OperationNotSupportedForPlatform = 1219,
  PlayFabErrorCode__Enum_SegmentNotFound = 1220,
  PlayFabErrorCode__Enum_StoreNotFound = 1221,
  PlayFabErrorCode__Enum_InvalidStatisticName = 1222,
  PlayFabErrorCode__Enum_TitleNotQualifiedForLimit = 1223,
  PlayFabErrorCode__Enum_InvalidServiceLimitLevel = 1224,
  PlayFabErrorCode__Enum_ServiceLimitLevelInTransition = 1225,
  PlayFabErrorCode__Enum_CouponAlreadyRedeemed = 1226,
  PlayFabErrorCode__Enum_GameServerBuildSizeLimitExceeded = 1227,
  PlayFabErrorCode__Enum_GameServerBuildCountLimitExceeded = 1228,
  PlayFabErrorCode__Enum_VirtualCurrencyCountLimitExceeded = 1229,
  PlayFabErrorCode__Enum_VirtualCurrencyCodeExists = 1230,
  PlayFabErrorCode__Enum_TitleNewsItemCountLimitExceeded = 1231,
  PlayFabErrorCode__Enum_InvalidTwitchToken = 1232,
  PlayFabErrorCode__Enum_TwitchResponseError = 1233,
  PlayFabErrorCode__Enum_ProfaneDisplayName = 1234,
  PlayFabErrorCode__Enum_UserAlreadyAdded = 1235,
  PlayFabErrorCode__Enum_InvalidVirtualCurrencyCode = 1236,
  PlayFabErrorCode__Enum_VirtualCurrencyCannotBeDeleted = 1237,
  PlayFabErrorCode__Enum_IdentifierAlreadyClaimed = 1238,
  PlayFabErrorCode__Enum_IdentifierNotLinked = 1239,
  PlayFabErrorCode__Enum_InvalidContinuationToken = 1240,
  PlayFabErrorCode__Enum_ExpiredContinuationToken = 1241,
  PlayFabErrorCode__Enum_InvalidSegment = 1242,
  PlayFabErrorCode__Enum_InvalidSessionId = 1243,
  PlayFabErrorCode__Enum_SessionLogNotFound = 1244,
  PlayFabErrorCode__Enum_InvalidSearchTerm = 1245,
  PlayFabErrorCode__Enum_TwoFactorAuthenticationTokenRequired = 1246,
  PlayFabErrorCode__Enum_GameServerHostCountLimitExceeded = 1247,
  PlayFabErrorCode__Enum_PlayerTagCountLimitExceeded = 1248,
  PlayFabErrorCode__Enum_RequestAlreadyRunning = 1249,
  PlayFabErrorCode__Enum_ActionGroupNotFound = 1250,
  PlayFabErrorCode__Enum_MaximumSegmentBulkActionJobsRunning = 1251,
  PlayFabErrorCode__Enum_NoActionsOnPlayersInSegmentJob = 1252,
  PlayFabErrorCode__Enum_DuplicateStatisticName = 1253,
  PlayFabErrorCode__Enum_ScheduledTaskNameConflict = 1254,
  PlayFabErrorCode__Enum_ScheduledTaskCreateConflict = 1255,
  PlayFabErrorCode__Enum_InvalidScheduledTaskName = 1256,
  PlayFabErrorCode__Enum_InvalidTaskSchedule = 1257,
  PlayFabErrorCode__Enum_SteamNotEnabledForTitle = 1258,
  PlayFabErrorCode__Enum_LimitNotAnUpgradeOption = 1259,
  PlayFabErrorCode__Enum_NoSecretKeyEnabledForCloudScript = 1260,
  PlayFabErrorCode__Enum_TaskNotFound = 1261,
  PlayFabErrorCode__Enum_TaskInstanceNotFound = 1262,
  PlayFabErrorCode__Enum_InvalidIdentityProviderId = 1263,
  PlayFabErrorCode__Enum_MisconfiguredIdentityProvider = 1264,
  PlayFabErrorCode__Enum_InvalidScheduledTaskType = 1265,
  PlayFabErrorCode__Enum_BillingInformationRequired = 1266,
  PlayFabErrorCode__Enum_LimitedEditionItemUnavailable = 1267,
  PlayFabErrorCode__Enum_InvalidAdPlacementAndReward = 1268,
  PlayFabErrorCode__Enum_AllAdPlacementViewsAlreadyConsumed = 1269,
  PlayFabErrorCode__Enum_GoogleOAuthNotConfiguredForTitle = 1270,
  PlayFabErrorCode__Enum_GoogleOAuthError = 1271,
  PlayFabErrorCode__Enum_UserNotFriend = 1272,
  PlayFabErrorCode__Enum_InvalidSignature = 1273,
  PlayFabErrorCode__Enum_InvalidPublicKey = 1274,
  PlayFabErrorCode__Enum_GoogleOAuthNoIdTokenIncludedInResponse = 1275,
  PlayFabErrorCode__Enum_StatisticUpdateInProgress = 1276,
  PlayFabErrorCode__Enum_LeaderboardVersionNotAvailable = 1277,
  PlayFabErrorCode__Enum_StatisticAlreadyHasPrizeTable = 1279,
  PlayFabErrorCode__Enum_PrizeTableHasOverlappingRanks = 1280,
  PlayFabErrorCode__Enum_PrizeTableHasMissingRanks = 1281,
  PlayFabErrorCode__Enum_PrizeTableRankStartsAtZero = 1282,
  PlayFabErrorCode__Enum_InvalidStatistic = 1283,
  PlayFabErrorCode__Enum_ExpressionParseFailure = 1284,
  PlayFabErrorCode__Enum_ExpressionInvokeFailure = 1285,
  PlayFabErrorCode__Enum_ExpressionTooLong = 1286,
  PlayFabErrorCode__Enum_DataUpdateRateExceeded = 1287,
  PlayFabErrorCode__Enum_RestrictedEmailDomain = 1288,
  PlayFabErrorCode__Enum_EncryptionKeyDisabled = 1289,
  PlayFabErrorCode__Enum_EncryptionKeyMissing = 1290,
  PlayFabErrorCode__Enum_EncryptionKeyBroken = 1291,
  PlayFabErrorCode__Enum_NoSharedSecretKeyConfigured = 1292,
  PlayFabErrorCode__Enum_SecretKeyNotFound = 1293,
  PlayFabErrorCode__Enum_PlayerSecretAlreadyConfigured = 1294,
  PlayFabErrorCode__Enum_APIRequestsDisabledForTitle = 1295,
  PlayFabErrorCode__Enum_InvalidSharedSecretKey = 1296,
  PlayFabErrorCode__Enum_PrizeTableHasNoRanks = 1297,
  PlayFabErrorCode__Enum_ProfileDoesNotExist = 1298,
  PlayFabErrorCode__Enum_ContentS3OriginBucketNotConfigured = 1299,
  PlayFabErrorCode__Enum_InvalidEnvironmentForReceipt = 1300,
  PlayFabErrorCode__Enum_EncryptedRequestNotAllowed = 1301,
  PlayFabErrorCode__Enum_SignedRequestNotAllowed = 1302,
  PlayFabErrorCode__Enum_RequestViewConstraintParamsNotAllowed = 1303,
  PlayFabErrorCode__Enum_BadPartnerConfiguration = 1304,
  PlayFabErrorCode__Enum_XboxBPCertificateFailure = 1305,
  PlayFabErrorCode__Enum_XboxXASSExchangeFailure = 1306,
  PlayFabErrorCode__Enum_InvalidEntityId = 1307,
  PlayFabErrorCode__Enum_StatisticValueAggregationOverflow = 1308,
  PlayFabErrorCode__Enum_EmailMessageFromAddressIsMissing = 1309,
  PlayFabErrorCode__Enum_EmailMessageToAddressIsMissing = 1310,
  PlayFabErrorCode__Enum_SmtpServerAuthenticationError = 1311,
  PlayFabErrorCode__Enum_SmtpServerLimitExceeded = 1312,
  PlayFabErrorCode__Enum_SmtpServerInsufficientStorage = 1313,
  PlayFabErrorCode__Enum_SmtpServerCommunicationError = 1314,
  PlayFabErrorCode__Enum_SmtpServerGeneralFailure = 1315,
  PlayFabErrorCode__Enum_EmailClientTimeout = 1316,
  PlayFabErrorCode__Enum_EmailClientCanceledTask = 1317,
  PlayFabErrorCode__Enum_EmailTemplateMissing = 1318,
  PlayFabErrorCode__Enum_InvalidHostForTitleId = 1319,
  PlayFabErrorCode__Enum_EmailConfirmationTokenDoesNotExist = 1320,
  PlayFabErrorCode__Enum_EmailConfirmationTokenExpired = 1321,
  PlayFabErrorCode__Enum_AccountDeleted = 1322,
  PlayFabErrorCode__Enum_PlayerSecretNotConfigured = 1323,
  PlayFabErrorCode__Enum_InvalidSignatureTime = 1324,
  PlayFabErrorCode__Enum_NoContactEmailAddressFound = 1325,
  PlayFabErrorCode__Enum_InvalidAuthToken = 1326,
  PlayFabErrorCode__Enum_AuthTokenDoesNotExist = 1327,
  PlayFabErrorCode__Enum_AuthTokenExpired = 1328,
  PlayFabErrorCode__Enum_AuthTokenAlreadyUsedToResetPassword = 1329,
  PlayFabErrorCode__Enum_MembershipNameTooLong = 1330,
  PlayFabErrorCode__Enum_MembershipNotFound = 1331,
  PlayFabErrorCode__Enum_GoogleServiceAccountInvalid = 1332,
  PlayFabErrorCode__Enum_GoogleServiceAccountParseFailure = 1333,
  PlayFabErrorCode__Enum_EntityTokenMissing = 1334,
  PlayFabErrorCode__Enum_EntityTokenInvalid = 1335,
  PlayFabErrorCode__Enum_EntityTokenExpired = 1336,
  PlayFabErrorCode__Enum_EntityTokenRevoked = 1337,
  PlayFabErrorCode__Enum_InvalidProductForSubscription = 1338,
  PlayFabErrorCode__Enum_XboxInaccessible = 1339,
  PlayFabErrorCode__Enum_SubscriptionAlreadyTaken = 1340,
  PlayFabErrorCode__Enum_SmtpAddonNotEnabled = 1341,
  PlayFabErrorCode__Enum_APIConcurrentRequestLimitExceeded = 1342,
  PlayFabErrorCode__Enum_XboxRejectedXSTSExchangeRequest = 1343,
  PlayFabErrorCode__Enum_VariableNotDefined = 1344,
  PlayFabErrorCode__Enum_TemplateVersionNotDefined = 1345,
  PlayFabErrorCode__Enum_FileTooLarge = 1346,
  PlayFabErrorCode__Enum_TitleDeleted = 1347,
  PlayFabErrorCode__Enum_TitleContainsUserAccounts = 1348,
  PlayFabErrorCode__Enum_TitleDeletionPlayerCleanupFailure = 1349,
  PlayFabErrorCode__Enum_EntityFileOperationPending = 1350,
  PlayFabErrorCode__Enum_NoEntityFileOperationPending = 1351,
  PlayFabErrorCode__Enum_EntityProfileVersionMismatch = 1352,
  PlayFabErrorCode__Enum_TemplateVersionTooOld = 1353,
  PlayFabErrorCode__Enum_MembershipDefinitionInUse = 1354,
  PlayFabErrorCode__Enum_PaymentPageNotConfigured = 1355,
  PlayFabErrorCode__Enum_FailedLoginAttemptRateLimitExceeded = 1356,
  PlayFabErrorCode__Enum_EntityBlockedByGroup = 1357,
  PlayFabErrorCode__Enum_RoleDoesNotExist = 1358,
  PlayFabErrorCode__Enum_EntityIsAlreadyMember = 1359,
  PlayFabErrorCode__Enum_DuplicateRoleId = 1360,
  PlayFabErrorCode__Enum_GroupInvitationNotFound = 1361,
  PlayFabErrorCode__Enum_GroupApplicationNotFound = 1362,
  PlayFabErrorCode__Enum_OutstandingInvitationAcceptedInstead = 1363,
  PlayFabErrorCode__Enum_OutstandingApplicationAcceptedInstead = 1364,
  PlayFabErrorCode__Enum_RoleIsGroupDefaultMember = 1365,
  PlayFabErrorCode__Enum_RoleIsGroupAdmin = 1366,
  PlayFabErrorCode__Enum_RoleNameNotAvailable = 1367,
  PlayFabErrorCode__Enum_GroupNameNotAvailable = 1368,
  PlayFabErrorCode__Enum_EmailReportAlreadySent = 1369,
  PlayFabErrorCode__Enum_EmailReportRecipientBlacklisted = 1370,
  PlayFabErrorCode__Enum_EventNamespaceNotAllowed = 1371,
  PlayFabErrorCode__Enum_EventEntityNotAllowed = 1372,
  PlayFabErrorCode__Enum_InvalidEntityType = 1373,
  PlayFabErrorCode__Enum_NullTokenResultFromAad = 1374,
  PlayFabErrorCode__Enum_InvalidTokenResultFromAad = 1375,
  PlayFabErrorCode__Enum_NoValidCertificateForAad = 1376,
  PlayFabErrorCode__Enum_InvalidCertificateForAad = 1377,
  PlayFabErrorCode__Enum_DuplicateDropTableId = 1378,
  PlayFabErrorCode__Enum_MultiplayerServerError = 1379,
  PlayFabErrorCode__Enum_MultiplayerServerTooManyRequests = 1380,
  PlayFabErrorCode__Enum_MultiplayerServerNoContent = 1381,
  PlayFabErrorCode__Enum_MultiplayerServerBadRequest = 1382,
  PlayFabErrorCode__Enum_MultiplayerServerUnauthorized = 1383,
  PlayFabErrorCode__Enum_MultiplayerServerForbidden = 1384,
  PlayFabErrorCode__Enum_MultiplayerServerNotFound = 1385,
  PlayFabErrorCode__Enum_MultiplayerServerConflict = 1386,
  PlayFabErrorCode__Enum_MultiplayerServerInternalServerError = 1387,
  PlayFabErrorCode__Enum_MultiplayerServerUnavailable = 1388,
  PlayFabErrorCode__Enum_ExplicitContentDetected = 1389,
  PlayFabErrorCode__Enum_PIIContentDetected = 1390,
  PlayFabErrorCode__Enum_InvalidScheduledTaskParameter = 1391,
  PlayFabErrorCode__Enum_PerEntityEventRateLimitExceeded = 1392,
  PlayFabErrorCode__Enum_TitleDefaultLanguageNotSet = 1393,
  PlayFabErrorCode__Enum_EmailTemplateMissingDefaultVersion = 1394,
  PlayFabErrorCode__Enum_FacebookInstantGamesIdNotLinked = 1395,
  PlayFabErrorCode__Enum_InvalidFacebookInstantGamesSignature = 1396,
  PlayFabErrorCode__Enum_FacebookInstantGamesAuthNotConfiguredForTitle = 1397,
  PlayFabErrorCode__Enum_EntityProfileConstraintValidationFailed = 1398,
  PlayFabErrorCode__Enum_TelemetryIngestionKeyPending = 1399,
  PlayFabErrorCode__Enum_TelemetryIngestionKeyNotFound = 1400,
  PlayFabErrorCode__Enum_StatisticChildNameInvalid = 1402,
  PlayFabErrorCode__Enum_DataIntegrityError = 1403,
  PlayFabErrorCode__Enum_VirtualCurrencyCannotBeSetToOlderVersion = 1404,
  PlayFabErrorCode__Enum_VirtualCurrencyMustBeWithinIntegerRange = 1405,
  PlayFabErrorCode__Enum_EmailTemplateInvalidSyntax = 1406,
  PlayFabErrorCode__Enum_EmailTemplateMissingCallback = 1407,
  PlayFabErrorCode__Enum_PushNotificationTemplateInvalidPayload = 1408,
  PlayFabErrorCode__Enum_InvalidLocalizedPushNotificationLanguage = 1409,
  PlayFabErrorCode__Enum_MissingLocalizedPushNotificationMessage = 1410,
  PlayFabErrorCode__Enum_PushNotificationTemplateMissingPlatformPayload = 1411,
  PlayFabErrorCode__Enum_PushNotificationTemplatePayloadContainsInvalidJson = 1412,
  PlayFabErrorCode__Enum_PushNotificationTemplateContainsInvalidIosPayload = 1413,
  PlayFabErrorCode__Enum_PushNotificationTemplateContainsInvalidAndroidPayload = 1414,
  PlayFabErrorCode__Enum_PushNotificationTemplateIosPayloadMissingNotificationBody = 1415,
  PlayFabErrorCode__Enum_PushNotificationTemplateAndroidPayloadMissingNotificationBody = 1416,
  PlayFabErrorCode__Enum_PushNotificationTemplateNotFound = 1417,
  PlayFabErrorCode__Enum_PushNotificationTemplateMissingDefaultVersion = 1418,
  PlayFabErrorCode__Enum_PushNotificationTemplateInvalidSyntax = 1419,
  PlayFabErrorCode__Enum_PushNotificationTemplateNoCustomPayloadForV1 = 1420,
  PlayFabErrorCode__Enum_NoLeaderboardForStatistic = 1421,
  PlayFabErrorCode__Enum_TitleNewsMissingDefaultLanguage = 1422,
  PlayFabErrorCode__Enum_TitleNewsNotFound = 1423,
  PlayFabErrorCode__Enum_TitleNewsDuplicateLanguage = 1424,
  PlayFabErrorCode__Enum_TitleNewsMissingTitleOrBody = 1425,
  PlayFabErrorCode__Enum_TitleNewsInvalidLanguage = 1426,
  PlayFabErrorCode__Enum_EmailRecipientBlacklisted = 1427,
  PlayFabErrorCode__Enum_InvalidGameCenterAuthRequest = 1428,
  PlayFabErrorCode__Enum_GameCenterAuthenticationFailed = 1429,
  PlayFabErrorCode__Enum_CannotEnablePartiesForTitle = 1430,
  PlayFabErrorCode__Enum_PartyError = 1431,
  PlayFabErrorCode__Enum_PartyRequests = 1432,
  PlayFabErrorCode__Enum_PartyNoContent = 1433,
  PlayFabErrorCode__Enum_PartyBadRequest = 1434,
  PlayFabErrorCode__Enum_PartyUnauthorized = 1435,
  PlayFabErrorCode__Enum_PartyForbidden = 1436,
  PlayFabErrorCode__Enum_PartyNotFound = 1437,
  PlayFabErrorCode__Enum_PartyConflict = 1438,
  PlayFabErrorCode__Enum_PartyInternalServerError = 1439,
  PlayFabErrorCode__Enum_PartyUnavailable = 1440,
  PlayFabErrorCode__Enum_PartyTooManyRequests = 1441,
  PlayFabErrorCode__Enum_PushNotificationTemplateMissingName = 1442,
  PlayFabErrorCode__Enum_CannotEnableMultiplayerServersForTitle = 1443,
  PlayFabErrorCode__Enum_WriteAttemptedDuringExport = 1444,
  PlayFabErrorCode__Enum_MultiplayerServerTitleQuotaCoresExceeded = 1445,
  PlayFabErrorCode__Enum_MatchmakingEntityInvalid = 2001,
  PlayFabErrorCode__Enum_MatchmakingPlayerAttributesInvalid = 2002,
  PlayFabErrorCode__Enum_MatchmakingQueueNotFound = 2016,
  PlayFabErrorCode__Enum_MatchmakingMatchNotFound = 2017,
  PlayFabErrorCode__Enum_MatchmakingTicketNotFound = 2018,
  PlayFabErrorCode__Enum_MatchmakingAlreadyJoinedTicket = 2028,
  PlayFabErrorCode__Enum_MatchmakingTicketAlreadyCompleted = 2029,
  PlayFabErrorCode__Enum_MatchmakingQueueConfigInvalid = 2031,
  PlayFabErrorCode__Enum_MatchmakingMemberProfileInvalid = 2032,
  PlayFabErrorCode__Enum_NintendoSwitchDeviceIdNotLinked = 2034,
  PlayFabErrorCode__Enum_MatchmakingNotEnabled = 2035,
  PlayFabErrorCode__Enum_MatchmakingPlayerAttributesTooLarge = 2043,
  PlayFabErrorCode__Enum_MatchmakingNumberOfPlayersInTicketTooLarge = 2044,
  PlayFabErrorCode__Enum_MatchmakingAttributeInvalid = 2046,
  PlayFabErrorCode__Enum_MatchmakingPlayerHasNotJoinedTicket = 2053,
  PlayFabErrorCode__Enum_MatchmakingRateLimitExceeded = 2054,
  PlayFabErrorCode__Enum_MatchmakingTicketMembershipLimitExceeded = 2055,
  PlayFabErrorCode__Enum_MatchmakingUnauthorized = 2056,
  PlayFabErrorCode__Enum_TitleConfigNotFound = 3001,
  PlayFabErrorCode__Enum_TitleConfigUpdateConflict = 3002,
  PlayFabErrorCode__Enum_TitleConfigSerializationError = 3003,
  PlayFabErrorCode__Enum_CatalogEntityInvalid = 4001,
  PlayFabErrorCode__Enum_CatalogTitleIdMissing = 4002,
  PlayFabErrorCode__Enum_CatalogPlayerIdMissing = 4003,
  PlayFabErrorCode__Enum_CatalogClientIdentityInvalid = 4004,
  PlayFabErrorCode__Enum_CatalogOneOrMoreFilesInvalid = 4005,
  PlayFabErrorCode__Enum_CatalogItemMetadataInvalid = 4006,
  PlayFabErrorCode__Enum_CatalogItemIdInvalid = 4007,
  PlayFabErrorCode__Enum_CatalogSearchParameterInvalid = 4008,
  PlayFabErrorCode__Enum_CatalogFeatureDisabled = 4009,
  PlayFabErrorCode__Enum_CatalogConfigMissing = 4100,
  PlayFabErrorCode__Enum_CatalogConfigTooManyContentTypes = 4101,
  PlayFabErrorCode__Enum_CatalogConfigContentTypeTooLong = 4102,
  PlayFabErrorCode__Enum_CatalogConfigTooManyTags = 4103,
  PlayFabErrorCode__Enum_CatalogConfigTagTooLong = 4104,
  PlayFabErrorCode__Enum_ExportInvalidStatusUpdate = 5000,
  PlayFabErrorCode__Enum_ExportInvalidPrefix = 5001,
  PlayFabErrorCode__Enum_ExportBlobContainerDoesNotExist = 5002,
  PlayFabErrorCode__Enum_ExportEventNameNotFound = 5003,
  PlayFabErrorCode__Enum_ExportExportTitleIdNotFound = 5004,
  PlayFabErrorCode__Enum_ExportCouldNotUpdate = 5005,
  PlayFabErrorCode__Enum_ExportInvalidStorageType = 5006,
};
struct PlayFabErrorCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayFabErrorCode__Enum value;
};
struct __declspec(align(8)) PlayFabError__Fields {
  struct String * ApiEndpoint;
  int32_t HttpCode;
  struct String * HttpStatus;
  enum PlayFabErrorCode__Enum Error;
  struct String * ErrorMessage;
  struct Dictionary_2_System_String_List_1_System_String_ * ErrorDetails;
  struct Object * CustomData;
};
struct PlayFabError {
  struct PlayFabError__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabError__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_List_1_System_String___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_List_1_System_String_ {
  struct Dictionary_2_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_List_1_System_String___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct List_1_System_String_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Fields {
  struct Dictionary_2_System_String_List_1_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Fields {
  struct Dictionary_2_System_String_List_1_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Fields fields;
};
struct ICollection_1_List_1_System_String_ {
  struct ICollection_1_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_List_1_System_String_ {
  struct String * key;
  struct List_1_System_String_ * value;
};
struct KeyValuePair_2_System_String_List_1_System_String___Boxed {
  struct KeyValuePair_2_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_List_1_System_String_ fields;
};
struct KeyValuePair_2_System_String_List_1_System_String___Array {
  struct KeyValuePair_2_System_String_List_1_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_List_1_System_String_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_System_String_ {
  struct IEnumerable_1_List_1_System_String___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabAuthenticationContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabRequestCommon__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityTokenRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabResultCommon__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetEntityTokenResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_String___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_String___VTable vtable;
};
struct ICollection_1_List_1_System_String___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_System_String___StaticFields {
};
struct ICollection_1_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_System_String___VTable vtable;
};
struct KeyValuePair_2_System_String_List_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_List_1_System_String___StaticFields {
};
struct KeyValuePair_2_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_List_1_System_String___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_String___VTable vtable;
};
struct IEnumerable_1_List_1_System_String___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_System_String___StaticFields {
};
struct IEnumerable_1_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_System_String___VTable vtable;
};
struct Dictionary_2_System_String_List_1_System_String___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_System_String_List_1_System_String___StaticFields {
};
struct Dictionary_2_System_String_List_1_System_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_List_1_System_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_List_1_System_String___VTable vtable;
};
struct PlayFabError__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabError__StaticFields {
  struct StringBuilder * _tempSb;
};
struct PlayFabError__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabError__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabError__VTable vtable;
};
struct Action_1_PlayFab_PlayFabError___VTable {
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
struct Action_1_PlayFab_PlayFabError___StaticFields {
};
struct Action_1_PlayFab_PlayFabError___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_PlayFab_PlayFabError___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_PlayFab_PlayFabError___VTable vtable;
};

struct __declspec(align(8)) PlayFabAuthenticationInstanceAPI__Fields {
  struct PlayFabApiSettings * ApiSettings;
  struct PlayFabAuthenticationContext * authenticationContext;
};
struct PlayFabAuthenticationInstanceAPI {
  struct PlayFabAuthenticationInstanceAPI__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabAuthenticationInstanceAPI__Fields fields;
};
struct __declspec(align(8)) PlayFabApiSettings__Fields {
  struct Dictionary_2_System_String_System_String_ * RequestGetParams;
  struct String * ProductionEnvironmentUrl;
  struct String * VerticalName;
  struct String * EntityToken;
  struct String * ClientSessionTicket;
  struct String * DeveloperSecretKey;
  struct String * TitleId;
};
struct PlayFabApiSettings {
  struct PlayFabApiSettings__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabApiSettings__Fields fields;
};
struct PlayFabApiSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFullUrl;
};
struct PlayFabApiSettings__StaticFields {
};
struct PlayFabApiSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabApiSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabApiSettings__VTable vtable;
};}