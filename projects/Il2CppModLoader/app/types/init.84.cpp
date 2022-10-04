#include <Il2CppModLoader/app/types/Browser.h>
#include <Il2CppModLoader/app/types/BrowserFocusState.h>
#include <Il2CppModLoader/app/types/BrowserInput.h>
#include <Il2CppModLoader/app/types/BrowserInput_ButtonHistory.h>
#include <Il2CppModLoader/app/types/BrowserNative_ContextMenuOrigin__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_GetCookieFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_NativeCookie.h>
#include <Il2CppModLoader/app/types/BrowserNative_ReadyFunc.h>
#include <Il2CppModLoader/app/types/BrowserNavState.h>
#include <Il2CppModLoader/app/types/Browser_JSResultFunc.h>
#include <Il2CppModLoader/app/types/CSteamID.h>
#include <Il2CppModLoader/app/types/CookieManager.h>
#include <Il2CppModLoader/app/types/CookieManager_CookieFetch.h>
#include <Il2CppModLoader/app/types/Cookie_1.h>
#include <Il2CppModLoader/app/types/DataProvider.h>
#include <Il2CppModLoader/app/types/DataProvider_c.h>
#include <Il2CppModLoader/app/types/DataProvider_c_DisplayClass13_0.h>
#include <Il2CppModLoader/app/types/DataProvider_c_DisplayClass14_0.h>
#include <Il2CppModLoader/app/types/DialogHandler.h>
#include <Il2CppModLoader/app/types/DialogHandler_DialogCallback.h>
#include <Il2CppModLoader/app/types/DialogHandler_MenuCallback.h>
#include <Il2CppModLoader/app/types/ExtendedPlayerLeaderBoardEntries.h>
#include <Il2CppModLoader/app/types/FeedingGroundsPetrifiedOwlController.h>
#include <Il2CppModLoader/app/types/FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum.h>
#include <Il2CppModLoader/app/types/GrdkAchievements.h>
#include <Il2CppModLoader/app/types/GrdkSignInProvider.h>
#include <Il2CppModLoader/app/types/IAchievementData.h>
#include <Il2CppModLoader/app/types/IBrowserUI.h>
#include <Il2CppModLoader/app/types/INewWindowHandler.h>
#include <Il2CppModLoader/app/types/IPromise.h>
#include <Il2CppModLoader/app/types/IRejectable.h>
#include <Il2CppModLoader/app/types/IServiceSynchronizer.h>
#include <Il2CppModLoader/app/types/IUpdateable.h>
#include <Il2CppModLoader/app/types/JSONNode.h>
#include <Il2CppModLoader/app/types/JSONNode__Array.h>
#include <Il2CppModLoader/app/types/NintendoPlayFabSynchronizer.h>
#include <Il2CppModLoader/app/types/NintendoPlayFabSynchronizer_c.h>
#include <Il2CppModLoader/app/types/NintendoPlayFabSynchronizer_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/NintendoPlayFabSynchronizer_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum.h>
#include <Il2CppModLoader/app/types/PetrifiedOwlFeedingGroundsState__Enum.h>
#include <Il2CppModLoader/app/types/PlatformRemoteConnectClosePromptEventHandler.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements_c.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements_c_DisplayClass16_0.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/PlayFabAchievements_c_DisplayClass18_1.h>
#include <Il2CppModLoader/app/types/PlayFabJsonSerializer.h>
#include <Il2CppModLoader/app/types/PlayFabJsonSerializer_c.h>
#include <Il2CppModLoader/app/types/PlayFabSignInProvider_c.h>
#include <Il2CppModLoader/app/types/PlayFabSignInProvider_c_DisplayClass49_0.h>
#include <Il2CppModLoader/app/types/PlayFabSignInProvider_c_DisplayClass54_0.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics_c.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics_c_DisplayClass14_0.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics_c_DisplayClass14_1.h>
#include <Il2CppModLoader/app/types/PlayFabStatistics_c_DisplayClass15_0.h>
#include <Il2CppModLoader/app/types/PlayFabTelemetryProvider.h>
#include <Il2CppModLoader/app/types/PromiseState__Enum.h>
#include <Il2CppModLoader/app/types/RejectHandler.h>
#include <Il2CppModLoader/app/types/SkillUpgradeScreen.h>
#include <Il2CppModLoader/app/types/SkillUpgradeScreen_c.h>
#include <Il2CppModLoader/app/types/StatsScreen.h>
#include <Il2CppModLoader/app/types/StatsScreen_c.h>
#include <Il2CppModLoader/app/types/SteamAchievements.h>
#include <Il2CppModLoader/app/types/SteamAchievements_c_DisplayClass15_0.h>
#include <Il2CppModLoader/app/types/SteamSignInProvider.h>
#include <Il2CppModLoader/app/types/SteamUser.h>
#include <Il2CppModLoader/app/types/SwitchNetConnectivityChecker_c.h>
#include <Il2CppModLoader/app/types/SystemIntegrationMainThreadRunner.h>
#include <Il2CppModLoader/app/types/TwoDataProviderSynchronizer.h>
#include <Il2CppModLoader/app/types/UpgradeAbilityItem.h>
#include <Il2CppModLoader/app/types/UserAchievementStored_t.h>
#include <Il2CppModLoader/app/types/UserChangeEventArgs.h>
#include <Il2CppModLoader/app/types/UserStatsReceived_t.h>
#include <Il2CppModLoader/app/types/UserStatsStored_t.h>
#include <Il2CppModLoader/app/types/WeaponmasterItem.h>
#include <Il2CppModLoader/app/types/WeaponmasterScreen.h>
#include <Il2CppModLoader/app/types/WindImpactEffectSpawner_Trace__Array.h>
#include <Il2CppModLoader/app/types/WindowsNetConnectivityChecker.h>
#include <Il2CppModLoader/app/types/XProgressState__Enum.h>
#include <Il2CppModLoader/app/types/XalAchievements.h>
#include <Il2CppModLoader/app/types/XalAchievements_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/XalAchievements_c_DisplayClass20_0.h>
#include <Il2CppModLoader/app/types/XalBrowserWrapper.h>
#include <Il2CppModLoader/app/types/XalHttpHeader.h>
#include <Il2CppModLoader/app/types/XalSignInProvider.h>
#include <Il2CppModLoader/app/types/XalSignInProvider_c.h>
#include <Il2CppModLoader/app/types/XalTraceLevel__Enum.h>
#include <Il2CppModLoader/app/types/XalUser.h>
#include <Il2CppModLoader/app/types/XalUserChangeType__Enum.h>
#include <Il2CppModLoader/app/types/XalUserGetTokenAndSignatureData.h>
#include <Il2CppModLoader/app/types/XalUser_1.h>
#include <Il2CppModLoader/app/types/XalUser_c.h>
#include <Il2CppModLoader/app/types/XalUser_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/XboxNetConnectivityChecker.h>
#include <Il2CppModLoader/app/types/XboxSignInProvider.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatsScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StatsScreen__Class** type_info = (::app::StatsScreen__Class**)(modloader::win::memory::resolve_rva(0x04705640));
    }
    namespace StatsScreen_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StatsScreen_c__Class** type_info = (::app::StatsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04746D50));
    }
    namespace SkillUpgradeScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillUpgradeScreen__Class** type_info = (::app::SkillUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x04777C18));
    }
    namespace UpgradeAbilityItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpgradeAbilityItem__Class** type_info = (::app::UpgradeAbilityItem__Class**)(modloader::win::memory::resolve_rva(0x0476A540));
    }
    namespace SkillUpgradeScreen_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkillUpgradeScreen_c__Class** type_info = (::app::SkillUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04720030));
    }
    namespace WeaponmasterItem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponmasterItem__Class** type_info = (::app::WeaponmasterItem__Class**)(modloader::win::memory::resolve_rva(0x04779410));
    }
    namespace WeaponmasterScreen {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WeaponmasterScreen__Class** type_info = (::app::WeaponmasterScreen__Class**)(modloader::win::memory::resolve_rva(0x0477B220));
    }
    namespace WindImpactEffectSpawner_Trace__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindImpactEffectSpawner_Trace__Array__Class** type_info = (::app::WindImpactEffectSpawner_Trace__Array__Class**)(modloader::win::memory::resolve_rva(0x04785BC0));
    }
    namespace PetrifiedOwlFeedingGroundsState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlFeedingGroundsState__Enum__Class** type_info = (::app::PetrifiedOwlFeedingGroundsState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047505B8));
    }
    namespace FeedingGroundsPetrifiedOwlController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FeedingGroundsPetrifiedOwlController__Class** type_info = (::app::FeedingGroundsPetrifiedOwlController__Class**)(modloader::win::memory::resolve_rva(0x0477FDC8));
    }
    namespace FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class** type_info = (::app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04761F68));
    }
    namespace PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class** type_info = (::app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x047853D8));
    }
    namespace PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class** type_info = (::app::PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04750C00));
    }
    namespace PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class** type_info = (::app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787F18));
    }
    namespace SwitchNetConnectivityChecker_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SwitchNetConnectivityChecker_c__Class** type_info = (::app::SwitchNetConnectivityChecker_c__Class**)(modloader::win::memory::resolve_rva(0x0470D640));
    }
    namespace WindowsNetConnectivityChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WindowsNetConnectivityChecker__Class** type_info = (::app::WindowsNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x04794968));
    }
    namespace XboxNetConnectivityChecker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxNetConnectivityChecker__Class** type_info = (::app::XboxNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x0472AC40));
    }
    namespace IAchievementData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IAchievementData__Class** type_info = (::app::IAchievementData__Class**)(modloader::win::memory::resolve_rva(0x0471EEF0));
    }
    namespace GrdkSignInProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrdkSignInProvider__Class** type_info = (::app::GrdkSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F4C0));
    }
    namespace PlayFabSignInProvider_c_DisplayClass49_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSignInProvider_c_DisplayClass49_0__Class** type_info = (::app::PlayFabSignInProvider_c_DisplayClass49_0__Class**)(modloader::win::memory::resolve_rva(0x04788600));
    }
    namespace PlayFabSignInProvider_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSignInProvider_c__Class** type_info = (::app::PlayFabSignInProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0478CED8));
    }
    namespace PlayFabSignInProvider_c_DisplayClass54_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabSignInProvider_c_DisplayClass54_0__Class** type_info = (::app::PlayFabSignInProvider_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x0471E070));
    }
    namespace SteamSignInProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SteamSignInProvider__Class** type_info = (::app::SteamSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x04796C60));
    }
    namespace SteamUser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SteamUser__Class** type_info = (::app::SteamUser__Class**)(modloader::win::memory::resolve_rva(0x0478EA28));
    }
    namespace XalUser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUser__Class** type_info = (::app::XalUser__Class**)(modloader::win::memory::resolve_rva(0x04742FB0));
    }
    namespace XalUser_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUser_1__Class** type_info = (::app::XalUser_1__Class**)(modloader::win::memory::resolve_rva(0x04791520));
    }
    namespace XalUserChangeType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUserChangeType__Enum__Class** type_info = (::app::XalUserChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04702B08));
    }
    namespace UserChangeEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserChangeEventArgs__Class** type_info = (::app::UserChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478AB10));
    }
    namespace XalHttpHeader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalHttpHeader__Class** type_info = (::app::XalHttpHeader__Class**)(modloader::win::memory::resolve_rva(0x047346C8));
    }
    namespace XalUserGetTokenAndSignatureData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUserGetTokenAndSignatureData__Class** type_info = (::app::XalUserGetTokenAndSignatureData__Class**)(modloader::win::memory::resolve_rva(0x0470DE60));
    }
    namespace XalUser_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUser_c__Class** type_info = (::app::XalUser_c__Class**)(modloader::win::memory::resolve_rva(0x04731BE8));
    }
    namespace XalUser_c_DisplayClass18_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalUser_c_DisplayClass18_0__Class** type_info = (::app::XalUser_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x0472F650));
    }
    namespace XalBrowserWrapper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalBrowserWrapper__Class** type_info = (::app::XalBrowserWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472DB18));
    }
    namespace BrowserNative_ContextMenuOrigin__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ContextMenuOrigin__Enum__Class** type_info = (::app::BrowserNative_ContextMenuOrigin__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758888));
    }
    namespace Browser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser__Class** type_info = (::app::Browser__Class**)(modloader::win::memory::resolve_rva(0x04731500));
    }
    namespace INewWindowHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::INewWindowHandler__Class** type_info = (::app::INewWindowHandler__Class**)(modloader::win::memory::resolve_rva(0x04762E18));
    }
    namespace IBrowserUI {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBrowserUI__Class** type_info = (::app::IBrowserUI__Class**)(modloader::win::memory::resolve_rva(0x04724ED0));
    }
    namespace CookieManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieManager__Class** type_info = (::app::CookieManager__Class**)(modloader::win::memory::resolve_rva(0x0475F190));
    }
    namespace CookieManager_CookieFetch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieManager_CookieFetch__Class** type_info = (::app::CookieManager_CookieFetch__Class**)(modloader::win::memory::resolve_rva(0x0472FBF8));
    }
    namespace BrowserNative_GetCookieFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_GetCookieFunc__Class** type_info = (::app::BrowserNative_GetCookieFunc__Class**)(modloader::win::memory::resolve_rva(0x04752620));
    }
    namespace BrowserNative_NativeCookie {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_NativeCookie__Class** type_info = (::app::BrowserNative_NativeCookie__Class**)(modloader::win::memory::resolve_rva(0x04756EC0));
    }
    namespace PromiseState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PromiseState__Enum__Class** type_info = (::app::PromiseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790980));
    }
    namespace Cookie_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Cookie_1__Class** type_info = (::app::Cookie_1__Class**)(modloader::win::memory::resolve_rva(0x04796460));
    }
    namespace RejectHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RejectHandler__Class** type_info = (::app::RejectHandler__Class**)(modloader::win::memory::resolve_rva(0x0475AB98));
    }
    namespace IRejectable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IRejectable__Class** type_info = (::app::IRejectable__Class**)(modloader::win::memory::resolve_rva(0x04719020));
    }
    namespace IPromise {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPromise__Class** type_info = (::app::IPromise__Class**)(modloader::win::memory::resolve_rva(0x0478BF78));
    }
    namespace Browser_JSResultFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_JSResultFunc__Class** type_info = (::app::Browser_JSResultFunc__Class**)(modloader::win::memory::resolve_rva(0x04754210));
    }
    namespace JSONNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JSONNode__Class** type_info = (::app::JSONNode__Class**)(modloader::win::memory::resolve_rva(0x047609B0));
    }
    namespace JSONNode__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JSONNode__Array__Class** type_info = (::app::JSONNode__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D1E8));
    }
    namespace BrowserNative_ReadyFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ReadyFunc__Class** type_info = (::app::BrowserNative_ReadyFunc__Class**)(modloader::win::memory::resolve_rva(0x047174A8));
    }
    namespace BrowserFocusState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserFocusState__Class** type_info = (::app::BrowserFocusState__Class**)(modloader::win::memory::resolve_rva(0x0470B460));
    }
    namespace BrowserInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserInput__Class** type_info = (::app::BrowserInput__Class**)(modloader::win::memory::resolve_rva(0x0471F010));
    }
    namespace BrowserInput_ButtonHistory {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserInput_ButtonHistory__Class** type_info = (::app::BrowserInput_ButtonHistory__Class**)(modloader::win::memory::resolve_rva(0x0470D238));
    }
    namespace BrowserNavState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNavState__Class** type_info = (::app::BrowserNavState__Class**)(modloader::win::memory::resolve_rva(0x04757318));
    }
    namespace DialogHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DialogHandler__Class** type_info = (::app::DialogHandler__Class**)(modloader::win::memory::resolve_rva(0x0473B4E0));
    }
    namespace DialogHandler_DialogCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DialogHandler_DialogCallback__Class** type_info = (::app::DialogHandler_DialogCallback__Class**)(modloader::win::memory::resolve_rva(0x04723F08));
    }
    namespace DialogHandler_MenuCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DialogHandler_MenuCallback__Class** type_info = (::app::DialogHandler_MenuCallback__Class**)(modloader::win::memory::resolve_rva(0x04755DC0));
    }
    namespace XalSignInProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalSignInProvider__Class** type_info = (::app::XalSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x04711F70));
    }
    namespace XalTraceLevel__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalTraceLevel__Enum__Class** type_info = (::app::XalTraceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471B428));
    }
    namespace XalSignInProvider_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalSignInProvider_c__Class** type_info = (::app::XalSignInProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0470A688));
    }
    namespace PlatformRemoteConnectClosePromptEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlatformRemoteConnectClosePromptEventHandler__Class** type_info = (::app::PlatformRemoteConnectClosePromptEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473F560));
    }
    namespace XboxSignInProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XboxSignInProvider__Class** type_info = (::app::XboxSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x047616B0));
    }
    namespace NintendoPlayFabSynchronizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoPlayFabSynchronizer__Class** type_info = (::app::NintendoPlayFabSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x04773A18));
    }
    namespace NintendoPlayFabSynchronizer_c_DisplayClass18_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class** type_info = (::app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04713B48));
    }
    namespace NintendoPlayFabSynchronizer_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoPlayFabSynchronizer_c__Class** type_info = (::app::NintendoPlayFabSynchronizer_c__Class**)(modloader::win::memory::resolve_rva(0x04736F48));
    }
    namespace NintendoPlayFabSynchronizer_c_DisplayClass19_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class** type_info = (::app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04762208));
    }
    namespace SystemIntegrationMainThreadRunner {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SystemIntegrationMainThreadRunner__Class** type_info = (::app::SystemIntegrationMainThreadRunner__Class**)(modloader::win::memory::resolve_rva(0x047274B0));
    }
    namespace IUpdateable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUpdateable__Class** type_info = (::app::IUpdateable__Class**)(modloader::win::memory::resolve_rva(0x04771F18));
    }
    namespace DataProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataProvider__Class** type_info = (::app::DataProvider__Class**)(modloader::win::memory::resolve_rva(0x047972C0));
    }
    namespace IServiceSynchronizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IServiceSynchronizer__Class** type_info = (::app::IServiceSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x04727338));
    }
    namespace DataProvider_c_DisplayClass13_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataProvider_c_DisplayClass13_0__Class** type_info = (::app::DataProvider_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x0473DF08));
    }
    namespace DataProvider_c_DisplayClass14_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataProvider_c_DisplayClass14_0__Class** type_info = (::app::DataProvider_c_DisplayClass14_0__Class**)(modloader::win::memory::resolve_rva(0x0475AC98));
    }
    namespace DataProvider_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DataProvider_c__Class** type_info = (::app::DataProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04710100));
    }
    namespace TwoDataProviderSynchronizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TwoDataProviderSynchronizer__Class** type_info = (::app::TwoDataProviderSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x047588D8));
    }
    namespace PlayFabJsonSerializer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabJsonSerializer__Class** type_info = (::app::PlayFabJsonSerializer__Class**)(modloader::win::memory::resolve_rva(0x04716298));
    }
    namespace PlayFabJsonSerializer_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabJsonSerializer_c__Class** type_info = (::app::PlayFabJsonSerializer_c__Class**)(modloader::win::memory::resolve_rva(0x0477C010));
    }
    namespace PlayFabTelemetryProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabTelemetryProvider__Class** type_info = (::app::PlayFabTelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x04752C48));
    }
    namespace ExtendedPlayerLeaderBoardEntries {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExtendedPlayerLeaderBoardEntries__Class** type_info = (::app::ExtendedPlayerLeaderBoardEntries__Class**)(modloader::win::memory::resolve_rva(0x0478BC60));
    }
    namespace PlayFabStatistics_c_DisplayClass11_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics_c_DisplayClass11_0__Class** type_info = (::app::PlayFabStatistics_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04726950));
    }
    namespace PlayFabStatistics_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics_c__Class** type_info = (::app::PlayFabStatistics_c__Class**)(modloader::win::memory::resolve_rva(0x04741C98));
    }
    namespace PlayFabStatistics_c_DisplayClass14_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics_c_DisplayClass14_0__Class** type_info = (::app::PlayFabStatistics_c_DisplayClass14_0__Class**)(modloader::win::memory::resolve_rva(0x0475ADF0));
    }
    namespace PlayFabStatistics_c_DisplayClass14_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics_c_DisplayClass14_1__Class** type_info = (::app::PlayFabStatistics_c_DisplayClass14_1__Class**)(modloader::win::memory::resolve_rva(0x0473E378));
    }
    namespace PlayFabStatistics_c_DisplayClass15_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabStatistics_c_DisplayClass15_0__Class** type_info = (::app::PlayFabStatistics_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x047133B8));
    }
    namespace GrdkAchievements {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GrdkAchievements__Class** type_info = (::app::GrdkAchievements__Class**)(modloader::win::memory::resolve_rva(0x04724C98));
    }
    namespace PlayFabAchievements {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements__Class** type_info = (::app::PlayFabAchievements__Class**)(modloader::win::memory::resolve_rva(0x04737F30));
    }
    namespace PlayFabAchievements_c_DisplayClass16_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements_c_DisplayClass16_0__Class** type_info = (::app::PlayFabAchievements_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x0477A5E8));
    }
    namespace PlayFabAchievements_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements_c__Class** type_info = (::app::PlayFabAchievements_c__Class**)(modloader::win::memory::resolve_rva(0x0473B3B8));
    }
    namespace PlayFabAchievements_c_DisplayClass17_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements_c_DisplayClass17_0__Class** type_info = (::app::PlayFabAchievements_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x047497F0));
    }
    namespace PlayFabAchievements_c_DisplayClass18_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements_c_DisplayClass18_0__Class** type_info = (::app::PlayFabAchievements_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x0477A2D8));
    }
    namespace PlayFabAchievements_c_DisplayClass18_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayFabAchievements_c_DisplayClass18_1__Class** type_info = (::app::PlayFabAchievements_c_DisplayClass18_1__Class**)(modloader::win::memory::resolve_rva(0x0471C8C8));
    }
    namespace SteamAchievements {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SteamAchievements__Class** type_info = (::app::SteamAchievements__Class**)(modloader::win::memory::resolve_rva(0x04784DB8));
    }
    namespace UserAchievementStored_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserAchievementStored_t__Class** type_info = (::app::UserAchievementStored_t__Class**)(modloader::win::memory::resolve_rva(0x047961B0));
    }
    namespace UserStatsStored_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserStatsStored_t__Class** type_info = (::app::UserStatsStored_t__Class**)(modloader::win::memory::resolve_rva(0x04782D78));
    }
    namespace CSteamID {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CSteamID__Class** type_info = (::app::CSteamID__Class**)(modloader::win::memory::resolve_rva(0x04746E48));
    }
    namespace UserStatsReceived_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UserStatsReceived_t__Class** type_info = (::app::UserStatsReceived_t__Class**)(modloader::win::memory::resolve_rva(0x04708C48));
    }
    namespace SteamAchievements_c_DisplayClass15_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SteamAchievements_c_DisplayClass15_0__Class** type_info = (::app::SteamAchievements_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x0473E1E8));
    }
    namespace XProgressState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XProgressState__Enum__Class** type_info = (::app::XProgressState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477E990));
    }
    namespace XalAchievements {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements__Class** type_info = (::app::XalAchievements__Class**)(modloader::win::memory::resolve_rva(0x04759EF8));
    }
    namespace XalAchievements_c_DisplayClass19_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements_c_DisplayClass19_0__Class** type_info = (::app::XalAchievements_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x047789B0));
    }
    namespace XalAchievements_c_DisplayClass20_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XalAchievements_c_DisplayClass20_0__Class** type_info = (::app::XalAchievements_c_DisplayClass20_0__Class**)(modloader::win::memory::resolve_rva(0x047640A0));
    }
} // namespace app::classes::types
