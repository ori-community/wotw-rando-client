namespace app {
    struct GSClientKick_t__Boxed {
        struct GSClientKick_t__Class* klass;
        MonitorData* monitor;
        struct GSClientKick_t fields;
    };

    struct GSClientAchievementStatus_t {
        uint64_t m_SteamID;
        struct String* m_pchAchievement;
        bool m_bUnlocked;
    };

    struct GSClientAchievementStatus_t__Boxed {
        struct GSClientAchievementStatus_t__Class* klass;
        MonitorData* monitor;
        struct GSClientAchievementStatus_t fields;
    };

    struct GSPolicyResponse_t {
        uint8_t m_bSecure;
    };

    struct GSPolicyResponse_t__Boxed {
        struct GSPolicyResponse_t__Class* klass;
        MonitorData* monitor;
        struct GSPolicyResponse_t fields;
    };

    struct GSGameplayStats_t {
        EResult__Enum m_eResult;

        int32_t m_nRank;
        uint32_t m_unTotalConnects;
        uint32_t m_unTotalMinutesPlayed;
    };

    struct GSGameplayStats_t__Boxed {
        struct GSGameplayStats_t__Class* klass;
        MonitorData* monitor;
        struct GSGameplayStats_t fields;
    };

    struct GSClientGroupStatus_t {
        struct CSteamID m_SteamIDUser;
        struct CSteamID m_SteamIDGroup;
        bool m_bMember;
        bool m_bOfficer;
    };

    struct GSClientGroupStatus_t__Boxed {
        struct GSClientGroupStatus_t__Class* klass;
        MonitorData* monitor;
        struct GSClientGroupStatus_t fields;
    };

    struct GSReputation_t {
        EResult__Enum m_eResult;

        uint32_t m_unReputationScore;
        bool m_bBanned;
        uint32_t m_unBannedIP;
        uint16_t m_usBannedPort;
        uint64_t m_ulBannedGameID;
        uint32_t m_unBanExpires;
    };

    struct GSReputation_t__Boxed {
        struct GSReputation_t__Class* klass;
        MonitorData* monitor;
        struct GSReputation_t fields;
    };

    struct AssociateWithClanResult_t {
        EResult__Enum m_eResult;
    };

    struct AssociateWithClanResult_t__Boxed {
        struct AssociateWithClanResult_t__Class* klass;
        MonitorData* monitor;
        struct AssociateWithClanResult_t fields;
    };

    struct ComputeNewPlayerCompatibilityResult_t {
        EResult__Enum m_eResult;

        int32_t m_cPlayersThatDontLikeCandidate;
        int32_t m_cPlayersThatCandidateDoesntLike;
        int32_t m_cClanPlayersThatDontLikeCandidate;
        struct CSteamID m_SteamIDCandidate;
    };

    struct ComputeNewPlayerCompatibilityResult_t__Boxed {
        struct ComputeNewPlayerCompatibilityResult_t__Class* klass;
        MonitorData* monitor;
        struct ComputeNewPlayerCompatibilityResult_t fields;
    };

    struct GSStatsReceived_t {
        EResult__Enum m_eResult;

        struct CSteamID m_steamIDUser;
    };

    struct GSStatsReceived_t__Boxed {
        struct GSStatsReceived_t__Class* klass;
        MonitorData* monitor;
        struct GSStatsReceived_t fields;
    };

    struct GSStatsStored_t {
        EResult__Enum m_eResult;

        struct CSteamID m_steamIDUser;
    };

    struct GSStatsStored_t__Boxed {
        struct GSStatsStored_t__Class* klass;
        MonitorData* monitor;
        struct GSStatsStored_t fields;
    };

    struct GSStatsUnloaded_t {
        struct CSteamID m_steamIDUser;
    };

    struct GSStatsUnloaded_t__Boxed {
        struct GSStatsUnloaded_t__Class* klass;
        MonitorData* monitor;
        struct GSStatsUnloaded_t fields;
    };

    struct HTML_BrowserReady_t {
        struct HHTMLBrowser unBrowserHandle;
    };

    struct HTML_BrowserReady_t__Boxed {
        struct HTML_BrowserReady_t__Class* klass;
        MonitorData* monitor;
        struct HTML_BrowserReady_t fields;
    };

    struct HTML_NeedsPaint_t {
        struct HHTMLBrowser unBrowserHandle;
        void* pBGRA;
        uint32_t unWide;
        uint32_t unTall;
        uint32_t unUpdateX;
        uint32_t unUpdateY;
        uint32_t unUpdateWide;
        uint32_t unUpdateTall;
        uint32_t unScrollX;
        uint32_t unScrollY;
        float flPageScale;
        uint32_t unPageSerial;
    };

    struct HTML_NeedsPaint_t__Boxed {
        struct HTML_NeedsPaint_t__Class* klass;
        MonitorData* monitor;
        struct HTML_NeedsPaint_t fields;
    };

    struct HTML_StartRequest_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchURL;
        struct String* pchTarget;
        struct String* pchPostData;
        bool bIsRedirect;
    };

    struct HTML_StartRequest_t__Boxed {
        struct HTML_StartRequest_t__Class* klass;
        MonitorData* monitor;
        struct HTML_StartRequest_t fields;
    };

    struct HTML_CloseBrowser_t {
        struct HHTMLBrowser unBrowserHandle;
    };

    struct HTML_CloseBrowser_t__Boxed {
        struct HTML_CloseBrowser_t__Class* klass;
        MonitorData* monitor;
        struct HTML_CloseBrowser_t fields;
    };

    struct HTML_URLChanged_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchURL;
        struct String* pchPostData;
        bool bIsRedirect;
        struct String* pchPageTitle;
        bool bNewNavigation;
    };

    struct HTML_URLChanged_t__Boxed {
        struct HTML_URLChanged_t__Class* klass;
        MonitorData* monitor;
        struct HTML_URLChanged_t fields;
    };

    struct HTML_FinishedRequest_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchURL;
        struct String* pchPageTitle;
    };

    struct HTML_FinishedRequest_t__Boxed {
        struct HTML_FinishedRequest_t__Class* klass;
        MonitorData* monitor;
        struct HTML_FinishedRequest_t fields;
    };

    struct HTML_OpenLinkInNewTab_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchURL;
    };

    struct HTML_OpenLinkInNewTab_t__Boxed {
        struct HTML_OpenLinkInNewTab_t__Class* klass;
        MonitorData* monitor;
        struct HTML_OpenLinkInNewTab_t fields;
    };

    struct HTML_ChangedTitle_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchTitle;
    };

    struct HTML_ChangedTitle_t__Boxed {
        struct HTML_ChangedTitle_t__Class* klass;
        MonitorData* monitor;
        struct HTML_ChangedTitle_t fields;
    };

    struct HTML_SearchResults_t {
        struct HHTMLBrowser unBrowserHandle;
        uint32_t unResults;
        uint32_t unCurrentMatch;
    };

    struct HTML_SearchResults_t__Boxed {
        struct HTML_SearchResults_t__Class* klass;
        MonitorData* monitor;
        struct HTML_SearchResults_t fields;
    };

    struct HTML_CanGoBackAndForward_t {
        struct HHTMLBrowser unBrowserHandle;
        bool bCanGoBack;
        bool bCanGoForward;
    };

    struct HTML_CanGoBackAndForward_t__Boxed {
        struct HTML_CanGoBackAndForward_t__Class* klass;
        MonitorData* monitor;
        struct HTML_CanGoBackAndForward_t fields;
    };

    struct HTML_HorizontalScroll_t {
        struct HHTMLBrowser unBrowserHandle;
        uint32_t unScrollMax;
        uint32_t unScrollCurrent;
        float flPageScale;
        bool bVisible;
        uint32_t unPageSize;
    };

    struct HTML_HorizontalScroll_t__Boxed {
        struct HTML_HorizontalScroll_t__Class* klass;
        MonitorData* monitor;
        struct HTML_HorizontalScroll_t fields;
    };

    struct HTML_VerticalScroll_t {
        struct HHTMLBrowser unBrowserHandle;
        uint32_t unScrollMax;
        uint32_t unScrollCurrent;
        float flPageScale;
        bool bVisible;
        uint32_t unPageSize;
    };

    struct HTML_VerticalScroll_t__Boxed {
        struct HTML_VerticalScroll_t__Class* klass;
        MonitorData* monitor;
        struct HTML_VerticalScroll_t fields;
    };

    struct HTML_LinkAtPosition_t {
        struct HHTMLBrowser unBrowserHandle;
        uint32_t x;
        uint32_t y;
        struct String* pchURL;
        bool bInput;
        bool bLiveLink;
    };

    struct HTML_LinkAtPosition_t__Boxed {
        struct HTML_LinkAtPosition_t__Class* klass;
        MonitorData* monitor;
        struct HTML_LinkAtPosition_t fields;
    };

    struct HTML_JSAlert_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchMessage;
    };

    struct HTML_JSAlert_t__Boxed {
        struct HTML_JSAlert_t__Class* klass;
        MonitorData* monitor;
        struct HTML_JSAlert_t fields;
    };

    struct HTML_JSConfirm_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchMessage;
    };

    struct HTML_JSConfirm_t__Boxed {
        struct HTML_JSConfirm_t__Class* klass;
        MonitorData* monitor;
        struct HTML_JSConfirm_t fields;
    };

    struct HTML_FileOpenDialog_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchTitle;
        struct String* pchInitialFile;
    };

    struct HTML_FileOpenDialog_t__Boxed {
        struct HTML_FileOpenDialog_t__Class* klass;
        MonitorData* monitor;
        struct HTML_FileOpenDialog_t fields;
    };

    struct HTML_NewWindow_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchURL;
        uint32_t unX;
        uint32_t unY;
        uint32_t unWide;
        uint32_t unTall;
        struct HHTMLBrowser unNewWindow_BrowserHandle_IGNORE;
    };

    struct HTML_NewWindow_t__Boxed {
        struct HTML_NewWindow_t__Class* klass;
        MonitorData* monitor;
        struct HTML_NewWindow_t fields;
    };

    struct HTML_SetCursor_t {
        struct HHTMLBrowser unBrowserHandle;
        uint32_t eMouseCursor;
    };

    struct HTML_SetCursor_t__Boxed {
        struct HTML_SetCursor_t__Class* klass;
        MonitorData* monitor;
        struct HTML_SetCursor_t fields;
    };

    struct HTML_StatusText_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchMsg;
    };

    struct HTML_StatusText_t__Boxed {
        struct HTML_StatusText_t__Class* klass;
        MonitorData* monitor;
        struct HTML_StatusText_t fields;
    };

    struct HTML_ShowToolTip_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchMsg;
    };

    struct HTML_ShowToolTip_t__Boxed {
        struct HTML_ShowToolTip_t__Class* klass;
        MonitorData* monitor;
        struct HTML_ShowToolTip_t fields;
    };

    struct HTML_UpdateToolTip_t {
        struct HHTMLBrowser unBrowserHandle;
        struct String* pchMsg;
    };

    struct HTML_UpdateToolTip_t__Boxed {
        struct HTML_UpdateToolTip_t__Class* klass;
        MonitorData* monitor;
        struct HTML_UpdateToolTip_t fields;
    };

    struct HTML_HideToolTip_t {
        struct HHTMLBrowser unBrowserHandle;
    };

    struct HTML_HideToolTip_t__Boxed {
        struct HTML_HideToolTip_t__Class* klass;
        MonitorData* monitor;
        struct HTML_HideToolTip_t fields;
    };

    struct HTML_BrowserRestarted_t {
        struct HHTMLBrowser unBrowserHandle;
        struct HHTMLBrowser unOldBrowserHandle;
    };

    struct HTML_BrowserRestarted_t__Boxed {
        struct HTML_BrowserRestarted_t__Class* klass;
        MonitorData* monitor;
        struct HTML_BrowserRestarted_t fields;
    };

    enum class EHTTPStatusCode__Enum : int32_t {
        k_EHTTPStatusCodeInvalid = 0x00000000,
        k_EHTTPStatusCode100Continue = 0x00000064,
        k_EHTTPStatusCode101SwitchingProtocols = 0x00000065,
        k_EHTTPStatusCode200OK = 0x000000c8,
        k_EHTTPStatusCode201Created = 0x000000c9,
        k_EHTTPStatusCode202Accepted = 0x000000ca,
        k_EHTTPStatusCode203NonAuthoritative = 0x000000cb,
        k_EHTTPStatusCode204NoContent = 0x000000cc,
        k_EHTTPStatusCode205ResetContent = 0x000000cd,
        k_EHTTPStatusCode206PartialContent = 0x000000ce,
        k_EHTTPStatusCode300MultipleChoices = 0x0000012c,
        k_EHTTPStatusCode301MovedPermanently = 0x0000012d,
        k_EHTTPStatusCode302Found = 0x0000012e,
        k_EHTTPStatusCode303SeeOther = 0x0000012f,
        k_EHTTPStatusCode304NotModified = 0x00000130,
        k_EHTTPStatusCode305UseProxy = 0x00000131,
        k_EHTTPStatusCode307TemporaryRedirect = 0x00000133,
        k_EHTTPStatusCode400BadRequest = 0x00000190,
        k_EHTTPStatusCode401Unauthorized = 0x00000191,
        k_EHTTPStatusCode402PaymentRequired = 0x00000192,
        k_EHTTPStatusCode403Forbidden = 0x00000193,
        k_EHTTPStatusCode404NotFound = 0x00000194,
        k_EHTTPStatusCode405MethodNotAllowed = 0x00000195,
        k_EHTTPStatusCode406NotAcceptable = 0x00000196,
        k_EHTTPStatusCode407ProxyAuthRequired = 0x00000197,
        k_EHTTPStatusCode408RequestTimeout = 0x00000198,
        k_EHTTPStatusCode409Conflict = 0x00000199,
        k_EHTTPStatusCode410Gone = 0x0000019a,
        k_EHTTPStatusCode411LengthRequired = 0x0000019b,
        k_EHTTPStatusCode412PreconditionFailed = 0x0000019c,
        k_EHTTPStatusCode413RequestEntityTooLarge = 0x0000019d,
        k_EHTTPStatusCode414RequestURITooLong = 0x0000019e,
        k_EHTTPStatusCode415UnsupportedMediaType = 0x0000019f,
        k_EHTTPStatusCode416RequestedRangeNotSatisfiable = 0x000001a0,
        k_EHTTPStatusCode417ExpectationFailed = 0x000001a1,
        k_EHTTPStatusCode4xxUnknown = 0x000001a2,
        k_EHTTPStatusCode429TooManyRequests = 0x000001ad,
        k_EHTTPStatusCode500InternalServerError = 0x000001f4,
        k_EHTTPStatusCode501NotImplemented = 0x000001f5,
        k_EHTTPStatusCode502BadGateway = 0x000001f6,
        k_EHTTPStatusCode503ServiceUnavailable = 0x000001f7,
        k_EHTTPStatusCode504GatewayTimeout = 0x000001f8,
        k_EHTTPStatusCode505HTTPVersionNotSupported = 0x000001f9,
        k_EHTTPStatusCode5xxUnknown = 0x00000257,
    };

    struct EHTTPStatusCode__Enum__Boxed {
        struct EHTTPStatusCode__Enum__Class* klass;
        MonitorData* monitor;
        EHTTPStatusCode__Enum value;
    };

    struct HTTPRequestCompleted_t {
        struct HTTPRequestHandle m_hRequest;
        uint64_t m_ulContextValue;
        bool m_bRequestSuccessful;
        EHTTPStatusCode__Enum m_eStatusCode;

        uint32_t m_unBodySize;
    };

    struct HTTPRequestCompleted_t__Boxed {
        struct HTTPRequestCompleted_t__Class* klass;
        MonitorData* monitor;
        struct HTTPRequestCompleted_t fields;
    };

    struct HTTPRequestHeadersReceived_t {
        struct HTTPRequestHandle m_hRequest;
        uint64_t m_ulContextValue;
    };

    struct HTTPRequestHeadersReceived_t__Boxed {
        struct HTTPRequestHeadersReceived_t__Class* klass;
        MonitorData* monitor;
        struct HTTPRequestHeadersReceived_t fields;
    };

    struct HTTPRequestDataReceived_t {
        struct HTTPRequestHandle m_hRequest;
        uint64_t m_ulContextValue;
        uint32_t m_cOffset;
        uint32_t m_cBytesReceived;
    };

    struct HTTPRequestDataReceived_t__Boxed {
        struct HTTPRequestDataReceived_t__Class* klass;
        MonitorData* monitor;
        struct HTTPRequestDataReceived_t fields;
    };

    struct SteamInventoryResultReady_t {
        struct SteamInventoryResult_t m_handle;
        EResult__Enum m_result;
    };

    struct SteamInventoryResultReady_t__Boxed {
        struct SteamInventoryResultReady_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryResultReady_t fields;
    };

    struct SteamInventoryFullUpdate_t {
        struct SteamInventoryResult_t m_handle;
    };

    struct SteamInventoryFullUpdate_t__Boxed {
        struct SteamInventoryFullUpdate_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryFullUpdate_t fields;
    };

    struct SteamInventoryDefinitionUpdate_t {
    };

    struct SteamInventoryDefinitionUpdate_t__Boxed {
        struct SteamInventoryDefinitionUpdate_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryDefinitionUpdate_t fields;
    };

    struct SteamInventoryEligiblePromoItemDefIDs_t {
        EResult__Enum m_result;

        struct CSteamID m_steamID;
        int32_t m_numEligiblePromoItemDefs;
        bool m_bCachedData;
    };

    struct SteamInventoryEligiblePromoItemDefIDs_t__Boxed {
        struct SteamInventoryEligiblePromoItemDefIDs_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryEligiblePromoItemDefIDs_t fields;
    };

    struct SteamInventoryStartPurchaseResult_t {
        EResult__Enum m_result;

        uint64_t m_ulOrderID;
        uint64_t m_ulTransID;
    };

    struct SteamInventoryStartPurchaseResult_t__Boxed {
        struct SteamInventoryStartPurchaseResult_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryStartPurchaseResult_t fields;
    };

    struct SteamInventoryRequestPricesResult_t {
        EResult__Enum m_result;

        struct String* m_rgchCurrency;
    };

    struct SteamInventoryRequestPricesResult_t__Boxed {
        struct SteamInventoryRequestPricesResult_t__Class* klass;
        MonitorData* monitor;
        struct SteamInventoryRequestPricesResult_t fields;
    };

    struct FavoritesListChanged_t {
        uint32_t m_nIP;
        uint32_t m_nQueryPort;
        uint32_t m_nConnPort;
        uint32_t m_nAppID;
        uint32_t m_nFlags;
        bool m_bAdd;
        struct AccountID_t m_unAccountId;
    };

    struct FavoritesListChanged_t__Boxed {
        struct FavoritesListChanged_t__Class* klass;
        MonitorData* monitor;
        struct FavoritesListChanged_t fields;
    };

    struct LobbyInvite_t {
        uint64_t m_ulSteamIDUser;
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulGameID;
    };

    struct LobbyInvite_t__Boxed {
        struct LobbyInvite_t__Class* klass;
        MonitorData* monitor;
        struct LobbyInvite_t fields;
    };

    struct LobbyEnter_t {
        uint64_t m_ulSteamIDLobby;
        uint32_t m_rgfChatPermissions;
        bool m_bLocked;
        uint32_t m_EChatRoomEnterResponse;
    };

    struct LobbyEnter_t__Boxed {
        struct LobbyEnter_t__Class* klass;
        MonitorData* monitor;
        struct LobbyEnter_t fields;
    };

    struct LobbyDataUpdate_t {
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulSteamIDMember;
        uint8_t m_bSuccess;
    };

    struct LobbyDataUpdate_t__Boxed {
        struct LobbyDataUpdate_t__Class* klass;
        MonitorData* monitor;
        struct LobbyDataUpdate_t fields;
    };

    struct LobbyChatUpdate_t {
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulSteamIDUserChanged;
        uint64_t m_ulSteamIDMakingChange;
        uint32_t m_rgfChatMemberStateChange;
    };

    struct LobbyChatUpdate_t__Boxed {
        struct LobbyChatUpdate_t__Class* klass;
        MonitorData* monitor;
        struct LobbyChatUpdate_t fields;
    };

    struct LobbyChatMsg_t {
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulSteamIDUser;
        uint8_t m_eChatEntryType;
        uint32_t m_iChatID;
    };

    struct LobbyChatMsg_t__Boxed {
        struct LobbyChatMsg_t__Class* klass;
        MonitorData* monitor;
        struct LobbyChatMsg_t fields;
    };

    struct LobbyGameCreated_t {
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulSteamIDGameServer;
        uint32_t m_unIP;
        uint16_t m_usPort;
    };

    struct LobbyGameCreated_t__Boxed {
        struct LobbyGameCreated_t__Class* klass;
        MonitorData* monitor;
        struct LobbyGameCreated_t fields;
    };

    struct LobbyMatchList_t {
        uint32_t m_nLobbiesMatching;
    };

    struct LobbyMatchList_t__Boxed {
        struct LobbyMatchList_t__Class* klass;
        MonitorData* monitor;
        struct LobbyMatchList_t fields;
    };

    struct LobbyKicked_t {
        uint64_t m_ulSteamIDLobby;
        uint64_t m_ulSteamIDAdmin;
        uint8_t m_bKickedDueToDisconnect;
    };

    struct LobbyKicked_t__Boxed {
        struct LobbyKicked_t__Class* klass;
        MonitorData* monitor;
        struct LobbyKicked_t fields;
    };

    struct LobbyCreated_t {
        EResult__Enum m_eResult;

        uint64_t m_ulSteamIDLobby;
    };

    struct LobbyCreated_t__Boxed {
        struct LobbyCreated_t__Class* klass;
        MonitorData* monitor;
        struct LobbyCreated_t fields;
    };

    struct FavoritesListAccountsUpdated_t {
        EResult__Enum m_eResult;
    };

    struct FavoritesListAccountsUpdated_t__Boxed {
        struct FavoritesListAccountsUpdated_t__Class* klass;
        MonitorData* monitor;
        struct FavoritesListAccountsUpdated_t fields;
    };

    struct SearchForGameProgressCallback_t {
        uint64_t m_ullSearchID;
        EResult__Enum m_eResult;

        struct CSteamID m_lobbyID;
        struct CSteamID m_steamIDEndedSearch;
        int32_t m_nSecondsRemainingEstimate;
        int32_t m_cPlayersSearching;
    };

    struct SearchForGameProgressCallback_t__Boxed {
        struct SearchForGameProgressCallback_t__Class* klass;
        MonitorData* monitor;
        struct SearchForGameProgressCallback_t fields;
    };

    struct SearchForGameResultCallback_t {
        uint64_t m_ullSearchID;
        EResult__Enum m_eResult;

        int32_t m_nCountPlayersInGame;
        int32_t m_nCountAcceptedGame;
        struct CSteamID m_steamIDHost;
        bool m_bFinalCallback;
    };

    struct SearchForGameResultCallback_t__Boxed {
        struct SearchForGameResultCallback_t__Class* klass;
        MonitorData* monitor;
        struct SearchForGameResultCallback_t fields;
    };

    struct RequestPlayersForGameProgressCallback_t {
        EResult__Enum m_eResult;

        uint64_t m_ullSearchID;
    };

    struct RequestPlayersForGameProgressCallback_t__Boxed {
        struct RequestPlayersForGameProgressCallback_t__Class* klass;
        MonitorData* monitor;
        struct RequestPlayersForGameProgressCallback_t fields;
    };

    enum class PlayerAcceptState_t__Enum : int32_t {
        k_EStateUnknown = 0x00000000,
        k_EStatePlayerAccepted = 0x00000001,
        k_EStatePlayerDeclined = 0x00000002,
    };

    struct PlayerAcceptState_t__Enum__Boxed {
        struct PlayerAcceptState_t__Enum__Class* klass;
        MonitorData* monitor;
        PlayerAcceptState_t__Enum value;
    };

    struct RequestPlayersForGameResultCallback_t {
        EResult__Enum m_eResult;

        uint64_t m_ullSearchID;
        struct CSteamID m_SteamIDPlayerFound;
        struct CSteamID m_SteamIDLobby;
        PlayerAcceptState_t__Enum m_ePlayerAcceptState;

        int32_t m_nPlayerIndex;
        int32_t m_nTotalPlayersFound;
        int32_t m_nTotalPlayersAcceptedGame;
        int32_t m_nSuggestedTeamIndex;
        uint64_t m_ullUniqueGameID;
    };

    struct RequestPlayersForGameResultCallback_t__Boxed {
        struct RequestPlayersForGameResultCallback_t__Class* klass;
        MonitorData* monitor;
        struct RequestPlayersForGameResultCallback_t fields;
    };

    struct RequestPlayersForGameFinalResultCallback_t {
        EResult__Enum m_eResult;

        uint64_t m_ullSearchID;
        uint64_t m_ullUniqueGameID;
    };

    struct RequestPlayersForGameFinalResultCallback_t__Boxed {
        struct RequestPlayersForGameFinalResultCallback_t__Class* klass;
        MonitorData* monitor;
        struct RequestPlayersForGameFinalResultCallback_t fields;
    };

    struct SubmitPlayerResultResultCallback_t {
        EResult__Enum m_eResult;

        uint64_t ullUniqueGameID;
        struct CSteamID steamIDPlayer;
    };

    struct SubmitPlayerResultResultCallback_t__Boxed {
        struct SubmitPlayerResultResultCallback_t__Class* klass;
        MonitorData* monitor;
        struct SubmitPlayerResultResultCallback_t fields;
    };

    struct EndGameResultCallback_t {
        EResult__Enum m_eResult;

        uint64_t ullUniqueGameID;
    };

    struct EndGameResultCallback_t__Boxed {
        struct EndGameResultCallback_t__Class* klass;
        MonitorData* monitor;
        struct EndGameResultCallback_t fields;
    };

    struct JoinPartyCallback_t {
        EResult__Enum m_eResult;

        struct PartyBeaconID_t m_ulBeaconID;
        struct CSteamID m_SteamIDBeaconOwner;
        struct String* m_rgchConnectString;
    };

    struct JoinPartyCallback_t__Boxed {
        struct JoinPartyCallback_t__Class* klass;
        MonitorData* monitor;
        struct JoinPartyCallback_t fields;
    };

    struct CreateBeaconCallback_t {
        EResult__Enum m_eResult;

        struct PartyBeaconID_t m_ulBeaconID;
    };

    struct CreateBeaconCallback_t__Boxed {
        struct CreateBeaconCallback_t__Class* klass;
        MonitorData* monitor;
        struct CreateBeaconCallback_t fields;
    };

    struct ReservationNotificationCallback_t {
        struct PartyBeaconID_t m_ulBeaconID;
        struct CSteamID m_steamIDJoiner;
    };

    struct ReservationNotificationCallback_t__Boxed {
        struct ReservationNotificationCallback_t__Class* klass;
        MonitorData* monitor;
        struct ReservationNotificationCallback_t fields;
    };

    struct ChangeNumOpenSlotsCallback_t {
        EResult__Enum m_eResult;
    };

    struct ChangeNumOpenSlotsCallback_t__Boxed {
        struct ChangeNumOpenSlotsCallback_t__Class* klass;
        MonitorData* monitor;
        struct ChangeNumOpenSlotsCallback_t fields;
    };

    struct AvailableBeaconLocationsUpdated_t {
    };

    struct AvailableBeaconLocationsUpdated_t__Boxed {
        struct AvailableBeaconLocationsUpdated_t__Class* klass;
        MonitorData* monitor;
        struct AvailableBeaconLocationsUpdated_t fields;
    };

    struct ActiveBeaconsUpdated_t {
    };

    struct ActiveBeaconsUpdated_t__Boxed {
        struct ActiveBeaconsUpdated_t__Class* klass;
        MonitorData* monitor;
        struct ActiveBeaconsUpdated_t fields;
    };

    struct PlaybackStatusHasChanged_t {
    };

    struct PlaybackStatusHasChanged_t__Boxed {
        struct PlaybackStatusHasChanged_t__Class* klass;
        MonitorData* monitor;
        struct PlaybackStatusHasChanged_t fields;
    };

    struct VolumeHasChanged_t {
        float m_flNewVolume;
    };

    struct VolumeHasChanged_t__Boxed {
        struct VolumeHasChanged_t__Class* klass;
        MonitorData* monitor;
        struct VolumeHasChanged_t fields;
    };

    struct MusicPlayerRemoteWillActivate_t {
    };

    struct MusicPlayerRemoteWillActivate_t__Boxed {
        struct MusicPlayerRemoteWillActivate_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerRemoteWillActivate_t fields;
    };

    struct MusicPlayerRemoteWillDeactivate_t {
    };

    struct MusicPlayerRemoteWillDeactivate_t__Boxed {
        struct MusicPlayerRemoteWillDeactivate_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerRemoteWillDeactivate_t fields;
    };

    struct MusicPlayerRemoteToFront_t {
    };

    struct MusicPlayerRemoteToFront_t__Boxed {
        struct MusicPlayerRemoteToFront_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerRemoteToFront_t fields;
    };

    struct MusicPlayerWillQuit_t {
    };

    struct MusicPlayerWillQuit_t__Boxed {
        struct MusicPlayerWillQuit_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWillQuit_t fields;
    };

    struct MusicPlayerWantsPlay_t {
    };

    struct MusicPlayerWantsPlay_t__Boxed {
        struct MusicPlayerWantsPlay_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsPlay_t fields;
    };

    struct MusicPlayerWantsPause_t {
    };

    struct MusicPlayerWantsPause_t__Boxed {
        struct MusicPlayerWantsPause_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsPause_t fields;
    };

    struct MusicPlayerWantsPlayPrevious_t {
    };

    struct MusicPlayerWantsPlayPrevious_t__Boxed {
        struct MusicPlayerWantsPlayPrevious_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsPlayPrevious_t fields;
    };

    struct MusicPlayerWantsPlayNext_t {
    };

    struct MusicPlayerWantsPlayNext_t__Boxed {
        struct MusicPlayerWantsPlayNext_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsPlayNext_t fields;
    };

    struct MusicPlayerWantsShuffled_t {
        bool m_bShuffled;
    };

    struct MusicPlayerWantsShuffled_t__Boxed {
        struct MusicPlayerWantsShuffled_t__Class* klass;
        MonitorData* monitor;
        struct MusicPlayerWantsShuffled_t fields;
    };

} // namespace app
