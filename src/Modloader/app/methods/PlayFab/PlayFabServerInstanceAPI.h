#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
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
#include <Modloader/app/structs/AddCharacterVirtualCurrencyRequest.h>
#include <Modloader/app/structs/AddFriendRequest_1.h>
#include <Modloader/app/structs/AddPlayerTagRequest.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest_1.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>
#include <Modloader/app/structs/AwardSteamAchievementRequest.h>
#include <Modloader/app/structs/BanUsersRequest.h>
#include <Modloader/app/structs/ConsumeItemRequest_1.h>
#include <Modloader/app/structs/CreateSharedGroupRequest_1.h>
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>
#include <Modloader/app/structs/DeletePlayerRequest.h>
#include <Modloader/app/structs/DeleteSharedGroupRequest.h>
#include <Modloader/app/structs/DeregisterGameRequest.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/EvaluateRandomResultTableRequest.h>
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>
#include <Modloader/app/structs/GetAllSegmentsRequest.h>
#include <Modloader/app/structs/GetCatalogItemsRequest_1.h>
#include <Modloader/app/structs/GetCharacterDataRequest_1.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest_1.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetCharacterStatisticsRequest_1.h>
#include <Modloader/app/structs/GetContentDownloadUrlRequest_1.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetFriendsListRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardAroundUserRequest.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromSteamIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest_1.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest_1.h>
#include <Modloader/app/structs/GetPlayerProfileRequest_1.h>
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest_1.h>
#include <Modloader/app/structs/GetPlayerStatisticsRequest_1.h>
#include <Modloader/app/structs/GetPlayerTagsRequest_1.h>
#include <Modloader/app/structs/GetPlayersInSegmentRequest.h>
#include <Modloader/app/structs/GetPlayersSegmentsRequest.h>
#include <Modloader/app/structs/GetPublisherDataRequest_1.h>
#include <Modloader/app/structs/GetRandomResultTablesRequest.h>
#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsRequest.h>
#include <Modloader/app/structs/GetSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/GetTimeRequest_1.h>
#include <Modloader/app/structs/GetTitleDataRequest_1.h>
#include <Modloader/app/structs/GetTitleNewsRequest_1.h>
#include <Modloader/app/structs/GetUserAccountInfoRequest.h>
#include <Modloader/app/structs/GetUserBansRequest.h>
#include <Modloader/app/structs/GetUserDataRequest_1.h>
#include <Modloader/app/structs/GetUserInventoryRequest_1.h>
#include <Modloader/app/structs/GrantCharacterToUserRequest_1.h>
#include <Modloader/app/structs/GrantItemsToCharacterRequest.h>
#include <Modloader/app/structs/GrantItemsToUserRequest.h>
#include <Modloader/app/structs/GrantItemsToUsersRequest.h>
#include <Modloader/app/structs/LinkXboxAccountRequest_1.h>
#include <Modloader/app/structs/ListUsersCharactersRequest_1.h>
#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#include <Modloader/app/structs/LoginWithXboxRequest_1.h>
#include <Modloader/app/structs/ModifyItemUsesRequest.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterRequest.h>
#include <Modloader/app/structs/MoveItemToCharacterFromUserRequest.h>
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest.h>
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/PlayFabServerInstanceAPI.h>
#include <Modloader/app/structs/RedeemCouponRequest_1.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketRequest.h>
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatRequest.h>
#include <Modloader/app/structs/RegisterGameRequest.h>
#include <Modloader/app/structs/RemoveFriendRequest_1.h>
#include <Modloader/app/structs/RemovePlayerTagRequest.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest_1.h>
#include <Modloader/app/structs/ReportPlayerServerRequest.h>
#include <Modloader/app/structs/RevokeAllBansForUserRequest.h>
#include <Modloader/app/structs/RevokeBansRequest.h>
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>
#include <Modloader/app/structs/RevokeInventoryItemsRequest.h>
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailRequest.h>
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>
#include <Modloader/app/structs/SendPushNotificationRequest.h>
#include <Modloader/app/structs/SetFriendTagsRequest_1.h>
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>
#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>
#include <Modloader/app/structs/SetPlayerSecretRequest_1.h>
#include <Modloader/app/structs/SetPublisherDataRequest.h>
#include <Modloader/app/structs/SetTitleDataRequest.h>
#include <Modloader/app/structs/SubtractCharacterVirtualCurrencyRequest.h>
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest_1.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest_1.h>
#include <Modloader/app/structs/UnlockContainerInstanceRequest_1.h>
#include <Modloader/app/structs/UnlockContainerItemRequest_1.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest_1.h>
#include <Modloader/app/structs/UpdateBansRequest.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest_1.h>
#include <Modloader/app/structs/UpdateCharacterStatisticsRequest_1.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest_1.h>
#include <Modloader/app/structs/UpdateSharedGroupDataRequest_1.h>
#include <Modloader/app/structs/UpdateUserDataRequest_1.h>
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>
#include <Modloader/app/structs/UpdateUserInventoryItemDataRequest.h>
#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>
#include <Modloader/app/structs/WriteServerPlayerEventRequest.h>
#include <Modloader/app/structs/WriteTitleEventRequest_1.h>

namespace app::classes::PlayFab::PlayFabServerInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::PlayFabServerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, app::PlayFabServerInstanceAPI* this_ptr, app::PlayFabApiSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, app::PlayFabServerInstanceAPI* this_ptr, app::PlayFabAuthenticationContext* context)
    IL2CPP_REGISTER_METHOD(
        0x0058DA40,
        void,
        ctor_4,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::PlayFabApiSettings* settings,
        app::PlayFabAuthenticationContext* context
    )
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, app::PlayFabServerInstanceAPI* this_ptr, app::PlayFabAuthenticationContext* context)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, app::PlayFabServerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, app::PlayFabServerInstanceAPI* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01A3CEC0,
        void,
        AddCharacterVirtualCurrency,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AddCharacterVirtualCurrencyRequest* request,
        app::Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3CFE0,
        void,
        AddFriend,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AddFriendRequest_1* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D100,
        void,
        AddPlayerTag,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AddPlayerTagRequest* request,
        app::Action_1_PlayFab_ServerModels_AddPlayerTagResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D220,
        void,
        AddSharedGroupMembers,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AddSharedGroupMembersRequest_1* request,
        app::Action_1_PlayFab_ServerModels_AddSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D340,
        void,
        AddUserVirtualCurrency,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AddUserVirtualCurrencyRequest_1* request,
        app::Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D460,
        void,
        AuthenticateSessionTicket,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AuthenticateSessionTicketRequest* request,
        app::Action_1_PlayFab_ServerModels_AuthenticateSessionTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D580,
        void,
        AwardSteamAchievement,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::AwardSteamAchievementRequest* request,
        app::Action_1_PlayFab_ServerModels_AwardSteamAchievementResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D6A0,
        void,
        BanUsers,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::BanUsersRequest* request,
        app::Action_1_PlayFab_ServerModels_BanUsersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D7C0,
        void,
        ConsumeItem,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ConsumeItemRequest_1* request,
        app::Action_1_PlayFab_ServerModels_ConsumeItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3D8E0,
        void,
        CreateSharedGroup,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::CreateSharedGroupRequest_1* request,
        app::Action_1_PlayFab_ServerModels_CreateSharedGroupResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DA00,
        void,
        DeleteCharacterFromUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::DeleteCharacterFromUserRequest* request,
        app::Action_1_PlayFab_ServerModels_DeleteCharacterFromUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DB20,
        void,
        DeletePlayer,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::DeletePlayerRequest* request,
        app::Action_1_PlayFab_ServerModels_DeletePlayerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DC40,
        void,
        DeleteSharedGroup,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::DeleteSharedGroupRequest* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DD60,
        void,
        DeregisterGame,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::DeregisterGameRequest* request,
        app::Action_1_PlayFab_ServerModels_DeregisterGameResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DE80,
        void,
        EvaluateRandomResultTable,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::EvaluateRandomResultTableRequest* request,
        app::Action_1_PlayFab_ServerModels_EvaluateRandomResultTableResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3DFA0,
        void,
        ExecuteCloudScript_1,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ExecuteCloudScriptServerRequest* request,
        app::Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E0C0,
        void,
        GetAllSegments,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetAllSegmentsRequest* request,
        app::Action_1_PlayFab_ServerModels_GetAllSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E1E0,
        void,
        GetAllUsersCharacters,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ListUsersCharactersRequest_1* request,
        app::Action_1_PlayFab_ServerModels_ListUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E300,
        void,
        GetCatalogItems,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCatalogItemsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCatalogItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E420,
        void,
        GetCharacterData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E540,
        void,
        GetCharacterInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E660,
        void,
        GetCharacterInventory,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterInventoryRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E780,
        void,
        GetCharacterLeaderboard,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterLeaderboardRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E8A0,
        void,
        GetCharacterReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3E9C0,
        void,
        GetCharacterStatistics,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetCharacterStatisticsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3EAE0,
        void,
        GetContentDownloadUrl,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetContentDownloadUrlRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetContentDownloadUrlResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3EC00,
        void,
        GetFriendLeaderboard,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetFriendLeaderboardRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3ED20,
        void,
        GetFriendsList,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetFriendsListRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetFriendsListResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3EE40,
        void,
        GetLeaderboard,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetLeaderboardRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3EF60,
        void,
        GetLeaderboardAroundCharacter,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetLeaderboardAroundCharacterRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F080,
        void,
        GetLeaderboardAroundUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetLeaderboardAroundUserRequest* request,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F1A0,
        void,
        GetLeaderboardForUserCharacters,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetLeaderboardForUsersCharactersRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F2C0,
        void,
        GetPlayerCombinedInfo,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayerCombinedInfoRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F3E0,
        void,
        GetPlayerProfile,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayerProfileRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerProfileResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F500,
        void,
        GetPlayerSegments,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayersSegmentsRequest* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerSegmentsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F620,
        void,
        GetPlayersInSegment,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayersInSegmentRequest* request,
        app::Action_1_PlayFab_ServerModels_GetPlayersInSegmentResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F740,
        void,
        GetPlayerStatistics,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayerStatisticsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F860,
        void,
        GetPlayerStatisticVersions,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayerStatisticVersionsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerStatisticVersionsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3F980,
        void,
        GetPlayerTags,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayerTagsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayerTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3FAA0,
        void,
        GetPlayFabIDsFromFacebookIDs,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromFacebookIDsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3FBC0,
        void,
        GetPlayFabIDsFromFacebookInstantGamesIds,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromFacebookInstantGamesIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3FCE0,
        void,
        GetPlayFabIDsFromNintendoSwitchDeviceIds,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3FE00,
        void,
        GetPlayFabIDsFromPSNAccountIDs,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromPSNAccountIDsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A3FF20,
        void,
        GetPlayFabIDsFromSteamIDs,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromSteamIDsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromSteamIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40040,
        void,
        GetPlayFabIDsFromXboxLiveIDs,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPlayFabIDsFromXboxLiveIDsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40160,
        void,
        GetPublisherData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetPublisherDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40280,
        void,
        GetRandomResultTables,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetRandomResultTablesRequest* request,
        app::Action_1_PlayFab_ServerModels_GetRandomResultTablesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A403A0,
        void,
        GetServerCustomIDsFromPlayFabIDs,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetServerCustomIDsFromPlayFabIDsRequest* request,
        app::Action_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A404C0,
        void,
        GetSharedGroupData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetSharedGroupDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A405E0,
        void,
        GetTime,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetTimeRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetTimeResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40700,
        void,
        GetTitleData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetTitleDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40820,
        void,
        GetTitleInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetTitleDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40940,
        void,
        GetTitleNews,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetTitleNewsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetTitleNewsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40A60,
        void,
        GetUserAccountInfo,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserAccountInfoRequest* request,
        app::Action_1_PlayFab_ServerModels_GetUserAccountInfoResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40B80,
        void,
        GetUserBans,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserBansRequest* request,
        app::Action_1_PlayFab_ServerModels_GetUserBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40CA0,
        void,
        GetUserData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40DC0,
        void,
        GetUserInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A40EE0,
        void,
        GetUserInventory,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserInventoryRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41000,
        void,
        GetUserPublisherData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41120,
        void,
        GetUserPublisherInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41240,
        void,
        GetUserPublisherReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41360,
        void,
        GetUserReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GetUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GetUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41480,
        void,
        GrantCharacterToUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GrantCharacterToUserRequest_1* request,
        app::Action_1_PlayFab_ServerModels_GrantCharacterToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A415A0,
        void,
        GrantItemsToCharacter,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GrantItemsToCharacterRequest* request,
        app::Action_1_PlayFab_ServerModels_GrantItemsToCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A416C0,
        void,
        GrantItemsToUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GrantItemsToUserRequest* request,
        app::Action_1_PlayFab_ServerModels_GrantItemsToUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A417E0,
        void,
        GrantItemsToUsers,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::GrantItemsToUsersRequest* request,
        app::Action_1_PlayFab_ServerModels_GrantItemsToUsersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41900,
        void,
        LinkXboxAccount,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::LinkXboxAccountRequest_1* request,
        app::Action_1_PlayFab_ServerModels_LinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41A20,
        void,
        LoginWithServerCustomId,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::LoginWithServerCustomIdRequest* request,
        app::Action_1_PlayFab_ServerModels_ServerLoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41B40,
        void,
        LoginWithXbox,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::LoginWithXboxRequest_1* request,
        app::Action_1_PlayFab_ServerModels_ServerLoginResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41C60,
        void,
        ModifyItemUses,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ModifyItemUsesRequest* request,
        app::Action_1_PlayFab_ServerModels_ModifyItemUsesResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41D80,
        void,
        MoveItemToCharacterFromCharacter,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::MoveItemToCharacterFromCharacterRequest* request,
        app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41EA0,
        void,
        MoveItemToCharacterFromUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::MoveItemToCharacterFromUserRequest* request,
        app::Action_1_PlayFab_ServerModels_MoveItemToCharacterFromUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A41FC0,
        void,
        MoveItemToUserFromCharacter,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::MoveItemToUserFromCharacterRequest* request,
        app::Action_1_PlayFab_ServerModels_MoveItemToUserFromCharacterResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A420E0,
        void,
        NotifyMatchmakerPlayerLeft,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::NotifyMatchmakerPlayerLeftRequest* request,
        app::Action_1_PlayFab_ServerModels_NotifyMatchmakerPlayerLeftResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42200,
        void,
        RedeemCoupon,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RedeemCouponRequest_1* request,
        app::Action_1_PlayFab_ServerModels_RedeemCouponResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42320,
        void,
        RedeemMatchmakerTicket,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RedeemMatchmakerTicketRequest* request,
        app::Action_1_PlayFab_ServerModels_RedeemMatchmakerTicketResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42440,
        void,
        RefreshGameServerInstanceHeartbeat,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RefreshGameServerInstanceHeartbeatRequest* request,
        app::Action_1_PlayFab_ServerModels_RefreshGameServerInstanceHeartbeatResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42560,
        void,
        RegisterGame,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RegisterGameRequest* request,
        app::Action_1_PlayFab_ServerModels_RegisterGameResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42680,
        void,
        RemoveFriend,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RemoveFriendRequest_1* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A427A0,
        void,
        RemovePlayerTag,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RemovePlayerTagRequest* request,
        app::Action_1_PlayFab_ServerModels_RemovePlayerTagResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A428C0,
        void,
        RemoveSharedGroupMembers,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RemoveSharedGroupMembersRequest_1* request,
        app::Action_1_PlayFab_ServerModels_RemoveSharedGroupMembersResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A429E0,
        void,
        ReportPlayer,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ReportPlayerServerRequest* request,
        app::Action_1_PlayFab_ServerModels_ReportPlayerServerResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42B00,
        void,
        RevokeAllBansForUser,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RevokeAllBansForUserRequest* request,
        app::Action_1_PlayFab_ServerModels_RevokeAllBansForUserResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42C20,
        void,
        RevokeBans,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RevokeBansRequest* request,
        app::Action_1_PlayFab_ServerModels_RevokeBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42D40,
        void,
        RevokeInventoryItem,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RevokeInventoryItemRequest* request,
        app::Action_1_PlayFab_ServerModels_RevokeInventoryResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42E60,
        void,
        RevokeInventoryItems,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::RevokeInventoryItemsRequest* request,
        app::Action_1_PlayFab_ServerModels_RevokeInventoryItemsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A42F80,
        void,
        SendCustomAccountRecoveryEmail,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SendCustomAccountRecoveryEmailRequest* request,
        app::Action_1_PlayFab_ServerModels_SendCustomAccountRecoveryEmailResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A430A0,
        void,
        SendEmailFromTemplate,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SendEmailFromTemplateRequest* request,
        app::Action_1_PlayFab_ServerModels_SendEmailFromTemplateResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A431C0,
        void,
        SendPushNotification,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SendPushNotificationRequest* request,
        app::Action_1_PlayFab_ServerModels_SendPushNotificationResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A432E0,
        void,
        SetFriendTags,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetFriendTagsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43400,
        void,
        SetGameServerInstanceData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetGameServerInstanceDataRequest* request,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43520,
        void,
        SetGameServerInstanceState,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetGameServerInstanceStateRequest* request,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceStateResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43640,
        void,
        SetGameServerInstanceTags,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetGameServerInstanceTagsRequest* request,
        app::Action_1_PlayFab_ServerModels_SetGameServerInstanceTagsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43760,
        void,
        SetPlayerSecret,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetPlayerSecretRequest_1* request,
        app::Action_1_PlayFab_ServerModels_SetPlayerSecretResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43880,
        void,
        SetPublisherData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetPublisherDataRequest* request,
        app::Action_1_PlayFab_ServerModels_SetPublisherDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A439A0,
        void,
        SetTitleData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetTitleDataRequest* request,
        app::Action_1_PlayFab_ServerModels_SetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43AC0,
        void,
        SetTitleInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SetTitleDataRequest* request,
        app::Action_1_PlayFab_ServerModels_SetTitleDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43BE0,
        void,
        SubtractCharacterVirtualCurrency,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SubtractCharacterVirtualCurrencyRequest* request,
        app::Action_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43D00,
        void,
        SubtractUserVirtualCurrency,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::SubtractUserVirtualCurrencyRequest_1* request,
        app::Action_1_PlayFab_ServerModels_ModifyUserVirtualCurrencyResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43E20,
        void,
        UnlinkXboxAccount,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UnlinkXboxAccountRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UnlinkXboxAccountResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A43F40,
        void,
        UnlockContainerInstance,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UnlockContainerInstanceRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44060,
        void,
        UnlockContainerItem,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UnlockContainerItemRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UnlockContainerItemResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44180,
        void,
        UpdateAvatarUrl,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateAvatarUrlRequest_1* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A442A0,
        void,
        UpdateBans,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateBansRequest* request,
        app::Action_1_PlayFab_ServerModels_UpdateBansResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A443C0,
        void,
        UpdateCharacterData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A444E0,
        void,
        UpdateCharacterInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44600,
        void,
        UpdateCharacterReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateCharacterDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44720,
        void,
        UpdateCharacterStatistics,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateCharacterStatisticsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateCharacterStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44840,
        void,
        UpdatePlayerStatistics,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdatePlayerStatisticsRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44960,
        void,
        UpdateSharedGroupData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateSharedGroupDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateSharedGroupDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44A80,
        void,
        UpdateUserData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44BA0,
        void,
        UpdateUserInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserInternalDataRequest* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44CC0,
        void,
        UpdateUserInventoryItemCustomData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserInventoryItemDataRequest* request,
        app::Action_1_PlayFab_ServerModels_EmptyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44DE0,
        void,
        UpdateUserPublisherData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A44F00,
        void,
        UpdateUserPublisherInternalData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserInternalDataRequest* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A45020,
        void,
        UpdateUserPublisherReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A45140,
        void,
        UpdateUserReadOnlyData,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::UpdateUserDataRequest_1* request,
        app::Action_1_PlayFab_ServerModels_UpdateUserDataResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A45260,
        void,
        WriteCharacterEvent,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::WriteServerCharacterEventRequest* request,
        app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A45380,
        void,
        WritePlayerEvent,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::WriteServerPlayerEventRequest* request,
        app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A454A0,
        void,
        WriteTitleEvent,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::WriteTitleEventRequest_1* request,
        app::Action_1_PlayFab_ServerModels_WriteEventResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01555100,
        void,
        ExecuteCloudScript_2,
        app::PlayFabServerInstanceAPI* this_ptr,
        app::ExecuteCloudScriptServerRequest* request,
        app::Action_1_PlayFab_ServerModels_ExecuteCloudScriptResult_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabServerInstanceAPI
