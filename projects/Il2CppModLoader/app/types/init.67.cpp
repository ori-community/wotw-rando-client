#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/ControlSettingsItem.h>
#include <Il2CppModLoader/app/types/ControlListGridController_c.h>
#include <Il2CppModLoader/app/types/ControlSchemeGridController_c.h>
#include <Il2CppModLoader/app/types/ControlsScreen.h>
#include <Il2CppModLoader/app/types/PlayerInputRebinding_KeyBindingSettings.h>
#include <Il2CppModLoader/app/types/ControlsScreen_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/ControlsScreen_c_DisplayClass11_1.h>
#include <Il2CppModLoader/app/types/ControlsScreen_c_DisplayClass11_2.h>
#include <Il2CppModLoader/app/types/UnlockedCutscenes__Enum.h>
#include <Il2CppModLoader/app/types/DisplayScaleSlider.h>
#include <Il2CppModLoader/app/types/FPSLimitSlider.h>
#include <Il2CppModLoader/app/types/GameParameters.h>
#include <Il2CppModLoader/app/types/PCQualityModeManager_QualityMode__Enum.h>
#include <Il2CppModLoader/app/types/KeyboardLayout__Enum.h>
#include <Il2CppModLoader/app/types/ShowUIType__Enum.h>
#include <Il2CppModLoader/app/types/GameSettings.h>
#include <Il2CppModLoader/app/types/GameSettings_SwapOutputs_d_264.h>
#include <Il2CppModLoader/app/types/HideMenuAction.h>
#include <Il2CppModLoader/app/types/KeyboardLayoutOptions.h>
#include <Il2CppModLoader/app/types/EquipmentScreen_State__Enum.h>
#include <Il2CppModLoader/app/types/EquipmentScreen.h>
#include <Il2CppModLoader/app/types/NameOptions.h>
#include <Il2CppModLoader/app/types/NameOptions_c_DisplayClass19_0.h>
#include <Il2CppModLoader/app/types/NameOptions_c_DisplayClass19_1.h>
#include <Il2CppModLoader/app/types/OptionsScreen.h>
#include <Il2CppModLoader/app/types/OptionsScreen_c.h>
#include <Il2CppModLoader/app/types/OptionsScreenTextsManager.h>
#include <Il2CppModLoader/app/types/TranslatedMessageProvider.h>
#include <Il2CppModLoader/app/types/TranslatedMessageProvider_MessageItem.h>
#include <Il2CppModLoader/app/types/Input_Command__Enum.h>
#include <Il2CppModLoader/app/types/SpiritShardsShopScreen.h>
#include <Il2CppModLoader/app/types/SpiritShardShopUIItem_Context.h>
#include <Il2CppModLoader/app/types/RaceContentType__Enum.h>
#include <Il2CppModLoader/app/types/LeaderBoardEntry.h>
#include <Il2CppModLoader/app/types/RaceLeaderboardScreen_c.h>
#include <Il2CppModLoader/app/types/RaceSettings.h>
#include <Il2CppModLoader/app/types/INetworkConnectivityChecker.h>
#include <Il2CppModLoader/app/types/LeaderBoardService.h>
#include <Il2CppModLoader/app/types/Database.h>
#include <Il2CppModLoader/app/types/RaceLeaderBoard.h>
#include <Il2CppModLoader/app/types/LeaderboardFilter__Enum.h>
#include <Il2CppModLoader/app/types/ResolutionOptions.h>
#include <Il2CppModLoader/app/types/ResolutionOptions_ResolutionEntry.h>
#include <Il2CppModLoader/app/types/ResolutionOptions_ResolutionComparer.h>
#include <Il2CppModLoader/app/types/ResolutionOptions_c_DisplayClass5_0.h>
#include <Il2CppModLoader/app/types/ResolutionOptions_c.h>
#include <Il2CppModLoader/app/types/SettingsScreen.h>
#include <Il2CppModLoader/app/types/HideWhenMainMenuOpen.h>
#include <Il2CppModLoader/app/types/InventoryScreen2.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_Screens__Enum.h>
#include <Il2CppModLoader/app/types/MenuScreenManager.h>
#include <Il2CppModLoader/app/types/ISKipUiBackgroundBlur.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_Screens__Enum__Array.h>
#include <Il2CppModLoader/app/types/ResumeGameController.h>
#include <Il2CppModLoader/app/types/IMenuTab.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_c.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_CallNextFrame_d_93.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_c_DisplayClass99_0.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_c_DisplayClass100_0.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_PostFadeMenuOpen_d_100.h>
#include <Il2CppModLoader/app/types/MenuScreenManager_c_DisplayClass112_0.h>
#include <Il2CppModLoader/app/types/PauseScreen.h>
#include <Il2CppModLoader/app/types/RacePauseScreen.h>
#include <Il2CppModLoader/app/types/RestartOneLifeMode_RestartingCleanupNextFrame_d_1.h>
#include <Il2CppModLoader/app/types/ShowInventoryAction_c.h>
#include <Il2CppModLoader/app/types/ISkipCutsceneAction.h>
#include <Il2CppModLoader/app/types/SkipCutsceneController.h>
#include <Il2CppModLoader/app/types/ISkipCutscene.h>
#include <Il2CppModLoader/app/types/SceneManagerScene.h>
#include <Il2CppModLoader/app/types/SkipCutsceneController_c.h>
#include <Il2CppModLoader/app/types/TitleScreenPressStartLogic.h>
#include <Il2CppModLoader/app/types/WaitForSaveGameLogic.h>
#include <Il2CppModLoader/app/types/WaitForSaveGameLogic_c.h>
#include <Il2CppModLoader/app/types/MetaballRenderer_GridSample.h>
#include <Il2CppModLoader/app/types/MetaballRenderer_GridSample__Array.h>
#include <Il2CppModLoader/app/types/MetaballRenderer_IMetaball.h>
#include <Il2CppModLoader/app/types/IRaceSyncable.h>
#include <Il2CppModLoader/app/types/ScoreResult__Enum.h>
#include <Il2CppModLoader/app/types/RaceStateMachineContext.h>
#include <Il2CppModLoader/app/types/RaceConfiguration.h>
#include <Il2CppModLoader/app/types/ITrialData.h>
#include <Il2CppModLoader/app/types/ITrialHandler.h>
#include <Il2CppModLoader/app/types/GhostIndicatorManager.h>
#include <Il2CppModLoader/app/types/FinishHandlerService.h>
#include <Il2CppModLoader/app/types/RacesUiService.h>
#include <Il2CppModLoader/app/types/BossRaceHandler_ChallengeFailedFade_d_15.h>
#include <Il2CppModLoader/app/types/BossRaceHandler_StartMenuRaceNextFrame_d_20.h>
#include <Il2CppModLoader/app/types/GhostService.h>
#include <Il2CppModLoader/app/types/HelperGhostController_OnFinishedRoutive_d_9.h>
#include <Il2CppModLoader/app/types/ActionWithDuration.h>
#include <Il2CppModLoader/app/types/FaderB_State__Enum.h>
#include <Il2CppModLoader/app/types/RaceHandler.h>
#include <Il2CppModLoader/app/types/RaceData.h>
#include <Il2CppModLoader/app/types/RaceHandler_CreateGhostFolder_d_15.h>
#include <Il2CppModLoader/app/types/RaceHandler_StartMenuRaceNextFrame_d_42.h>
#include <Il2CppModLoader/app/types/FinishHandlerService_c.h>
#include <Il2CppModLoader/app/types/RaceBaseState.h>
#include <Il2CppModLoader/app/types/RaceSystem_DebugRaceList__Enum.h>
#include <Il2CppModLoader/app/types/RaceSystem.h>
#include <Il2CppModLoader/app/types/RaceCountdownState.h>

namespace app::classes::types {
    namespace ControlSettingsItem { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlSettingsItem__Class** type_info = (::app::ControlSettingsItem__Class**)(modloader::win::memory::resolve_rva(0x047151F0)); }
    namespace ControlListGridController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlListGridController_c__Class** type_info = (::app::ControlListGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04728CC8)); }
    namespace ControlSchemeGridController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlSchemeGridController_c__Class** type_info = (::app::ControlSchemeGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04722628)); }
    namespace ControlsScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlsScreen__Class** type_info = (::app::ControlsScreen__Class**)(modloader::win::memory::resolve_rva(0x0471CAF8)); }
    namespace PlayerInputRebinding_KeyBindingSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerInputRebinding_KeyBindingSettings__Class** type_info = (::app::PlayerInputRebinding_KeyBindingSettings__Class**)(modloader::win::memory::resolve_rva(0x047697C0)); }
    namespace ControlsScreen_c_DisplayClass11_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlsScreen_c_DisplayClass11_0__Class** type_info = (::app::ControlsScreen_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0477FFA8)); }
    namespace ControlsScreen_c_DisplayClass11_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlsScreen_c_DisplayClass11_1__Class** type_info = (::app::ControlsScreen_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x0471E8E0)); }
    namespace ControlsScreen_c_DisplayClass11_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::ControlsScreen_c_DisplayClass11_2__Class** type_info = (::app::ControlsScreen_c_DisplayClass11_2__Class**)(modloader::win::memory::resolve_rva(0x04712E88)); }
    namespace UnlockedCutscenes__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::UnlockedCutscenes__Enum__Class** type_info = (::app::UnlockedCutscenes__Enum__Class**)(modloader::win::memory::resolve_rva(0x047290B0)); }
    namespace DisplayScaleSlider { IL2CPP_MODLOADER_DLLEXPORT ::app::DisplayScaleSlider__Class** type_info = (::app::DisplayScaleSlider__Class**)(modloader::win::memory::resolve_rva(0x04798D68)); }
    namespace FPSLimitSlider { IL2CPP_MODLOADER_DLLEXPORT ::app::FPSLimitSlider__Class** type_info = (::app::FPSLimitSlider__Class**)(modloader::win::memory::resolve_rva(0x0473AB58)); }
    namespace GameParameters { IL2CPP_MODLOADER_DLLEXPORT ::app::GameParameters__Class** type_info = (::app::GameParameters__Class**)(modloader::win::memory::resolve_rva(0x04797D08)); }
    namespace PCQualityModeManager_QualityMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::PCQualityModeManager_QualityMode__Enum__Class** type_info = (::app::PCQualityModeManager_QualityMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743A90)); }
    namespace KeyboardLayout__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyboardLayout__Enum__Class** type_info = (::app::KeyboardLayout__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474FC08)); }
    namespace ShowUIType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ShowUIType__Enum__Class** type_info = (::app::ShowUIType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753F20)); }
    namespace GameSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::GameSettings__Class** type_info = (::app::GameSettings__Class**)(modloader::win::memory::resolve_rva(0x0478D378)); }
    namespace GameSettings_SwapOutputs_d_264 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameSettings_SwapOutputs_d_264__Class** type_info = (::app::GameSettings_SwapOutputs_d_264__Class**)(modloader::win::memory::resolve_rva(0x047144F0)); }
    namespace HideMenuAction { IL2CPP_MODLOADER_DLLEXPORT ::app::HideMenuAction__Class** type_info = (::app::HideMenuAction__Class**)(modloader::win::memory::resolve_rva(0x0475A748)); }
    namespace KeyboardLayoutOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyboardLayoutOptions__Class** type_info = (::app::KeyboardLayoutOptions__Class**)(modloader::win::memory::resolve_rva(0x047617C8)); }
    namespace EquipmentScreen_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentScreen_State__Enum__Class** type_info = (::app::EquipmentScreen_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476A810)); }
    namespace EquipmentScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::EquipmentScreen__Class** type_info = (::app::EquipmentScreen__Class**)(modloader::win::memory::resolve_rva(0x0477E788)); }
    namespace NameOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::NameOptions__Class** type_info = (::app::NameOptions__Class**)(modloader::win::memory::resolve_rva(0x04700A98)); }
    namespace NameOptions_c_DisplayClass19_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::NameOptions_c_DisplayClass19_0__Class** type_info = (::app::NameOptions_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04782DA8)); }
    namespace NameOptions_c_DisplayClass19_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::NameOptions_c_DisplayClass19_1__Class** type_info = (::app::NameOptions_c_DisplayClass19_1__Class**)(modloader::win::memory::resolve_rva(0x04746890)); }
    namespace OptionsScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::OptionsScreen__Class** type_info = (::app::OptionsScreen__Class**)(modloader::win::memory::resolve_rva(0x04773EA0)); }
    namespace OptionsScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::OptionsScreen_c__Class** type_info = (::app::OptionsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04719140)); }
    namespace OptionsScreenTextsManager { IL2CPP_MODLOADER_DLLEXPORT ::app::OptionsScreenTextsManager__Class** type_info = (::app::OptionsScreenTextsManager__Class**)(modloader::win::memory::resolve_rva(0x04719D80)); }
    namespace TranslatedMessageProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::TranslatedMessageProvider__Class** type_info = (::app::TranslatedMessageProvider__Class**)(modloader::win::memory::resolve_rva(0x0474F940)); }
    namespace TranslatedMessageProvider_MessageItem { IL2CPP_MODLOADER_DLLEXPORT ::app::TranslatedMessageProvider_MessageItem__Class** type_info = (::app::TranslatedMessageProvider_MessageItem__Class**)(modloader::win::memory::resolve_rva(0x04782BC8)); }
    namespace Input_Command__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::Input_Command__Enum__Class** type_info = (::app::Input_Command__Enum__Class**)(modloader::win::memory::resolve_rva(0x04740E28)); }
    namespace SpiritShardsShopScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardsShopScreen__Class** type_info = (::app::SpiritShardsShopScreen__Class**)(modloader::win::memory::resolve_rva(0x0475A150)); }
    namespace SpiritShardShopUIItem_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::SpiritShardShopUIItem_Context__Class** type_info = (::app::SpiritShardShopUIItem_Context__Class**)(modloader::win::memory::resolve_rva(0x0477C268)); }
    namespace RaceContentType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceContentType__Enum__Class** type_info = (::app::RaceContentType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04720F78)); }
    namespace LeaderBoardEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderBoardEntry__Class** type_info = (::app::LeaderBoardEntry__Class**)(modloader::win::memory::resolve_rva(0x0472B6B0)); }
    namespace RaceLeaderboardScreen_c { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceLeaderboardScreen_c__Class** type_info = (::app::RaceLeaderboardScreen_c__Class**)(modloader::win::memory::resolve_rva(0x0471FDC8)); }
    namespace RaceSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceSettings__Class** type_info = (::app::RaceSettings__Class**)(modloader::win::memory::resolve_rva(0x04754B88)); }
    namespace INetworkConnectivityChecker { IL2CPP_MODLOADER_DLLEXPORT ::app::INetworkConnectivityChecker__Class** type_info = (::app::INetworkConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x04788438)); }
    namespace LeaderBoardService { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderBoardService__Class** type_info = (::app::LeaderBoardService__Class**)(modloader::win::memory::resolve_rva(0x04722088)); }
    namespace Database { IL2CPP_MODLOADER_DLLEXPORT ::app::Database__Class** type_info = (::app::Database__Class**)(modloader::win::memory::resolve_rva(0x04779A90)); }
    namespace RaceLeaderBoard { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceLeaderBoard__Class** type_info = (::app::RaceLeaderBoard__Class**)(modloader::win::memory::resolve_rva(0x0470E000)); }
    namespace LeaderboardFilter__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::LeaderboardFilter__Enum__Class** type_info = (::app::LeaderboardFilter__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474CB80)); }
    namespace ResolutionOptions { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionOptions__Class** type_info = (::app::ResolutionOptions__Class**)(modloader::win::memory::resolve_rva(0x0477C9B0)); }
    namespace ResolutionOptions_ResolutionEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionOptions_ResolutionEntry__Class** type_info = (::app::ResolutionOptions_ResolutionEntry__Class**)(modloader::win::memory::resolve_rva(0x047738A8)); }
    namespace ResolutionOptions_ResolutionComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionOptions_ResolutionComparer__Class** type_info = (::app::ResolutionOptions_ResolutionComparer__Class**)(modloader::win::memory::resolve_rva(0x0474ACE8)); }
    namespace ResolutionOptions_c_DisplayClass5_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionOptions_c_DisplayClass5_0__Class** type_info = (::app::ResolutionOptions_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x04760B68)); }
    namespace ResolutionOptions_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionOptions_c__Class** type_info = (::app::ResolutionOptions_c__Class**)(modloader::win::memory::resolve_rva(0x04740910)); }
    namespace SettingsScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::SettingsScreen__Class** type_info = (::app::SettingsScreen__Class**)(modloader::win::memory::resolve_rva(0x04729920)); }
    namespace HideWhenMainMenuOpen { IL2CPP_MODLOADER_DLLEXPORT ::app::HideWhenMainMenuOpen__Class** type_info = (::app::HideWhenMainMenuOpen__Class**)(modloader::win::memory::resolve_rva(0x0477B100)); }
    namespace InventoryScreen2 { IL2CPP_MODLOADER_DLLEXPORT ::app::InventoryScreen2__Class** type_info = (::app::InventoryScreen2__Class**)(modloader::win::memory::resolve_rva(0x04729618)); }
    namespace MenuScreenManager_Screens__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_Screens__Enum__Class** type_info = (::app::MenuScreenManager_Screens__Enum__Class**)(modloader::win::memory::resolve_rva(0x04748E10)); }
    namespace MenuScreenManager { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager__Class** type_info = (::app::MenuScreenManager__Class**)(modloader::win::memory::resolve_rva(0x04701420)); }
    namespace ISKipUiBackgroundBlur { IL2CPP_MODLOADER_DLLEXPORT ::app::ISKipUiBackgroundBlur__Class** type_info = (::app::ISKipUiBackgroundBlur__Class**)(modloader::win::memory::resolve_rva(0x04793740)); }
    namespace MenuScreenManager_Screens__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_Screens__Enum__Array__Class** type_info = (::app::MenuScreenManager_Screens__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04778270)); }
    namespace ResumeGameController { IL2CPP_MODLOADER_DLLEXPORT ::app::ResumeGameController__Class** type_info = (::app::ResumeGameController__Class**)(modloader::win::memory::resolve_rva(0x04731E88)); }
    namespace IMenuTab { IL2CPP_MODLOADER_DLLEXPORT ::app::IMenuTab__Class** type_info = (::app::IMenuTab__Class**)(modloader::win::memory::resolve_rva(0x04755B08)); }
    namespace MenuScreenManager_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_c__Class** type_info = (::app::MenuScreenManager_c__Class**)(modloader::win::memory::resolve_rva(0x047542A0)); }
    namespace MenuScreenManager_CallNextFrame_d_93 { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_CallNextFrame_d_93__Class** type_info = (::app::MenuScreenManager_CallNextFrame_d_93__Class**)(modloader::win::memory::resolve_rva(0x047435D0)); }
    namespace MenuScreenManager_c_DisplayClass99_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_c_DisplayClass99_0__Class** type_info = (::app::MenuScreenManager_c_DisplayClass99_0__Class**)(modloader::win::memory::resolve_rva(0x04708DD0)); }
    namespace MenuScreenManager_c_DisplayClass100_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_c_DisplayClass100_0__Class** type_info = (::app::MenuScreenManager_c_DisplayClass100_0__Class**)(modloader::win::memory::resolve_rva(0x0474E8F0)); }
    namespace MenuScreenManager_PostFadeMenuOpen_d_100 { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_PostFadeMenuOpen_d_100__Class** type_info = (::app::MenuScreenManager_PostFadeMenuOpen_d_100__Class**)(modloader::win::memory::resolve_rva(0x0471A238)); }
    namespace MenuScreenManager_c_DisplayClass112_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MenuScreenManager_c_DisplayClass112_0__Class** type_info = (::app::MenuScreenManager_c_DisplayClass112_0__Class**)(modloader::win::memory::resolve_rva(0x0476E280)); }
    namespace PauseScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::PauseScreen__Class** type_info = (::app::PauseScreen__Class**)(modloader::win::memory::resolve_rva(0x0478EEB8)); }
    namespace RacePauseScreen { IL2CPP_MODLOADER_DLLEXPORT ::app::RacePauseScreen__Class** type_info = (::app::RacePauseScreen__Class**)(modloader::win::memory::resolve_rva(0x04735410)); }
    namespace RestartOneLifeMode_RestartingCleanupNextFrame_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class** type_info = (::app::RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class**)(modloader::win::memory::resolve_rva(0x04791950)); }
    namespace ShowInventoryAction_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ShowInventoryAction_c__Class** type_info = (::app::ShowInventoryAction_c__Class**)(modloader::win::memory::resolve_rva(0x04722588)); }
    namespace ISkipCutsceneAction { IL2CPP_MODLOADER_DLLEXPORT ::app::ISkipCutsceneAction__Class** type_info = (::app::ISkipCutsceneAction__Class**)(modloader::win::memory::resolve_rva(0x047620B0)); }
    namespace SkipCutsceneController { IL2CPP_MODLOADER_DLLEXPORT ::app::SkipCutsceneController__Class** type_info = (::app::SkipCutsceneController__Class**)(modloader::win::memory::resolve_rva(0x047993C8)); }
    namespace ISkipCutscene { IL2CPP_MODLOADER_DLLEXPORT ::app::ISkipCutscene__Class** type_info = (::app::ISkipCutscene__Class**)(modloader::win::memory::resolve_rva(0x0474C120)); }
    namespace SceneManagerScene { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneManagerScene__Class** type_info = (::app::SceneManagerScene__Class**)(modloader::win::memory::resolve_rva(0x0474D758)); }
    namespace SkipCutsceneController_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SkipCutsceneController_c__Class** type_info = (::app::SkipCutsceneController_c__Class**)(modloader::win::memory::resolve_rva(0x04757CD8)); }
    namespace TitleScreenPressStartLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::TitleScreenPressStartLogic__Class** type_info = (::app::TitleScreenPressStartLogic__Class**)(modloader::win::memory::resolve_rva(0x04725BC0)); }
    namespace WaitForSaveGameLogic { IL2CPP_MODLOADER_DLLEXPORT ::app::WaitForSaveGameLogic__Class** type_info = (::app::WaitForSaveGameLogic__Class**)(modloader::win::memory::resolve_rva(0x04750728)); }
    namespace WaitForSaveGameLogic_c { IL2CPP_MODLOADER_DLLEXPORT ::app::WaitForSaveGameLogic_c__Class** type_info = (::app::WaitForSaveGameLogic_c__Class**)(modloader::win::memory::resolve_rva(0x04799610)); }
    namespace MetaballRenderer_GridSample { IL2CPP_MODLOADER_DLLEXPORT ::app::MetaballRenderer_GridSample__Class** type_info = (::app::MetaballRenderer_GridSample__Class**)(modloader::win::memory::resolve_rva(0x04734328)); }
    namespace MetaballRenderer_GridSample__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MetaballRenderer_GridSample__Array__Class** type_info = (::app::MetaballRenderer_GridSample__Array__Class**)(modloader::win::memory::resolve_rva(0x04722FD0)); }
    namespace MetaballRenderer_IMetaball { IL2CPP_MODLOADER_DLLEXPORT ::app::MetaballRenderer_IMetaball__Class** type_info = (::app::MetaballRenderer_IMetaball__Class**)(modloader::win::memory::resolve_rva(0x04787DE0)); }
    namespace IRaceSyncable { IL2CPP_MODLOADER_DLLEXPORT ::app::IRaceSyncable__Class** type_info = (::app::IRaceSyncable__Class**)(modloader::win::memory::resolve_rva(0x047162A0)); }
    namespace ScoreResult__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::ScoreResult__Enum__Class** type_info = (::app::ScoreResult__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478FFB8)); }
    namespace RaceStateMachineContext { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceStateMachineContext__Class** type_info = (::app::RaceStateMachineContext__Class**)(modloader::win::memory::resolve_rva(0x0478ACE0)); }
    namespace RaceConfiguration { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceConfiguration__Class** type_info = (::app::RaceConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0475C6A0)); }
    namespace ITrialData { IL2CPP_MODLOADER_DLLEXPORT ::app::ITrialData__Class** type_info = (::app::ITrialData__Class**)(modloader::win::memory::resolve_rva(0x04727680)); }
    namespace ITrialHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ITrialHandler__Class** type_info = (::app::ITrialHandler__Class**)(modloader::win::memory::resolve_rva(0x047907D8)); }
    namespace GhostIndicatorManager { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostIndicatorManager__Class** type_info = (::app::GhostIndicatorManager__Class**)(modloader::win::memory::resolve_rva(0x04742230)); }
    namespace FinishHandlerService { IL2CPP_MODLOADER_DLLEXPORT ::app::FinishHandlerService__Class** type_info = (::app::FinishHandlerService__Class**)(modloader::win::memory::resolve_rva(0x0473CF98)); }
    namespace RacesUiService { IL2CPP_MODLOADER_DLLEXPORT ::app::RacesUiService__Class** type_info = (::app::RacesUiService__Class**)(modloader::win::memory::resolve_rva(0x0472C1B8)); }
    namespace BossRaceHandler_ChallengeFailedFade_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::BossRaceHandler_ChallengeFailedFade_d_15__Class** type_info = (::app::BossRaceHandler_ChallengeFailedFade_d_15__Class**)(modloader::win::memory::resolve_rva(0x0473D6D0)); }
    namespace BossRaceHandler_StartMenuRaceNextFrame_d_20 { IL2CPP_MODLOADER_DLLEXPORT ::app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class** type_info = (::app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class**)(modloader::win::memory::resolve_rva(0x04798BD0)); }
    namespace GhostService { IL2CPP_MODLOADER_DLLEXPORT ::app::GhostService__Class** type_info = (::app::GhostService__Class**)(modloader::win::memory::resolve_rva(0x0474FB78)); }
    namespace HelperGhostController_OnFinishedRoutive_d_9 { IL2CPP_MODLOADER_DLLEXPORT ::app::HelperGhostController_OnFinishedRoutive_d_9__Class** type_info = (::app::HelperGhostController_OnFinishedRoutive_d_9__Class**)(modloader::win::memory::resolve_rva(0x0478D918)); }
    namespace ActionWithDuration { IL2CPP_MODLOADER_DLLEXPORT ::app::ActionWithDuration__Class** type_info = (::app::ActionWithDuration__Class**)(modloader::win::memory::resolve_rva(0x04760B80)); }
    namespace FaderB_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::FaderB_State__Enum__Class** type_info = (::app::FaderB_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04718020)); }
    namespace RaceHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceHandler__Class** type_info = (::app::RaceHandler__Class**)(modloader::win::memory::resolve_rva(0x0475B168)); }
    namespace RaceData { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceData__Class** type_info = (::app::RaceData__Class**)(modloader::win::memory::resolve_rva(0x04779160)); }
    namespace RaceHandler_CreateGhostFolder_d_15 { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceHandler_CreateGhostFolder_d_15__Class** type_info = (::app::RaceHandler_CreateGhostFolder_d_15__Class**)(modloader::win::memory::resolve_rva(0x0474C698)); }
    namespace RaceHandler_StartMenuRaceNextFrame_d_42 { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceHandler_StartMenuRaceNextFrame_d_42__Class** type_info = (::app::RaceHandler_StartMenuRaceNextFrame_d_42__Class**)(modloader::win::memory::resolve_rva(0x047986C0)); }
    namespace FinishHandlerService_c { IL2CPP_MODLOADER_DLLEXPORT ::app::FinishHandlerService_c__Class** type_info = (::app::FinishHandlerService_c__Class**)(modloader::win::memory::resolve_rva(0x0476F280)); }
    namespace RaceBaseState { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceBaseState__Class** type_info = (::app::RaceBaseState__Class**)(modloader::win::memory::resolve_rva(0x04709B38)); }
    namespace RaceSystem_DebugRaceList__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceSystem_DebugRaceList__Enum__Class** type_info = (::app::RaceSystem_DebugRaceList__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476F288)); }
    namespace RaceSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceSystem__Class** type_info = (::app::RaceSystem__Class**)(modloader::win::memory::resolve_rva(0x047354E0)); }
    namespace RaceCountdownState { IL2CPP_MODLOADER_DLLEXPORT ::app::RaceCountdownState__Class** type_info = (::app::RaceCountdownState__Class**)(modloader::win::memory::resolve_rva(0x04710050)); }
}
