#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddCharacterVirtualCurrencyRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/AddFriendRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_EmptyResponse_.h>
#include <Modloader/app/structs/AddPlayerTagRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AddPlayerTagResult_.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_.h>
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_.h>
#include <Modloader/app/structs/AwardSteamAchievementRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_.h>
#include <Modloader/app/structs/BanUsersRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_BanUsersResult_.h>
#include <Modloader/app/structs/ConsumeItemRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ConsumeItemResult_.h>
#include <Modloader/app/structs/CreateSharedGroupRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_CreateSharedGroupResult_.h>
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_.h>
#include <Modloader/app/structs/DeletePlayerRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeletePlayerResult_.h>
#include <Modloader/app/structs/DeleteSharedGroupRequest.h>
#include <Modloader/app/structs/DeregisterGameRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_DeregisterGameResponse_.h>
#include <Modloader/app/structs/EvaluateRandomResultTableRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_.h>
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_.h>
#include <Modloader/app/structs/GetAllSegmentsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetAllSegmentsResult_.h>
#include <Modloader/app/structs/ListUsersCharactersRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ListUsersCharactersResult_.h>
#include <Modloader/app/structs/GetCatalogItemsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCatalogItemsResult_.h>
#include <Modloader/app/structs/GetCharacterDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterDataResult_.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_.h>
#include <Modloader/app/structs/GetCharacterStatisticsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_.h>
#include <Modloader/app/structs/GetContentDownloadUrlRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardResult_.h>
#include <Modloader/app/structs/GetFriendsListRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetFriendsListResult_.h>
#include <Modloader/app/structs/GetLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_.h>
#include <Modloader/app/structs/GetPlayerProfileRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerProfileResult_.h>
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_.h>
#include <Modloader/app/structs/GetPlayersInSegmentRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_.h>
#include <Modloader/app/structs/GetPlayerTagsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayerTagsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_.h>
#include <Modloader/app/structs/GetPublisherDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetPublisherDataResult_.h>
#include <Modloader/app/structs/GetRandomResultTablesRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_.h>
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_.h>
#include <Modloader/app/structs/GetTimeRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTimeResult_.h>
#include <Modloader/app/structs/GetTitleDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTitleDataResult_.h>
#include <Modloader/app/structs/GetTitleNewsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetTitleNewsResult_.h>
#include <Modloader/app/structs/GetUserAccountInfoRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_.h>
#include <Modloader/app/structs/GetUserBansRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserBansResult_.h>
#include <Modloader/app/structs/GetUserDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserDataResult_.h>
#include <Modloader/app/structs/GetUserInventoryRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GetUserInventoryResult_.h>
#include <Modloader/app/structs/GrantCharacterToUserRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_.h>
#include <Modloader/app/structs/GrantItemsToCharacterRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_.h>
#include <Modloader/app/structs/GrantItemsToUserRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToUserResult_.h>
#include <Modloader/app/structs/GrantItemsToUsersRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_.h>
#include <Modloader/app/structs/LinkXboxAccountRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_LinkXboxAccountResult_.h>
#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ServerLoginResult_.h>
#include <Modloader/app/structs/LoginWithXboxRequest_1.h>
#include <Modloader/app/structs/ModifyItemUsesRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ModifyItemUsesResult_.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_.h>
#include <Modloader/app/structs/MoveItemToCharacterFromUserRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_.h>
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_.h>
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_.h>
#include <Modloader/app/structs/RedeemCouponRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RedeemCouponResult_.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_.h>
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_.h>
#include <Modloader/app/structs/RegisterGameRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RegisterGameResponse_.h>
#include <Modloader/app/structs/RemoveFriendRequest_1.h>
#include <Modloader/app/structs/RemovePlayerTagRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RemovePlayerTagResult_.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_.h>
#include <Modloader/app/structs/ReportPlayerServerRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_ReportPlayerServerResult_.h>
#include <Modloader/app/structs/RevokeAllBansForUserRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_.h>
#include <Modloader/app/structs/RevokeBansRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeBansResult_.h>
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeInventoryResult_.h>
#include <Modloader/app/structs/RevokeInventoryItemsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_.h>
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_.h>
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_.h>
#include <Modloader/app/structs/SendPushNotificationRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SendPushNotificationResult_.h>
#include <Modloader/app/structs/SetFriendTagsRequest_1.h>
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_.h>
#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_.h>
#include <Modloader/app/structs/SetPlayerSecretRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetPlayerSecretResult_.h>
#include <Modloader/app/structs/SetPublisherDataRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetPublisherDataResult_.h>
#include <Modloader/app/structs/SetTitleDataRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_SetTitleDataResult_.h>
#include <Modloader/app/structs/SubtractCharacterVirtualCurrencyRequest.h>
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UnlockContainerItemResult_.h>
#include <Modloader/app/structs/UnlockContainerItemRequest_1.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest_1.h>
#include <Modloader/app/structs/UpdateBansRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateBansResult_.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_.h>
#include <Modloader/app/structs/UpdateSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_.h>
#include <Modloader/app/structs/UpdateUserDataRequest_1.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_UpdateUserDataResult_.h>
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>
#include <Modloader/app/structs/UpdateUserInventoryItemDataRequest.h>
#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_ServerModels_WriteEventResponse_.h>
#include <Modloader/app/structs/WriteServerPlayerEventRequest.h>
#include <Modloader/app/structs/WriteTitleEventRequest_1.h>

namespace app::classes::PlayFab::PlayFabServerAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A34EB0, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A34F40, void, AddCharacterVirtualCurrency, (app::AddCharacterVirtualCurrencyRequest * request, app::Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35050, void, AddFriend, (app::AddFriendRequest_1 * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35160, void, AddPlayerTag, (app::AddPlayerTagRequest * request, app::Action_1_PlayFab_ServerModels_AddPlayerTagResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35270, void, AddSharedGroupMembers, (app::AddSharedGroupMembersRequest_1 * request, app::Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35380, void, AddUserVirtualCurrency, (app::AddUserVirtualCurrencyRequest_1 * request, app::Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35490, void, AuthenticateSessionTicket, (app::AuthenticateSessionTicketRequest * request, app::Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A355A0, void, AwardSteamAchievement, (app::AwardSteamAchievementRequest * request, app::Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A356B0, void, BanUsers, (app::BanUsersRequest * request, app::Action_1_PlayFab_ServerModels_BanUsersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A357C0, void, ConsumeItem, (app::ConsumeItemRequest_1 * request, app::Action_1_PlayFab_ServerModels_ConsumeItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A358D0, void, CreateSharedGroup, (app::CreateSharedGroupRequest_1 * request, app::Action_1_PlayFab_ServerModels_CreateSharedGroupResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A359E0, void, DeleteCharacterFromUser, (app::DeleteCharacterFromUserRequest * request, app::Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35AF0, void, DeletePlayer, (app::DeletePlayerRequest * request, app::Action_1_PlayFab_ServerModels_DeletePlayerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35C00, void, DeleteSharedGroup, (app::DeleteSharedGroupRequest * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35D10, void, DeregisterGame, (app::DeregisterGameRequest * request, app::Action_1_PlayFab_ServerModels_DeregisterGameResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35E20, void, EvaluateRandomResultTable, (app::EvaluateRandomResultTableRequest * request, app::Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A35F30, void, ExecuteCloudScript_1, (app::ExecuteCloudScriptServerRequest * request, app::Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36040, void, GetAllSegments, (app::GetAllSegmentsRequest * request, app::Action_1_PlayFab_ServerModels_GetAllSegmentsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36150, void, GetAllUsersCharacters, (app::ListUsersCharactersRequest_1 * request, app::Action_1_PlayFab_ServerModels_ListUsersCharactersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36260, void, GetCatalogItems, (app::GetCatalogItemsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCatalogItemsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36370, void, GetCharacterData, (app::GetCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36480, void, GetCharacterInternalData, (app::GetCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36590, void, GetCharacterInventory, (app::GetCharacterInventoryRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A366A0, void, GetCharacterLeaderboard, (app::GetCharacterLeaderboardRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A367B0, void, GetCharacterReadOnlyData, (app::GetCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A368C0, void, GetCharacterStatistics, (app::GetCharacterStatisticsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A369D0, void, GetContentDownloadUrl, (app::GetContentDownloadUrlRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36AE0, void, GetFriendLeaderboard, (app::GetFriendLeaderboardRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36BF0, void, GetFriendsList, (app::GetFriendsListRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetFriendsListResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36D00, void, GetLeaderboard, (app::GetLeaderboardRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetLeaderboardResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36E10, void, GetLeaderboardAroundCharacter, (app::GetLeaderboardAroundCharacterRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A36F20, void, GetLeaderboardAroundUser, (app::GetLeaderboardAroundUserRequest * request, app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37030, void, GetLeaderboardForUserCharacters, (app::GetLeaderboardForUsersCharactersRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37140, void, GetPlayerCombinedInfo, (app::GetPlayerCombinedInfoRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37250, void, GetPlayerProfile, (app::GetPlayerProfileRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayerProfileResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37360, void, GetPlayerSegments, (app::GetPlayersSegmentsRequest * request, app::Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37470, void, GetPlayersInSegment, (app::GetPlayersInSegmentRequest * request, app::Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37580, void, GetPlayerStatistics, (app::GetPlayerStatisticsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37690, void, GetPlayerStatisticVersions, (app::GetPlayerStatisticVersionsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A377A0, void, GetPlayerTags, (app::GetPlayerTagsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayerTagsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A378B0, void, GetPlayFabIDsFromFacebookIDs, (app::GetPlayFabIDsFromFacebookIDsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A379C0, void, GetPlayFabIDsFromFacebookInstantGamesIds, (app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37AD0, void, GetPlayFabIDsFromNintendoSwitchDeviceIds, (app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37BE0, void, GetPlayFabIDsFromPSNAccountIDs, (app::GetPlayFabIDsFromPSNAccountIDsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37CF0, void, GetPlayFabIDsFromSteamIDs, (app::GetPlayFabIDsFromSteamIDsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37E00, void, GetPlayFabIDsFromXboxLiveIDs, (app::GetPlayFabIDsFromXboxLiveIDsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A37F10, void, GetPublisherData, (app::GetPublisherDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetPublisherDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38020, void, GetRandomResultTables, (app::GetRandomResultTablesRequest * request, app::Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38130, void, GetServerCustomIDsFromPlayFabIDs, (app::GetServerCustomIDsFromPlayFabIDsRequest * request, app::Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38240, void, GetSharedGroupData, (app::GetSharedGroupDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38350, void, GetTime, (app::GetTimeRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetTimeResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38460, void, GetTitleData, (app::GetTitleDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetTitleDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38570, void, GetTitleInternalData, (app::GetTitleDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetTitleDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38680, void, GetTitleNews, (app::GetTitleNewsRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetTitleNewsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38790, void, GetUserAccountInfo, (app::GetUserAccountInfoRequest * request, app::Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A388A0, void, GetUserBans, (app::GetUserBansRequest * request, app::Action_1_PlayFab_ServerModels_GetUserBansResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A389B0, void, GetUserData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38AC0, void, GetUserInternalData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38BD0, void, GetUserInventory, (app::GetUserInventoryRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserInventoryResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38CE0, void, GetUserPublisherData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38DF0, void, GetUserPublisherInternalData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A38F00, void, GetUserPublisherReadOnlyData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39010, void, GetUserReadOnlyData, (app::GetUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39120, void, GrantCharacterToUser, (app::GrantCharacterToUserRequest_1 * request, app::Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39230, void, GrantItemsToCharacter, (app::GrantItemsToCharacterRequest * request, app::Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39340, void, GrantItemsToUser, (app::GrantItemsToUserRequest * request, app::Action_1_PlayFab_ServerModels_GrantItemsToUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39450, void, GrantItemsToUsers, (app::GrantItemsToUsersRequest * request, app::Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39560, void, LinkXboxAccount, (app::LinkXboxAccountRequest_1 * request, app::Action_1_PlayFab_ServerModels_LinkXboxAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39670, void, LoginWithServerCustomId, (app::LoginWithServerCustomIdRequest * request, app::Action_1_PlayFab_ServerModels_ServerLoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39780, void, LoginWithXbox, (app::LoginWithXboxRequest_1 * request, app::Action_1_PlayFab_ServerModels_ServerLoginResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39890, void, ModifyItemUses, (app::ModifyItemUsesRequest * request, app::Action_1_PlayFab_ServerModels_ModifyItemUsesResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A399A0, void, MoveItemToCharacterFromCharacter, (app::MoveItemToCharacterFromCharacterRequest * request, app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39AB0, void, MoveItemToCharacterFromUser, (app::MoveItemToCharacterFromUserRequest * request, app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39BC0, void, MoveItemToUserFromCharacter, (app::MoveItemToUserFromCharacterRequest * request, app::Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39CD0, void, NotifyMatchmakerPlayerLeft, (app::NotifyMatchmakerPlayerLeftRequest * request, app::Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39DE0, void, RedeemCoupon, (app::RedeemCouponRequest_1 * request, app::Action_1_PlayFab_ServerModels_RedeemCouponResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A39EF0, void, RedeemMatchmakerTicket, (app::RedeemMatchmakerTicketRequest * request, app::Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A000, void, RefreshGameServerInstanceHeartbeat, (app::RefreshGameServerInstanceHeartbeatRequest * request, app::Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A110, void, RegisterGame, (app::RegisterGameRequest * request, app::Action_1_PlayFab_ServerModels_RegisterGameResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A220, void, RemoveFriend, (app::RemoveFriendRequest_1 * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A330, void, RemovePlayerTag, (app::RemovePlayerTagRequest * request, app::Action_1_PlayFab_ServerModels_RemovePlayerTagResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A440, void, RemoveSharedGroupMembers, (app::RemoveSharedGroupMembersRequest_1 * request, app::Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A550, void, ReportPlayer, (app::ReportPlayerServerRequest * request, app::Action_1_PlayFab_ServerModels_ReportPlayerServerResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A660, void, RevokeAllBansForUser, (app::RevokeAllBansForUserRequest * request, app::Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A770, void, RevokeBans, (app::RevokeBansRequest * request, app::Action_1_PlayFab_ServerModels_RevokeBansResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A880, void, RevokeInventoryItem, (app::RevokeInventoryItemRequest * request, app::Action_1_PlayFab_ServerModels_RevokeInventoryResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3A990, void, RevokeInventoryItems, (app::RevokeInventoryItemsRequest * request, app::Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3AAA0, void, SendCustomAccountRecoveryEmail, (app::SendCustomAccountRecoveryEmailRequest * request, app::Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3ABB0, void, SendEmailFromTemplate, (app::SendEmailFromTemplateRequest * request, app::Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3ACC0, void, SendPushNotification, (app::SendPushNotificationRequest * request, app::Action_1_PlayFab_ServerModels_SendPushNotificationResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3ADD0, void, SetFriendTags, (app::SetFriendTagsRequest_1 * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3AEE0, void, SetGameServerInstanceData, (app::SetGameServerInstanceDataRequest * request, app::Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3AFF0, void, SetGameServerInstanceState, (app::SetGameServerInstanceStateRequest * request, app::Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B100, void, SetGameServerInstanceTags, (app::SetGameServerInstanceTagsRequest * request, app::Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B210, void, SetPlayerSecret, (app::SetPlayerSecretRequest_1 * request, app::Action_1_PlayFab_ServerModels_SetPlayerSecretResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B320, void, SetPublisherData, (app::SetPublisherDataRequest * request, app::Action_1_PlayFab_ServerModels_SetPublisherDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B430, void, SetTitleData, (app::SetTitleDataRequest * request, app::Action_1_PlayFab_ServerModels_SetTitleDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B540, void, SetTitleInternalData, (app::SetTitleDataRequest * request, app::Action_1_PlayFab_ServerModels_SetTitleDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B650, void, SubtractCharacterVirtualCurrency, (app::SubtractCharacterVirtualCurrencyRequest * request, app::Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B760, void, SubtractUserVirtualCurrency, (app::SubtractUserVirtualCurrencyRequest_1 * request, app::Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B870, void, UnlinkXboxAccount, (app::UnlinkXboxAccountRequest_1 * request, app::Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3B980, void, UnlockContainerInstance, (app::UnlockContainerInstanceRequest_1 * request, app::Action_1_PlayFab_ServerModels_UnlockContainerItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BA90, void, UnlockContainerItem, (app::UnlockContainerItemRequest_1 * request, app::Action_1_PlayFab_ServerModels_UnlockContainerItemResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BBA0, void, UpdateAvatarUrl, (app::UpdateAvatarUrlRequest_1 * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BCB0, void, UpdateBans, (app::UpdateBansRequest * request, app::Action_1_PlayFab_ServerModels_UpdateBansResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BDC0, void, UpdateCharacterData, (app::UpdateCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BED0, void, UpdateCharacterInternalData, (app::UpdateCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3BFE0, void, UpdateCharacterReadOnlyData, (app::UpdateCharacterDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C0F0, void, UpdateCharacterStatistics, (app::UpdateCharacterStatisticsRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C200, void, UpdatePlayerStatistics, (app::UpdatePlayerStatisticsRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C310, void, UpdateSharedGroupData, (app::UpdateSharedGroupDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C420, void, UpdateUserData, (app::UpdateUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C530, void, UpdateUserInternalData, (app::UpdateUserInternalDataRequest * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C640, void, UpdateUserInventoryItemCustomData, (app::UpdateUserInventoryItemDataRequest * request, app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C750, void, UpdateUserPublisherData, (app::UpdateUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C860, void, UpdateUserPublisherInternalData, (app::UpdateUserInternalDataRequest * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3C970, void, UpdateUserPublisherReadOnlyData, (app::UpdateUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3CA80, void, UpdateUserReadOnlyData, (app::UpdateUserDataRequest_1 * request, app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3CB90, void, WriteCharacterEvent, (app::WriteServerCharacterEventRequest * request, app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3CCA0, void, WritePlayerEvent, (app::WriteServerPlayerEventRequest * request, app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A3CDB0, void, WriteTitleEvent, (app::WriteTitleEventRequest_1 * request, app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01554DA0, void, ExecuteCloudScript_2, (app::ExecuteCloudScriptServerRequest * request, app::Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabServerAPI
