#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcceptTradeRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AcceptTradeResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AddFriendResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AddGenericIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AddUsernamePasswordResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_AttributeInstallResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_CancelTradeResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ConfirmPurchaseResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ConsumeItemResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_CreateSharedGroupResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_CurrentGamesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_EmptyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GameServerRegionsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetAccountInfoResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetCatalogItemsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetCharacterDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetCharacterInventoryResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetCharacterLeaderboardResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetCharacterStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetContentDownloadUrlResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetFriendsListResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetLeaderboardResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPaymentTokenResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerProfileResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerTagsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPlayerTradesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPublisherDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetPurchaseResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetSharedGroupDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetStoreItemsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetTimeResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetTitleDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetTitleNewsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetTradeStatusResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetUserDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetUserInventoryResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_GrantCharacterToUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkCustomIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkFacebookAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkGameCenterAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkGoogleAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkIOSDeviceIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkKongregateAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkPSNAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkSteamAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkTwitchAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkWindowsHelloAccountResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LinkXboxAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ListUsersCharactersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_LoginResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_MatchmakeResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_OpenTradeResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_PayForPurchaseResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_PurchaseItemResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RedeemCouponResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RegisterForIOSPushNotificationResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RegisterPlayFabUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RemoveContactEmailResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RemoveFriendResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RemoveGenericIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RemoveSharedGroupMembersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ReportPlayerClientResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_RestoreIOSPurchasesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_SendAccountRecoveryEmailResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_SetFriendTagsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_SetPlayerSecretResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_StartGameResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_StartPurchaseResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkCustomIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkFacebookAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkGameCenterAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkGoogleAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkIOSDeviceIDResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkKongregateAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkPSNAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkSteamAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkTwitchAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlinkXboxAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UnlockContainerItemResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdateCharacterDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdateCharacterStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdatePlayerStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdateSharedGroupDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdateUserDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ValidateAmazonReceiptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ValidateIOSReceiptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_ValidateWindowsReceiptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ClientModels_WriteEventResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/AddFriendRequest.h>
#include <Modloader/app/structs/AddGenericIDRequest.h>
#include <Modloader/app/structs/AddOrUpdateContactEmailRequest.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest.h>
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>
#include <Modloader/app/structs/AndroidDevicePushNotificationRegistrationRequest.h>
#include <Modloader/app/structs/AttributeInstallRequest.h>
#include <Modloader/app/structs/CancelTradeRequest.h>
#include <Modloader/app/structs/ConfirmPurchaseRequest.h>
#include <Modloader/app/structs/ConsumeItemRequest.h>
#include <Modloader/app/structs/ConsumePSNEntitlementsRequest.h>
#include <Modloader/app/structs/ConsumeXboxEntitlementsRequest.h>
#include <Modloader/app/structs/CreateSharedGroupRequest.h>
#include <Modloader/app/structs/CurrentGamesRequest.h>
#include <Modloader/app/structs/DeviceInfoRequest.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>
#include <Modloader/app/structs/GameServerRegionsRequest.h>
#include <Modloader/app/structs/GetAccountInfoRequest.h>
#include <Modloader/app/structs/GetCatalogItemsRequest.h>
#include <Modloader/app/structs/GetCharacterDataRequest.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest.h>
#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>
#include <Modloader/app/structs/GetContentDownloadUrlRequest.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerRequest.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest.h>
#include <Modloader/app/structs/GetFriendsListRequest.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest.h>
#include <Modloader/app/structs/GetLeaderboardAroundPlayerRequest.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest.h>
#include <Modloader/app/structs/GetLeaderboardRequest.h>
#include <Modloader/app/structs/GetPaymentTokenRequest.h>
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGenericIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromGoogleIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromKongregateIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromTwitchIDsRequest.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest.h>
#include <Modloader/app/structs/GetPlayerProfileRequest.h>
#include <Modloader/app/structs/GetPlayerSegmentsRequest.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>
#include <Modloader/app/structs/GetPlayerTagsRequest.h>
#include <Modloader/app/structs/GetPlayerTradesRequest.h>
#include <Modloader/app/structs/GetPublisherDataRequest.h>
#include <Modloader/app/structs/GetPurchaseRequest.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest.h>
#include <Modloader/app/structs/GetStoreItemsRequest.h>
#include <Modloader/app/structs/GetTimeRequest.h>
#include <Modloader/app/structs/GetTitleDataRequest.h>
#include <Modloader/app/structs/GetTitleNewsRequest.h>
#include <Modloader/app/structs/GetTitlePublicKeyRequest.h>
#include <Modloader/app/structs/GetTradeStatusRequest.h>
#include <Modloader/app/structs/GetUserDataRequest.h>
#include <Modloader/app/structs/GetUserInventoryRequest.h>
#include <Modloader/app/structs/GetWindowsHelloChallengeRequest.h>
#include <Modloader/app/structs/GrantCharacterToUserRequest.h>
#include <Modloader/app/structs/LinkAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/LinkCustomIDRequest.h>
#include <Modloader/app/structs/LinkFacebookAccountRequest.h>
#include <Modloader/app/structs/LinkFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/LinkGameCenterAccountRequest.h>
#include <Modloader/app/structs/LinkGoogleAccountRequest.h>
#include <Modloader/app/structs/LinkIOSDeviceIDRequest.h>
#include <Modloader/app/structs/LinkKongregateAccountRequest.h>
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>
#include <Modloader/app/structs/LinkPSNAccountRequest.h>
#include <Modloader/app/structs/LinkSteamAccountRequest.h>
#include <Modloader/app/structs/LinkTwitchAccountRequest.h>
#include <Modloader/app/structs/LinkWindowsHelloAccountRequest.h>
#include <Modloader/app/structs/LinkXboxAccountRequest.h>
#include <Modloader/app/structs/ListUsersCharactersRequest.h>
#include <Modloader/app/structs/LoginWithAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/LoginWithCustomIDRequest.h>
#include <Modloader/app/structs/LoginWithEmailAddressRequest.h>
#include <Modloader/app/structs/LoginWithFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/LoginWithFacebookRequest.h>
#include <Modloader/app/structs/LoginWithGameCenterRequest.h>
#include <Modloader/app/structs/LoginWithGoogleAccountRequest.h>
#include <Modloader/app/structs/LoginWithIOSDeviceIDRequest.h>
#include <Modloader/app/structs/LoginWithKongregateRequest.h>
#include <Modloader/app/structs/LoginWithNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/LoginWithOpenIdConnectRequest.h>
#include <Modloader/app/structs/LoginWithPSNRequest.h>
#include <Modloader/app/structs/LoginWithPlayFabRequest.h>
#include <Modloader/app/structs/LoginWithSteamRequest.h>
#include <Modloader/app/structs/LoginWithTwitchRequest.h>
#include <Modloader/app/structs/LoginWithWindowsHelloRequest.h>
#include <Modloader/app/structs/LoginWithXboxRequest.h>
#include <Modloader/app/structs/MatchmakeRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OpenTradeRequest.h>
#include <Modloader/app/structs/PayForPurchaseRequest.h>
#include <Modloader/app/structs/PurchaseItemRequest.h>
#include <Modloader/app/structs/RedeemCouponRequest.h>
#include <Modloader/app/structs/RefreshPSNAuthTokenRequest.h>
#include <Modloader/app/structs/RegisterForIOSPushNotificationRequest.h>
#include <Modloader/app/structs/RegisterPlayFabUserRequest.h>
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest.h>
#include <Modloader/app/structs/RemoveContactEmailRequest.h>
#include <Modloader/app/structs/RemoveFriendRequest.h>
#include <Modloader/app/structs/RemoveGenericIDRequest.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest.h>
#include <Modloader/app/structs/ReportPlayerClientRequest.h>
#include <Modloader/app/structs/RestoreIOSPurchasesRequest.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest.h>
#include <Modloader/app/structs/SetFriendTagsRequest.h>
#include <Modloader/app/structs/SetPlayerSecretRequest.h>
#include <Modloader/app/structs/StartGameRequest.h>
#include <Modloader/app/structs/StartPurchaseRequest.h>
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest.h>
#include <Modloader/app/structs/UninkOpenIdConnectRequest.h>
#include <Modloader/app/structs/UnlinkAndroidDeviceIDRequest.h>
#include <Modloader/app/structs/UnlinkCustomIDRequest.h>
#include <Modloader/app/structs/UnlinkFacebookAccountRequest.h>
#include <Modloader/app/structs/UnlinkFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/UnlinkGameCenterAccountRequest.h>
#include <Modloader/app/structs/UnlinkGoogleAccountRequest.h>
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest.h>
#include <Modloader/app/structs/UnlinkKongregateAccountRequest.h>
#include <Modloader/app/structs/UnlinkNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/UnlinkPSNAccountRequest.h>
#include <Modloader/app/structs/UnlinkSteamAccountRequest.h>
#include <Modloader/app/structs/UnlinkTwitchAccountRequest.h>
#include <Modloader/app/structs/UnlinkWindowsHelloAccountRequest.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest.h>
#include <Modloader/app/structs/UnlockContainerItemRequest.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest.h>
#include <Modloader/app/structs/UpdateSharedGroupDataRequest.h>
#include <Modloader/app/structs/UpdateUserDataRequest.h>
#include <Modloader/app/structs/UpdateUserTitleDisplayNameRequest.h>
#include <Modloader/app/structs/ValidateAmazonReceiptRequest.h>
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest.h>
#include <Modloader/app/structs/ValidateIOSReceiptRequest.h>
#include <Modloader/app/structs/ValidateWindowsReceiptRequest.h>
#include <Modloader/app/structs/WriteClientCharacterEventRequest.h>
#include <Modloader/app/structs/WriteClientPlayerEventRequest.h>
#include <Modloader/app/structs/WriteTitleEventRequest.h>

namespace app::classes::PlayFab::PlayFabClientAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x017B4780, bool, IsClientLoggedIn, )
    IL2CPP_REGISTER_METHOD(0x017B48E0, void, ForgetAllCredentials, )
    IL2CPP_REGISTER_METHOD(
        0x017B4970,
        void,
        AcceptTrade,
        app::AcceptTradeRequest* request,
        app::Action_1_PlayFab_ClientModels_AcceptTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B4AE0,
        void,
        AddFriend,
        app::AddFriendRequest* request,
        app::Action_1_PlayFab_ClientModels_AddFriendResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B4C50,
        void,
        AddGenericID,
        app::AddGenericIDRequest* request,
        app::Action_1_PlayFab_ClientModels_AddGenericIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B4DC0,
        void,
        AddOrUpdateContactEmail,
        app::AddOrUpdateContactEmailRequest* request,
        app::Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B4F30,
        void,
        AddSharedGroupMembers,
        app::AddSharedGroupMembersRequest* request,
        app::Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B50A0,
        void,
        AddUsernamePassword,
        app::AddUsernamePasswordRequest* request,
        app::Action_1_PlayFab_ClientModels_AddUsernamePasswordResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5210,
        void,
        AddUserVirtualCurrency,
        app::AddUserVirtualCurrencyRequest* request,
        app::Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5380,
        void,
        AndroidDevicePushNotificationRegistration,
        app::AndroidDevicePushNotificationRegistrationRequest* request,
        app::Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B54F0,
        void,
        AttributeInstall,
        app::AttributeInstallRequest* request,
        app::Action_1_PlayFab_ClientModels_AttributeInstallResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5660,
        void,
        CancelTrade,
        app::CancelTradeRequest* request,
        app::Action_1_PlayFab_ClientModels_CancelTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B57D0,
        void,
        ConfirmPurchase,
        app::ConfirmPurchaseRequest* request,
        app::Action_1_PlayFab_ClientModels_ConfirmPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5940,
        void,
        ConsumeItem,
        app::ConsumeItemRequest* request,
        app::Action_1_PlayFab_ClientModels_ConsumeItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5AB0,
        void,
        ConsumePSNEntitlements,
        app::ConsumePSNEntitlementsRequest* request,
        app::Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5C20,
        void,
        ConsumeXboxEntitlements,
        app::ConsumeXboxEntitlementsRequest* request,
        app::Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5D90,
        void,
        CreateSharedGroup,
        app::CreateSharedGroupRequest* request,
        app::Action_1_PlayFab_ClientModels_CreateSharedGroupResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B5F00,
        void,
        ExecuteCloudScript_1,
        app::ExecuteCloudScriptRequest* request,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6070,
        void,
        GetAccountInfo,
        app::GetAccountInfoRequest* request,
        app::Action_1_PlayFab_ClientModels_GetAccountInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B61E0,
        void,
        GetAllUsersCharacters,
        app::ListUsersCharactersRequest* request,
        app::Action_1_PlayFab_ClientModels_ListUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6350,
        void,
        GetCatalogItems,
        app::GetCatalogItemsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCatalogItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B64C0,
        void,
        GetCharacterData,
        app::GetCharacterDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6630,
        void,
        GetCharacterInventory,
        app::GetCharacterInventoryRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCharacterInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B67A0,
        void,
        GetCharacterLeaderboard,
        app::GetCharacterLeaderboardRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCharacterLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6910,
        void,
        GetCharacterReadOnlyData,
        app::GetCharacterDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6A80,
        void,
        GetCharacterStatistics,
        app::GetCharacterStatisticsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6BF0,
        void,
        GetContentDownloadUrl,
        app::GetContentDownloadUrlRequest* request,
        app::Action_1_PlayFab_ClientModels_GetContentDownloadUrlResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6D60,
        void,
        GetCurrentGames,
        app::CurrentGamesRequest* request,
        app::Action_1_PlayFab_ClientModels_CurrentGamesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B6ED0,
        void,
        GetFriendLeaderboard,
        app::GetFriendLeaderboardRequest* request,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7040,
        void,
        GetFriendLeaderboardAroundPlayer,
        app::GetFriendLeaderboardAroundPlayerRequest* request,
        app::Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B71B0,
        void,
        GetFriendsList,
        app::GetFriendsListRequest* request,
        app::Action_1_PlayFab_ClientModels_GetFriendsListResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7320,
        void,
        GetGameServerRegions,
        app::GameServerRegionsRequest* request,
        app::Action_1_PlayFab_ClientModels_GameServerRegionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7490,
        void,
        GetLeaderboard,
        app::GetLeaderboardRequest* request,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7600,
        void,
        GetLeaderboardAroundCharacter,
        app::GetLeaderboardAroundCharacterRequest* request,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7770,
        void,
        GetLeaderboardAroundPlayer,
        app::GetLeaderboardAroundPlayerRequest* request,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B78E0,
        void,
        GetLeaderboardForUserCharacters,
        app::GetLeaderboardForUsersCharactersRequest* request,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7A50,
        void,
        GetPaymentToken,
        app::GetPaymentTokenRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPaymentTokenResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7BC0,
        void,
        GetPhotonAuthenticationToken,
        app::GetPhotonAuthenticationTokenRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7D30,
        void,
        GetPlayerCombinedInfo,
        app::GetPlayerCombinedInfoRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B7EA0,
        void,
        GetPlayerProfile,
        app::GetPlayerProfileRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerProfileResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8010,
        void,
        GetPlayerSegments,
        app::GetPlayerSegmentsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8180,
        void,
        GetPlayerStatistics,
        app::GetPlayerStatisticsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B82F0,
        void,
        GetPlayerStatisticVersions,
        app::GetPlayerStatisticVersionsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8460,
        void,
        GetPlayerTags,
        app::GetPlayerTagsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B85D0,
        void,
        GetPlayerTrades,
        app::GetPlayerTradesRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayerTradesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8740,
        void,
        GetPlayFabIDsFromFacebookIDs,
        app::GetPlayFabIDsFromFacebookIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B88B0,
        void,
        GetPlayFabIDsFromFacebookInstantGamesIds,
        app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8A20,
        void,
        GetPlayFabIDsFromGameCenterIDs,
        app::GetPlayFabIDsFromGameCenterIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8B90,
        void,
        GetPlayFabIDsFromGenericIDs,
        app::GetPlayFabIDsFromGenericIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8D00,
        void,
        GetPlayFabIDsFromGoogleIDs,
        app::GetPlayFabIDsFromGoogleIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8E70,
        void,
        GetPlayFabIDsFromKongregateIDs,
        app::GetPlayFabIDsFromKongregateIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B8FE0,
        void,
        GetPlayFabIDsFromNintendoSwitchDeviceIds,
        app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9150,
        void,
        GetPlayFabIDsFromPSNAccountIDs,
        app::GetPlayFabIDsFromPSNAccountIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B92C0,
        void,
        GetPlayFabIDsFromSteamIDs,
        app::GetPlayFabIDsFromSteamIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9430,
        void,
        GetPlayFabIDsFromTwitchIDs,
        app::GetPlayFabIDsFromTwitchIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B95A0,
        void,
        GetPlayFabIDsFromXboxLiveIDs,
        app::GetPlayFabIDsFromXboxLiveIDsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9710,
        void,
        GetPublisherData,
        app::GetPublisherDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9880,
        void,
        GetPurchase,
        app::GetPurchaseRequest* request,
        app::Action_1_PlayFab_ClientModels_GetPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B99F0,
        void,
        GetSharedGroupData,
        app::GetSharedGroupDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9B60,
        void,
        GetStoreItems,
        app::GetStoreItemsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetStoreItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9CD0,
        void,
        GetTime,
        app::GetTimeRequest* request,
        app::Action_1_PlayFab_ClientModels_GetTimeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9E40,
        void,
        GetTitleData,
        app::GetTitleDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017B9FB0,
        void,
        GetTitleNews,
        app::GetTitleNewsRequest* request,
        app::Action_1_PlayFab_ClientModels_GetTitleNewsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA120,
        void,
        GetTitlePublicKey,
        app::GetTitlePublicKeyRequest* request,
        app::Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA230,
        void,
        GetTradeStatus,
        app::GetTradeStatusRequest* request,
        app::Action_1_PlayFab_ClientModels_GetTradeStatusResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA3A0,
        void,
        GetUserData,
        app::GetUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA510,
        void,
        GetUserInventory,
        app::GetUserInventoryRequest* request,
        app::Action_1_PlayFab_ClientModels_GetUserInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA680,
        void,
        GetUserPublisherData,
        app::GetUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA7F0,
        void,
        GetUserPublisherReadOnlyData,
        app::GetUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BA960,
        void,
        GetUserReadOnlyData,
        app::GetUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BAAD0,
        void,
        GetWindowsHelloChallenge,
        app::GetWindowsHelloChallengeRequest* request,
        app::Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BABE0,
        void,
        GrantCharacterToUser,
        app::GrantCharacterToUserRequest* request,
        app::Action_1_PlayFab_ClientModels_GrantCharacterToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BAD50,
        void,
        LinkAndroidDeviceID,
        app::LinkAndroidDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BAEC0,
        void,
        LinkCustomID,
        app::LinkCustomIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkCustomIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB030,
        void,
        LinkFacebookAccount,
        app::LinkFacebookAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkFacebookAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB1A0,
        void,
        LinkFacebookInstantGamesId,
        app::LinkFacebookInstantGamesIdRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB310,
        void,
        LinkGameCenterAccount,
        app::LinkGameCenterAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkGameCenterAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB480,
        void,
        LinkGoogleAccount,
        app::LinkGoogleAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkGoogleAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB5F0,
        void,
        LinkIOSDeviceID,
        app::LinkIOSDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkIOSDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB760,
        void,
        LinkKongregate,
        app::LinkKongregateAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkKongregateAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BB8D0,
        void,
        LinkNintendoSwitchDeviceId,
        app::LinkNintendoSwitchDeviceIdRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BBA40,
        void,
        LinkOpenIdConnect,
        app::LinkOpenIdConnectRequest* request,
        app::Action_1_PlayFab_ClientModels_EmptyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BBBB0,
        void,
        LinkPSNAccount,
        app::LinkPSNAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkPSNAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BBD20,
        void,
        LinkSteamAccount,
        app::LinkSteamAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkSteamAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BBE90,
        void,
        LinkTwitch,
        app::LinkTwitchAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkTwitchAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC000,
        void,
        LinkWindowsHello,
        app::LinkWindowsHelloAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkWindowsHelloAccountResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC170,
        void,
        LinkXboxAccount,
        app::LinkXboxAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC2E0,
        void,
        LoginWithAndroidDeviceID,
        app::LoginWithAndroidDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC430,
        void,
        LoginWithCustomID,
        app::LoginWithCustomIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC580,
        void,
        LoginWithEmailAddress,
        app::LoginWithEmailAddressRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC6D0,
        void,
        LoginWithFacebook,
        app::LoginWithFacebookRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC820,
        void,
        LoginWithFacebookInstantGamesId,
        app::LoginWithFacebookInstantGamesIdRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BC970,
        void,
        LoginWithGameCenter,
        app::LoginWithGameCenterRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BCAC0,
        void,
        LoginWithGoogleAccount,
        app::LoginWithGoogleAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BCC10,
        void,
        LoginWithIOSDeviceID,
        app::LoginWithIOSDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BCD60,
        void,
        LoginWithKongregate,
        app::LoginWithKongregateRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BCEB0,
        void,
        LoginWithNintendoSwitchDeviceId,
        app::LoginWithNintendoSwitchDeviceIdRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD000,
        void,
        LoginWithOpenIdConnect,
        app::LoginWithOpenIdConnectRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD150,
        void,
        LoginWithPlayFab,
        app::LoginWithPlayFabRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD2A0,
        void,
        LoginWithPSN,
        app::LoginWithPSNRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD3F0,
        void,
        LoginWithSteam,
        app::LoginWithSteamRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD540,
        void,
        LoginWithTwitch,
        app::LoginWithTwitchRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD690,
        void,
        LoginWithWindowsHello,
        app::LoginWithWindowsHelloRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD7E0,
        void,
        LoginWithXbox,
        app::LoginWithXboxRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BD930,
        void,
        Matchmake,
        app::MatchmakeRequest* request,
        app::Action_1_PlayFab_ClientModels_MatchmakeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BDAA0,
        void,
        OpenTrade,
        app::OpenTradeRequest* request,
        app::Action_1_PlayFab_ClientModels_OpenTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BDC10,
        void,
        PayForPurchase,
        app::PayForPurchaseRequest* request,
        app::Action_1_PlayFab_ClientModels_PayForPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BDD80,
        void,
        PurchaseItem,
        app::PurchaseItemRequest* request,
        app::Action_1_PlayFab_ClientModels_PurchaseItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BDEF0,
        void,
        RedeemCoupon,
        app::RedeemCouponRequest* request,
        app::Action_1_PlayFab_ClientModels_RedeemCouponResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE060,
        void,
        RefreshPSNAuthToken,
        app::RefreshPSNAuthTokenRequest* request,
        app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE1D0,
        void,
        RegisterForIOSPushNotification,
        app::RegisterForIOSPushNotificationRequest* request,
        app::Action_1_PlayFab_ClientModels_RegisterForIOSPushNotificationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE340,
        void,
        RegisterPlayFabUser,
        app::RegisterPlayFabUserRequest* request,
        app::Action_1_PlayFab_ClientModels_RegisterPlayFabUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE490,
        void,
        RegisterWithWindowsHello,
        app::RegisterWithWindowsHelloRequest* request,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE5E0,
        void,
        RemoveContactEmail,
        app::RemoveContactEmailRequest* request,
        app::Action_1_PlayFab_ClientModels_RemoveContactEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE750,
        void,
        RemoveFriend,
        app::RemoveFriendRequest* request,
        app::Action_1_PlayFab_ClientModels_RemoveFriendResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BE8C0,
        void,
        RemoveGenericID,
        app::RemoveGenericIDRequest* request,
        app::Action_1_PlayFab_ClientModels_RemoveGenericIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BEA30,
        void,
        RemoveSharedGroupMembers,
        app::RemoveSharedGroupMembersRequest* request,
        app::Action_1_PlayFab_ClientModels_RemoveSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BEBA0,
        void,
        ReportDeviceInfo,
        app::DeviceInfoRequest* request,
        app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BED10,
        void,
        ReportPlayer,
        app::ReportPlayerClientRequest* request,
        app::Action_1_PlayFab_ClientModels_ReportPlayerClientResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BEE80,
        void,
        RestoreIOSPurchases,
        app::RestoreIOSPurchasesRequest* request,
        app::Action_1_PlayFab_ClientModels_RestoreIOSPurchasesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BEFF0,
        void,
        SendAccountRecoveryEmail,
        app::SendAccountRecoveryEmailRequest* request,
        app::Action_1_PlayFab_ClientModels_SendAccountRecoveryEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF100,
        void,
        SetFriendTags,
        app::SetFriendTagsRequest* request,
        app::Action_1_PlayFab_ClientModels_SetFriendTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF270,
        void,
        SetPlayerSecret,
        app::SetPlayerSecretRequest* request,
        app::Action_1_PlayFab_ClientModels_SetPlayerSecretResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF3E0,
        void,
        StartGame,
        app::StartGameRequest* request,
        app::Action_1_PlayFab_ClientModels_StartGameResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF550,
        void,
        StartPurchase,
        app::StartPurchaseRequest* request,
        app::Action_1_PlayFab_ClientModels_StartPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF6C0,
        void,
        SubtractUserVirtualCurrency,
        app::SubtractUserVirtualCurrencyRequest* request,
        app::Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF830,
        void,
        UnlinkAndroidDeviceID,
        app::UnlinkAndroidDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BF9A0,
        void,
        UnlinkCustomID,
        app::UnlinkCustomIDRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkCustomIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BFB10,
        void,
        UnlinkFacebookAccount,
        app::UnlinkFacebookAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkFacebookAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BFC80,
        void,
        UnlinkFacebookInstantGamesId,
        app::UnlinkFacebookInstantGamesIdRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BFDF0,
        void,
        UnlinkGameCenterAccount,
        app::UnlinkGameCenterAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkGameCenterAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017BFF60,
        void,
        UnlinkGoogleAccount,
        app::UnlinkGoogleAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkGoogleAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C00D0,
        void,
        UnlinkIOSDeviceID,
        app::UnlinkIOSDeviceIDRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkIOSDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0240,
        void,
        UnlinkKongregate,
        app::UnlinkKongregateAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkKongregateAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C03B0,
        void,
        UnlinkNintendoSwitchDeviceId,
        app::UnlinkNintendoSwitchDeviceIdRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0520,
        void,
        UnlinkOpenIdConnect,
        app::UninkOpenIdConnectRequest* request,
        app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0690,
        void,
        UnlinkPSNAccount,
        app::UnlinkPSNAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkPSNAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0800,
        void,
        UnlinkSteamAccount,
        app::UnlinkSteamAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkSteamAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0970,
        void,
        UnlinkTwitch,
        app::UnlinkTwitchAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkTwitchAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0AE0,
        void,
        UnlinkWindowsHello,
        app::UnlinkWindowsHelloAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0C50,
        void,
        UnlinkXboxAccount,
        app::UnlinkXboxAccountRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0DC0,
        void,
        UnlockContainerInstance,
        app::UnlockContainerInstanceRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C0F30,
        void,
        UnlockContainerItem,
        app::UnlockContainerItemRequest* request,
        app::Action_1_PlayFab_ClientModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C10A0,
        void,
        UpdateAvatarUrl,
        app::UpdateAvatarUrlRequest* request,
        app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1210,
        void,
        UpdateCharacterData,
        app::UpdateCharacterDataRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1380,
        void,
        UpdateCharacterStatistics,
        app::UpdateCharacterStatisticsRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C14F0,
        void,
        UpdatePlayerStatistics,
        app::UpdatePlayerStatisticsRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdatePlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1660,
        void,
        UpdateSharedGroupData,
        app::UpdateSharedGroupDataRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C17D0,
        void,
        UpdateUserData,
        app::UpdateUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1940,
        void,
        UpdateUserPublisherData,
        app::UpdateUserDataRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1AB0,
        void,
        UpdateUserTitleDisplayName,
        app::UpdateUserTitleDisplayNameRequest* request,
        app::Action_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1C20,
        void,
        ValidateAmazonIAPReceipt,
        app::ValidateAmazonReceiptRequest* request,
        app::Action_1_PlayFab_ClientModels_ValidateAmazonReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1D90,
        void,
        ValidateGooglePlayPurchase,
        app::ValidateGooglePlayPurchaseRequest* request,
        app::Action_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C1F00,
        void,
        ValidateIOSReceipt,
        app::ValidateIOSReceiptRequest* request,
        app::Action_1_PlayFab_ClientModels_ValidateIOSReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C2070,
        void,
        ValidateWindowsStoreReceipt,
        app::ValidateWindowsReceiptRequest* request,
        app::Action_1_PlayFab_ClientModels_ValidateWindowsReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C21E0,
        void,
        WriteCharacterEvent,
        app::WriteClientCharacterEventRequest* request,
        app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C2350,
        void,
        WritePlayerEvent,
        app::WriteClientPlayerEventRequest* request,
        app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x017C24C0,
        void,
        WriteTitleEvent,
        app::WriteTitleEventRequest* request,
        app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01554850,
        void,
        ExecuteCloudScript_2,
        app::ExecuteCloudScriptRequest* request,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x015545A0,
        void,
        ExecuteCloudScript_3,
        app::ExecuteCloudScriptRequest* request,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01554850,
        void,
        ExecuteCloudScript_4,
        app::ExecuteCloudScriptRequest* request,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01554850,
        void,
        ExecuteCloudScript_5,
        app::ExecuteCloudScriptRequest* request,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabClientAPI
