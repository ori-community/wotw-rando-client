namespace app {
struct SNetSocket_t__StaticFields {
};

struct SNetSocket_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SNetSocket_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SNetSocket_t__VTable vtable;
};

struct SNetSocket_t___VTable {
};

struct SNetSocket_t___StaticFields {
};

struct SNetSocket_t___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SNetSocket_t___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SNetSocket_t___VTable vtable;
};

enum class ESNetSocketConnectionType__Enum : int32_t {
    k_ESNetSocketConnectionTypeNotConnected = 0x00000000,
    k_ESNetSocketConnectionTypeUDP = 0x00000001,
    k_ESNetSocketConnectionTypeUDPRelay = 0x00000002,
};

struct ESNetSocketConnectionType__Enum__Boxed {
    struct ESNetSocketConnectionType__Enum__Class *klass;
    MonitorData *monitor;
    ESNetSocketConnectionType__Enum value;
    
};

struct ESNetSocketConnectionType__Enum__VTable {
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

struct ESNetSocketConnectionType__Enum__StaticFields {
};

struct ESNetSocketConnectionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ESNetSocketConnectionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ESNetSocketConnectionType__Enum__VTable vtable;
};

struct UGCQueryHandle_t {
    uint64_t m_UGCQueryHandle;
};

struct UGCQueryHandle_t__Boxed {
    struct UGCQueryHandle_t__Class *klass;
    MonitorData *monitor;
    struct UGCQueryHandle_t fields;
};

struct AccountID_t {
    uint32_t m_AccountID;
};

struct AccountID_t__Boxed {
    struct AccountID_t__Class *klass;
    MonitorData *monitor;
    struct AccountID_t fields;
};

enum class EUserUGCList__Enum : int32_t {
    k_EUserUGCList_Published = 0x00000000,
    k_EUserUGCList_VotedOn = 0x00000001,
    k_EUserUGCList_VotedUp = 0x00000002,
    k_EUserUGCList_VotedDown = 0x00000003,
    k_EUserUGCList_WillVoteLater = 0x00000004,
    k_EUserUGCList_Favorited = 0x00000005,
    k_EUserUGCList_Subscribed = 0x00000006,
    k_EUserUGCList_UsedOrPlayed = 0x00000007,
    k_EUserUGCList_Followed = 0x00000008,
};

struct EUserUGCList__Enum__Boxed {
    struct EUserUGCList__Enum__Class *klass;
    MonitorData *monitor;
    EUserUGCList__Enum value;
    
};

enum class EUGCMatchingUGCType__Enum : int32_t {
    k_EUGCMatchingUGCType_Items = 0x00000000,
    k_EUGCMatchingUGCType_Items_Mtx = 0x00000001,
    k_EUGCMatchingUGCType_Items_ReadyToUse = 0x00000002,
    k_EUGCMatchingUGCType_Collections = 0x00000003,
    k_EUGCMatchingUGCType_Artwork = 0x00000004,
    k_EUGCMatchingUGCType_Videos = 0x00000005,
    k_EUGCMatchingUGCType_Screenshots = 0x00000006,
    k_EUGCMatchingUGCType_AllGuides = 0x00000007,
    k_EUGCMatchingUGCType_WebGuides = 0x00000008,
    k_EUGCMatchingUGCType_IntegratedGuides = 0x00000009,
    k_EUGCMatchingUGCType_UsableInGame = 0x0000000a,
    k_EUGCMatchingUGCType_ControllerBindings = 0x0000000b,
    k_EUGCMatchingUGCType_GameManagedItems = 0x0000000c,
    k_EUGCMatchingUGCType_All = -1,
};

struct EUGCMatchingUGCType__Enum__Boxed {
    struct EUGCMatchingUGCType__Enum__Class *klass;
    MonitorData *monitor;
    EUGCMatchingUGCType__Enum value;
    
};

enum class EUserUGCListSortOrder__Enum : int32_t {
    k_EUserUGCListSortOrder_CreationOrderDesc = 0x00000000,
    k_EUserUGCListSortOrder_CreationOrderAsc = 0x00000001,
    k_EUserUGCListSortOrder_TitleAsc = 0x00000002,
    k_EUserUGCListSortOrder_LastUpdatedDesc = 0x00000003,
    k_EUserUGCListSortOrder_SubscriptionDateDesc = 0x00000004,
    k_EUserUGCListSortOrder_VoteScoreDesc = 0x00000005,
    k_EUserUGCListSortOrder_ForModeration = 0x00000006,
};

struct EUserUGCListSortOrder__Enum__Boxed {
    struct EUserUGCListSortOrder__Enum__Class *klass;
    MonitorData *monitor;
    EUserUGCListSortOrder__Enum value;
    
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UGCQueryHandle_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AccountID_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AccountID_t__VTable vtable;
};

struct EUserUGCList__Enum__VTable {
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

struct EUserUGCList__Enum__StaticFields {
};

struct EUserUGCList__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EUserUGCList__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EUserUGCList__Enum__VTable vtable;
};

struct EUGCMatchingUGCType__Enum__VTable {
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

struct EUGCMatchingUGCType__Enum__StaticFields {
};

struct EUGCMatchingUGCType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EUGCMatchingUGCType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EUGCMatchingUGCType__Enum__VTable vtable;
};

struct EUserUGCListSortOrder__Enum__VTable {
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

struct EUserUGCListSortOrder__Enum__StaticFields {
};

struct EUserUGCListSortOrder__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EUserUGCListSortOrder__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EUserUGCListSortOrder__Enum__VTable vtable;
};

enum class EUGCQuery__Enum : int32_t {
    k_EUGCQuery_RankedByVote = 0x00000000,
    k_EUGCQuery_RankedByPublicationDate = 0x00000001,
    k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 0x00000002,
    k_EUGCQuery_RankedByTrend = 0x00000003,
    k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 0x00000004,
    k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 0x00000005,
    k_EUGCQuery_RankedByNumTimesReported = 0x00000006,
    k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 0x00000007,
    k_EUGCQuery_NotYetRated = 0x00000008,
    k_EUGCQuery_RankedByTotalVotesAsc = 0x00000009,
    k_EUGCQuery_RankedByVotesUp = 0x0000000a,
    k_EUGCQuery_RankedByTextSearch = 0x0000000b,
    k_EUGCQuery_RankedByTotalUniqueSubscriptions = 0x0000000c,
    k_EUGCQuery_RankedByPlaytimeTrend = 0x0000000d,
    k_EUGCQuery_RankedByTotalPlaytime = 0x0000000e,
    k_EUGCQuery_RankedByAveragePlaytimeTrend = 0x0000000f,
    k_EUGCQuery_RankedByLifetimeAveragePlaytime = 0x00000010,
    k_EUGCQuery_RankedByPlaytimeSessionsTrend = 0x00000011,
    k_EUGCQuery_RankedByLifetimePlaytimeSessions = 0x00000012,
};

struct EUGCQuery__Enum__Boxed {
    struct EUGCQuery__Enum__Class *klass;
    MonitorData *monitor;
    EUGCQuery__Enum value;
    
};

struct EUGCQuery__Enum__VTable {
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

struct EUGCQuery__Enum__StaticFields {
};

struct EUGCQuery__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EUGCQuery__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EUGCQuery__Enum__VTable vtable;
};

struct PublishedFileId_t {
    uint64_t m_PublishedFileId;
};

struct PublishedFileId_t__Boxed {
    struct PublishedFileId_t__Class *klass;
    MonitorData *monitor;
    struct PublishedFileId_t fields;
};

struct PublishedFileId_t__Array {
    struct PublishedFileId_t__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PublishedFileId_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PublishedFileId_t__VTable vtable;
};

struct PublishedFileId_t__Array__VTable {
};

struct PublishedFileId_t__Array__StaticFields {
};

struct PublishedFileId_t__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PublishedFileId_t__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PublishedFileId_t__Array__VTable vtable;
};

enum class EWorkshopFileType__Enum : int32_t {
    k_EWorkshopFileTypeFirst = 0x00000000,
    k_EWorkshopFileTypeCommunity = 0x00000000,
    k_EWorkshopFileTypeMicrotransaction = 0x00000001,
    k_EWorkshopFileTypeCollection = 0x00000002,
    k_EWorkshopFileTypeArt = 0x00000003,
    k_EWorkshopFileTypeVideo = 0x00000004,
    k_EWorkshopFileTypeScreenshot = 0x00000005,
    k_EWorkshopFileTypeGame = 0x00000006,
    k_EWorkshopFileTypeSoftware = 0x00000007,
    k_EWorkshopFileTypeConcept = 0x00000008,
    k_EWorkshopFileTypeWebGuide = 0x00000009,
    k_EWorkshopFileTypeIntegratedGuide = 0x0000000a,
    k_EWorkshopFileTypeMerch = 0x0000000b,
    k_EWorkshopFileTypeControllerBinding = 0x0000000c,
    k_EWorkshopFileTypeSteamworksAccessInvite = 0x0000000d,
    k_EWorkshopFileTypeSteamVideo = 0x0000000e,
    k_EWorkshopFileTypeGameManagedItem = 0x0000000f,
    k_EWorkshopFileTypeMax = 0x00000010,
};

struct EWorkshopFileType__Enum__Boxed {
    struct EWorkshopFileType__Enum__Class *klass;
    MonitorData *monitor;
    EWorkshopFileType__Enum value;
    
};

enum class ERemoteStoragePublishedFileVisibility__Enum : int32_t {
    k_ERemoteStoragePublishedFileVisibilityPublic = 0x00000000,
    k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 0x00000001,
    k_ERemoteStoragePublishedFileVisibilityPrivate = 0x00000002,
};

struct ERemoteStoragePublishedFileVisibility__Enum__Boxed {
    struct ERemoteStoragePublishedFileVisibility__Enum__Class *klass;
    MonitorData *monitor;
    ERemoteStoragePublishedFileVisibility__Enum value;
    
};

struct UGCHandle_t {
    uint64_t m_UGCHandle;
};

struct UGCHandle_t__Boxed {
    struct UGCHandle_t__Class *klass;
    MonitorData *monitor;
    struct UGCHandle_t fields;
};

struct SteamUGCDetails_t {
    struct PublishedFileId_t m_nPublishedFileId;
    EResult__Enum m_eResult;
    
    EWorkshopFileType__Enum m_eFileType;
    
    struct AppId_t m_nCreatorAppID;
    struct AppId_t m_nConsumerAppID;
    struct String *m_rgchTitle;
    struct String *m_rgchDescription;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    ERemoteStoragePublishedFileVisibility__Enum m_eVisibility;
    
    bool m_bBanned;
    bool m_bAcceptedForUse;
    bool m_bTagsTruncated;
    struct String *m_rgchTags;
    struct UGCHandle_t m_hFile;
    struct UGCHandle_t m_hPreviewFile;
    struct String *m_pchFileName;
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    struct String *m_rgchURL;
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
};

struct SteamUGCDetails_t__Boxed {
    struct SteamUGCDetails_t__Class *klass;
    MonitorData *monitor;
    struct SteamUGCDetails_t fields;
};

struct EWorkshopFileType__Enum__VTable {
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

struct EWorkshopFileType__Enum__StaticFields {
};

struct EWorkshopFileType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EWorkshopFileType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EWorkshopFileType__Enum__VTable vtable;
};

struct ERemoteStoragePublishedFileVisibility__Enum__VTable {
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

struct ERemoteStoragePublishedFileVisibility__Enum__StaticFields {
};

struct ERemoteStoragePublishedFileVisibility__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ERemoteStoragePublishedFileVisibility__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ERemoteStoragePublishedFileVisibility__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UGCHandle_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SteamUGCDetails_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SteamUGCDetails_t__VTable vtable;
};

struct SteamUGCDetails_t___VTable {
};

struct SteamUGCDetails_t___StaticFields {
};

struct SteamUGCDetails_t___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SteamUGCDetails_t___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SteamUGCDetails_t___VTable vtable;
};

enum class EItemStatistic__Enum : int32_t {
    k_EItemStatistic_NumSubscriptions = 0x00000000,
    k_EItemStatistic_NumFavorites = 0x00000001,
    k_EItemStatistic_NumFollowers = 0x00000002,
    k_EItemStatistic_NumUniqueSubscriptions = 0x00000003,
    k_EItemStatistic_NumUniqueFavorites = 0x00000004,
    k_EItemStatistic_NumUniqueFollowers = 0x00000005,
    k_EItemStatistic_NumUniqueWebsiteViews = 0x00000006,
    k_EItemStatistic_ReportScore = 0x00000007,
    k_EItemStatistic_NumSecondsPlayed = 0x00000008,
    k_EItemStatistic_NumPlaytimeSessions = 0x00000009,
    k_EItemStatistic_NumComments = 0x0000000a,
    k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = 0x0000000b,
    k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 0x0000000c,
};

struct EItemStatistic__Enum__Boxed {
    struct EItemStatistic__Enum__Class *klass;
    MonitorData *monitor;
    EItemStatistic__Enum value;
    
};

struct EItemStatistic__Enum__VTable {
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

struct EItemStatistic__Enum__StaticFields {
};

struct EItemStatistic__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EItemStatistic__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EItemStatistic__Enum__VTable vtable;
};

enum class EItemPreviewType__Enum : int32_t {
    k_EItemPreviewType_Image = 0x00000000,
    k_EItemPreviewType_YouTubeVideo = 0x00000001,
    k_EItemPreviewType_Sketchfab = 0x00000002,
    k_EItemPreviewType_EnvironmentMap_HorizontalCross = 0x00000003,
    k_EItemPreviewType_EnvironmentMap_LatLong = 0x00000004,
    k_EItemPreviewType_ReservedMax = 0x000000ff,
};

struct EItemPreviewType__Enum__Boxed {
    struct EItemPreviewType__Enum__Class *klass;
    MonitorData *monitor;
    EItemPreviewType__Enum value;
    
};

struct EItemPreviewType__Enum__VTable {
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

struct EItemPreviewType__Enum__StaticFields {
};

struct EItemPreviewType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EItemPreviewType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EItemPreviewType__Enum__VTable vtable;
};

struct EItemPreviewType___VTable {
};

struct EItemPreviewType___StaticFields {
};

struct EItemPreviewType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EItemPreviewType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EItemPreviewType___VTable vtable;
};

struct UGCUpdateHandle_t {
    uint64_t m_UGCUpdateHandle;
};

struct UGCUpdateHandle_t__Boxed {
    struct UGCUpdateHandle_t__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UGCUpdateHandle_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UGCUpdateHandle_t__VTable vtable;
};

enum class EItemUpdateStatus__Enum : int32_t {
    k_EItemUpdateStatusInvalid = 0x00000000,
    k_EItemUpdateStatusPreparingConfig = 0x00000001,
    k_EItemUpdateStatusPreparingContent = 0x00000002,
    k_EItemUpdateStatusUploadingContent = 0x00000003,
    k_EItemUpdateStatusUploadingPreviewFile = 0x00000004,
    k_EItemUpdateStatusCommittingChanges = 0x00000005,
};

struct EItemUpdateStatus__Enum__Boxed {
    struct EItemUpdateStatus__Enum__Class *klass;
    MonitorData *monitor;
    EItemUpdateStatus__Enum value;
    
};

struct EItemUpdateStatus__Enum__VTable {
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

struct EItemUpdateStatus__Enum__StaticFields {
};

struct EItemUpdateStatus__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EItemUpdateStatus__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EItemUpdateStatus__Enum__VTable vtable;
};

enum class EUniverse__Enum : int32_t {
    k_EUniverseInvalid = 0x00000000,
    k_EUniversePublic = 0x00000001,
    k_EUniverseBeta = 0x00000002,
    k_EUniverseInternal = 0x00000003,
    k_EUniverseDev = 0x00000004,
    k_EUniverseMax = 0x00000005,
};

struct EUniverse__Enum__Boxed {
    struct EUniverse__Enum__Class *klass;
    MonitorData *monitor;
    EUniverse__Enum value;
    
};

struct EUniverse__Enum__VTable {
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

struct EUniverse__Enum__StaticFields {
};

struct EUniverse__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EUniverse__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EUniverse__Enum__VTable vtable;
};

enum class ENotificationPosition__Enum : int32_t {
    k_EPositionTopLeft = 0x00000000,
    k_EPositionTopRight = 0x00000001,
    k_EPositionBottomLeft = 0x00000002,
    k_EPositionBottomRight = 0x00000003,
};

struct ENotificationPosition__Enum__Boxed {
    struct ENotificationPosition__Enum__Class *klass;
    MonitorData *monitor;
    ENotificationPosition__Enum value;
    
};

struct ENotificationPosition__Enum__VTable {
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

struct ENotificationPosition__Enum__StaticFields {
};

struct ENotificationPosition__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ENotificationPosition__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ENotificationPosition__Enum__VTable vtable;
};

enum class ESteamAPICallFailure__Enum : int32_t {
    k_ESteamAPICallFailureNone = -1,
    k_ESteamAPICallFailureSteamGone = 0x00000000,
    k_ESteamAPICallFailureNetworkFailure = 0x00000001,
    k_ESteamAPICallFailureInvalidHandle = 0x00000002,
    k_ESteamAPICallFailureMismatchedCallback = 0x00000003,
};

struct ESteamAPICallFailure__Enum__Boxed {
    struct ESteamAPICallFailure__Enum__Class *klass;
    MonitorData *monitor;
    ESteamAPICallFailure__Enum value;
    
};

struct ESteamAPICallFailure__Enum__VTable {
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
