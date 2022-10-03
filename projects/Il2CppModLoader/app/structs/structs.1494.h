namespace app {
    struct MusicPlayerWantsLooped_t {
        bool m_bLooped;
    };

    struct MusicPlayerWantsLooped_t__Boxed {
        struct MusicPlayerWantsLooped_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsLooped_t fields;
    };

    struct MusicPlayerWantsVolume_t {
        float m_flNewVolume;
    };

    struct MusicPlayerWantsVolume_t__Boxed {
        struct MusicPlayerWantsVolume_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsVolume_t fields;
    };

    struct MusicPlayerSelectsQueueEntry_t {
        int32_t nID;
    };

    struct MusicPlayerSelectsQueueEntry_t__Boxed {
        struct MusicPlayerSelectsQueueEntry_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerSelectsQueueEntry_t fields;
    };

    struct MusicPlayerSelectsPlaylistEntry_t {
        int32_t nID;
    };

    struct MusicPlayerSelectsPlaylistEntry_t__Boxed {
        struct MusicPlayerSelectsPlaylistEntry_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerSelectsPlaylistEntry_t fields;
    };

    struct MusicPlayerWantsPlayingRepeatStatus_t {
        int32_t m_nPlayingRepeatStatus;
    };

    struct MusicPlayerWantsPlayingRepeatStatus_t__Boxed {
        struct MusicPlayerWantsPlayingRepeatStatus_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsPlayingRepeatStatus_t fields;
    };

    struct P2PSessionRequest_t {
        struct CSteamID m_steamIDRemote;
    };

    struct P2PSessionRequest_t__Boxed {
        struct P2PSessionRequest_t__Class* klass;
        MonitorData* monitor;
        struct P2PSessionRequest_t fields;
    };

    struct P2PSessionConnectFail_t {
        struct CSteamID m_steamIDRemote;
        uint8_t m_eP2PSessionError;
    };

    struct P2PSessionConnectFail_t__Boxed {
        struct P2PSessionConnectFail_t__Class* klass;
        MonitorData* monitor;
        struct P2PSessionConnectFail_t fields;
    };

    struct SocketStatusCallback_t {
        struct SNetSocket_t m_hSocket;
        struct SNetListenSocket_t m_hListenSocket;
        struct CSteamID m_steamIDRemote;
        int32_t m_eSNetSocketState;
    };

    struct SocketStatusCallback_t__Boxed {
        struct SocketStatusCallback_t__Class* klass;
        MonitorData* monitor;
        struct SocketStatusCallback_t fields;
    };

    struct SteamParentalSettingsChanged_t {
    };

    struct SteamParentalSettingsChanged_t__Boxed {
        struct SteamParentalSettingsChanged_t__Class* klass;
        MonitorData* monitor;
        struct SteamParentalSettingsChanged_t fields;
    };

    struct SteamRemotePlaySessionConnected_t {
        uint32_t m_unSessionID;
    };

    struct SteamRemotePlaySessionConnected_t__Boxed {
        struct SteamRemotePlaySessionConnected_t__Class* klass;
        MonitorData* monitor;
        struct SteamRemotePlaySessionConnected_t fields;
    };

    struct SteamRemotePlaySessionDisconnected_t {
        uint32_t m_unSessionID;
    };

    struct SteamRemotePlaySessionDisconnected_t__Boxed {
        struct SteamRemotePlaySessionDisconnected_t__Class* klass;
        MonitorData* monitor;
        struct SteamRemotePlaySessionDisconnected_t fields;
    };

    struct RemoteStorageAppSyncedClient_t {
        struct AppId_t m_nAppID;
        EResult__Enum m_eResult;

        int32_t m_unNumDownloads;
    };

    struct RemoteStorageAppSyncedClient_t__Boxed {
        struct RemoteStorageAppSyncedClient_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageAppSyncedClient_t fields;
    };

    struct RemoteStorageAppSyncedServer_t {
        struct AppId_t m_nAppID;
        EResult__Enum m_eResult;

        int32_t m_unNumUploads;
    };

    struct RemoteStorageAppSyncedServer_t__Boxed {
        struct RemoteStorageAppSyncedServer_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageAppSyncedServer_t fields;
    };

    struct RemoteStorageAppSyncProgress_t {
        struct String* m_rgchCurrentFile;
        struct AppId_t m_nAppID;
        uint32_t m_uBytesTransferredThisChunk;
        double m_dAppPercentComplete;
        bool m_bUploading;
    };

    struct RemoteStorageAppSyncProgress_t__Boxed {
        struct RemoteStorageAppSyncProgress_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageAppSyncProgress_t fields;
    };

    struct RemoteStorageAppSyncStatusCheck_t {
        struct AppId_t m_nAppID;
        EResult__Enum m_eResult;
    };

    struct RemoteStorageAppSyncStatusCheck_t__Boxed {
        struct RemoteStorageAppSyncStatusCheck_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageAppSyncStatusCheck_t fields;
    };

    struct RemoteStorageFileShareResult_t {
        EResult__Enum m_eResult;

        struct UGCHandle_t m_hFile;
        struct String* m_rgchFilename;
    };

    struct RemoteStorageFileShareResult_t__Boxed {
        struct RemoteStorageFileShareResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageFileShareResult_t fields;
    };

    struct RemoteStoragePublishFileResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
    };

    struct RemoteStoragePublishFileResult_t__Boxed {
        struct RemoteStoragePublishFileResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishFileResult_t fields;
    };

    struct RemoteStorageDeletePublishedFileResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct RemoteStorageDeletePublishedFileResult_t__Boxed {
        struct RemoteStorageDeletePublishedFileResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageDeletePublishedFileResult_t fields;
    };

    struct RemoteStorageEnumerateUserPublishedFilesResult_t {
        EResult__Enum m_eResult;

        int32_t m_nResultsReturned;
        int32_t m_nTotalResultCount;
        struct PublishedFileId_t__Array* m_rgPublishedFileId;
    };

    struct RemoteStorageEnumerateUserPublishedFilesResult_t__Boxed {
        struct RemoteStorageEnumerateUserPublishedFilesResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageEnumerateUserPublishedFilesResult_t fields;
    };

    struct RemoteStorageSubscribePublishedFileResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct RemoteStorageSubscribePublishedFileResult_t__Boxed {
        struct RemoteStorageSubscribePublishedFileResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageSubscribePublishedFileResult_t fields;
    };

    struct RemoteStorageUnsubscribePublishedFileResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct RemoteStorageUnsubscribePublishedFileResult_t__Boxed {
        struct RemoteStorageUnsubscribePublishedFileResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageUnsubscribePublishedFileResult_t fields;
    };

    struct RemoteStorageUpdatePublishedFileResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
    };

    struct RemoteStorageUpdatePublishedFileResult_t__Boxed {
        struct RemoteStorageUpdatePublishedFileResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageUpdatePublishedFileResult_t fields;
    };

    struct RemoteStorageDownloadUGCResult_t {
        EResult__Enum m_eResult;

        struct UGCHandle_t m_hFile;
        struct AppId_t m_nAppID;
        int32_t m_nSizeInBytes;
        struct String* m_pchFileName;
        uint64_t m_ulSteamIDOwner;
    };

    struct RemoteStorageDownloadUGCResult_t__Boxed {
        struct RemoteStorageDownloadUGCResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageDownloadUGCResult_t fields;
    };

    struct RemoteStorageGetPublishedFileDetailsResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nCreatorAppID;
        struct AppId_t m_nConsumerAppID;
        struct String* m_rgchTitle;
        struct String* m_rgchDescription;
        struct UGCHandle_t m_hFile;
        struct UGCHandle_t m_hPreviewFile;
        uint64_t m_ulSteamIDOwner;
        uint32_t m_rtimeCreated;
        uint32_t m_rtimeUpdated;
        ERemoteStoragePublishedFileVisibility__Enum m_eVisibility;

        bool m_bBanned;
        struct String* m_rgchTags;
        bool m_bTagsTruncated;
        struct String* m_pchFileName;
        int32_t m_nFileSize;
        int32_t m_nPreviewFileSize;
        struct String* m_rgchURL;
        EWorkshopFileType__Enum m_eFileType;

        bool m_bAcceptedForUse;
    };

    struct RemoteStorageGetPublishedFileDetailsResult_t__Boxed {
        struct RemoteStorageGetPublishedFileDetailsResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageGetPublishedFileDetailsResult_t fields;
    };

    struct RemoteStorageEnumerateWorkshopFilesResult_t {
        EResult__Enum m_eResult;

        int32_t m_nResultsReturned;
        int32_t m_nTotalResultCount;
        struct PublishedFileId_t__Array* m_rgPublishedFileId;
        struct Single__Array* m_rgScore;
        struct AppId_t m_nAppId;
        uint32_t m_unStartIndex;
    };

    struct RemoteStorageEnumerateWorkshopFilesResult_t__Boxed {
        struct RemoteStorageEnumerateWorkshopFilesResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageEnumerateWorkshopFilesResult_t fields;
    };

    struct RemoteStorageGetPublishedItemVoteDetailsResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_unPublishedFileId;
        int32_t m_nVotesFor;
        int32_t m_nVotesAgainst;
        int32_t m_nReports;
        float m_fScore;
    };

    struct RemoteStorageGetPublishedItemVoteDetailsResult_t__Boxed {
        struct RemoteStorageGetPublishedItemVoteDetailsResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageGetPublishedItemVoteDetailsResult_t fields;
    };

    struct RemoteStoragePublishedFileSubscribed_t {
        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
    };

    struct RemoteStoragePublishedFileSubscribed_t__Boxed {
        struct RemoteStoragePublishedFileSubscribed_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishedFileSubscribed_t fields;
    };

    struct RemoteStoragePublishedFileUnsubscribed_t {
        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
    };

    struct RemoteStoragePublishedFileUnsubscribed_t__Boxed {
        struct RemoteStoragePublishedFileUnsubscribed_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishedFileUnsubscribed_t fields;
    };

    struct RemoteStoragePublishedFileDeleted_t {
        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
    };

    struct RemoteStoragePublishedFileDeleted_t__Boxed {
        struct RemoteStoragePublishedFileDeleted_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishedFileDeleted_t fields;
    };

    struct RemoteStorageUpdateUserPublishedItemVoteResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct RemoteStorageUpdateUserPublishedItemVoteResult_t__Boxed {
        struct RemoteStorageUpdateUserPublishedItemVoteResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageUpdateUserPublishedItemVoteResult_t fields;
    };

    enum class EWorkshopVote__Enum : int32_t {
        k_EWorkshopVoteUnvoted = 0x00000000,
        k_EWorkshopVoteFor = 0x00000001,
        k_EWorkshopVoteAgainst = 0x00000002,
        k_EWorkshopVoteLater = 0x00000003,
    };

    struct EWorkshopVote__Enum__Boxed {
        struct EWorkshopVote__Enum__Class* klass;
        MonitorData* monitor;
        EWorkshopVote__Enum value;
    };

    struct RemoteStorageUserVoteDetails_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        EWorkshopVote__Enum m_eVote;
    };

    struct RemoteStorageUserVoteDetails_t__Boxed {
        struct RemoteStorageUserVoteDetails_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageUserVoteDetails_t fields;
    };

    struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
        EResult__Enum m_eResult;

        int32_t m_nResultsReturned;
        int32_t m_nTotalResultCount;
        struct PublishedFileId_t__Array* m_rgPublishedFileId;
    };

    struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed {
        struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t fields;
    };

    struct RemoteStorageSetUserPublishedFileActionResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        EWorkshopFileAction__Enum m_eAction;
    };

    struct RemoteStorageSetUserPublishedFileActionResult_t__Boxed {
        struct RemoteStorageSetUserPublishedFileActionResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageSetUserPublishedFileActionResult_t fields;
    };

    struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
        EResult__Enum m_eResult;

        EWorkshopFileAction__Enum m_eAction;

        int32_t m_nResultsReturned;
        int32_t m_nTotalResultCount;
        struct PublishedFileId_t__Array* m_rgPublishedFileId;
        struct UInt32__Array* m_rgRTimeUpdated;
    };

    struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Boxed {
        struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t fields;
    };

    struct RemoteStoragePublishFileProgress_t {
        double m_dPercentFile;
        bool m_bPreview;
    };

    struct RemoteStoragePublishFileProgress_t__Boxed {
        struct RemoteStoragePublishFileProgress_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishFileProgress_t fields;
    };

    struct RemoteStoragePublishedFileUpdated_t {
        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
        uint64_t m_ulUnused;
    };

    struct RemoteStoragePublishedFileUpdated_t__Boxed {
        struct RemoteStoragePublishedFileUpdated_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStoragePublishedFileUpdated_t fields;
    };

    struct RemoteStorageFileWriteAsyncComplete_t {
        EResult__Enum m_eResult;
    };

    struct RemoteStorageFileWriteAsyncComplete_t__Boxed {
        struct RemoteStorageFileWriteAsyncComplete_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageFileWriteAsyncComplete_t fields;
    };

    struct RemoteStorageFileReadAsyncComplete_t {
        struct SteamAPICall_t m_hFileReadAsync;
        EResult__Enum m_eResult;

        uint32_t m_nOffset;
        uint32_t m_cubRead;
    };

    struct RemoteStorageFileReadAsyncComplete_t__Boxed {
        struct RemoteStorageFileReadAsyncComplete_t__Class* klass;
        MonitorData* monitor;
        struct RemoteStorageFileReadAsyncComplete_t fields;
    };

    struct ScreenshotReady_t {
        struct ScreenshotHandle m_hLocal;
        EResult__Enum m_eResult;
    };

    struct ScreenshotReady_t__Boxed {
        struct ScreenshotReady_t__Class* klass;
        MonitorData* monitor;
        struct ScreenshotReady_t fields;
    };

    struct ScreenshotRequested_t {
    };

    struct ScreenshotRequested_t__Boxed {
        struct ScreenshotRequested_t__Class* klass;
        MonitorData* monitor;
        struct ScreenshotRequested_t fields;
    };

    struct SteamUGCQueryCompleted_t {
        struct UGCQueryHandle_t m_handle;
        EResult__Enum m_eResult;

        uint32_t m_unNumResultsReturned;
        uint32_t m_unTotalMatchingResults;
        bool m_bCachedData;
        struct String* m_rgchNextCursor;
    };

    struct SteamUGCQueryCompleted_t__Boxed {
        struct SteamUGCQueryCompleted_t__Class* klass;
        MonitorData* monitor;
        struct SteamUGCQueryCompleted_t fields;
    };

    struct SteamUGCRequestUGCDetailsResult_t {
        struct SteamUGCDetails_t m_details;
        bool m_bCachedData;
    };

    struct SteamUGCRequestUGCDetailsResult_t__Boxed {
        struct SteamUGCRequestUGCDetailsResult_t__Class* klass;
        MonitorData* monitor;
        struct SteamUGCRequestUGCDetailsResult_t fields;
    };

    struct CreateItemResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
    };

    struct CreateItemResult_t__Boxed {
        struct CreateItemResult_t__Class* klass;
        MonitorData* monitor;
        struct CreateItemResult_t fields;
    };

    struct SubmitItemUpdateResult_t {
        EResult__Enum m_eResult;

        bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct SubmitItemUpdateResult_t__Boxed {
        struct SubmitItemUpdateResult_t__Class* klass;
        MonitorData* monitor;
        struct SubmitItemUpdateResult_t fields;
    };

    struct ItemInstalled_t {
        struct AppId_t m_unAppID;
        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct ItemInstalled_t__Boxed {
        struct ItemInstalled_t__Class* klass;
        MonitorData* monitor;
        struct ItemInstalled_t fields;
    };

    struct DownloadItemResult_t {
        struct AppId_t m_unAppID;
        struct PublishedFileId_t m_nPublishedFileId;
        EResult__Enum m_eResult;
    };

    struct DownloadItemResult_t__Boxed {
        struct DownloadItemResult_t__Class* klass;
        MonitorData* monitor;
        struct DownloadItemResult_t fields;
    };

    struct UserFavoriteItemsListChanged_t {
        struct PublishedFileId_t m_nPublishedFileId;
        EResult__Enum m_eResult;

        bool m_bWasAddRequest;
    };

    struct UserFavoriteItemsListChanged_t__Boxed {
        struct UserFavoriteItemsListChanged_t__Class* klass;
        MonitorData* monitor;
        struct UserFavoriteItemsListChanged_t fields;
    };

    struct SetUserItemVoteResult_t {
        struct PublishedFileId_t m_nPublishedFileId;
        EResult__Enum m_eResult;

        bool m_bVoteUp;
    };

    struct SetUserItemVoteResult_t__Boxed {
        struct SetUserItemVoteResult_t__Class* klass;
        MonitorData* monitor;
        struct SetUserItemVoteResult_t fields;
    };

    struct GetUserItemVoteResult_t {
        struct PublishedFileId_t m_nPublishedFileId;
        EResult__Enum m_eResult;

        bool m_bVotedUp;
        bool m_bVotedDown;
        bool m_bVoteSkipped;
    };

    struct GetUserItemVoteResult_t__Boxed {
        struct GetUserItemVoteResult_t__Class* klass;
        MonitorData* monitor;
        struct GetUserItemVoteResult_t fields;
    };

    struct StartPlaytimeTrackingResult_t {
        EResult__Enum m_eResult;
    };

    struct StartPlaytimeTrackingResult_t__Boxed {
        struct StartPlaytimeTrackingResult_t__Class* klass;
        MonitorData* monitor;
        struct StartPlaytimeTrackingResult_t fields;
    };

    struct StopPlaytimeTrackingResult_t {
        EResult__Enum m_eResult;
    };

    struct StopPlaytimeTrackingResult_t__Boxed {
        struct StopPlaytimeTrackingResult_t__Class* klass;
        MonitorData* monitor;
        struct StopPlaytimeTrackingResult_t fields;
    };

    struct AddUGCDependencyResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct PublishedFileId_t m_nChildPublishedFileId;
    };

    struct AddUGCDependencyResult_t__Boxed {
        struct AddUGCDependencyResult_t__Class* klass;
        MonitorData* monitor;
        struct AddUGCDependencyResult_t fields;
    };

    struct RemoveUGCDependencyResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct PublishedFileId_t m_nChildPublishedFileId;
    };

    struct RemoveUGCDependencyResult_t__Boxed {
        struct RemoveUGCDependencyResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoveUGCDependencyResult_t fields;
    };

    struct AddAppDependencyResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
    };

    struct AddAppDependencyResult_t__Boxed {
        struct AddAppDependencyResult_t__Class* klass;
        MonitorData* monitor;
        struct AddAppDependencyResult_t fields;
    };

    struct RemoveAppDependencyResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t m_nAppID;
    };

    struct RemoveAppDependencyResult_t__Boxed {
        struct RemoveAppDependencyResult_t__Class* klass;
        MonitorData* monitor;
        struct RemoveAppDependencyResult_t fields;
    };

    struct GetAppDependenciesResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
        struct AppId_t__Array* m_rgAppIDs;
        uint32_t m_nNumAppDependencies;
        uint32_t m_nTotalNumAppDependencies;
    };

    struct GetAppDependenciesResult_t__Boxed {
        struct GetAppDependenciesResult_t__Class* klass;
        MonitorData* monitor;
        struct GetAppDependenciesResult_t fields;
    };

    struct DeleteItemResult_t {
        EResult__Enum m_eResult;

        struct PublishedFileId_t m_nPublishedFileId;
    };

    struct DeleteItemResult_t__Boxed {
        struct DeleteItemResult_t__Class* klass;
        MonitorData* monitor;
        struct DeleteItemResult_t fields;
    };

    struct SteamServersConnected_t {
    };

    struct SteamServersConnected_t__Boxed {
        struct SteamServersConnected_t__Class* klass;
        MonitorData* monitor;
        struct SteamServersConnected_t fields;
    };

    struct SteamServerConnectFailure_t {
        EResult__Enum m_eResult;

        bool m_bStillRetrying;
    };

    struct SteamServerConnectFailure_t__Boxed {
        struct SteamServerConnectFailure_t__Class* klass;
        MonitorData* monitor;
        struct SteamServerConnectFailure_t fields;
    };

    struct SteamServersDisconnected_t {
        EResult__Enum m_eResult;
    };

    struct SteamServersDisconnected_t__Boxed {
        struct SteamServersDisconnected_t__Class* klass;
        MonitorData* monitor;
        struct SteamServersDisconnected_t fields;
    };

    struct ClientGameServerDeny_t {
        uint32_t m_uAppID;
        uint32_t m_unGameServerIP;
        uint16_t m_usGameServerPort;
        uint16_t m_bSecure;
        uint32_t m_uReason;
    };

    struct ClientGameServerDeny_t__Boxed {
        struct ClientGameServerDeny_t__Class* klass;
        MonitorData* monitor;
        struct ClientGameServerDeny_t fields;
    };

    struct IPCFailure_t {
        uint8_t m_eFailureType;
    };

    struct IPCFailure_t__Boxed {
        struct IPCFailure_t__Class* klass;
        MonitorData* monitor;
        struct IPCFailure_t fields;
    };

    struct LicensesUpdated_t {
    };

    struct LicensesUpdated_t__Boxed {
        struct LicensesUpdated_t__Class* klass;
        MonitorData* monitor;
        struct LicensesUpdated_t fields;
    };

    enum class EAuthSessionResponse__Enum : int32_t {
        k_EAuthSessionResponseOK = 0x00000000,
        k_EAuthSessionResponseUserNotConnectedToSteam = 0x00000001,
        k_EAuthSessionResponseNoLicenseOrExpired = 0x00000002,
        k_EAuthSessionResponseVACBanned = 0x00000003,
        k_EAuthSessionResponseLoggedInElseWhere = 0x00000004,
        k_EAuthSessionResponseVACCheckTimedOut = 0x00000005,
        k_EAuthSessionResponseAuthTicketCanceled = 0x00000006,
        k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = 0x00000007,
        k_EAuthSessionResponseAuthTicketInvalid = 0x00000008,
        k_EAuthSessionResponsePublisherIssuedBan = 0x00000009,
    };

    struct EAuthSessionResponse__Enum__Boxed {
        struct EAuthSessionResponse__Enum__Class* klass;
        MonitorData* monitor;
        EAuthSessionResponse__Enum value;
    };

    struct ValidateAuthTicketResponse_t {
        struct CSteamID m_SteamID;
        EAuthSessionResponse__Enum m_eAuthSessionResponse;

        struct CSteamID m_OwnerSteamID;
    };

    struct ValidateAuthTicketResponse_t__Boxed {
        struct ValidateAuthTicketResponse_t__Class* klass;
        MonitorData* monitor;
        struct ValidateAuthTicketResponse_t fields;
    };

    struct MicroTxnAuthorizationResponse_t {
        uint32_t m_unAppID;
        uint64_t m_ulOrderID;
        uint8_t m_bAuthorized;
    };

    struct MicroTxnAuthorizationResponse_t__Boxed {
        struct MicroTxnAuthorizationResponse_t__Class* klass;
        MonitorData* monitor;
        struct MicroTxnAuthorizationResponse_t fields;
    };

    struct EncryptedAppTicketResponse_t {
        EResult__Enum m_eResult;
    };

    struct EncryptedAppTicketResponse_t__Boxed {
        struct EncryptedAppTicketResponse_t__Class* klass;
        MonitorData* monitor;
        struct EncryptedAppTicketResponse_t fields;
    };

    struct GetAuthSessionTicketResponse_t {
        struct HAuthTicket m_hAuthTicket;
        EResult__Enum m_eResult;
    };

    struct GetAuthSessionTicketResponse_t__Boxed {
        struct GetAuthSessionTicketResponse_t__Class* klass;
        MonitorData* monitor;
        struct GetAuthSessionTicketResponse_t fields;
    };

    struct GameWebCallback_t {
        struct String* m_szURL;
    };

    struct GameWebCallback_t__Boxed {
        struct GameWebCallback_t__Class* klass;
        MonitorData* monitor;
        struct GameWebCallback_t fields;
    };

    struct StoreAuthURLResponse_t {
        struct String* m_szURL;
    };

    struct StoreAuthURLResponse_t__Boxed {
        struct StoreAuthURLResponse_t__Class* klass;
        MonitorData* monitor;
        struct StoreAuthURLResponse_t fields;
    };

    enum class EMarketNotAllowedReasonFlags__Enum : int32_t {
        k_EMarketNotAllowedReason_None = 0x00000000,
        k_EMarketNotAllowedReason_TemporaryFailure = 0x00000001,
        k_EMarketNotAllowedReason_AccountDisabled = 0x00000002,
        k_EMarketNotAllowedReason_AccountLockedDown = 0x00000004,
        k_EMarketNotAllowedReason_AccountLimited = 0x00000008,
        k_EMarketNotAllowedReason_TradeBanned = 0x00000010,
        k_EMarketNotAllowedReason_AccountNotTrusted = 0x00000020,
        k_EMarketNotAllowedReason_SteamGuardNotEnabled = 0x00000040,
        k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled = 0x00000080,
        k_EMarketNotAllowedReason_RecentPasswordReset = 0x00000100,
        k_EMarketNotAllowedReason_NewPaymentMethod = 0x00000200,
        k_EMarketNotAllowedReason_InvalidCookie = 0x00000400,
        k_EMarketNotAllowedReason_UsingNewDevice = 0x00000800,
        k_EMarketNotAllowedReason_RecentSelfRefund = 0x00001000,
        k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified = 0x00002000,
        k_EMarketNotAllowedReason_NoRecentPurchases = 0x00004000,
        k_EMarketNotAllowedReason_AcceptedWalletGift = 0x00008000,
    };

    struct EMarketNotAllowedReasonFlags__Enum__Boxed {
        struct EMarketNotAllowedReasonFlags__Enum__Class* klass;
        MonitorData* monitor;
        EMarketNotAllowedReasonFlags__Enum value;
    };

    struct MarketEligibilityResponse_t {
        bool m_bAllowed;
        EMarketNotAllowedReasonFlags__Enum m_eNotAllowedReason;

        struct RTime32 m_rtAllowedAtTime;
        int32_t m_cdaySteamGuardRequiredDays;
        int32_t m_cdayNewDeviceCooldown;
    };

    struct MarketEligibilityResponse_t__Boxed {
        struct MarketEligibilityResponse_t__Class* klass;
        MonitorData* monitor;
        struct MarketEligibilityResponse_t fields;
    };

    enum class EDurationControlProgress__Enum : int32_t {
        k_EDurationControlProgress_Full = 0x00000000,
        k_EDurationControlProgress_Half = 0x00000001,
        k_EDurationControlProgress_None = 0x00000002,
    };

    struct EDurationControlProgress__Enum__Boxed {
        struct EDurationControlProgress__Enum__Class* klass;
        MonitorData* monitor;
        EDurationControlProgress__Enum value;
    };

    enum class EDurationControlNotification__Enum : int32_t {
        k_EDurationControlNotification_None = 0x00000000,
        k_EDurationControlNotification_1Hour = 0x00000001,
        k_EDurationControlNotification_3Hours = 0x00000002,
        k_EDurationControlNotification_HalfProgress = 0x00000003,
        k_EDurationControlNotification_NoProgress = 0x00000004,
    };

    struct EDurationControlNotification__Enum__Boxed {
        struct EDurationControlNotification__Enum__Class* klass;
        MonitorData* monitor;
        EDurationControlNotification__Enum value;
    };

    struct DurationControl_t {
        EResult__Enum m_eResult;

        struct AppId_t m_appid;
        bool m_bApplicable;
        int32_t m_csecsLast5h;
        EDurationControlProgress__Enum m_progress;

        EDurationControlNotification__Enum m_notification;
    };

    struct DurationControl_t__Boxed {
        struct DurationControl_t__Class* klass;
        MonitorData* monitor;
        struct DurationControl_t fields;
    };

    struct LeaderboardFindResult_t {
        struct SteamLeaderboard_t m_hSteamLeaderboard;
        uint8_t m_bLeaderboardFound;
    };

    struct LeaderboardFindResult_t__Boxed {
        struct LeaderboardFindResult_t__Class* klass;
        MonitorData* monitor;
        struct LeaderboardFindResult_t fields;
    };

    struct LeaderboardScoresDownloaded_t {
        struct SteamLeaderboard_t m_hSteamLeaderboard;
        struct SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
        int32_t m_cEntryCount;
    };

    struct LeaderboardScoresDownloaded_t__Boxed {
        struct LeaderboardScoresDownloaded_t__Class* klass;
        MonitorData* monitor;
        struct LeaderboardScoresDownloaded_t fields;
    };

} // namespace app
