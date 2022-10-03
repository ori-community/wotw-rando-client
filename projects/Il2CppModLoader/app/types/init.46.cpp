#include <Il2CppModLoader/app/types/AdCampaignAttributionModel.h>
#include <Il2CppModLoader/app/types/CharacterInventory.h>
#include <Il2CppModLoader/app/types/CharacterResult.h>
#include <Il2CppModLoader/app/types/ContactEmailInfoModel.h>
#include <Il2CppModLoader/app/types/ContinentCode__Enum.h>
#include <Il2CppModLoader/app/types/CountryCode__Enum.h>
#include <Il2CppModLoader/app/types/Currency__Enum.h>
#include <Il2CppModLoader/app/types/CurrentGamesRequest.h>
#include <Il2CppModLoader/app/types/CurrentGamesResult.h>
#include <Il2CppModLoader/app/types/EmailVerificationStatus__Enum.h>
#include <Il2CppModLoader/app/types/EntityKey_1.h>
#include <Il2CppModLoader/app/types/FriendInfo.h>
#include <Il2CppModLoader/app/types/GameServerRegionsRequest.h>
#include <Il2CppModLoader/app/types/GameServerRegionsResult.h>
#include <Il2CppModLoader/app/types/GetCatalogItemsRequest.h>
#include <Il2CppModLoader/app/types/GetCatalogItemsResult.h>
#include <Il2CppModLoader/app/types/GetCharacterDataRequest.h>
#include <Il2CppModLoader/app/types/GetCharacterDataResult.h>
#include <Il2CppModLoader/app/types/GetCharacterInventoryRequest.h>
#include <Il2CppModLoader/app/types/GetCharacterInventoryResult.h>
#include <Il2CppModLoader/app/types/GetCharacterLeaderboardRequest.h>
#include <Il2CppModLoader/app/types/GetCharacterLeaderboardResult.h>
#include <Il2CppModLoader/app/types/GetCharacterStatisticsRequest.h>
#include <Il2CppModLoader/app/types/GetCharacterStatisticsResult.h>
#include <Il2CppModLoader/app/types/GetContentDownloadUrlRequest.h>
#include <Il2CppModLoader/app/types/GetContentDownloadUrlResult.h>
#include <Il2CppModLoader/app/types/GetFriendLeaderboardAroundPlayerRequest.h>
#include <Il2CppModLoader/app/types/GetFriendLeaderboardAroundPlayerResult.h>
#include <Il2CppModLoader/app/types/GetFriendLeaderboardRequest.h>
#include <Il2CppModLoader/app/types/GetFriendsListRequest.h>
#include <Il2CppModLoader/app/types/GetFriendsListResult.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundCharacterRequest.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundCharacterResult.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundPlayerRequest.h>
#include <Il2CppModLoader/app/types/GetLeaderboardAroundPlayerResult.h>
#include <Il2CppModLoader/app/types/GetLeaderboardForUsersCharactersRequest.h>
#include <Il2CppModLoader/app/types/GetLeaderboardForUsersCharactersResult.h>
#include <Il2CppModLoader/app/types/GetLeaderboardRequest.h>
#include <Il2CppModLoader/app/types/GetLeaderboardResult.h>
#include <Il2CppModLoader/app/types/GetPaymentTokenRequest.h>
#include <Il2CppModLoader/app/types/GetPaymentTokenResult.h>
#include <Il2CppModLoader/app/types/GetPhotonAuthenticationTokenRequest.h>
#include <Il2CppModLoader/app/types/GetPhotonAuthenticationTokenResult.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoRequestParams.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoResult.h>
#include <Il2CppModLoader/app/types/GetPlayerCombinedInfoResultPayload.h>
#include <Il2CppModLoader/app/types/GetPlayerProfileRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerProfileResult.h>
#include <Il2CppModLoader/app/types/GetPlayerSegmentsRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerSegmentsResult.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticVersionsRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticVersionsResult.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticsRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerStatisticsResult.h>
#include <Il2CppModLoader/app/types/GetPlayerTagsRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerTagsResult.h>
#include <Il2CppModLoader/app/types/GetPlayerTradesRequest.h>
#include <Il2CppModLoader/app/types/GetPlayerTradesResponse.h>
#include <Il2CppModLoader/app/types/LinkedPlatformAccountModel.h>
#include <Il2CppModLoader/app/types/ListUsersCharactersRequest.h>
#include <Il2CppModLoader/app/types/ListUsersCharactersResult.h>
#include <Il2CppModLoader/app/types/LocationModel.h>
#include <Il2CppModLoader/app/types/LoginIdentityProvider__Enum.h>
#include <Il2CppModLoader/app/types/MembershipModel.h>
#include <Il2CppModLoader/app/types/PlayerLeaderboardEntry.h>
#include <Il2CppModLoader/app/types/PlayerProfileModel.h>
#include <Il2CppModLoader/app/types/PlayerProfileViewConstraints.h>
#include <Il2CppModLoader/app/types/PushNotificationPlatform__Enum.h>
#include <Il2CppModLoader/app/types/PushNotificationRegistrationModel.h>
#include <Il2CppModLoader/app/types/StatisticModel.h>
#include <Il2CppModLoader/app/types/StatisticNameVersion.h>
#include <Il2CppModLoader/app/types/StatisticValue.h>
#include <Il2CppModLoader/app/types/SubscriptionModel.h>
#include <Il2CppModLoader/app/types/SubscriptionProviderStatus__Enum.h>
#include <Il2CppModLoader/app/types/TagModel.h>
#include <Il2CppModLoader/app/types/TitleActivationStatus__Enum.h>
#include <Il2CppModLoader/app/types/UserAccountInfo.h>
#include <Il2CppModLoader/app/types/UserAndroidDeviceInfo.h>
#include <Il2CppModLoader/app/types/UserCustomIdInfo.h>
#include <Il2CppModLoader/app/types/UserDataPermission__Enum.h>
#include <Il2CppModLoader/app/types/UserDataRecord.h>
#include <Il2CppModLoader/app/types/UserFacebookInfo.h>
#include <Il2CppModLoader/app/types/UserFacebookInstantGamesIdInfo.h>
#include <Il2CppModLoader/app/types/UserGameCenterInfo.h>
#include <Il2CppModLoader/app/types/UserGoogleInfo.h>
#include <Il2CppModLoader/app/types/UserIosDeviceInfo.h>
#include <Il2CppModLoader/app/types/UserKongregateInfo.h>
#include <Il2CppModLoader/app/types/UserNintendoSwitchDeviceIdInfo.h>
#include <Il2CppModLoader/app/types/UserOpenIdInfo.h>
#include <Il2CppModLoader/app/types/UserOrigination__Enum.h>
#include <Il2CppModLoader/app/types/UserPrivateAccountInfo.h>
#include <Il2CppModLoader/app/types/UserPsnInfo.h>
#include <Il2CppModLoader/app/types/UserSteamInfo.h>
#include <Il2CppModLoader/app/types/UserTitleInfo.h>
#include <Il2CppModLoader/app/types/UserTwitchInfo.h>
#include <Il2CppModLoader/app/types/UserWindowsHelloInfo.h>
#include <Il2CppModLoader/app/types/UserXboxInfo.h>
#include <Il2CppModLoader/app/types/ValueToDateModel.h>
#include <Il2CppModLoader/app/types/VirtualCurrencyRechargeTime.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserAccountInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserAccountInfo__Class** type_info = (::app::UserAccountInfo__Class**)(modloader::win::memory::resolve_rva(0x047144F8));
    }
    namespace UserAndroidDeviceInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserAndroidDeviceInfo__Class** type_info = (::app::UserAndroidDeviceInfo__Class**)(modloader::win::memory::resolve_rva(0x04739928));
    }
    namespace UserCustomIdInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserCustomIdInfo__Class** type_info = (::app::UserCustomIdInfo__Class**)(modloader::win::memory::resolve_rva(0x04741FA8));
    }
    namespace UserFacebookInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserFacebookInfo__Class** type_info = (::app::UserFacebookInfo__Class**)(modloader::win::memory::resolve_rva(0x0472B3D8));
    }
    namespace UserFacebookInstantGamesIdInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserFacebookInstantGamesIdInfo__Class** type_info = (::app::UserFacebookInstantGamesIdInfo__Class**)(modloader::win::memory::resolve_rva(0x047380B0));
    }
    namespace UserGameCenterInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserGameCenterInfo__Class** type_info = (::app::UserGameCenterInfo__Class**)(modloader::win::memory::resolve_rva(0x047621B0));
    }
    namespace UserGoogleInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserGoogleInfo__Class** type_info = (::app::UserGoogleInfo__Class**)(modloader::win::memory::resolve_rva(0x047829D0));
    }
    namespace UserIosDeviceInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserIosDeviceInfo__Class** type_info = (::app::UserIosDeviceInfo__Class**)(modloader::win::memory::resolve_rva(0x04728600));
    }
    namespace UserKongregateInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserKongregateInfo__Class** type_info = (::app::UserKongregateInfo__Class**)(modloader::win::memory::resolve_rva(0x04718140));
    }
    namespace UserNintendoSwitchDeviceIdInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserNintendoSwitchDeviceIdInfo__Class** type_info = (::app::UserNintendoSwitchDeviceIdInfo__Class**)(modloader::win::memory::resolve_rva(0x0473C048));
    }
    namespace UserOpenIdInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserOpenIdInfo__Class** type_info = (::app::UserOpenIdInfo__Class**)(modloader::win::memory::resolve_rva(0x0478C930));
    }
    namespace UserPrivateAccountInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserPrivateAccountInfo__Class** type_info = (::app::UserPrivateAccountInfo__Class**)(modloader::win::memory::resolve_rva(0x04712658));
    }
    namespace UserPsnInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserPsnInfo__Class** type_info = (::app::UserPsnInfo__Class**)(modloader::win::memory::resolve_rva(0x04762760));
    }
    namespace TitleActivationStatus__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TitleActivationStatus__Enum__Class** type_info = (::app::TitleActivationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04774EC0));
    }
    namespace Currency__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Currency__Enum__Class** type_info = (::app::Currency__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730518));
    }
    namespace UserSteamInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserSteamInfo__Class** type_info = (::app::UserSteamInfo__Class**)(modloader::win::memory::resolve_rva(0x047547E0));
    }
    namespace UserOrigination__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserOrigination__Enum__Class** type_info = (::app::UserOrigination__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477E6B8));
    }
    namespace UserTitleInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserTitleInfo__Class** type_info = (::app::UserTitleInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C630));
    }
    namespace EntityKey_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityKey_1__Class** type_info = (::app::EntityKey_1__Class**)(modloader::win::memory::resolve_rva(0x04773100));
    }
    namespace UserTwitchInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserTwitchInfo__Class** type_info = (::app::UserTwitchInfo__Class**)(modloader::win::memory::resolve_rva(0x047076C0));
    }
    namespace UserWindowsHelloInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserWindowsHelloInfo__Class** type_info = (::app::UserWindowsHelloInfo__Class**)(modloader::win::memory::resolve_rva(0x04736950));
    }
    namespace UserXboxInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserXboxInfo__Class** type_info = (::app::UserXboxInfo__Class**)(modloader::win::memory::resolve_rva(0x04765140));
    }
    namespace ListUsersCharactersRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListUsersCharactersRequest__Class** type_info = (::app::ListUsersCharactersRequest__Class**)(modloader::win::memory::resolve_rva(0x0477B688));
    }
    namespace ListUsersCharactersResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListUsersCharactersResult__Class** type_info = (::app::ListUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x047617D8));
    }
    namespace CharacterResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterResult__Class** type_info = (::app::CharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047162B0));
    }
    namespace GetCatalogItemsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCatalogItemsRequest__Class** type_info = (::app::GetCatalogItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719018));
    }
    namespace GetCatalogItemsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCatalogItemsResult__Class** type_info = (::app::GetCatalogItemsResult__Class**)(modloader::win::memory::resolve_rva(0x047281F8));
    }
    namespace GetCharacterDataRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterDataRequest__Class** type_info = (::app::GetCharacterDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0474FF10));
    }
    namespace GetCharacterDataResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterDataResult__Class** type_info = (::app::GetCharacterDataResult__Class**)(modloader::win::memory::resolve_rva(0x0473D460));
    }
    namespace UserDataPermission__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserDataPermission__Enum__Class** type_info = (::app::UserDataPermission__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CEF8));
    }
    namespace UserDataRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserDataRecord__Class** type_info = (::app::UserDataRecord__Class**)(modloader::win::memory::resolve_rva(0x0475B4B0));
    }
    namespace GetCharacterInventoryRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterInventoryRequest__Class** type_info = (::app::GetCharacterInventoryRequest__Class**)(modloader::win::memory::resolve_rva(0x0475C260));
    }
    namespace GetCharacterInventoryResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterInventoryResult__Class** type_info = (::app::GetCharacterInventoryResult__Class**)(modloader::win::memory::resolve_rva(0x04722400));
    }
    namespace VirtualCurrencyRechargeTime {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualCurrencyRechargeTime__Class** type_info = (::app::VirtualCurrencyRechargeTime__Class**)(modloader::win::memory::resolve_rva(0x04783D30));
    }
    namespace GetCharacterLeaderboardRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterLeaderboardRequest__Class** type_info = (::app::GetCharacterLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x04794B00));
    }
    namespace GetCharacterLeaderboardResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterLeaderboardResult__Class** type_info = (::app::GetCharacterLeaderboardResult__Class**)(modloader::win::memory::resolve_rva(0x04728108));
    }
    namespace GetCharacterStatisticsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterStatisticsRequest__Class** type_info = (::app::GetCharacterStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472F988));
    }
    namespace GetCharacterStatisticsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetCharacterStatisticsResult__Class** type_info = (::app::GetCharacterStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x0471CB48));
    }
    namespace GetContentDownloadUrlRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetContentDownloadUrlRequest__Class** type_info = (::app::GetContentDownloadUrlRequest__Class**)(modloader::win::memory::resolve_rva(0x04756838));
    }
    namespace GetContentDownloadUrlResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetContentDownloadUrlResult__Class** type_info = (::app::GetContentDownloadUrlResult__Class**)(modloader::win::memory::resolve_rva(0x0470C348));
    }
    namespace CurrentGamesRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CurrentGamesRequest__Class** type_info = (::app::CurrentGamesRequest__Class**)(modloader::win::memory::resolve_rva(0x04786CF0));
    }
    namespace CurrentGamesResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CurrentGamesResult__Class** type_info = (::app::CurrentGamesResult__Class**)(modloader::win::memory::resolve_rva(0x04735AC8));
    }
    namespace GetFriendLeaderboardRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendLeaderboardRequest__Class** type_info = (::app::GetFriendLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x047522C8));
    }
    namespace PlayerProfileViewConstraints {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerProfileViewConstraints__Class** type_info = (::app::PlayerProfileViewConstraints__Class**)(modloader::win::memory::resolve_rva(0x04726500));
    }
    namespace GetLeaderboardResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardResult__Class** type_info = (::app::GetLeaderboardResult__Class**)(modloader::win::memory::resolve_rva(0x04762738));
    }
    namespace PlayerLeaderboardEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerLeaderboardEntry__Class** type_info = (::app::PlayerLeaderboardEntry__Class**)(modloader::win::memory::resolve_rva(0x0472DB68));
    }
    namespace LoginIdentityProvider__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LoginIdentityProvider__Enum__Class** type_info = (::app::LoginIdentityProvider__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730548));
    }
    namespace PlayerProfileModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerProfileModel__Class** type_info = (::app::PlayerProfileModel__Class**)(modloader::win::memory::resolve_rva(0x04739D78));
    }
    namespace AdCampaignAttributionModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AdCampaignAttributionModel__Class** type_info = (::app::AdCampaignAttributionModel__Class**)(modloader::win::memory::resolve_rva(0x0475C230));
    }
    namespace EmailVerificationStatus__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EmailVerificationStatus__Enum__Class** type_info = (::app::EmailVerificationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BF90));
    }
    namespace ContactEmailInfoModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ContactEmailInfoModel__Class** type_info = (::app::ContactEmailInfoModel__Class**)(modloader::win::memory::resolve_rva(0x0471E7B8));
    }
    namespace LinkedPlatformAccountModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LinkedPlatformAccountModel__Class** type_info = (::app::LinkedPlatformAccountModel__Class**)(modloader::win::memory::resolve_rva(0x04771118));
    }
    namespace ContinentCode__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ContinentCode__Enum__Class** type_info = (::app::ContinentCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04726B10));
    }
    namespace CountryCode__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CountryCode__Enum__Class** type_info = (::app::CountryCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047554E8));
    }
    namespace LocationModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LocationModel__Class** type_info = (::app::LocationModel__Class**)(modloader::win::memory::resolve_rva(0x04775068));
    }
    namespace MembershipModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MembershipModel__Class** type_info = (::app::MembershipModel__Class**)(modloader::win::memory::resolve_rva(0x0474EB08));
    }
    namespace SubscriptionProviderStatus__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubscriptionProviderStatus__Enum__Class** type_info = (::app::SubscriptionProviderStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725FE0));
    }
    namespace SubscriptionModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SubscriptionModel__Class** type_info = (::app::SubscriptionModel__Class**)(modloader::win::memory::resolve_rva(0x04792C00));
    }
    namespace PushNotificationPlatform__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PushNotificationPlatform__Enum__Class** type_info = (::app::PushNotificationPlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705A48));
    }
    namespace PushNotificationRegistrationModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PushNotificationRegistrationModel__Class** type_info = (::app::PushNotificationRegistrationModel__Class**)(modloader::win::memory::resolve_rva(0x04761828));
    }
    namespace StatisticModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticModel__Class** type_info = (::app::StatisticModel__Class**)(modloader::win::memory::resolve_rva(0x04746AC0));
    }
    namespace TagModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TagModel__Class** type_info = (::app::TagModel__Class**)(modloader::win::memory::resolve_rva(0x047504D8));
    }
    namespace ValueToDateModel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ValueToDateModel__Class** type_info = (::app::ValueToDateModel__Class**)(modloader::win::memory::resolve_rva(0x047259B0));
    }
    namespace GetFriendLeaderboardAroundPlayerRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendLeaderboardAroundPlayerRequest__Class** type_info = (::app::GetFriendLeaderboardAroundPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04775A28));
    }
    namespace GetFriendLeaderboardAroundPlayerResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendLeaderboardAroundPlayerResult__Class** type_info = (::app::GetFriendLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04753280));
    }
    namespace GetFriendsListRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendsListRequest__Class** type_info = (::app::GetFriendsListRequest__Class**)(modloader::win::memory::resolve_rva(0x0475DE20));
    }
    namespace GetFriendsListResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetFriendsListResult__Class** type_info = (::app::GetFriendsListResult__Class**)(modloader::win::memory::resolve_rva(0x04754338));
    }
    namespace FriendInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FriendInfo__Class** type_info = (::app::FriendInfo__Class**)(modloader::win::memory::resolve_rva(0x04708E60));
    }
    namespace GameServerRegionsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameServerRegionsRequest__Class** type_info = (::app::GameServerRegionsRequest__Class**)(modloader::win::memory::resolve_rva(0x04770768));
    }
    namespace GameServerRegionsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameServerRegionsResult__Class** type_info = (::app::GameServerRegionsResult__Class**)(modloader::win::memory::resolve_rva(0x0477E9C8));
    }
    namespace GetLeaderboardRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardRequest__Class** type_info = (::app::GetLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F088));
    }
    namespace GetLeaderboardAroundCharacterRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundCharacterRequest__Class** type_info = (::app::GetLeaderboardAroundCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x047164C8));
    }
    namespace GetLeaderboardAroundCharacterResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundCharacterResult__Class** type_info = (::app::GetLeaderboardAroundCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047248A0));
    }
    namespace GetLeaderboardAroundPlayerRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundPlayerRequest__Class** type_info = (::app::GetLeaderboardAroundPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x0474D238));
    }
    namespace GetLeaderboardAroundPlayerResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardAroundPlayerResult__Class** type_info = (::app::GetLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x047725E0));
    }
    namespace GetLeaderboardForUsersCharactersRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardForUsersCharactersRequest__Class** type_info = (::app::GetLeaderboardForUsersCharactersRequest__Class**)(modloader::win::memory::resolve_rva(0x04798BB8));
    }
    namespace GetLeaderboardForUsersCharactersResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetLeaderboardForUsersCharactersResult__Class** type_info = (::app::GetLeaderboardForUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x0471DFC0));
    }
    namespace GetPaymentTokenRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPaymentTokenRequest__Class** type_info = (::app::GetPaymentTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x047587B8));
    }
    namespace GetPaymentTokenResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPaymentTokenResult__Class** type_info = (::app::GetPaymentTokenResult__Class**)(modloader::win::memory::resolve_rva(0x04752EE8));
    }
    namespace GetPhotonAuthenticationTokenRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPhotonAuthenticationTokenRequest__Class** type_info = (::app::GetPhotonAuthenticationTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DB98));
    }
    namespace GetPhotonAuthenticationTokenResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPhotonAuthenticationTokenResult__Class** type_info = (::app::GetPhotonAuthenticationTokenResult__Class**)(modloader::win::memory::resolve_rva(0x047085D0));
    }
    namespace GetPlayerCombinedInfoRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoRequest__Class** type_info = (::app::GetPlayerCombinedInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x0475CB08));
    }
    namespace GetPlayerCombinedInfoRequestParams {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoRequestParams__Class** type_info = (::app::GetPlayerCombinedInfoRequestParams__Class**)(modloader::win::memory::resolve_rva(0x04783840));
    }
    namespace GetPlayerCombinedInfoResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoResult__Class** type_info = (::app::GetPlayerCombinedInfoResult__Class**)(modloader::win::memory::resolve_rva(0x0475CE60));
    }
    namespace GetPlayerCombinedInfoResultPayload {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerCombinedInfoResultPayload__Class** type_info = (::app::GetPlayerCombinedInfoResultPayload__Class**)(modloader::win::memory::resolve_rva(0x0478FFB0));
    }
    namespace CharacterInventory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CharacterInventory__Class** type_info = (::app::CharacterInventory__Class**)(modloader::win::memory::resolve_rva(0x04730348));
    }
    namespace StatisticValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticValue__Class** type_info = (::app::StatisticValue__Class**)(modloader::win::memory::resolve_rva(0x04729A68));
    }
    namespace GetPlayerProfileRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerProfileRequest__Class** type_info = (::app::GetPlayerProfileRequest__Class**)(modloader::win::memory::resolve_rva(0x04734820));
    }
    namespace GetPlayerProfileResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerProfileResult__Class** type_info = (::app::GetPlayerProfileResult__Class**)(modloader::win::memory::resolve_rva(0x047029D8));
    }
    namespace GetPlayerSegmentsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerSegmentsRequest__Class** type_info = (::app::GetPlayerSegmentsRequest__Class**)(modloader::win::memory::resolve_rva(0x04774A10));
    }
    namespace GetPlayerSegmentsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerSegmentsResult__Class** type_info = (::app::GetPlayerSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x0470B910));
    }
    namespace GetPlayerStatisticsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticsRequest__Class** type_info = (::app::GetPlayerStatisticsRequest__Class**)(modloader::win::memory::resolve_rva(0x04793250));
    }
    namespace StatisticNameVersion {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StatisticNameVersion__Class** type_info = (::app::StatisticNameVersion__Class**)(modloader::win::memory::resolve_rva(0x04703B00));
    }
    namespace GetPlayerStatisticsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticsResult__Class** type_info = (::app::GetPlayerStatisticsResult__Class**)(modloader::win::memory::resolve_rva(0x04702240));
    }
    namespace GetPlayerStatisticVersionsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticVersionsRequest__Class** type_info = (::app::GetPlayerStatisticVersionsRequest__Class**)(modloader::win::memory::resolve_rva(0x047741E0));
    }
    namespace GetPlayerStatisticVersionsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerStatisticVersionsResult__Class** type_info = (::app::GetPlayerStatisticVersionsResult__Class**)(modloader::win::memory::resolve_rva(0x0476A090));
    }
    namespace GetPlayerTagsRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTagsRequest__Class** type_info = (::app::GetPlayerTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x04707438));
    }
    namespace GetPlayerTagsResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTagsResult__Class** type_info = (::app::GetPlayerTagsResult__Class**)(modloader::win::memory::resolve_rva(0x04777800));
    }
    namespace GetPlayerTradesRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTradesRequest__Class** type_info = (::app::GetPlayerTradesRequest__Class**)(modloader::win::memory::resolve_rva(0x04766768));
    }
    namespace GetPlayerTradesResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GetPlayerTradesResponse__Class** type_info = (::app::GetPlayerTradesResponse__Class**)(modloader::win::memory::resolve_rva(0x0478EBB8));
    }
} // namespace app::classes::types
