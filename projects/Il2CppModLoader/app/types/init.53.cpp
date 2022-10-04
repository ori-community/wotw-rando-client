#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/AuthenticateSessionTicketRequest.h>
#include <Il2CppModLoader/app/types/AuthenticateSessionTicketResult.h>
#include <Il2CppModLoader/app/types/AwardSteamAchievementRequest.h>
#include <Il2CppModLoader/app/types/AwardSteamAchievementResult.h>
#include <Il2CppModLoader/app/types/BanUsersRequest.h>
#include <Il2CppModLoader/app/types/BanUsersResult.h>
#include <Il2CppModLoader/app/types/ConsumeItemRequest_1.h>
#include <Il2CppModLoader/app/types/ConsumeItemResult_1.h>
#include <Il2CppModLoader/app/types/CreateSharedGroupRequest_1.h>
#include <Il2CppModLoader/app/types/CreateSharedGroupResult_1.h>
#include <Il2CppModLoader/app/types/DeleteCharacterFromUserRequest.h>
#include <Il2CppModLoader/app/types/DeleteCharacterFromUserResult.h>
#include <Il2CppModLoader/app/types/DeletePlayerRequest.h>
#include <Il2CppModLoader/app/types/DeletePlayerResult.h>
#include <Il2CppModLoader/app/types/DeleteSharedGroupRequest.h>
#include <Il2CppModLoader/app/types/DeregisterGameRequest.h>
#include <Il2CppModLoader/app/types/DeregisterGameResponse.h>
#include <Il2CppModLoader/app/types/EvaluateRandomResultTableRequest.h>
#include <Il2CppModLoader/app/types/EvaluateRandomResultTableResult.h>
#include <Il2CppModLoader/app/types/ExecuteCloudScriptServerRequest.h>
#include <Il2CppModLoader/app/types/ExecuteCloudScriptResult_2.h>
#include <Il2CppModLoader/app/types/LogStatement_2.h>
#include <Il2CppModLoader/app/types/GetAllSegmentsRequest.h>
#include <Il2CppModLoader/app/types/GetAllSegmentsResult.h>
#include <Il2CppModLoader/app/types/ListUsersCharactersRequest_1.h>
#include <Il2CppModLoader/app/types/ListUsersCharactersResult_1.h>
#include <Il2CppModLoader/app/types/GetCatalogItemsRequest_1.h>
#include <Il2CppModLoader/app/types/GetCatalogItemsResult_1.h>
#include <Il2CppModLoader/app/types/GetCharacterDataRequest_1.h>
#include <Il2CppModLoader/app/types/GetCharacterDataResult_1.h>
#include <Il2CppModLoader/app/types/GetCharacterInventoryRequest_1.h>
#include <Il2CppModLoader/app/types/GetCharacterInventoryResult_1.h>
#include <Il2CppModLoader/app/types/GetCharacterLeaderboardRequest_1.h>
#include <Il2CppModLoader/app/types/GetCharacterLeaderboardResult_1.h>
#include <Il2CppModLoader/app/types/GetCharacterStatisticsRequest_1.h>
#include <Il2CppModLoader/app/types/GetCharacterStatisticsResult_1.h>
#include <Il2CppModLoader/app/types/GetContentDownloadUrlRequest_1.h>
#include <Il2CppModLoader/app/types/GetContentDownloadUrlResult_1.h>
#include <Il2CppModLoader/app/types/GetFriendLeaderboardRequest_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardResult_1.h>
#include <Il2CppModLoader/app/types/GetFriendsListRequest_1.h>
#include <Il2CppModLoader/app/types/GetFriendsListResult_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardRequest_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundCharacterRequest_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundCharacterResult_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundUserRequest.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundUserResult.h>
#include <Il2CppModLoader/app/types/GetLeaderboardForUsersCharactersRequest_1.h>
#include <Il2CppModLoader/app/types/GetLeaderboardForUsersCharactersResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayerProfileRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayerProfileResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayersSegmentsRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerSegmentsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayersInSegmentRequest.h>
#include <Il2CppModLoader/app/types/GetPlayersInSegmentResult.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticVersionsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticVersionsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayerTagsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayerTagsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromFacebookIDsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromFacebookIDsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromFacebookInstantGamesIdsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromPSNAccountIDsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromPSNAccountIDsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromSteamIDsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromSteamIDsResult_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromXboxLiveIDsRequest_1.h>
#include <Il2CppModLoader/app/types/GetPlayFabIDsFromXboxLiveIDsResult_1.h>
#include <Il2CppModLoader/app/types/GetPublisherDataRequest_1.h>
#include <Il2CppModLoader/app/types/GetPublisherDataResult_1.h>
#include <Il2CppModLoader/app/types/GetRandomResultTablesRequest.h>
#include <Il2CppModLoader/app/types/GetRandomResultTablesResult.h>
#include <Il2CppModLoader/app/types/GetServerCustomIDsFromPlayFabIDsRequest.h>
#include <Il2CppModLoader/app/types/GetServerCustomIDsFromPlayFabIDsResult.h>
#include <Il2CppModLoader/app/types/GetSharedGroupDataRequest_1.h>
#include <Il2CppModLoader/app/types/GetSharedGroupDataResult_1.h>
#include <Il2CppModLoader/app/types/GetTimeRequest_1.h>
#include <Il2CppModLoader/app/types/GetTimeResult_1.h>
#include <Il2CppModLoader/app/types/GetTitleDataRequest_1.h>
#include <Il2CppModLoader/app/types/GetTitleDataResult_1.h>
#include <Il2CppModLoader/app/types/GetTitleNewsRequest_1.h>
#include <Il2CppModLoader/app/types/GetTitleNewsResult_1.h>
#include <Il2CppModLoader/app/types/GetUserAccountInfoRequest.h>
#include <Il2CppModLoader/app/types/GetUserAccountInfoResult.h>
#include <Il2CppModLoader/app/types/GetUserBansRequest.h>
#include <Il2CppModLoader/app/types/GetUserBansResult.h>
#include <Il2CppModLoader/app/types/GetUserDataRequest_1.h>
#include <Il2CppModLoader/app/types/GetUserDataResult_1.h>
#include <Il2CppModLoader/app/types/GetUserInventoryRequest_1.h>
#include <Il2CppModLoader/app/types/GetUserInventoryResult_1.h>
#include <Il2CppModLoader/app/types/GrantCharacterToUserRequest_1.h>
#include <Il2CppModLoader/app/types/GrantCharacterToUserResult_1.h>
#include <Il2CppModLoader/app/types/GrantItemsToCharacterRequest.h>

namespace app::classes::types {
    namespace AuthenticateSessionTicketRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::AuthenticateSessionTicketRequest__Class** type_info = (::app::AuthenticateSessionTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04766370)); }
    namespace AuthenticateSessionTicketResult { IL2CPP_MODLOADER_DLLEXPORT ::app::AuthenticateSessionTicketResult__Class** type_info = (::app::AuthenticateSessionTicketResult__Class**)(modloader::win::memory::resolve_rva(0x04729760)); }
    namespace AwardSteamAchievementRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::AwardSteamAchievementRequest__Class** type_info = (::app::AwardSteamAchievementRequest__Class**)(modloader::win::memory::resolve_rva(0x04754F08)); }
    namespace AwardSteamAchievementResult { IL2CPP_MODLOADER_DLLEXPORT ::app::AwardSteamAchievementResult__Class** type_info = (::app::AwardSteamAchievementResult__Class**)(modloader::win::memory::resolve_rva(0x04796BC0)); }
    namespace BanUsersRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::BanUsersRequest__Class** type_info = (::app::BanUsersRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F450)); }
    namespace BanUsersResult { IL2CPP_MODLOADER_DLLEXPORT ::app::BanUsersResult__Class** type_info = (::app::BanUsersResult__Class**)(modloader::win::memory::resolve_rva(0x0475E2D8)); }
    namespace ConsumeItemRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ConsumeItemRequest_1__Class** type_info = (::app::ConsumeItemRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0475E7F0)); }
    namespace ConsumeItemResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ConsumeItemResult_1__Class** type_info = (::app::ConsumeItemResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477AF00)); }
    namespace CreateSharedGroupRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::CreateSharedGroupRequest_1__Class** type_info = (::app::CreateSharedGroupRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047843D0)); }
    namespace CreateSharedGroupResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::CreateSharedGroupResult_1__Class** type_info = (::app::CreateSharedGroupResult_1__Class**)(modloader::win::memory::resolve_rva(0x04735B20)); }
    namespace DeleteCharacterFromUserRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::DeleteCharacterFromUserRequest__Class** type_info = (::app::DeleteCharacterFromUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D850)); }
    namespace DeleteCharacterFromUserResult { IL2CPP_MODLOADER_DLLEXPORT ::app::DeleteCharacterFromUserResult__Class** type_info = (::app::DeleteCharacterFromUserResult__Class**)(modloader::win::memory::resolve_rva(0x04771398)); }
    namespace DeletePlayerRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::DeletePlayerRequest__Class** type_info = (::app::DeletePlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04711AA8)); }
    namespace DeletePlayerResult { IL2CPP_MODLOADER_DLLEXPORT ::app::DeletePlayerResult__Class** type_info = (::app::DeletePlayerResult__Class**)(modloader::win::memory::resolve_rva(0x0471C5C8)); }
    namespace DeleteSharedGroupRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::DeleteSharedGroupRequest__Class** type_info = (::app::DeleteSharedGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x047681D0)); }
    namespace DeregisterGameRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::DeregisterGameRequest__Class** type_info = (::app::DeregisterGameRequest__Class**)(modloader::win::memory::resolve_rva(0x0477AC08)); }
    namespace DeregisterGameResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::DeregisterGameResponse__Class** type_info = (::app::DeregisterGameResponse__Class**)(modloader::win::memory::resolve_rva(0x04786D48)); }
    namespace EvaluateRandomResultTableRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::EvaluateRandomResultTableRequest__Class** type_info = (::app::EvaluateRandomResultTableRequest__Class**)(modloader::win::memory::resolve_rva(0x04703708)); }
    namespace EvaluateRandomResultTableResult { IL2CPP_MODLOADER_DLLEXPORT ::app::EvaluateRandomResultTableResult__Class** type_info = (::app::EvaluateRandomResultTableResult__Class**)(modloader::win::memory::resolve_rva(0x0474FDC0)); }
    namespace ExecuteCloudScriptServerRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteCloudScriptServerRequest__Class** type_info = (::app::ExecuteCloudScriptServerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474EC10)); }
    namespace ExecuteCloudScriptResult_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::ExecuteCloudScriptResult_2__Class** type_info = (::app::ExecuteCloudScriptResult_2__Class**)(modloader::win::memory::resolve_rva(0x0477C000)); }
    namespace LogStatement_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::LogStatement_2__Class** type_info = (::app::LogStatement_2__Class**)(modloader::win::memory::resolve_rva(0x047967B0)); }
    namespace GetAllSegmentsRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetAllSegmentsRequest__Class** type_info = (::app::GetAllSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04736258)); }
    namespace GetAllSegmentsResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetAllSegmentsResult__Class** type_info = (::app::GetAllSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x04757778)); }
    namespace ListUsersCharactersRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ListUsersCharactersRequest_1__Class** type_info = (::app::ListUsersCharactersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0476A098)); }
    namespace ListUsersCharactersResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ListUsersCharactersResult_1__Class** type_info = (::app::ListUsersCharactersResult_1__Class**)(modloader::win::memory::resolve_rva(0x04796A00)); }
    namespace GetCatalogItemsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCatalogItemsRequest_1__Class** type_info = (::app::GetCatalogItemsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04779728)); }
    namespace GetCatalogItemsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCatalogItemsResult_1__Class** type_info = (::app::GetCatalogItemsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04789618)); }
    namespace GetCharacterDataRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterDataRequest_1__Class** type_info = (::app::GetCharacterDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04755DE0)); }
    namespace GetCharacterDataResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterDataResult_1__Class** type_info = (::app::GetCharacterDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04717DE0)); }
    namespace GetCharacterInventoryRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterInventoryRequest_1__Class** type_info = (::app::GetCharacterInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04733A48)); }
    namespace GetCharacterInventoryResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterInventoryResult_1__Class** type_info = (::app::GetCharacterInventoryResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477DD38)); }
    namespace GetCharacterLeaderboardRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterLeaderboardRequest_1__Class** type_info = (::app::GetCharacterLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04738D50)); }
    namespace GetCharacterLeaderboardResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterLeaderboardResult_1__Class** type_info = (::app::GetCharacterLeaderboardResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473E3F0)); }
    namespace GetCharacterStatisticsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterStatisticsRequest_1__Class** type_info = (::app::GetCharacterStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04732AD0)); }
    namespace GetCharacterStatisticsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterStatisticsResult_1__Class** type_info = (::app::GetCharacterStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04791958)); }
    namespace GetContentDownloadUrlRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetContentDownloadUrlRequest_1__Class** type_info = (::app::GetContentDownloadUrlRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047894F0)); }
    namespace GetContentDownloadUrlResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetContentDownloadUrlResult_1__Class** type_info = (::app::GetContentDownloadUrlResult_1__Class**)(modloader::win::memory::resolve_rva(0x0479A1F8)); }
    namespace GetFriendLeaderboardRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendLeaderboardRequest_1__Class** type_info = (::app::GetFriendLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04765760)); }
    namespace GetLeaderboardResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardResult_1__Class** type_info = (::app::GetLeaderboardResult_1__Class**)(modloader::win::memory::resolve_rva(0x0474D720)); }
    namespace GetFriendsListRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendsListRequest_1__Class** type_info = (::app::GetFriendsListRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0477FDD0)); }
    namespace GetFriendsListResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendsListResult_1__Class** type_info = (::app::GetFriendsListResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477E338)); }
    namespace GetLeaderboardRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardRequest_1__Class** type_info = (::app::GetLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047152F8)); }
    namespace GetLeaderboardAroundCharacterRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundCharacterRequest_1__Class** type_info = (::app::GetLeaderboardAroundCharacterRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04725718)); }
    namespace GetLeaderboardAroundCharacterResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundCharacterResult_1__Class** type_info = (::app::GetLeaderboardAroundCharacterResult_1__Class**)(modloader::win::memory::resolve_rva(0x047938D8)); }
    namespace GetLeaderboardAroundUserRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundUserRequest__Class** type_info = (::app::GetLeaderboardAroundUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04729500)); }
    namespace GetLeaderboardAroundUserResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundUserResult__Class** type_info = (::app::GetLeaderboardAroundUserResult__Class**)(modloader::win::memory::resolve_rva(0x04738A00)); }
    namespace GetLeaderboardForUsersCharactersRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardForUsersCharactersRequest_1__Class** type_info = (::app::GetLeaderboardForUsersCharactersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470D8D0)); }
    namespace GetLeaderboardForUsersCharactersResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardForUsersCharactersResult_1__Class** type_info = (::app::GetLeaderboardForUsersCharactersResult_1__Class**)(modloader::win::memory::resolve_rva(0x04745618)); }
    namespace GetPlayerCombinedInfoRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoRequest_1__Class** type_info = (::app::GetPlayerCombinedInfoRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04796E78)); }
    namespace GetPlayerCombinedInfoResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoResult_1__Class** type_info = (::app::GetPlayerCombinedInfoResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477DF40)); }
    namespace GetPlayerProfileRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerProfileRequest_1__Class** type_info = (::app::GetPlayerProfileRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04710A00)); }
    namespace GetPlayerProfileResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerProfileResult_1__Class** type_info = (::app::GetPlayerProfileResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473DEF0)); }
    namespace GetPlayersSegmentsRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayersSegmentsRequest__Class** type_info = (::app::GetPlayersSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04702510)); }
    namespace GetPlayerSegmentsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerSegmentsResult_1__Class** type_info = (::app::GetPlayerSegmentsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04763DB0)); }
    namespace GetPlayersInSegmentRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayersInSegmentRequest__Class** type_info = (::app::GetPlayersInSegmentRequest__Class**)(modloader::win::memory::resolve_rva(0x04781200)); }
    namespace GetPlayersInSegmentResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayersInSegmentResult__Class** type_info = (::app::GetPlayersInSegmentResult__Class**)(modloader::win::memory::resolve_rva(0x04792C08)); }
    namespace GetPlayerStatisticsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticsRequest_1__Class** type_info = (::app::GetPlayerStatisticsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0471BFD8)); }
    namespace GetPlayerStatisticsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticsResult_1__Class** type_info = (::app::GetPlayerStatisticsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04721BC8)); }
    namespace GetPlayerStatisticVersionsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticVersionsRequest_1__Class** type_info = (::app::GetPlayerStatisticVersionsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04739CB8)); }
    namespace GetPlayerStatisticVersionsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticVersionsResult_1__Class** type_info = (::app::GetPlayerStatisticVersionsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471E930)); }
    namespace GetPlayerTagsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTagsRequest_1__Class** type_info = (::app::GetPlayerTagsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04785C80)); }
    namespace GetPlayerTagsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTagsResult_1__Class** type_info = (::app::GetPlayerTagsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04714CB0)); }
    namespace GetPlayFabIDsFromFacebookIDsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromFacebookIDsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromFacebookIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047986D0)); }
    namespace GetPlayFabIDsFromFacebookIDsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromFacebookIDsResult_1__Class** type_info = (::app::GetPlayFabIDsFromFacebookIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x047122A8)); }
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromFacebookInstantGamesIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478DA70)); }
    namespace GetPlayFabIDsFromFacebookInstantGamesIdsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class** type_info = (::app::GetPlayFabIDsFromFacebookInstantGamesIdsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04766320)); }
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0471EE38)); }
    namespace GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class** type_info = (::app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04719B30)); }
    namespace GetPlayFabIDsFromPSNAccountIDsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromPSNAccountIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04740A98)); }
    namespace GetPlayFabIDsFromPSNAccountIDsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class** type_info = (::app::GetPlayFabIDsFromPSNAccountIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471A588)); }
    namespace GetPlayFabIDsFromSteamIDsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromSteamIDsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromSteamIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0477F818)); }
    namespace GetPlayFabIDsFromSteamIDsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromSteamIDsResult_1__Class** type_info = (::app::GetPlayFabIDsFromSteamIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04727100)); }
    namespace GetPlayFabIDsFromXboxLiveIDsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class** type_info = (::app::GetPlayFabIDsFromXboxLiveIDsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047591B0)); }
    namespace GetPlayFabIDsFromXboxLiveIDsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class** type_info = (::app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04745948)); }
    namespace GetPublisherDataRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPublisherDataRequest_1__Class** type_info = (::app::GetPublisherDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04751778)); }
    namespace GetPublisherDataResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetPublisherDataResult_1__Class** type_info = (::app::GetPublisherDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471B690)); }
    namespace GetRandomResultTablesRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetRandomResultTablesRequest__Class** type_info = (::app::GetRandomResultTablesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475D3E8)); }
    namespace GetRandomResultTablesResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetRandomResultTablesResult__Class** type_info = (::app::GetRandomResultTablesResult__Class**)(modloader::win::memory::resolve_rva(0x04722768)); }
    namespace GetServerCustomIDsFromPlayFabIDsRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetServerCustomIDsFromPlayFabIDsRequest__Class** type_info = (::app::GetServerCustomIDsFromPlayFabIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04761F78)); }
    namespace GetServerCustomIDsFromPlayFabIDsResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetServerCustomIDsFromPlayFabIDsResult__Class** type_info = (::app::GetServerCustomIDsFromPlayFabIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0475C380)); }
    namespace GetSharedGroupDataRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetSharedGroupDataRequest_1__Class** type_info = (::app::GetSharedGroupDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04790230)); }
    namespace GetSharedGroupDataResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetSharedGroupDataResult_1__Class** type_info = (::app::GetSharedGroupDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04790598)); }
    namespace GetTimeRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTimeRequest_1__Class** type_info = (::app::GetTimeRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478BED8)); }
    namespace GetTimeResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTimeResult_1__Class** type_info = (::app::GetTimeResult_1__Class**)(modloader::win::memory::resolve_rva(0x0475CA20)); }
    namespace GetTitleDataRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTitleDataRequest_1__Class** type_info = (::app::GetTitleDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0475F6D8)); }
    namespace GetTitleDataResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTitleDataResult_1__Class** type_info = (::app::GetTitleDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x0473C260)); }
    namespace GetTitleNewsRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTitleNewsRequest_1__Class** type_info = (::app::GetTitleNewsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04790F90)); }
    namespace GetTitleNewsResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetTitleNewsResult_1__Class** type_info = (::app::GetTitleNewsResult_1__Class**)(modloader::win::memory::resolve_rva(0x0470AB40)); }
    namespace GetUserAccountInfoRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserAccountInfoRequest__Class** type_info = (::app::GetUserAccountInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04751948)); }
    namespace GetUserAccountInfoResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserAccountInfoResult__Class** type_info = (::app::GetUserAccountInfoResult__Class**)(modloader::win::memory::resolve_rva(0x04733AF8)); }
    namespace GetUserBansRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserBansRequest__Class** type_info = (::app::GetUserBansRequest__Class**)(modloader::win::memory::resolve_rva(0x04759230)); }
    namespace GetUserBansResult { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserBansResult__Class** type_info = (::app::GetUserBansResult__Class**)(modloader::win::memory::resolve_rva(0x047201F8)); }
    namespace GetUserDataRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserDataRequest_1__Class** type_info = (::app::GetUserDataRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470F198)); }
    namespace GetUserDataResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserDataResult_1__Class** type_info = (::app::GetUserDataResult_1__Class**)(modloader::win::memory::resolve_rva(0x04751C18)); }
    namespace GetUserInventoryRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserInventoryRequest_1__Class** type_info = (::app::GetUserInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0473FBE8)); }
    namespace GetUserInventoryResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GetUserInventoryResult_1__Class** type_info = (::app::GetUserInventoryResult_1__Class**)(modloader::win::memory::resolve_rva(0x0476B960)); }
    namespace GrantCharacterToUserRequest_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GrantCharacterToUserRequest_1__Class** type_info = (::app::GrantCharacterToUserRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478F318)); }
    namespace GrantCharacterToUserResult_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GrantCharacterToUserResult_1__Class** type_info = (::app::GrantCharacterToUserResult_1__Class**)(modloader::win::memory::resolve_rva(0x0472B9A8)); }
    namespace GrantItemsToCharacterRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::GrantItemsToCharacterRequest__Class** type_info = (::app::GrantItemsToCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x04746098)); }
}
