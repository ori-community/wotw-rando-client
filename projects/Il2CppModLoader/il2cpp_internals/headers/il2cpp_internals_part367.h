namespace app {
struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__StaticFields {
};
struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildRegionStatusChangedEventDataDoc__VTable vtable;
};

struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerBuildRegionUpdatedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerBuildRegionUpdatedEventDataDoc {
  struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerBuildRegionUpdatedEventPayload__Fields {
  struct String * BuildId;
  struct List_1_PlayFab_PlayStreamModels_BuildRegion_ * BuildRegions;
};
struct MultiplayerServerBuildRegionUpdatedEventPayload {
  struct MultiplayerServerBuildRegionUpdatedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerBuildRegionUpdatedEventPayload__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_BuildRegion___Fields {
  struct BuildRegion_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_BuildRegion_ {
  struct List_1_PlayFab_PlayStreamModels_BuildRegion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_BuildRegion___Fields fields;
};
struct __declspec(align(8)) BuildRegion_1__Fields {
  int32_t MaxServers;
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region;
  int32_t StandbyServers;
};
struct BuildRegion_1 {
  struct BuildRegion_1__Class *klass;
  struct MonitorData *monitor;
  struct BuildRegion_1__Fields fields;
};
struct BuildRegion_1__Array {
  struct BuildRegion_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BuildRegion_1 * vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___Class *klass;
  struct MonitorData *monitor;
};
struct BuildRegion_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuildRegion_1__StaticFields {
};
struct BuildRegion_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuildRegion_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuildRegion_1__VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_BuildRegion___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_BuildRegion___VTable {
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
struct List_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields {
  struct BuildRegion_1__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_BuildRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_BuildRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_BuildRegion___VTable vtable;
};
struct MultiplayerServerBuildRegionUpdatedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildRegionUpdatedEventPayload__StaticFields {
};
struct MultiplayerServerBuildRegionUpdatedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildRegionUpdatedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildRegionUpdatedEventPayload__VTable vtable;
};
struct MultiplayerServerBuildRegionUpdatedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerBuildRegionUpdatedEventDataDoc__StaticFields {
};
struct MultiplayerServerBuildRegionUpdatedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerBuildRegionUpdatedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerBuildRegionUpdatedEventDataDoc__VTable vtable;
};

struct MultiplayerServerCertificateDeletedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerCertificateDeletedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerCertificateDeletedEventDataDoc {
  struct MultiplayerServerCertificateDeletedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCertificateDeletedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerCertificateDeletedEventPayload__Fields {
  struct String * CertificateName;
};
struct MultiplayerServerCertificateDeletedEventPayload {
  struct MultiplayerServerCertificateDeletedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCertificateDeletedEventPayload__Fields fields;
};
struct MultiplayerServerCertificateDeletedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCertificateDeletedEventPayload__StaticFields {
};
struct MultiplayerServerCertificateDeletedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCertificateDeletedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCertificateDeletedEventPayload__VTable vtable;
};
struct MultiplayerServerCertificateDeletedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCertificateDeletedEventDataDoc__StaticFields {
};
struct MultiplayerServerCertificateDeletedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCertificateDeletedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCertificateDeletedEventDataDoc__VTable vtable;
};

struct MultiplayerServerCertificateUploadedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerCertificateUploadedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerCertificateUploadedEventDataDoc {
  struct MultiplayerServerCertificateUploadedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCertificateUploadedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerCertificateUploadedEventPayload__Fields {
  struct String * CertificateName;
};
struct MultiplayerServerCertificateUploadedEventPayload {
  struct MultiplayerServerCertificateUploadedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCertificateUploadedEventPayload__Fields fields;
};
struct MultiplayerServerCertificateUploadedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCertificateUploadedEventPayload__StaticFields {
};
struct MultiplayerServerCertificateUploadedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCertificateUploadedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCertificateUploadedEventPayload__VTable vtable;
};
struct MultiplayerServerCertificateUploadedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCertificateUploadedEventDataDoc__StaticFields {
};
struct MultiplayerServerCertificateUploadedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCertificateUploadedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCertificateUploadedEventDataDoc__VTable vtable;
};

struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerCreateBuildInitiatedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerCreateBuildInitiatedEventDataDoc {
  struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerCreateBuildInitiatedEventPayload__Fields {
  struct String * BuildId;
  struct String * BuildName;
  struct Nullable_1_DateTime_ CreationTime;
  struct Dictionary_2_System_String_System_String_ * Metadata;
};
struct MultiplayerServerCreateBuildInitiatedEventPayload {
  struct MultiplayerServerCreateBuildInitiatedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerCreateBuildInitiatedEventPayload__Fields fields;
};
struct MultiplayerServerCreateBuildInitiatedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCreateBuildInitiatedEventPayload__StaticFields {
};
struct MultiplayerServerCreateBuildInitiatedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCreateBuildInitiatedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCreateBuildInitiatedEventPayload__VTable vtable;
};
struct MultiplayerServerCreateBuildInitiatedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerCreateBuildInitiatedEventDataDoc__StaticFields {
};
struct MultiplayerServerCreateBuildInitiatedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerCreateBuildInitiatedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerCreateBuildInitiatedEventDataDoc__VTable vtable;
};

struct MultiplayerServerGameAssetDeletedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerGameAssetDeletedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerGameAssetDeletedEventDataDoc {
  struct MultiplayerServerGameAssetDeletedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerGameAssetDeletedEventDataDoc__Fields fields;
};
struct __declspec(align(8)) MultiplayerServerGameAssetDeletedEventPayload__Fields {
  struct String * AssetFileName;
};
struct MultiplayerServerGameAssetDeletedEventPayload {
  struct MultiplayerServerGameAssetDeletedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerGameAssetDeletedEventPayload__Fields fields;
};
struct MultiplayerServerGameAssetDeletedEventPayload__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerGameAssetDeletedEventPayload__StaticFields {
};
struct MultiplayerServerGameAssetDeletedEventPayload__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerGameAssetDeletedEventPayload__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerGameAssetDeletedEventPayload__VTable vtable;
};
struct MultiplayerServerGameAssetDeletedEventDataDoc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MultiplayerServerGameAssetDeletedEventDataDoc__StaticFields {
};
struct MultiplayerServerGameAssetDeletedEventDataDoc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiplayerServerGameAssetDeletedEventDataDoc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiplayerServerGameAssetDeletedEventDataDoc__VTable vtable;
};

struct MultiplayerServerRequestedEventDataDoc__Fields {
  struct PlayStreamEventBase__Fields _;
  struct EntityLineage_1 * EntityLineage;
  struct String * OriginalEventId;
  struct Nullable_1_DateTime_ OriginalTimestamp;
  struct MultiplayerServerRequestedEventPayload * Payload;
  struct EntityKey_9 * WriterEntity;
};
struct MultiplayerServerRequestedEventDataDoc {
  struct MultiplayerServerRequestedEventDataDoc__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerRequestedEventDataDoc__Fields fields;
};
enum GenericErrorCodes__Enum_1 : int32_t {
  GenericErrorCodes__Enum_1_Success = 0,
  GenericErrorCodes__Enum_1_UnkownError = 1,
  GenericErrorCodes__Enum_1_InvalidParams = 2,
  GenericErrorCodes__Enum_1_AccountNotFound = 3,
  GenericErrorCodes__Enum_1_AccountBanned = 4,
  GenericErrorCodes__Enum_1_InvalidUsernameOrPassword = 5,
  GenericErrorCodes__Enum_1_InvalidTitleId = 6,
  GenericErrorCodes__Enum_1_InvalidEmailAddress = 7,
  GenericErrorCodes__Enum_1_EmailAddressNotAvailable = 8,
  GenericErrorCodes__Enum_1_InvalidUsername = 9,
  GenericErrorCodes__Enum_1_InvalidPassword = 10,
  GenericErrorCodes__Enum_1_UsernameNotAvailable = 11,
  GenericErrorCodes__Enum_1_InvalidSteamTicket = 12,
  GenericErrorCodes__Enum_1_AccountAlreadyLinked = 13,
  GenericErrorCodes__Enum_1_LinkedAccountAlreadyClaimed = 14,
  GenericErrorCodes__Enum_1_InvalidFacebookToken = 15,
  GenericErrorCodes__Enum_1_AccountNotLinked = 16,
  GenericErrorCodes__Enum_1_FailedByPaymentProvider = 17,
  GenericErrorCodes__Enum_1_CouponCodeNotFound = 18,
  GenericErrorCodes__Enum_1_InvalidContainerItem = 19,
  GenericErrorCodes__Enum_1_ContainerNotOwned = 20,
  GenericErrorCodes__Enum_1_KeyNotOwned = 21,
  GenericErrorCodes__Enum_1_InvalidItemIdInTable = 22,
  GenericErrorCodes__Enum_1_InvalidReceipt = 23,
  GenericErrorCodes__Enum_1_ReceiptAlreadyUsed = 24,
  GenericErrorCodes__Enum_1_ReceiptCancelled = 25,
  GenericErrorCodes__Enum_1_GameNotFound = 26,
  GenericErrorCodes__Enum_1_GameModeNotFound = 27,
  GenericErrorCodes__Enum_1_InvalidGoogleToken = 28,
  GenericErrorCodes__Enum_1_UserIsNotPartOfDeveloper = 29,
  GenericErrorCodes__Enum_1_InvalidTitleForDeveloper = 30,
  GenericErrorCodes__Enum_1_TitleNameConflicts = 31,
  GenericErrorCodes__Enum_1_UserisNotValid = 32,
  GenericErrorCodes__Enum_1_ValueAlreadyExists = 33,
  GenericErrorCodes__Enum_1_BuildNotFound = 34,
  GenericErrorCodes__Enum_1_PlayerNotInGame = 35,
  GenericErrorCodes__Enum_1_InvalidTicket = 36,
  GenericErrorCodes__Enum_1_InvalidDeveloper = 37,
  GenericErrorCodes__Enum_1_InvalidOrderInfo = 38,
  GenericErrorCodes__Enum_1_RegistrationIncomplete = 39,
  GenericErrorCodes__Enum_1_InvalidPlatform = 40,
  GenericErrorCodes__Enum_1_UnknownError = 41,
  GenericErrorCodes__Enum_1_SteamApplicationNotOwned = 42,
  GenericErrorCodes__Enum_1_WrongSteamAccount = 43,
  GenericErrorCodes__Enum_1_TitleNotActivated = 44,
  GenericErrorCodes__Enum_1_RegistrationSessionNotFound = 45,
  GenericErrorCodes__Enum_1_NoSuchMod = 46,
  GenericErrorCodes__Enum_1_FileNotFound = 47,
  GenericErrorCodes__Enum_1_DuplicateEmail = 48,
  GenericErrorCodes__Enum_1_ItemNotFound = 49,
  GenericErrorCodes__Enum_1_ItemNotOwned = 50,
  GenericErrorCodes__Enum_1_ItemNotRecycleable = 51,
  GenericErrorCodes__Enum_1_ItemNotAffordable = 52,
  GenericErrorCodes__Enum_1_InvalidVirtualCurrency = 53,
  GenericErrorCodes__Enum_1_WrongVirtualCurrency = 54,
  GenericErrorCodes__Enum_1_WrongPrice = 55,
  GenericErrorCodes__Enum_1_NonPositiveValue = 56,
  GenericErrorCodes__Enum_1_InvalidRegion = 57,
  GenericErrorCodes__Enum_1_RegionAtCapacity = 58,
  GenericErrorCodes__Enum_1_ServerFailedToStart = 59,
  GenericErrorCodes__Enum_1_NameNotAvailable = 60,
  GenericErrorCodes__Enum_1_InsufficientFunds = 61,
  GenericErrorCodes__Enum_1_InvalidDeviceID = 62,
  GenericErrorCodes__Enum_1_InvalidPushNotificationToken = 63,
  GenericErrorCodes__Enum_1_NoRemainingUses = 64,
  GenericErrorCodes__Enum_1_InvalidPaymentProvider = 65,
  GenericErrorCodes__Enum_1_PurchaseInitializationFailure = 66,
  GenericErrorCodes__Enum_1_DuplicateUsername = 67,
  GenericErrorCodes__Enum_1_InvalidBuyerInfo = 68,
  GenericErrorCodes__Enum_1_NoGameModeParamsSet = 69,
  GenericErrorCodes__Enum_1_BodyTooLarge = 70,
  GenericErrorCodes__Enum_1_ReservedWordInBody = 71,
  GenericErrorCodes__Enum_1_InvalidTypeInBody = 72,
  GenericErrorCodes__Enum_1_InvalidRequest = 73,
  GenericErrorCodes__Enum_1_ReservedEventName = 74,
  GenericErrorCodes__Enum_1_InvalidUserStatistics = 75,
  GenericErrorCodes__Enum_1_NotAuthenticated = 76,
  GenericErrorCodes__Enum_1_StreamAlreadyExists = 77,
  GenericErrorCodes__Enum_1_ErrorCreatingStream = 78,
  GenericErrorCodes__Enum_1_StreamNotFound = 79,
  GenericErrorCodes__Enum_1_InvalidAccount = 80,
  GenericErrorCodes__Enum_1_PurchaseDoesNotExist = 81,
  GenericErrorCodes__Enum_1_InvalidPurchaseTransactionStatus = 82,
  GenericErrorCodes__Enum_1_APINotEnabledForGameClientAccess = 83,
  GenericErrorCodes__Enum_1_NoPushNotificationARNForTitle = 84,
  GenericErrorCodes__Enum_1_BuildAlreadyExists = 85,
  GenericErrorCodes__Enum_1_BuildPackageDoesNotExist = 86,
  GenericErrorCodes__Enum_1_CustomAnalyticsEventsNotEnabledForTitle = 87,
  GenericErrorCodes__Enum_1_InvalidSharedGroupId = 88,
  GenericErrorCodes__Enum_1_NotAuthorized = 89,
  GenericErrorCodes__Enum_1_MissingTitleGoogleProperties = 90,
  GenericErrorCodes__Enum_1_InvalidItemProperties = 91,
  GenericErrorCodes__Enum_1_InvalidPSNAuthCode = 92,
  GenericErrorCodes__Enum_1_InvalidItemId = 93,
  GenericErrorCodes__Enum_1_PushNotEnabledForAccount = 94,
  GenericErrorCodes__Enum_1_PushServiceError = 95,
  GenericErrorCodes__Enum_1_ReceiptDoesNotContainInAppItems = 96,
  GenericErrorCodes__Enum_1_ReceiptContainsMultipleInAppItems = 97,
  GenericErrorCodes__Enum_1_InvalidBundleID = 98,
  GenericErrorCodes__Enum_1_JavascriptException = 99,
  GenericErrorCodes__Enum_1_InvalidSessionTicket = 100,
  GenericErrorCodes__Enum_1_UnableToConnectToDatabase = 101,
  GenericErrorCodes__Enum_1_InternalServerError = 102,
  GenericErrorCodes__Enum_1_InvalidReportDate = 103,
  GenericErrorCodes__Enum_1_ReportNotAvailable = 104,
  GenericErrorCodes__Enum_1_DatabaseThroughputExceeded = 105,
  GenericErrorCodes__Enum_1_InvalidGameTicket = 106,
  GenericErrorCodes__Enum_1_ExpiredGameTicket = 107,
  GenericErrorCodes__Enum_1_GameTicketDoesNotMatchLobby = 108,
  GenericErrorCodes__Enum_1_LinkedDeviceAlreadyClaimed = 109,
  GenericErrorCodes__Enum_1_DeviceAlreadyLinked = 110,
  GenericErrorCodes__Enum_1_DeviceNotLinked = 111,
  GenericErrorCodes__Enum_1_PartialFailure = 112,
  GenericErrorCodes__Enum_1_PublisherNotSet = 113,
  GenericErrorCodes__Enum_1_ServiceUnavailable = 114,
  GenericErrorCodes__Enum_1_VersionNotFound = 115,
  GenericErrorCodes__Enum_1_RevisionNotFound = 116,
  GenericErrorCodes__Enum_1_InvalidPublisherId = 117,
  GenericErrorCodes__Enum_1_DownstreamServiceUnavailable = 118,
  GenericErrorCodes__Enum_1_APINotIncludedInTitleUsageTier = 119,
  GenericErrorCodes__Enum_1_DAULimitExceeded = 120,
  GenericErrorCodes__Enum_1_APIRequestLimitExceeded = 121,
  GenericErrorCodes__Enum_1_InvalidAPIEndpoint = 122,
  GenericErrorCodes__Enum_1_BuildNotAvailable = 123,
  GenericErrorCodes__Enum_1_ConcurrentEditError = 124,
  GenericErrorCodes__Enum_1_ContentNotFound = 125,
  GenericErrorCodes__Enum_1_CharacterNotFound = 126,
  GenericErrorCodes__Enum_1_CloudScriptNotFound = 127,
  GenericErrorCodes__Enum_1_ContentQuotaExceeded = 128,
  GenericErrorCodes__Enum_1_InvalidCharacterStatistics = 129,
  GenericErrorCodes__Enum_1_PhotonNotEnabledForTitle = 130,
  GenericErrorCodes__Enum_1_PhotonApplicationNotFound = 131,
  GenericErrorCodes__Enum_1_PhotonApplicationNotAssociatedWithTitle = 132,
  GenericErrorCodes__Enum_1_InvalidEmailOrPassword = 133,
  GenericErrorCodes__Enum_1_FacebookAPIError = 134,
  GenericErrorCodes__Enum_1_InvalidContentType = 135,
  GenericErrorCodes__Enum_1_KeyLengthExceeded = 136,
  GenericErrorCodes__Enum_1_DataLengthExceeded = 137,
  GenericErrorCodes__Enum_1_TooManyKeys = 138,
  GenericErrorCodes__Enum_1_FreeTierCannotHaveVirtualCurrency = 139,
  GenericErrorCodes__Enum_1_MissingAmazonSharedKey = 140,
  GenericErrorCodes__Enum_1_AmazonValidationError = 141,
  GenericErrorCodes__Enum_1_InvalidPSNIssuerId = 142,
  GenericErrorCodes__Enum_1_PSNInaccessible = 143,
  GenericErrorCodes__Enum_1_ExpiredAuthToken = 144,
  GenericErrorCodes__Enum_1_FailedToGetEntitlements = 145,
  GenericErrorCodes__Enum_1_FailedToConsumeEntitlement = 146,
  GenericErrorCodes__Enum_1_TradeAcceptingUserNotAllowed = 147,
  GenericErrorCodes__Enum_1_TradeInventoryItemIsAssignedToCharacter = 148,
  GenericErrorCodes__Enum_1_TradeInventoryItemIsBundle = 149,
  GenericErrorCodes__Enum_1_TradeStatusNotValidForCancelling = 150,
  GenericErrorCodes__Enum_1_TradeStatusNotValidForAccepting = 151,
  GenericErrorCodes__Enum_1_TradeDoesNotExist = 152,
  GenericErrorCodes__Enum_1_TradeCancelled = 153,
  GenericErrorCodes__Enum_1_TradeAlreadyFilled = 154,
  GenericErrorCodes__Enum_1_TradeWaitForStatusTimeout = 155,
  GenericErrorCodes__Enum_1_TradeInventoryItemExpired = 156,
  GenericErrorCodes__Enum_1_TradeMissingOfferedAndAcceptedItems = 157,
  GenericErrorCodes__Enum_1_TradeAcceptedItemIsBundle = 158,
  GenericErrorCodes__Enum_1_TradeAcceptedItemIsStackable = 159,
  GenericErrorCodes__Enum_1_TradeInventoryItemInvalidStatus = 160,
  GenericErrorCodes__Enum_1_TradeAcceptedCatalogItemInvalid = 161,
  GenericErrorCodes__Enum_1_TradeAllowedUsersInvalid = 162,
  GenericErrorCodes__Enum_1_TradeInventoryItemDoesNotExist = 163,
  GenericErrorCodes__Enum_1_TradeInventoryItemIsConsumed = 164,
  GenericErrorCodes__Enum_1_TradeInventoryItemIsStackable = 165,
  GenericErrorCodes__Enum_1_TradeAcceptedItemsMismatch = 166,
  GenericErrorCodes__Enum_1_InvalidKongregateToken = 167,
  GenericErrorCodes__Enum_1_FeatureNotConfiguredForTitle = 168,
  GenericErrorCodes__Enum_1_NoMatchingCatalogItemForReceipt = 169,
  GenericErrorCodes__Enum_1_InvalidCurrencyCode = 170,
  GenericErrorCodes__Enum_1_NoRealMoneyPriceForCatalogItem = 171,
  GenericErrorCodes__Enum_1_TradeInventoryItemIsNotTradable = 172,
  GenericErrorCodes__Enum_1_TradeAcceptedCatalogItemIsNotTradable = 173,
  GenericErrorCodes__Enum_1_UsersAlreadyFriends = 174,
  GenericErrorCodes__Enum_1_LinkedIdentifierAlreadyClaimed = 175,
  GenericErrorCodes__Enum_1_CustomIdNotLinked = 176,
  GenericErrorCodes__Enum_1_TotalDataSizeExceeded = 177,
  GenericErrorCodes__Enum_1_DeleteKeyConflict = 178,
  GenericErrorCodes__Enum_1_InvalidXboxLiveToken = 179,
  GenericErrorCodes__Enum_1_ExpiredXboxLiveToken = 180,
  GenericErrorCodes__Enum_1_ResettableStatisticVersionRequired = 181,
  GenericErrorCodes__Enum_1_NotAuthorizedByTitle = 182,
  GenericErrorCodes__Enum_1_NoPartnerEnabled = 183,
  GenericErrorCodes__Enum_1_InvalidPartnerResponse = 184,
  GenericErrorCodes__Enum_1_APINotEnabledForGameServerAccess = 185,
  GenericErrorCodes__Enum_1_StatisticNotFound = 186,
  GenericErrorCodes__Enum_1_StatisticNameConflict = 187,
  GenericErrorCodes__Enum_1_StatisticVersionClosedForWrites = 188,
  GenericErrorCodes__Enum_1_StatisticVersionInvalid = 189,
  GenericErrorCodes__Enum_1_APIClientRequestRateLimitExceeded = 190,
  GenericErrorCodes__Enum_1_InvalidJSONContent = 191,
  GenericErrorCodes__Enum_1_InvalidDropTable = 192,
  GenericErrorCodes__Enum_1_StatisticVersionAlreadyIncrementedForScheduledInterval = 193,
  GenericErrorCodes__Enum_1_StatisticCountLimitExceeded = 194,
  GenericErrorCodes__Enum_1_StatisticVersionIncrementRateExceeded = 195,
  GenericErrorCodes__Enum_1_ContainerKeyInvalid = 196,
  GenericErrorCodes__Enum_1_CloudScriptExecutionTimeLimitExceeded = 197,
  GenericErrorCodes__Enum_1_NoWritePermissionsForEvent = 198,
  GenericErrorCodes__Enum_1_CloudScriptFunctionArgumentSizeExceeded = 199,
  GenericErrorCodes__Enum_1_CloudScriptAPIRequestCountExceeded = 200,
  GenericErrorCodes__Enum_1_CloudScriptAPIRequestError = 201,
  GenericErrorCodes__Enum_1_CloudScriptHTTPRequestError = 202,
  GenericErrorCodes__Enum_1_InsufficientGuildRole = 203,
  GenericErrorCodes__Enum_1_GuildNotFound = 204,
  GenericErrorCodes__Enum_1_OverLimit = 205,
  GenericErrorCodes__Enum_1_EventNotFound = 206,
  GenericErrorCodes__Enum_1_InvalidEventField = 207,
  GenericErrorCodes__Enum_1_InvalidEventName = 208,
  GenericErrorCodes__Enum_1_CatalogNotConfigured = 209,
  GenericErrorCodes__Enum_1_OperationNotSupportedForPlatform = 210,
  GenericErrorCodes__Enum_1_SegmentNotFound = 211,
  GenericErrorCodes__Enum_1_StoreNotFound = 212,
  GenericErrorCodes__Enum_1_InvalidStatisticName = 213,
  GenericErrorCodes__Enum_1_TitleNotQualifiedForLimit = 214,
  GenericErrorCodes__Enum_1_InvalidServiceLimitLevel = 215,
  GenericErrorCodes__Enum_1_ServiceLimitLevelInTransition = 216,
  GenericErrorCodes__Enum_1_CouponAlreadyRedeemed = 217,
  GenericErrorCodes__Enum_1_GameServerBuildSizeLimitExceeded = 218,
  GenericErrorCodes__Enum_1_GameServerBuildCountLimitExceeded = 219,
  GenericErrorCodes__Enum_1_VirtualCurrencyCountLimitExceeded = 220,
  GenericErrorCodes__Enum_1_VirtualCurrencyCodeExists = 221,
  GenericErrorCodes__Enum_1_TitleNewsItemCountLimitExceeded = 222,
  GenericErrorCodes__Enum_1_InvalidTwitchToken = 223,
  GenericErrorCodes__Enum_1_TwitchResponseError = 224,
  GenericErrorCodes__Enum_1_ProfaneDisplayName = 225,
  GenericErrorCodes__Enum_1_UserAlreadyAdded = 226,
  GenericErrorCodes__Enum_1_InvalidVirtualCurrencyCode = 227,
  GenericErrorCodes__Enum_1_VirtualCurrencyCannotBeDeleted = 228,
  GenericErrorCodes__Enum_1_IdentifierAlreadyClaimed = 229,
  GenericErrorCodes__Enum_1_IdentifierNotLinked = 230,
  GenericErrorCodes__Enum_1_InvalidContinuationToken = 231,
  GenericErrorCodes__Enum_1_ExpiredContinuationToken = 232,
  GenericErrorCodes__Enum_1_InvalidSegment = 233,
  GenericErrorCodes__Enum_1_InvalidSessionId = 234,
  GenericErrorCodes__Enum_1_SessionLogNotFound = 235,
  GenericErrorCodes__Enum_1_InvalidSearchTerm = 236,
  GenericErrorCodes__Enum_1_TwoFactorAuthenticationTokenRequired = 237,
  GenericErrorCodes__Enum_1_GameServerHostCountLimitExceeded = 238,
  GenericErrorCodes__Enum_1_PlayerTagCountLimitExceeded = 239,
  GenericErrorCodes__Enum_1_RequestAlreadyRunning = 240,
  GenericErrorCodes__Enum_1_ActionGroupNotFound = 241,
  GenericErrorCodes__Enum_1_MaximumSegmentBulkActionJobsRunning = 242,
  GenericErrorCodes__Enum_1_NoActionsOnPlayersInSegmentJob = 243,
  GenericErrorCodes__Enum_1_DuplicateStatisticName = 244,
  GenericErrorCodes__Enum_1_ScheduledTaskNameConflict = 245,
  GenericErrorCodes__Enum_1_ScheduledTaskCreateConflict = 246,
  GenericErrorCodes__Enum_1_InvalidScheduledTaskName = 247,
  GenericErrorCodes__Enum_1_InvalidTaskSchedule = 248,
  GenericErrorCodes__Enum_1_SteamNotEnabledForTitle = 249,
  GenericErrorCodes__Enum_1_LimitNotAnUpgradeOption = 250,
  GenericErrorCodes__Enum_1_NoSecretKeyEnabledForCloudScript = 251,
  GenericErrorCodes__Enum_1_TaskNotFound = 252,
  GenericErrorCodes__Enum_1_TaskInstanceNotFound = 253,
  GenericErrorCodes__Enum_1_InvalidIdentityProviderId = 254,
  GenericErrorCodes__Enum_1_MisconfiguredIdentityProvider = 255,
  GenericErrorCodes__Enum_1_InvalidScheduledTaskType = 256,
  GenericErrorCodes__Enum_1_BillingInformationRequired = 257,
  GenericErrorCodes__Enum_1_LimitedEditionItemUnavailable = 258,
  GenericErrorCodes__Enum_1_InvalidAdPlacementAndReward = 259,
  GenericErrorCodes__Enum_1_AllAdPlacementViewsAlreadyConsumed = 260,
  GenericErrorCodes__Enum_1_GoogleOAuthNotConfiguredForTitle = 261,
  GenericErrorCodes__Enum_1_GoogleOAuthError = 262,
  GenericErrorCodes__Enum_1_UserNotFriend = 263,
  GenericErrorCodes__Enum_1_InvalidSignature = 264,
  GenericErrorCodes__Enum_1_InvalidPublicKey = 265,
  GenericErrorCodes__Enum_1_GoogleOAuthNoIdTokenIncludedInResponse = 266,
  GenericErrorCodes__Enum_1_StatisticUpdateInProgress = 267,
  GenericErrorCodes__Enum_1_LeaderboardVersionNotAvailable = 268,
  GenericErrorCodes__Enum_1_StatisticAlreadyHasPrizeTable = 269,
  GenericErrorCodes__Enum_1_PrizeTableHasOverlappingRanks = 270,
  GenericErrorCodes__Enum_1_PrizeTableHasMissingRanks = 271,
  GenericErrorCodes__Enum_1_PrizeTableRankStartsAtZero = 272,
  GenericErrorCodes__Enum_1_InvalidStatistic = 273,
  GenericErrorCodes__Enum_1_ExpressionParseFailure = 274,
  GenericErrorCodes__Enum_1_ExpressionInvokeFailure = 275,
  GenericErrorCodes__Enum_1_ExpressionTooLong = 276,
  GenericErrorCodes__Enum_1_DataUpdateRateExceeded = 277,
  GenericErrorCodes__Enum_1_RestrictedEmailDomain = 278,
  GenericErrorCodes__Enum_1_EncryptionKeyDisabled = 279,
  GenericErrorCodes__Enum_1_EncryptionKeyMissing = 280,
  GenericErrorCodes__Enum_1_EncryptionKeyBroken = 281,
  GenericErrorCodes__Enum_1_NoSharedSecretKeyConfigured = 282,
  GenericErrorCodes__Enum_1_SecretKeyNotFound = 283,
  GenericErrorCodes__Enum_1_PlayerSecretAlreadyConfigured = 284,
  GenericErrorCodes__Enum_1_APIRequestsDisabledForTitle = 285,
  GenericErrorCodes__Enum_1_InvalidSharedSecretKey = 286,
  GenericErrorCodes__Enum_1_PrizeTableHasNoRanks = 287,
  GenericErrorCodes__Enum_1_ProfileDoesNotExist = 288,
  GenericErrorCodes__Enum_1_ContentS3OriginBucketNotConfigured = 289,
  GenericErrorCodes__Enum_1_InvalidEnvironmentForReceipt = 290,
  GenericErrorCodes__Enum_1_EncryptedRequestNotAllowed = 291,
  GenericErrorCodes__Enum_1_SignedRequestNotAllowed = 292,
  GenericErrorCodes__Enum_1_RequestViewConstraintParamsNotAllowed = 293,
  GenericErrorCodes__Enum_1_BadPartnerConfiguration = 294,
  GenericErrorCodes__Enum_1_XboxBPCertificateFailure = 295,
  GenericErrorCodes__Enum_1_XboxXASSExchangeFailure = 296,
  GenericErrorCodes__Enum_1_InvalidEntityId = 297,
  GenericErrorCodes__Enum_1_StatisticValueAggregationOverflow = 298,
  GenericErrorCodes__Enum_1_EmailMessageFromAddressIsMissing = 299,
  GenericErrorCodes__Enum_1_EmailMessageToAddressIsMissing = 300,
  GenericErrorCodes__Enum_1_SmtpServerAuthenticationError = 301,
  GenericErrorCodes__Enum_1_SmtpServerLimitExceeded = 302,
  GenericErrorCodes__Enum_1_SmtpServerInsufficientStorage = 303,
  GenericErrorCodes__Enum_1_SmtpServerCommunicationError = 304,
  GenericErrorCodes__Enum_1_SmtpServerGeneralFailure = 305,
  GenericErrorCodes__Enum_1_EmailClientTimeout = 306,
  GenericErrorCodes__Enum_1_EmailClientCanceledTask = 307,
  GenericErrorCodes__Enum_1_EmailTemplateMissing = 308,
  GenericErrorCodes__Enum_1_InvalidHostForTitleId = 309,
  GenericErrorCodes__Enum_1_EmailConfirmationTokenDoesNotExist = 310,
  GenericErrorCodes__Enum_1_EmailConfirmationTokenExpired = 311,
  GenericErrorCodes__Enum_1_AccountDeleted = 312,
  GenericErrorCodes__Enum_1_PlayerSecretNotConfigured = 313,
  GenericErrorCodes__Enum_1_InvalidSignatureTime = 314,
  GenericErrorCodes__Enum_1_NoContactEmailAddressFound = 315,
  GenericErrorCodes__Enum_1_InvalidAuthToken = 316,
  GenericErrorCodes__Enum_1_AuthTokenDoesNotExist = 317,
  GenericErrorCodes__Enum_1_AuthTokenExpired = 318,
  GenericErrorCodes__Enum_1_AuthTokenAlreadyUsedToResetPassword = 319,
  GenericErrorCodes__Enum_1_MembershipNameTooLong = 320,
  GenericErrorCodes__Enum_1_MembershipNotFound = 321,
  GenericErrorCodes__Enum_1_GoogleServiceAccountInvalid = 322,
  GenericErrorCodes__Enum_1_GoogleServiceAccountParseFailure = 323,
  GenericErrorCodes__Enum_1_EntityTokenMissing = 324,
  GenericErrorCodes__Enum_1_EntityTokenInvalid = 325,
  GenericErrorCodes__Enum_1_EntityTokenExpired = 326,
  GenericErrorCodes__Enum_1_EntityTokenRevoked = 327,
  GenericErrorCodes__Enum_1_InvalidProductForSubscription = 328,
  GenericErrorCodes__Enum_1_XboxInaccessible = 329,
  GenericErrorCodes__Enum_1_SubscriptionAlreadyTaken = 330,
  GenericErrorCodes__Enum_1_SmtpAddonNotEnabled = 331,
  GenericErrorCodes__Enum_1_APIConcurrentRequestLimitExceeded = 332,
  GenericErrorCodes__Enum_1_XboxRejectedXSTSExchangeRequest = 333,
  GenericErrorCodes__Enum_1_VariableNotDefined = 334,
  GenericErrorCodes__Enum_1_TemplateVersionNotDefined = 335,
  GenericErrorCodes__Enum_1_FileTooLarge = 336,
  GenericErrorCodes__Enum_1_TitleDeleted = 337,
  GenericErrorCodes__Enum_1_TitleContainsUserAccounts = 338,
  GenericErrorCodes__Enum_1_TitleDeletionPlayerCleanupFailure = 339,
  GenericErrorCodes__Enum_1_EntityFileOperationPending = 340,
  GenericErrorCodes__Enum_1_NoEntityFileOperationPending = 341,
  GenericErrorCodes__Enum_1_EntityProfileVersionMismatch = 342,
  GenericErrorCodes__Enum_1_TemplateVersionTooOld = 343,
  GenericErrorCodes__Enum_1_MembershipDefinitionInUse = 344,
  GenericErrorCodes__Enum_1_PaymentPageNotConfigured = 345,
  GenericErrorCodes__Enum_1_FailedLoginAttemptRateLimitExceeded = 346,
  GenericErrorCodes__Enum_1_EntityBlockedByGroup = 347,
  GenericErrorCodes__Enum_1_RoleDoesNotExist = 348,
  GenericErrorCodes__Enum_1_EntityIsAlreadyMember = 349,
  GenericErrorCodes__Enum_1_DuplicateRoleId = 350,
  GenericErrorCodes__Enum_1_GroupInvitationNotFound = 351,
  GenericErrorCodes__Enum_1_GroupApplicationNotFound = 352,
  GenericErrorCodes__Enum_1_OutstandingInvitationAcceptedInstead = 353,
  GenericErrorCodes__Enum_1_OutstandingApplicationAcceptedInstead = 354,
  GenericErrorCodes__Enum_1_RoleIsGroupDefaultMember = 355,
  GenericErrorCodes__Enum_1_RoleIsGroupAdmin = 356,
  GenericErrorCodes__Enum_1_RoleNameNotAvailable = 357,
  GenericErrorCodes__Enum_1_GroupNameNotAvailable = 358,
  GenericErrorCodes__Enum_1_EmailReportAlreadySent = 359,
  GenericErrorCodes__Enum_1_EmailReportRecipientBlacklisted = 360,
  GenericErrorCodes__Enum_1_EventNamespaceNotAllowed = 361,
  GenericErrorCodes__Enum_1_EventEntityNotAllowed = 362,
  GenericErrorCodes__Enum_1_InvalidEntityType = 363,
  GenericErrorCodes__Enum_1_NullTokenResultFromAad = 364,
  GenericErrorCodes__Enum_1_InvalidTokenResultFromAad = 365,
  GenericErrorCodes__Enum_1_NoValidCertificateForAad = 366,
  GenericErrorCodes__Enum_1_InvalidCertificateForAad = 367,
  GenericErrorCodes__Enum_1_DuplicateDropTableId = 368,
  GenericErrorCodes__Enum_1_MultiplayerServerError = 369,
  GenericErrorCodes__Enum_1_MultiplayerServerTooManyRequests = 370,
  GenericErrorCodes__Enum_1_MultiplayerServerNoContent = 371,
  GenericErrorCodes__Enum_1_MultiplayerServerBadRequest = 372,
  GenericErrorCodes__Enum_1_MultiplayerServerUnauthorized = 373,
  GenericErrorCodes__Enum_1_MultiplayerServerForbidden = 374,
  GenericErrorCodes__Enum_1_MultiplayerServerNotFound = 375,
  GenericErrorCodes__Enum_1_MultiplayerServerConflict = 376,
  GenericErrorCodes__Enum_1_MultiplayerServerInternalServerError = 377,
  GenericErrorCodes__Enum_1_MultiplayerServerUnavailable = 378,
  GenericErrorCodes__Enum_1_ExplicitContentDetected = 379,
  GenericErrorCodes__Enum_1_PIIContentDetected = 380,
  GenericErrorCodes__Enum_1_InvalidScheduledTaskParameter = 381,
  GenericErrorCodes__Enum_1_PerEntityEventRateLimitExceeded = 382,
  GenericErrorCodes__Enum_1_TitleDefaultLanguageNotSet = 383,
  GenericErrorCodes__Enum_1_EmailTemplateMissingDefaultVersion = 384,
  GenericErrorCodes__Enum_1_FacebookInstantGamesIdNotLinked = 385,
  GenericErrorCodes__Enum_1_InvalidFacebookInstantGamesSignature = 386,
  GenericErrorCodes__Enum_1_FacebookInstantGamesAuthNotConfiguredForTitle = 387,
  GenericErrorCodes__Enum_1_EntityProfileConstraintValidationFailed = 388,
  GenericErrorCodes__Enum_1_TelemetryIngestionKeyPending = 389,
  GenericErrorCodes__Enum_1_TelemetryIngestionKeyNotFound = 390,
  GenericErrorCodes__Enum_1_StatisticTagRequired = 391,
  GenericErrorCodes__Enum_1_StatisticTagInvalid = 392,
  GenericErrorCodes__Enum_1_DataIntegrityError = 393,
  GenericErrorCodes__Enum_1_VirtualCurrencyCannotBeSetToOlderVersion = 394,
  GenericErrorCodes__Enum_1_VirtualCurrencyMustBeWithinIntegerRange = 395,
  GenericErrorCodes__Enum_1_EmailTemplateInvalidSyntax = 396,
  GenericErrorCodes__Enum_1_EmailTemplateMissingCallback = 397,
  GenericErrorCodes__Enum_1_PushNotificationTemplateInvalidPayload = 398,
  GenericErrorCodes__Enum_1_InvalidLocalizedPushNotificationLanguage = 399,
  GenericErrorCodes__Enum_1_MissingLocalizedPushNotificationMessage = 400,
  GenericErrorCodes__Enum_1_PushNotificationTemplateMissingPlatformPayload = 401,
  GenericErrorCodes__Enum_1_PushNotificationTemplatePayloadContainsInvalidJson = 402,
  GenericErrorCodes__Enum_1_PushNotificationTemplateContainsInvalidIosPayload = 403,
  GenericErrorCodes__Enum_1_PushNotificationTemplateContainsInvalidAndroidPayload = 404,
  GenericErrorCodes__Enum_1_PushNotificationTemplateIosPayloadMissingNotificationBody = 405,
  GenericErrorCodes__Enum_1_PushNotificationTemplateAndroidPayloadMissingNotificationBody = 406,
  GenericErrorCodes__Enum_1_PushNotificationTemplateNotFound = 407,
  GenericErrorCodes__Enum_1_PushNotificationTemplateMissingDefaultVersion = 408,
  GenericErrorCodes__Enum_1_PushNotificationTemplateInvalidSyntax = 409,
  GenericErrorCodes__Enum_1_PushNotificationTemplateNoCustomPayloadForV1 = 410,
  GenericErrorCodes__Enum_1_NoLeaderboardForStatistic = 411,
  GenericErrorCodes__Enum_1_TitleNewsMissingDefaultLanguage = 412,
  GenericErrorCodes__Enum_1_TitleNewsNotFound = 413,
  GenericErrorCodes__Enum_1_TitleNewsDuplicateLanguage = 414,
  GenericErrorCodes__Enum_1_TitleNewsMissingTitleOrBody = 415,
  GenericErrorCodes__Enum_1_TitleNewsInvalidLanguage = 416,
  GenericErrorCodes__Enum_1_EmailRecipientBlacklisted = 417,
  GenericErrorCodes__Enum_1_MatchmakingEntityInvalid = 418,
  GenericErrorCodes__Enum_1_MatchmakingPlayerAttributesInvalid = 419,
  GenericErrorCodes__Enum_1_MatchmakingCreateRequestMissing = 420,
  GenericErrorCodes__Enum_1_MatchmakingCreateRequestCreatorMissing = 421,
  GenericErrorCodes__Enum_1_MatchmakingCreateRequestCreatorIdMissing = 422,
  GenericErrorCodes__Enum_1_MatchmakingCreateRequestUserListMissing = 423,
  GenericErrorCodes__Enum_1_MatchmakingCreateRequestGiveUpAfterInvalid = 424,
  GenericErrorCodes__Enum_1_MatchmakingTicketIdMissing = 425,
  GenericErrorCodes__Enum_1_MatchmakingMatchIdMissing = 426,
  GenericErrorCodes__Enum_1_MatchmakingMatchIdIdMissing = 427,
  GenericErrorCodes__Enum_1_MatchmakingQueueNameMissing = 428,
  GenericErrorCodes__Enum_1_MatchmakingTitleIdMissing = 429,
  GenericErrorCodes__Enum_1_MatchmakingTicketIdIdMissing = 430,
  GenericErrorCodes__Enum_1_MatchmakingPlayerIdMissing = 431,
  GenericErrorCodes__Enum_1_MatchmakingJoinRequestUserMissing = 432,
  GenericErrorCodes__Enum_1_MatchmakingQueueConfigNotFound = 433,
  GenericErrorCodes__Enum_1_MatchmakingMatchNotFound = 434,
  GenericErrorCodes__Enum_1_MatchmakingTicketNotFound = 435,
  GenericErrorCodes__Enum_1_MatchmakingCreateTicketServerIdentityInvalid = 436,
  GenericErrorCodes__Enum_1_MatchmakingCreateTicketClientIdentityInvalid = 437,
  GenericErrorCodes__Enum_1_MatchmakingGetTicketUserMismatch = 438,
  GenericErrorCodes__Enum_1_MatchmakingJoinTicketServerIdentityInvalid = 439,
  GenericErrorCodes__Enum_1_MatchmakingJoinTicketUserIdentityMismatch = 440,
  GenericErrorCodes__Enum_1_MatchmakingCancelTicketServerIdentityInvalid = 441,
  GenericErrorCodes__Enum_1_MatchmakingCancelTicketUserIdentityMismatch = 442,
  GenericErrorCodes__Enum_1_MatchmakingGetMatchIdentityMismatch = 443,
  GenericErrorCodes__Enum_1_MatchmakingPlayerIdentityMismatch = 444,
  GenericErrorCodes__Enum_1_MatchmakingAlreadyJoinedTicket = 445,
  GenericErrorCodes__Enum_1_MatchmakingTicketAlreadyCompleted = 446,
  GenericErrorCodes__Enum_1_MatchmakingQueueNameInvalid = 447,
  GenericErrorCodes__Enum_1_MatchmakingQueueConfigInvalid = 448,
  GenericErrorCodes__Enum_1_MatchmakingMemberProfileInvalid = 449,
  GenericErrorCodes__Enum_1_WriteAttemptedDuringExport = 450,
  GenericErrorCodes__Enum_1_NintendoSwitchDeviceIdNotLinked = 451,
  GenericErrorCodes__Enum_1_MatchmakingNotEnabled = 452,
  GenericErrorCodes__Enum_1_MatchmakingGetStatisticsIdentityInvalid = 453,
  GenericErrorCodes__Enum_1_MatchmakingStatisticsIdMissing = 454,
  GenericErrorCodes__Enum_1_CannotEnableMultiplayerServersForTitle = 455,
  GenericErrorCodes__Enum_1_TitleConfigNotFound = 456,
  GenericErrorCodes__Enum_1_TitleConfigUpdateConflict = 457,
  GenericErrorCodes__Enum_1_TitleConfigSerializationError = 458,
};
struct GenericErrorCodes__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GenericErrorCodes__Enum_1 value;
};
struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ {
  enum GenericErrorCodes__Enum_1 value;
  bool has_value;
};
struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Boxed {
  struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ fields;
};
struct __declspec(align(8)) MultiplayerServerRequestedEventPayload__Fields {
  struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ AllocatedRegion;
  struct Nullable_1_Int32_ AllocatedRegionPreferenceRanking;
  struct String * BuildId;
  struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ ErrorCode;
  struct List_1_PlayFab_PlayStreamModels_AzureRegion_ * PreferredRegions;
  struct String * ServerId;
  struct String * SessionId;
};
struct MultiplayerServerRequestedEventPayload {
  struct MultiplayerServerRequestedEventPayload__Class *klass;
  struct MonitorData *monitor;
  struct MultiplayerServerRequestedEventPayload__Fields fields;
};
struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_AzureRegion___Fields {
  struct AzureRegion__Enum_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PlayFab_PlayStreamModels_AzureRegion_ {
  struct List_1_PlayFab_PlayStreamModels_AzureRegion___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PlayFab_PlayStreamModels_AzureRegion___Fields fields;
};
struct AzureRegion__Enum_1__Array {
  struct AzureRegion__Enum_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum AzureRegion__Enum_1 vector[32];
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion_ {
  struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___Class *klass;
  struct MonitorData *monitor;
};
struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___StaticFields {
};
struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___VTable vtable;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields {
};
struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___VTable vtable;
};
struct List_1_PlayFab_PlayStreamModels_AzureRegion___VTable {
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
struct List_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields {
  struct AzureRegion__Enum_1__Array * _emptyArray;
};
struct List_1_PlayFab_PlayStreamModels_AzureRegion___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PlayFab_PlayStreamModels_AzureRegion___VTable vtable;
};}