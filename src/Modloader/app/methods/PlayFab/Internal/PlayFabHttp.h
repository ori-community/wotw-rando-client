#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_.h>
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
#include <Modloader/app/structs/Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_AbortFileUploadsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_DeleteFilesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_GetFilesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_GetObjectsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_SetObjectsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_EventsModels_WriteEventsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_GetGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_InviteToGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_IsMemberResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_ListMembershipResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_LocalizationModels_GetLanguageListResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MatchmakerModels_AuthUserResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MatchmakerModels_StartGameResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MatchmakerModels_UserInfoResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetBuildResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AddPlayerTagResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_BanUsersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ConsumeItemResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_CreateSharedGroupResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeletePlayerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeregisterGameResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_EmptyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetAllSegmentsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCatalogItemsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetFriendsListResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerProfileResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerTagsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPublisherDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTimeResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTitleDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTitleNewsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserBansResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserInventoryResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_LinkXboxAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ListUsersCharactersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyItemUsesResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RedeemCouponResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RegisterGameResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RemovePlayerTagResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ReportPlayerServerResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeBansResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeInventoryResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendPushNotificationResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ServerLoginResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetPlayerSecretResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetPublisherDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetTitleDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UnlockContainerItemResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateBansResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateUserDataResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_WriteEventResponse_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/ApiProcessingEventType__Enum.h>
#include <Modloader/app/structs/AuthType__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IPlayFabLogger.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabHttp.h>
#include <Modloader/app/structs/PlayFabHttp_ApiProcessErrorEvent.h>
#include <Modloader/app/structs/PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_.h>
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#include <Modloader/app/structs/PlayFabResultCommon.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Internal::PlayFabHttp {
    IL2CPP_REGISTER_METHOD(0x01839A20, void, add_ApiProcessingEventHandler, app::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x01839B60, void, remove_ApiProcessingEventHandler, app::PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_* value)
    IL2CPP_REGISTER_METHOD(0x01839CA0, void, add_ApiProcessingErrorEventHandler, app::PlayFabHttp_ApiProcessErrorEvent* value)
    IL2CPP_REGISTER_METHOD(0x01839DE0, void, remove_ApiProcessingErrorEventHandler, app::PlayFabHttp_ApiProcessErrorEvent* value)
    IL2CPP_REGISTER_METHOD(0x01839F20, int32_t, GetPendingMessages, )
    IL2CPP_REGISTER_METHOD(0x0183A010, void, SetAuthKey, app::String* auth_key)
    IL2CPP_REGISTER_METHOD(0x0183A0E0, void, InitializeHttp, )
    IL2CPP_REGISTER_METHOD(0x0183A280, void, InitializeLogger, app::IPlayFabLogger* set_logger)
    IL2CPP_REGISTER_METHOD(0x0183A4E0, void, InitializeScreenTimeTracker, app::String* entity_id, app::String* entity_type, app::String* play_fab_user_id)
    IL2CPP_REGISTER_METHOD(0x0183A800, app::IEnumerator*, SendScreenTimeEvents, float seconds_between_batches)
    IL2CPP_REGISTER_METHOD(0x0183A960, void, SimpleGetCall, app::String* full_url, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback)
    IL2CPP_REGISTER_METHOD(
        0x0183AAF0,
        void,
        SimplePutCall,
        app::String* full_url,
        app::Byte__Array* payload,
        app::Action_1_Byte_* success_callback,
        app::Action_1_String_* error_callback
    )
    IL2CPP_REGISTER_METHOD(
        0x0183AC10,
        void,
        SimplePostCall,
        app::String* full_url,
        app::Byte__Array* payload,
        app::Action_1_Byte_* success_callback,
        app::Action_1_String_* error_callback
    )
    IL2CPP_REGISTER_METHOD(0x0183AD30, void, OnPlayFabApiResult, app::PlayFabHttp* this_ptr, app::PlayFabResultCommon* result)
    IL2CPP_REGISTER_METHOD(0x0183B1F0, void, OnEnable, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183B390, void, OnDisable, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183B530, void, OnDestroy, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183B750, void, OnApplicationFocus, app::PlayFabHttp* this_ptr, bool is_focused)
    IL2CPP_REGISTER_METHOD(0x0183B890, void, OnApplicationQuit, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183B9C0, void, Update, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183BD50, bool, IsClientLoggedIn, )
    IL2CPP_REGISTER_METHOD(0x0183BE40, void, ForgetAllCredentials, )
    IL2CPP_REGISTER_METHOD(0x0183BF40, app::PlayFabError*, GeneratePlayFabError, app::String* api_endpoint, app::String* json, app::Object* custom_data)
    IL2CPP_REGISTER_METHOD(0x0183C450, void, SendErrorEvent, app::PlayFabRequestCommon* request, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(
        0x0183C5A0,
        void,
        SendEvent,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::PlayFabResultCommon* result,
        app::ApiProcessingEventType__Enum event_type
    )
    IL2CPP_REGISTER_METHOD(0x0183C7F0, void, ClearAllEvents, )
    IL2CPP_REGISTER_METHOD(0x0183C8B0, void, InjectInUnityThread_1, app::PlayFabHttp* this_ptr, app::IEnumerator* x)
    IL2CPP_REGISTER_METHOD(0x0183C950, void, InjectInUnityThread_2, app::PlayFabHttp* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x0183C9F0, void, ctor, app::PlayFabHttp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183CC50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015536E0, void, SetHttp, app::Object* http_obj)
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_1,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_Object_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x015535B0,
        void,
        MakeApiCallWithFullUri,
        app::String* full_uri,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_Object_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553790,
        void,
        _MakeApiCall,
        app::String* api_endpoint,
        app::String* full_url,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_Object_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_2,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_EventsModels_TelemetryIngestionConfigResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_3,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_4,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AcceptTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_5,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AddFriendResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_6,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AddGenericIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_7,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AddOrUpdateContactEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_8,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AddSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_9,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AddUsernamePasswordResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_10,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_11,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AndroidDevicePushNotificationRegistrationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_12,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_AttributeInstallResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_13,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_CancelTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_14,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ConfirmPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_15,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ConsumeItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_16,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ConsumePSNEntitlementsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_17,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ConsumeXboxEntitlementsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_18,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_CreateSharedGroupResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_19,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_20,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetAccountInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_21,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ListUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_22,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetCatalogItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_23,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_24,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetCharacterInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_25,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetCharacterLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_26,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_27,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetContentDownloadUrlResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_28,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_CurrentGamesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_29,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_30,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetFriendLeaderboardAroundPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_31,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetFriendsListResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_32,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GameServerRegionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_33,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_34,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardAroundPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_35,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetLeaderboardForUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_36,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPaymentTokenResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_37,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPhotonAuthenticationTokenResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_38,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerCombinedInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_39,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerProfileResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_40,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_41,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_42,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerStatisticVersionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_43,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_44,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayerTradesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_45,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_46,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_47,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_48,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_49,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_50,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromKongregateIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_51,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_52,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_53,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromSteamIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_54,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromTwitchIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_55,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_56,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_57,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_58,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_59,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetStoreItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_60,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetTimeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_61,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_62,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetTitleNewsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_63,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetTitlePublicKeyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_64,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetTradeStatusResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_65,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_66,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetUserInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_67,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GetWindowsHelloChallengeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_68,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_GrantCharacterToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_69,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkAndroidDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_70,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkCustomIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_71,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkFacebookAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_72,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_73,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkGameCenterAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_74,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkGoogleAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_75,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkIOSDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_76,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkKongregateAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_77,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkNintendoSwitchDeviceIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_78,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_EmptyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_79,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkPSNAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_80,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkSteamAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_81,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkTwitchAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_82,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkWindowsHelloAccountResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_83,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_84,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_LoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_85,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_MatchmakeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_86,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_OpenTradeResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_87,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_PayForPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_88,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_PurchaseItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_89,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RedeemCouponResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_90,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_91,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RegisterForIOSPushNotificationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_92,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RegisterPlayFabUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_93,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RemoveContactEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_94,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RemoveFriendResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_95,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RemoveGenericIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_96,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RemoveSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_97,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ReportPlayerClientResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_98,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_RestoreIOSPurchasesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_99,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_SendAccountRecoveryEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_100,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_SetFriendTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_101,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_SetPlayerSecretResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_102,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_StartGameResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_103,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_StartPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_104,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkAndroidDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_105,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkCustomIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_106,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkFacebookAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_107,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_108,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkGameCenterAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_109,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkGoogleAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_110,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkIOSDeviceIDResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_111,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkKongregateAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_112,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkNintendoSwitchDeviceIdResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_113,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkPSNAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_114,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkSteamAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_115,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkTwitchAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_116,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkWindowsHelloAccountResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_117,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_118,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_119,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_120,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdateCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_121,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdatePlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_122,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdateSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_123,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_124,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_125,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ValidateAmazonReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_126,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ValidateGooglePlayPurchaseResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_127,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ValidateIOSReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_128,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_ValidateWindowsReceiptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_129,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ClientModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_130,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_CloudScriptModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_131,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_AbortFileUploadsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_132,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_DeleteFilesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_133,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_134,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_GetFilesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_135,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_GetObjectsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_136,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_137,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_DataModels_SetObjectsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_138,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_EventsModels_WriteEventsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_139,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_140,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ApplyToGroupResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_141,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_CreateGroupResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_142,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_CreateGroupRoleResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_143,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_GetGroupResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_144,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_InviteToGroupResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_145,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_IsMemberResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_146,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListGroupApplicationsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_147,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListGroupBlocksResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_148,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListGroupInvitationsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_149,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListGroupMembersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_150,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListMembershipResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_151,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_ListMembershipOpportunitiesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_152,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_UpdateGroupResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_153,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_GroupsModels_UpdateGroupRoleResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_154,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_LocalizationModels_GetLanguageListResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_155,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MatchmakerModels_AuthUserResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_156,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_157,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MatchmakerModels_PlayerLeftResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_158,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MatchmakerModels_StartGameResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_159,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MatchmakerModels_UserInfoResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_160,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_161,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_162,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithCustomContainerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_163,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CreateBuildWithManagedContainerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_164,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CreateMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_165,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_CreateRemoteUserResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_166,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_167,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_EnableMultiplayerServersForTitleResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_168,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetAssetUploadUrlResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_169,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetBuildResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_170,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_171,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_172,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_173,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_174,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetMultiplayerServerDetailsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_175,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetQueueStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_176,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_177,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_GetTitleEnabledForMultiplayerServersStatusResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_178,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_179,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListMultiplayerServersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_180,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListAssetSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_181,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListBuildSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_182,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListCertificateSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_183,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListContainerImagesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_184,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListContainerImageTagsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_185,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingQueuesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_186,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_187,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListQosServersResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_188,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_ListVirtualMachineSummariesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_189,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_RemoveMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_190,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_191,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_192,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_MultiplayerModels_SetMatchmakingQueueResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_193,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_194,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_195,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_196,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_197,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_198,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_199,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_200,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_201,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_AddPlayerTagResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_202,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_203,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_204,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_205,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_206,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_BanUsersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_207,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ConsumeItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_208,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_CreateSharedGroupResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_209,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_210,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_DeletePlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_211,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_DeregisterGameResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_212,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_213,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_214,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetAllSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_215,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ListUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_216,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetCatalogItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_217,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_218,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_219,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_220,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_221,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_222,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_223,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetFriendsListResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_224,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_225,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_226,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_227,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_228,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerProfileResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_229,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_230,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_231,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_232,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_233,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayerTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_234,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_235,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_236,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_237,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_238,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_239,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_240,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_241,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_242,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_243,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_244,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetTimeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_245,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_246,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetTitleNewsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_247,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_248,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetUserBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_249,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_250,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GetUserInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_251,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_252,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_253,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GrantItemsToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_254,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_255,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_LinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_256,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ServerLoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_257,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ModifyItemUsesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_258,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_259,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_260,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_261,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_262,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RedeemCouponResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_263,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_264,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_265,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RegisterGameResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_266,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RemovePlayerTagResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_267,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_268,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_ReportPlayerServerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_269,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_270,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RevokeBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_271,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RevokeInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_272,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_273,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_274,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_275,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SendPushNotificationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_276,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_277,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_278,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_279,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetPlayerSecretResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_280,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_281,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_SetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_282,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_283,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_284,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdateBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_285,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_286,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_287,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_288,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_289,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
    IL2CPP_REGISTER_METHOD(
        0x01553410,
        void,
        MakeApiCall_290,
        app::String* api_endpoint,
        app::PlayFabRequestCommon* request,
        app::AuthType__Enum auth_type,
        app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers,
        bool allow_queueing,
        app::PlayFabAuthenticationContext* authentication_context,
        app::PlayFabApiSettings* api_settings
    )
} // namespace app::classes::PlayFab::Internal::PlayFabHttp
