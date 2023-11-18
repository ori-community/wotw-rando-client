#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabClientInstanceAPI.h>
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
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
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

namespace app::classes::PlayFab::PlayFabClientInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabClientInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabClientInstanceAPI * this_ptr, app::PlayFabApiSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabClientInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabClientInstanceAPI * this_ptr, app::PlayFabApiSettings* settings, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabClientInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, (app::PlayFabClientInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017C2630, bool, IsClientLoggedIn, (app::PlayFabClientInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabClientInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017C2650, void, AcceptTrade, (app::PlayFabClientInstanceAPI * this_ptr, app::AcceptTradeRequest* request, app::Action_1_PlayFab_ClientModels_AcceptTradeResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C2860, void, AddFriend, (app::PlayFabClientInstanceAPI * this_ptr, app::AddFriendRequest* request, app::Action_1_PlayFab_ClientModels_AddFriendResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C2A70, void, AddGenericID, (app::PlayFabClientInstanceAPI * this_ptr, app::AddGenericIDRequest* request, app::Action_1_PlayFab_ClientModels_AddGenericIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C2C80, void, AddOrUpdateContactEmail, (app::PlayFabClientInstanceAPI * this_ptr, app::AddOrUpdateContactEmailRequest* request, app::Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C2E90, void, AddSharedGroupMembers, (app::PlayFabClientInstanceAPI * this_ptr, app::AddSharedGroupMembersRequest* request, app::Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C30A0, void, AddUsernamePassword, (app::PlayFabClientInstanceAPI * this_ptr, app::AddUsernamePasswordRequest* request, app::Action_1_PlayFab_ClientModels_AddUsernamePasswordResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C32B0, void, AddUserVirtualCurrency, (app::PlayFabClientInstanceAPI * this_ptr, app::AddUserVirtualCurrencyRequest* request, app::Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C34C0, void, AndroidDevicePushNotificationRegistration, (app::PlayFabClientInstanceAPI * this_ptr, app::AndroidDevicePushNotificationRegistrationRequest* request, app::Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C36D0, void, AttributeInstall, (app::PlayFabClientInstanceAPI * this_ptr, app::AttributeInstallRequest* request, app::Action_1_PlayFab_ClientModels_AttributeInstallResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C38E0, void, CancelTrade, (app::PlayFabClientInstanceAPI * this_ptr, app::CancelTradeRequest* request, app::Action_1_PlayFab_ClientModels_CancelTradeResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C3AF0, void, ConfirmPurchase, (app::PlayFabClientInstanceAPI * this_ptr, app::ConfirmPurchaseRequest* request, app::Action_1_PlayFab_ClientModels_ConfirmPurchaseResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C3D00, void, ConsumeItem, (app::PlayFabClientInstanceAPI * this_ptr, app::ConsumeItemRequest* request, app::Action_1_PlayFab_ClientModels_ConsumeItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C3F10, void, ConsumePSNEntitlements, (app::PlayFabClientInstanceAPI * this_ptr, app::ConsumePSNEntitlementsRequest* request, app::Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4120, void, ConsumeXboxEntitlements, (app::PlayFabClientInstanceAPI * this_ptr, app::ConsumeXboxEntitlementsRequest* request, app::Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4330, void, CreateSharedGroup, (app::PlayFabClientInstanceAPI * this_ptr, app::CreateSharedGroupRequest* request, app::Action_1_PlayFab_ClientModels_CreateSharedGroupResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4540, void, ExecuteCloudScript_1, (app::PlayFabClientInstanceAPI * this_ptr, app::ExecuteCloudScriptRequest* request, app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4750, void, GetAccountInfo, (app::PlayFabClientInstanceAPI * this_ptr, app::GetAccountInfoRequest* request, app::Action_1_PlayFab_ClientModels_GetAccountInfoResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4960, void, GetAllUsersCharacters, (app::PlayFabClientInstanceAPI * this_ptr, app::ListUsersCharactersRequest* request, app::Action_1_PlayFab_ClientModels_ListUsersCharactersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4B70, void, GetCatalogItems, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCatalogItemsRequest* request, app::Action_1_PlayFab_ClientModels_GetCatalogItemsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4D80, void, GetCharacterData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCharacterDataRequest* request, app::Action_1_PlayFab_ClientModels_GetCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C4F90, void, GetCharacterInventory, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCharacterInventoryRequest* request, app::Action_1_PlayFab_ClientModels_GetCharacterInventoryResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C51A0, void, GetCharacterLeaderboard, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCharacterLeaderboardRequest* request, app::Action_1_PlayFab_ClientModels_GetCharacterLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C53B0, void, GetCharacterReadOnlyData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCharacterDataRequest* request, app::Action_1_PlayFab_ClientModels_GetCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C55C0, void, GetCharacterStatistics, (app::PlayFabClientInstanceAPI * this_ptr, app::GetCharacterStatisticsRequest* request, app::Action_1_PlayFab_ClientModels_GetCharacterStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C57D0, void, GetContentDownloadUrl, (app::PlayFabClientInstanceAPI * this_ptr, app::GetContentDownloadUrlRequest* request, app::Action_1_PlayFab_ClientModels_GetContentDownloadUrlResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C59E0, void, GetCurrentGames, (app::PlayFabClientInstanceAPI * this_ptr, app::CurrentGamesRequest* request, app::Action_1_PlayFab_ClientModels_CurrentGamesResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C5BF0, void, GetFriendLeaderboard, (app::PlayFabClientInstanceAPI * this_ptr, app::GetFriendLeaderboardRequest* request, app::Action_1_PlayFab_ClientModels_GetLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C5E00, void, GetFriendLeaderboardAroundPlayer, (app::PlayFabClientInstanceAPI * this_ptr, app::GetFriendLeaderboardAroundPlayerRequest* request, app::Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6010, void, GetFriendsList, (app::PlayFabClientInstanceAPI * this_ptr, app::GetFriendsListRequest* request, app::Action_1_PlayFab_ClientModels_GetFriendsListResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6220, void, GetGameServerRegions, (app::PlayFabClientInstanceAPI * this_ptr, app::GameServerRegionsRequest* request, app::Action_1_PlayFab_ClientModels_GameServerRegionsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6430, void, GetLeaderboard, (app::PlayFabClientInstanceAPI * this_ptr, app::GetLeaderboardRequest* request, app::Action_1_PlayFab_ClientModels_GetLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6640, void, GetLeaderboardAroundCharacter, (app::PlayFabClientInstanceAPI * this_ptr, app::GetLeaderboardAroundCharacterRequest* request, app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6850, void, GetLeaderboardAroundPlayer, (app::PlayFabClientInstanceAPI * this_ptr, app::GetLeaderboardAroundPlayerRequest* request, app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6A60, void, GetLeaderboardForUserCharacters, (app::PlayFabClientInstanceAPI * this_ptr, app::GetLeaderboardForUsersCharactersRequest* request, app::Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6C70, void, GetPaymentToken, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPaymentTokenRequest* request, app::Action_1_PlayFab_ClientModels_GetPaymentTokenResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C6E80, void, GetPhotonAuthenticationToken, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPhotonAuthenticationTokenRequest* request, app::Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C7090, void, GetPlayerCombinedInfo, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerCombinedInfoRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C72A0, void, GetPlayerProfile, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerProfileRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerProfileResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C74B0, void, GetPlayerSegments, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerSegmentsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C76C0, void, GetPlayerStatistics, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerStatisticsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C78D0, void, GetPlayerStatisticVersions, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerStatisticVersionsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C7AE0, void, GetPlayerTags, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerTagsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerTagsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C7CF0, void, GetPlayerTrades, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayerTradesRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayerTradesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C7F00, void, GetPlayFabIDsFromFacebookIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromFacebookIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8110, void, GetPlayFabIDsFromFacebookInstantGamesIds, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8320, void, GetPlayFabIDsFromGameCenterIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromGameCenterIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8530, void, GetPlayFabIDsFromGenericIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromGenericIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8740, void, GetPlayFabIDsFromGoogleIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromGoogleIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8950, void, GetPlayFabIDsFromKongregateIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromKongregateIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8B60, void, GetPlayFabIDsFromNintendoSwitchDeviceIds, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8D70, void, GetPlayFabIDsFromPSNAccountIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromPSNAccountIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C8F80, void, GetPlayFabIDsFromSteamIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromSteamIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C9190, void, GetPlayFabIDsFromTwitchIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromTwitchIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C93A0, void, GetPlayFabIDsFromXboxLiveIDs, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPlayFabIDsFromXboxLiveIDsRequest* request, app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C95B0, void, GetPublisherData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPublisherDataRequest* request, app::Action_1_PlayFab_ClientModels_GetPublisherDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C97C0, void, GetPurchase, (app::PlayFabClientInstanceAPI * this_ptr, app::GetPurchaseRequest* request, app::Action_1_PlayFab_ClientModels_GetPurchaseResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C99D0, void, GetSharedGroupData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetSharedGroupDataRequest* request, app::Action_1_PlayFab_ClientModels_GetSharedGroupDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C9BE0, void, GetStoreItems, (app::PlayFabClientInstanceAPI * this_ptr, app::GetStoreItemsRequest* request, app::Action_1_PlayFab_ClientModels_GetStoreItemsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017C9DF0, void, GetTime, (app::PlayFabClientInstanceAPI * this_ptr, app::GetTimeRequest* request, app::Action_1_PlayFab_ClientModels_GetTimeResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA000, void, GetTitleData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetTitleDataRequest* request, app::Action_1_PlayFab_ClientModels_GetTitleDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA210, void, GetTitleNews, (app::PlayFabClientInstanceAPI * this_ptr, app::GetTitleNewsRequest* request, app::Action_1_PlayFab_ClientModels_GetTitleNewsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA420, void, GetTitlePublicKey, (app::PlayFabClientInstanceAPI * this_ptr, app::GetTitlePublicKeyRequest* request, app::Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA540, void, GetTradeStatus, (app::PlayFabClientInstanceAPI * this_ptr, app::GetTradeStatusRequest* request, app::Action_1_PlayFab_ClientModels_GetTradeStatusResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA750, void, GetUserData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetUserDataRequest* request, app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CA960, void, GetUserInventory, (app::PlayFabClientInstanceAPI * this_ptr, app::GetUserInventoryRequest* request, app::Action_1_PlayFab_ClientModels_GetUserInventoryResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CAB70, void, GetUserPublisherData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetUserDataRequest* request, app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CAD80, void, GetUserPublisherReadOnlyData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetUserDataRequest* request, app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CAF90, void, GetUserReadOnlyData, (app::PlayFabClientInstanceAPI * this_ptr, app::GetUserDataRequest* request, app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CB1A0, void, GetWindowsHelloChallenge, (app::PlayFabClientInstanceAPI * this_ptr, app::GetWindowsHelloChallengeRequest* request, app::Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CB2C0, void, GrantCharacterToUser, (app::PlayFabClientInstanceAPI * this_ptr, app::GrantCharacterToUserRequest* request, app::Action_1_PlayFab_ClientModels_GrantCharacterToUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CB4D0, void, LinkAndroidDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkAndroidDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CB6E0, void, LinkCustomID, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkCustomIDRequest* request, app::Action_1_PlayFab_ClientModels_LinkCustomIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CB8F0, void, LinkFacebookAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkFacebookAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkFacebookAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CBB00, void, LinkFacebookInstantGamesId, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkFacebookInstantGamesIdRequest* request, app::Action_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CBD10, void, LinkGameCenterAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkGameCenterAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkGameCenterAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CBF20, void, LinkGoogleAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkGoogleAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkGoogleAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CC130, void, LinkIOSDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkIOSDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_LinkIOSDeviceIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CC340, void, LinkKongregate, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkKongregateAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkKongregateAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CC550, void, LinkNintendoSwitchDeviceId, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkNintendoSwitchDeviceIdRequest* request, app::Action_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CC760, void, LinkOpenIdConnect, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkOpenIdConnectRequest* request, app::Action_1_PlayFab_ClientModels_EmptyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CC970, void, LinkPSNAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkPSNAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkPSNAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CCB80, void, LinkSteamAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkSteamAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkSteamAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CCD90, void, LinkTwitch, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkTwitchAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkTwitchAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CCFA0, void, LinkWindowsHello, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkWindowsHelloAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkWindowsHelloAccountResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD1B0, void, LinkXboxAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LinkXboxAccountRequest* request, app::Action_1_PlayFab_ClientModels_LinkXboxAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD3C0, void, LoginWithAndroidDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithAndroidDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD520, void, LoginWithCustomID, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithCustomIDRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD680, void, LoginWithEmailAddress, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithEmailAddressRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD7E0, void, LoginWithFacebook, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithFacebookRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CD940, void, LoginWithFacebookInstantGamesId, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithFacebookInstantGamesIdRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CDAA0, void, LoginWithGameCenter, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithGameCenterRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CDC00, void, LoginWithGoogleAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithGoogleAccountRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CDD60, void, LoginWithIOSDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithIOSDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CDEC0, void, LoginWithKongregate, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithKongregateRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE020, void, LoginWithNintendoSwitchDeviceId, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithNintendoSwitchDeviceIdRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE180, void, LoginWithOpenIdConnect, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithOpenIdConnectRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE2E0, void, LoginWithPlayFab, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithPlayFabRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE440, void, LoginWithPSN, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithPSNRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE5A0, void, LoginWithSteam, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithSteamRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE700, void, LoginWithTwitch, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithTwitchRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE860, void, LoginWithWindowsHello, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithWindowsHelloRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CE9C0, void, LoginWithXbox, (app::PlayFabClientInstanceAPI * this_ptr, app::LoginWithXboxRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CEB20, void, Matchmake, (app::PlayFabClientInstanceAPI * this_ptr, app::MatchmakeRequest* request, app::Action_1_PlayFab_ClientModels_MatchmakeResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CED30, void, OpenTrade, (app::PlayFabClientInstanceAPI * this_ptr, app::OpenTradeRequest* request, app::Action_1_PlayFab_ClientModels_OpenTradeResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CEF40, void, PayForPurchase, (app::PlayFabClientInstanceAPI * this_ptr, app::PayForPurchaseRequest* request, app::Action_1_PlayFab_ClientModels_PayForPurchaseResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CF150, void, PurchaseItem, (app::PlayFabClientInstanceAPI * this_ptr, app::PurchaseItemRequest* request, app::Action_1_PlayFab_ClientModels_PurchaseItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CF360, void, RedeemCoupon, (app::PlayFabClientInstanceAPI * this_ptr, app::RedeemCouponRequest* request, app::Action_1_PlayFab_ClientModels_RedeemCouponResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CF570, void, RefreshPSNAuthToken, (app::PlayFabClientInstanceAPI * this_ptr, app::RefreshPSNAuthTokenRequest* request, app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CF780, void, RegisterForIOSPushNotification, (app::PlayFabClientInstanceAPI * this_ptr, app::RegisterForIOSPushNotificationRequest* request, app::Action_1_PlayFab_ClientModels_RegisterForIOSPushNotificationResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CF990, void, RegisterPlayFabUser, (app::PlayFabClientInstanceAPI * this_ptr, app::RegisterPlayFabUserRequest* request, app::Action_1_PlayFab_ClientModels_RegisterPlayFabUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CFAF0, void, RegisterWithWindowsHello, (app::PlayFabClientInstanceAPI * this_ptr, app::RegisterWithWindowsHelloRequest* request, app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CFC50, void, RemoveContactEmail, (app::PlayFabClientInstanceAPI * this_ptr, app::RemoveContactEmailRequest* request, app::Action_1_PlayFab_ClientModels_RemoveContactEmailResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017CFE60, void, RemoveFriend, (app::PlayFabClientInstanceAPI * this_ptr, app::RemoveFriendRequest* request, app::Action_1_PlayFab_ClientModels_RemoveFriendResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0070, void, RemoveGenericID, (app::PlayFabClientInstanceAPI * this_ptr, app::RemoveGenericIDRequest* request, app::Action_1_PlayFab_ClientModels_RemoveGenericIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0280, void, RemoveSharedGroupMembers, (app::PlayFabClientInstanceAPI * this_ptr, app::RemoveSharedGroupMembersRequest* request, app::Action_1_PlayFab_ClientModels_RemoveSharedGroupMembersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0490, void, ReportDeviceInfo, (app::PlayFabClientInstanceAPI * this_ptr, app::DeviceInfoRequest* request, app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D06A0, void, ReportPlayer, (app::PlayFabClientInstanceAPI * this_ptr, app::ReportPlayerClientRequest* request, app::Action_1_PlayFab_ClientModels_ReportPlayerClientResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D08B0, void, RestoreIOSPurchases, (app::PlayFabClientInstanceAPI * this_ptr, app::RestoreIOSPurchasesRequest* request, app::Action_1_PlayFab_ClientModels_RestoreIOSPurchasesResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0AC0, void, SendAccountRecoveryEmail, (app::PlayFabClientInstanceAPI * this_ptr, app::SendAccountRecoveryEmailRequest* request, app::Action_1_PlayFab_ClientModels_SendAccountRecoveryEmailResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0BE0, void, SetFriendTags, (app::PlayFabClientInstanceAPI * this_ptr, app::SetFriendTagsRequest* request, app::Action_1_PlayFab_ClientModels_SetFriendTagsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D0DF0, void, SetPlayerSecret, (app::PlayFabClientInstanceAPI * this_ptr, app::SetPlayerSecretRequest* request, app::Action_1_PlayFab_ClientModels_SetPlayerSecretResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1000, void, StartGame, (app::PlayFabClientInstanceAPI * this_ptr, app::StartGameRequest* request, app::Action_1_PlayFab_ClientModels_StartGameResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1210, void, StartPurchase, (app::PlayFabClientInstanceAPI * this_ptr, app::StartPurchaseRequest* request, app::Action_1_PlayFab_ClientModels_StartPurchaseResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1420, void, SubtractUserVirtualCurrency, (app::PlayFabClientInstanceAPI * this_ptr, app::SubtractUserVirtualCurrencyRequest* request, app::Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1630, void, UnlinkAndroidDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkAndroidDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1840, void, UnlinkCustomID, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkCustomIDRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkCustomIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1A50, void, UnlinkFacebookAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkFacebookAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkFacebookAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1C60, void, UnlinkFacebookInstantGamesId, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkFacebookInstantGamesIdRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D1E70, void, UnlinkGameCenterAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkGameCenterAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkGameCenterAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D2080, void, UnlinkGoogleAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkGoogleAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkGoogleAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D2290, void, UnlinkIOSDeviceID, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkIOSDeviceIDRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkIOSDeviceIDResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D24A0, void, UnlinkKongregate, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkKongregateAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkKongregateAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D26B0, void, UnlinkNintendoSwitchDeviceId, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkNintendoSwitchDeviceIdRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D28C0, void, UnlinkOpenIdConnect, (app::PlayFabClientInstanceAPI * this_ptr, app::UninkOpenIdConnectRequest* request, app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D2AD0, void, UnlinkPSNAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkPSNAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkPSNAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D2CE0, void, UnlinkSteamAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkSteamAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkSteamAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D2EF0, void, UnlinkTwitch, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkTwitchAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkTwitchAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3100, void, UnlinkWindowsHello, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkWindowsHelloAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3310, void, UnlinkXboxAccount, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlinkXboxAccountRequest* request, app::Action_1_PlayFab_ClientModels_UnlinkXboxAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3520, void, UnlockContainerInstance, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlockContainerInstanceRequest* request, app::Action_1_PlayFab_ClientModels_UnlockContainerItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3730, void, UnlockContainerItem, (app::PlayFabClientInstanceAPI * this_ptr, app::UnlockContainerItemRequest* request, app::Action_1_PlayFab_ClientModels_UnlockContainerItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3940, void, UpdateAvatarUrl, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateAvatarUrlRequest* request, app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3B50, void, UpdateCharacterData, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateCharacterDataRequest* request, app::Action_1_PlayFab_ClientModels_UpdateCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3D60, void, UpdateCharacterStatistics, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateCharacterStatisticsRequest* request, app::Action_1_PlayFab_ClientModels_UpdateCharacterStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D3F70, void, UpdatePlayerStatistics, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdatePlayerStatisticsRequest* request, app::Action_1_PlayFab_ClientModels_UpdatePlayerStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D4180, void, UpdateSharedGroupData, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateSharedGroupDataRequest* request, app::Action_1_PlayFab_ClientModels_UpdateSharedGroupDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D4390, void, UpdateUserData, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateUserDataRequest* request, app::Action_1_PlayFab_ClientModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D45A0, void, UpdateUserPublisherData, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateUserDataRequest* request, app::Action_1_PlayFab_ClientModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D47B0, void, UpdateUserTitleDisplayName, (app::PlayFabClientInstanceAPI * this_ptr, app::UpdateUserTitleDisplayNameRequest* request, app::Action_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D49C0, void, ValidateAmazonIAPReceipt, (app::PlayFabClientInstanceAPI * this_ptr, app::ValidateAmazonReceiptRequest* request, app::Action_1_PlayFab_ClientModels_ValidateAmazonReceiptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D4BD0, void, ValidateGooglePlayPurchase, (app::PlayFabClientInstanceAPI * this_ptr, app::ValidateGooglePlayPurchaseRequest* request, app::Action_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D4DE0, void, ValidateIOSReceipt, (app::PlayFabClientInstanceAPI * this_ptr, app::ValidateIOSReceiptRequest* request, app::Action_1_PlayFab_ClientModels_ValidateIOSReceiptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D4FF0, void, ValidateWindowsStoreReceipt, (app::PlayFabClientInstanceAPI * this_ptr, app::ValidateWindowsReceiptRequest* request, app::Action_1_PlayFab_ClientModels_ValidateWindowsReceiptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D5200, void, WriteCharacterEvent, (app::PlayFabClientInstanceAPI * this_ptr, app::WriteClientCharacterEventRequest* request, app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D5410, void, WritePlayerEvent, (app::PlayFabClientInstanceAPI * this_ptr, app::WriteClientPlayerEventRequest* request, app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x017D5620, void, WriteTitleEvent, (app::PlayFabClientInstanceAPI * this_ptr, app::WriteTitleEventRequest* request, app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01554B00, void, ExecuteCloudScript_2, (app::PlayFabClientInstanceAPI * this_ptr, app::ExecuteCloudScriptRequest* request, app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabClientInstanceAPI
